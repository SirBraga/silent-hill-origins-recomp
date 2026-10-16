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

// Function: sub_0021CA68
// Address: 0x21ca68 - 0x21d2a0
void sub_0021CA68_0x21ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA68_0x21ca68");
#endif

    switch (ctx->pc) {
        case 0x21ca68u: goto label_21ca68;
        case 0x21ca6cu: goto label_21ca6c;
        case 0x21ca70u: goto label_21ca70;
        case 0x21ca74u: goto label_21ca74;
        case 0x21ca78u: goto label_21ca78;
        case 0x21ca7cu: goto label_21ca7c;
        case 0x21ca80u: goto label_21ca80;
        case 0x21ca84u: goto label_21ca84;
        case 0x21ca88u: goto label_21ca88;
        case 0x21ca8cu: goto label_21ca8c;
        case 0x21ca90u: goto label_21ca90;
        case 0x21ca94u: goto label_21ca94;
        case 0x21ca98u: goto label_21ca98;
        case 0x21ca9cu: goto label_21ca9c;
        case 0x21caa0u: goto label_21caa0;
        case 0x21caa4u: goto label_21caa4;
        case 0x21caa8u: goto label_21caa8;
        case 0x21caacu: goto label_21caac;
        case 0x21cab0u: goto label_21cab0;
        case 0x21cab4u: goto label_21cab4;
        case 0x21cab8u: goto label_21cab8;
        case 0x21cabcu: goto label_21cabc;
        case 0x21cac0u: goto label_21cac0;
        case 0x21cac4u: goto label_21cac4;
        case 0x21cac8u: goto label_21cac8;
        case 0x21caccu: goto label_21cacc;
        case 0x21cad0u: goto label_21cad0;
        case 0x21cad4u: goto label_21cad4;
        case 0x21cad8u: goto label_21cad8;
        case 0x21cadcu: goto label_21cadc;
        case 0x21cae0u: goto label_21cae0;
        case 0x21cae4u: goto label_21cae4;
        case 0x21cae8u: goto label_21cae8;
        case 0x21caecu: goto label_21caec;
        case 0x21caf0u: goto label_21caf0;
        case 0x21caf4u: goto label_21caf4;
        case 0x21caf8u: goto label_21caf8;
        case 0x21cafcu: goto label_21cafc;
        case 0x21cb00u: goto label_21cb00;
        case 0x21cb04u: goto label_21cb04;
        case 0x21cb08u: goto label_21cb08;
        case 0x21cb0cu: goto label_21cb0c;
        case 0x21cb10u: goto label_21cb10;
        case 0x21cb14u: goto label_21cb14;
        case 0x21cb18u: goto label_21cb18;
        case 0x21cb1cu: goto label_21cb1c;
        case 0x21cb20u: goto label_21cb20;
        case 0x21cb24u: goto label_21cb24;
        case 0x21cb28u: goto label_21cb28;
        case 0x21cb2cu: goto label_21cb2c;
        case 0x21cb30u: goto label_21cb30;
        case 0x21cb34u: goto label_21cb34;
        case 0x21cb38u: goto label_21cb38;
        case 0x21cb3cu: goto label_21cb3c;
        case 0x21cb40u: goto label_21cb40;
        case 0x21cb44u: goto label_21cb44;
        case 0x21cb48u: goto label_21cb48;
        case 0x21cb4cu: goto label_21cb4c;
        case 0x21cb50u: goto label_21cb50;
        case 0x21cb54u: goto label_21cb54;
        case 0x21cb58u: goto label_21cb58;
        case 0x21cb5cu: goto label_21cb5c;
        case 0x21cb60u: goto label_21cb60;
        case 0x21cb64u: goto label_21cb64;
        case 0x21cb68u: goto label_21cb68;
        case 0x21cb6cu: goto label_21cb6c;
        case 0x21cb70u: goto label_21cb70;
        case 0x21cb74u: goto label_21cb74;
        case 0x21cb78u: goto label_21cb78;
        case 0x21cb7cu: goto label_21cb7c;
        case 0x21cb80u: goto label_21cb80;
        case 0x21cb84u: goto label_21cb84;
        case 0x21cb88u: goto label_21cb88;
        case 0x21cb8cu: goto label_21cb8c;
        case 0x21cb90u: goto label_21cb90;
        case 0x21cb94u: goto label_21cb94;
        case 0x21cb98u: goto label_21cb98;
        case 0x21cb9cu: goto label_21cb9c;
        case 0x21cba0u: goto label_21cba0;
        case 0x21cba4u: goto label_21cba4;
        case 0x21cba8u: goto label_21cba8;
        case 0x21cbacu: goto label_21cbac;
        case 0x21cbb0u: goto label_21cbb0;
        case 0x21cbb4u: goto label_21cbb4;
        case 0x21cbb8u: goto label_21cbb8;
        case 0x21cbbcu: goto label_21cbbc;
        case 0x21cbc0u: goto label_21cbc0;
        case 0x21cbc4u: goto label_21cbc4;
        case 0x21cbc8u: goto label_21cbc8;
        case 0x21cbccu: goto label_21cbcc;
        case 0x21cbd0u: goto label_21cbd0;
        case 0x21cbd4u: goto label_21cbd4;
        case 0x21cbd8u: goto label_21cbd8;
        case 0x21cbdcu: goto label_21cbdc;
        case 0x21cbe0u: goto label_21cbe0;
        case 0x21cbe4u: goto label_21cbe4;
        case 0x21cbe8u: goto label_21cbe8;
        case 0x21cbecu: goto label_21cbec;
        case 0x21cbf0u: goto label_21cbf0;
        case 0x21cbf4u: goto label_21cbf4;
        case 0x21cbf8u: goto label_21cbf8;
        case 0x21cbfcu: goto label_21cbfc;
        case 0x21cc00u: goto label_21cc00;
        case 0x21cc04u: goto label_21cc04;
        case 0x21cc08u: goto label_21cc08;
        case 0x21cc0cu: goto label_21cc0c;
        case 0x21cc10u: goto label_21cc10;
        case 0x21cc14u: goto label_21cc14;
        case 0x21cc18u: goto label_21cc18;
        case 0x21cc1cu: goto label_21cc1c;
        case 0x21cc20u: goto label_21cc20;
        case 0x21cc24u: goto label_21cc24;
        case 0x21cc28u: goto label_21cc28;
        case 0x21cc2cu: goto label_21cc2c;
        case 0x21cc30u: goto label_21cc30;
        case 0x21cc34u: goto label_21cc34;
        case 0x21cc38u: goto label_21cc38;
        case 0x21cc3cu: goto label_21cc3c;
        case 0x21cc40u: goto label_21cc40;
        case 0x21cc44u: goto label_21cc44;
        case 0x21cc48u: goto label_21cc48;
        case 0x21cc4cu: goto label_21cc4c;
        case 0x21cc50u: goto label_21cc50;
        case 0x21cc54u: goto label_21cc54;
        case 0x21cc58u: goto label_21cc58;
        case 0x21cc5cu: goto label_21cc5c;
        case 0x21cc60u: goto label_21cc60;
        case 0x21cc64u: goto label_21cc64;
        case 0x21cc68u: goto label_21cc68;
        case 0x21cc6cu: goto label_21cc6c;
        case 0x21cc70u: goto label_21cc70;
        case 0x21cc74u: goto label_21cc74;
        case 0x21cc78u: goto label_21cc78;
        case 0x21cc7cu: goto label_21cc7c;
        case 0x21cc80u: goto label_21cc80;
        case 0x21cc84u: goto label_21cc84;
        case 0x21cc88u: goto label_21cc88;
        case 0x21cc8cu: goto label_21cc8c;
        case 0x21cc90u: goto label_21cc90;
        case 0x21cc94u: goto label_21cc94;
        case 0x21cc98u: goto label_21cc98;
        case 0x21cc9cu: goto label_21cc9c;
        case 0x21cca0u: goto label_21cca0;
        case 0x21cca4u: goto label_21cca4;
        case 0x21cca8u: goto label_21cca8;
        case 0x21ccacu: goto label_21ccac;
        case 0x21ccb0u: goto label_21ccb0;
        case 0x21ccb4u: goto label_21ccb4;
        case 0x21ccb8u: goto label_21ccb8;
        case 0x21ccbcu: goto label_21ccbc;
        case 0x21ccc0u: goto label_21ccc0;
        case 0x21ccc4u: goto label_21ccc4;
        case 0x21ccc8u: goto label_21ccc8;
        case 0x21ccccu: goto label_21cccc;
        case 0x21ccd0u: goto label_21ccd0;
        case 0x21ccd4u: goto label_21ccd4;
        case 0x21ccd8u: goto label_21ccd8;
        case 0x21ccdcu: goto label_21ccdc;
        case 0x21cce0u: goto label_21cce0;
        case 0x21cce4u: goto label_21cce4;
        case 0x21cce8u: goto label_21cce8;
        case 0x21ccecu: goto label_21ccec;
        case 0x21ccf0u: goto label_21ccf0;
        case 0x21ccf4u: goto label_21ccf4;
        case 0x21ccf8u: goto label_21ccf8;
        case 0x21ccfcu: goto label_21ccfc;
        case 0x21cd00u: goto label_21cd00;
        case 0x21cd04u: goto label_21cd04;
        case 0x21cd08u: goto label_21cd08;
        case 0x21cd0cu: goto label_21cd0c;
        case 0x21cd10u: goto label_21cd10;
        case 0x21cd14u: goto label_21cd14;
        case 0x21cd18u: goto label_21cd18;
        case 0x21cd1cu: goto label_21cd1c;
        case 0x21cd20u: goto label_21cd20;
        case 0x21cd24u: goto label_21cd24;
        case 0x21cd28u: goto label_21cd28;
        case 0x21cd2cu: goto label_21cd2c;
        case 0x21cd30u: goto label_21cd30;
        case 0x21cd34u: goto label_21cd34;
        case 0x21cd38u: goto label_21cd38;
        case 0x21cd3cu: goto label_21cd3c;
        case 0x21cd40u: goto label_21cd40;
        case 0x21cd44u: goto label_21cd44;
        case 0x21cd48u: goto label_21cd48;
        case 0x21cd4cu: goto label_21cd4c;
        case 0x21cd50u: goto label_21cd50;
        case 0x21cd54u: goto label_21cd54;
        case 0x21cd58u: goto label_21cd58;
        case 0x21cd5cu: goto label_21cd5c;
        case 0x21cd60u: goto label_21cd60;
        case 0x21cd64u: goto label_21cd64;
        case 0x21cd68u: goto label_21cd68;
        case 0x21cd6cu: goto label_21cd6c;
        case 0x21cd70u: goto label_21cd70;
        case 0x21cd74u: goto label_21cd74;
        case 0x21cd78u: goto label_21cd78;
        case 0x21cd7cu: goto label_21cd7c;
        case 0x21cd80u: goto label_21cd80;
        case 0x21cd84u: goto label_21cd84;
        case 0x21cd88u: goto label_21cd88;
        case 0x21cd8cu: goto label_21cd8c;
        case 0x21cd90u: goto label_21cd90;
        case 0x21cd94u: goto label_21cd94;
        case 0x21cd98u: goto label_21cd98;
        case 0x21cd9cu: goto label_21cd9c;
        case 0x21cda0u: goto label_21cda0;
        case 0x21cda4u: goto label_21cda4;
        case 0x21cda8u: goto label_21cda8;
        case 0x21cdacu: goto label_21cdac;
        case 0x21cdb0u: goto label_21cdb0;
        case 0x21cdb4u: goto label_21cdb4;
        case 0x21cdb8u: goto label_21cdb8;
        case 0x21cdbcu: goto label_21cdbc;
        case 0x21cdc0u: goto label_21cdc0;
        case 0x21cdc4u: goto label_21cdc4;
        case 0x21cdc8u: goto label_21cdc8;
        case 0x21cdccu: goto label_21cdcc;
        case 0x21cdd0u: goto label_21cdd0;
        case 0x21cdd4u: goto label_21cdd4;
        case 0x21cdd8u: goto label_21cdd8;
        case 0x21cddcu: goto label_21cddc;
        case 0x21cde0u: goto label_21cde0;
        case 0x21cde4u: goto label_21cde4;
        case 0x21cde8u: goto label_21cde8;
        case 0x21cdecu: goto label_21cdec;
        case 0x21cdf0u: goto label_21cdf0;
        case 0x21cdf4u: goto label_21cdf4;
        case 0x21cdf8u: goto label_21cdf8;
        case 0x21cdfcu: goto label_21cdfc;
        case 0x21ce00u: goto label_21ce00;
        case 0x21ce04u: goto label_21ce04;
        case 0x21ce08u: goto label_21ce08;
        case 0x21ce0cu: goto label_21ce0c;
        case 0x21ce10u: goto label_21ce10;
        case 0x21ce14u: goto label_21ce14;
        case 0x21ce18u: goto label_21ce18;
        case 0x21ce1cu: goto label_21ce1c;
        case 0x21ce20u: goto label_21ce20;
        case 0x21ce24u: goto label_21ce24;
        case 0x21ce28u: goto label_21ce28;
        case 0x21ce2cu: goto label_21ce2c;
        case 0x21ce30u: goto label_21ce30;
        case 0x21ce34u: goto label_21ce34;
        case 0x21ce38u: goto label_21ce38;
        case 0x21ce3cu: goto label_21ce3c;
        case 0x21ce40u: goto label_21ce40;
        case 0x21ce44u: goto label_21ce44;
        case 0x21ce48u: goto label_21ce48;
        case 0x21ce4cu: goto label_21ce4c;
        case 0x21ce50u: goto label_21ce50;
        case 0x21ce54u: goto label_21ce54;
        case 0x21ce58u: goto label_21ce58;
        case 0x21ce5cu: goto label_21ce5c;
        case 0x21ce60u: goto label_21ce60;
        case 0x21ce64u: goto label_21ce64;
        case 0x21ce68u: goto label_21ce68;
        case 0x21ce6cu: goto label_21ce6c;
        case 0x21ce70u: goto label_21ce70;
        case 0x21ce74u: goto label_21ce74;
        case 0x21ce78u: goto label_21ce78;
        case 0x21ce7cu: goto label_21ce7c;
        case 0x21ce80u: goto label_21ce80;
        case 0x21ce84u: goto label_21ce84;
        case 0x21ce88u: goto label_21ce88;
        case 0x21ce8cu: goto label_21ce8c;
        case 0x21ce90u: goto label_21ce90;
        case 0x21ce94u: goto label_21ce94;
        case 0x21ce98u: goto label_21ce98;
        case 0x21ce9cu: goto label_21ce9c;
        case 0x21cea0u: goto label_21cea0;
        case 0x21cea4u: goto label_21cea4;
        case 0x21cea8u: goto label_21cea8;
        case 0x21ceacu: goto label_21ceac;
        case 0x21ceb0u: goto label_21ceb0;
        case 0x21ceb4u: goto label_21ceb4;
        case 0x21ceb8u: goto label_21ceb8;
        case 0x21cebcu: goto label_21cebc;
        case 0x21cec0u: goto label_21cec0;
        case 0x21cec4u: goto label_21cec4;
        case 0x21cec8u: goto label_21cec8;
        case 0x21ceccu: goto label_21cecc;
        case 0x21ced0u: goto label_21ced0;
        case 0x21ced4u: goto label_21ced4;
        case 0x21ced8u: goto label_21ced8;
        case 0x21cedcu: goto label_21cedc;
        case 0x21cee0u: goto label_21cee0;
        case 0x21cee4u: goto label_21cee4;
        case 0x21cee8u: goto label_21cee8;
        case 0x21ceecu: goto label_21ceec;
        case 0x21cef0u: goto label_21cef0;
        case 0x21cef4u: goto label_21cef4;
        case 0x21cef8u: goto label_21cef8;
        case 0x21cefcu: goto label_21cefc;
        case 0x21cf00u: goto label_21cf00;
        case 0x21cf04u: goto label_21cf04;
        case 0x21cf08u: goto label_21cf08;
        case 0x21cf0cu: goto label_21cf0c;
        case 0x21cf10u: goto label_21cf10;
        case 0x21cf14u: goto label_21cf14;
        case 0x21cf18u: goto label_21cf18;
        case 0x21cf1cu: goto label_21cf1c;
        case 0x21cf20u: goto label_21cf20;
        case 0x21cf24u: goto label_21cf24;
        case 0x21cf28u: goto label_21cf28;
        case 0x21cf2cu: goto label_21cf2c;
        case 0x21cf30u: goto label_21cf30;
        case 0x21cf34u: goto label_21cf34;
        case 0x21cf38u: goto label_21cf38;
        case 0x21cf3cu: goto label_21cf3c;
        case 0x21cf40u: goto label_21cf40;
        case 0x21cf44u: goto label_21cf44;
        case 0x21cf48u: goto label_21cf48;
        case 0x21cf4cu: goto label_21cf4c;
        case 0x21cf50u: goto label_21cf50;
        case 0x21cf54u: goto label_21cf54;
        case 0x21cf58u: goto label_21cf58;
        case 0x21cf5cu: goto label_21cf5c;
        case 0x21cf60u: goto label_21cf60;
        case 0x21cf64u: goto label_21cf64;
        case 0x21cf68u: goto label_21cf68;
        case 0x21cf6cu: goto label_21cf6c;
        case 0x21cf70u: goto label_21cf70;
        case 0x21cf74u: goto label_21cf74;
        case 0x21cf78u: goto label_21cf78;
        case 0x21cf7cu: goto label_21cf7c;
        case 0x21cf80u: goto label_21cf80;
        case 0x21cf84u: goto label_21cf84;
        case 0x21cf88u: goto label_21cf88;
        case 0x21cf8cu: goto label_21cf8c;
        case 0x21cf90u: goto label_21cf90;
        case 0x21cf94u: goto label_21cf94;
        case 0x21cf98u: goto label_21cf98;
        case 0x21cf9cu: goto label_21cf9c;
        case 0x21cfa0u: goto label_21cfa0;
        case 0x21cfa4u: goto label_21cfa4;
        case 0x21cfa8u: goto label_21cfa8;
        case 0x21cfacu: goto label_21cfac;
        case 0x21cfb0u: goto label_21cfb0;
        case 0x21cfb4u: goto label_21cfb4;
        case 0x21cfb8u: goto label_21cfb8;
        case 0x21cfbcu: goto label_21cfbc;
        case 0x21cfc0u: goto label_21cfc0;
        case 0x21cfc4u: goto label_21cfc4;
        case 0x21cfc8u: goto label_21cfc8;
        case 0x21cfccu: goto label_21cfcc;
        case 0x21cfd0u: goto label_21cfd0;
        case 0x21cfd4u: goto label_21cfd4;
        case 0x21cfd8u: goto label_21cfd8;
        case 0x21cfdcu: goto label_21cfdc;
        case 0x21cfe0u: goto label_21cfe0;
        case 0x21cfe4u: goto label_21cfe4;
        case 0x21cfe8u: goto label_21cfe8;
        case 0x21cfecu: goto label_21cfec;
        case 0x21cff0u: goto label_21cff0;
        case 0x21cff4u: goto label_21cff4;
        case 0x21cff8u: goto label_21cff8;
        case 0x21cffcu: goto label_21cffc;
        case 0x21d000u: goto label_21d000;
        case 0x21d004u: goto label_21d004;
        case 0x21d008u: goto label_21d008;
        case 0x21d00cu: goto label_21d00c;
        case 0x21d010u: goto label_21d010;
        case 0x21d014u: goto label_21d014;
        case 0x21d018u: goto label_21d018;
        case 0x21d01cu: goto label_21d01c;
        case 0x21d020u: goto label_21d020;
        case 0x21d024u: goto label_21d024;
        case 0x21d028u: goto label_21d028;
        case 0x21d02cu: goto label_21d02c;
        case 0x21d030u: goto label_21d030;
        case 0x21d034u: goto label_21d034;
        case 0x21d038u: goto label_21d038;
        case 0x21d03cu: goto label_21d03c;
        case 0x21d040u: goto label_21d040;
        case 0x21d044u: goto label_21d044;
        case 0x21d048u: goto label_21d048;
        case 0x21d04cu: goto label_21d04c;
        case 0x21d050u: goto label_21d050;
        case 0x21d054u: goto label_21d054;
        case 0x21d058u: goto label_21d058;
        case 0x21d05cu: goto label_21d05c;
        case 0x21d060u: goto label_21d060;
        case 0x21d064u: goto label_21d064;
        case 0x21d068u: goto label_21d068;
        case 0x21d06cu: goto label_21d06c;
        case 0x21d070u: goto label_21d070;
        case 0x21d074u: goto label_21d074;
        case 0x21d078u: goto label_21d078;
        case 0x21d07cu: goto label_21d07c;
        case 0x21d080u: goto label_21d080;
        case 0x21d084u: goto label_21d084;
        case 0x21d088u: goto label_21d088;
        case 0x21d08cu: goto label_21d08c;
        case 0x21d090u: goto label_21d090;
        case 0x21d094u: goto label_21d094;
        case 0x21d098u: goto label_21d098;
        case 0x21d09cu: goto label_21d09c;
        case 0x21d0a0u: goto label_21d0a0;
        case 0x21d0a4u: goto label_21d0a4;
        case 0x21d0a8u: goto label_21d0a8;
        case 0x21d0acu: goto label_21d0ac;
        case 0x21d0b0u: goto label_21d0b0;
        case 0x21d0b4u: goto label_21d0b4;
        case 0x21d0b8u: goto label_21d0b8;
        case 0x21d0bcu: goto label_21d0bc;
        case 0x21d0c0u: goto label_21d0c0;
        case 0x21d0c4u: goto label_21d0c4;
        case 0x21d0c8u: goto label_21d0c8;
        case 0x21d0ccu: goto label_21d0cc;
        case 0x21d0d0u: goto label_21d0d0;
        case 0x21d0d4u: goto label_21d0d4;
        case 0x21d0d8u: goto label_21d0d8;
        case 0x21d0dcu: goto label_21d0dc;
        case 0x21d0e0u: goto label_21d0e0;
        case 0x21d0e4u: goto label_21d0e4;
        case 0x21d0e8u: goto label_21d0e8;
        case 0x21d0ecu: goto label_21d0ec;
        case 0x21d0f0u: goto label_21d0f0;
        case 0x21d0f4u: goto label_21d0f4;
        case 0x21d0f8u: goto label_21d0f8;
        case 0x21d0fcu: goto label_21d0fc;
        case 0x21d100u: goto label_21d100;
        case 0x21d104u: goto label_21d104;
        case 0x21d108u: goto label_21d108;
        case 0x21d10cu: goto label_21d10c;
        case 0x21d110u: goto label_21d110;
        case 0x21d114u: goto label_21d114;
        case 0x21d118u: goto label_21d118;
        case 0x21d11cu: goto label_21d11c;
        case 0x21d120u: goto label_21d120;
        case 0x21d124u: goto label_21d124;
        case 0x21d128u: goto label_21d128;
        case 0x21d12cu: goto label_21d12c;
        case 0x21d130u: goto label_21d130;
        case 0x21d134u: goto label_21d134;
        case 0x21d138u: goto label_21d138;
        case 0x21d13cu: goto label_21d13c;
        case 0x21d140u: goto label_21d140;
        case 0x21d144u: goto label_21d144;
        case 0x21d148u: goto label_21d148;
        case 0x21d14cu: goto label_21d14c;
        case 0x21d150u: goto label_21d150;
        case 0x21d154u: goto label_21d154;
        case 0x21d158u: goto label_21d158;
        case 0x21d15cu: goto label_21d15c;
        case 0x21d160u: goto label_21d160;
        case 0x21d164u: goto label_21d164;
        case 0x21d168u: goto label_21d168;
        case 0x21d16cu: goto label_21d16c;
        case 0x21d170u: goto label_21d170;
        case 0x21d174u: goto label_21d174;
        case 0x21d178u: goto label_21d178;
        case 0x21d17cu: goto label_21d17c;
        case 0x21d180u: goto label_21d180;
        case 0x21d184u: goto label_21d184;
        case 0x21d188u: goto label_21d188;
        case 0x21d18cu: goto label_21d18c;
        case 0x21d190u: goto label_21d190;
        case 0x21d194u: goto label_21d194;
        case 0x21d198u: goto label_21d198;
        case 0x21d19cu: goto label_21d19c;
        case 0x21d1a0u: goto label_21d1a0;
        case 0x21d1a4u: goto label_21d1a4;
        case 0x21d1a8u: goto label_21d1a8;
        case 0x21d1acu: goto label_21d1ac;
        case 0x21d1b0u: goto label_21d1b0;
        case 0x21d1b4u: goto label_21d1b4;
        case 0x21d1b8u: goto label_21d1b8;
        case 0x21d1bcu: goto label_21d1bc;
        case 0x21d1c0u: goto label_21d1c0;
        case 0x21d1c4u: goto label_21d1c4;
        case 0x21d1c8u: goto label_21d1c8;
        case 0x21d1ccu: goto label_21d1cc;
        case 0x21d1d0u: goto label_21d1d0;
        case 0x21d1d4u: goto label_21d1d4;
        case 0x21d1d8u: goto label_21d1d8;
        case 0x21d1dcu: goto label_21d1dc;
        case 0x21d1e0u: goto label_21d1e0;
        case 0x21d1e4u: goto label_21d1e4;
        case 0x21d1e8u: goto label_21d1e8;
        case 0x21d1ecu: goto label_21d1ec;
        case 0x21d1f0u: goto label_21d1f0;
        case 0x21d1f4u: goto label_21d1f4;
        case 0x21d1f8u: goto label_21d1f8;
        case 0x21d1fcu: goto label_21d1fc;
        case 0x21d200u: goto label_21d200;
        case 0x21d204u: goto label_21d204;
        case 0x21d208u: goto label_21d208;
        case 0x21d20cu: goto label_21d20c;
        case 0x21d210u: goto label_21d210;
        case 0x21d214u: goto label_21d214;
        case 0x21d218u: goto label_21d218;
        case 0x21d21cu: goto label_21d21c;
        case 0x21d220u: goto label_21d220;
        case 0x21d224u: goto label_21d224;
        case 0x21d228u: goto label_21d228;
        case 0x21d22cu: goto label_21d22c;
        case 0x21d230u: goto label_21d230;
        case 0x21d234u: goto label_21d234;
        case 0x21d238u: goto label_21d238;
        case 0x21d23cu: goto label_21d23c;
        case 0x21d240u: goto label_21d240;
        case 0x21d244u: goto label_21d244;
        case 0x21d248u: goto label_21d248;
        case 0x21d24cu: goto label_21d24c;
        case 0x21d250u: goto label_21d250;
        case 0x21d254u: goto label_21d254;
        case 0x21d258u: goto label_21d258;
        case 0x21d25cu: goto label_21d25c;
        case 0x21d260u: goto label_21d260;
        case 0x21d264u: goto label_21d264;
        case 0x21d268u: goto label_21d268;
        case 0x21d26cu: goto label_21d26c;
        case 0x21d270u: goto label_21d270;
        case 0x21d274u: goto label_21d274;
        case 0x21d278u: goto label_21d278;
        case 0x21d27cu: goto label_21d27c;
        case 0x21d280u: goto label_21d280;
        case 0x21d284u: goto label_21d284;
        case 0x21d288u: goto label_21d288;
        case 0x21d28cu: goto label_21d28c;
        case 0x21d290u: goto label_21d290;
        case 0x21d294u: goto label_21d294;
        case 0x21d298u: goto label_21d298;
        case 0x21d29cu: goto label_21d29c;
        default: break;
    }

    ctx->pc = 0x21ca68u;

label_21ca68:
    // 0x21ca68: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x21ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_21ca6c:
    // 0x21ca6c: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x21ca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_21ca70:
    // 0x21ca70: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x21ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_21ca74:
    // 0x21ca74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ca74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ca78:
    // 0x21ca78: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x21ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_21ca7c:
    // 0x21ca7c: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x21ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_21ca80:
    // 0x21ca80: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x21ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_21ca84:
    // 0x21ca84: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x21ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_21ca88:
    // 0x21ca88: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x21ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_21ca8c:
    // 0x21ca8c: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x21ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_21ca90:
    // 0x21ca90: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x21ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_21ca94:
    // 0x21ca94: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x21ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_21ca98:
    // 0x21ca98: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x21ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_21ca9c:
    // 0x21ca9c: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x21ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_21caa0:
    // 0x21caa0: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x21caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_21caa4:
    // 0x21caa4: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x21caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_21caa8:
    // 0x21caa8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x21caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_21caac:
    // 0x21caac: 0x8e420140  lw          $v0, 0x140($s2)
    ctx->pc = 0x21caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
label_21cab0:
    // 0x21cab0: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x21cab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21cab4:
    // 0x21cab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21cab8:
    // 0x21cab8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_21cabc:
    if (ctx->pc == 0x21CABCu) {
        ctx->pc = 0x21CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB8u;
        // 0x21cabc: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAC0u;
        goto label_21cac0;
    }
    ctx->pc = 0x21CAB8u;
    {
        const bool branch_taken_0x21cab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB8u;
        // 0x21cabc: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cab8) {
            ctx->pc = 0x21CB28u;
            goto label_21cb28;
        }
    }
    ctx->pc = 0x21CAC0u;
label_21cac0:
    // 0x21cac0: 0x1000000c  b           . + 4 + (0xC << 2)
label_21cac4:
    if (ctx->pc == 0x21CAC4u) {
        ctx->pc = 0x21CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC0u;
        // 0x21cac4: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAC8u;
        goto label_21cac8;
    }
    ctx->pc = 0x21CAC0u;
    {
        const bool branch_taken_0x21cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC0u;
        // 0x21cac4: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cac0) {
            ctx->pc = 0x21CAF4u;
            goto label_21caf4;
        }
    }
    ctx->pc = 0x21CAC8u;
label_21cac8:
    // 0x21cac8: 0x40f809  jalr        $v0
label_21cacc:
    if (ctx->pc == 0x21CACCu) {
        ctx->pc = 0x21CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC8u;
        // 0x21cacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAD0u;
        goto label_21cad0;
    }
    ctx->pc = 0x21CAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CAD0u);
        ctx->pc = 0x21CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC8u;
        // 0x21cacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CAC8u, 0x21CAD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CAD0u;
label_21cad0:
    // 0x21cad0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21cad4:
    if (ctx->pc == 0x21CAD4u) {
        ctx->pc = 0x21CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD0u;
        // 0x21cad4: 0x8e450090  lw          $a1, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAD8u;
        goto label_21cad8;
    }
    ctx->pc = 0x21CAD0u;
    {
        const bool branch_taken_0x21cad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cad0) {
            ctx->pc = 0x21CAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CAD0u;
            // 0x21cad4: 0x8e450090  lw          $a1, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CAE0u;
            goto label_21cae0;
        }
    }
    ctx->pc = 0x21CAD8u;
label_21cad8:
    // 0x21cad8: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_21cadc:
    if (ctx->pc == 0x21CADCu) {
        ctx->pc = 0x21CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD8u;
        // 0x21cadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAE0u;
        goto label_21cae0;
    }
    ctx->pc = 0x21CAD8u;
    {
        const bool branch_taken_0x21cad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD8u;
        // 0x21cadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cad8) {
            ctx->pc = 0x21D26Cu;
            goto label_21d26c;
        }
    }
    ctx->pc = 0x21CAE0u;
label_21cae0:
    // 0x21cae0: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_21cae4:
    // 0x21cae4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x21cae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21cae8:
    // 0x21cae8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_21caec:
    if (ctx->pc == 0x21CAECu) {
        ctx->pc = 0x21CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAE8u;
        // 0x21caec: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAF0u;
        goto label_21caf0;
    }
    ctx->pc = 0x21CAE8u;
    {
        const bool branch_taken_0x21cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cae8) {
            ctx->pc = 0x21CAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CAE8u;
            // 0x21caec: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB2Cu;
            goto label_21cb2c;
        }
    }
    ctx->pc = 0x21CAF0u;
label_21caf0:
    // 0x21caf0: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x21caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_21caf4:
    // 0x21caf4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x21caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_21caf8:
    // 0x21caf8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_21cafc:
    if (ctx->pc == 0x21CAFCu) {
        ctx->pc = 0x21CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAF8u;
        // 0x21cafc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB00u;
        goto label_21cb00;
    }
    ctx->pc = 0x21CAF8u;
    {
        const bool branch_taken_0x21caf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAF8u;
        // 0x21cafc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21caf8) {
            ctx->pc = 0x21CB28u;
            goto label_21cb28;
        }
    }
    ctx->pc = 0x21CB00u;
label_21cb00:
    // 0x21cb00: 0x54a4fff1  bnel        $a1, $a0, . + 4 + (-0xF << 2)
label_21cb04:
    if (ctx->pc == 0x21CB04u) {
        ctx->pc = 0x21CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB00u;
        // 0x21cb04: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB08u;
        goto label_21cb08;
    }
    ctx->pc = 0x21CB00u;
    {
        const bool branch_taken_0x21cb00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x21cb00) {
            ctx->pc = 0x21CB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB00u;
            // 0x21cb04: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cac8;
        }
    }
    ctx->pc = 0x21CB08u;
label_21cb08:
    // 0x21cb08: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x21cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_21cb0c:
    // 0x21cb0c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x21cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_21cb10:
    // 0x21cb10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21cb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21cb14:
    // 0x21cb14: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x21cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_21cb18:
    // 0x21cb18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21cb1c:
    // 0x21cb1c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x21cb1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_21cb20:
    // 0x21cb20: 0x5060ffe9  beql        $v1, $zero, . + 4 + (-0x17 << 2)
label_21cb24:
    if (ctx->pc == 0x21CB24u) {
        ctx->pc = 0x21CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB20u;
        // 0x21cb24: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB28u;
        goto label_21cb28;
    }
    ctx->pc = 0x21CB20u;
    {
        const bool branch_taken_0x21cb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb20) {
            ctx->pc = 0x21CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB20u;
            // 0x21cb24: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cac8;
        }
    }
    ctx->pc = 0x21CB28u;
label_21cb28:
    // 0x21cb28: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x21cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21cb2c:
    // 0x21cb2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21cb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cb30:
    // 0x21cb30: 0x184001c6  blez        $v0, . + 4 + (0x1C6 << 2)
label_21cb34:
    if (ctx->pc == 0x21CB34u) {
        ctx->pc = 0x21CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB30u;
        // 0x21cb34: 0x8e5700d8  lw          $s7, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB38u;
        goto label_21cb38;
    }
    ctx->pc = 0x21CB30u;
    {
        const bool branch_taken_0x21cb30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB30u;
        // 0x21cb34: 0x8e5700d8  lw          $s7, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb30) {
            ctx->pc = 0x21D24Cu;
            goto label_21d24c;
        }
    }
    ctx->pc = 0x21CB38u;
label_21cb38:
    // 0x21cb38: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x21cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_21cb3c:
    // 0x21cb3c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21cb40:
    // 0x21cb40: 0x26e40054  addiu       $a0, $s7, 0x54
    ctx->pc = 0x21cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 84));
label_21cb44:
    // 0x21cb44: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x21cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_21cb48:
    // 0x21cb48: 0x104001bb  beqz        $v0, . + 4 + (0x1BB << 2)
label_21cb4c:
    if (ctx->pc == 0x21CB4Cu) {
        ctx->pc = 0x21CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB48u;
        // 0x21cb4c: 0xafa40130  sw          $a0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB50u;
        goto label_21cb50;
    }
    ctx->pc = 0x21CB48u;
    {
        const bool branch_taken_0x21cb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB48u;
        // 0x21cb4c: 0xafa40130  sw          $a0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb48) {
            ctx->pc = 0x21D238u;
            goto label_21d238;
        }
    }
    ctx->pc = 0x21CB50u;
label_21cb50:
    // 0x21cb50: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x21cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_21cb54:
    // 0x21cb54: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x21cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_21cb58:
    // 0x21cb58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21cb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21cb5c:
    // 0x21cb5c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x21cb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_21cb60:
    // 0x21cb60: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21cb64:
    if (ctx->pc == 0x21CB64u) {
        ctx->pc = 0x21CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB60u;
        // 0x21cb64: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB68u;
        goto label_21cb68;
    }
    ctx->pc = 0x21CB60u;
    {
        const bool branch_taken_0x21cb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb60) {
            ctx->pc = 0x21CB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB60u;
            // 0x21cb64: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB80u;
            goto label_21cb80;
        }
    }
    ctx->pc = 0x21CB68u;
label_21cb68:
    // 0x21cb68: 0x8ee7000c  lw          $a3, 0xC($s7)
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_21cb6c:
    // 0x21cb6c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x21cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_21cb70:
    // 0x21cb70: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x21cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
label_21cb74:
    // 0x21cb74: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x21cb74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_21cb78:
    // 0x21cb78: 0x1000000c  b           . + 4 + (0xC << 2)
label_21cb7c:
    if (ctx->pc == 0x21CB7Cu) {
        ctx->pc = 0x21CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB78u;
        // 0x21cb7c: 0x8fa80094  lw          $t0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB80u;
        goto label_21cb80;
    }
    ctx->pc = 0x21CB78u;
    {
        const bool branch_taken_0x21cb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB78u;
        // 0x21cb7c: 0x8fa80094  lw          $t0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb78) {
            ctx->pc = 0x21CBACu;
            goto label_21cbac;
        }
    }
    ctx->pc = 0x21CB80u;
label_21cb80:
    // 0x21cb80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cb84:
    // 0x21cb84: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x21cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_21cb88:
    // 0x21cb88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_21cb8c:
    if (ctx->pc == 0x21CB8Cu) {
        ctx->pc = 0x21CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB88u;
        // 0x21cb8c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB90u;
        goto label_21cb90;
    }
    ctx->pc = 0x21CB88u;
    {
        const bool branch_taken_0x21cb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb88) {
            ctx->pc = 0x21CB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB88u;
            // 0x21cb8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB90u;
            goto label_21cb90;
        }
    }
    ctx->pc = 0x21CB90u;
label_21cb90:
    // 0x21cb90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21cb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21cb94:
    // 0x21cb94: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x21cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_21cb98:
    // 0x21cb98: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x21cb98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_21cb9c:
    // 0x21cb9c: 0x1810  mfhi        $v1
    ctx->pc = 0x21cb9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21cba0:
    // 0x21cba0: 0x63100b  movn        $v0, $v1, $v1
    ctx->pc = 0x21cba0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_21cba4:
    // 0x21cba4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x21cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_21cba8:
    // 0x21cba8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21cba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21cbac:
    // 0x21cbac: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_21cbb0:
    if (ctx->pc == 0x21CBB0u) {
        ctx->pc = 0x21CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBACu;
        // 0x21cbb0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CBB4u;
        goto label_21cbb4;
    }
    ctx->pc = 0x21CBACu;
    {
        const bool branch_taken_0x21cbac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBACu;
        // 0x21cbb0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbac) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CBB4u;
label_21cbb4:
    // 0x21cbb4: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x21cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_21cbb8:
    // 0x21cbb8: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x21cbb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21cbbc:
    // 0x21cbbc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21cbc0:
    // 0x21cbc0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x21cbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21cbc4:
    // 0x21cbc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x21cbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_21cbc8:
    // 0x21cbc8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x21cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21cbcc:
    // 0x21cbcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21cbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cbd0:
    // 0x21cbd0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x21cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_21cbd4:
    // 0x21cbd4: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x21cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_21cbd8:
    // 0x21cbd8: 0x3012  mflo        $a2
    ctx->pc = 0x21cbd8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_21cbdc:
    // 0x21cbdc: 0x40f809  jalr        $v0
label_21cbe0:
    if (ctx->pc == 0x21CBE0u) {
        ctx->pc = 0x21CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBDCu;
        // 0x21cbe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CBE4u;
        goto label_21cbe4;
    }
    ctx->pc = 0x21CBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CBE4u);
        ctx->pc = 0x21CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBDCu;
        // 0x21cbe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CBDCu, 0x21CBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CBE4u;
label_21cbe4:
    // 0x21cbe4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x21cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_21cbe8:
    // 0x21cbe8: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x21cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_21cbec:
    // 0x21cbec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21cbf0:
    // 0x21cbf0: 0x1000000d  b           . + 4 + (0xD << 2)
label_21cbf4:
    if (ctx->pc == 0x21CBF4u) {
        ctx->pc = 0x21CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBF0u;
        // 0x21cbf4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CBF8u;
        goto label_21cbf8;
    }
    ctx->pc = 0x21CBF0u;
    {
        const bool branch_taken_0x21cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBF0u;
        // 0x21cbf4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbf0) {
            ctx->pc = 0x21CC28u;
            goto label_21cc28;
        }
    }
    ctx->pc = 0x21CBF8u;
label_21cbf8:
    // 0x21cbf8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x21cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21cbfc:
    // 0x21cbfc: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x21cbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21cc00:
    // 0x21cc00: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x21cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_21cc04:
    // 0x21cc04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21cc04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cc08:
    // 0x21cc08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_21cc0c:
    // 0x21cc0c: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x21cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_21cc10:
    // 0x21cc10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cc14:
    // 0x21cc14: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_21cc18:
    // 0x21cc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21cc1c:
    // 0x21cc1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21cc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cc20:
    // 0x21cc20: 0x40f809  jalr        $v0
label_21cc24:
    if (ctx->pc == 0x21CC24u) {
        ctx->pc = 0x21CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC20u;
        // 0x21cc24: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CC28u;
        goto label_21cc28;
    }
    ctx->pc = 0x21CC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CC28u);
        ctx->pc = 0x21CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC20u;
        // 0x21cc24: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC20u, 0x21CC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CC28u;
label_21cc28:
    // 0x21cc28: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x21cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_21cc2c:
    // 0x21cc2c: 0x8ee2004c  lw          $v0, 0x4C($s7)
    ctx->pc = 0x21cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 76)));
label_21cc30:
    // 0x21cc30: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21cc34:
    // 0x21cc34: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_21cc38:
    // 0x21cc38: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x21cc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21cc3c:
    // 0x21cc3c: 0x94470004  lhu         $a3, 0x4($v0)
    ctx->pc = 0x21cc3cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_21cc40:
    // 0x21cc40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21cc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21cc44:
    // 0x21cc44: 0x8cc50070  lw          $a1, 0x70($a2)
    ctx->pc = 0x21cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_21cc48:
    // 0x21cc48: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x21cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_21cc4c:
    // 0x21cc4c: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x21cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
label_21cc50:
    // 0x21cc50: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21cc54:
    // 0x21cc54: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x21cc54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_21cc58:
    // 0x21cc58: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_21cc5c:
    // 0x21cc5c: 0x2073021  addu        $a2, $s0, $a3
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_21cc60:
    // 0x21cc60: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x21cc60u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_21cc64:
    // 0x21cc64: 0xafb10128  sw          $s1, 0x128($sp)
    ctx->pc = 0x21cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 17));
label_21cc68:
    // 0x21cc68: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x21cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
label_21cc6c:
    // 0x21cc6c: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x21cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
label_21cc70:
    // 0x21cc70: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x21cc70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_21cc74:
    // 0x21cc74: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x21cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
label_21cc78:
    // 0x21cc78: 0x26e30054  addiu       $v1, $s7, 0x54
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 84));
label_21cc7c:
    // 0x21cc7c: 0x94450010  lhu         $a1, 0x10($v0)
    ctx->pc = 0x21cc7cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_21cc80:
    // 0x21cc80: 0xffa500d0  sd          $a1, 0xD0($sp)
    ctx->pc = 0x21cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 5));
label_21cc84:
    // 0x21cc84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21cc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cc88:
    // 0x21cc88: 0x94470020  lhu         $a3, 0x20($v0)
    ctx->pc = 0x21cc88u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_21cc8c:
    // 0x21cc8c: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x21cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_21cc90:
    // 0x21cc90: 0xffa700e0  sd          $a3, 0xE0($sp)
    ctx->pc = 0x21cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 7));
label_21cc94:
    // 0x21cc94: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x21cc94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_21cc98:
    // 0x21cc98: 0xffa200d8  sd          $v0, 0xD8($sp)
    ctx->pc = 0x21cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 2));
label_21cc9c:
    // 0x21cc9c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21cca0:
    // 0x21cca0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x21cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_21cca4:
    // 0x21cca4: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x21cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_21cca8:
    // 0x21cca8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x21cca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21ccac:
    // 0x21ccac: 0x18800162  blez        $a0, . + 4 + (0x162 << 2)
label_21ccb0:
    if (ctx->pc == 0x21CCB0u) {
        ctx->pc = 0x21CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCACu;
        // 0x21ccb0: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCB4u;
        goto label_21ccb4;
    }
    ctx->pc = 0x21CCACu;
    {
        const bool branch_taken_0x21ccac = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCACu;
        // 0x21ccb0: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccac) {
            ctx->pc = 0x21D238u;
            goto label_21d238;
        }
    }
    ctx->pc = 0x21CCB4u;
label_21ccb4:
    // 0x21ccb4: 0x0  nop
    ctx->pc = 0x21ccb4u;
    // NOP
label_21ccb8:
    // 0x21ccb8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21ccbc:
    // 0x21ccbc: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x21ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_21ccc0:
    // 0x21ccc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21ccc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ccc4:
    // 0x21ccc4: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x21ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_21ccc8:
    // 0x21ccc8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21cccc:
    // 0x21cccc: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_21ccd0:
    if (ctx->pc == 0x21CCD0u) {
        ctx->pc = 0x21CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCCCu;
        // 0x21ccd0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCD4u;
        goto label_21ccd4;
    }
    ctx->pc = 0x21CCCCu;
    {
        const bool branch_taken_0x21cccc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCCCu;
        // 0x21ccd0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cccc) {
            ctx->pc = 0x21CCE4u;
            goto label_21cce4;
        }
    }
    ctx->pc = 0x21CCD4u;
label_21ccd4:
    // 0x21ccd4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_21ccd8:
    if (ctx->pc == 0x21CCD8u) {
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCDCu;
        goto label_21ccdc;
    }
    ctx->pc = 0x21CCD4u;
    {
        const bool branch_taken_0x21ccd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccd4) {
            ctx->pc = 0x21CCE8u;
            goto label_21cce8;
        }
    }
    ctx->pc = 0x21CCDCu;
label_21ccdc:
    // 0x21ccdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_21cce0:
    if (ctx->pc == 0x21CCE0u) {
        ctx->pc = 0x21CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCDCu;
        // 0x21cce0: 0xafb3009c  sw          $s3, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCE4u;
        goto label_21cce4;
    }
    ctx->pc = 0x21CCDCu;
    {
        const bool branch_taken_0x21ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCDCu;
        // 0x21cce0: 0xafb3009c  sw          $s3, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccdc) {
            ctx->pc = 0x21CCF4u;
            goto label_21ccf4;
        }
    }
    ctx->pc = 0x21CCE4u;
label_21cce4:
    // 0x21cce4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x21cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_21cce8:
    // 0x21cce8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x21cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21ccec:
    // 0x21ccec: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x21ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_21ccf0:
    // 0x21ccf0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x21ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_21ccf4:
    // 0x21ccf4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x21ccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_21ccf8:
    // 0x21ccf8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_21ccfc:
    if (ctx->pc == 0x21CCFCu) {
        ctx->pc = 0x21CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF8u;
        // 0x21ccfc: 0x8fa70094  lw          $a3, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CD00u;
        goto label_21cd00;
    }
    ctx->pc = 0x21CCF8u;
    {
        const bool branch_taken_0x21ccf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF8u;
        // 0x21ccfc: 0x8fa70094  lw          $a3, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccf8) {
            ctx->pc = 0x21CD14u;
            goto label_21cd14;
        }
    }
    ctx->pc = 0x21CD00u;
label_21cd00:
    // 0x21cd00: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x21cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_21cd04:
    // 0x21cd04: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_21cd08:
    if (ctx->pc == 0x21CD08u) {
        ctx->pc = 0x21CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD04u;
        // 0x21cd08: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CD0Cu;
        goto label_21cd0c;
    }
    ctx->pc = 0x21CD04u;
    {
        const bool branch_taken_0x21cd04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD04u;
        // 0x21cd08: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd04) {
            ctx->pc = 0x21CD18u;
            goto label_21cd18;
        }
    }
    ctx->pc = 0x21CD0Cu;
label_21cd0c:
    // 0x21cd0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_21cd10:
    if (ctx->pc == 0x21CD10u) {
        ctx->pc = 0x21CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD0Cu;
        // 0x21cd10: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CD14u;
        goto label_21cd14;
    }
    ctx->pc = 0x21CD0Cu;
    {
        const bool branch_taken_0x21cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD0Cu;
        // 0x21cd10: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd0c) {
            ctx->pc = 0x21CD20u;
            goto label_21cd20;
        }
    }
    ctx->pc = 0x21CD14u;
label_21cd14:
    // 0x21cd14: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_21cd18:
    // 0x21cd18: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x21cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21cd1c:
    // 0x21cd1c: 0x8c5e0004  lw          $fp, 0x4($v0)
    ctx->pc = 0x21cd1cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21cd20:
    // 0x21cd20: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x21cd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_21cd24:
    // 0x21cd24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21cd28:
    // 0x21cd28: 0xdfa700c0  ld          $a3, 0xC0($sp)
    ctx->pc = 0x21cd28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21cd2c:
    // 0x21cd2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21cd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cd30:
    // 0x21cd30: 0x84d60000  lh          $s6, 0x0($a2)
    ctx->pc = 0x21cd30u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_21cd34:
    // 0x21cd34: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x21cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_21cd38:
    // 0x21cd38: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x21cd38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_21cd3c:
    // 0x21cd3c: 0xdfa300e0  ld          $v1, 0xE0($sp)
    ctx->pc = 0x21cd3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_21cd40:
    // 0x21cd40: 0x86740000  lh          $s4, 0x0($s3)
    ctx->pc = 0x21cd40u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_21cd44:
    // 0x21cd44: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x21cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_21cd48:
    // 0x21cd48: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x21cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_21cd4c:
    // 0x21cd4c: 0xdfa400d8  ld          $a0, 0xD8($sp)
    ctx->pc = 0x21cd4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_21cd50:
    // 0x21cd50: 0x87d50000  lh          $s5, 0x0($fp)
    ctx->pc = 0x21cd50u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_21cd54:
    // 0x21cd54: 0xafb600ec  sw          $s6, 0xEC($sp)
    ctx->pc = 0x21cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 22));
label_21cd58:
    // 0x21cd58: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x21cd58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_21cd5c:
    // 0x21cd5c: 0xdfa500c8  ld          $a1, 0xC8($sp)
    ctx->pc = 0x21cd5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_21cd60:
    // 0x21cd60: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x21cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_21cd64:
    // 0x21cd64: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x21cd64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
label_21cd68:
    // 0x21cd68: 0xafb600e8  sw          $s6, 0xE8($sp)
    ctx->pc = 0x21cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 22));
label_21cd6c:
    // 0x21cd6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21cd70:
    // 0x21cd70: 0xafb400f4  sw          $s4, 0xF4($sp)
    ctx->pc = 0x21cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 20));
label_21cd74:
    // 0x21cd74: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x21cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_21cd78:
    // 0x21cd78: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x21cd78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_21cd7c:
    // 0x21cd7c: 0xafb400f0  sw          $s4, 0xF0($sp)
    ctx->pc = 0x21cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 20));
label_21cd80:
    // 0x21cd80: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x21cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_21cd84:
    // 0x21cd84: 0xafb500fc  sw          $s5, 0xFC($sp)
    ctx->pc = 0x21cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 21));
label_21cd88:
    // 0x21cd88: 0xafb500f8  sw          $s5, 0xF8($sp)
    ctx->pc = 0x21cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 21));
label_21cd8c:
    // 0x21cd8c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x21cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_21cd90:
    // 0x21cd90: 0xffa70100  sd          $a3, 0x100($sp)
    ctx->pc = 0x21cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 7));
label_21cd94:
    // 0x21cd94: 0xffa20108  sd          $v0, 0x108($sp)
    ctx->pc = 0x21cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 2));
label_21cd98:
    // 0x21cd98: 0xffa30110  sd          $v1, 0x110($sp)
    ctx->pc = 0x21cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 3));
label_21cd9c:
    // 0x21cd9c: 0xffa40118  sd          $a0, 0x118($sp)
    ctx->pc = 0x21cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 4));
label_21cda0:
    // 0x21cda0: 0xffa50120  sd          $a1, 0x120($sp)
    ctx->pc = 0x21cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 5));
label_21cda4:
    // 0x21cda4: 0x0  nop
    ctx->pc = 0x21cda4u;
    // NOP
label_21cda8:
    // 0x21cda8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cdac:
    // 0x21cdac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21cdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21cdb0:
    // 0x21cdb0: 0xc084892  jal         func_212248
label_21cdb4:
    if (ctx->pc == 0x21CDB4u) {
        ctx->pc = 0x21CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDB0u;
        // 0x21cdb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CDB8u;
        goto label_21cdb8;
    }
    ctx->pc = 0x21CDB0u;
    SET_GPR_U32(ctx, 31, 0x21CDB8u);
    ctx->pc = 0x21CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CDB0u;
    // 0x21cdb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212248u, 0x21CDB0u, 0x21CDB8u)) {
        return;
    }
    ctx->pc = 0x21CDB8u;
label_21cdb8:
    // 0x21cdb8: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_21cdbc:
    // 0x21cdbc: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x21cdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_21cdc0:
    // 0x21cdc0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x21cdc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_21cdc4:
    // 0x21cdc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21cdc8:
    if (ctx->pc == 0x21CDC8u) {
        ctx->pc = 0x21CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDC4u;
        // 0x21cdc8: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CDCCu;
        goto label_21cdcc;
    }
    ctx->pc = 0x21CDC4u;
    {
        const bool branch_taken_0x21cdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDC4u;
        // 0x21cdc8: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cdc4) {
            ctx->pc = 0x21CDD8u;
            goto label_21cdd8;
        }
    }
    ctx->pc = 0x21CDCCu;
label_21cdcc:
    // 0x21cdcc: 0x86740080  lh          $s4, 0x80($s3)
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 128)));
label_21cdd0:
    // 0x21cdd0: 0x84560080  lh          $s6, 0x80($v0)
    ctx->pc = 0x21cdd0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_21cdd4:
    // 0x21cdd4: 0x87d50080  lh          $s5, 0x80($fp)
    ctx->pc = 0x21cdd4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 128)));
label_21cdd8:
    // 0x21cdd8: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x21cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_21cddc:
    // 0x21cddc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x21cddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21cde0:
    // 0x21cde0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_21cde4:
    if (ctx->pc == 0x21CDE4u) {
        ctx->pc = 0x21CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDE0u;
        // 0x21cde4: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CDE8u;
        goto label_21cde8;
    }
    ctx->pc = 0x21CDE0u;
    {
        const bool branch_taken_0x21cde0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDE0u;
        // 0x21cde4: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cde0) {
            ctx->pc = 0x21CE90u;
            goto label_21ce90;
        }
    }
    ctx->pc = 0x21CDE8u;
label_21cde8:
    // 0x21cde8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_21cdec:
    if (ctx->pc == 0x21CDECu) {
        ctx->pc = 0x21CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDE8u;
        // 0x21cdec: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CDF0u;
        goto label_21cdf0;
    }
    ctx->pc = 0x21CDE8u;
    {
        const bool branch_taken_0x21cde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDE8u;
        // 0x21cdec: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cde8) {
            ctx->pc = 0x21CE94u;
            goto label_21ce94;
        }
    }
    ctx->pc = 0x21CDF0u;
label_21cdf0:
    // 0x21cdf0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x21cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_21cdf4:
    // 0x21cdf4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x21cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_21cdf8:
    // 0x21cdf8: 0x942823  subu        $a1, $a0, $s4
    ctx->pc = 0x21cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_21cdfc:
    // 0x21cdfc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x21cdfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21ce00:
    // 0x21ce00: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x21ce00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_21ce04:
    // 0x21ce04: 0x1012  mflo        $v0
    ctx->pc = 0x21ce04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21ce08:
    // 0x21ce08: 0x2810  mfhi        $a1
    ctx->pc = 0x21ce08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21ce0c:
    // 0x21ce0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21ce10:
    // 0x21ce10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21ce14:
    // 0x21ce14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_21ce18:
    // 0x21ce18: 0xc07e4e4  jal         func_1F9390
label_21ce1c:
    if (ctx->pc == 0x21CE1Cu) {
        ctx->pc = 0x21CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE18u;
        // 0x21ce1c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE20u;
        goto label_21ce20;
    }
    ctx->pc = 0x21CE18u;
    SET_GPR_U32(ctx, 31, 0x21CE20u);
    ctx->pc = 0x21CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE18u;
    // 0x21ce1c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x21CE18u, 0x21CE20u)) {
        return;
    }
    ctx->pc = 0x21CE20u;
label_21ce20:
    // 0x21ce20: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_21ce24:
    if (ctx->pc == 0x21CE24u) {
        ctx->pc = 0x21CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE20u;
        // 0x21ce24: 0xdfa300c0  ld          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE28u;
        goto label_21ce28;
    }
    ctx->pc = 0x21CE20u;
    {
        const bool branch_taken_0x21ce20 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE20u;
        // 0x21ce24: 0xdfa300c0  ld          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce20) {
            ctx->pc = 0x21CE58u;
            goto label_21ce58;
        }
    }
    ctx->pc = 0x21CE28u;
label_21ce28:
    // 0x21ce28: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x21ce28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_21ce2c:
    // 0x21ce2c: 0x321f8  dsll        $a0, $v1, 7
    ctx->pc = 0x21ce2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 7);
label_21ce30:
    // 0x21ce30: 0xc0ca2b8  jal         func_328AE0
label_21ce34:
    if (ctx->pc == 0x21CE34u) {
        ctx->pc = 0x21CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE30u;
        // 0x21ce34: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE38u;
        goto label_21ce38;
    }
    ctx->pc = 0x21CE30u;
    SET_GPR_U32(ctx, 31, 0x21CE38u);
    ctx->pc = 0x21CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE30u;
    // 0x21ce34: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21CE30u, 0x21CE38u)) {
        return;
    }
    ctx->pc = 0x21CE38u;
label_21ce38:
    // 0x21ce38: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21ce38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21ce3c:
    // 0x21ce3c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21ce3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21ce40:
    // 0x21ce40: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_21ce44:
    if (ctx->pc == 0x21CE44u) {
        ctx->pc = 0x21CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE40u;
        // 0x21ce44: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE48u;
        goto label_21ce48;
    }
    ctx->pc = 0x21CE40u;
    {
        const bool branch_taken_0x21ce40 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE40u;
        // 0x21ce44: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce40) {
            ctx->pc = 0x21CE8Cu;
            goto label_21ce8c;
        }
    }
    ctx->pc = 0x21CE48u;
label_21ce48:
    // 0x21ce48: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21ce4c:
    // 0x21ce4c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21ce4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21ce50:
    // 0x21ce50: 0x1000000e  b           . + 4 + (0xE << 2)
label_21ce54:
    if (ctx->pc == 0x21CE54u) {
        ctx->pc = 0x21CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE50u;
        // 0x21ce54: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE58u;
        goto label_21ce58;
    }
    ctx->pc = 0x21CE50u;
    {
        const bool branch_taken_0x21ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE50u;
        // 0x21ce54: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce50) {
            ctx->pc = 0x21CE8Cu;
            goto label_21ce8c;
        }
    }
    ctx->pc = 0x21CE58u;
label_21ce58:
    // 0x21ce58: 0xdfa500c0  ld          $a1, 0xC0($sp)
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21ce5c:
    // 0x21ce5c: 0x521f8  dsll        $a0, $a1, 7
    ctx->pc = 0x21ce5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 7);
label_21ce60:
    // 0x21ce60: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_21ce64:
    // 0x21ce64: 0xc0ca2b8  jal         func_328AE0
label_21ce68:
    if (ctx->pc == 0x21CE68u) {
        ctx->pc = 0x21CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE64u;
        // 0x21ce68: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE6Cu;
        goto label_21ce6c;
    }
    ctx->pc = 0x21CE64u;
    SET_GPR_U32(ctx, 31, 0x21CE6Cu);
    ctx->pc = 0x21CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE64u;
    // 0x21ce68: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21CE64u, 0x21CE6Cu)) {
        return;
    }
    ctx->pc = 0x21CE6Cu;
label_21ce6c:
    // 0x21ce6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21ce6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21ce70:
    // 0x21ce70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21ce70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21ce74:
    // 0x21ce74: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_21ce78:
    if (ctx->pc == 0x21CE78u) {
        ctx->pc = 0x21CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE74u;
        // 0x21ce78: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE7Cu;
        goto label_21ce7c;
    }
    ctx->pc = 0x21CE74u;
    {
        const bool branch_taken_0x21ce74 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE74u;
        // 0x21ce78: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce74) {
            ctx->pc = 0x21CE88u;
            goto label_21ce88;
        }
    }
    ctx->pc = 0x21CE7Cu;
label_21ce7c:
    // 0x21ce7c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21ce80:
    // 0x21ce80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21ce80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21ce84:
    // 0x21ce84: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21ce84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_21ce88:
    // 0x21ce88: 0x42023  negu        $a0, $a0
    ctx->pc = 0x21ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21ce8c:
    // 0x21ce8c: 0xa7a40002  sh          $a0, 0x2($sp)
    ctx->pc = 0x21ce8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 4));
label_21ce90:
    // 0x21ce90: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x21ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_21ce94:
    // 0x21ce94: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x21ce94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_21ce98:
    // 0x21ce98: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_21ce9c:
    if (ctx->pc == 0x21CE9Cu) {
        ctx->pc = 0x21CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE98u;
        // 0x21ce9c: 0x87a20010  lh          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEA0u;
        goto label_21cea0;
    }
    ctx->pc = 0x21CE98u;
    {
        const bool branch_taken_0x21ce98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE98u;
        // 0x21ce9c: 0x87a20010  lh          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce98) {
            ctx->pc = 0x21CF4Cu;
            goto label_21cf4c;
        }
    }
    ctx->pc = 0x21CEA0u;
label_21cea0:
    // 0x21cea0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_21cea4:
    if (ctx->pc == 0x21CEA4u) {
        ctx->pc = 0x21CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEA0u;
        // 0x21cea4: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEA8u;
        goto label_21cea8;
    }
    ctx->pc = 0x21CEA0u;
    {
        const bool branch_taken_0x21cea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEA0u;
        // 0x21cea4: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cea0) {
            ctx->pc = 0x21CF50u;
            goto label_21cf50;
        }
    }
    ctx->pc = 0x21CEA8u;
label_21cea8:
    // 0x21cea8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21ceac:
    // 0x21ceac: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_21ceb0:
    // 0x21ceb0: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_21ceb4:
    // 0x21ceb4: 0xe22823  subu        $a1, $a3, $v0
    ctx->pc = 0x21ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_21ceb8:
    // 0x21ceb8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x21ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_21cebc:
    // 0x21cebc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x21cebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21cec0:
    // 0x21cec0: 0x1012  mflo        $v0
    ctx->pc = 0x21cec0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21cec4:
    // 0x21cec4: 0x2810  mfhi        $a1
    ctx->pc = 0x21cec4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21cec8:
    // 0x21cec8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21cecc:
    // 0x21cecc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21ceccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21ced0:
    // 0x21ced0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_21ced4:
    // 0x21ced4: 0xc07e4e4  jal         func_1F9390
label_21ced8:
    if (ctx->pc == 0x21CED8u) {
        ctx->pc = 0x21CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CED4u;
        // 0x21ced8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEDCu;
        goto label_21cedc;
    }
    ctx->pc = 0x21CED4u;
    SET_GPR_U32(ctx, 31, 0x21CEDCu);
    ctx->pc = 0x21CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CED4u;
    // 0x21ced8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x21CED4u, 0x21CEDCu)) {
        return;
    }
    ctx->pc = 0x21CEDCu;
label_21cedc:
    // 0x21cedc: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_21cee0:
    if (ctx->pc == 0x21CEE0u) {
        ctx->pc = 0x21CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEDCu;
        // 0x21cee0: 0xdfa300d0  ld          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEE4u;
        goto label_21cee4;
    }
    ctx->pc = 0x21CEDCu;
    {
        const bool branch_taken_0x21cedc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEDCu;
        // 0x21cee0: 0xdfa300d0  ld          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cedc) {
            ctx->pc = 0x21CF14u;
            goto label_21cf14;
        }
    }
    ctx->pc = 0x21CEE4u;
label_21cee4:
    // 0x21cee4: 0xdfa50108  ld          $a1, 0x108($sp)
    ctx->pc = 0x21cee4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_21cee8:
    // 0x21cee8: 0x321f8  dsll        $a0, $v1, 7
    ctx->pc = 0x21cee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 7);
label_21ceec:
    // 0x21ceec: 0xc0ca2b8  jal         func_328AE0
label_21cef0:
    if (ctx->pc == 0x21CEF0u) {
        ctx->pc = 0x21CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEECu;
        // 0x21cef0: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEF4u;
        goto label_21cef4;
    }
    ctx->pc = 0x21CEECu;
    SET_GPR_U32(ctx, 31, 0x21CEF4u);
    ctx->pc = 0x21CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEECu;
    // 0x21cef0: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21CEECu, 0x21CEF4u)) {
        return;
    }
    ctx->pc = 0x21CEF4u;
label_21cef4:
    // 0x21cef4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21cef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21cef8:
    // 0x21cef8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21cef8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21cefc:
    // 0x21cefc: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_21cf00:
    if (ctx->pc == 0x21CF00u) {
        ctx->pc = 0x21CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEFCu;
        // 0x21cf00: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF04u;
        goto label_21cf04;
    }
    ctx->pc = 0x21CEFCu;
    {
        const bool branch_taken_0x21cefc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEFCu;
        // 0x21cf00: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cefc) {
            ctx->pc = 0x21CF48u;
            goto label_21cf48;
        }
    }
    ctx->pc = 0x21CF04u;
label_21cf04:
    // 0x21cf04: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21cf08:
    // 0x21cf08: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21cf08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21cf0c:
    // 0x21cf0c: 0x1000000e  b           . + 4 + (0xE << 2)
label_21cf10:
    if (ctx->pc == 0x21CF10u) {
        ctx->pc = 0x21CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF0Cu;
        // 0x21cf10: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF14u;
        goto label_21cf14;
    }
    ctx->pc = 0x21CF0Cu;
    {
        const bool branch_taken_0x21cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF0Cu;
        // 0x21cf10: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf0c) {
            ctx->pc = 0x21CF48u;
            goto label_21cf48;
        }
    }
    ctx->pc = 0x21CF14u;
label_21cf14:
    // 0x21cf14: 0xdfa500d0  ld          $a1, 0xD0($sp)
    ctx->pc = 0x21cf14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_21cf18:
    // 0x21cf18: 0x521f8  dsll        $a0, $a1, 7
    ctx->pc = 0x21cf18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 7);
label_21cf1c:
    // 0x21cf1c: 0xdfa50108  ld          $a1, 0x108($sp)
    ctx->pc = 0x21cf1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_21cf20:
    // 0x21cf20: 0xc0ca2b8  jal         func_328AE0
label_21cf24:
    if (ctx->pc == 0x21CF24u) {
        ctx->pc = 0x21CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF20u;
        // 0x21cf24: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF28u;
        goto label_21cf28;
    }
    ctx->pc = 0x21CF20u;
    SET_GPR_U32(ctx, 31, 0x21CF28u);
    ctx->pc = 0x21CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF20u;
    // 0x21cf24: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21CF20u, 0x21CF28u)) {
        return;
    }
    ctx->pc = 0x21CF28u;
label_21cf28:
    // 0x21cf28: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21cf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21cf2c:
    // 0x21cf2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21cf2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21cf30:
    // 0x21cf30: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_21cf34:
    if (ctx->pc == 0x21CF34u) {
        ctx->pc = 0x21CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF30u;
        // 0x21cf34: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF38u;
        goto label_21cf38;
    }
    ctx->pc = 0x21CF30u;
    {
        const bool branch_taken_0x21cf30 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF30u;
        // 0x21cf34: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf30) {
            ctx->pc = 0x21CF44u;
            goto label_21cf44;
        }
    }
    ctx->pc = 0x21CF38u;
label_21cf38:
    // 0x21cf38: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21cf3c:
    // 0x21cf3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21cf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21cf40:
    // 0x21cf40: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21cf40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_21cf44:
    // 0x21cf44: 0x42023  negu        $a0, $a0
    ctx->pc = 0x21cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21cf48:
    // 0x21cf48: 0xa7a40010  sh          $a0, 0x10($sp)
    ctx->pc = 0x21cf48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 4));
label_21cf4c:
    // 0x21cf4c: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x21cf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_21cf50:
    // 0x21cf50: 0x8cd0000c  lw          $s0, 0xC($a2)
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_21cf54:
    // 0x21cf54: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_21cf58:
    if (ctx->pc == 0x21CF58u) {
        ctx->pc = 0x21CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF54u;
        // 0x21cf58: 0x87a20020  lh          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF5Cu;
        goto label_21cf5c;
    }
    ctx->pc = 0x21CF54u;
    {
        const bool branch_taken_0x21cf54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF54u;
        // 0x21cf58: 0x87a20020  lh          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf54) {
            ctx->pc = 0x21D014u;
            goto label_21d014;
        }
    }
    ctx->pc = 0x21CF5Cu;
label_21cf5c:
    // 0x21cf5c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_21cf60:
    if (ctx->pc == 0x21CF60u) {
        ctx->pc = 0x21CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF5Cu;
        // 0x21cf60: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF64u;
        goto label_21cf64;
    }
    ctx->pc = 0x21CF5Cu;
    {
        const bool branch_taken_0x21cf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF5Cu;
        // 0x21cf60: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf5c) {
            ctx->pc = 0x21D018u;
            goto label_21d018;
        }
    }
    ctx->pc = 0x21CF64u;
label_21cf64:
    // 0x21cf64: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21cf68:
    // 0x21cf68: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x21cf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_21cf6c:
    // 0x21cf6c: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x21cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_21cf70:
    // 0x21cf70: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x21cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_21cf74:
    // 0x21cf74: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x21cf74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_21cf78:
    // 0x21cf78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21cf7c:
    // 0x21cf7c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x21cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cf80:
    // 0x21cf80: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21cf84:
    // 0x21cf84: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x21cf84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21cf88:
    // 0x21cf88: 0x1012  mflo        $v0
    ctx->pc = 0x21cf88u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21cf8c:
    // 0x21cf8c: 0x2810  mfhi        $a1
    ctx->pc = 0x21cf8cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21cf90:
    // 0x21cf90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21cf94:
    // 0x21cf94: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21cf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21cf98:
    // 0x21cf98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21cf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_21cf9c:
    // 0x21cf9c: 0xc07e4e4  jal         func_1F9390
label_21cfa0:
    if (ctx->pc == 0x21CFA0u) {
        ctx->pc = 0x21CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF9Cu;
        // 0x21cfa0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CFA4u;
        goto label_21cfa4;
    }
    ctx->pc = 0x21CF9Cu;
    SET_GPR_U32(ctx, 31, 0x21CFA4u);
    ctx->pc = 0x21CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF9Cu;
    // 0x21cfa0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x21CF9Cu, 0x21CFA4u)) {
        return;
    }
    ctx->pc = 0x21CFA4u;
label_21cfa4:
    // 0x21cfa4: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_21cfa8:
    if (ctx->pc == 0x21CFA8u) {
        ctx->pc = 0x21CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFA4u;
        // 0x21cfa8: 0xdfa300e0  ld          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CFACu;
        goto label_21cfac;
    }
    ctx->pc = 0x21CFA4u;
    {
        const bool branch_taken_0x21cfa4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFA4u;
        // 0x21cfa8: 0xdfa300e0  ld          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfa4) {
            ctx->pc = 0x21CFDCu;
            goto label_21cfdc;
        }
    }
    ctx->pc = 0x21CFACu;
label_21cfac:
    // 0x21cfac: 0xdfa50110  ld          $a1, 0x110($sp)
    ctx->pc = 0x21cfacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_21cfb0:
    // 0x21cfb0: 0x321f8  dsll        $a0, $v1, 7
    ctx->pc = 0x21cfb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 7);
label_21cfb4:
    // 0x21cfb4: 0xc0ca2b8  jal         func_328AE0
label_21cfb8:
    if (ctx->pc == 0x21CFB8u) {
        ctx->pc = 0x21CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFB4u;
        // 0x21cfb8: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CFBCu;
        goto label_21cfbc;
    }
    ctx->pc = 0x21CFB4u;
    SET_GPR_U32(ctx, 31, 0x21CFBCu);
    ctx->pc = 0x21CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFB4u;
    // 0x21cfb8: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21CFB4u, 0x21CFBCu)) {
        return;
    }
    ctx->pc = 0x21CFBCu;
label_21cfbc:
    // 0x21cfbc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21cfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21cfc0:
    // 0x21cfc0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21cfc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21cfc4:
    // 0x21cfc4: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_21cfc8:
    if (ctx->pc == 0x21CFC8u) {
        ctx->pc = 0x21CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFC4u;
        // 0x21cfc8: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CFCCu;
        goto label_21cfcc;
    }
    ctx->pc = 0x21CFC4u;
    {
        const bool branch_taken_0x21cfc4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFC4u;
        // 0x21cfc8: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfc4) {
            ctx->pc = 0x21D010u;
            goto label_21d010;
        }
    }
    ctx->pc = 0x21CFCCu;
label_21cfcc:
    // 0x21cfcc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21cfd0:
    // 0x21cfd0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21cfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21cfd4:
    // 0x21cfd4: 0x1000000e  b           . + 4 + (0xE << 2)
label_21cfd8:
    if (ctx->pc == 0x21CFD8u) {
        ctx->pc = 0x21CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFD4u;
        // 0x21cfd8: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CFDCu;
        goto label_21cfdc;
    }
    ctx->pc = 0x21CFD4u;
    {
        const bool branch_taken_0x21cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFD4u;
        // 0x21cfd8: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfd4) {
            ctx->pc = 0x21D010u;
            goto label_21d010;
        }
    }
    ctx->pc = 0x21CFDCu;
label_21cfdc:
    // 0x21cfdc: 0xdfa500e0  ld          $a1, 0xE0($sp)
    ctx->pc = 0x21cfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_21cfe0:
    // 0x21cfe0: 0x521f8  dsll        $a0, $a1, 7
    ctx->pc = 0x21cfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 7);
label_21cfe4:
    // 0x21cfe4: 0xdfa50110  ld          $a1, 0x110($sp)
    ctx->pc = 0x21cfe4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_21cfe8:
    // 0x21cfe8: 0xc0ca2b8  jal         func_328AE0
label_21cfec:
    if (ctx->pc == 0x21CFECu) {
        ctx->pc = 0x21CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFE8u;
        // 0x21cfec: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CFF0u;
        goto label_21cff0;
    }
    ctx->pc = 0x21CFE8u;
    SET_GPR_U32(ctx, 31, 0x21CFF0u);
    ctx->pc = 0x21CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFE8u;
    // 0x21cfec: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21CFE8u, 0x21CFF0u)) {
        return;
    }
    ctx->pc = 0x21CFF0u;
label_21cff0:
    // 0x21cff0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21cff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21cff4:
    // 0x21cff4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21cff4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21cff8:
    // 0x21cff8: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_21cffc:
    if (ctx->pc == 0x21CFFCu) {
        ctx->pc = 0x21CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFF8u;
        // 0x21cffc: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D000u;
        goto label_21d000;
    }
    ctx->pc = 0x21CFF8u;
    {
        const bool branch_taken_0x21cff8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFF8u;
        // 0x21cffc: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cff8) {
            ctx->pc = 0x21D00Cu;
            goto label_21d00c;
        }
    }
    ctx->pc = 0x21D000u;
label_21d000:
    // 0x21d000: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21d004:
    // 0x21d004: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21d004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d008:
    // 0x21d008: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21d008u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_21d00c:
    // 0x21d00c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x21d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21d010:
    // 0x21d010: 0xa7a40020  sh          $a0, 0x20($sp)
    ctx->pc = 0x21d010u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 4));
label_21d014:
    // 0x21d014: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_21d018:
    // 0x21d018: 0x8cd00010  lw          $s0, 0x10($a2)
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_21d01c:
    // 0x21d01c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_21d020:
    if (ctx->pc == 0x21D020u) {
        ctx->pc = 0x21D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D01Cu;
        // 0x21d020: 0x87a20012  lh          $v0, 0x12($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D024u;
        goto label_21d024;
    }
    ctx->pc = 0x21D01Cu;
    {
        const bool branch_taken_0x21d01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D01Cu;
        // 0x21d020: 0x87a20012  lh          $v0, 0x12($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d01c) {
            ctx->pc = 0x21D0D8u;
            goto label_21d0d8;
        }
    }
    ctx->pc = 0x21D024u;
label_21d024:
    // 0x21d024: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21d028:
    if (ctx->pc == 0x21D028u) {
        ctx->pc = 0x21D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D024u;
        // 0x21d028: 0x8fa700b4  lw          $a3, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D02Cu;
        goto label_21d02c;
    }
    ctx->pc = 0x21D024u;
    {
        const bool branch_taken_0x21d024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D024u;
        // 0x21d028: 0x8fa700b4  lw          $a3, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d024) {
            ctx->pc = 0x21D0DCu;
            goto label_21d0dc;
        }
    }
    ctx->pc = 0x21D02Cu;
label_21d02c:
    // 0x21d02c: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x21d02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_21d030:
    // 0x21d030: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21d034:
    // 0x21d034: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_21d038:
    // 0x21d038: 0xf62823  subu        $a1, $a3, $s6
    ctx->pc = 0x21d038u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_21d03c:
    // 0x21d03c: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x21d03cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_21d040:
    // 0x21d040: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x21d040u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21d044:
    // 0x21d044: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x21d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_21d048:
    // 0x21d048: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x21d048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21d04c:
    // 0x21d04c: 0x1812  mflo        $v1
    ctx->pc = 0x21d04cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_21d050:
    // 0x21d050: 0x2810  mfhi        $a1
    ctx->pc = 0x21d050u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21d054:
    // 0x21d054: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21d054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21d058:
    // 0x21d058: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21d058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21d05c:
    // 0x21d05c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21d05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21d060:
    // 0x21d060: 0xc07e4e4  jal         func_1F9390
label_21d064:
    if (ctx->pc == 0x21D064u) {
        ctx->pc = 0x21D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D060u;
        // 0x21d064: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D068u;
        goto label_21d068;
    }
    ctx->pc = 0x21D060u;
    SET_GPR_U32(ctx, 31, 0x21D068u);
    ctx->pc = 0x21D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D060u;
    // 0x21d064: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x21D060u, 0x21D068u)) {
        return;
    }
    ctx->pc = 0x21D068u;
label_21d068:
    // 0x21d068: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_21d06c:
    if (ctx->pc == 0x21D06Cu) {
        ctx->pc = 0x21D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D068u;
        // 0x21d06c: 0xdfa500d8  ld          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D070u;
        goto label_21d070;
    }
    ctx->pc = 0x21D068u;
    {
        const bool branch_taken_0x21d068 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D068u;
        // 0x21d06c: 0xdfa500d8  ld          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d068) {
            ctx->pc = 0x21D0A0u;
            goto label_21d0a0;
        }
    }
    ctx->pc = 0x21D070u;
label_21d070:
    // 0x21d070: 0x521f8  dsll        $a0, $a1, 7
    ctx->pc = 0x21d070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 7);
label_21d074:
    // 0x21d074: 0xdfa50118  ld          $a1, 0x118($sp)
    ctx->pc = 0x21d074u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_21d078:
    // 0x21d078: 0xc0ca2b8  jal         func_328AE0
label_21d07c:
    if (ctx->pc == 0x21D07Cu) {
        ctx->pc = 0x21D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D078u;
        // 0x21d07c: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D080u;
        goto label_21d080;
    }
    ctx->pc = 0x21D078u;
    SET_GPR_U32(ctx, 31, 0x21D080u);
    ctx->pc = 0x21D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D078u;
    // 0x21d07c: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21D078u, 0x21D080u)) {
        return;
    }
    ctx->pc = 0x21D080u;
label_21d080:
    // 0x21d080: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21d080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21d084:
    // 0x21d084: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21d084u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21d088:
    // 0x21d088: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_21d08c:
    if (ctx->pc == 0x21D08Cu) {
        ctx->pc = 0x21D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D088u;
        // 0x21d08c: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D090u;
        goto label_21d090;
    }
    ctx->pc = 0x21D088u;
    {
        const bool branch_taken_0x21d088 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D088u;
        // 0x21d08c: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d088) {
            ctx->pc = 0x21D0D4u;
            goto label_21d0d4;
        }
    }
    ctx->pc = 0x21D090u;
label_21d090:
    // 0x21d090: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21d094:
    // 0x21d094: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21d094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d098:
    // 0x21d098: 0x1000000e  b           . + 4 + (0xE << 2)
label_21d09c:
    if (ctx->pc == 0x21D09Cu) {
        ctx->pc = 0x21D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D098u;
        // 0x21d09c: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D0A0u;
        goto label_21d0a0;
    }
    ctx->pc = 0x21D098u;
    {
        const bool branch_taken_0x21d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D098u;
        // 0x21d09c: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d098) {
            ctx->pc = 0x21D0D4u;
            goto label_21d0d4;
        }
    }
    ctx->pc = 0x21D0A0u;
label_21d0a0:
    // 0x21d0a0: 0xdfa600d8  ld          $a2, 0xD8($sp)
    ctx->pc = 0x21d0a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_21d0a4:
    // 0x21d0a4: 0xdfa50118  ld          $a1, 0x118($sp)
    ctx->pc = 0x21d0a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_21d0a8:
    // 0x21d0a8: 0x621f8  dsll        $a0, $a2, 7
    ctx->pc = 0x21d0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 7);
label_21d0ac:
    // 0x21d0ac: 0xc0ca2b8  jal         func_328AE0
label_21d0b0:
    if (ctx->pc == 0x21D0B0u) {
        ctx->pc = 0x21D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0ACu;
        // 0x21d0b0: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D0B4u;
        goto label_21d0b4;
    }
    ctx->pc = 0x21D0ACu;
    SET_GPR_U32(ctx, 31, 0x21D0B4u);
    ctx->pc = 0x21D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0ACu;
    // 0x21d0b0: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21D0ACu, 0x21D0B4u)) {
        return;
    }
    ctx->pc = 0x21D0B4u;
label_21d0b4:
    // 0x21d0b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21d0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21d0b8:
    // 0x21d0b8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21d0b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21d0bc:
    // 0x21d0bc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_21d0c0:
    if (ctx->pc == 0x21D0C0u) {
        ctx->pc = 0x21D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0BCu;
        // 0x21d0c0: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D0C4u;
        goto label_21d0c4;
    }
    ctx->pc = 0x21D0BCu;
    {
        const bool branch_taken_0x21d0bc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0BCu;
        // 0x21d0c0: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0bc) {
            ctx->pc = 0x21D0D0u;
            goto label_21d0d0;
        }
    }
    ctx->pc = 0x21D0C4u;
label_21d0c4:
    // 0x21d0c4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21d0c8:
    // 0x21d0c8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d0cc:
    // 0x21d0cc: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21d0ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_21d0d0:
    // 0x21d0d0: 0x42023  negu        $a0, $a0
    ctx->pc = 0x21d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21d0d4:
    // 0x21d0d4: 0xa7a40012  sh          $a0, 0x12($sp)
    ctx->pc = 0x21d0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 4));
label_21d0d8:
    // 0x21d0d8: 0x8fa700b4  lw          $a3, 0xB4($sp)
    ctx->pc = 0x21d0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_21d0dc:
    // 0x21d0dc: 0x8cf00014  lw          $s0, 0x14($a3)
    ctx->pc = 0x21d0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_21d0e0:
    // 0x21d0e0: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_21d0e4:
    if (ctx->pc == 0x21D0E4u) {
        ctx->pc = 0x21D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0E0u;
        // 0x21d0e4: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D0E8u;
        goto label_21d0e8;
    }
    ctx->pc = 0x21D0E0u;
    {
        const bool branch_taken_0x21d0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0E0u;
        // 0x21d0e4: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0e0) {
            ctx->pc = 0x21D19Cu;
            goto label_21d19c;
        }
    }
    ctx->pc = 0x21D0E8u;
label_21d0e8:
    // 0x21d0e8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21d0ec:
    if (ctx->pc == 0x21D0ECu) {
        ctx->pc = 0x21D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0E8u;
        // 0x21d0ec: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D0F0u;
        goto label_21d0f0;
    }
    ctx->pc = 0x21D0E8u;
    {
        const bool branch_taken_0x21d0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0E8u;
        // 0x21d0ec: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0e8) {
            ctx->pc = 0x21D1A0u;
            goto label_21d1a0;
        }
    }
    ctx->pc = 0x21D0F0u;
label_21d0f0:
    // 0x21d0f0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x21d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_21d0f4:
    // 0x21d0f4: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x21d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_21d0f8:
    // 0x21d0f8: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x21d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_21d0fc:
    // 0x21d0fc: 0xdfa400b8  ld          $a0, 0xB8($sp)
    ctx->pc = 0x21d0fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_21d100:
    // 0x21d100: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21d100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21d104:
    // 0x21d104: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x21d104u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21d108:
    // 0x21d108: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21d10c:
    // 0x21d10c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x21d10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21d110:
    // 0x21d110: 0x1012  mflo        $v0
    ctx->pc = 0x21d110u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21d114:
    // 0x21d114: 0x2810  mfhi        $a1
    ctx->pc = 0x21d114u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21d118:
    // 0x21d118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21d11c:
    // 0x21d11c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21d11cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21d120:
    // 0x21d120: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21d120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_21d124:
    // 0x21d124: 0xc07e4e4  jal         func_1F9390
label_21d128:
    if (ctx->pc == 0x21D128u) {
        ctx->pc = 0x21D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D124u;
        // 0x21d128: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D12Cu;
        goto label_21d12c;
    }
    ctx->pc = 0x21D124u;
    SET_GPR_U32(ctx, 31, 0x21D12Cu);
    ctx->pc = 0x21D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D124u;
    // 0x21d128: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x21D124u, 0x21D12Cu)) {
        return;
    }
    ctx->pc = 0x21D12Cu;
label_21d12c:
    // 0x21d12c: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_21d130:
    if (ctx->pc == 0x21D130u) {
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xdfa300c8  ld          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D134u;
        goto label_21d134;
    }
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xdfa300c8  ld          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21D164u;
            goto label_21d164;
        }
    }
    ctx->pc = 0x21D134u;
label_21d134:
    // 0x21d134: 0xdfa50120  ld          $a1, 0x120($sp)
    ctx->pc = 0x21d134u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_21d138:
    // 0x21d138: 0x321f8  dsll        $a0, $v1, 7
    ctx->pc = 0x21d138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 7);
label_21d13c:
    // 0x21d13c: 0xc0ca2b8  jal         func_328AE0
label_21d140:
    if (ctx->pc == 0x21D140u) {
        ctx->pc = 0x21D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D13Cu;
        // 0x21d140: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D144u;
        goto label_21d144;
    }
    ctx->pc = 0x21D13Cu;
    SET_GPR_U32(ctx, 31, 0x21D144u);
    ctx->pc = 0x21D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D13Cu;
    // 0x21d140: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21D13Cu, 0x21D144u)) {
        return;
    }
    ctx->pc = 0x21D144u;
label_21d144:
    // 0x21d144: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21d148:
    // 0x21d148: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21d148u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21d14c:
    // 0x21d14c: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_21d150:
    if (ctx->pc == 0x21D150u) {
        ctx->pc = 0x21D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D14Cu;
        // 0x21d150: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D154u;
        goto label_21d154;
    }
    ctx->pc = 0x21D14Cu;
    {
        const bool branch_taken_0x21d14c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D14Cu;
        // 0x21d150: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d14c) {
            ctx->pc = 0x21D198u;
            goto label_21d198;
        }
    }
    ctx->pc = 0x21D154u;
label_21d154:
    // 0x21d154: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21d158:
    // 0x21d158: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21d158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d15c:
    // 0x21d15c: 0x1000000e  b           . + 4 + (0xE << 2)
label_21d160:
    if (ctx->pc == 0x21D160u) {
        ctx->pc = 0x21D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D15Cu;
        // 0x21d160: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D164u;
        goto label_21d164;
    }
    ctx->pc = 0x21D15Cu;
    {
        const bool branch_taken_0x21d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D15Cu;
        // 0x21d160: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d15c) {
            ctx->pc = 0x21D198u;
            goto label_21d198;
        }
    }
    ctx->pc = 0x21D164u;
label_21d164:
    // 0x21d164: 0xdfa500c8  ld          $a1, 0xC8($sp)
    ctx->pc = 0x21d164u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_21d168:
    // 0x21d168: 0x521f8  dsll        $a0, $a1, 7
    ctx->pc = 0x21d168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 7);
label_21d16c:
    // 0x21d16c: 0xdfa50120  ld          $a1, 0x120($sp)
    ctx->pc = 0x21d16cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_21d170:
    // 0x21d170: 0xc0ca2b8  jal         func_328AE0
label_21d174:
    if (ctx->pc == 0x21D174u) {
        ctx->pc = 0x21D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D170u;
        // 0x21d174: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D178u;
        goto label_21d178;
    }
    ctx->pc = 0x21D170u;
    SET_GPR_U32(ctx, 31, 0x21D178u);
    ctx->pc = 0x21D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D170u;
    // 0x21d174: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21D170u, 0x21D178u)) {
        return;
    }
    ctx->pc = 0x21D178u;
label_21d178:
    // 0x21d178: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21d178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_21d17c:
    // 0x21d17c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21d17cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21d180:
    // 0x21d180: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_21d184:
    if (ctx->pc == 0x21D184u) {
        ctx->pc = 0x21D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D180u;
        // 0x21d184: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D188u;
        goto label_21d188;
    }
    ctx->pc = 0x21D180u;
    {
        const bool branch_taken_0x21d180 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D180u;
        // 0x21d184: 0x2111004  sllv        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d180) {
            ctx->pc = 0x21D194u;
            goto label_21d194;
        }
    }
    ctx->pc = 0x21D188u;
label_21d188:
    // 0x21d188: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21d18c:
    // 0x21d18c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21d18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d190:
    // 0x21d190: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21d190u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_21d194:
    // 0x21d194: 0x42023  negu        $a0, $a0
    ctx->pc = 0x21d194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21d198:
    // 0x21d198: 0xa7a40004  sh          $a0, 0x4($sp)
    ctx->pc = 0x21d198u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 4));
label_21d19c:
    // 0x21d19c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x21d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_21d1a0:
    // 0x21d1a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d1a4:
    // 0x21d1a4: 0x8fa800a4  lw          $t0, 0xA4($sp)
    ctx->pc = 0x21d1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_21d1a8:
    // 0x21d1a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21d1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21d1ac:
    // 0x21d1ac: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x21d1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21d1b0:
    // 0x21d1b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21d1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21d1b4:
    // 0x21d1b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_21d1b8:
    // 0x21d1b8: 0x26730080  addiu       $s3, $s3, 0x80
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_21d1bc:
    // 0x21d1bc: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x21d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_21d1c0:
    // 0x21d1c0: 0x60f809  jalr        $v1
label_21d1c4:
    if (ctx->pc == 0x21D1C4u) {
        ctx->pc = 0x21D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1C0u;
        // 0x21d1c4: 0x27de0080  addiu       $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D1C8u;
        goto label_21d1c8;
    }
    ctx->pc = 0x21D1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21D1C8u);
        ctx->pc = 0x21D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1C0u;
        // 0x21d1c4: 0x27de0080  addiu       $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D1C0u, 0x21D1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D1C8u;
label_21d1c8:
    // 0x21d1c8: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_21d1cc:
    // 0x21d1cc: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_21d1d0:
    // 0x21d1d0: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x21d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_21d1d4:
    // 0x21d1d4: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x21d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21d1d8:
    // 0x21d1d8: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x21d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_21d1dc:
    // 0x21d1dc: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x21d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_21d1e0:
    // 0x21d1e0: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_21d1e4:
    // 0x21d1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21d1e8:
    // 0x21d1e8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_21d1ec:
    // 0x21d1ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21d1f0:
    // 0x21d1f0: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x21d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
label_21d1f4:
    // 0x21d1f4: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x21d1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_21d1f8:
    // 0x21d1f8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x21d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_21d1fc:
    // 0x21d1fc: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x21d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
label_21d200:
    // 0x21d200: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x21d200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_21d204:
    // 0x21d204: 0xafb600ec  sw          $s6, 0xEC($sp)
    ctx->pc = 0x21d204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 22));
label_21d208:
    // 0x21d208: 0xafb400f4  sw          $s4, 0xF4($sp)
    ctx->pc = 0x21d208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 20));
label_21d20c:
    // 0x21d20c: 0xafb500fc  sw          $s5, 0xFC($sp)
    ctx->pc = 0x21d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 21));
label_21d210:
    // 0x21d210: 0x1040fee5  beqz        $v0, . + 4 + (-0x11B << 2)
label_21d214:
    if (ctx->pc == 0x21D214u) {
        ctx->pc = 0x21D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D210u;
        // 0x21d214: 0xafa7009c  sw          $a3, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D218u;
        goto label_21d218;
    }
    ctx->pc = 0x21D210u;
    {
        const bool branch_taken_0x21d210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D210u;
        // 0x21d214: 0xafa7009c  sw          $a3, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d210) {
            ctx->pc = 0x21CDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cda8;
        }
    }
    ctx->pc = 0x21D218u;
label_21d218:
    // 0x21d218: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21d218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21d21c:
    // 0x21d21c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21d220:
    // 0x21d220: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x21d220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_21d224:
    // 0x21d224: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x21d224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_21d228:
    // 0x21d228: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x21d228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21d22c:
    // 0x21d22c: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x21d22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21d230:
    // 0x21d230: 0x1440fea1  bnez        $v0, . + 4 + (-0x15F << 2)
label_21d234:
    if (ctx->pc == 0x21D234u) {
        ctx->pc = 0x21D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D230u;
        // 0x21d234: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D238u;
        goto label_21d238;
    }
    ctx->pc = 0x21D230u;
    {
        const bool branch_taken_0x21d230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D230u;
        // 0x21d234: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d230) {
            ctx->pc = 0x21CCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ccb8;
        }
    }
    ctx->pc = 0x21D238u;
label_21d238:
    // 0x21d238: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21d23c:
    // 0x21d23c: 0x8fb10128  lw          $s1, 0x128($sp)
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_21d240:
    // 0x21d240: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21d240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d244:
    // 0x21d244: 0x1440fe3c  bnez        $v0, . + 4 + (-0x1C4 << 2)
label_21d248:
    if (ctx->pc == 0x21D248u) {
        ctx->pc = 0x21D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D244u;
        // 0x21d248: 0x8fb70130  lw          $s7, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D24Cu;
        goto label_21d24c;
    }
    ctx->pc = 0x21D244u;
    {
        const bool branch_taken_0x21d244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D244u;
        // 0x21d248: 0x8fb70130  lw          $s7, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d244) {
            ctx->pc = 0x21CB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cb38;
        }
    }
    ctx->pc = 0x21D24Cu;
label_21d24c:
    // 0x21d24c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x21d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_21d250:
    // 0x21d250: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21d254:
    // 0x21d254: 0x8e440140  lw          $a0, 0x140($s2)
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
label_21d258:
    // 0x21d258: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21d25c:
    // 0x21d25c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21d260:
    // 0x21d260: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x21d260u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_21d264:
    // 0x21d264: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x21d264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_21d268:
    // 0x21d268: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x21d268u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_21d26c:
    // 0x21d26c: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x21d26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_21d270:
    // 0x21d270: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x21d270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_21d274:
    // 0x21d274: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x21d274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_21d278:
    // 0x21d278: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x21d278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_21d27c:
    // 0x21d27c: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x21d27cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_21d280:
    // 0x21d280: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x21d280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_21d284:
    // 0x21d284: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x21d284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_21d288:
    // 0x21d288: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x21d288u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_21d28c:
    // 0x21d28c: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x21d28cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_21d290:
    // 0x21d290: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x21d290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_21d294:
    // 0x21d294: 0x3e00008  jr          $ra
label_21d298:
    if (ctx->pc == 0x21D298u) {
        ctx->pc = 0x21D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D294u;
        // 0x21d298: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D29Cu;
        goto label_21d29c;
    }
    ctx->pc = 0x21D294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D294u;
        // 0x21d298: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D29Cu;
label_21d29c:
    // 0x21d29c: 0x0  nop
    ctx->pc = 0x21d29cu;
    // NOP
    ctx->pc = 0x21d2a0u;
}
