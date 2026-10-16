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

// Function: sub_002CAA38
// Address: 0x2caa38 - 0x2cb858
void sub_002CAA38_0x2caa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA38_0x2caa38");
#endif

    switch (ctx->pc) {
        case 0x2caa38u: goto label_2caa38;
        case 0x2caa3cu: goto label_2caa3c;
        case 0x2caa40u: goto label_2caa40;
        case 0x2caa44u: goto label_2caa44;
        case 0x2caa48u: goto label_2caa48;
        case 0x2caa4cu: goto label_2caa4c;
        case 0x2caa50u: goto label_2caa50;
        case 0x2caa54u: goto label_2caa54;
        case 0x2caa58u: goto label_2caa58;
        case 0x2caa5cu: goto label_2caa5c;
        case 0x2caa60u: goto label_2caa60;
        case 0x2caa64u: goto label_2caa64;
        case 0x2caa68u: goto label_2caa68;
        case 0x2caa6cu: goto label_2caa6c;
        case 0x2caa70u: goto label_2caa70;
        case 0x2caa74u: goto label_2caa74;
        case 0x2caa78u: goto label_2caa78;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caa80u: goto label_2caa80;
        case 0x2caa84u: goto label_2caa84;
        case 0x2caa88u: goto label_2caa88;
        case 0x2caa8cu: goto label_2caa8c;
        case 0x2caa90u: goto label_2caa90;
        case 0x2caa94u: goto label_2caa94;
        case 0x2caa98u: goto label_2caa98;
        case 0x2caa9cu: goto label_2caa9c;
        case 0x2caaa0u: goto label_2caaa0;
        case 0x2caaa4u: goto label_2caaa4;
        case 0x2caaa8u: goto label_2caaa8;
        case 0x2caaacu: goto label_2caaac;
        case 0x2caab0u: goto label_2caab0;
        case 0x2caab4u: goto label_2caab4;
        case 0x2caab8u: goto label_2caab8;
        case 0x2caabcu: goto label_2caabc;
        case 0x2caac0u: goto label_2caac0;
        case 0x2caac4u: goto label_2caac4;
        case 0x2caac8u: goto label_2caac8;
        case 0x2caaccu: goto label_2caacc;
        case 0x2caad0u: goto label_2caad0;
        case 0x2caad4u: goto label_2caad4;
        case 0x2caad8u: goto label_2caad8;
        case 0x2caadcu: goto label_2caadc;
        case 0x2caae0u: goto label_2caae0;
        case 0x2caae4u: goto label_2caae4;
        case 0x2caae8u: goto label_2caae8;
        case 0x2caaecu: goto label_2caaec;
        case 0x2caaf0u: goto label_2caaf0;
        case 0x2caaf4u: goto label_2caaf4;
        case 0x2caaf8u: goto label_2caaf8;
        case 0x2caafcu: goto label_2caafc;
        case 0x2cab00u: goto label_2cab00;
        case 0x2cab04u: goto label_2cab04;
        case 0x2cab08u: goto label_2cab08;
        case 0x2cab0cu: goto label_2cab0c;
        case 0x2cab10u: goto label_2cab10;
        case 0x2cab14u: goto label_2cab14;
        case 0x2cab18u: goto label_2cab18;
        case 0x2cab1cu: goto label_2cab1c;
        case 0x2cab20u: goto label_2cab20;
        case 0x2cab24u: goto label_2cab24;
        case 0x2cab28u: goto label_2cab28;
        case 0x2cab2cu: goto label_2cab2c;
        case 0x2cab30u: goto label_2cab30;
        case 0x2cab34u: goto label_2cab34;
        case 0x2cab38u: goto label_2cab38;
        case 0x2cab3cu: goto label_2cab3c;
        case 0x2cab40u: goto label_2cab40;
        case 0x2cab44u: goto label_2cab44;
        case 0x2cab48u: goto label_2cab48;
        case 0x2cab4cu: goto label_2cab4c;
        case 0x2cab50u: goto label_2cab50;
        case 0x2cab54u: goto label_2cab54;
        case 0x2cab58u: goto label_2cab58;
        case 0x2cab5cu: goto label_2cab5c;
        case 0x2cab60u: goto label_2cab60;
        case 0x2cab64u: goto label_2cab64;
        case 0x2cab68u: goto label_2cab68;
        case 0x2cab6cu: goto label_2cab6c;
        case 0x2cab70u: goto label_2cab70;
        case 0x2cab74u: goto label_2cab74;
        case 0x2cab78u: goto label_2cab78;
        case 0x2cab7cu: goto label_2cab7c;
        case 0x2cab80u: goto label_2cab80;
        case 0x2cab84u: goto label_2cab84;
        case 0x2cab88u: goto label_2cab88;
        case 0x2cab8cu: goto label_2cab8c;
        case 0x2cab90u: goto label_2cab90;
        case 0x2cab94u: goto label_2cab94;
        case 0x2cab98u: goto label_2cab98;
        case 0x2cab9cu: goto label_2cab9c;
        case 0x2caba0u: goto label_2caba0;
        case 0x2caba4u: goto label_2caba4;
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabacu: goto label_2cabac;
        case 0x2cabb0u: goto label_2cabb0;
        case 0x2cabb4u: goto label_2cabb4;
        case 0x2cabb8u: goto label_2cabb8;
        case 0x2cabbcu: goto label_2cabbc;
        case 0x2cabc0u: goto label_2cabc0;
        case 0x2cabc4u: goto label_2cabc4;
        case 0x2cabc8u: goto label_2cabc8;
        case 0x2cabccu: goto label_2cabcc;
        case 0x2cabd0u: goto label_2cabd0;
        case 0x2cabd4u: goto label_2cabd4;
        case 0x2cabd8u: goto label_2cabd8;
        case 0x2cabdcu: goto label_2cabdc;
        case 0x2cabe0u: goto label_2cabe0;
        case 0x2cabe4u: goto label_2cabe4;
        case 0x2cabe8u: goto label_2cabe8;
        case 0x2cabecu: goto label_2cabec;
        case 0x2cabf0u: goto label_2cabf0;
        case 0x2cabf4u: goto label_2cabf4;
        case 0x2cabf8u: goto label_2cabf8;
        case 0x2cabfcu: goto label_2cabfc;
        case 0x2cac00u: goto label_2cac00;
        case 0x2cac04u: goto label_2cac04;
        case 0x2cac08u: goto label_2cac08;
        case 0x2cac0cu: goto label_2cac0c;
        case 0x2cac10u: goto label_2cac10;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac18u: goto label_2cac18;
        case 0x2cac1cu: goto label_2cac1c;
        case 0x2cac20u: goto label_2cac20;
        case 0x2cac24u: goto label_2cac24;
        case 0x2cac28u: goto label_2cac28;
        case 0x2cac2cu: goto label_2cac2c;
        case 0x2cac30u: goto label_2cac30;
        case 0x2cac34u: goto label_2cac34;
        case 0x2cac38u: goto label_2cac38;
        case 0x2cac3cu: goto label_2cac3c;
        case 0x2cac40u: goto label_2cac40;
        case 0x2cac44u: goto label_2cac44;
        case 0x2cac48u: goto label_2cac48;
        case 0x2cac4cu: goto label_2cac4c;
        case 0x2cac50u: goto label_2cac50;
        case 0x2cac54u: goto label_2cac54;
        case 0x2cac58u: goto label_2cac58;
        case 0x2cac5cu: goto label_2cac5c;
        case 0x2cac60u: goto label_2cac60;
        case 0x2cac64u: goto label_2cac64;
        case 0x2cac68u: goto label_2cac68;
        case 0x2cac6cu: goto label_2cac6c;
        case 0x2cac70u: goto label_2cac70;
        case 0x2cac74u: goto label_2cac74;
        case 0x2cac78u: goto label_2cac78;
        case 0x2cac7cu: goto label_2cac7c;
        case 0x2cac80u: goto label_2cac80;
        case 0x2cac84u: goto label_2cac84;
        case 0x2cac88u: goto label_2cac88;
        case 0x2cac8cu: goto label_2cac8c;
        case 0x2cac90u: goto label_2cac90;
        case 0x2cac94u: goto label_2cac94;
        case 0x2cac98u: goto label_2cac98;
        case 0x2cac9cu: goto label_2cac9c;
        case 0x2caca0u: goto label_2caca0;
        case 0x2caca4u: goto label_2caca4;
        case 0x2caca8u: goto label_2caca8;
        case 0x2cacacu: goto label_2cacac;
        case 0x2cacb0u: goto label_2cacb0;
        case 0x2cacb4u: goto label_2cacb4;
        case 0x2cacb8u: goto label_2cacb8;
        case 0x2cacbcu: goto label_2cacbc;
        case 0x2cacc0u: goto label_2cacc0;
        case 0x2cacc4u: goto label_2cacc4;
        case 0x2cacc8u: goto label_2cacc8;
        case 0x2cacccu: goto label_2caccc;
        case 0x2cacd0u: goto label_2cacd0;
        case 0x2cacd4u: goto label_2cacd4;
        case 0x2cacd8u: goto label_2cacd8;
        case 0x2cacdcu: goto label_2cacdc;
        case 0x2cace0u: goto label_2cace0;
        case 0x2cace4u: goto label_2cace4;
        case 0x2cace8u: goto label_2cace8;
        case 0x2cacecu: goto label_2cacec;
        case 0x2cacf0u: goto label_2cacf0;
        case 0x2cacf4u: goto label_2cacf4;
        case 0x2cacf8u: goto label_2cacf8;
        case 0x2cacfcu: goto label_2cacfc;
        case 0x2cad00u: goto label_2cad00;
        case 0x2cad04u: goto label_2cad04;
        case 0x2cad08u: goto label_2cad08;
        case 0x2cad0cu: goto label_2cad0c;
        case 0x2cad10u: goto label_2cad10;
        case 0x2cad14u: goto label_2cad14;
        case 0x2cad18u: goto label_2cad18;
        case 0x2cad1cu: goto label_2cad1c;
        case 0x2cad20u: goto label_2cad20;
        case 0x2cad24u: goto label_2cad24;
        case 0x2cad28u: goto label_2cad28;
        case 0x2cad2cu: goto label_2cad2c;
        case 0x2cad30u: goto label_2cad30;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad38u: goto label_2cad38;
        case 0x2cad3cu: goto label_2cad3c;
        case 0x2cad40u: goto label_2cad40;
        case 0x2cad44u: goto label_2cad44;
        case 0x2cad48u: goto label_2cad48;
        case 0x2cad4cu: goto label_2cad4c;
        case 0x2cad50u: goto label_2cad50;
        case 0x2cad54u: goto label_2cad54;
        case 0x2cad58u: goto label_2cad58;
        case 0x2cad5cu: goto label_2cad5c;
        case 0x2cad60u: goto label_2cad60;
        case 0x2cad64u: goto label_2cad64;
        case 0x2cad68u: goto label_2cad68;
        case 0x2cad6cu: goto label_2cad6c;
        case 0x2cad70u: goto label_2cad70;
        case 0x2cad74u: goto label_2cad74;
        case 0x2cad78u: goto label_2cad78;
        case 0x2cad7cu: goto label_2cad7c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad84u: goto label_2cad84;
        case 0x2cad88u: goto label_2cad88;
        case 0x2cad8cu: goto label_2cad8c;
        case 0x2cad90u: goto label_2cad90;
        case 0x2cad94u: goto label_2cad94;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cad9cu: goto label_2cad9c;
        case 0x2cada0u: goto label_2cada0;
        case 0x2cada4u: goto label_2cada4;
        case 0x2cada8u: goto label_2cada8;
        case 0x2cadacu: goto label_2cadac;
        case 0x2cadb0u: goto label_2cadb0;
        case 0x2cadb4u: goto label_2cadb4;
        case 0x2cadb8u: goto label_2cadb8;
        case 0x2cadbcu: goto label_2cadbc;
        case 0x2cadc0u: goto label_2cadc0;
        case 0x2cadc4u: goto label_2cadc4;
        case 0x2cadc8u: goto label_2cadc8;
        case 0x2cadccu: goto label_2cadcc;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cadd4u: goto label_2cadd4;
        case 0x2cadd8u: goto label_2cadd8;
        case 0x2caddcu: goto label_2caddc;
        case 0x2cade0u: goto label_2cade0;
        case 0x2cade4u: goto label_2cade4;
        case 0x2cade8u: goto label_2cade8;
        case 0x2cadecu: goto label_2cadec;
        case 0x2cadf0u: goto label_2cadf0;
        case 0x2cadf4u: goto label_2cadf4;
        case 0x2cadf8u: goto label_2cadf8;
        case 0x2cadfcu: goto label_2cadfc;
        case 0x2cae00u: goto label_2cae00;
        case 0x2cae04u: goto label_2cae04;
        case 0x2cae08u: goto label_2cae08;
        case 0x2cae0cu: goto label_2cae0c;
        case 0x2cae10u: goto label_2cae10;
        case 0x2cae14u: goto label_2cae14;
        case 0x2cae18u: goto label_2cae18;
        case 0x2cae1cu: goto label_2cae1c;
        case 0x2cae20u: goto label_2cae20;
        case 0x2cae24u: goto label_2cae24;
        case 0x2cae28u: goto label_2cae28;
        case 0x2cae2cu: goto label_2cae2c;
        case 0x2cae30u: goto label_2cae30;
        case 0x2cae34u: goto label_2cae34;
        case 0x2cae38u: goto label_2cae38;
        case 0x2cae3cu: goto label_2cae3c;
        case 0x2cae40u: goto label_2cae40;
        case 0x2cae44u: goto label_2cae44;
        case 0x2cae48u: goto label_2cae48;
        case 0x2cae4cu: goto label_2cae4c;
        case 0x2cae50u: goto label_2cae50;
        case 0x2cae54u: goto label_2cae54;
        case 0x2cae58u: goto label_2cae58;
        case 0x2cae5cu: goto label_2cae5c;
        case 0x2cae60u: goto label_2cae60;
        case 0x2cae64u: goto label_2cae64;
        case 0x2cae68u: goto label_2cae68;
        case 0x2cae6cu: goto label_2cae6c;
        case 0x2cae70u: goto label_2cae70;
        case 0x2cae74u: goto label_2cae74;
        case 0x2cae78u: goto label_2cae78;
        case 0x2cae7cu: goto label_2cae7c;
        case 0x2cae80u: goto label_2cae80;
        case 0x2cae84u: goto label_2cae84;
        case 0x2cae88u: goto label_2cae88;
        case 0x2cae8cu: goto label_2cae8c;
        case 0x2cae90u: goto label_2cae90;
        case 0x2cae94u: goto label_2cae94;
        case 0x2cae98u: goto label_2cae98;
        case 0x2cae9cu: goto label_2cae9c;
        case 0x2caea0u: goto label_2caea0;
        case 0x2caea4u: goto label_2caea4;
        case 0x2caea8u: goto label_2caea8;
        case 0x2caeacu: goto label_2caeac;
        case 0x2caeb0u: goto label_2caeb0;
        case 0x2caeb4u: goto label_2caeb4;
        case 0x2caeb8u: goto label_2caeb8;
        case 0x2caebcu: goto label_2caebc;
        case 0x2caec0u: goto label_2caec0;
        case 0x2caec4u: goto label_2caec4;
        case 0x2caec8u: goto label_2caec8;
        case 0x2caeccu: goto label_2caecc;
        case 0x2caed0u: goto label_2caed0;
        case 0x2caed4u: goto label_2caed4;
        case 0x2caed8u: goto label_2caed8;
        case 0x2caedcu: goto label_2caedc;
        case 0x2caee0u: goto label_2caee0;
        case 0x2caee4u: goto label_2caee4;
        case 0x2caee8u: goto label_2caee8;
        case 0x2caeecu: goto label_2caeec;
        case 0x2caef0u: goto label_2caef0;
        case 0x2caef4u: goto label_2caef4;
        case 0x2caef8u: goto label_2caef8;
        case 0x2caefcu: goto label_2caefc;
        case 0x2caf00u: goto label_2caf00;
        case 0x2caf04u: goto label_2caf04;
        case 0x2caf08u: goto label_2caf08;
        case 0x2caf0cu: goto label_2caf0c;
        case 0x2caf10u: goto label_2caf10;
        case 0x2caf14u: goto label_2caf14;
        case 0x2caf18u: goto label_2caf18;
        case 0x2caf1cu: goto label_2caf1c;
        case 0x2caf20u: goto label_2caf20;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf28u: goto label_2caf28;
        case 0x2caf2cu: goto label_2caf2c;
        case 0x2caf30u: goto label_2caf30;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf38u: goto label_2caf38;
        case 0x2caf3cu: goto label_2caf3c;
        case 0x2caf40u: goto label_2caf40;
        case 0x2caf44u: goto label_2caf44;
        case 0x2caf48u: goto label_2caf48;
        case 0x2caf4cu: goto label_2caf4c;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf54u: goto label_2caf54;
        case 0x2caf58u: goto label_2caf58;
        case 0x2caf5cu: goto label_2caf5c;
        case 0x2caf60u: goto label_2caf60;
        case 0x2caf64u: goto label_2caf64;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf6cu: goto label_2caf6c;
        case 0x2caf70u: goto label_2caf70;
        case 0x2caf74u: goto label_2caf74;
        case 0x2caf78u: goto label_2caf78;
        case 0x2caf7cu: goto label_2caf7c;
        case 0x2caf80u: goto label_2caf80;
        case 0x2caf84u: goto label_2caf84;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf8cu: goto label_2caf8c;
        case 0x2caf90u: goto label_2caf90;
        case 0x2caf94u: goto label_2caf94;
        case 0x2caf98u: goto label_2caf98;
        case 0x2caf9cu: goto label_2caf9c;
        case 0x2cafa0u: goto label_2cafa0;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cafa8u: goto label_2cafa8;
        case 0x2cafacu: goto label_2cafac;
        case 0x2cafb0u: goto label_2cafb0;
        case 0x2cafb4u: goto label_2cafb4;
        case 0x2cafb8u: goto label_2cafb8;
        case 0x2cafbcu: goto label_2cafbc;
        case 0x2cafc0u: goto label_2cafc0;
        case 0x2cafc4u: goto label_2cafc4;
        case 0x2cafc8u: goto label_2cafc8;
        case 0x2cafccu: goto label_2cafcc;
        case 0x2cafd0u: goto label_2cafd0;
        case 0x2cafd4u: goto label_2cafd4;
        case 0x2cafd8u: goto label_2cafd8;
        case 0x2cafdcu: goto label_2cafdc;
        case 0x2cafe0u: goto label_2cafe0;
        case 0x2cafe4u: goto label_2cafe4;
        case 0x2cafe8u: goto label_2cafe8;
        case 0x2cafecu: goto label_2cafec;
        case 0x2caff0u: goto label_2caff0;
        case 0x2caff4u: goto label_2caff4;
        case 0x2caff8u: goto label_2caff8;
        case 0x2caffcu: goto label_2caffc;
        case 0x2cb000u: goto label_2cb000;
        case 0x2cb004u: goto label_2cb004;
        case 0x2cb008u: goto label_2cb008;
        case 0x2cb00cu: goto label_2cb00c;
        case 0x2cb010u: goto label_2cb010;
        case 0x2cb014u: goto label_2cb014;
        case 0x2cb018u: goto label_2cb018;
        case 0x2cb01cu: goto label_2cb01c;
        case 0x2cb020u: goto label_2cb020;
        case 0x2cb024u: goto label_2cb024;
        case 0x2cb028u: goto label_2cb028;
        case 0x2cb02cu: goto label_2cb02c;
        case 0x2cb030u: goto label_2cb030;
        case 0x2cb034u: goto label_2cb034;
        case 0x2cb038u: goto label_2cb038;
        case 0x2cb03cu: goto label_2cb03c;
        case 0x2cb040u: goto label_2cb040;
        case 0x2cb044u: goto label_2cb044;
        case 0x2cb048u: goto label_2cb048;
        case 0x2cb04cu: goto label_2cb04c;
        case 0x2cb050u: goto label_2cb050;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb058u: goto label_2cb058;
        case 0x2cb05cu: goto label_2cb05c;
        case 0x2cb060u: goto label_2cb060;
        case 0x2cb064u: goto label_2cb064;
        case 0x2cb068u: goto label_2cb068;
        case 0x2cb06cu: goto label_2cb06c;
        case 0x2cb070u: goto label_2cb070;
        case 0x2cb074u: goto label_2cb074;
        case 0x2cb078u: goto label_2cb078;
        case 0x2cb07cu: goto label_2cb07c;
        case 0x2cb080u: goto label_2cb080;
        case 0x2cb084u: goto label_2cb084;
        case 0x2cb088u: goto label_2cb088;
        case 0x2cb08cu: goto label_2cb08c;
        case 0x2cb090u: goto label_2cb090;
        case 0x2cb094u: goto label_2cb094;
        case 0x2cb098u: goto label_2cb098;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0a0u: goto label_2cb0a0;
        case 0x2cb0a4u: goto label_2cb0a4;
        case 0x2cb0a8u: goto label_2cb0a8;
        case 0x2cb0acu: goto label_2cb0ac;
        case 0x2cb0b0u: goto label_2cb0b0;
        case 0x2cb0b4u: goto label_2cb0b4;
        case 0x2cb0b8u: goto label_2cb0b8;
        case 0x2cb0bcu: goto label_2cb0bc;
        case 0x2cb0c0u: goto label_2cb0c0;
        case 0x2cb0c4u: goto label_2cb0c4;
        case 0x2cb0c8u: goto label_2cb0c8;
        case 0x2cb0ccu: goto label_2cb0cc;
        case 0x2cb0d0u: goto label_2cb0d0;
        case 0x2cb0d4u: goto label_2cb0d4;
        case 0x2cb0d8u: goto label_2cb0d8;
        case 0x2cb0dcu: goto label_2cb0dc;
        case 0x2cb0e0u: goto label_2cb0e0;
        case 0x2cb0e4u: goto label_2cb0e4;
        case 0x2cb0e8u: goto label_2cb0e8;
        case 0x2cb0ecu: goto label_2cb0ec;
        case 0x2cb0f0u: goto label_2cb0f0;
        case 0x2cb0f4u: goto label_2cb0f4;
        case 0x2cb0f8u: goto label_2cb0f8;
        case 0x2cb0fcu: goto label_2cb0fc;
        case 0x2cb100u: goto label_2cb100;
        case 0x2cb104u: goto label_2cb104;
        case 0x2cb108u: goto label_2cb108;
        case 0x2cb10cu: goto label_2cb10c;
        case 0x2cb110u: goto label_2cb110;
        case 0x2cb114u: goto label_2cb114;
        case 0x2cb118u: goto label_2cb118;
        case 0x2cb11cu: goto label_2cb11c;
        case 0x2cb120u: goto label_2cb120;
        case 0x2cb124u: goto label_2cb124;
        case 0x2cb128u: goto label_2cb128;
        case 0x2cb12cu: goto label_2cb12c;
        case 0x2cb130u: goto label_2cb130;
        case 0x2cb134u: goto label_2cb134;
        case 0x2cb138u: goto label_2cb138;
        case 0x2cb13cu: goto label_2cb13c;
        case 0x2cb140u: goto label_2cb140;
        case 0x2cb144u: goto label_2cb144;
        case 0x2cb148u: goto label_2cb148;
        case 0x2cb14cu: goto label_2cb14c;
        case 0x2cb150u: goto label_2cb150;
        case 0x2cb154u: goto label_2cb154;
        case 0x2cb158u: goto label_2cb158;
        case 0x2cb15cu: goto label_2cb15c;
        case 0x2cb160u: goto label_2cb160;
        case 0x2cb164u: goto label_2cb164;
        case 0x2cb168u: goto label_2cb168;
        case 0x2cb16cu: goto label_2cb16c;
        case 0x2cb170u: goto label_2cb170;
        case 0x2cb174u: goto label_2cb174;
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb17cu: goto label_2cb17c;
        case 0x2cb180u: goto label_2cb180;
        case 0x2cb184u: goto label_2cb184;
        case 0x2cb188u: goto label_2cb188;
        case 0x2cb18cu: goto label_2cb18c;
        case 0x2cb190u: goto label_2cb190;
        case 0x2cb194u: goto label_2cb194;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb19cu: goto label_2cb19c;
        case 0x2cb1a0u: goto label_2cb1a0;
        case 0x2cb1a4u: goto label_2cb1a4;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1acu: goto label_2cb1ac;
        case 0x2cb1b0u: goto label_2cb1b0;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1b8u: goto label_2cb1b8;
        case 0x2cb1bcu: goto label_2cb1bc;
        case 0x2cb1c0u: goto label_2cb1c0;
        case 0x2cb1c4u: goto label_2cb1c4;
        case 0x2cb1c8u: goto label_2cb1c8;
        case 0x2cb1ccu: goto label_2cb1cc;
        case 0x2cb1d0u: goto label_2cb1d0;
        case 0x2cb1d4u: goto label_2cb1d4;
        case 0x2cb1d8u: goto label_2cb1d8;
        case 0x2cb1dcu: goto label_2cb1dc;
        case 0x2cb1e0u: goto label_2cb1e0;
        case 0x2cb1e4u: goto label_2cb1e4;
        case 0x2cb1e8u: goto label_2cb1e8;
        case 0x2cb1ecu: goto label_2cb1ec;
        case 0x2cb1f0u: goto label_2cb1f0;
        case 0x2cb1f4u: goto label_2cb1f4;
        case 0x2cb1f8u: goto label_2cb1f8;
        case 0x2cb1fcu: goto label_2cb1fc;
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb204u: goto label_2cb204;
        case 0x2cb208u: goto label_2cb208;
        case 0x2cb20cu: goto label_2cb20c;
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb214u: goto label_2cb214;
        case 0x2cb218u: goto label_2cb218;
        case 0x2cb21cu: goto label_2cb21c;
        case 0x2cb220u: goto label_2cb220;
        case 0x2cb224u: goto label_2cb224;
        case 0x2cb228u: goto label_2cb228;
        case 0x2cb22cu: goto label_2cb22c;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb234u: goto label_2cb234;
        case 0x2cb238u: goto label_2cb238;
        case 0x2cb23cu: goto label_2cb23c;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb244u: goto label_2cb244;
        case 0x2cb248u: goto label_2cb248;
        case 0x2cb24cu: goto label_2cb24c;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb254u: goto label_2cb254;
        case 0x2cb258u: goto label_2cb258;
        case 0x2cb25cu: goto label_2cb25c;
        case 0x2cb260u: goto label_2cb260;
        case 0x2cb264u: goto label_2cb264;
        case 0x2cb268u: goto label_2cb268;
        case 0x2cb26cu: goto label_2cb26c;
        case 0x2cb270u: goto label_2cb270;
        case 0x2cb274u: goto label_2cb274;
        case 0x2cb278u: goto label_2cb278;
        case 0x2cb27cu: goto label_2cb27c;
        case 0x2cb280u: goto label_2cb280;
        case 0x2cb284u: goto label_2cb284;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb28cu: goto label_2cb28c;
        case 0x2cb290u: goto label_2cb290;
        case 0x2cb294u: goto label_2cb294;
        case 0x2cb298u: goto label_2cb298;
        case 0x2cb29cu: goto label_2cb29c;
        case 0x2cb2a0u: goto label_2cb2a0;
        case 0x2cb2a4u: goto label_2cb2a4;
        case 0x2cb2a8u: goto label_2cb2a8;
        case 0x2cb2acu: goto label_2cb2ac;
        case 0x2cb2b0u: goto label_2cb2b0;
        case 0x2cb2b4u: goto label_2cb2b4;
        case 0x2cb2b8u: goto label_2cb2b8;
        case 0x2cb2bcu: goto label_2cb2bc;
        case 0x2cb2c0u: goto label_2cb2c0;
        case 0x2cb2c4u: goto label_2cb2c4;
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2ccu: goto label_2cb2cc;
        case 0x2cb2d0u: goto label_2cb2d0;
        case 0x2cb2d4u: goto label_2cb2d4;
        case 0x2cb2d8u: goto label_2cb2d8;
        case 0x2cb2dcu: goto label_2cb2dc;
        case 0x2cb2e0u: goto label_2cb2e0;
        case 0x2cb2e4u: goto label_2cb2e4;
        case 0x2cb2e8u: goto label_2cb2e8;
        case 0x2cb2ecu: goto label_2cb2ec;
        case 0x2cb2f0u: goto label_2cb2f0;
        case 0x2cb2f4u: goto label_2cb2f4;
        case 0x2cb2f8u: goto label_2cb2f8;
        case 0x2cb2fcu: goto label_2cb2fc;
        case 0x2cb300u: goto label_2cb300;
        case 0x2cb304u: goto label_2cb304;
        case 0x2cb308u: goto label_2cb308;
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb310u: goto label_2cb310;
        case 0x2cb314u: goto label_2cb314;
        case 0x2cb318u: goto label_2cb318;
        case 0x2cb31cu: goto label_2cb31c;
        case 0x2cb320u: goto label_2cb320;
        case 0x2cb324u: goto label_2cb324;
        case 0x2cb328u: goto label_2cb328;
        case 0x2cb32cu: goto label_2cb32c;
        case 0x2cb330u: goto label_2cb330;
        case 0x2cb334u: goto label_2cb334;
        case 0x2cb338u: goto label_2cb338;
        case 0x2cb33cu: goto label_2cb33c;
        case 0x2cb340u: goto label_2cb340;
        case 0x2cb344u: goto label_2cb344;
        case 0x2cb348u: goto label_2cb348;
        case 0x2cb34cu: goto label_2cb34c;
        case 0x2cb350u: goto label_2cb350;
        case 0x2cb354u: goto label_2cb354;
        case 0x2cb358u: goto label_2cb358;
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb360u: goto label_2cb360;
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb368u: goto label_2cb368;
        case 0x2cb36cu: goto label_2cb36c;
        case 0x2cb370u: goto label_2cb370;
        case 0x2cb374u: goto label_2cb374;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb37cu: goto label_2cb37c;
        case 0x2cb380u: goto label_2cb380;
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb388u: goto label_2cb388;
        case 0x2cb38cu: goto label_2cb38c;
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb39cu: goto label_2cb39c;
        case 0x2cb3a0u: goto label_2cb3a0;
        case 0x2cb3a4u: goto label_2cb3a4;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3acu: goto label_2cb3ac;
        case 0x2cb3b0u: goto label_2cb3b0;
        case 0x2cb3b4u: goto label_2cb3b4;
        case 0x2cb3b8u: goto label_2cb3b8;
        case 0x2cb3bcu: goto label_2cb3bc;
        case 0x2cb3c0u: goto label_2cb3c0;
        case 0x2cb3c4u: goto label_2cb3c4;
        case 0x2cb3c8u: goto label_2cb3c8;
        case 0x2cb3ccu: goto label_2cb3cc;
        case 0x2cb3d0u: goto label_2cb3d0;
        case 0x2cb3d4u: goto label_2cb3d4;
        case 0x2cb3d8u: goto label_2cb3d8;
        case 0x2cb3dcu: goto label_2cb3dc;
        case 0x2cb3e0u: goto label_2cb3e0;
        case 0x2cb3e4u: goto label_2cb3e4;
        case 0x2cb3e8u: goto label_2cb3e8;
        case 0x2cb3ecu: goto label_2cb3ec;
        case 0x2cb3f0u: goto label_2cb3f0;
        case 0x2cb3f4u: goto label_2cb3f4;
        case 0x2cb3f8u: goto label_2cb3f8;
        case 0x2cb3fcu: goto label_2cb3fc;
        case 0x2cb400u: goto label_2cb400;
        case 0x2cb404u: goto label_2cb404;
        case 0x2cb408u: goto label_2cb408;
        case 0x2cb40cu: goto label_2cb40c;
        case 0x2cb410u: goto label_2cb410;
        case 0x2cb414u: goto label_2cb414;
        case 0x2cb418u: goto label_2cb418;
        case 0x2cb41cu: goto label_2cb41c;
        case 0x2cb420u: goto label_2cb420;
        case 0x2cb424u: goto label_2cb424;
        case 0x2cb428u: goto label_2cb428;
        case 0x2cb42cu: goto label_2cb42c;
        case 0x2cb430u: goto label_2cb430;
        case 0x2cb434u: goto label_2cb434;
        case 0x2cb438u: goto label_2cb438;
        case 0x2cb43cu: goto label_2cb43c;
        case 0x2cb440u: goto label_2cb440;
        case 0x2cb444u: goto label_2cb444;
        case 0x2cb448u: goto label_2cb448;
        case 0x2cb44cu: goto label_2cb44c;
        case 0x2cb450u: goto label_2cb450;
        case 0x2cb454u: goto label_2cb454;
        case 0x2cb458u: goto label_2cb458;
        case 0x2cb45cu: goto label_2cb45c;
        case 0x2cb460u: goto label_2cb460;
        case 0x2cb464u: goto label_2cb464;
        case 0x2cb468u: goto label_2cb468;
        case 0x2cb46cu: goto label_2cb46c;
        case 0x2cb470u: goto label_2cb470;
        case 0x2cb474u: goto label_2cb474;
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb47cu: goto label_2cb47c;
        case 0x2cb480u: goto label_2cb480;
        case 0x2cb484u: goto label_2cb484;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb48cu: goto label_2cb48c;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb494u: goto label_2cb494;
        case 0x2cb498u: goto label_2cb498;
        case 0x2cb49cu: goto label_2cb49c;
        case 0x2cb4a0u: goto label_2cb4a0;
        case 0x2cb4a4u: goto label_2cb4a4;
        case 0x2cb4a8u: goto label_2cb4a8;
        case 0x2cb4acu: goto label_2cb4ac;
        case 0x2cb4b0u: goto label_2cb4b0;
        case 0x2cb4b4u: goto label_2cb4b4;
        case 0x2cb4b8u: goto label_2cb4b8;
        case 0x2cb4bcu: goto label_2cb4bc;
        case 0x2cb4c0u: goto label_2cb4c0;
        case 0x2cb4c4u: goto label_2cb4c4;
        case 0x2cb4c8u: goto label_2cb4c8;
        case 0x2cb4ccu: goto label_2cb4cc;
        case 0x2cb4d0u: goto label_2cb4d0;
        case 0x2cb4d4u: goto label_2cb4d4;
        case 0x2cb4d8u: goto label_2cb4d8;
        case 0x2cb4dcu: goto label_2cb4dc;
        case 0x2cb4e0u: goto label_2cb4e0;
        case 0x2cb4e4u: goto label_2cb4e4;
        case 0x2cb4e8u: goto label_2cb4e8;
        case 0x2cb4ecu: goto label_2cb4ec;
        case 0x2cb4f0u: goto label_2cb4f0;
        case 0x2cb4f4u: goto label_2cb4f4;
        case 0x2cb4f8u: goto label_2cb4f8;
        case 0x2cb4fcu: goto label_2cb4fc;
        case 0x2cb500u: goto label_2cb500;
        case 0x2cb504u: goto label_2cb504;
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb50cu: goto label_2cb50c;
        case 0x2cb510u: goto label_2cb510;
        case 0x2cb514u: goto label_2cb514;
        case 0x2cb518u: goto label_2cb518;
        case 0x2cb51cu: goto label_2cb51c;
        case 0x2cb520u: goto label_2cb520;
        case 0x2cb524u: goto label_2cb524;
        case 0x2cb528u: goto label_2cb528;
        case 0x2cb52cu: goto label_2cb52c;
        case 0x2cb530u: goto label_2cb530;
        case 0x2cb534u: goto label_2cb534;
        case 0x2cb538u: goto label_2cb538;
        case 0x2cb53cu: goto label_2cb53c;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb544u: goto label_2cb544;
        case 0x2cb548u: goto label_2cb548;
        case 0x2cb54cu: goto label_2cb54c;
        case 0x2cb550u: goto label_2cb550;
        case 0x2cb554u: goto label_2cb554;
        case 0x2cb558u: goto label_2cb558;
        case 0x2cb55cu: goto label_2cb55c;
        case 0x2cb560u: goto label_2cb560;
        case 0x2cb564u: goto label_2cb564;
        case 0x2cb568u: goto label_2cb568;
        case 0x2cb56cu: goto label_2cb56c;
        case 0x2cb570u: goto label_2cb570;
        case 0x2cb574u: goto label_2cb574;
        case 0x2cb578u: goto label_2cb578;
        case 0x2cb57cu: goto label_2cb57c;
        case 0x2cb580u: goto label_2cb580;
        case 0x2cb584u: goto label_2cb584;
        case 0x2cb588u: goto label_2cb588;
        case 0x2cb58cu: goto label_2cb58c;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb594u: goto label_2cb594;
        case 0x2cb598u: goto label_2cb598;
        case 0x2cb59cu: goto label_2cb59c;
        case 0x2cb5a0u: goto label_2cb5a0;
        case 0x2cb5a4u: goto label_2cb5a4;
        case 0x2cb5a8u: goto label_2cb5a8;
        case 0x2cb5acu: goto label_2cb5ac;
        case 0x2cb5b0u: goto label_2cb5b0;
        case 0x2cb5b4u: goto label_2cb5b4;
        case 0x2cb5b8u: goto label_2cb5b8;
        case 0x2cb5bcu: goto label_2cb5bc;
        case 0x2cb5c0u: goto label_2cb5c0;
        case 0x2cb5c4u: goto label_2cb5c4;
        case 0x2cb5c8u: goto label_2cb5c8;
        case 0x2cb5ccu: goto label_2cb5cc;
        case 0x2cb5d0u: goto label_2cb5d0;
        case 0x2cb5d4u: goto label_2cb5d4;
        case 0x2cb5d8u: goto label_2cb5d8;
        case 0x2cb5dcu: goto label_2cb5dc;
        case 0x2cb5e0u: goto label_2cb5e0;
        case 0x2cb5e4u: goto label_2cb5e4;
        case 0x2cb5e8u: goto label_2cb5e8;
        case 0x2cb5ecu: goto label_2cb5ec;
        case 0x2cb5f0u: goto label_2cb5f0;
        case 0x2cb5f4u: goto label_2cb5f4;
        case 0x2cb5f8u: goto label_2cb5f8;
        case 0x2cb5fcu: goto label_2cb5fc;
        case 0x2cb600u: goto label_2cb600;
        case 0x2cb604u: goto label_2cb604;
        case 0x2cb608u: goto label_2cb608;
        case 0x2cb60cu: goto label_2cb60c;
        case 0x2cb610u: goto label_2cb610;
        case 0x2cb614u: goto label_2cb614;
        case 0x2cb618u: goto label_2cb618;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb620u: goto label_2cb620;
        case 0x2cb624u: goto label_2cb624;
        case 0x2cb628u: goto label_2cb628;
        case 0x2cb62cu: goto label_2cb62c;
        case 0x2cb630u: goto label_2cb630;
        case 0x2cb634u: goto label_2cb634;
        case 0x2cb638u: goto label_2cb638;
        case 0x2cb63cu: goto label_2cb63c;
        case 0x2cb640u: goto label_2cb640;
        case 0x2cb644u: goto label_2cb644;
        case 0x2cb648u: goto label_2cb648;
        case 0x2cb64cu: goto label_2cb64c;
        case 0x2cb650u: goto label_2cb650;
        case 0x2cb654u: goto label_2cb654;
        case 0x2cb658u: goto label_2cb658;
        case 0x2cb65cu: goto label_2cb65c;
        case 0x2cb660u: goto label_2cb660;
        case 0x2cb664u: goto label_2cb664;
        case 0x2cb668u: goto label_2cb668;
        case 0x2cb66cu: goto label_2cb66c;
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb674u: goto label_2cb674;
        case 0x2cb678u: goto label_2cb678;
        case 0x2cb67cu: goto label_2cb67c;
        case 0x2cb680u: goto label_2cb680;
        case 0x2cb684u: goto label_2cb684;
        case 0x2cb688u: goto label_2cb688;
        case 0x2cb68cu: goto label_2cb68c;
        case 0x2cb690u: goto label_2cb690;
        case 0x2cb694u: goto label_2cb694;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb69cu: goto label_2cb69c;
        case 0x2cb6a0u: goto label_2cb6a0;
        case 0x2cb6a4u: goto label_2cb6a4;
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6acu: goto label_2cb6ac;
        case 0x2cb6b0u: goto label_2cb6b0;
        case 0x2cb6b4u: goto label_2cb6b4;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6bcu: goto label_2cb6bc;
        case 0x2cb6c0u: goto label_2cb6c0;
        case 0x2cb6c4u: goto label_2cb6c4;
        case 0x2cb6c8u: goto label_2cb6c8;
        case 0x2cb6ccu: goto label_2cb6cc;
        case 0x2cb6d0u: goto label_2cb6d0;
        case 0x2cb6d4u: goto label_2cb6d4;
        case 0x2cb6d8u: goto label_2cb6d8;
        case 0x2cb6dcu: goto label_2cb6dc;
        case 0x2cb6e0u: goto label_2cb6e0;
        case 0x2cb6e4u: goto label_2cb6e4;
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb6ecu: goto label_2cb6ec;
        case 0x2cb6f0u: goto label_2cb6f0;
        case 0x2cb6f4u: goto label_2cb6f4;
        case 0x2cb6f8u: goto label_2cb6f8;
        case 0x2cb6fcu: goto label_2cb6fc;
        case 0x2cb700u: goto label_2cb700;
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb708u: goto label_2cb708;
        case 0x2cb70cu: goto label_2cb70c;
        case 0x2cb710u: goto label_2cb710;
        case 0x2cb714u: goto label_2cb714;
        case 0x2cb718u: goto label_2cb718;
        case 0x2cb71cu: goto label_2cb71c;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb724u: goto label_2cb724;
        case 0x2cb728u: goto label_2cb728;
        case 0x2cb72cu: goto label_2cb72c;
        case 0x2cb730u: goto label_2cb730;
        case 0x2cb734u: goto label_2cb734;
        case 0x2cb738u: goto label_2cb738;
        case 0x2cb73cu: goto label_2cb73c;
        case 0x2cb740u: goto label_2cb740;
        case 0x2cb744u: goto label_2cb744;
        case 0x2cb748u: goto label_2cb748;
        case 0x2cb74cu: goto label_2cb74c;
        case 0x2cb750u: goto label_2cb750;
        case 0x2cb754u: goto label_2cb754;
        case 0x2cb758u: goto label_2cb758;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb760u: goto label_2cb760;
        case 0x2cb764u: goto label_2cb764;
        case 0x2cb768u: goto label_2cb768;
        case 0x2cb76cu: goto label_2cb76c;
        case 0x2cb770u: goto label_2cb770;
        case 0x2cb774u: goto label_2cb774;
        case 0x2cb778u: goto label_2cb778;
        case 0x2cb77cu: goto label_2cb77c;
        case 0x2cb780u: goto label_2cb780;
        case 0x2cb784u: goto label_2cb784;
        case 0x2cb788u: goto label_2cb788;
        case 0x2cb78cu: goto label_2cb78c;
        case 0x2cb790u: goto label_2cb790;
        case 0x2cb794u: goto label_2cb794;
        case 0x2cb798u: goto label_2cb798;
        case 0x2cb79cu: goto label_2cb79c;
        case 0x2cb7a0u: goto label_2cb7a0;
        case 0x2cb7a4u: goto label_2cb7a4;
        case 0x2cb7a8u: goto label_2cb7a8;
        case 0x2cb7acu: goto label_2cb7ac;
        case 0x2cb7b0u: goto label_2cb7b0;
        case 0x2cb7b4u: goto label_2cb7b4;
        case 0x2cb7b8u: goto label_2cb7b8;
        case 0x2cb7bcu: goto label_2cb7bc;
        case 0x2cb7c0u: goto label_2cb7c0;
        case 0x2cb7c4u: goto label_2cb7c4;
        case 0x2cb7c8u: goto label_2cb7c8;
        case 0x2cb7ccu: goto label_2cb7cc;
        case 0x2cb7d0u: goto label_2cb7d0;
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7d8u: goto label_2cb7d8;
        case 0x2cb7dcu: goto label_2cb7dc;
        case 0x2cb7e0u: goto label_2cb7e0;
        case 0x2cb7e4u: goto label_2cb7e4;
        case 0x2cb7e8u: goto label_2cb7e8;
        case 0x2cb7ecu: goto label_2cb7ec;
        case 0x2cb7f0u: goto label_2cb7f0;
        case 0x2cb7f4u: goto label_2cb7f4;
        case 0x2cb7f8u: goto label_2cb7f8;
        case 0x2cb7fcu: goto label_2cb7fc;
        case 0x2cb800u: goto label_2cb800;
        case 0x2cb804u: goto label_2cb804;
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb80cu: goto label_2cb80c;
        case 0x2cb810u: goto label_2cb810;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb818u: goto label_2cb818;
        case 0x2cb81cu: goto label_2cb81c;
        case 0x2cb820u: goto label_2cb820;
        case 0x2cb824u: goto label_2cb824;
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb82cu: goto label_2cb82c;
        case 0x2cb830u: goto label_2cb830;
        case 0x2cb834u: goto label_2cb834;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb83cu: goto label_2cb83c;
        case 0x2cb840u: goto label_2cb840;
        case 0x2cb844u: goto label_2cb844;
        case 0x2cb848u: goto label_2cb848;
        case 0x2cb84cu: goto label_2cb84c;
        case 0x2cb850u: goto label_2cb850;
        case 0x2cb854u: goto label_2cb854;
        default: break;
    }

    ctx->pc = 0x2caa38u;

label_2caa38:
    // 0x2caa38: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x2caa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
label_2caa3c:
    // 0x2caa3c: 0xafa4029c  sw          $a0, 0x29C($sp)
    ctx->pc = 0x2caa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 4));
label_2caa40:
    // 0x2caa40: 0x7fbe02d0  sq          $fp, 0x2D0($sp)
    ctx->pc = 0x2caa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 30));
label_2caa44:
    // 0x2caa44: 0xe7ba0390  swc1        $f26, 0x390($sp)
    ctx->pc = 0x2caa44u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_2caa48:
    // 0x2caa48: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2caa48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2caa4c:
    // 0x2caa4c: 0xe7b80380  swc1        $f24, 0x380($sp)
    ctx->pc = 0x2caa4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_2caa50:
    // 0x2caa50: 0x2483037c  addiu       $v1, $a0, 0x37C
    ctx->pc = 0x2caa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 892));
label_2caa54:
    // 0x2caa54: 0x7fb00350  sq          $s0, 0x350($sp)
    ctx->pc = 0x2caa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 16));
label_2caa58:
    // 0x2caa58: 0x7fb10340  sq          $s1, 0x340($sp)
    ctx->pc = 0x2caa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 17));
label_2caa5c:
    // 0x2caa5c: 0x7fb20330  sq          $s2, 0x330($sp)
    ctx->pc = 0x2caa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 18));
label_2caa60:
    // 0x2caa60: 0x7fb30320  sq          $s3, 0x320($sp)
    ctx->pc = 0x2caa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 19));
label_2caa64:
    // 0x2caa64: 0x7fb40310  sq          $s4, 0x310($sp)
    ctx->pc = 0x2caa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 20));
label_2caa68:
    // 0x2caa68: 0x7fb50300  sq          $s5, 0x300($sp)
    ctx->pc = 0x2caa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 21));
label_2caa6c:
    // 0x2caa6c: 0x7fb602f0  sq          $s6, 0x2F0($sp)
    ctx->pc = 0x2caa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 22));
label_2caa70:
    // 0x2caa70: 0x7fb702e0  sq          $s7, 0x2E0($sp)
    ctx->pc = 0x2caa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 23));
label_2caa74:
    // 0x2caa74: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x2caa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
label_2caa78:
    // 0x2caa78: 0xe7bf03b8  swc1        $f31, 0x3B8($sp)
    ctx->pc = 0x2caa78u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
label_2caa7c:
    // 0x2caa7c: 0xe7be03b0  swc1        $f30, 0x3B0($sp)
    ctx->pc = 0x2caa7cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_2caa80:
    // 0x2caa80: 0xe7bd03a8  swc1        $f29, 0x3A8($sp)
    ctx->pc = 0x2caa80u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_2caa84:
    // 0x2caa84: 0xe7bc03a0  swc1        $f28, 0x3A0($sp)
    ctx->pc = 0x2caa84u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_2caa88:
    // 0x2caa88: 0xe7bb0398  swc1        $f27, 0x398($sp)
    ctx->pc = 0x2caa88u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_2caa8c:
    // 0x2caa8c: 0xe7b90388  swc1        $f25, 0x388($sp)
    ctx->pc = 0x2caa8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_2caa90:
    // 0x2caa90: 0xe7b70378  swc1        $f23, 0x378($sp)
    ctx->pc = 0x2caa90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_2caa94:
    // 0x2caa94: 0xe7b60370  swc1        $f22, 0x370($sp)
    ctx->pc = 0x2caa94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_2caa98:
    // 0x2caa98: 0xe7b50368  swc1        $f21, 0x368($sp)
    ctx->pc = 0x2caa98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_2caa9c:
    // 0x2caa9c: 0xe7b40360  swc1        $f20, 0x360($sp)
    ctx->pc = 0x2caa9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_2caaa0:
    // 0x2caaa0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2caaa4:
    // 0x2caaa4: 0xafa302b8  sw          $v1, 0x2B8($sp)
    ctx->pc = 0x2caaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 3));
label_2caaa8:
    // 0x2caaa8: 0xafa602a0  sw          $a2, 0x2A0($sp)
    ctx->pc = 0x2caaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 6));
label_2caaac:
    // 0x2caaac: 0xafa702a4  sw          $a3, 0x2A4($sp)
    ctx->pc = 0x2caaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 7));
label_2caab0:
    // 0x2caab0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2caab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2caab4:
    // 0x2caab4: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2caab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2caab8:
    // 0x2caab8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2caab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2caabc:
    // 0x2caabc: 0x40f809  jalr        $v0
label_2caac0:
    if (ctx->pc == 0x2CAAC0u) {
        ctx->pc = 0x2CAAC4u;
        goto label_2caac4;
    }
    ctx->pc = 0x2CAABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CAAC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAABCu, 0x2CAAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAAC4u;
label_2caac4:
    // 0x2caac4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2caac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2caac8:
    // 0x2caac8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2caac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2caacc:
    // 0x2caacc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2caaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2caad0:
    // 0x2caad0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2caad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2caad4:
    // 0x2caad4: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x2caad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2caad8:
    // 0x2caad8: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2caad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2caadc:
    // 0x2caadc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2caadcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2caae0:
    // 0x2caae0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2caae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2caae4:
    // 0x2caae4: 0x40f809  jalr        $v0
label_2caae8:
    if (ctx->pc == 0x2CAAE8u) {
        ctx->pc = 0x2CAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAE4u;
        // 0x2caae8: 0x46010680  add.s       $f26, $f0, $f1 (Delay Slot)
        ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAECu;
        goto label_2caaec;
    }
    ctx->pc = 0x2CAAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CAAECu);
        ctx->pc = 0x2CAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAE4u;
        // 0x2caae8: 0x46010680  add.s       $f26, $f0, $f1 (Delay Slot)
        ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAAE4u, 0x2CAAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAAECu;
label_2caaec:
    // 0x2caaec: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x2caaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2caaf0:
    // 0x2caaf0: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x2caaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_2caaf4:
    // 0x2caaf4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2caaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2caaf8:
    // 0x2caaf8: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x2caaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2caafc:
    // 0x2caafc: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2caafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cab00:
    // 0x2cab00: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x2cab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cab04:
    // 0x2cab04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2cab04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2cab08:
    // 0x2cab08: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2cab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cab0c:
    // 0x2cab0c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x2cab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_2cab10:
    // 0x2cab10: 0x46021e02  mul.s       $f24, $f3, $f2
    ctx->pc = 0x2cab10u;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2cab14:
    // 0x2cab14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cab14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cab18:
    // 0x2cab18: 0x4600d680  add.s       $f26, $f26, $f0
    ctx->pc = 0x2cab18u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_2cab1c:
    // 0x2cab1c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_2cab20:
    if (ctx->pc == 0x2CAB20u) {
        ctx->pc = 0x2CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB1Cu;
        // 0x2cab20: 0x4604d682  mul.s       $f26, $f26, $f4 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB24u;
        goto label_2cab24;
    }
    ctx->pc = 0x2CAB1Cu;
    {
        const bool branch_taken_0x2cab1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB1Cu;
        // 0x2cab20: 0x4604d682  mul.s       $f26, $f26, $f4 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab1c) {
            ctx->pc = 0x2CAB98u;
            goto label_2cab98;
        }
    }
    ctx->pc = 0x2CAB24u;
label_2cab24:
    // 0x2cab24: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2cab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2cab28:
    // 0x2cab28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2cab2c:
    // 0x2cab2c: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x2cab2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2cab30:
    // 0x2cab30: 0xafa402b4  sw          $a0, 0x2B4($sp)
    ctx->pc = 0x2cab30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 4));
label_2cab34:
    // 0x2cab34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cab38:
    // 0x2cab38: 0x8fa502b4  lw          $a1, 0x2B4($sp)
    ctx->pc = 0x2cab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_2cab3c:
    // 0x2cab3c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cab40:
    // 0x2cab40: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2cab40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2cab44:
    // 0x2cab44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cab48:
    // 0x2cab48: 0x8c560004  lw          $s6, 0x4($v0)
    ctx->pc = 0x2cab48u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2cab4c:
    // 0x2cab4c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2cab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cab50:
    // 0x2cab50: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2cab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2cab54:
    // 0x2cab54: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2cab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cab58:
    // 0x2cab58: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cab58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2cab5c:
    // 0x2cab5c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2cab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2cab60:
    // 0x2cab60: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2cab60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cab64:
    // 0x2cab64: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2cab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cab68:
    // 0x2cab68: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2cab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cab6c:
    // 0x2cab6c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cab6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2cab70:
    // 0x2cab70: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x2cab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cab74:
    // 0x2cab74: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cab74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2cab78:
    // 0x2cab78: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cab78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2cab7c:
    // 0x2cab7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cab7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2cab80:
    // 0x2cab80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cab80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cab84:
    // 0x2cab84: 0x460005c4  c1          0x5C4
    ctx->pc = 0x2cab84u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
label_2cab88:
    // 0x2cab88: 0xc0ac608  jal         func_2B1820
label_2cab8c:
    if (ctx->pc == 0x2CAB8Cu) {
        ctx->pc = 0x2CAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB88u;
        // 0x2cab8c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB90u;
        goto label_2cab90;
    }
    ctx->pc = 0x2CAB88u;
    SET_GPR_U32(ctx, 31, 0x2CAB90u);
    ctx->pc = 0x2CAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB88u;
    // 0x2cab8c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B1820u, 0x2CAB88u, 0x2CAB90u)) {
        return;
    }
    ctx->pc = 0x2CAB90u;
label_2cab90:
    // 0x2cab90: 0x1000000c  b           . + 4 + (0xC << 2)
label_2cab94:
    if (ctx->pc == 0x2CAB94u) {
        ctx->pc = 0x2CAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB90u;
        // 0x2cab94: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB98u;
        goto label_2cab98;
    }
    ctx->pc = 0x2CAB90u;
    {
        const bool branch_taken_0x2cab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB90u;
        // 0x2cab94: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab90) {
            ctx->pc = 0x2CABC4u;
            goto label_2cabc4;
        }
    }
    ctx->pc = 0x2CAB98u;
label_2cab98:
    // 0x2cab98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2cab9c:
    // 0x2cab9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2caba0:
    // 0x2caba0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2caba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2caba4:
    // 0x2caba4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2caba4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2caba8:
    // 0x2caba8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2caba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cabac:
    // 0x2cabac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cabacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cabb0:
    // 0x2cabb0: 0xc0aa7a0  jal         func_2A9E80
label_2cabb4:
    if (ctx->pc == 0x2CABB4u) {
        ctx->pc = 0x2CABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABB0u;
        // 0x2cabb4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABB8u;
        goto label_2cabb8;
    }
    ctx->pc = 0x2CABB0u;
    SET_GPR_U32(ctx, 31, 0x2CABB8u);
    ctx->pc = 0x2CABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABB0u;
    // 0x2cabb4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9E80u, 0x2CABB0u, 0x2CABB8u)) {
        return;
    }
    ctx->pc = 0x2CABB8u;
label_2cabb8:
    // 0x2cabb8: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x2cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_2cabbc:
    // 0x2cabbc: 0xc45c0000  lwc1        $f28, 0x0($v0)
    ctx->pc = 0x2cabbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2cabc0:
    // 0x2cabc0: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x2cabc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_2cabc4:
    // 0x2cabc4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_2cabc8:
    if (ctx->pc == 0x2CABC8u) {
        ctx->pc = 0x2CABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABC4u;
        // 0x2cabc8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABCCu;
        goto label_2cabcc;
    }
    ctx->pc = 0x2CABC4u;
    {
        const bool branch_taken_0x2cabc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABC4u;
        // 0x2cabc8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabc4) {
            ctx->pc = 0x2CACA8u;
            goto label_2caca8;
        }
    }
    ctx->pc = 0x2CABCCu;
label_2cabcc:
    // 0x2cabcc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x2cabccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2cabd0:
    // 0x2cabd0: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x2cabd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2cabd4:
    // 0x2cabd4: 0xafa402b4  sw          $a0, 0x2B4($sp)
    ctx->pc = 0x2cabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 4));
label_2cabd8:
    // 0x2cabd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cabdc:
    // 0x2cabdc: 0x8fa502b4  lw          $a1, 0x2B4($sp)
    ctx->pc = 0x2cabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_2cabe0:
    // 0x2cabe0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cabe4:
    // 0x2cabe4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2cabe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2cabe8:
    // 0x2cabe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cabec:
    // 0x2cabec: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x2cabecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2cabf0:
    // 0x2cabf0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2cabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cabf4:
    // 0x2cabf4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cabf8:
    // 0x2cabf8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2cabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cabfc:
    // 0x2cabfc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2cac00:
    // 0x2cac00: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2cac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2cac04:
    // 0x2cac04: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2cac04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cac08:
    // 0x2cac08: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2cac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac0c:
    // 0x2cac0c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x2cac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cac10:
    // 0x2cac10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cac10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2cac14:
    // 0x2cac14: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x2cac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cac18:
    // 0x2cac18: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cac18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2cac1c:
    // 0x2cac1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cac1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2cac20:
    // 0x2cac20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cac20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2cac24:
    // 0x2cac24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cac24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cac28:
    // 0x2cac28: 0x46000584  c1          0x584
    ctx->pc = 0x2cac28u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_2cac2c:
    // 0x2cac2c: 0xc0ac608  jal         func_2B1820
label_2cac30:
    if (ctx->pc == 0x2CAC30u) {
        ctx->pc = 0x2CAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC2Cu;
        // 0x2cac30: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC34u;
        goto label_2cac34;
    }
    ctx->pc = 0x2CAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC34u);
    ctx->pc = 0x2CAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC2Cu;
    // 0x2cac30: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B1820u, 0x2CAC2Cu, 0x2CAC34u)) {
        return;
    }
    ctx->pc = 0x2CAC34u;
label_2cac34:
    // 0x2cac34: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x2cac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_2cac38:
    // 0x2cac38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2cac3c:
    if (ctx->pc == 0x2CAC3Cu) {
        ctx->pc = 0x2CAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC38u;
        // 0x2cac3c: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC40u;
        goto label_2cac40;
    }
    ctx->pc = 0x2CAC38u;
    {
        const bool branch_taken_0x2cac38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC38u;
        // 0x2cac3c: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac38) {
            ctx->pc = 0x2CAC80u;
            goto label_2cac80;
        }
    }
    ctx->pc = 0x2CAC40u;
label_2cac40:
    // 0x2cac40: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2cac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cac44:
    // 0x2cac44: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cac48:
    // 0x2cac48: 0x46011729  min.s       $f28, $f2, $f1
    ctx->pc = 0x2cac48u;
    ctx->f[28] = std::min(ctx->f[2], ctx->f[1]);
label_2cac4c:
    // 0x2cac4c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2cac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac50:
    // 0x2cac50: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2cac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cac54:
    // 0x2cac54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cac54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cac58:
    // 0x2cac58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cac58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2cac5c:
    // 0x2cac5c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac60:
    // 0x2cac60: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2cac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cac64:
    // 0x2cac64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cac64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cac68:
    // 0x2cac68: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2cac68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2cac6c:
    // 0x2cac6c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2cac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac70:
    // 0x2cac70: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2cac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cac74:
    // 0x2cac74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cac74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cac78:
    // 0x2cac78: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2cac7c:
    if (ctx->pc == 0x2CAC7Cu) {
        ctx->pc = 0x2CAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC78u;
        // 0x2cac7c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC80u;
        goto label_2cac80;
    }
    ctx->pc = 0x2CAC78u;
    {
        const bool branch_taken_0x2cac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC78u;
        // 0x2cac7c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac78) {
            ctx->pc = 0x2CACE8u;
            goto label_2cace8;
        }
    }
    ctx->pc = 0x2CAC80u;
label_2cac80:
    // 0x2cac80: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2cac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac84:
    // 0x2cac84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cac84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cac88:
    // 0x2cac88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cac88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2cac8c:
    // 0x2cac8c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2cac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cac90:
    // 0x2cac90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cac90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2cac94:
    // 0x2cac94: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2cac94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2cac98:
    // 0x2cac98: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac9c:
    // 0x2cac9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cac9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2caca0:
    // 0x2caca0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2caca4:
    if (ctx->pc == 0x2CACA4u) {
        ctx->pc = 0x2CACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACA0u;
        // 0x2caca4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACA8u;
        goto label_2caca8;
    }
    ctx->pc = 0x2CACA0u;
    {
        const bool branch_taken_0x2caca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACA0u;
        // 0x2caca4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caca0) {
            ctx->pc = 0x2CACE8u;
            goto label_2cace8;
        }
    }
    ctx->pc = 0x2CACA8u;
label_2caca8:
    // 0x2caca8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2caca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2cacac:
    // 0x2cacac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2cacacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cacb0:
    // 0x2cacb0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2cacb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2cacb4:
    // 0x2cacb4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2cacb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cacb8:
    // 0x2cacb8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cacbc:
    // 0x2cacbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cacbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cacc0:
    // 0x2cacc0: 0xc0aa7a0  jal         func_2A9E80
label_2cacc4:
    if (ctx->pc == 0x2CACC4u) {
        ctx->pc = 0x2CACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACC0u;
        // 0x2cacc4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACC8u;
        goto label_2cacc8;
    }
    ctx->pc = 0x2CACC0u;
    SET_GPR_U32(ctx, 31, 0x2CACC8u);
    ctx->pc = 0x2CACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACC0u;
    // 0x2cacc4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9E80u, 0x2CACC0u, 0x2CACC8u)) {
        return;
    }
    ctx->pc = 0x2CACC8u;
label_2cacc8:
    // 0x2cacc8: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x2cacc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_2caccc:
    // 0x2caccc: 0xc49c0000  lwc1        $f28, 0x0($a0)
    ctx->pc = 0x2cacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2cacd0:
    // 0x2cacd0: 0x6a650007  ldl         $a1, 0x7($s3)
    ctx->pc = 0x2cacd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2cacd4:
    // 0x2cacd4: 0x6e650000  ldr         $a1, 0x0($s3)
    ctx->pc = 0x2cacd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cacd8:
    // 0x2cacd8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2cacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cacdc:
    // 0x2cacdc: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x2cacdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cace0:
    // 0x2cace0: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x2cace0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cace4:
    // 0x2cace4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2cace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2cace8:
    // 0x2cace8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2cace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cacec:
    // 0x2cacec: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2cacecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cacf0:
    // 0x2cacf0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2cacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cacf4:
    // 0x2cacf4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cacf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2cacf8:
    // 0x2cacf8: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x2cacf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cacfc:
    // 0x2cacfc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2cacfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cad00:
    // 0x2cad00: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2cad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cad04:
    // 0x2cad04: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cad04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_2cad08:
    // 0x2cad08: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2cad08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2cad0c:
    // 0x2cad0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cad0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2cad10:
    // 0x2cad10: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2cad10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2cad14:
    // 0x2cad14: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2cad18:
    // 0x2cad18: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2cad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cad1c:
    // 0x2cad1c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2cad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cad20:
    // 0x2cad20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2cad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cad24:
    // 0x2cad24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cad28:
    // 0x2cad28: 0xc0ad20c  jal         func_2B4830
label_2cad2c:
    if (ctx->pc == 0x2CAD2Cu) {
        ctx->pc = 0x2CAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD28u;
        // 0x2cad2c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD30u;
        goto label_2cad30;
    }
    ctx->pc = 0x2CAD28u;
    SET_GPR_U32(ctx, 31, 0x2CAD30u);
    ctx->pc = 0x2CAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD28u;
    // 0x2cad2c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CAD28u, 0x2CAD30u)) {
        return;
    }
    ctx->pc = 0x2CAD30u;
label_2cad30:
    // 0x2cad30: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2cad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cad34:
    // 0x2cad34: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2cad34u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_2cad38:
    // 0x2cad38: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x2cad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2cad3c:
    // 0x2cad3c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2cad3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2cad40:
    // 0x2cad40: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x2cad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2cad44:
    // 0x2cad44: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2cad44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_2cad48:
    // 0x2cad48: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x2cad48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_2cad4c:
    // 0x2cad4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cad4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cad50:
    // 0x2cad50: 0x460203c0  add.s       $f15, $f0, $f2
    ctx->pc = 0x2cad50u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2cad54:
    // 0x2cad54: 0x460f0004  c1          0xF0004
    ctx->pc = 0x2cad54u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[15]);
label_2cad58:
    // 0x2cad58: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x2cad58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_2cad5c:
    // 0x2cad5c: 0x461ad000  add.s       $f0, $f26, $f26
    ctx->pc = 0x2cad5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[26]);
label_2cad60:
    // 0x2cad60: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2cad60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2cad64:
    // 0x2cad64: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2cad64u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2cad68:
    // 0x2cad68: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x2cad68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cad6c:
    // 0x2cad6c: 0x0  nop
    ctx->pc = 0x2cad6cu;
    // NOP
label_2cad70:
    // 0x2cad70: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2cad74:
    if (ctx->pc == 0x2CAD74u) {
        ctx->pc = 0x2CAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD70u;
        // 0x2cad74: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD78u;
        goto label_2cad78;
    }
    ctx->pc = 0x2CAD70u;
    {
        const bool branch_taken_0x2cad70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD70u;
        // 0x2cad74: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad70) {
            ctx->pc = 0x2CADE0u;
            goto label_2cade0;
        }
    }
    ctx->pc = 0x2CAD78u;
label_2cad78:
    // 0x2cad78: 0x46142141  sub.s       $f5, $f4, $f20
    ctx->pc = 0x2cad78u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
label_2cad7c:
    // 0x2cad7c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2cad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cad80:
    // 0x2cad80: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x2cad80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
label_2cad84:
    // 0x2cad84: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2cad84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2cad88:
    // 0x2cad88: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cad8c:
    // 0x2cad8c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2cad8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_2cad90:
    // 0x2cad90: 0xc7838224  lwc1        $f3, -0x7DDC($gp)
    ctx->pc = 0x2cad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cad94:
    // 0x2cad94: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2cad94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_2cad98:
    // 0x2cad98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cad98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2cad9c:
    // 0x2cad9c: 0x46000c00  add.s       $f16, $f1, $f0
    ctx->pc = 0x2cad9cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cada0:
    // 0x2cada0: 0x46101834  c.lt.s      $f3, $f16
    ctx->pc = 0x2cada0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cada4:
    // 0x2cada4: 0x0  nop
    ctx->pc = 0x2cada4u;
    // NOP
label_2cada8:
    // 0x2cada8: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_2cadac:
    if (ctx->pc == 0x2CADACu) {
        ctx->pc = 0x2CADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADA8u;
        // 0x2cadac: 0x46052102  mul.s       $f4, $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CADB0u;
        goto label_2cadb0;
    }
    ctx->pc = 0x2CADA8u;
    {
        const bool branch_taken_0x2cada8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADA8u;
        // 0x2cadac: 0x46052102  mul.s       $f4, $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cada8) {
            ctx->pc = 0x2CAE30u;
            goto label_2cae30;
        }
    }
    ctx->pc = 0x2CADB0u;
label_2cadb0:
    // 0x2cadb0: 0x46047802  mul.s       $f0, $f15, $f4
    ctx->pc = 0x2cadb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
label_2cadb4:
    // 0x2cadb4: 0x46108042  mul.s       $f1, $f16, $f16
    ctx->pc = 0x2cadb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
label_2cadb8:
    // 0x2cadb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cadb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cadbc:
    // 0x2cadbc: 0x0  nop
    ctx->pc = 0x2cadbcu;
    // NOP
label_2cadc0:
    // 0x2cadc0: 0x4501028d  bc1t        . + 4 + (0x28D << 2)
label_2cadc4:
    if (ctx->pc == 0x2CADC4u) {
        ctx->pc = 0x2CADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADC0u;
        // 0x2cadc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CADC8u;
        goto label_2cadc8;
    }
    ctx->pc = 0x2CADC0u;
    {
        const bool branch_taken_0x2cadc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADC0u;
        // 0x2cadc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadc0) {
            ctx->pc = 0x2CB7F8u;
            goto label_2cb7f8;
        }
    }
    ctx->pc = 0x2CADC8u;
label_2cadc8:
    // 0x2cadc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cadc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cadcc:
    // 0x2cadcc: 0x46010044  c1          0x10044
    ctx->pc = 0x2cadccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
label_2cadd0:
    // 0x2cadd0: 0x46008007  neg.s       $f0, $f16
    ctx->pc = 0x2cadd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[16]);
label_2cadd4:
    // 0x2cadd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cadd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cadd8:
    // 0x2cadd8: 0x460f0543  div.s       $f21, $f0, $f15
    ctx->pc = 0x2cadd8u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[15]);
label_2caddc:
    // 0x2caddc: 0x0  nop
    ctx->pc = 0x2caddcu;
    // NOP
label_2cade0:
    // 0x2cade0: 0x4618a834  c.lt.s      $f21, $f24
    ctx->pc = 0x2cade0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cade4:
    // 0x2cade4: 0x0  nop
    ctx->pc = 0x2cade4u;
    // NOP
label_2cade8:
    // 0x2cade8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2cadec:
    if (ctx->pc == 0x2CADECu) {
        ctx->pc = 0x2CADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADE8u;
        // 0x2cadec: 0x4600c546  mov.s       $f21, $f24 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CADF0u;
        goto label_2cadf0;
    }
    ctx->pc = 0x2CADE8u;
    {
        const bool branch_taken_0x2cade8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cade8) {
            ctx->pc = 0x2CADECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CADE8u;
            // 0x2cadec: 0x4600c546  mov.s       $f21, $f24 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CADF0u;
            goto label_2cadf0;
        }
    }
    ctx->pc = 0x2CADF0u;
label_2cadf0:
    // 0x2cadf0: 0x4616bbc0  add.s       $f15, $f23, $f22
    ctx->pc = 0x2cadf0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_2cadf4:
    // 0x2cadf4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2cadf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_2cadf8:
    // 0x2cadf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cadf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cadfc:
    // 0x2cadfc: 0x460f0034  c.lt.s      $f0, $f15
    ctx->pc = 0x2cadfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cae00:
    // 0x2cae00: 0x0  nop
    ctx->pc = 0x2cae00u;
    // NOP
label_2cae04:
    // 0x2cae04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2cae08:
    if (ctx->pc == 0x2CAE08u) {
        ctx->pc = 0x2CAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE04u;
        // 0x2cae08: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAE0Cu;
        goto label_2cae0c;
    }
    ctx->pc = 0x2CAE04u;
    {
        const bool branch_taken_0x2cae04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE04u;
        // 0x2cae08: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae04) {
            ctx->pc = 0x2CAE1Cu;
            goto label_2cae1c;
        }
    }
    ctx->pc = 0x2CAE0Cu;
label_2cae0c:
    // 0x2cae0c: 0xc7808228  lwc1        $f0, -0x7DD8($gp)
    ctx->pc = 0x2cae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cae10:
    // 0x2cae10: 0x460f07c3  div.s       $f31, $f0, $f15
    ctx->pc = 0x2cae10u;
    ctx->f[31] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[15]);
label_2cae14:
    // 0x2cae14: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cae18:
    if (ctx->pc == 0x2CAE18u) {
        ctx->pc = 0x2CAE1Cu;
        goto label_2cae1c;
    }
    ctx->pc = 0x2CAE14u;
    {
        const bool branch_taken_0x2cae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cae14) {
            ctx->pc = 0x2CAE20u;
            goto label_2cae20;
        }
    }
    ctx->pc = 0x2CAE1Cu;
label_2cae1c:
    // 0x2cae1c: 0xc45f3b58  lwc1        $f31, 0x3B58($v0)
    ctx->pc = 0x2cae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_2cae20:
    // 0x2cae20: 0x4615e036  c.le.s      $f28, $f21
    ctx->pc = 0x2cae20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[28], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cae24:
    // 0x2cae24: 0x0  nop
    ctx->pc = 0x2cae24u;
    // NOP
label_2cae28:
    // 0x2cae28: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2cae2c:
    if (ctx->pc == 0x2CAE2Cu) {
        ctx->pc = 0x2CAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE28u;
        // 0x2cae2c: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAE30u;
        goto label_2cae30;
    }
    ctx->pc = 0x2CAE28u;
    {
        const bool branch_taken_0x2cae28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cae28) {
            ctx->pc = 0x2CAE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAE28u;
            // 0x2cae2c: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAE38u;
            goto label_2cae38;
        }
    }
    ctx->pc = 0x2CAE30u;
label_2cae30:
    // 0x2cae30: 0x10000271  b           . + 4 + (0x271 << 2)
label_2cae34:
    if (ctx->pc == 0x2CAE34u) {
        ctx->pc = 0x2CAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE30u;
        // 0x2cae34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAE38u;
        goto label_2cae38;
    }
    ctx->pc = 0x2CAE30u;
    {
        const bool branch_taken_0x2cae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE30u;
        // 0x2cae34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae30) {
            ctx->pc = 0x2CB7F8u;
            goto label_2cb7f8;
        }
    }
    ctx->pc = 0x2CAE38u;
label_2cae38:
    // 0x2cae38: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2cae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cae3c:
    // 0x2cae3c: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x2cae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
label_2cae40:
    // 0x2cae40: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2cae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cae44:
    // 0x2cae44: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2cae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cae48:
    // 0x2cae48: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2cae48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2cae4c:
    // 0x2cae4c: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2cae4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_2cae50:
    // 0x2cae50: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2cae50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2cae54:
    // 0x2cae54: 0xafa302bc  sw          $v1, 0x2BC($sp)
    ctx->pc = 0x2cae54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 3));
label_2cae58:
    // 0x2cae58: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2cae5c:
    // 0x2cae5c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2cae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2cae60:
    // 0x2cae60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cae60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cae64:
    // 0x2cae64: 0xc464004c  lwc1        $f4, 0x4C($v1)
    ctx->pc = 0x2cae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cae68:
    // 0x2cae68: 0xc443004c  lwc1        $f3, 0x4C($v0)
    ctx->pc = 0x2cae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cae6c:
    // 0x2cae6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cae70:
    // 0x2cae70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cae70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cae74:
    // 0x2cae74: 0xe7a102ac  swc1        $f1, 0x2AC($sp)
    ctx->pc = 0x2cae74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_2cae78:
    // 0x2cae78: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2cae78u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2cae7c:
    // 0x2cae7c: 0xc462004c  lwc1        $f2, 0x4C($v1)
    ctx->pc = 0x2cae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cae80:
    // 0x2cae80: 0xe7a402a8  swc1        $f4, 0x2A8($sp)
    ctx->pc = 0x2cae80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_2cae84:
    // 0x2cae84: 0x460316c0  add.s       $f27, $f2, $f3
    ctx->pc = 0x2cae84u;
    ctx->f[27] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2cae88:
    // 0x2cae88: 0x12c000ab  beqz        $s6, . + 4 + (0xAB << 2)
label_2cae8c:
    if (ctx->pc == 0x2CAE8Cu) {
        ctx->pc = 0x2CAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE88u;
        // 0x2cae8c: 0x8fd70000  lw          $s7, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAE90u;
        goto label_2cae90;
    }
    ctx->pc = 0x2CAE88u;
    {
        const bool branch_taken_0x2cae88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE88u;
        // 0x2cae8c: 0x8fd70000  lw          $s7, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae88) {
            ctx->pc = 0x2CB138u;
            goto label_2cb138;
        }
    }
    ctx->pc = 0x2CAE90u;
label_2cae90:
    // 0x2cae90: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2cae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cae94:
    // 0x2cae94: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2cae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2cae98:
    // 0x2cae98: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2cae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cae9c:
    // 0x2cae9c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2cae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2caea0:
    // 0x2caea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2caea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2caea4:
    // 0x2caea4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2caea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2caea8:
    // 0x2caea8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2caea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2caeac:
    // 0x2caeac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2caeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2caeb0:
    // 0x2caeb0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2caeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2caeb4:
    // 0x2caeb4: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x2caeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2caeb8:
    // 0x2caeb8: 0x8ef10010  lw          $s1, 0x10($s7)
    ctx->pc = 0x2caeb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2caebc:
    // 0x2caebc: 0xa3a021  addu        $s4, $a1, $v1
    ctx->pc = 0x2caebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2caec0:
    // 0x2caec0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2caec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2caec4:
    // 0x2caec4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2caec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2caec8:
    // 0x2caec8: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x2caec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2caecc:
    // 0x2caecc: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x2caeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2caed0:
    // 0x2caed0: 0xb3a20177  sdl         $v0, 0x177($sp)
    ctx->pc = 0x2caed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caed4:
    // 0x2caed4: 0xb7a20170  sdr         $v0, 0x170($sp)
    ctx->pc = 0x2caed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caed8:
    // 0x2caed8: 0xb3a3017f  sdl         $v1, 0x17F($sp)
    ctx->pc = 0x2caed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caedc:
    // 0x2caedc: 0xb7a30178  sdr         $v1, 0x178($sp)
    ctx->pc = 0x2caedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caee0:
    // 0x2caee0: 0x6a820037  ldl         $v0, 0x37($s4)
    ctx->pc = 0x2caee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2caee4:
    // 0x2caee4: 0x6e820030  ldr         $v0, 0x30($s4)
    ctx->pc = 0x2caee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2caee8:
    // 0x2caee8: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x2caee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2caeec:
    // 0x2caeec: 0xb3a20187  sdl         $v0, 0x187($sp)
    ctx->pc = 0x2caeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caef0:
    // 0x2caef0: 0xb7a20180  sdr         $v0, 0x180($sp)
    ctx->pc = 0x2caef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caef4:
    // 0x2caef4: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x2caef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_2caef8:
    // 0x2caef8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2caefc:
    if (ctx->pc == 0x2CAEFCu) {
        ctx->pc = 0x2CAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEF8u;
        // 0x2caefc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF00u;
        goto label_2caf00;
    }
    ctx->pc = 0x2CAEF8u;
    {
        const bool branch_taken_0x2caef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEF8u;
        // 0x2caefc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caef8) {
            ctx->pc = 0x2CAF10u;
            goto label_2caf10;
        }
    }
    ctx->pc = 0x2CAF00u;
label_2caf00:
    // 0x2caf00: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2caf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2caf04:
    // 0x2caf04: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x2caf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2caf08:
    // 0x2caf08: 0xc0af888  jal         func_2BE220
label_2caf0c:
    if (ctx->pc == 0x2CAF0Cu) {
        ctx->pc = 0x2CAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF08u;
        // 0x2caf0c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF10u;
        goto label_2caf10;
    }
    ctx->pc = 0x2CAF08u;
    SET_GPR_U32(ctx, 31, 0x2CAF10u);
    ctx->pc = 0x2CAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF08u;
    // 0x2caf0c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2CAF08u, 0x2CAF10u)) {
        return;
    }
    ctx->pc = 0x2CAF10u;
label_2caf10:
    // 0x2caf10: 0x6a820037  ldl         $v0, 0x37($s4)
    ctx->pc = 0x2caf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2caf14:
    // 0x2caf14: 0x6e820030  ldr         $v0, 0x30($s4)
    ctx->pc = 0x2caf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2caf18:
    // 0x2caf18: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x2caf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2caf1c:
    // 0x2caf1c: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2caf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caf20:
    // 0x2caf20: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2caf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2caf24:
    // 0x2caf24: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2caf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2caf28:
    // 0x2caf28: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2caf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2caf2c:
    // 0x2caf2c: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2caf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2caf30:
    // 0x2caf30: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2caf30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2caf34:
    // 0x2caf34: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2caf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2caf38:
    // 0x2caf38: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2caf38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_2caf3c:
    // 0x2caf3c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2caf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2caf40:
    // 0x2caf40: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2caf40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2caf44:
    // 0x2caf44: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2caf44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2caf48:
    // 0x2caf48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2caf48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2caf4c:
    // 0x2caf4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2caf4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2caf50:
    // 0x2caf50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2caf50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2caf54:
    // 0x2caf54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2caf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2caf58:
    // 0x2caf58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2caf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2caf5c:
    // 0x2caf5c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x2caf5cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_2caf60:
    // 0x2caf60: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2caf60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2caf64:
    // 0x2caf64: 0xe7a501a0  swc1        $f5, 0x1A0($sp)
    ctx->pc = 0x2caf64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2caf68:
    // 0x2caf68: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2caf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2caf6c:
    // 0x2caf6c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2caf6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2caf70:
    // 0x2caf70: 0xe7a401a4  swc1        $f4, 0x1A4($sp)
    ctx->pc = 0x2caf70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_2caf74:
    // 0x2caf74: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2caf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2caf78:
    // 0x2caf78: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2caf78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2caf7c:
    // 0x2caf7c: 0xe7a301a8  swc1        $f3, 0x1A8($sp)
    ctx->pc = 0x2caf7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_2caf80:
    // 0x2caf80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2caf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2caf84:
    // 0x2caf84: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2caf84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2caf88:
    // 0x2caf88: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2caf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2caf8c:
    // 0x2caf8c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2caf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2caf90:
    // 0x2caf90: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2caf90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2caf94:
    // 0x2caf94: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2caf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2caf98:
    // 0x2caf98: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2caf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2caf9c:
    // 0x2caf9c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2caf9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2cafa0:
    // 0x2cafa0: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2cafa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2cafa4:
    // 0x2cafa4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2cafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cafa8:
    // 0x2cafa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cafac:
    // 0x2cafac: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2cafacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2cafb0:
    // 0x2cafb0: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2cafb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_2cafb4:
    // 0x2cafb4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2cafb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cafb8:
    // 0x2cafb8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2cafb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2cafbc:
    // 0x2cafbc: 0xe7a201c4  swc1        $f2, 0x1C4($sp)
    ctx->pc = 0x2cafbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_2cafc0:
    // 0x2cafc0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cafc4:
    // 0x2cafc4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2cafc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2cafc8:
    // 0x2cafc8: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2cafc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_2cafcc:
    // 0x2cafcc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cafccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2cafd0:
    // 0x2cafd0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2cafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cafd4:
    // 0x2cafd4: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x2cafd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_2cafd8:
    // 0x2cafd8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2cafd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2cafdc:
    // 0x2cafdc: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x2cafdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_2cafe0:
    // 0x2cafe0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cafe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cafe4:
    // 0x2cafe4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2cafe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2cafe8:
    // 0x2cafe8: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2cafe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_2cafec:
    // 0x2cafec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2cafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2caff0:
    // 0x2caff0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2caff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2caff4:
    // 0x2caff4: 0xe7a101d8  swc1        $f1, 0x1D8($sp)
    ctx->pc = 0x2caff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2caff8:
    // 0x2caff8: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x2caff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2caffc:
    // 0x2caffc: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2caffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb000:
    // 0x2cb000: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2cb000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb004:
    // 0x2cb004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb008:
    // 0x2cb008: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2cb008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cb00c:
    // 0x2cb00c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2cb00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb010:
    // 0x2cb010: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x2cb010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb014:
    // 0x2cb014: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb018:
    // 0x2cb018: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2cb018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2cb01c:
    // 0x2cb01c: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2cb01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb020:
    // 0x2cb020: 0xc7a201d8  lwc1        $f2, 0x1D8($sp)
    ctx->pc = 0x2cb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb024:
    // 0x2cb024: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cb024u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cb028:
    // 0x2cb028: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x2cb028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2cb02c:
    // 0x2cb02c: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2cb02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb030:
    // 0x2cb030: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2cb030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb034:
    // 0x2cb034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb038:
    // 0x2cb038: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2cb038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2cb03c:
    // 0x2cb03c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2cb03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2cb040:
    // 0x2cb040: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb044:
    // 0x2cb044: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x2cb044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb048:
    // 0x2cb048: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cb048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb04c:
    // 0x2cb04c: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2cb04cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2cb050:
    // 0x2cb050: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2cb050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb054:
    // 0x2cb054: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2cb054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb058:
    // 0x2cb058: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb05c:
    // 0x2cb05c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2cb05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2cb060:
    // 0x2cb060: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2cb060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb064:
    // 0x2cb064: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x2cb064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb068:
    // 0x2cb068: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb06c:
    // 0x2cb06c: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2cb06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2cb070:
    // 0x2cb070: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2cb070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb074:
    // 0x2cb074: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x2cb074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb078:
    // 0x2cb078: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb07c:
    // 0x2cb07c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2cb07cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2cb080:
    // 0x2cb080: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2cb080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2cb084:
    // 0x2cb084: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2cb084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2cb088:
    // 0x2cb088: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2cb088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2cb08c:
    // 0x2cb08c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2cb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_2cb090:
    // 0x2cb090: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2cb090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2cb094:
    // 0x2cb094: 0x6a830037  ldl         $v1, 0x37($s4)
    ctx->pc = 0x2cb094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb098:
    // 0x2cb098: 0x6e830030  ldr         $v1, 0x30($s4)
    ctx->pc = 0x2cb098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb09c:
    // 0x2cb09c: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x2cb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2cb0a0:
    // 0x2cb0a0: 0xb2230037  sdl         $v1, 0x37($s1)
    ctx->pc = 0x2cb0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb0a4:
    // 0x2cb0a4: 0xb6230030  sdr         $v1, 0x30($s1)
    ctx->pc = 0x2cb0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb0a8:
    // 0x2cb0a8: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x2cb0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
label_2cb0ac:
    // 0x2cb0ac: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2cb0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb0b0:
    // 0x2cb0b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cb0b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cb0b4:
    // 0x2cb0b4: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2cb0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2cb0b8:
    // 0x2cb0b8: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x2cb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb0bc:
    // 0x2cb0bc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cb0bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2cb0c0:
    // 0x2cb0c0: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x2cb0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_2cb0c4:
    // 0x2cb0c4: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x2cb0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb0c8:
    // 0x2cb0c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cb0c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cb0cc:
    // 0x2cb0cc: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2cb0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2cb0d0:
    // 0x2cb0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb0d4:
    // 0x2cb0d4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2cb0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2cb0d8:
    // 0x2cb0d8: 0xc092f34  jal         func_24BCD0
label_2cb0dc:
    if (ctx->pc == 0x2CB0DCu) {
        ctx->pc = 0x2CB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0D8u;
        // 0x2cb0dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0E0u;
        goto label_2cb0e0;
    }
    ctx->pc = 0x2CB0D8u;
    SET_GPR_U32(ctx, 31, 0x2CB0E0u);
    ctx->pc = 0x2CB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB0D8u;
    // 0x2cb0dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2CB0D8u, 0x2CB0E0u)) {
        return;
    }
    ctx->pc = 0x2CB0E0u;
label_2cb0e0:
    // 0x2cb0e0: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x2cb0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2cb0e4:
    // 0x2cb0e4: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x2cb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_2cb0e8:
    // 0x2cb0e8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2cb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2cb0ec:
    // 0x2cb0ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2cb0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2cb0f0:
    // 0x2cb0f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2cb0f4:
    if (ctx->pc == 0x2CB0F4u) {
        ctx->pc = 0x2CB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F0u;
        // 0x2cb0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0F8u;
        goto label_2cb0f8;
    }
    ctx->pc = 0x2CB0F0u;
    {
        const bool branch_taken_0x2cb0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F0u;
        // 0x2cb0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0f0) {
            ctx->pc = 0x2CB100u;
            goto label_2cb100;
        }
    }
    ctx->pc = 0x2CB0F8u;
label_2cb0f8:
    // 0x2cb0f8: 0xc092fa4  jal         func_24BE90
label_2cb0fc:
    if (ctx->pc == 0x2CB0FCu) {
        ctx->pc = 0x2CB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F8u;
        // 0x2cb0fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB100u;
        goto label_2cb100;
    }
    ctx->pc = 0x2CB0F8u;
    SET_GPR_U32(ctx, 31, 0x2CB100u);
    ctx->pc = 0x2CB0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB0F8u;
    // 0x2cb0fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2CB0F8u, 0x2CB100u)) {
        return;
    }
    ctx->pc = 0x2CB100u;
label_2cb100:
    // 0x2cb100: 0x6ba30177  ldl         $v1, 0x177($sp)
    ctx->pc = 0x2cb100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb104:
    // 0x2cb104: 0x6fa30170  ldr         $v1, 0x170($sp)
    ctx->pc = 0x2cb104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb108:
    // 0x2cb108: 0x6ba4017f  ldl         $a0, 0x17F($sp)
    ctx->pc = 0x2cb108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2cb10c:
    // 0x2cb10c: 0x6fa40178  ldr         $a0, 0x178($sp)
    ctx->pc = 0x2cb10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2cb110:
    // 0x2cb110: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2cb110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb114:
    // 0x2cb114: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2cb114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb118:
    // 0x2cb118: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x2cb118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb11c:
    // 0x2cb11c: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x2cb11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb120:
    // 0x2cb120: 0x6ba30187  ldl         $v1, 0x187($sp)
    ctx->pc = 0x2cb120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb124:
    // 0x2cb124: 0x6fa30180  ldr         $v1, 0x180($sp)
    ctx->pc = 0x2cb124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb128:
    // 0x2cb128: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_2cb12c:
    // 0x2cb12c: 0xb2830037  sdl         $v1, 0x37($s4)
    ctx->pc = 0x2cb12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb130:
    // 0x2cb130: 0xb6830030  sdr         $v1, 0x30($s4)
    ctx->pc = 0x2cb130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb134:
    // 0x2cb134: 0xae840038  sw          $a0, 0x38($s4)
    ctx->pc = 0x2cb134u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 4));
label_2cb138:
    // 0x2cb138: 0x12a000ab  beqz        $s5, . + 4 + (0xAB << 2)
label_2cb13c:
    if (ctx->pc == 0x2CB13Cu) {
        ctx->pc = 0x2CB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB138u;
        // 0x2cb13c: 0x8fd70004  lw          $s7, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB140u;
        goto label_2cb140;
    }
    ctx->pc = 0x2CB138u;
    {
        const bool branch_taken_0x2cb138 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB138u;
        // 0x2cb13c: 0x8fd70004  lw          $s7, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb138) {
            ctx->pc = 0x2CB3E8u;
            goto label_2cb3e8;
        }
    }
    ctx->pc = 0x2CB140u;
label_2cb140:
    // 0x2cb140: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2cb140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cb144:
    // 0x2cb144: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cb148:
    // 0x2cb148: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2cb148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cb14c:
    // 0x2cb14c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2cb14cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2cb150:
    // 0x2cb150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb154:
    // 0x2cb154: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cb154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cb158:
    // 0x2cb158: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2cb158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2cb15c:
    // 0x2cb15c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb160:
    // 0x2cb160: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2cb160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb164:
    // 0x2cb164: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x2cb164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2cb168:
    // 0x2cb168: 0x8ef10010  lw          $s1, 0x10($s7)
    ctx->pc = 0x2cb168u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2cb16c:
    // 0x2cb16c: 0xa3a021  addu        $s4, $a1, $v1
    ctx->pc = 0x2cb16cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cb170:
    // 0x2cb170: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2cb170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2cb174:
    // 0x2cb174: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2cb174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cb178:
    // 0x2cb178: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x2cb178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb17c:
    // 0x2cb17c: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x2cb17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb180:
    // 0x2cb180: 0xb3a201e7  sdl         $v0, 0x1E7($sp)
    ctx->pc = 0x2cb180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb184:
    // 0x2cb184: 0xb7a201e0  sdr         $v0, 0x1E0($sp)
    ctx->pc = 0x2cb184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb188:
    // 0x2cb188: 0xb3a301ef  sdl         $v1, 0x1EF($sp)
    ctx->pc = 0x2cb188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb18c:
    // 0x2cb18c: 0xb7a301e8  sdr         $v1, 0x1E8($sp)
    ctx->pc = 0x2cb18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb190:
    // 0x2cb190: 0x6a820037  ldl         $v0, 0x37($s4)
    ctx->pc = 0x2cb190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2cb194:
    // 0x2cb194: 0x6e820030  ldr         $v0, 0x30($s4)
    ctx->pc = 0x2cb194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cb198:
    // 0x2cb198: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x2cb198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2cb19c:
    // 0x2cb19c: 0xb3a201f7  sdl         $v0, 0x1F7($sp)
    ctx->pc = 0x2cb19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb1a0:
    // 0x2cb1a0: 0xb7a201f0  sdr         $v0, 0x1F0($sp)
    ctx->pc = 0x2cb1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb1a4:
    // 0x2cb1a4: 0xafa301f8  sw          $v1, 0x1F8($sp)
    ctx->pc = 0x2cb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
label_2cb1a8:
    // 0x2cb1a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2cb1ac:
    if (ctx->pc == 0x2CB1ACu) {
        ctx->pc = 0x2CB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1A8u;
        // 0x2cb1ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1B0u;
        goto label_2cb1b0;
    }
    ctx->pc = 0x2CB1A8u;
    {
        const bool branch_taken_0x2cb1a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1A8u;
        // 0x2cb1ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1a8) {
            ctx->pc = 0x2CB1C0u;
            goto label_2cb1c0;
        }
    }
    ctx->pc = 0x2CB1B0u;
label_2cb1b0:
    // 0x2cb1b0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cb1b4:
    // 0x2cb1b4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2cb1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cb1b8:
    // 0x2cb1b8: 0xc0af888  jal         func_2BE220
label_2cb1bc:
    if (ctx->pc == 0x2CB1BCu) {
        ctx->pc = 0x2CB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1B8u;
        // 0x2cb1bc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1C0u;
        goto label_2cb1c0;
    }
    ctx->pc = 0x2CB1B8u;
    SET_GPR_U32(ctx, 31, 0x2CB1C0u);
    ctx->pc = 0x2CB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB1B8u;
    // 0x2cb1bc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2CB1B8u, 0x2CB1C0u)) {
        return;
    }
    ctx->pc = 0x2CB1C0u;
label_2cb1c0:
    // 0x2cb1c0: 0x6a820037  ldl         $v0, 0x37($s4)
    ctx->pc = 0x2cb1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2cb1c4:
    // 0x2cb1c4: 0x6e820030  ldr         $v0, 0x30($s4)
    ctx->pc = 0x2cb1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cb1c8:
    // 0x2cb1c8: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x2cb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2cb1cc:
    // 0x2cb1cc: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2cb1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb1d0:
    // 0x2cb1d0: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2cb1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb1d4:
    // 0x2cb1d4: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2cb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_2cb1d8:
    // 0x2cb1d8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2cb1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb1dc:
    // 0x2cb1dc: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2cb1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2cb1e0:
    // 0x2cb1e0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cb1e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2cb1e4:
    // 0x2cb1e4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2cb1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb1e8:
    // 0x2cb1e8: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2cb1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_2cb1ec:
    // 0x2cb1ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2cb1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb1f0:
    // 0x2cb1f0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2cb1f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2cb1f4:
    // 0x2cb1f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cb1f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2cb1f8:
    // 0x2cb1f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2cb1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2cb1fc:
    // 0x2cb1fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb200:
    // 0x2cb200: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cb200u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2cb204:
    // 0x2cb204: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2cb204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2cb208:
    // 0x2cb208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb20c:
    // 0x2cb20c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x2cb20cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_2cb210:
    // 0x2cb210: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cb210u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2cb214:
    // 0x2cb214: 0xe7a50210  swc1        $f5, 0x210($sp)
    ctx->pc = 0x2cb214u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_2cb218:
    // 0x2cb218: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2cb218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cb21c:
    // 0x2cb21c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2cb21cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2cb220:
    // 0x2cb220: 0xe7a40214  swc1        $f4, 0x214($sp)
    ctx->pc = 0x2cb220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_2cb224:
    // 0x2cb224: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2cb224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb228:
    // 0x2cb228: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2cb228u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2cb22c:
    // 0x2cb22c: 0xe7a30218  swc1        $f3, 0x218($sp)
    ctx->pc = 0x2cb22cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_2cb230:
    // 0x2cb230: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2cb230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb234:
    // 0x2cb234: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2cb234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2cb238:
    // 0x2cb238: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x2cb238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_2cb23c:
    // 0x2cb23c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2cb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb240:
    // 0x2cb240: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2cb240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2cb244:
    // 0x2cb244: 0xe7a10224  swc1        $f1, 0x224($sp)
    ctx->pc = 0x2cb244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_2cb248:
    // 0x2cb248: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2cb248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb24c:
    // 0x2cb24c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cb24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2cb250:
    // 0x2cb250: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2cb250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_2cb254:
    // 0x2cb254: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2cb254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb258:
    // 0x2cb258: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cb258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cb25c:
    // 0x2cb25c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2cb25cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2cb260:
    // 0x2cb260: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x2cb260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_2cb264:
    // 0x2cb264: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2cb264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb268:
    // 0x2cb268: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2cb268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2cb26c:
    // 0x2cb26c: 0xe7a20234  swc1        $f2, 0x234($sp)
    ctx->pc = 0x2cb26cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_2cb270:
    // 0x2cb270: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cb270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb274:
    // 0x2cb274: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2cb274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2cb278:
    // 0x2cb278: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2cb278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_2cb27c:
    // 0x2cb27c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cb27cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2cb280:
    // 0x2cb280: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2cb280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb284:
    // 0x2cb284: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x2cb284u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_2cb288:
    // 0x2cb288: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2cb288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2cb28c:
    // 0x2cb28c: 0xe7a10240  swc1        $f1, 0x240($sp)
    ctx->pc = 0x2cb28cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_2cb290:
    // 0x2cb290: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cb290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb294:
    // 0x2cb294: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2cb294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2cb298:
    // 0x2cb298: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2cb298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2cb29c:
    // 0x2cb29c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2cb29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb2a0:
    // 0x2cb2a0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2cb2a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2cb2a4:
    // 0x2cb2a4: 0xe7a10248  swc1        $f1, 0x248($sp)
    ctx->pc = 0x2cb2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2cb2a8:
    // 0x2cb2a8: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x2cb2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2cb2ac:
    // 0x2cb2ac: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x2cb2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb2b0:
    // 0x2cb2b0: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2cb2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb2b4:
    // 0x2cb2b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb2b8:
    // 0x2cb2b8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2cb2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cb2bc:
    // 0x2cb2bc: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x2cb2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb2c0:
    // 0x2cb2c0: 0xc7a10244  lwc1        $f1, 0x244($sp)
    ctx->pc = 0x2cb2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb2c4:
    // 0x2cb2c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb2c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb2c8:
    // 0x2cb2c8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2cb2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2cb2cc:
    // 0x2cb2cc: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x2cb2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb2d0:
    // 0x2cb2d0: 0xc7a20248  lwc1        $f2, 0x248($sp)
    ctx->pc = 0x2cb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb2d4:
    // 0x2cb2d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cb2d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cb2d8:
    // 0x2cb2d8: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x2cb2d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2cb2dc:
    // 0x2cb2dc: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x2cb2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb2e0:
    // 0x2cb2e0: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2cb2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb2e4:
    // 0x2cb2e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb2e8:
    // 0x2cb2e8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2cb2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2cb2ec:
    // 0x2cb2ec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2cb2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2cb2f0:
    // 0x2cb2f0: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x2cb2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb2f4:
    // 0x2cb2f4: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2cb2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb2f8:
    // 0x2cb2f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cb2f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb2fc:
    // 0x2cb2fc: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2cb2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2cb300:
    // 0x2cb300: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x2cb300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb304:
    // 0x2cb304: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2cb304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb308:
    // 0x2cb308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb30c:
    // 0x2cb30c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2cb30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2cb310:
    // 0x2cb310: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x2cb310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb314:
    // 0x2cb314: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2cb314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb318:
    // 0x2cb318: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb31c:
    // 0x2cb31c: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2cb31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2cb320:
    // 0x2cb320: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2cb320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb324:
    // 0x2cb324: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x2cb324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb328:
    // 0x2cb328: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cb328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cb32c:
    // 0x2cb32c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2cb32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2cb330:
    // 0x2cb330: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2cb330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2cb334:
    // 0x2cb334: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2cb334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2cb338:
    // 0x2cb338: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2cb338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2cb33c:
    // 0x2cb33c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2cb33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_2cb340:
    // 0x2cb340: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2cb340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2cb344:
    // 0x2cb344: 0x6a830037  ldl         $v1, 0x37($s4)
    ctx->pc = 0x2cb344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb348:
    // 0x2cb348: 0x6e830030  ldr         $v1, 0x30($s4)
    ctx->pc = 0x2cb348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb34c:
    // 0x2cb34c: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2cb350:
    // 0x2cb350: 0xb2230037  sdl         $v1, 0x37($s1)
    ctx->pc = 0x2cb350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb354:
    // 0x2cb354: 0xb6230030  sdr         $v1, 0x30($s1)
    ctx->pc = 0x2cb354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb358:
    // 0x2cb358: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x2cb358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
label_2cb35c:
    // 0x2cb35c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2cb35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb360:
    // 0x2cb360: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cb360u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cb364:
    // 0x2cb364: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2cb364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2cb368:
    // 0x2cb368: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x2cb368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb36c:
    // 0x2cb36c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cb36cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2cb370:
    // 0x2cb370: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x2cb370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_2cb374:
    // 0x2cb374: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2cb374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb378:
    // 0x2cb378: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cb378u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cb37c:
    // 0x2cb37c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x2cb37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_2cb380:
    // 0x2cb380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb384:
    // 0x2cb384: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2cb384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2cb388:
    // 0x2cb388: 0xc092f34  jal         func_24BCD0
label_2cb38c:
    if (ctx->pc == 0x2CB38Cu) {
        ctx->pc = 0x2CB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB388u;
        // 0x2cb38c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB390u;
        goto label_2cb390;
    }
    ctx->pc = 0x2CB388u;
    SET_GPR_U32(ctx, 31, 0x2CB390u);
    ctx->pc = 0x2CB38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB388u;
    // 0x2cb38c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2CB388u, 0x2CB390u)) {
        return;
    }
    ctx->pc = 0x2CB390u;
label_2cb390:
    // 0x2cb390: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x2cb390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2cb394:
    // 0x2cb394: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x2cb394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_2cb398:
    // 0x2cb398: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2cb398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2cb39c:
    // 0x2cb39c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2cb39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2cb3a0:
    // 0x2cb3a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2cb3a4:
    if (ctx->pc == 0x2CB3A4u) {
        ctx->pc = 0x2CB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A0u;
        // 0x2cb3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3A8u;
        goto label_2cb3a8;
    }
    ctx->pc = 0x2CB3A0u;
    {
        const bool branch_taken_0x2cb3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A0u;
        // 0x2cb3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3a0) {
            ctx->pc = 0x2CB3B0u;
            goto label_2cb3b0;
        }
    }
    ctx->pc = 0x2CB3A8u;
label_2cb3a8:
    // 0x2cb3a8: 0xc092fa4  jal         func_24BE90
label_2cb3ac:
    if (ctx->pc == 0x2CB3ACu) {
        ctx->pc = 0x2CB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A8u;
        // 0x2cb3ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB3B0u;
        goto label_2cb3b0;
    }
    ctx->pc = 0x2CB3A8u;
    SET_GPR_U32(ctx, 31, 0x2CB3B0u);
    ctx->pc = 0x2CB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3A8u;
    // 0x2cb3ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2CB3A8u, 0x2CB3B0u)) {
        return;
    }
    ctx->pc = 0x2CB3B0u;
label_2cb3b0:
    // 0x2cb3b0: 0x6ba301e7  ldl         $v1, 0x1E7($sp)
    ctx->pc = 0x2cb3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb3b4:
    // 0x2cb3b4: 0x6fa301e0  ldr         $v1, 0x1E0($sp)
    ctx->pc = 0x2cb3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb3b8:
    // 0x2cb3b8: 0x6ba401ef  ldl         $a0, 0x1EF($sp)
    ctx->pc = 0x2cb3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2cb3bc:
    // 0x2cb3bc: 0x6fa401e8  ldr         $a0, 0x1E8($sp)
    ctx->pc = 0x2cb3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2cb3c0:
    // 0x2cb3c0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2cb3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb3c4:
    // 0x2cb3c4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2cb3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb3c8:
    // 0x2cb3c8: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x2cb3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb3cc:
    // 0x2cb3cc: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x2cb3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb3d0:
    // 0x2cb3d0: 0x6ba301f7  ldl         $v1, 0x1F7($sp)
    ctx->pc = 0x2cb3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb3d4:
    // 0x2cb3d4: 0x6fa301f0  ldr         $v1, 0x1F0($sp)
    ctx->pc = 0x2cb3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cb3d8:
    // 0x2cb3d8: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x2cb3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_2cb3dc:
    // 0x2cb3dc: 0xb2830037  sdl         $v1, 0x37($s4)
    ctx->pc = 0x2cb3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb3e0:
    // 0x2cb3e0: 0xb6830030  sdr         $v1, 0x30($s4)
    ctx->pc = 0x2cb3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cb3e4:
    // 0x2cb3e4: 0xae840038  sw          $a0, 0x38($s4)
    ctx->pc = 0x2cb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 4));
label_2cb3e8:
    // 0x2cb3e8: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x2cb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_2cb3ec:
    // 0x2cb3ec: 0x4615e001  sub.s       $f0, $f28, $f21
    ctx->pc = 0x2cb3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[21]);
label_2cb3f0:
    // 0x2cb3f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2cb3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3f4:
    // 0x2cb3f4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2cb3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_2cb3f8:
    // 0x2cb3f8: 0xc7a102ac  lwc1        $f1, 0x2AC($sp)
    ctx->pc = 0x2cb3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb3fc:
    // 0x2cb3fc: 0xc7a202b0  lwc1        $f2, 0x2B0($sp)
    ctx->pc = 0x2cb3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb400:
    // 0x2cb400: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x2cb400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_2cb404:
    // 0x2cb404: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x2cb404u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2cb408:
    // 0x2cb408: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x2cb408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_2cb40c:
    // 0x2cb40c: 0x8fa5029c  lw          $a1, 0x29C($sp)
    ctx->pc = 0x2cb40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_2cb410:
    // 0x2cb410: 0xc0b18e2  jal         func_2C6388
label_2cb414:
    if (ctx->pc == 0x2CB414u) {
        ctx->pc = 0x2CB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB410u;
        // 0x2cb414: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB418u;
        goto label_2cb418;
    }
    ctx->pc = 0x2CB410u;
    SET_GPR_U32(ctx, 31, 0x2CB418u);
    ctx->pc = 0x2CB414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB410u;
    // 0x2cb414: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2CB410u, 0x2CB418u)) {
        return;
    }
    ctx->pc = 0x2CB418u;
label_2cb418:
    // 0x2cb418: 0x1040fe85  beqz        $v0, . + 4 + (-0x17B << 2)
label_2cb41c:
    if (ctx->pc == 0x2CB41Cu) {
        ctx->pc = 0x2CB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB418u;
        // 0x2cb41c: 0x8fa202b8  lw          $v0, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB420u;
        goto label_2cb420;
    }
    ctx->pc = 0x2CB418u;
    {
        const bool branch_taken_0x2cb418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB418u;
        // 0x2cb41c: 0x8fa202b8  lw          $v0, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb418) {
            ctx->pc = 0x2CAE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cae30;
        }
    }
    ctx->pc = 0x2CB420u;
label_2cb420:
    // 0x2cb420: 0x27a90290  addiu       $t1, $sp, 0x290
    ctx->pc = 0x2cb420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2cb424:
    // 0x2cb424: 0x8fa302bc  lw          $v1, 0x2BC($sp)
    ctx->pc = 0x2cb424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_2cb428:
    // 0x2cb428: 0x27aa0294  addiu       $t2, $sp, 0x294
    ctx->pc = 0x2cb428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
label_2cb42c:
    // 0x2cb42c: 0x8c50002c  lw          $s0, 0x2C($v0)
    ctx->pc = 0x2cb42cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2cb430:
    // 0x2cb430: 0x27ab0298  addiu       $t3, $sp, 0x298
    ctx->pc = 0x2cb430u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_2cb434:
    // 0x2cb434: 0xc7ac02a8  lwc1        $f12, 0x2A8($sp)
    ctx->pc = 0x2cb434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cb438:
    // 0x2cb438: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x2cb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb43c:
    // 0x2cb43c: 0x26080100  addiu       $t0, $s0, 0x100
    ctx->pc = 0x2cb43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2cb440:
    // 0x2cb440: 0x96050054  lhu         $a1, 0x54($s0)
    ctx->pc = 0x2cb440u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
label_2cb444:
    // 0x2cb444: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x2cb444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_2cb448:
    // 0x2cb448: 0x960700d4  lhu         $a3, 0xD4($s0)
    ctx->pc = 0x2cb448u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
label_2cb44c:
    // 0x2cb44c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2cb44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_2cb450:
    // 0x2cb450: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2cb450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2cb454:
    // 0x2cb454: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x2cb454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_2cb458:
    // 0x2cb458: 0x8e0600d0  lw          $a2, 0xD0($s0)
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_2cb45c:
    // 0x2cb45c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2cb45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2cb460:
    // 0x2cb460: 0xc0b33d0  jal         func_2CCF40
label_2cb464:
    if (ctx->pc == 0x2CB464u) {
        ctx->pc = 0x2CB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB460u;
        // 0x2cb464: 0xc60d010c  lwc1        $f13, 0x10C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB468u;
        goto label_2cb468;
    }
    ctx->pc = 0x2CB460u;
    SET_GPR_U32(ctx, 31, 0x2CB468u);
    ctx->pc = 0x2CB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB460u;
    // 0x2cb464: 0xc60d010c  lwc1        $f13, 0x10C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CCF40u, 0x2CB460u, 0x2CB468u)) {
        return;
    }
    ctx->pc = 0x2CB468u;
label_2cb468:
    // 0x2cb468: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x2cb468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb46c:
    // 0x2cb46c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cb46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb470:
    // 0x2cb470: 0x4600e406  mov.s       $f16, $f28
    ctx->pc = 0x2cb470u;
    ctx->f[16] = FPU_MOV_S(ctx->f[28]);
label_2cb474:
    // 0x2cb474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb478:
    // 0x2cb478: 0x10c000b5  beqz        $a2, . + 4 + (0xB5 << 2)
label_2cb47c:
    if (ctx->pc == 0x2CB47Cu) {
        ctx->pc = 0x2CB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB478u;
        // 0x2cb47c: 0x461b0441  sub.s       $f17, $f0, $f27 (Delay Slot)
        ctx->f[17] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB480u;
        goto label_2cb480;
    }
    ctx->pc = 0x2CB478u;
    {
        const bool branch_taken_0x2cb478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB478u;
        // 0x2cb47c: 0x461b0441  sub.s       $f17, $f0, $f27 (Delay Slot)
        ctx->f[17] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb478) {
            ctx->pc = 0x2CB750u;
            goto label_2cb750;
        }
    }
    ctx->pc = 0x2CB480u;
label_2cb480:
    // 0x2cb480: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2cb480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cb484:
    // 0x2cb484: 0xc7b90050  lwc1        $f25, 0x50($sp)
    ctx->pc = 0x2cb484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2cb488:
    // 0x2cb488: 0xc7b80054  lwc1        $f24, 0x54($sp)
    ctx->pc = 0x2cb488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2cb48c:
    // 0x2cb48c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2cb48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cb490:
    // 0x2cb490: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2cb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cb494:
    // 0x2cb494: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2cb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cb498:
    // 0x2cb498: 0xc7b30064  lwc1        $f19, 0x64($sp)
    ctx->pc = 0x2cb498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2cb49c:
    // 0x2cb49c: 0xc7b20068  lwc1        $f18, 0x68($sp)
    ctx->pc = 0x2cb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2cb4a0:
    // 0x2cb4a0: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x2cb4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_2cb4a4:
    // 0x2cb4a4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2cb4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_2cb4a8:
    // 0x2cb4a8: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x2cb4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_2cb4ac:
    // 0x2cb4ac: 0x0  nop
    ctx->pc = 0x2cb4acu;
    // NOP
label_2cb4b0:
    // 0x2cb4b0: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_2cb4b4:
    if (ctx->pc == 0x2CB4B4u) {
        ctx->pc = 0x2CB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B0u;
        // 0x2cb4b4: 0xc4850000  lwc1        $f5, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4B8u;
        goto label_2cb4b8;
    }
    ctx->pc = 0x2CB4B0u;
    {
        const bool branch_taken_0x2cb4b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4b0) {
            ctx->pc = 0x2CB4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB4B0u;
            // 0x2cb4b4: 0xc4850000  lwc1        $f5, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB4C8u;
            goto label_2cb4c8;
        }
    }
    ctx->pc = 0x2CB4B8u;
label_2cb4b8:
    // 0x2cb4b8: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x2cb4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_2cb4bc:
    // 0x2cb4bc: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x2cb4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_2cb4c0:
    // 0x2cb4c0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2cb4c4:
    if (ctx->pc == 0x2CB4C4u) {
        ctx->pc = 0x2CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4C0u;
        // 0x2cb4c4: 0xafa00250  sw          $zero, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB4C8u;
        goto label_2cb4c8;
    }
    ctx->pc = 0x2CB4C0u;
    {
        const bool branch_taken_0x2cb4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4C0u;
        // 0x2cb4c4: 0xafa00250  sw          $zero, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4c0) {
            ctx->pc = 0x2CB558u;
            goto label_2cb558;
        }
    }
    ctx->pc = 0x2CB4C8u;
label_2cb4c8:
    // 0x2cb4c8: 0x46192941  sub.s       $f5, $f5, $f25
    ctx->pc = 0x2cb4c8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[25]);
label_2cb4cc:
    // 0x2cb4cc: 0xe7a50270  swc1        $f5, 0x270($sp)
    ctx->pc = 0x2cb4ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_2cb4d0:
    // 0x2cb4d0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2cb4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cb4d4:
    // 0x2cb4d4: 0x46182101  sub.s       $f4, $f4, $f24
    ctx->pc = 0x2cb4d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[24]);
label_2cb4d8:
    // 0x2cb4d8: 0xe7a40274  swc1        $f4, 0x274($sp)
    ctx->pc = 0x2cb4d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_2cb4dc:
    // 0x2cb4dc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2cb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb4e0:
    // 0x2cb4e0: 0x46170841  sub.s       $f1, $f1, $f23
    ctx->pc = 0x2cb4e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_2cb4e4:
    // 0x2cb4e4: 0xe7a10278  swc1        $f1, 0x278($sp)
    ctx->pc = 0x2cb4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_2cb4e8:
    // 0x2cb4e8: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x2cb4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb4ec:
    // 0x2cb4ec: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2cb4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb4f0:
    // 0x2cb4f0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cb4f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2cb4f4:
    // 0x2cb4f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cb4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2cb4f8:
    // 0x2cb4f8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2cb4f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2cb4fc:
    // 0x2cb4fc: 0xe7a30250  swc1        $f3, 0x250($sp)
    ctx->pc = 0x2cb4fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_2cb500:
    // 0x2cb500: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x2cb500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb504:
    // 0x2cb504: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2cb504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb508:
    // 0x2cb508: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2cb508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2cb50c:
    // 0x2cb50c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cb510:
    // 0x2cb510: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cb510u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cb514:
    // 0x2cb514: 0xe7a20254  swc1        $f2, 0x254($sp)
    ctx->pc = 0x2cb514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_2cb518:
    // 0x2cb518: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2cb518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb51c:
    // 0x2cb51c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2cb51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb520:
    // 0x2cb520: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2cb520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2cb524:
    // 0x2cb524: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2cb524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2cb528:
    // 0x2cb528: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb52c:
    // 0x2cb52c: 0xe7a10258  swc1        $f1, 0x258($sp)
    ctx->pc = 0x2cb52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_2cb530:
    // 0x2cb530: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2cb530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb534:
    // 0x2cb534: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cb534u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2cb538:
    // 0x2cb538: 0xe7a30250  swc1        $f3, 0x250($sp)
    ctx->pc = 0x2cb538u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_2cb53c:
    // 0x2cb53c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2cb53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb540:
    // 0x2cb540: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cb540u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2cb544:
    // 0x2cb544: 0xe7a20254  swc1        $f2, 0x254($sp)
    ctx->pc = 0x2cb544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_2cb548:
    // 0x2cb548: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2cb548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb54c:
    // 0x2cb54c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cb54cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb550:
    // 0x2cb550: 0xe7a10258  swc1        $f1, 0x258($sp)
    ctx->pc = 0x2cb550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_2cb554:
    // 0x2cb554: 0x0  nop
    ctx->pc = 0x2cb554u;
    // NOP
label_2cb558:
    // 0x2cb558: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_2cb55c:
    if (ctx->pc == 0x2CB55Cu) {
        ctx->pc = 0x2CB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB558u;
        // 0x2cb55c: 0xc4650000  lwc1        $f5, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB560u;
        goto label_2cb560;
    }
    ctx->pc = 0x2CB558u;
    {
        const bool branch_taken_0x2cb558 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb558) {
            ctx->pc = 0x2CB55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB558u;
            // 0x2cb55c: 0xc4650000  lwc1        $f5, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB570u;
            goto label_2cb570;
        }
    }
    ctx->pc = 0x2CB560u;
label_2cb560:
    // 0x2cb560: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x2cb560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_2cb564:
    // 0x2cb564: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x2cb564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_2cb568:
    // 0x2cb568: 0x10000025  b           . + 4 + (0x25 << 2)
label_2cb56c:
    if (ctx->pc == 0x2CB56Cu) {
        ctx->pc = 0x2CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB568u;
        // 0x2cb56c: 0xafa00260  sw          $zero, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB570u;
        goto label_2cb570;
    }
    ctx->pc = 0x2CB568u;
    {
        const bool branch_taken_0x2cb568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB568u;
        // 0x2cb56c: 0xafa00260  sw          $zero, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb568) {
            ctx->pc = 0x2CB600u;
            goto label_2cb600;
        }
    }
    ctx->pc = 0x2CB570u;
label_2cb570:
    // 0x2cb570: 0x46162941  sub.s       $f5, $f5, $f22
    ctx->pc = 0x2cb570u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[22]);
label_2cb574:
    // 0x2cb574: 0xe7a50280  swc1        $f5, 0x280($sp)
    ctx->pc = 0x2cb574u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2cb578:
    // 0x2cb578: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2cb578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cb57c:
    // 0x2cb57c: 0x46132101  sub.s       $f4, $f4, $f19
    ctx->pc = 0x2cb57cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[19]);
label_2cb580:
    // 0x2cb580: 0xe7a40284  swc1        $f4, 0x284($sp)
    ctx->pc = 0x2cb580u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_2cb584:
    // 0x2cb584: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2cb584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb588:
    // 0x2cb588: 0x46120841  sub.s       $f1, $f1, $f18
    ctx->pc = 0x2cb588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[18]);
label_2cb58c:
    // 0x2cb58c: 0xe7a10288  swc1        $f1, 0x288($sp)
    ctx->pc = 0x2cb58cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_2cb590:
    // 0x2cb590: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x2cb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb594:
    // 0x2cb594: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2cb594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb598:
    // 0x2cb598: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cb598u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2cb59c:
    // 0x2cb59c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cb59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2cb5a0:
    // 0x2cb5a0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2cb5a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2cb5a4:
    // 0x2cb5a4: 0xe7a30260  swc1        $f3, 0x260($sp)
    ctx->pc = 0x2cb5a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_2cb5a8:
    // 0x2cb5a8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x2cb5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb5ac:
    // 0x2cb5ac: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2cb5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb5b0:
    // 0x2cb5b0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2cb5b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2cb5b4:
    // 0x2cb5b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cb5b8:
    // 0x2cb5b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cb5b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cb5bc:
    // 0x2cb5bc: 0xe7a20264  swc1        $f2, 0x264($sp)
    ctx->pc = 0x2cb5bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_2cb5c0:
    // 0x2cb5c0: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2cb5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb5c4:
    // 0x2cb5c4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2cb5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb5c8:
    // 0x2cb5c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2cb5c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2cb5cc:
    // 0x2cb5cc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2cb5ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2cb5d0:
    // 0x2cb5d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb5d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb5d4:
    // 0x2cb5d4: 0xe7a10268  swc1        $f1, 0x268($sp)
    ctx->pc = 0x2cb5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_2cb5d8:
    // 0x2cb5d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2cb5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb5dc:
    // 0x2cb5dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cb5dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2cb5e0:
    // 0x2cb5e0: 0xe7a30260  swc1        $f3, 0x260($sp)
    ctx->pc = 0x2cb5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_2cb5e4:
    // 0x2cb5e4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cb5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb5e8:
    // 0x2cb5e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cb5e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2cb5ec:
    // 0x2cb5ec: 0xe7a20264  swc1        $f2, 0x264($sp)
    ctx->pc = 0x2cb5ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_2cb5f0:
    // 0x2cb5f0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cb5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb5f4:
    // 0x2cb5f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cb5f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb5f8:
    // 0x2cb5f8: 0xe7a10268  swc1        $f1, 0x268($sp)
    ctx->pc = 0x2cb5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_2cb5fc:
    // 0x2cb5fc: 0x0  nop
    ctx->pc = 0x2cb5fcu;
    // NOP
label_2cb600:
    // 0x2cb600: 0xc7a00260  lwc1        $f0, 0x260($sp)
    ctx->pc = 0x2cb600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb604:
    // 0x2cb604: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x2cb604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb608:
    // 0x2cb608: 0xc7a30254  lwc1        $f3, 0x254($sp)
    ctx->pc = 0x2cb608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb60c:
    // 0x2cb60c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cb60cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cb610:
    // 0x2cb610: 0xc7a40264  lwc1        $f4, 0x264($sp)
    ctx->pc = 0x2cb610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cb614:
    // 0x2cb614: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x2cb614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb618:
    // 0x2cb618: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x2cb618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb61c:
    // 0x2cb61c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2cb61cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_2cb620:
    // 0x2cb620: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2cb620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2cb624:
    // 0x2cb624: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cb624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cb628:
    // 0x2cb628: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2cb628u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2cb62c:
    // 0x2cb62c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2cb62cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2cb630:
    // 0x2cb630: 0xc60a0100  lwc1        $f10, 0x100($s0)
    ctx->pc = 0x2cb630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2cb634:
    // 0x2cb634: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x2cb634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cb638:
    // 0x2cb638: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2cb638u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_2cb63c:
    // 0x2cb63c: 0xc60e0108  lwc1        $f14, 0x108($s0)
    ctx->pc = 0x2cb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2cb640:
    // 0x2cb640: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x2cb640u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
label_2cb644:
    // 0x2cb644: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x2cb644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
label_2cb648:
    // 0x2cb648: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cb648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2cb64c:
    // 0x2cb64c: 0x460113c0  add.s       $f15, $f2, $f1
    ctx->pc = 0x2cb64cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2cb650:
    // 0x2cb650: 0x461e7834  c.lt.s      $f15, $f30
    ctx->pc = 0x2cb650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb654:
    // 0x2cb654: 0x0  nop
    ctx->pc = 0x2cb654u;
    // NOP
label_2cb658:
    // 0x2cb658: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
label_2cb65c:
    if (ctx->pc == 0x2CB65Cu) {
        ctx->pc = 0x2CB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB658u;
        // 0x2cb65c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB660u;
        goto label_2cb660;
    }
    ctx->pc = 0x2CB658u;
    {
        const bool branch_taken_0x2cb658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb658) {
            ctx->pc = 0x2CB65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB658u;
            // 0x2cb65c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB740u;
            goto label_2cb740;
        }
    }
    ctx->pc = 0x2CB660u;
label_2cb660:
    // 0x2cb660: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2cb660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb664:
    // 0x2cb664: 0xc6020084  lwc1        $f2, 0x84($s0)
    ctx->pc = 0x2cb664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cb668:
    // 0x2cb668: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2cb668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb66c:
    // 0x2cb66c: 0x460a0202  mul.s       $f8, $f0, $f10
    ctx->pc = 0x2cb66cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2cb670:
    // 0x2cb670: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x2cb670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2cb674:
    // 0x2cb674: 0x460d1302  mul.s       $f12, $f2, $f13
    ctx->pc = 0x2cb674u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
label_2cb678:
    // 0x2cb678: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2cb678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb67c:
    // 0x2cb67c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cb680:
    // 0x2cb680: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2cb680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2cb684:
    // 0x2cb684: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2cb684u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2cb688:
    // 0x2cb688: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2cb688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cb68c:
    // 0x2cb68c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2cb68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2cb690:
    // 0x2cb690: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x2cb690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2cb694:
    // 0x2cb694: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x2cb694u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2cb698:
    // 0x2cb698: 0xc6090088  lwc1        $f9, 0x88($s0)
    ctx->pc = 0x2cb698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2cb69c:
    // 0x2cb69c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cb69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2cb6a0:
    // 0x2cb6a0: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x2cb6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_2cb6a4:
    // 0x2cb6a4: 0xc60b008c  lwc1        $f11, 0x8C($s0)
    ctx->pc = 0x2cb6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2cb6a8:
    // 0x2cb6a8: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x2cb6a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
label_2cb6ac:
    // 0x2cb6ac: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x2cb6acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
label_2cb6b0:
    // 0x2cb6b0: 0xc60a000c  lwc1        $f10, 0xC($s0)
    ctx->pc = 0x2cb6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2cb6b4:
    // 0x2cb6b4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2cb6b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_2cb6b8:
    // 0x2cb6b8: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x2cb6b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
label_2cb6bc:
    // 0x2cb6bc: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x2cb6bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
label_2cb6c0:
    // 0x2cb6c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cb6c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2cb6c4:
    // 0x2cb6c4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2cb6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2cb6c8:
    // 0x2cb6c8: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2cb6c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_2cb6cc:
    // 0x2cb6cc: 0x460e39c2  mul.s       $f7, $f7, $f14
    ctx->pc = 0x2cb6ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
label_2cb6d0:
    // 0x2cb6d0: 0x460e4a42  mul.s       $f9, $f9, $f14
    ctx->pc = 0x2cb6d0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
label_2cb6d4:
    // 0x2cb6d4: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x2cb6d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
label_2cb6d8:
    // 0x2cb6d8: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x2cb6d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_2cb6dc:
    // 0x2cb6dc: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x2cb6dcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
label_2cb6e0:
    // 0x2cb6e0: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2cb6e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_2cb6e4:
    // 0x2cb6e4: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x2cb6e4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[8]);
label_2cb6e8:
    // 0x2cb6e8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2cb6e8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
label_2cb6ec:
    // 0x2cb6ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb6ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cb6f0:
    // 0x2cb6f0: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x2cb6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
label_2cb6f4:
    // 0x2cb6f4: 0x46110034  c.lt.s      $f0, $f17
    ctx->pc = 0x2cb6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb6f8:
    // 0x2cb6f8: 0x0  nop
    ctx->pc = 0x2cb6f8u;
    // NOP
label_2cb6fc:
    // 0x2cb6fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2cb700:
    if (ctx->pc == 0x2CB700u) {
        ctx->pc = 0x2CB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6FCu;
        // 0x2cb700: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB704u;
        goto label_2cb704;
    }
    ctx->pc = 0x2CB6FCu;
    {
        const bool branch_taken_0x2cb6fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6FCu;
        // 0x2cb700: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6fc) {
            ctx->pc = 0x2CB708u;
            goto label_2cb708;
        }
    }
    ctx->pc = 0x2CB704u;
label_2cb704:
    // 0x2cb704: 0xe7b10290  swc1        $f17, 0x290($sp)
    ctx->pc = 0x2cb704u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_2cb708:
    // 0x2cb708: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x2cb708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb70c:
    // 0x2cb70c: 0x461a0836  c.le.s      $f1, $f26
    ctx->pc = 0x2cb70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb710:
    // 0x2cb710: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_2cb714:
    if (ctx->pc == 0x2CB714u) {
        ctx->pc = 0x2CB718u;
        goto label_2cb718;
    }
    ctx->pc = 0x2CB710u;
    {
        const bool branch_taken_0x2cb710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb710) {
            ctx->pc = 0x2CB790u;
            goto label_2cb790;
        }
    }
    ctx->pc = 0x2CB718u;
label_2cb718:
    // 0x2cb718: 0x461dd002  mul.s       $f0, $f26, $f29
    ctx->pc = 0x2cb718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[29]);
label_2cb71c:
    // 0x2cb71c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb720:
    // 0x2cb720: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2cb720u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2cb724:
    // 0x2cb724: 0x460f0903  div.s       $f4, $f1, $f15
    ctx->pc = 0x2cb724u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[15]);
label_2cb728:
    // 0x2cb728: 0x46102034  c.lt.s      $f4, $f16
    ctx->pc = 0x2cb728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb72c:
    // 0x2cb72c: 0x0  nop
    ctx->pc = 0x2cb72cu;
    // NOP
label_2cb730:
    // 0x2cb730: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2cb734:
    if (ctx->pc == 0x2CB734u) {
        ctx->pc = 0x2CB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB730u;
        // 0x2cb734: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB738u;
        goto label_2cb738;
    }
    ctx->pc = 0x2CB730u;
    {
        const bool branch_taken_0x2cb730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB730u;
        // 0x2cb734: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb730) {
            ctx->pc = 0x2CB73Cu;
            goto label_2cb73c;
        }
    }
    ctx->pc = 0x2CB738u;
label_2cb738:
    // 0x2cb738: 0x46002406  mov.s       $f16, $f4
    ctx->pc = 0x2cb738u;
    ctx->f[16] = FPU_MOV_S(ctx->f[4]);
label_2cb73c:
    // 0x2cb73c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cb73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2cb740:
    // 0x2cb740: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2cb740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2cb744:
    // 0x2cb744: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2cb744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2cb748:
    // 0x2cb748: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
label_2cb74c:
    if (ctx->pc == 0x2CB74Cu) {
        ctx->pc = 0x2CB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB748u;
        // 0x2cb74c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB750u;
        goto label_2cb750;
    }
    ctx->pc = 0x2CB748u;
    {
        const bool branch_taken_0x2cb748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB748u;
        // 0x2cb74c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb748) {
            ctx->pc = 0x2CB4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb4b0;
        }
    }
    ctx->pc = 0x2CB750u;
label_2cb750:
    // 0x2cb750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb754:
    // 0x2cb754: 0x46008036  c.le.s      $f16, $f0
    ctx->pc = 0x2cb754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb758:
    // 0x2cb758: 0x0  nop
    ctx->pc = 0x2cb758u;
    // NOP
label_2cb75c:
    // 0x2cb75c: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_2cb760:
    if (ctx->pc == 0x2CB760u) {
        ctx->pc = 0x2CB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB75Cu;
        // 0x2cb760: 0x8fa302a0  lw          $v1, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB764u;
        goto label_2cb764;
    }
    ctx->pc = 0x2CB75Cu;
    {
        const bool branch_taken_0x2cb75c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb75c) {
            ctx->pc = 0x2CB760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB75Cu;
            // 0x2cb760: 0x8fa302a0  lw          $v1, 0x2A0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7B8u;
            goto label_2cb7b8;
        }
    }
    ctx->pc = 0x2CB764u;
label_2cb764:
    // 0x2cb764: 0x4610f834  c.lt.s      $f31, $f16
    ctx->pc = 0x2cb764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[31], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb768:
    // 0x2cb768: 0x0  nop
    ctx->pc = 0x2cb768u;
    // NOP
label_2cb76c:
    // 0x2cb76c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2cb770:
    if (ctx->pc == 0x2CB770u) {
        ctx->pc = 0x2CB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB76Cu;
        // 0x2cb770: 0x4600fc06  mov.s       $f16, $f31 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[31]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB774u;
        goto label_2cb774;
    }
    ctx->pc = 0x2CB76Cu;
    {
        const bool branch_taken_0x2cb76c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb76c) {
            ctx->pc = 0x2CB770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB76Cu;
            // 0x2cb770: 0x4600fc06  mov.s       $f16, $f31 (Delay Slot)
            ctx->f[16] = FPU_MOV_S(ctx->f[31]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB774u;
            goto label_2cb774;
        }
    }
    ctx->pc = 0x2CB774u;
label_2cb774:
    // 0x2cb774: 0x4610ad40  add.s       $f21, $f21, $f16
    ctx->pc = 0x2cb774u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[16]);
label_2cb778:
    // 0x2cb778: 0x4615e034  c.lt.s      $f28, $f21
    ctx->pc = 0x2cb778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb77c:
    // 0x2cb77c: 0x0  nop
    ctx->pc = 0x2cb77cu;
    // NOP
label_2cb780:
    // 0x2cb780: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2cb784:
    if (ctx->pc == 0x2CB784u) {
        ctx->pc = 0x2CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB780u;
        // 0x2cb784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB788u;
        goto label_2cb788;
    }
    ctx->pc = 0x2CB780u;
    {
        const bool branch_taken_0x2cb780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB780u;
        // 0x2cb784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb780) {
            ctx->pc = 0x2CB7A0u;
            goto label_2cb7a0;
        }
    }
    ctx->pc = 0x2CB788u;
label_2cb788:
    // 0x2cb788: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2cb78c:
    if (ctx->pc == 0x2CB78Cu) {
        ctx->pc = 0x2CB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB788u;
        // 0x2cb78c: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB790u;
        goto label_2cb790;
    }
    ctx->pc = 0x2CB788u;
    {
        const bool branch_taken_0x2cb788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB788u;
        // 0x2cb78c: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb788) {
            ctx->pc = 0x2CB7FCu;
            goto label_2cb7fc;
        }
    }
    ctx->pc = 0x2CB790u;
label_2cb790:
    // 0x2cb790: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2cb790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2cb794:
    // 0x2cb794: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2cb794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2cb798:
    // 0x2cb798: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_2cb79c:
    if (ctx->pc == 0x2CB79Cu) {
        ctx->pc = 0x2CB7A0u;
        goto label_2cb7a0;
    }
    ctx->pc = 0x2CB798u;
    {
        const bool branch_taken_0x2cb798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb798) {
            ctx->pc = 0x2CB750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb750;
        }
    }
    ctx->pc = 0x2CB7A0u;
label_2cb7a0:
    // 0x2cb7a0: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2cb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_2cb7a4:
    // 0x2cb7a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2cb7a8:
    // 0x2cb7a8: 0xafa202b4  sw          $v0, 0x2B4($sp)
    ctx->pc = 0x2cb7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
label_2cb7ac:
    // 0x2cb7ac: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2cb7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2cb7b0:
    // 0x2cb7b0: 0x1440fdb5  bnez        $v0, . + 4 + (-0x24B << 2)
label_2cb7b4:
    if (ctx->pc == 0x2CB7B4u) {
        ctx->pc = 0x2CB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B0u;
        // 0x2cb7b4: 0x8fa302a0  lw          $v1, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7B8u;
        goto label_2cb7b8;
    }
    ctx->pc = 0x2CB7B0u;
    {
        const bool branch_taken_0x2cb7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B0u;
        // 0x2cb7b4: 0x8fa302a0  lw          $v1, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7b0) {
            ctx->pc = 0x2CAE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cae88;
        }
    }
    ctx->pc = 0x2CB7B8u;
label_2cb7b8:
    // 0x2cb7b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cb7bc:
    if (ctx->pc == 0x2CB7BCu) {
        ctx->pc = 0x2CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B8u;
        // 0x2cb7bc: 0x8fa402a4  lw          $a0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7C0u;
        goto label_2cb7c0;
    }
    ctx->pc = 0x2CB7B8u;
    {
        const bool branch_taken_0x2cb7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B8u;
        // 0x2cb7bc: 0x8fa402a4  lw          $a0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7b8) {
            ctx->pc = 0x2CB7D8u;
            goto label_2cb7d8;
        }
    }
    ctx->pc = 0x2CB7C0u;
label_2cb7c0:
    // 0x2cb7c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2cb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb7c4:
    // 0x2cb7c4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cb7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb7c8:
    // 0x2cb7c8: 0x0  nop
    ctx->pc = 0x2cb7c8u;
    // NOP
label_2cb7cc:
    // 0x2cb7cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2cb7d0:
    if (ctx->pc == 0x2CB7D0u) {
        ctx->pc = 0x2CB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7CCu;
        // 0x2cb7d0: 0xe4750000  swc1        $f21, 0x0($v1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7D4u;
        goto label_2cb7d4;
    }
    ctx->pc = 0x2CB7CCu;
    {
        const bool branch_taken_0x2cb7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb7cc) {
            ctx->pc = 0x2CB7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB7CCu;
            // 0x2cb7d0: 0xe4750000  swc1        $f21, 0x0($v1) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7D4u;
            goto label_2cb7d4;
        }
    }
    ctx->pc = 0x2CB7D4u;
label_2cb7d4:
    // 0x2cb7d4: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x2cb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_2cb7d8:
    // 0x2cb7d8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2cb7dc:
    if (ctx->pc == 0x2CB7DCu) {
        ctx->pc = 0x2CB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7D8u;
        // 0x2cb7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7E0u;
        goto label_2cb7e0;
    }
    ctx->pc = 0x2CB7D8u;
    {
        const bool branch_taken_0x2cb7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7D8u;
        // 0x2cb7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7d8) {
            ctx->pc = 0x2CB7F8u;
            goto label_2cb7f8;
        }
    }
    ctx->pc = 0x2CB7E0u;
label_2cb7e0:
    // 0x2cb7e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2cb7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb7e4:
    // 0x2cb7e4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cb7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb7e8:
    // 0x2cb7e8: 0x0  nop
    ctx->pc = 0x2cb7e8u;
    // NOP
label_2cb7ec:
    // 0x2cb7ec: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_2cb7f0:
    if (ctx->pc == 0x2CB7F0u) {
        ctx->pc = 0x2CB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7ECu;
        // 0x2cb7f0: 0xe4950000  swc1        $f21, 0x0($a0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7F4u;
        goto label_2cb7f4;
    }
    ctx->pc = 0x2CB7ECu;
    {
        const bool branch_taken_0x2cb7ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb7ec) {
            ctx->pc = 0x2CB7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB7ECu;
            // 0x2cb7f0: 0xe4950000  swc1        $f21, 0x0($a0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7F8u;
            goto label_2cb7f8;
        }
    }
    ctx->pc = 0x2CB7F4u;
label_2cb7f4:
    // 0x2cb7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb7f8:
    // 0x2cb7f8: 0x7bb00350  lq          $s0, 0x350($sp)
    ctx->pc = 0x2cb7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_2cb7fc:
    // 0x2cb7fc: 0x7bb10340  lq          $s1, 0x340($sp)
    ctx->pc = 0x2cb7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_2cb800:
    // 0x2cb800: 0x7bb20330  lq          $s2, 0x330($sp)
    ctx->pc = 0x2cb800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_2cb804:
    // 0x2cb804: 0x7bb30320  lq          $s3, 0x320($sp)
    ctx->pc = 0x2cb804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_2cb808:
    // 0x2cb808: 0x7bb40310  lq          $s4, 0x310($sp)
    ctx->pc = 0x2cb808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_2cb80c:
    // 0x2cb80c: 0x7bb50300  lq          $s5, 0x300($sp)
    ctx->pc = 0x2cb80cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_2cb810:
    // 0x2cb810: 0x7bb602f0  lq          $s6, 0x2F0($sp)
    ctx->pc = 0x2cb810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_2cb814:
    // 0x2cb814: 0x7bb702e0  lq          $s7, 0x2E0($sp)
    ctx->pc = 0x2cb814u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_2cb818:
    // 0x2cb818: 0x7bbe02d0  lq          $fp, 0x2D0($sp)
    ctx->pc = 0x2cb818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_2cb81c:
    // 0x2cb81c: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x2cb81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2cb820:
    // 0x2cb820: 0xc7bf03b8  lwc1        $f31, 0x3B8($sp)
    ctx->pc = 0x2cb820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_2cb824:
    // 0x2cb824: 0xc7be03b0  lwc1        $f30, 0x3B0($sp)
    ctx->pc = 0x2cb824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_2cb828:
    // 0x2cb828: 0xc7bd03a8  lwc1        $f29, 0x3A8($sp)
    ctx->pc = 0x2cb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_2cb82c:
    // 0x2cb82c: 0xc7bc03a0  lwc1        $f28, 0x3A0($sp)
    ctx->pc = 0x2cb82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2cb830:
    // 0x2cb830: 0xc7bb0398  lwc1        $f27, 0x398($sp)
    ctx->pc = 0x2cb830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2cb834:
    // 0x2cb834: 0xc7ba0390  lwc1        $f26, 0x390($sp)
    ctx->pc = 0x2cb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2cb838:
    // 0x2cb838: 0xc7b90388  lwc1        $f25, 0x388($sp)
    ctx->pc = 0x2cb838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2cb83c:
    // 0x2cb83c: 0xc7b80380  lwc1        $f24, 0x380($sp)
    ctx->pc = 0x2cb83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2cb840:
    // 0x2cb840: 0xc7b70378  lwc1        $f23, 0x378($sp)
    ctx->pc = 0x2cb840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cb844:
    // 0x2cb844: 0xc7b60370  lwc1        $f22, 0x370($sp)
    ctx->pc = 0x2cb844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cb848:
    // 0x2cb848: 0xc7b50368  lwc1        $f21, 0x368($sp)
    ctx->pc = 0x2cb848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cb84c:
    // 0x2cb84c: 0xc7b40360  lwc1        $f20, 0x360($sp)
    ctx->pc = 0x2cb84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cb850:
    // 0x2cb850: 0x3e00008  jr          $ra
label_2cb854:
    if (ctx->pc == 0x2CB854u) {
        ctx->pc = 0x2CB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB850u;
        // 0x2cb854: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB858u;
        goto label_fallthrough_0x2cb850;
    }
    ctx->pc = 0x2CB850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB850u;
        // 0x2cb854: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cb850:
    ctx->pc = 0x2CB858u;
}
