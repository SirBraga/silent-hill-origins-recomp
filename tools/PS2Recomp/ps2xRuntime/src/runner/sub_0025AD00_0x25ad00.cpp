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

// Function: sub_0025AD00
// Address: 0x25ad00 - 0x25b370
void sub_0025AD00_0x25ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AD00_0x25ad00");
#endif

    switch (ctx->pc) {
        case 0x25ad00u: goto label_25ad00;
        case 0x25ad04u: goto label_25ad04;
        case 0x25ad08u: goto label_25ad08;
        case 0x25ad0cu: goto label_25ad0c;
        case 0x25ad10u: goto label_25ad10;
        case 0x25ad14u: goto label_25ad14;
        case 0x25ad18u: goto label_25ad18;
        case 0x25ad1cu: goto label_25ad1c;
        case 0x25ad20u: goto label_25ad20;
        case 0x25ad24u: goto label_25ad24;
        case 0x25ad28u: goto label_25ad28;
        case 0x25ad2cu: goto label_25ad2c;
        case 0x25ad30u: goto label_25ad30;
        case 0x25ad34u: goto label_25ad34;
        case 0x25ad38u: goto label_25ad38;
        case 0x25ad3cu: goto label_25ad3c;
        case 0x25ad40u: goto label_25ad40;
        case 0x25ad44u: goto label_25ad44;
        case 0x25ad48u: goto label_25ad48;
        case 0x25ad4cu: goto label_25ad4c;
        case 0x25ad50u: goto label_25ad50;
        case 0x25ad54u: goto label_25ad54;
        case 0x25ad58u: goto label_25ad58;
        case 0x25ad5cu: goto label_25ad5c;
        case 0x25ad60u: goto label_25ad60;
        case 0x25ad64u: goto label_25ad64;
        case 0x25ad68u: goto label_25ad68;
        case 0x25ad6cu: goto label_25ad6c;
        case 0x25ad70u: goto label_25ad70;
        case 0x25ad74u: goto label_25ad74;
        case 0x25ad78u: goto label_25ad78;
        case 0x25ad7cu: goto label_25ad7c;
        case 0x25ad80u: goto label_25ad80;
        case 0x25ad84u: goto label_25ad84;
        case 0x25ad88u: goto label_25ad88;
        case 0x25ad8cu: goto label_25ad8c;
        case 0x25ad90u: goto label_25ad90;
        case 0x25ad94u: goto label_25ad94;
        case 0x25ad98u: goto label_25ad98;
        case 0x25ad9cu: goto label_25ad9c;
        case 0x25ada0u: goto label_25ada0;
        case 0x25ada4u: goto label_25ada4;
        case 0x25ada8u: goto label_25ada8;
        case 0x25adacu: goto label_25adac;
        case 0x25adb0u: goto label_25adb0;
        case 0x25adb4u: goto label_25adb4;
        case 0x25adb8u: goto label_25adb8;
        case 0x25adbcu: goto label_25adbc;
        case 0x25adc0u: goto label_25adc0;
        case 0x25adc4u: goto label_25adc4;
        case 0x25adc8u: goto label_25adc8;
        case 0x25adccu: goto label_25adcc;
        case 0x25add0u: goto label_25add0;
        case 0x25add4u: goto label_25add4;
        case 0x25add8u: goto label_25add8;
        case 0x25addcu: goto label_25addc;
        case 0x25ade0u: goto label_25ade0;
        case 0x25ade4u: goto label_25ade4;
        case 0x25ade8u: goto label_25ade8;
        case 0x25adecu: goto label_25adec;
        case 0x25adf0u: goto label_25adf0;
        case 0x25adf4u: goto label_25adf4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25adfcu: goto label_25adfc;
        case 0x25ae00u: goto label_25ae00;
        case 0x25ae04u: goto label_25ae04;
        case 0x25ae08u: goto label_25ae08;
        case 0x25ae0cu: goto label_25ae0c;
        case 0x25ae10u: goto label_25ae10;
        case 0x25ae14u: goto label_25ae14;
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae1cu: goto label_25ae1c;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae24u: goto label_25ae24;
        case 0x25ae28u: goto label_25ae28;
        case 0x25ae2cu: goto label_25ae2c;
        case 0x25ae30u: goto label_25ae30;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae38u: goto label_25ae38;
        case 0x25ae3cu: goto label_25ae3c;
        case 0x25ae40u: goto label_25ae40;
        case 0x25ae44u: goto label_25ae44;
        case 0x25ae48u: goto label_25ae48;
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae50u: goto label_25ae50;
        case 0x25ae54u: goto label_25ae54;
        case 0x25ae58u: goto label_25ae58;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae64u: goto label_25ae64;
        case 0x25ae68u: goto label_25ae68;
        case 0x25ae6cu: goto label_25ae6c;
        case 0x25ae70u: goto label_25ae70;
        case 0x25ae74u: goto label_25ae74;
        case 0x25ae78u: goto label_25ae78;
        case 0x25ae7cu: goto label_25ae7c;
        case 0x25ae80u: goto label_25ae80;
        case 0x25ae84u: goto label_25ae84;
        case 0x25ae88u: goto label_25ae88;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25ae90u: goto label_25ae90;
        case 0x25ae94u: goto label_25ae94;
        case 0x25ae98u: goto label_25ae98;
        case 0x25ae9cu: goto label_25ae9c;
        case 0x25aea0u: goto label_25aea0;
        case 0x25aea4u: goto label_25aea4;
        case 0x25aea8u: goto label_25aea8;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aeb0u: goto label_25aeb0;
        case 0x25aeb4u: goto label_25aeb4;
        case 0x25aeb8u: goto label_25aeb8;
        case 0x25aebcu: goto label_25aebc;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aec8u: goto label_25aec8;
        case 0x25aeccu: goto label_25aecc;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aed8u: goto label_25aed8;
        case 0x25aedcu: goto label_25aedc;
        case 0x25aee0u: goto label_25aee0;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aee8u: goto label_25aee8;
        case 0x25aeecu: goto label_25aeec;
        case 0x25aef0u: goto label_25aef0;
        case 0x25aef4u: goto label_25aef4;
        case 0x25aef8u: goto label_25aef8;
        case 0x25aefcu: goto label_25aefc;
        case 0x25af00u: goto label_25af00;
        case 0x25af04u: goto label_25af04;
        case 0x25af08u: goto label_25af08;
        case 0x25af0cu: goto label_25af0c;
        case 0x25af10u: goto label_25af10;
        case 0x25af14u: goto label_25af14;
        case 0x25af18u: goto label_25af18;
        case 0x25af1cu: goto label_25af1c;
        case 0x25af20u: goto label_25af20;
        case 0x25af24u: goto label_25af24;
        case 0x25af28u: goto label_25af28;
        case 0x25af2cu: goto label_25af2c;
        case 0x25af30u: goto label_25af30;
        case 0x25af34u: goto label_25af34;
        case 0x25af38u: goto label_25af38;
        case 0x25af3cu: goto label_25af3c;
        case 0x25af40u: goto label_25af40;
        case 0x25af44u: goto label_25af44;
        case 0x25af48u: goto label_25af48;
        case 0x25af4cu: goto label_25af4c;
        case 0x25af50u: goto label_25af50;
        case 0x25af54u: goto label_25af54;
        case 0x25af58u: goto label_25af58;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af60u: goto label_25af60;
        case 0x25af64u: goto label_25af64;
        case 0x25af68u: goto label_25af68;
        case 0x25af6cu: goto label_25af6c;
        case 0x25af70u: goto label_25af70;
        case 0x25af74u: goto label_25af74;
        case 0x25af78u: goto label_25af78;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af80u: goto label_25af80;
        case 0x25af84u: goto label_25af84;
        case 0x25af88u: goto label_25af88;
        case 0x25af8cu: goto label_25af8c;
        case 0x25af90u: goto label_25af90;
        case 0x25af94u: goto label_25af94;
        case 0x25af98u: goto label_25af98;
        case 0x25af9cu: goto label_25af9c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afa4u: goto label_25afa4;
        case 0x25afa8u: goto label_25afa8;
        case 0x25afacu: goto label_25afac;
        case 0x25afb0u: goto label_25afb0;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afbcu: goto label_25afbc;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afc8u: goto label_25afc8;
        case 0x25afccu: goto label_25afcc;
        case 0x25afd0u: goto label_25afd0;
        case 0x25afd4u: goto label_25afd4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afdcu: goto label_25afdc;
        case 0x25afe0u: goto label_25afe0;
        case 0x25afe4u: goto label_25afe4;
        case 0x25afe8u: goto label_25afe8;
        case 0x25afecu: goto label_25afec;
        case 0x25aff0u: goto label_25aff0;
        case 0x25aff4u: goto label_25aff4;
        case 0x25aff8u: goto label_25aff8;
        case 0x25affcu: goto label_25affc;
        case 0x25b000u: goto label_25b000;
        case 0x25b004u: goto label_25b004;
        case 0x25b008u: goto label_25b008;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b010u: goto label_25b010;
        case 0x25b014u: goto label_25b014;
        case 0x25b018u: goto label_25b018;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b020u: goto label_25b020;
        case 0x25b024u: goto label_25b024;
        case 0x25b028u: goto label_25b028;
        case 0x25b02cu: goto label_25b02c;
        case 0x25b030u: goto label_25b030;
        case 0x25b034u: goto label_25b034;
        case 0x25b038u: goto label_25b038;
        case 0x25b03cu: goto label_25b03c;
        case 0x25b040u: goto label_25b040;
        case 0x25b044u: goto label_25b044;
        case 0x25b048u: goto label_25b048;
        case 0x25b04cu: goto label_25b04c;
        case 0x25b050u: goto label_25b050;
        case 0x25b054u: goto label_25b054;
        case 0x25b058u: goto label_25b058;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b060u: goto label_25b060;
        case 0x25b064u: goto label_25b064;
        case 0x25b068u: goto label_25b068;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b070u: goto label_25b070;
        case 0x25b074u: goto label_25b074;
        case 0x25b078u: goto label_25b078;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b080u: goto label_25b080;
        case 0x25b084u: goto label_25b084;
        case 0x25b088u: goto label_25b088;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b090u: goto label_25b090;
        case 0x25b094u: goto label_25b094;
        case 0x25b098u: goto label_25b098;
        case 0x25b09cu: goto label_25b09c;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0a8u: goto label_25b0a8;
        case 0x25b0acu: goto label_25b0ac;
        case 0x25b0b0u: goto label_25b0b0;
        case 0x25b0b4u: goto label_25b0b4;
        case 0x25b0b8u: goto label_25b0b8;
        case 0x25b0bcu: goto label_25b0bc;
        case 0x25b0c0u: goto label_25b0c0;
        case 0x25b0c4u: goto label_25b0c4;
        case 0x25b0c8u: goto label_25b0c8;
        case 0x25b0ccu: goto label_25b0cc;
        case 0x25b0d0u: goto label_25b0d0;
        case 0x25b0d4u: goto label_25b0d4;
        case 0x25b0d8u: goto label_25b0d8;
        case 0x25b0dcu: goto label_25b0dc;
        case 0x25b0e0u: goto label_25b0e0;
        case 0x25b0e4u: goto label_25b0e4;
        case 0x25b0e8u: goto label_25b0e8;
        case 0x25b0ecu: goto label_25b0ec;
        case 0x25b0f0u: goto label_25b0f0;
        case 0x25b0f4u: goto label_25b0f4;
        case 0x25b0f8u: goto label_25b0f8;
        case 0x25b0fcu: goto label_25b0fc;
        case 0x25b100u: goto label_25b100;
        case 0x25b104u: goto label_25b104;
        case 0x25b108u: goto label_25b108;
        case 0x25b10cu: goto label_25b10c;
        case 0x25b110u: goto label_25b110;
        case 0x25b114u: goto label_25b114;
        case 0x25b118u: goto label_25b118;
        case 0x25b11cu: goto label_25b11c;
        case 0x25b120u: goto label_25b120;
        case 0x25b124u: goto label_25b124;
        case 0x25b128u: goto label_25b128;
        case 0x25b12cu: goto label_25b12c;
        case 0x25b130u: goto label_25b130;
        case 0x25b134u: goto label_25b134;
        case 0x25b138u: goto label_25b138;
        case 0x25b13cu: goto label_25b13c;
        case 0x25b140u: goto label_25b140;
        case 0x25b144u: goto label_25b144;
        case 0x25b148u: goto label_25b148;
        case 0x25b14cu: goto label_25b14c;
        case 0x25b150u: goto label_25b150;
        case 0x25b154u: goto label_25b154;
        case 0x25b158u: goto label_25b158;
        case 0x25b15cu: goto label_25b15c;
        case 0x25b160u: goto label_25b160;
        case 0x25b164u: goto label_25b164;
        case 0x25b168u: goto label_25b168;
        case 0x25b16cu: goto label_25b16c;
        case 0x25b170u: goto label_25b170;
        case 0x25b174u: goto label_25b174;
        case 0x25b178u: goto label_25b178;
        case 0x25b17cu: goto label_25b17c;
        case 0x25b180u: goto label_25b180;
        case 0x25b184u: goto label_25b184;
        case 0x25b188u: goto label_25b188;
        case 0x25b18cu: goto label_25b18c;
        case 0x25b190u: goto label_25b190;
        case 0x25b194u: goto label_25b194;
        case 0x25b198u: goto label_25b198;
        case 0x25b19cu: goto label_25b19c;
        case 0x25b1a0u: goto label_25b1a0;
        case 0x25b1a4u: goto label_25b1a4;
        case 0x25b1a8u: goto label_25b1a8;
        case 0x25b1acu: goto label_25b1ac;
        case 0x25b1b0u: goto label_25b1b0;
        case 0x25b1b4u: goto label_25b1b4;
        case 0x25b1b8u: goto label_25b1b8;
        case 0x25b1bcu: goto label_25b1bc;
        case 0x25b1c0u: goto label_25b1c0;
        case 0x25b1c4u: goto label_25b1c4;
        case 0x25b1c8u: goto label_25b1c8;
        case 0x25b1ccu: goto label_25b1cc;
        case 0x25b1d0u: goto label_25b1d0;
        case 0x25b1d4u: goto label_25b1d4;
        case 0x25b1d8u: goto label_25b1d8;
        case 0x25b1dcu: goto label_25b1dc;
        case 0x25b1e0u: goto label_25b1e0;
        case 0x25b1e4u: goto label_25b1e4;
        case 0x25b1e8u: goto label_25b1e8;
        case 0x25b1ecu: goto label_25b1ec;
        case 0x25b1f0u: goto label_25b1f0;
        case 0x25b1f4u: goto label_25b1f4;
        case 0x25b1f8u: goto label_25b1f8;
        case 0x25b1fcu: goto label_25b1fc;
        case 0x25b200u: goto label_25b200;
        case 0x25b204u: goto label_25b204;
        case 0x25b208u: goto label_25b208;
        case 0x25b20cu: goto label_25b20c;
        case 0x25b210u: goto label_25b210;
        case 0x25b214u: goto label_25b214;
        case 0x25b218u: goto label_25b218;
        case 0x25b21cu: goto label_25b21c;
        case 0x25b220u: goto label_25b220;
        case 0x25b224u: goto label_25b224;
        case 0x25b228u: goto label_25b228;
        case 0x25b22cu: goto label_25b22c;
        case 0x25b230u: goto label_25b230;
        case 0x25b234u: goto label_25b234;
        case 0x25b238u: goto label_25b238;
        case 0x25b23cu: goto label_25b23c;
        case 0x25b240u: goto label_25b240;
        case 0x25b244u: goto label_25b244;
        case 0x25b248u: goto label_25b248;
        case 0x25b24cu: goto label_25b24c;
        case 0x25b250u: goto label_25b250;
        case 0x25b254u: goto label_25b254;
        case 0x25b258u: goto label_25b258;
        case 0x25b25cu: goto label_25b25c;
        case 0x25b260u: goto label_25b260;
        case 0x25b264u: goto label_25b264;
        case 0x25b268u: goto label_25b268;
        case 0x25b26cu: goto label_25b26c;
        case 0x25b270u: goto label_25b270;
        case 0x25b274u: goto label_25b274;
        case 0x25b278u: goto label_25b278;
        case 0x25b27cu: goto label_25b27c;
        case 0x25b280u: goto label_25b280;
        case 0x25b284u: goto label_25b284;
        case 0x25b288u: goto label_25b288;
        case 0x25b28cu: goto label_25b28c;
        case 0x25b290u: goto label_25b290;
        case 0x25b294u: goto label_25b294;
        case 0x25b298u: goto label_25b298;
        case 0x25b29cu: goto label_25b29c;
        case 0x25b2a0u: goto label_25b2a0;
        case 0x25b2a4u: goto label_25b2a4;
        case 0x25b2a8u: goto label_25b2a8;
        case 0x25b2acu: goto label_25b2ac;
        case 0x25b2b0u: goto label_25b2b0;
        case 0x25b2b4u: goto label_25b2b4;
        case 0x25b2b8u: goto label_25b2b8;
        case 0x25b2bcu: goto label_25b2bc;
        case 0x25b2c0u: goto label_25b2c0;
        case 0x25b2c4u: goto label_25b2c4;
        case 0x25b2c8u: goto label_25b2c8;
        case 0x25b2ccu: goto label_25b2cc;
        case 0x25b2d0u: goto label_25b2d0;
        case 0x25b2d4u: goto label_25b2d4;
        case 0x25b2d8u: goto label_25b2d8;
        case 0x25b2dcu: goto label_25b2dc;
        case 0x25b2e0u: goto label_25b2e0;
        case 0x25b2e4u: goto label_25b2e4;
        case 0x25b2e8u: goto label_25b2e8;
        case 0x25b2ecu: goto label_25b2ec;
        case 0x25b2f0u: goto label_25b2f0;
        case 0x25b2f4u: goto label_25b2f4;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b2fcu: goto label_25b2fc;
        case 0x25b300u: goto label_25b300;
        case 0x25b304u: goto label_25b304;
        case 0x25b308u: goto label_25b308;
        case 0x25b30cu: goto label_25b30c;
        case 0x25b310u: goto label_25b310;
        case 0x25b314u: goto label_25b314;
        case 0x25b318u: goto label_25b318;
        case 0x25b31cu: goto label_25b31c;
        case 0x25b320u: goto label_25b320;
        case 0x25b324u: goto label_25b324;
        case 0x25b328u: goto label_25b328;
        case 0x25b32cu: goto label_25b32c;
        case 0x25b330u: goto label_25b330;
        case 0x25b334u: goto label_25b334;
        case 0x25b338u: goto label_25b338;
        case 0x25b33cu: goto label_25b33c;
        case 0x25b340u: goto label_25b340;
        case 0x25b344u: goto label_25b344;
        case 0x25b348u: goto label_25b348;
        case 0x25b34cu: goto label_25b34c;
        case 0x25b350u: goto label_25b350;
        case 0x25b354u: goto label_25b354;
        case 0x25b358u: goto label_25b358;
        case 0x25b35cu: goto label_25b35c;
        case 0x25b360u: goto label_25b360;
        case 0x25b364u: goto label_25b364;
        case 0x25b368u: goto label_25b368;
        case 0x25b36cu: goto label_25b36c;
        default: break;
    }

    ctx->pc = 0x25ad00u;

label_25ad00:
    // 0x25ad00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_25ad04:
    // 0x25ad04: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25ad08:
    // 0x25ad08: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x25ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_25ad0c:
    // 0x25ad0c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25ad10:
    // 0x25ad10: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x25ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_25ad14:
    // 0x25ad14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ad14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ad18:
    // 0x25ad18: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x25ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_25ad1c:
    // 0x25ad1c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25ad20:
    // 0x25ad20: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x25ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_25ad24:
    // 0x25ad24: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25ad24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_25ad28:
    // 0x25ad28: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x25ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_25ad2c:
    // 0x25ad2c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_25ad30:
    // 0x25ad30: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25ad34:
    // 0x25ad34: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x25ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_25ad38:
    // 0x25ad38: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x25ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_25ad3c:
    // 0x25ad3c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x25ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_25ad40:
    // 0x25ad40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25ad44:
    // 0x25ad44: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25ad48:
    // 0x25ad48: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25ad4c:
    // 0x25ad4c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x25ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_25ad50:
    // 0x25ad50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25ad54:
    // 0x25ad54: 0x40f809  jalr        $v0
label_25ad58:
    if (ctx->pc == 0x25AD58u) {
        ctx->pc = 0x25AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD54u;
        // 0x25ad58: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD5Cu;
        goto label_25ad5c;
    }
    ctx->pc = 0x25AD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AD5Cu);
        ctx->pc = 0x25AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD54u;
        // 0x25ad58: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AD54u, 0x25AD5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AD5Cu;
label_25ad5c:
    // 0x25ad5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25ad60:
    if (ctx->pc == 0x25AD60u) {
        ctx->pc = 0x25AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD5Cu;
        // 0x25ad60: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD64u;
        goto label_25ad64;
    }
    ctx->pc = 0x25AD5Cu;
    {
        const bool branch_taken_0x25ad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD5Cu;
        // 0x25ad60: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad5c) {
            ctx->pc = 0x25AD6Cu;
            goto label_25ad6c;
        }
    }
    ctx->pc = 0x25AD64u;
label_25ad64:
    // 0x25ad64: 0x10000162  b           . + 4 + (0x162 << 2)
label_25ad68:
    if (ctx->pc == 0x25AD68u) {
        ctx->pc = 0x25AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD64u;
        // 0x25ad68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD6Cu;
        goto label_25ad6c;
    }
    ctx->pc = 0x25AD64u;
    {
        const bool branch_taken_0x25ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD64u;
        // 0x25ad68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad64) {
            ctx->pc = 0x25B2F0u;
            goto label_25b2f0;
        }
    }
    ctx->pc = 0x25AD6Cu;
label_25ad6c:
    // 0x25ad6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25ad70:
    // 0x25ad70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25ad74:
    if (ctx->pc == 0x25AD74u) {
        ctx->pc = 0x25AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD70u;
        // 0x25ad74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD78u;
        goto label_25ad78;
    }
    ctx->pc = 0x25AD70u;
    {
        const bool branch_taken_0x25ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD70u;
        // 0x25ad74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad70) {
            ctx->pc = 0x25ADA4u;
            goto label_25ada4;
        }
    }
    ctx->pc = 0x25AD78u;
label_25ad78:
    // 0x25ad78: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x25ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25ad7c:
    // 0x25ad7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25ad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ad80:
    // 0x25ad80: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x25ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25ad84:
    // 0x25ad84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25ad84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25ad88:
    // 0x25ad88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25ad8c:
    // 0x25ad8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25ad90:
    // 0x25ad90: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x25ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_25ad94:
    // 0x25ad94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25ad98:
    // 0x25ad98: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x25ad98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25ad9c:
    // 0x25ad9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_25ada0:
    if (ctx->pc == 0x25ADA0u) {
        ctx->pc = 0x25ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD9Cu;
        // 0x25ada0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADA4u;
        goto label_25ada4;
    }
    ctx->pc = 0x25AD9Cu;
    {
        const bool branch_taken_0x25ad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD9Cu;
        // 0x25ada0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad9c) {
            ctx->pc = 0x25AD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ad80;
        }
    }
    ctx->pc = 0x25ADA4u;
label_25ada4:
    // 0x25ada4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x25ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25ada8:
    // 0x25ada8: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25ada8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
label_25adac:
    // 0x25adac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x25adacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25adb0:
    // 0x25adb0: 0x24e79070  addiu       $a3, $a3, -0x6F90
    ctx->pc = 0x25adb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938736));
label_25adb4:
    // 0x25adb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25adb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25adb8:
    // 0x25adb8: 0xc0c5594  jal         func_315650
label_25adbc:
    if (ctx->pc == 0x25ADBCu) {
        ctx->pc = 0x25ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADB8u;
        // 0x25adbc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADC0u;
        goto label_25adc0;
    }
    ctx->pc = 0x25ADB8u;
    SET_GPR_U32(ctx, 31, 0x25ADC0u);
    ctx->pc = 0x25ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADB8u;
    // 0x25adbc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315650u, 0x25ADB8u, 0x25ADC0u)) {
        return;
    }
    ctx->pc = 0x25ADC0u;
label_25adc0:
    // 0x25adc0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25adc4:
    // 0x25adc4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x25adc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_25adc8:
    // 0x25adc8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_25adcc:
    if (ctx->pc == 0x25ADCCu) {
        ctx->pc = 0x25ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADC8u;
        // 0x25adcc: 0x3c080073  lui         $t0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADD0u;
        goto label_25add0;
    }
    ctx->pc = 0x25ADC8u;
    {
        const bool branch_taken_0x25adc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADC8u;
        // 0x25adcc: 0x3c080073  lui         $t0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adc8) {
            ctx->pc = 0x25AE18u;
            goto label_25ae18;
        }
    }
    ctx->pc = 0x25ADD0u;
label_25add0:
    // 0x25add0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x25add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25add4:
    // 0x25add4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x25add4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25add8:
    // 0x25add8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25addc:
    // 0x25addc: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x25addcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25ade0:
    // 0x25ade0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_25ade4:
    if (ctx->pc == 0x25ADE4u) {
        ctx->pc = 0x25ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADE0u;
        // 0x25ade4: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADE8u;
        goto label_25ade8;
    }
    ctx->pc = 0x25ADE0u;
    {
        const bool branch_taken_0x25ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADE0u;
        // 0x25ade4: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ade0) {
            ctx->pc = 0x25AE18u;
            goto label_25ae18;
        }
    }
    ctx->pc = 0x25ADE8u;
label_25ade8:
    // 0x25ade8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25adec:
    // 0x25adec: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x25adecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_25adf0:
    // 0x25adf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25adf4:
    // 0x25adf4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25adf8:
    // 0x25adf8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_25adfc:
    if (ctx->pc == 0x25ADFCu) {
        ctx->pc = 0x25ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF8u;
        // 0x25adfc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE00u;
        goto label_25ae00;
    }
    ctx->pc = 0x25ADF8u;
    {
        const bool branch_taken_0x25adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x25ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF8u;
        // 0x25adfc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adf8) {
            ctx->pc = 0x25AE08u;
            goto label_25ae08;
        }
    }
    ctx->pc = 0x25AE00u;
label_25ae00:
    // 0x25ae00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25ae00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ae04:
    // 0x25ae04: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x25ae04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_25ae08:
    // 0x25ae08: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x25ae08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25ae0c:
    // 0x25ae0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_25ae10:
    if (ctx->pc == 0x25AE10u) {
        ctx->pc = 0x25AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE0Cu;
        // 0x25ae10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE14u;
        goto label_25ae14;
    }
    ctx->pc = 0x25AE0Cu;
    {
        const bool branch_taken_0x25ae0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE0Cu;
        // 0x25ae10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae0c) {
            ctx->pc = 0x25ADF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25adf0;
        }
    }
    ctx->pc = 0x25AE14u;
label_25ae14:
    // 0x25ae14: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x25ae14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_25ae18:
    // 0x25ae18: 0x3c050101  lui         $a1, 0x101
    ctx->pc = 0x25ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)257 << 16));
label_25ae1c:
    // 0x25ae1c: 0x25100fc8  addiu       $s0, $t0, 0xFC8
    ctx->pc = 0x25ae1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4040));
label_25ae20:
    // 0x25ae20: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x25ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_25ae24:
    // 0x25ae24: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x25ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_25ae28:
    // 0x25ae28: 0x40f809  jalr        $v0
label_25ae2c:
    if (ctx->pc == 0x25AE2Cu) {
        ctx->pc = 0x25AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE28u;
        // 0x25ae2c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE30u;
        goto label_25ae30;
    }
    ctx->pc = 0x25AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AE30u);
        ctx->pc = 0x25AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE28u;
        // 0x25ae2c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE28u, 0x25AE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AE30u;
label_25ae30:
    // 0x25ae30: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x25ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25ae34:
    // 0x25ae34: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x25ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_25ae38:
    // 0x25ae38: 0x2e40018  mult        $zero, $s7, $a0
    ctx->pc = 0x25ae38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_25ae3c:
    // 0x25ae3c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_25ae40:
    // 0x25ae40: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25ae44:
    // 0x25ae44: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x25ae44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ae48:
    // 0x25ae48: 0x2012  mflo        $a0
    ctx->pc = 0x25ae48u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_25ae4c:
    // 0x25ae4c: 0x40f809  jalr        $v0
label_25ae50:
    if (ctx->pc == 0x25AE50u) {
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE54u;
        goto label_25ae54;
    }
    ctx->pc = 0x25AE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AE54u);
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE4Cu, 0x25AE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AE54u;
label_25ae54:
    // 0x25ae54: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x25ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25ae58:
    // 0x25ae58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25ae58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ae5c:
    // 0x25ae5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ae60:
    // 0x25ae60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25ae64:
    // 0x25ae64: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x25ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_25ae68:
    // 0x25ae68: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x25ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
label_25ae6c:
    // 0x25ae6c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x25ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_25ae70:
    // 0x25ae70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25ae74:
    // 0x25ae74: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x25ae74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_25ae78:
    // 0x25ae78: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_25ae7c:
    if (ctx->pc == 0x25AE7Cu) {
        ctx->pc = 0x25AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE78u;
        // 0x25ae7c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE80u;
        goto label_25ae80;
    }
    ctx->pc = 0x25AE78u;
    {
        const bool branch_taken_0x25ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ae78) {
            ctx->pc = 0x25AE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AE78u;
            // 0x25ae7c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AEF8u;
            goto label_25aef8;
        }
    }
    ctx->pc = 0x25AE80u;
label_25ae80:
    // 0x25ae80: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25ae84:
    // 0x25ae84: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_25ae88:
    if (ctx->pc == 0x25AE88u) {
        ctx->pc = 0x25AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE84u;
        // 0x25ae88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE8Cu;
        goto label_25ae8c;
    }
    ctx->pc = 0x25AE84u;
    {
        const bool branch_taken_0x25ae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE84u;
        // 0x25ae88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae84) {
            ctx->pc = 0x25AEF4u;
            goto label_25aef4;
        }
    }
    ctx->pc = 0x25AE8Cu;
label_25ae8c:
    // 0x25ae8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25ae8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ae90:
    // 0x25ae90: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x25ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25ae94:
    // 0x25ae94: 0x0  nop
    ctx->pc = 0x25ae94u;
    // NOP
label_25ae98:
    // 0x25ae98: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_25ae9c:
    // 0x25ae9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25aea0:
    // 0x25aea0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25aea4:
    // 0x25aea4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25aea8:
    // 0x25aea8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25aeac:
    // 0x25aeac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25aeb0:
    // 0x25aeb0: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_25aeb4:
    if (ctx->pc == 0x25AEB4u) {
        ctx->pc = 0x25AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB0u;
        // 0x25aeb4: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEB8u;
        goto label_25aeb8;
    }
    ctx->pc = 0x25AEB0u;
    {
        const bool branch_taken_0x25aeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB0u;
        // 0x25aeb4: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aeb0) {
            ctx->pc = 0x25AEDCu;
            goto label_25aedc;
        }
    }
    ctx->pc = 0x25AEB8u;
label_25aeb8:
    // 0x25aeb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25aebc:
    // 0x25aebc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x25aebcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_25aec0:
    // 0x25aec0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x25aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_25aec4:
    // 0x25aec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_25aec8:
    // 0x25aec8: 0xacb40010  sw          $s4, 0x10($a1)
    ctx->pc = 0x25aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 20));
label_25aecc:
    // 0x25aecc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x25aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_25aed0:
    // 0x25aed0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x25aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_25aed4:
    // 0x25aed4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x25aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_25aed8:
    // 0x25aed8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x25aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_25aedc:
    // 0x25aedc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25aee0:
    // 0x25aee0: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x25aee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25aee4:
    // 0x25aee4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_25aee8:
    // 0x25aee8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x25aee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25aeec:
    // 0x25aeec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_25aef0:
    if (ctx->pc == 0x25AEF0u) {
        ctx->pc = 0x25AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEECu;
        // 0x25aef0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEF4u;
        goto label_25aef4;
    }
    ctx->pc = 0x25AEECu;
    {
        const bool branch_taken_0x25aeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEECu;
        // 0x25aef0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aeec) {
            ctx->pc = 0x25AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ae98;
        }
    }
    ctx->pc = 0x25AEF4u;
label_25aef4:
    // 0x25aef4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25aef8:
    // 0x25aef8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x25aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25aefc:
    // 0x25aefc: 0x2e31018  mult        $v0, $s7, $v1
    ctx->pc = 0x25aefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_25af00:
    // 0x25af00: 0x8fb5000c  lw          $s5, 0xC($sp)
    ctx->pc = 0x25af00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_25af04:
    // 0x25af04: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x25af04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_25af08:
    // 0x25af08: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x25af08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_25af0c:
    // 0x25af0c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x25af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_25af10:
    // 0x25af10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25af14:
    // 0x25af14: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x25af14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_25af18:
    // 0x25af18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25af18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25af1c:
    // 0x25af1c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x25af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25af20:
    // 0x25af20: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_25af24:
    // 0x25af24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25af28:
    // 0x25af28: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x25af28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25af2c:
    // 0x25af2c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x25af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_25af30:
    // 0x25af30: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_25af34:
    if (ctx->pc == 0x25AF34u) {
        ctx->pc = 0x25AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF30u;
        // 0x25af34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF38u;
        goto label_25af38;
    }
    ctx->pc = 0x25AF30u;
    {
        const bool branch_taken_0x25af30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af30) {
            ctx->pc = 0x25AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AF30u;
            // 0x25af34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF38u;
            goto label_25af38;
        }
    }
    ctx->pc = 0x25AF38u;
label_25af38:
    // 0x25af38: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x25af38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25af3c:
    // 0x25af3c: 0xa8001b  divu        $zero, $a1, $t0
    ctx->pc = 0x25af3cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_25af40:
    // 0x25af40: 0x2812  mflo        $a1
    ctx->pc = 0x25af40u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_25af44:
    // 0x25af44: 0xc0930c4  jal         func_24C310
label_25af48:
    if (ctx->pc == 0x25AF48u) {
        ctx->pc = 0x25AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF44u;
        // 0x25af48: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF4Cu;
        goto label_25af4c;
    }
    ctx->pc = 0x25AF44u;
    SET_GPR_U32(ctx, 31, 0x25AF4Cu);
    ctx->pc = 0x25AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF44u;
    // 0x25af48: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x25AF44u, 0x25AF4Cu)) {
        return;
    }
    ctx->pc = 0x25AF4Cu;
label_25af4c:
    // 0x25af4c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25af50:
    // 0x25af50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25af50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25af54:
    // 0x25af54: 0x24640fc8  addiu       $a0, $v1, 0xFC8
    ctx->pc = 0x25af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25af58:
    // 0x25af58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25af58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25af5c:
    // 0x25af5c: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25af60:
    // 0x25af60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25af64:
    // 0x25af64: 0x12e00081  beqz        $s7, . + 4 + (0x81 << 2)
label_25af68:
    if (ctx->pc == 0x25AF68u) {
        ctx->pc = 0x25AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF64u;
        // 0x25af68: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF6Cu;
        goto label_25af6c;
    }
    ctx->pc = 0x25AF64u;
    {
        const bool branch_taken_0x25af64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF64u;
        // 0x25af68: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af64) {
            ctx->pc = 0x25B16Cu;
            goto label_25b16c;
        }
    }
    ctx->pc = 0x25AF6Cu;
label_25af6c:
    // 0x25af6c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25af70:
    // 0x25af70: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_25af74:
    // 0x25af74: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x25af74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_25af78:
    // 0x25af78: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x25af78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_25af7c:
    // 0x25af7c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x25af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_25af80:
    // 0x25af80: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25af80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25af84:
    // 0x25af84: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25af84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_25af88:
    // 0x25af88: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x25af88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25af8c:
    // 0x25af8c: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x25af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_25af90:
    // 0x25af90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25af94:
    // 0x25af94: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x25af94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_25af98:
    // 0x25af98: 0x2012  mflo        $a0
    ctx->pc = 0x25af98u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_25af9c:
    // 0x25af9c: 0x40f809  jalr        $v0
label_25afa0:
    if (ctx->pc == 0x25AFA0u) {
        ctx->pc = 0x25AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF9Cu;
        // 0x25afa0: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFA4u;
        goto label_25afa4;
    }
    ctx->pc = 0x25AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AFA4u);
        ctx->pc = 0x25AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF9Cu;
        // 0x25afa0: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF9Cu, 0x25AFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AFA4u;
label_25afa4:
    // 0x25afa4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25afa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25afa8:
    // 0x25afa8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25afac:
    // 0x25afac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_25afb0:
    if (ctx->pc == 0x25AFB0u) {
        ctx->pc = 0x25AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFACu;
        // 0x25afb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFB4u;
        goto label_25afb4;
    }
    ctx->pc = 0x25AFACu;
    {
        const bool branch_taken_0x25afac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFACu;
        // 0x25afb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afac) {
            ctx->pc = 0x25B00Cu;
            goto label_25b00c;
        }
    }
    ctx->pc = 0x25AFB4u;
label_25afb4:
    // 0x25afb4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25afb8:
    // 0x25afb8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x25afb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25afbc:
    // 0x25afbc: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x25afbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_25afc0:
    // 0x25afc0: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x25afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25afc4:
    // 0x25afc4: 0x0  nop
    ctx->pc = 0x25afc4u;
    // NOP
label_25afc8:
    // 0x25afc8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25afcc:
    // 0x25afcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25afccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25afd0:
    // 0x25afd0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_25afd4:
    // 0x25afd4: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x25afd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_25afd8:
    // 0x25afd8: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x25afd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_25afdc:
    // 0x25afdc: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x25afdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_25afe0:
    // 0x25afe0: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x25afe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_25afe4:
    // 0x25afe4: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x25afe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_25afe8:
    // 0x25afe8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x25afe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25afec:
    // 0x25afec: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x25afecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25aff0:
    // 0x25aff0: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x25aff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25aff4:
    // 0x25aff4: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x25aff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25aff8:
    // 0x25aff8: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x25aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
label_25affc:
    // 0x25affc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25b000:
    // 0x25b000: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x25b000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25b004:
    // 0x25b004: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_25b008:
    if (ctx->pc == 0x25B008u) {
        ctx->pc = 0x25B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B004u;
        // 0x25b008: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B00Cu;
        goto label_25b00c;
    }
    ctx->pc = 0x25B004u;
    {
        const bool branch_taken_0x25b004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B004u;
        // 0x25b008: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b004) {
            ctx->pc = 0x25AFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25afc8;
        }
    }
    ctx->pc = 0x25B00Cu;
label_25b00c:
    // 0x25b00c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25b010:
    // 0x25b010: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x25b010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_25b014:
    // 0x25b014: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x25b014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_25b018:
    // 0x25b018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b01c:
    // 0x25b01c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25b020:
    // 0x25b020: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x25b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_25b024:
    // 0x25b024: 0xc096772  jal         func_259DC8
label_25b028:
    if (ctx->pc == 0x25B028u) {
        ctx->pc = 0x25B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B024u;
        // 0x25b028: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B02Cu;
        goto label_25b02c;
    }
    ctx->pc = 0x25B024u;
    SET_GPR_U32(ctx, 31, 0x25B02Cu);
    ctx->pc = 0x25B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B024u;
    // 0x25b028: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259DC8u, 0x25B024u, 0x25B02Cu)) {
        return;
    }
    ctx->pc = 0x25B02Cu;
label_25b02c:
    // 0x25b02c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_25b030:
    // 0x25b030: 0xc096a38  jal         func_25A8E0
label_25b034:
    if (ctx->pc == 0x25B034u) {
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B038u;
        goto label_25b038;
    }
    ctx->pc = 0x25B030u;
    SET_GPR_U32(ctx, 31, 0x25B038u);
    ctx->pc = 0x25B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B030u;
    // 0x25b034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25A8E0u, 0x25B030u, 0x25B038u)) {
        return;
    }
    ctx->pc = 0x25B038u;
label_25b038:
    // 0x25b038: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25b03c:
    // 0x25b03c: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_25b040:
    if (ctx->pc == 0x25B040u) {
        ctx->pc = 0x25B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B03Cu;
        // 0x25b040: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B044u;
        goto label_25b044;
    }
    ctx->pc = 0x25B03Cu;
    {
        const bool branch_taken_0x25b03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B03Cu;
        // 0x25b040: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b03c) {
            ctx->pc = 0x25B0F4u;
            goto label_25b0f4;
        }
    }
    ctx->pc = 0x25B044u;
label_25b044:
    // 0x25b044: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25b044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25b048:
    // 0x25b048: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x25b048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_25b04c:
    // 0x25b04c: 0x247e0fc8  addiu       $fp, $v1, 0xFC8
    ctx->pc = 0x25b04cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25b050:
    // 0x25b050: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25b054:
    // 0x25b054: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25b058:
    // 0x25b058: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25b058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25b05c:
    // 0x25b05c: 0x8fc20108  lw          $v0, 0x108($fp)
    ctx->pc = 0x25b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 264)));
label_25b060:
    // 0x25b060: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25b060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_25b064:
    // 0x25b064: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25b064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_25b068:
    // 0x25b068: 0x40f809  jalr        $v0
label_25b06c:
    if (ctx->pc == 0x25B06Cu) {
        ctx->pc = 0x25B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B068u;
        // 0x25b06c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B070u;
        goto label_25b070;
    }
    ctx->pc = 0x25B068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B070u);
        ctx->pc = 0x25B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B068u;
        // 0x25b06c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B068u, 0x25B070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B070u;
label_25b070:
    // 0x25b070: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_25b074:
    // 0x25b074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25b074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b078:
    // 0x25b078: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25b078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25b07c:
    // 0x25b07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b080:
    // 0x25b080: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x25b080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_25b084:
    // 0x25b084: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x25b084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25b088:
    // 0x25b088: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x25b088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25b08c:
    // 0x25b08c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25b090:
    // 0x25b090: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_25b094:
    // 0x25b094: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x25b094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_25b098:
    // 0x25b098: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_25b09c:
    if (ctx->pc == 0x25B09Cu) {
        ctx->pc = 0x25B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B098u;
        // 0x25b09c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0A0u;
        goto label_25b0a0;
    }
    ctx->pc = 0x25B098u;
    {
        const bool branch_taken_0x25b098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B098u;
        // 0x25b09c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b098) {
            ctx->pc = 0x25B0D4u;
            goto label_25b0d4;
        }
    }
    ctx->pc = 0x25B0A0u;
label_25b0a0:
    // 0x25b0a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b0a4:
    // 0x25b0a4: 0x0  nop
    ctx->pc = 0x25b0a4u;
    // NOP
label_25b0a8:
    // 0x25b0a8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x25b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_25b0ac:
    // 0x25b0ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25b0b0:
    // 0x25b0b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25b0b4:
    // 0x25b0b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25b0b8:
    // 0x25b0b8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x25b0b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25b0bc:
    // 0x25b0bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25b0c0:
    // 0x25b0c0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x25b0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_25b0c4:
    // 0x25b0c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25b0c8:
    // 0x25b0c8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x25b0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25b0cc:
    // 0x25b0cc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_25b0d0:
    if (ctx->pc == 0x25B0D0u) {
        ctx->pc = 0x25B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0CCu;
        // 0x25b0d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0D4u;
        goto label_25b0d4;
    }
    ctx->pc = 0x25B0CCu;
    {
        const bool branch_taken_0x25b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0cc) {
            ctx->pc = 0x25B0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B0CCu;
            // 0x25b0d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b0a8;
        }
    }
    ctx->pc = 0x25B0D4u;
label_25b0d4:
    // 0x25b0d4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x25b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25b0d8:
    // 0x25b0d8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x25b0d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_25b0dc:
    // 0x25b0dc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x25b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_25b0e0:
    // 0x25b0e0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x25b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_25b0e4:
    // 0x25b0e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x25b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_25b0e8:
    // 0x25b0e8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x25b0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25b0ec:
    // 0x25b0ec: 0x5600ffda  bnel        $s0, $zero, . + 4 + (-0x26 << 2)
label_25b0f0:
    if (ctx->pc == 0x25B0F0u) {
        ctx->pc = 0x25B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0ECu;
        // 0x25b0f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0F4u;
        goto label_25b0f4;
    }
    ctx->pc = 0x25B0ECu;
    {
        const bool branch_taken_0x25b0ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0ec) {
            ctx->pc = 0x25B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B0ECu;
            // 0x25b0f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b058;
        }
    }
    ctx->pc = 0x25B0F4u;
label_25b0f4:
    // 0x25b0f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25b0f8:
    // 0x25b0f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25b0fc:
    if (ctx->pc == 0x25B0FCu) {
        ctx->pc = 0x25B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0F8u;
        // 0x25b0fc: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B100u;
        goto label_25b100;
    }
    ctx->pc = 0x25B0F8u;
    {
        const bool branch_taken_0x25b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0F8u;
        // 0x25b0fc: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0f8) {
            ctx->pc = 0x25B148u;
            goto label_25b148;
        }
    }
    ctx->pc = 0x25B100u;
label_25b100:
    // 0x25b100: 0x24f10fc8  addiu       $s1, $a3, 0xFC8
    ctx->pc = 0x25b100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
label_25b104:
    // 0x25b104: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x25b104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25b108:
    // 0x25b108: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x25b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_25b10c:
    // 0x25b10c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25b110:
    // 0x25b110: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25b110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25b114:
    // 0x25b114: 0x60f809  jalr        $v1
label_25b118:
    if (ctx->pc == 0x25B118u) {
        ctx->pc = 0x25B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B114u;
        // 0x25b118: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B11Cu;
        goto label_25b11c;
    }
    ctx->pc = 0x25B114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B11Cu);
        ctx->pc = 0x25B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B114u;
        // 0x25b118: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B114u, 0x25B11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B11Cu;
label_25b11c:
    // 0x25b11c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_25b120:
    // 0x25b120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b124:
    // 0x25b124: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25b124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25b128:
    // 0x25b128: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25b128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25b12c:
    // 0x25b12c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x25b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_25b130:
    // 0x25b130: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25b134:
    // 0x25b134: 0x40f809  jalr        $v0
label_25b138:
    if (ctx->pc == 0x25B138u) {
        ctx->pc = 0x25B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B134u;
        // 0x25b138: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B13Cu;
        goto label_25b13c;
    }
    ctx->pc = 0x25B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B13Cu);
        ctx->pc = 0x25B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B134u;
        // 0x25b138: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B134u, 0x25B13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B13Cu;
label_25b13c:
    // 0x25b13c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25b140:
    // 0x25b140: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_25b144:
    if (ctx->pc == 0x25B144u) {
        ctx->pc = 0x25B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B140u;
        // 0x25b144: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B148u;
        goto label_25b148;
    }
    ctx->pc = 0x25B140u;
    {
        const bool branch_taken_0x25b140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B140u;
        // 0x25b144: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b140) {
            ctx->pc = 0x25B108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b108;
        }
    }
    ctx->pc = 0x25B148u;
label_25b148:
    // 0x25b148: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x25b148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_25b14c:
    // 0x25b14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b150:
    // 0x25b150: 0x25080fc8  addiu       $t0, $t0, 0xFC8
    ctx->pc = 0x25b150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4040));
label_25b154:
    // 0x25b154: 0x8d03010c  lw          $v1, 0x10C($t0)
    ctx->pc = 0x25b154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 268)));
label_25b158:
    // 0x25b158: 0x60f809  jalr        $v1
label_25b15c:
    if (ctx->pc == 0x25B15Cu) {
        ctx->pc = 0x25B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B158u;
        // 0x25b15c: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B160u;
        goto label_25b160;
    }
    ctx->pc = 0x25B158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B160u);
        ctx->pc = 0x25B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B158u;
        // 0x25b15c: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B158u, 0x25B160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B160u;
label_25b160:
    // 0x25b160: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x25b160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_25b164:
    // 0x25b164: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_25b168:
    if (ctx->pc == 0x25B168u) {
        ctx->pc = 0x25B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B164u;
        // 0x25b168: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B16Cu;
        goto label_25b16c;
    }
    ctx->pc = 0x25B164u;
    {
        const bool branch_taken_0x25b164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B164u;
        // 0x25b168: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b164) {
            ctx->pc = 0x25AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25af70;
        }
    }
    ctx->pc = 0x25B16Cu;
label_25b16c:
    // 0x25b16c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25b170:
    // 0x25b170: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x25b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16808)));
label_25b174:
    // 0x25b174: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x25b174u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
label_25b178:
    // 0x25b178: 0x25300fc8  addiu       $s0, $t1, 0xFC8
    ctx->pc = 0x25b178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4040));
label_25b17c:
    // 0x25b17c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25b17cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b180:
    // 0x25b180: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_25b184:
    // 0x25b184: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25b184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b188:
    // 0x25b188: 0xc093106  jal         func_24C418
label_25b18c:
    if (ctx->pc == 0x25B18Cu) {
        ctx->pc = 0x25B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B188u;
        // 0x25b18c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B190u;
        goto label_25b190;
    }
    ctx->pc = 0x25B188u;
    SET_GPR_U32(ctx, 31, 0x25B190u);
    ctx->pc = 0x25B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B188u;
    // 0x25b18c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x25B188u, 0x25B190u)) {
        return;
    }
    ctx->pc = 0x25B190u;
label_25b190:
    // 0x25b190: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25b194:
    // 0x25b194: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25b198:
    // 0x25b198: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_25b19c:
    // 0x25b19c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_25b1a0:
    // 0x25b1a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25b1a4:
    // 0x25b1a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_25b1a8:
    if (ctx->pc == 0x25B1A8u) {
        ctx->pc = 0x25B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1A4u;
        // 0x25b1a8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1ACu;
        goto label_25b1ac;
    }
    ctx->pc = 0x25B1A4u;
    {
        const bool branch_taken_0x25b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1A4u;
        // 0x25b1a8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1a4) {
            ctx->pc = 0x25B1DCu;
            goto label_25b1dc;
        }
    }
    ctx->pc = 0x25B1ACu;
label_25b1ac:
    // 0x25b1ac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x25b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25b1b0:
    // 0x25b1b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25b1b4:
    // 0x25b1b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25b1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25b1b8:
    // 0x25b1b8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x25b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_25b1bc:
    // 0x25b1bc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_25b1c0:
    // 0x25b1c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25b1c4:
    // 0x25b1c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25b1c8:
    // 0x25b1c8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x25b1c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_25b1cc:
    // 0x25b1cc: 0x243202b  sltu        $a0, $s2, $v1
    ctx->pc = 0x25b1ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25b1d0:
    // 0x25b1d0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25b1d4:
    // 0x25b1d4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_25b1d8:
    if (ctx->pc == 0x25B1D8u) {
        ctx->pc = 0x25B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1D4u;
        // 0x25b1d8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1DCu;
        goto label_25b1dc;
    }
    ctx->pc = 0x25B1D4u;
    {
        const bool branch_taken_0x25b1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1D4u;
        // 0x25b1d8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1d4) {
            ctx->pc = 0x25B1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b1b0;
        }
    }
    ctx->pc = 0x25B1DCu;
label_25b1dc:
    // 0x25b1dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25b1e0:
    // 0x25b1e0: 0xc0961ba  jal         func_2586E8
label_25b1e4:
    if (ctx->pc == 0x25B1E4u) {
        ctx->pc = 0x25B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1E0u;
        // 0x25b1e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1E8u;
        goto label_25b1e8;
    }
    ctx->pc = 0x25B1E0u;
    SET_GPR_U32(ctx, 31, 0x25B1E8u);
    ctx->pc = 0x25B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1E0u;
    // 0x25b1e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2586E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2586E8u, 0x25B1E0u, 0x25B1E8u)) {
        return;
    }
    ctx->pc = 0x25B1E8u;
label_25b1e8:
    // 0x25b1e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25b1e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b1ec:
    // 0x25b1ec: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x25b1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25b1f0:
    // 0x25b1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b1f4:
    // 0x25b1f4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x25b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_25b1f8:
    // 0x25b1f8: 0xa6870004  sh          $a3, 0x4($s4)
    ctx->pc = 0x25b1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 7));
label_25b1fc:
    // 0x25b1fc: 0x24850fc8  addiu       $a1, $a0, 0xFC8
    ctx->pc = 0x25b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_25b200:
    // 0x25b200: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x25b200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_25b204:
    // 0x25b204: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25b208:
    // 0x25b208: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x25b208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_25b20c:
    // 0x25b20c: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x25b20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_25b210:
    // 0x25b210: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25b214:
    // 0x25b214: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x25b214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16808)));
label_25b218:
    // 0x25b218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25b21c:
    // 0x25b21c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x25b21cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25b220:
    // 0x25b220: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x25b220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_25b224:
    // 0x25b224: 0xae950008  sw          $s5, 0x8($s4)
    ctx->pc = 0x25b224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 21));
label_25b228:
    // 0x25b228: 0xa6840006  sh          $a0, 0x6($s4)
    ctx->pc = 0x25b228u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 4));
label_25b22c:
    // 0x25b22c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x25b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_25b230:
    // 0x25b230: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25b234:
    // 0x25b234: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25b238:
    // 0x25b238: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25b23c:
    // 0x25b23c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25b23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b240:
    // 0x25b240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25b244:
    // 0x25b244: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
label_25b248:
    if (ctx->pc == 0x25B248u) {
        ctx->pc = 0x25B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B244u;
        // 0x25b248: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B24Cu;
        goto label_25b24c;
    }
    ctx->pc = 0x25B244u;
    {
        const bool branch_taken_0x25b244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B244u;
        // 0x25b248: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b244) {
            ctx->pc = 0x25B2C0u;
            goto label_25b2c0;
        }
    }
    ctx->pc = 0x25B24Cu;
label_25b24c:
    // 0x25b24c: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x25b24cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25b250:
    // 0x25b250: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25b250u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25b254:
    // 0x25b254: 0x0  nop
    ctx->pc = 0x25b254u;
    // NOP
label_25b258:
    // 0x25b258: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x25b258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_25b25c:
    // 0x25b25c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b260:
    // 0x25b260: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25b260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25b264:
    // 0x25b264: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b268:
    // 0x25b268: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25b26c:
    // 0x25b26c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x25b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_25b270:
    // 0x25b270: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b274:
    // 0x25b274: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25b274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25b278:
    // 0x25b278: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x25b278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_25b27c:
    // 0x25b27c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b280:
    // 0x25b280: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x25b280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25b284:
    // 0x25b284: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25b284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b288:
    // 0x25b288: 0xc075fdc  jal         func_1D7F70
label_25b28c:
    if (ctx->pc == 0x25B28Cu) {
        ctx->pc = 0x25B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B288u;
        // 0x25b28c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B290u;
        goto label_25b290;
    }
    ctx->pc = 0x25B288u;
    SET_GPR_U32(ctx, 31, 0x25B290u);
    ctx->pc = 0x25B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B288u;
    // 0x25b28c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x25B288u, 0x25B290u)) {
        return;
    }
    ctx->pc = 0x25B290u;
label_25b290:
    // 0x25b290: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25b290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25b294:
    // 0x25b294: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25b294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b298:
    // 0x25b298: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x25b298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_25b29c:
    // 0x25b29c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25b2a0:
    // 0x25b2a0: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_25b2a4:
    // 0x25b2a4: 0x40f809  jalr        $v0
label_25b2a8:
    if (ctx->pc == 0x25B2A8u) {
        ctx->pc = 0x25B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A4u;
        // 0x25b2a8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2ACu;
        goto label_25b2ac;
    }
    ctx->pc = 0x25B2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B2ACu);
        ctx->pc = 0x25B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A4u;
        // 0x25b2a8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B2A4u, 0x25B2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B2ACu;
label_25b2ac:
    // 0x25b2ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_25b2b0:
    // 0x25b2b0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25b2b4:
    // 0x25b2b4: 0x248102b  sltu        $v0, $s2, $t0
    ctx->pc = 0x25b2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_25b2b8:
    // 0x25b2b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_25b2bc:
    if (ctx->pc == 0x25B2BCu) {
        ctx->pc = 0x25B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2B8u;
        // 0x25b2bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2C0u;
        goto label_25b2c0;
    }
    ctx->pc = 0x25B2B8u;
    {
        const bool branch_taken_0x25b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2B8u;
        // 0x25b2bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2b8) {
            ctx->pc = 0x25B258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b258;
        }
    }
    ctx->pc = 0x25B2C0u;
label_25b2c0:
    // 0x25b2c0: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x25b2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
label_25b2c4:
    // 0x25b2c4: 0x25300fc8  addiu       $s0, $t1, 0xFC8
    ctx->pc = 0x25b2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4040));
label_25b2c8:
    // 0x25b2c8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x25b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25b2cc:
    // 0x25b2cc: 0x40f809  jalr        $v0
label_25b2d0:
    if (ctx->pc == 0x25B2D0u) {
        ctx->pc = 0x25B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2CCu;
        // 0x25b2d0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2D4u;
        goto label_25b2d4;
    }
    ctx->pc = 0x25B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B2D4u);
        ctx->pc = 0x25B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2CCu;
        // 0x25b2d0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B2CCu, 0x25B2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B2D4u;
label_25b2d4:
    // 0x25b2d4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x25b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25b2d8:
    // 0x25b2d8: 0x60f809  jalr        $v1
label_25b2dc:
    if (ctx->pc == 0x25B2DCu) {
        ctx->pc = 0x25B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2D8u;
        // 0x25b2dc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2E0u;
        goto label_25b2e0;
    }
    ctx->pc = 0x25B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B2E0u);
        ctx->pc = 0x25B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2D8u;
        // 0x25b2dc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B2D8u, 0x25B2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B2E0u;
label_25b2e0:
    // 0x25b2e0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x25b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25b2e4:
    // 0x25b2e4: 0x40f809  jalr        $v0
label_25b2e8:
    if (ctx->pc == 0x25B2E8u) {
        ctx->pc = 0x25B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2E4u;
        // 0x25b2e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2ECu;
        goto label_25b2ec;
    }
    ctx->pc = 0x25B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B2ECu);
        ctx->pc = 0x25B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2E4u;
        // 0x25b2e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B2E4u, 0x25B2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B2ECu;
label_25b2ec:
    // 0x25b2ec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x25b2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b2f0:
    // 0x25b2f0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25b2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25b2f4:
    // 0x25b2f4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x25b2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25b2f8:
    // 0x25b2f8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x25b2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25b2fc:
    // 0x25b2fc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x25b2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25b300:
    // 0x25b300: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25b300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25b304:
    // 0x25b304: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25b304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25b308:
    // 0x25b308: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x25b308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25b30c:
    // 0x25b30c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x25b30cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25b310:
    // 0x25b310: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x25b310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25b314:
    // 0x25b314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25b318:
    // 0x25b318: 0x3e00008  jr          $ra
label_25b31c:
    if (ctx->pc == 0x25B31Cu) {
        ctx->pc = 0x25B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B318u;
        // 0x25b31c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B320u;
        goto label_25b320;
    }
    ctx->pc = 0x25B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B318u;
        // 0x25b31c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B320u;
label_25b320:
    // 0x25b320: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25b324:
    // 0x25b324: 0x0  nop
    ctx->pc = 0x25b324u;
    // NOP
label_25b328:
    // 0x25b328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25b328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25b32c:
    // 0x25b32c: 0x0  nop
    ctx->pc = 0x25b32cu;
    // NOP
label_25b330:
    // 0x25b330: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x25b330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25b334:
    // 0x25b334: 0x0  nop
    ctx->pc = 0x25b334u;
    // NOP
label_25b338:
    // 0x25b338: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x25b338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25b33c:
    // 0x25b33c: 0x0  nop
    ctx->pc = 0x25b33cu;
    // NOP
label_25b340:
    // 0x25b340: 0x0  nop
    ctx->pc = 0x25b340u;
    // NOP
label_25b344:
    // 0x25b344: 0x0  nop
    ctx->pc = 0x25b344u;
    // NOP
label_25b348:
    // 0x25b348: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25b348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25b34c:
    // 0x25b34c: 0x0  nop
    ctx->pc = 0x25b34cu;
    // NOP
label_25b350:
    // 0x25b350: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x25b350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_25b354:
    // 0x25b354: 0x0  nop
    ctx->pc = 0x25b354u;
    // NOP
label_25b358:
    // 0x25b358: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x25b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_25b35c:
    // 0x25b35c: 0x0  nop
    ctx->pc = 0x25b35cu;
    // NOP
label_25b360:
    // 0x25b360: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25b364:
    // 0x25b364: 0x0  nop
    ctx->pc = 0x25b364u;
    // NOP
label_25b368:
    // 0x25b368: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25b36c:
    // 0x25b36c: 0x0  nop
    ctx->pc = 0x25b36cu;
    // NOP
    ctx->pc = 0x25b370u;
}
