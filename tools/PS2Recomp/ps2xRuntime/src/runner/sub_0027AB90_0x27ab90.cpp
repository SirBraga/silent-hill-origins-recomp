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

// Function: sub_0027AB90
// Address: 0x27ab90 - 0x27b1f0
void sub_0027AB90_0x27ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AB90_0x27ab90");
#endif

    switch (ctx->pc) {
        case 0x27ab90u: goto label_27ab90;
        case 0x27ab94u: goto label_27ab94;
        case 0x27ab98u: goto label_27ab98;
        case 0x27ab9cu: goto label_27ab9c;
        case 0x27aba0u: goto label_27aba0;
        case 0x27aba4u: goto label_27aba4;
        case 0x27aba8u: goto label_27aba8;
        case 0x27abacu: goto label_27abac;
        case 0x27abb0u: goto label_27abb0;
        case 0x27abb4u: goto label_27abb4;
        case 0x27abb8u: goto label_27abb8;
        case 0x27abbcu: goto label_27abbc;
        case 0x27abc0u: goto label_27abc0;
        case 0x27abc4u: goto label_27abc4;
        case 0x27abc8u: goto label_27abc8;
        case 0x27abccu: goto label_27abcc;
        case 0x27abd0u: goto label_27abd0;
        case 0x27abd4u: goto label_27abd4;
        case 0x27abd8u: goto label_27abd8;
        case 0x27abdcu: goto label_27abdc;
        case 0x27abe0u: goto label_27abe0;
        case 0x27abe4u: goto label_27abe4;
        case 0x27abe8u: goto label_27abe8;
        case 0x27abecu: goto label_27abec;
        case 0x27abf0u: goto label_27abf0;
        case 0x27abf4u: goto label_27abf4;
        case 0x27abf8u: goto label_27abf8;
        case 0x27abfcu: goto label_27abfc;
        case 0x27ac00u: goto label_27ac00;
        case 0x27ac04u: goto label_27ac04;
        case 0x27ac08u: goto label_27ac08;
        case 0x27ac0cu: goto label_27ac0c;
        case 0x27ac10u: goto label_27ac10;
        case 0x27ac14u: goto label_27ac14;
        case 0x27ac18u: goto label_27ac18;
        case 0x27ac1cu: goto label_27ac1c;
        case 0x27ac20u: goto label_27ac20;
        case 0x27ac24u: goto label_27ac24;
        case 0x27ac28u: goto label_27ac28;
        case 0x27ac2cu: goto label_27ac2c;
        case 0x27ac30u: goto label_27ac30;
        case 0x27ac34u: goto label_27ac34;
        case 0x27ac38u: goto label_27ac38;
        case 0x27ac3cu: goto label_27ac3c;
        case 0x27ac40u: goto label_27ac40;
        case 0x27ac44u: goto label_27ac44;
        case 0x27ac48u: goto label_27ac48;
        case 0x27ac4cu: goto label_27ac4c;
        case 0x27ac50u: goto label_27ac50;
        case 0x27ac54u: goto label_27ac54;
        case 0x27ac58u: goto label_27ac58;
        case 0x27ac5cu: goto label_27ac5c;
        case 0x27ac60u: goto label_27ac60;
        case 0x27ac64u: goto label_27ac64;
        case 0x27ac68u: goto label_27ac68;
        case 0x27ac6cu: goto label_27ac6c;
        case 0x27ac70u: goto label_27ac70;
        case 0x27ac74u: goto label_27ac74;
        case 0x27ac78u: goto label_27ac78;
        case 0x27ac7cu: goto label_27ac7c;
        case 0x27ac80u: goto label_27ac80;
        case 0x27ac84u: goto label_27ac84;
        case 0x27ac88u: goto label_27ac88;
        case 0x27ac8cu: goto label_27ac8c;
        case 0x27ac90u: goto label_27ac90;
        case 0x27ac94u: goto label_27ac94;
        case 0x27ac98u: goto label_27ac98;
        case 0x27ac9cu: goto label_27ac9c;
        case 0x27aca0u: goto label_27aca0;
        case 0x27aca4u: goto label_27aca4;
        case 0x27aca8u: goto label_27aca8;
        case 0x27acacu: goto label_27acac;
        case 0x27acb0u: goto label_27acb0;
        case 0x27acb4u: goto label_27acb4;
        case 0x27acb8u: goto label_27acb8;
        case 0x27acbcu: goto label_27acbc;
        case 0x27acc0u: goto label_27acc0;
        case 0x27acc4u: goto label_27acc4;
        case 0x27acc8u: goto label_27acc8;
        case 0x27acccu: goto label_27accc;
        case 0x27acd0u: goto label_27acd0;
        case 0x27acd4u: goto label_27acd4;
        case 0x27acd8u: goto label_27acd8;
        case 0x27acdcu: goto label_27acdc;
        case 0x27ace0u: goto label_27ace0;
        case 0x27ace4u: goto label_27ace4;
        case 0x27ace8u: goto label_27ace8;
        case 0x27acecu: goto label_27acec;
        case 0x27acf0u: goto label_27acf0;
        case 0x27acf4u: goto label_27acf4;
        case 0x27acf8u: goto label_27acf8;
        case 0x27acfcu: goto label_27acfc;
        case 0x27ad00u: goto label_27ad00;
        case 0x27ad04u: goto label_27ad04;
        case 0x27ad08u: goto label_27ad08;
        case 0x27ad0cu: goto label_27ad0c;
        case 0x27ad10u: goto label_27ad10;
        case 0x27ad14u: goto label_27ad14;
        case 0x27ad18u: goto label_27ad18;
        case 0x27ad1cu: goto label_27ad1c;
        case 0x27ad20u: goto label_27ad20;
        case 0x27ad24u: goto label_27ad24;
        case 0x27ad28u: goto label_27ad28;
        case 0x27ad2cu: goto label_27ad2c;
        case 0x27ad30u: goto label_27ad30;
        case 0x27ad34u: goto label_27ad34;
        case 0x27ad38u: goto label_27ad38;
        case 0x27ad3cu: goto label_27ad3c;
        case 0x27ad40u: goto label_27ad40;
        case 0x27ad44u: goto label_27ad44;
        case 0x27ad48u: goto label_27ad48;
        case 0x27ad4cu: goto label_27ad4c;
        case 0x27ad50u: goto label_27ad50;
        case 0x27ad54u: goto label_27ad54;
        case 0x27ad58u: goto label_27ad58;
        case 0x27ad5cu: goto label_27ad5c;
        case 0x27ad60u: goto label_27ad60;
        case 0x27ad64u: goto label_27ad64;
        case 0x27ad68u: goto label_27ad68;
        case 0x27ad6cu: goto label_27ad6c;
        case 0x27ad70u: goto label_27ad70;
        case 0x27ad74u: goto label_27ad74;
        case 0x27ad78u: goto label_27ad78;
        case 0x27ad7cu: goto label_27ad7c;
        case 0x27ad80u: goto label_27ad80;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad88u: goto label_27ad88;
        case 0x27ad8cu: goto label_27ad8c;
        case 0x27ad90u: goto label_27ad90;
        case 0x27ad94u: goto label_27ad94;
        case 0x27ad98u: goto label_27ad98;
        case 0x27ad9cu: goto label_27ad9c;
        case 0x27ada0u: goto label_27ada0;
        case 0x27ada4u: goto label_27ada4;
        case 0x27ada8u: goto label_27ada8;
        case 0x27adacu: goto label_27adac;
        case 0x27adb0u: goto label_27adb0;
        case 0x27adb4u: goto label_27adb4;
        case 0x27adb8u: goto label_27adb8;
        case 0x27adbcu: goto label_27adbc;
        case 0x27adc0u: goto label_27adc0;
        case 0x27adc4u: goto label_27adc4;
        case 0x27adc8u: goto label_27adc8;
        case 0x27adccu: goto label_27adcc;
        case 0x27add0u: goto label_27add0;
        case 0x27add4u: goto label_27add4;
        case 0x27add8u: goto label_27add8;
        case 0x27addcu: goto label_27addc;
        case 0x27ade0u: goto label_27ade0;
        case 0x27ade4u: goto label_27ade4;
        case 0x27ade8u: goto label_27ade8;
        case 0x27adecu: goto label_27adec;
        case 0x27adf0u: goto label_27adf0;
        case 0x27adf4u: goto label_27adf4;
        case 0x27adf8u: goto label_27adf8;
        case 0x27adfcu: goto label_27adfc;
        case 0x27ae00u: goto label_27ae00;
        case 0x27ae04u: goto label_27ae04;
        case 0x27ae08u: goto label_27ae08;
        case 0x27ae0cu: goto label_27ae0c;
        case 0x27ae10u: goto label_27ae10;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae18u: goto label_27ae18;
        case 0x27ae1cu: goto label_27ae1c;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae24u: goto label_27ae24;
        case 0x27ae28u: goto label_27ae28;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae30u: goto label_27ae30;
        case 0x27ae34u: goto label_27ae34;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae3cu: goto label_27ae3c;
        case 0x27ae40u: goto label_27ae40;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae48u: goto label_27ae48;
        case 0x27ae4cu: goto label_27ae4c;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae54u: goto label_27ae54;
        case 0x27ae58u: goto label_27ae58;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae60u: goto label_27ae60;
        case 0x27ae64u: goto label_27ae64;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae6cu: goto label_27ae6c;
        case 0x27ae70u: goto label_27ae70;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae78u: goto label_27ae78;
        case 0x27ae7cu: goto label_27ae7c;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae84u: goto label_27ae84;
        case 0x27ae88u: goto label_27ae88;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae90u: goto label_27ae90;
        case 0x27ae94u: goto label_27ae94;
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        case 0x27b058u: goto label_27b058;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b060u: goto label_27b060;
        case 0x27b064u: goto label_27b064;
        case 0x27b068u: goto label_27b068;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b070u: goto label_27b070;
        case 0x27b074u: goto label_27b074;
        case 0x27b078u: goto label_27b078;
        case 0x27b07cu: goto label_27b07c;
        case 0x27b080u: goto label_27b080;
        case 0x27b084u: goto label_27b084;
        case 0x27b088u: goto label_27b088;
        case 0x27b08cu: goto label_27b08c;
        case 0x27b090u: goto label_27b090;
        case 0x27b094u: goto label_27b094;
        case 0x27b098u: goto label_27b098;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a0u: goto label_27b0a0;
        case 0x27b0a4u: goto label_27b0a4;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0acu: goto label_27b0ac;
        case 0x27b0b0u: goto label_27b0b0;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b0bcu: goto label_27b0bc;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0c4u: goto label_27b0c4;
        case 0x27b0c8u: goto label_27b0c8;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d0u: goto label_27b0d0;
        case 0x27b0d4u: goto label_27b0d4;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0dcu: goto label_27b0dc;
        case 0x27b0e0u: goto label_27b0e0;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b0ecu: goto label_27b0ec;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0f4u: goto label_27b0f4;
        case 0x27b0f8u: goto label_27b0f8;
        case 0x27b0fcu: goto label_27b0fc;
        case 0x27b100u: goto label_27b100;
        case 0x27b104u: goto label_27b104;
        case 0x27b108u: goto label_27b108;
        case 0x27b10cu: goto label_27b10c;
        case 0x27b110u: goto label_27b110;
        case 0x27b114u: goto label_27b114;
        case 0x27b118u: goto label_27b118;
        case 0x27b11cu: goto label_27b11c;
        case 0x27b120u: goto label_27b120;
        case 0x27b124u: goto label_27b124;
        case 0x27b128u: goto label_27b128;
        case 0x27b12cu: goto label_27b12c;
        case 0x27b130u: goto label_27b130;
        case 0x27b134u: goto label_27b134;
        case 0x27b138u: goto label_27b138;
        case 0x27b13cu: goto label_27b13c;
        case 0x27b140u: goto label_27b140;
        case 0x27b144u: goto label_27b144;
        case 0x27b148u: goto label_27b148;
        case 0x27b14cu: goto label_27b14c;
        case 0x27b150u: goto label_27b150;
        case 0x27b154u: goto label_27b154;
        case 0x27b158u: goto label_27b158;
        case 0x27b15cu: goto label_27b15c;
        case 0x27b160u: goto label_27b160;
        case 0x27b164u: goto label_27b164;
        case 0x27b168u: goto label_27b168;
        case 0x27b16cu: goto label_27b16c;
        case 0x27b170u: goto label_27b170;
        case 0x27b174u: goto label_27b174;
        case 0x27b178u: goto label_27b178;
        case 0x27b17cu: goto label_27b17c;
        case 0x27b180u: goto label_27b180;
        case 0x27b184u: goto label_27b184;
        case 0x27b188u: goto label_27b188;
        case 0x27b18cu: goto label_27b18c;
        case 0x27b190u: goto label_27b190;
        case 0x27b194u: goto label_27b194;
        case 0x27b198u: goto label_27b198;
        case 0x27b19cu: goto label_27b19c;
        case 0x27b1a0u: goto label_27b1a0;
        case 0x27b1a4u: goto label_27b1a4;
        case 0x27b1a8u: goto label_27b1a8;
        case 0x27b1acu: goto label_27b1ac;
        case 0x27b1b0u: goto label_27b1b0;
        case 0x27b1b4u: goto label_27b1b4;
        case 0x27b1b8u: goto label_27b1b8;
        case 0x27b1bcu: goto label_27b1bc;
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1c4u: goto label_27b1c4;
        case 0x27b1c8u: goto label_27b1c8;
        case 0x27b1ccu: goto label_27b1cc;
        case 0x27b1d0u: goto label_27b1d0;
        case 0x27b1d4u: goto label_27b1d4;
        case 0x27b1d8u: goto label_27b1d8;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b1e4u: goto label_27b1e4;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b1ecu: goto label_27b1ec;
        default: break;
    }

    ctx->pc = 0x27ab90u;

label_27ab90:
    // 0x27ab90: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x27ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_27ab94:
    // 0x27ab94: 0x8f8287d4  lw          $v0, -0x782C($gp)
    ctx->pc = 0x27ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936532)));
label_27ab98:
    // 0x27ab98: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x27ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_27ab9c:
    // 0x27ab9c: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x27ab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_27aba0:
    // 0x27aba0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27aba4:
    // 0x27aba4: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x27aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_27aba8:
    // 0x27aba8: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x27aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_27abac:
    // 0x27abac: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x27abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_27abb0:
    // 0x27abb0: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x27abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_27abb4:
    // 0x27abb4: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x27abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_27abb8:
    // 0x27abb8: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x27abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_27abbc:
    // 0x27abbc: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x27abbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_27abc0:
    // 0x27abc0: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x27abc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_27abc4:
    // 0x27abc4: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x27abc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_27abc8:
    // 0x27abc8: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x27abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_27abcc:
    // 0x27abcc: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x27abccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
label_27abd0:
    // 0x27abd0: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x27abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_27abd4:
    // 0x27abd4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x27abd4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27abd8:
    // 0x27abd8: 0x12c00173  beqz        $s6, . + 4 + (0x173 << 2)
label_27abdc:
    if (ctx->pc == 0x27ABDCu) {
        ctx->pc = 0x27ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABD8u;
        // 0x27abdc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ABE0u;
        goto label_27abe0;
    }
    ctx->pc = 0x27ABD8u;
    {
        const bool branch_taken_0x27abd8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABD8u;
        // 0x27abdc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abd8) {
            ctx->pc = 0x27B1A8u;
            goto label_27b1a8;
        }
    }
    ctx->pc = 0x27ABE0u;
label_27abe0:
    // 0x27abe0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x27abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_27abe4:
    // 0x27abe4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x27abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_27abe8:
    // 0x27abe8: 0xafa401b8  sw          $a0, 0x1B8($sp)
    ctx->pc = 0x27abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 4));
label_27abec:
    // 0x27abec: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x27abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27abf0:
    // 0x27abf0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x27abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27abf4:
    // 0x27abf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27abf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27abf8:
    // 0x27abf8: 0x0  nop
    ctx->pc = 0x27abf8u;
    // NOP
label_27abfc:
    // 0x27abfc: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
label_27ac00:
    if (ctx->pc == 0x27AC00u) {
        ctx->pc = 0x27AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABFCu;
        // 0x27ac00: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AC04u;
        goto label_27ac04;
    }
    ctx->pc = 0x27ABFCu;
    {
        const bool branch_taken_0x27abfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABFCu;
        // 0x27ac00: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abfc) {
            ctx->pc = 0x27ADB8u;
            goto label_27adb8;
        }
    }
    ctx->pc = 0x27AC04u;
label_27ac04:
    // 0x27ac04: 0xc6c10014  lwc1        $f1, 0x14($s6)
    ctx->pc = 0x27ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ac08:
    // 0x27ac08: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x27ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ac0c:
    // 0x27ac0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27ac0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ac10:
    // 0x27ac10: 0x0  nop
    ctx->pc = 0x27ac10u;
    // NOP
label_27ac14:
    // 0x27ac14: 0x45020069  bc1fl       . + 4 + (0x69 << 2)
label_27ac18:
    if (ctx->pc == 0x27AC18u) {
        ctx->pc = 0x27AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC14u;
        // 0x27ac18: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AC1Cu;
        goto label_27ac1c;
    }
    ctx->pc = 0x27AC14u;
    {
        const bool branch_taken_0x27ac14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ac14) {
            ctx->pc = 0x27AC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AC14u;
            // 0x27ac18: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ADBCu;
            goto label_27adbc;
        }
    }
    ctx->pc = 0x27AC1Cu;
label_27ac1c:
    // 0x27ac1c: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x27ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ac20:
    // 0x27ac20: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x27ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ac24:
    // 0x27ac24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27ac24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ac28:
    // 0x27ac28: 0x0  nop
    ctx->pc = 0x27ac28u;
    // NOP
label_27ac2c:
    // 0x27ac2c: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_27ac30:
    if (ctx->pc == 0x27AC30u) {
        ctx->pc = 0x27AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC2Cu;
        // 0x27ac30: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AC34u;
        goto label_27ac34;
    }
    ctx->pc = 0x27AC2Cu;
    {
        const bool branch_taken_0x27ac2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC2Cu;
        // 0x27ac30: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac2c) {
            ctx->pc = 0x27ADBCu;
            goto label_27adbc;
        }
    }
    ctx->pc = 0x27AC34u;
label_27ac34:
    // 0x27ac34: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x27ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ac38:
    // 0x27ac38: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x27ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ac3c:
    // 0x27ac3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ac3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ac40:
    // 0x27ac40: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
label_27ac44:
    if (ctx->pc == 0x27AC44u) {
        ctx->pc = 0x27AC48u;
        goto label_27ac48;
    }
    ctx->pc = 0x27AC40u;
    {
        const bool branch_taken_0x27ac40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ac40) {
            ctx->pc = 0x27ADBCu;
            goto label_27adbc;
        }
    }
    ctx->pc = 0x27AC48u;
label_27ac48:
    // 0x27ac48: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x27ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ac4c:
    // 0x27ac4c: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x27ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ac50:
    // 0x27ac50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ac50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ac54:
    // 0x27ac54: 0x0  nop
    ctx->pc = 0x27ac54u;
    // NOP
label_27ac58:
    // 0x27ac58: 0x45020059  bc1fl       . + 4 + (0x59 << 2)
label_27ac5c:
    if (ctx->pc == 0x27AC5Cu) {
        ctx->pc = 0x27AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC58u;
        // 0x27ac5c: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AC60u;
        goto label_27ac60;
    }
    ctx->pc = 0x27AC58u;
    {
        const bool branch_taken_0x27ac58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ac58) {
            ctx->pc = 0x27AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AC58u;
            // 0x27ac5c: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ADC0u;
            goto label_27adc0;
        }
    }
    ctx->pc = 0x27AC60u;
label_27ac60:
    // 0x27ac60: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x27ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ac64:
    // 0x27ac64: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x27ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ac68:
    // 0x27ac68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ac68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ac6c:
    // 0x27ac6c: 0x0  nop
    ctx->pc = 0x27ac6cu;
    // NOP
label_27ac70:
    // 0x27ac70: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_27ac74:
    if (ctx->pc == 0x27AC74u) {
        ctx->pc = 0x27AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC70u;
        // 0x27ac74: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AC78u;
        goto label_27ac78;
    }
    ctx->pc = 0x27AC70u;
    {
        const bool branch_taken_0x27ac70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC70u;
        // 0x27ac74: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac70) {
            ctx->pc = 0x27ADB8u;
            goto label_27adb8;
        }
    }
    ctx->pc = 0x27AC78u;
label_27ac78:
    // 0x27ac78: 0xa7a00036  sh          $zero, 0x36($sp)
    ctx->pc = 0x27ac78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 0));
label_27ac7c:
    // 0x27ac7c: 0xa3a20035  sb          $v0, 0x35($sp)
    ctx->pc = 0x27ac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 53), (uint8_t)GPR_U32(ctx, 2));
label_27ac80:
    // 0x27ac80: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x27ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_27ac84:
    // 0x27ac84: 0x96c2001e  lhu         $v0, 0x1E($s6)
    ctx->pc = 0x27ac84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30)));
label_27ac88:
    // 0x27ac88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27ac8c:
    if (ctx->pc == 0x27AC8Cu) {
        ctx->pc = 0x27AC90u;
        goto label_27ac90;
    }
    ctx->pc = 0x27AC88u;
    {
        const bool branch_taken_0x27ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ac88) {
            ctx->pc = 0x27AC98u;
            goto label_27ac98;
        }
    }
    ctx->pc = 0x27AC90u;
label_27ac90:
    // 0x27ac90: 0x92c2001c  lbu         $v0, 0x1C($s6)
    ctx->pc = 0x27ac90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
label_27ac94:
    // 0x27ac94: 0xa3a20035  sb          $v0, 0x35($sp)
    ctx->pc = 0x27ac94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 53), (uint8_t)GPR_U32(ctx, 2));
label_27ac98:
    // 0x27ac98: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x27ac98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27ac9c:
    // 0x27ac9c: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x27ac9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27aca0:
    // 0x27aca0: 0x6aa3000f  ldl         $v1, 0xF($s5)
    ctx->pc = 0x27aca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27aca4:
    // 0x27aca4: 0x6ea30008  ldr         $v1, 0x8($s5)
    ctx->pc = 0x27aca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27aca8:
    // 0x27aca8: 0x6aa40017  ldl         $a0, 0x17($s5)
    ctx->pc = 0x27aca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27acac:
    // 0x27acac: 0x6ea40010  ldr         $a0, 0x10($s5)
    ctx->pc = 0x27acacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27acb0:
    // 0x27acb0: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x27acb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acb4:
    // 0x27acb4: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x27acb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acb8:
    // 0x27acb8: 0xb3a30013  sdl         $v1, 0x13($sp)
    ctx->pc = 0x27acb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acbc:
    // 0x27acbc: 0xb7a3000c  sdr         $v1, 0xC($sp)
    ctx->pc = 0x27acbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acc0:
    // 0x27acc0: 0xb3a4001b  sdl         $a0, 0x1B($sp)
    ctx->pc = 0x27acc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acc4:
    // 0x27acc4: 0xb7a40014  sdr         $a0, 0x14($sp)
    ctx->pc = 0x27acc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acc8:
    // 0x27acc8: 0x6aa60007  ldl         $a2, 0x7($s5)
    ctx->pc = 0x27acc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_27accc:
    // 0x27accc: 0x6ea60000  ldr         $a2, 0x0($s5)
    ctx->pc = 0x27acccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_27acd0:
    // 0x27acd0: 0x6aa7000f  ldl         $a3, 0xF($s5)
    ctx->pc = 0x27acd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_27acd4:
    // 0x27acd4: 0x6ea70008  ldr         $a3, 0x8($s5)
    ctx->pc = 0x27acd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_27acd8:
    // 0x27acd8: 0x6aa30017  ldl         $v1, 0x17($s5)
    ctx->pc = 0x27acd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27acdc:
    // 0x27acdc: 0x6ea30010  ldr         $v1, 0x10($s5)
    ctx->pc = 0x27acdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27ace0:
    // 0x27ace0: 0xb3a60023  sdl         $a2, 0x23($sp)
    ctx->pc = 0x27ace0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27ace4:
    // 0x27ace4: 0xb7a6001c  sdr         $a2, 0x1C($sp)
    ctx->pc = 0x27ace4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27ace8:
    // 0x27ace8: 0xb3a7002b  sdl         $a3, 0x2B($sp)
    ctx->pc = 0x27ace8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acec:
    // 0x27acec: 0xb7a70024  sdr         $a3, 0x24($sp)
    ctx->pc = 0x27acecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acf0:
    // 0x27acf0: 0xb3a30033  sdl         $v1, 0x33($sp)
    ctx->pc = 0x27acf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acf4:
    // 0x27acf4: 0xb7a3002c  sdr         $v1, 0x2C($sp)
    ctx->pc = 0x27acf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27acf8:
    // 0x27acf8: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x27acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_27acfc:
    // 0x27acfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ad00:
    // 0x27ad00: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x27ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ad04:
    // 0x27ad04: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x27ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ad08:
    // 0x27ad08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ad08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ad0c:
    // 0x27ad0c: 0x0  nop
    ctx->pc = 0x27ad0cu;
    // NOP
label_27ad10:
    // 0x27ad10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27ad14:
    if (ctx->pc == 0x27AD14u) {
        ctx->pc = 0x27AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD10u;
        // 0x27ad14: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AD18u;
        goto label_27ad18;
    }
    ctx->pc = 0x27AD10u;
    {
        const bool branch_taken_0x27ad10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD10u;
        // 0x27ad14: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad10) {
            ctx->pc = 0x27AD20u;
            goto label_27ad20;
        }
    }
    ctx->pc = 0x27AD18u;
label_27ad18:
    // 0x27ad18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27ad18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ad1c:
    // 0x27ad1c: 0x0  nop
    ctx->pc = 0x27ad1cu;
    // NOP
label_27ad20:
    // 0x27ad20: 0xc6c10014  lwc1        $f1, 0x14($s6)
    ctx->pc = 0x27ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ad24:
    // 0x27ad24: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x27ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ad28:
    // 0x27ad28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ad28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ad2c:
    // 0x27ad2c: 0x0  nop
    ctx->pc = 0x27ad2cu;
    // NOP
label_27ad30:
    // 0x27ad30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27ad34:
    if (ctx->pc == 0x27AD34u) {
        ctx->pc = 0x27AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD30u;
        // 0x27ad34: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AD38u;
        goto label_27ad38;
    }
    ctx->pc = 0x27AD30u;
    {
        const bool branch_taken_0x27ad30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD30u;
        // 0x27ad34: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad30) {
            ctx->pc = 0x27AD3Cu;
            goto label_27ad3c;
        }
    }
    ctx->pc = 0x27AD38u;
label_27ad38:
    // 0x27ad38: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x27ad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_27ad3c:
    // 0x27ad3c: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x27ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ad40:
    // 0x27ad40: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x27ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ad44:
    // 0x27ad44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ad44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ad48:
    // 0x27ad48: 0x0  nop
    ctx->pc = 0x27ad48u;
    // NOP
label_27ad4c:
    // 0x27ad4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27ad50:
    if (ctx->pc == 0x27AD50u) {
        ctx->pc = 0x27AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD4Cu;
        // 0x27ad50: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AD54u;
        goto label_27ad54;
    }
    ctx->pc = 0x27AD4Cu;
    {
        const bool branch_taken_0x27ad4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ad4c) {
            ctx->pc = 0x27AD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AD4Cu;
            // 0x27ad50: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AD54u;
            goto label_27ad54;
        }
    }
    ctx->pc = 0x27AD54u;
label_27ad54:
    // 0x27ad54: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x27ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ad58:
    // 0x27ad58: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x27ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ad5c:
    // 0x27ad5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ad5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ad60:
    // 0x27ad60: 0x0  nop
    ctx->pc = 0x27ad60u;
    // NOP
label_27ad64:
    // 0x27ad64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27ad68:
    if (ctx->pc == 0x27AD68u) {
        ctx->pc = 0x27AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD64u;
        // 0x27ad68: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AD6Cu;
        goto label_27ad6c;
    }
    ctx->pc = 0x27AD64u;
    {
        const bool branch_taken_0x27ad64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ad64) {
            ctx->pc = 0x27AD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AD64u;
            // 0x27ad68: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AD6Cu;
            goto label_27ad6c;
        }
    }
    ctx->pc = 0x27AD6Cu;
label_27ad6c:
    // 0x27ad6c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x27ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ad70:
    // 0x27ad70: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x27ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ad74:
    // 0x27ad74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ad74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ad78:
    // 0x27ad78: 0x0  nop
    ctx->pc = 0x27ad78u;
    // NOP
label_27ad7c:
    // 0x27ad7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27ad80:
    if (ctx->pc == 0x27AD80u) {
        ctx->pc = 0x27AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD7Cu;
        // 0x27ad80: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AD84u;
        goto label_27ad84;
    }
    ctx->pc = 0x27AD7Cu;
    {
        const bool branch_taken_0x27ad7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ad7c) {
            ctx->pc = 0x27AD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AD7Cu;
            // 0x27ad80: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AD84u;
            goto label_27ad84;
        }
    }
    ctx->pc = 0x27AD84u;
label_27ad84:
    // 0x27ad84: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x27ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ad88:
    // 0x27ad88: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x27ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ad8c:
    // 0x27ad8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ad8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ad90:
    // 0x27ad90: 0x0  nop
    ctx->pc = 0x27ad90u;
    // NOP
label_27ad94:
    // 0x27ad94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27ad98:
    if (ctx->pc == 0x27AD98u) {
        ctx->pc = 0x27AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD94u;
        // 0x27ad98: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AD9Cu;
        goto label_27ad9c;
    }
    ctx->pc = 0x27AD94u;
    {
        const bool branch_taken_0x27ad94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD94u;
        // 0x27ad98: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad94) {
            ctx->pc = 0x27ADA0u;
            goto label_27ada0;
        }
    }
    ctx->pc = 0x27AD9Cu;
label_27ad9c:
    // 0x27ad9c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x27ad9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_27ada0:
    // 0x27ada0: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x27ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_27ada4:
    // 0x27ada4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x27ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_27ada8:
    // 0x27ada8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x27ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_27adac:
    // 0x27adac: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x27adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_27adb0:
    // 0x27adb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_27adb4:
    if (ctx->pc == 0x27ADB4u) {
        ctx->pc = 0x27ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADB0u;
        // 0x27adb4: 0xafa501bc  sw          $a1, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ADB8u;
        goto label_27adb8;
    }
    ctx->pc = 0x27ADB0u;
    {
        const bool branch_taken_0x27adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADB0u;
        // 0x27adb4: 0xafa501bc  sw          $a1, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adb0) {
            ctx->pc = 0x27ADC4u;
            goto label_27adc4;
        }
    }
    ctx->pc = 0x27ADB8u;
label_27adb8:
    // 0x27adb8: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x27adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_27adbc:
    // 0x27adbc: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x27adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_27adc0:
    // 0x27adc0: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x27adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_27adc4:
    // 0x27adc4: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x27adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_27adc8:
    // 0x27adc8: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x27adc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_27adcc:
    // 0x27adcc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x27adccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27add0:
    // 0x27add0: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
label_27add4:
    if (ctx->pc == 0x27ADD4u) {
        ctx->pc = 0x27ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADD0u;
        // 0x27add4: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ADD8u;
        goto label_27add8;
    }
    ctx->pc = 0x27ADD0u;
    {
        const bool branch_taken_0x27add0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADD0u;
        // 0x27add4: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27add0) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27ADD8u;
label_27add8:
    // 0x27add8: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x27add8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27addc:
    // 0x27addc: 0x0  nop
    ctx->pc = 0x27addcu;
    // NOP
label_27ade0:
    // 0x27ade0: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x27ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_27ade4:
    // 0x27ade4: 0x10000061  b           . + 4 + (0x61 << 2)
label_27ade8:
    if (ctx->pc == 0x27ADE8u) {
        ctx->pc = 0x27ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADE4u;
        // 0x27ade8: 0xafa50144  sw          $a1, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ADECu;
        goto label_27adec;
    }
    ctx->pc = 0x27ADE4u;
    {
        const bool branch_taken_0x27ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADE4u;
        // 0x27ade8: 0xafa50144  sw          $a1, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ade4) {
            ctx->pc = 0x27AF6Cu;
            goto label_27af6c;
        }
    }
    ctx->pc = 0x27ADECu;
label_27adec:
    // 0x27adec: 0x0  nop
    ctx->pc = 0x27adecu;
    // NOP
label_27adf0:
    // 0x27adf0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x27adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_27adf4:
    // 0x27adf4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_27adf8:
    if (ctx->pc == 0x27ADF8u) {
        ctx->pc = 0x27ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADF4u;
        // 0x27adf8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ADFCu;
        goto label_27adfc;
    }
    ctx->pc = 0x27ADF4u;
    {
        const bool branch_taken_0x27adf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADF4u;
        // 0x27adf8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adf4) {
            ctx->pc = 0x27AEACu;
            goto label_27aeac;
        }
    }
    ctx->pc = 0x27ADFCu;
label_27adfc:
    // 0x27adfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27ae00:
    // 0x27ae00: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27ae00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27ae04:
    // 0x27ae04: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x27ae04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27ae08:
    // 0x27ae08: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x27ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_27ae0c:
    // 0x27ae0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27ae10:
    // 0x27ae10: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x27ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27ae14:
    // 0x27ae14: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27ae14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27ae18:
    // 0x27ae18: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
label_27ae1c:
    if (ctx->pc == 0x27AE1Cu) {
        ctx->pc = 0x27AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE18u;
        // 0x27ae1c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE20u;
        goto label_27ae20;
    }
    ctx->pc = 0x27AE18u;
    {
        const bool branch_taken_0x27ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x27AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE18u;
        // 0x27ae1c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae18) {
            ctx->pc = 0x27AE4Cu;
            goto label_27ae4c;
        }
    }
    ctx->pc = 0x27AE20u;
label_27ae20:
    // 0x27ae20: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27ae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27ae24:
    // 0x27ae24: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27ae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27ae28:
    // 0x27ae28: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27ae28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27ae2c:
    // 0x27ae2c: 0x0  nop
    ctx->pc = 0x27ae2cu;
    // NOP
label_27ae30:
    // 0x27ae30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27ae34:
    // 0x27ae34: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x27ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27ae38:
    // 0x27ae38: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x27ae38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27ae3c:
    // 0x27ae3c: 0x0  nop
    ctx->pc = 0x27ae3cu;
    // NOP
label_27ae40:
    // 0x27ae40: 0x0  nop
    ctx->pc = 0x27ae40u;
    // NOP
label_27ae44:
    // 0x27ae44: 0x5066fffa  beql        $v1, $a2, . + 4 + (-0x6 << 2)
label_27ae48:
    if (ctx->pc == 0x27AE48u) {
        ctx->pc = 0x27AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE44u;
        // 0x27ae48: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE4Cu;
        goto label_27ae4c;
    }
    ctx->pc = 0x27AE44u;
    {
        const bool branch_taken_0x27ae44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x27ae44) {
            ctx->pc = 0x27AE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AE44u;
            // 0x27ae48: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ae30;
        }
    }
    ctx->pc = 0x27AE4Cu;
label_27ae4c:
    // 0x27ae4c: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x27ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_27ae50:
    // 0x27ae50: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x27ae50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_27ae54:
    // 0x27ae54: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_27ae58:
    if (ctx->pc == 0x27AE58u) {
        ctx->pc = 0x27AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE54u;
        // 0x27ae58: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE5Cu;
        goto label_27ae5c;
    }
    ctx->pc = 0x27AE54u;
    {
        const bool branch_taken_0x27ae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x27AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE54u;
        // 0x27ae58: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae54) {
            ctx->pc = 0x27AE84u;
            goto label_27ae84;
        }
    }
    ctx->pc = 0x27AE5Cu;
label_27ae5c:
    // 0x27ae5c: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_27ae60:
    // 0x27ae60: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27ae60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27ae64:
    // 0x27ae64: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x27ae64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_27ae68:
    // 0x27ae68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27ae6c:
    // 0x27ae6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27ae70:
    // 0x27ae70: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x27ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_27ae74:
    // 0x27ae74: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x27ae74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_27ae78:
    // 0x27ae78: 0x0  nop
    ctx->pc = 0x27ae78u;
    // NOP
label_27ae7c:
    // 0x27ae7c: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_27ae80:
    if (ctx->pc == 0x27AE80u) {
        ctx->pc = 0x27AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE7Cu;
        // 0x27ae80: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE84u;
        goto label_27ae84;
    }
    ctx->pc = 0x27AE7Cu;
    {
        const bool branch_taken_0x27ae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x27ae7c) {
            ctx->pc = 0x27AE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AE7Cu;
            // 0x27ae80: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ae68;
        }
    }
    ctx->pc = 0x27AE84u;
label_27ae84:
    // 0x27ae84: 0xa7a60150  sh          $a2, 0x150($sp)
    ctx->pc = 0x27ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 6));
label_27ae88:
    // 0x27ae88: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x27ae88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_27ae8c:
    // 0x27ae8c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x27ae8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_27ae90:
    // 0x27ae90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ae94:
    // 0x27ae94: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x27ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_27ae98:
    // 0x27ae98: 0xa7a20152  sh          $v0, 0x152($sp)
    ctx->pc = 0x27ae98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 338), (uint16_t)GPR_U32(ctx, 2));
label_27ae9c:
    // 0x27ae9c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_27aea0:
    if (ctx->pc == 0x27AEA0u) {
        ctx->pc = 0x27AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE9Cu;
        // 0x27aea0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEA4u;
        goto label_27aea4;
    }
    ctx->pc = 0x27AE9Cu;
    {
        const bool branch_taken_0x27ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE9Cu;
        // 0x27aea0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae9c) {
            ctx->pc = 0x27AF8Cu;
            goto label_27af8c;
        }
    }
    ctx->pc = 0x27AEA4u;
label_27aea4:
    // 0x27aea4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_27aea8:
    if (ctx->pc == 0x27AEA8u) {
        ctx->pc = 0x27AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEA4u;
        // 0x27aea8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEACu;
        goto label_27aeac;
    }
    ctx->pc = 0x27AEA4u;
    {
        const bool branch_taken_0x27aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEA4u;
        // 0x27aea8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aea4) {
            ctx->pc = 0x27AF64u;
            goto label_27af64;
        }
    }
    ctx->pc = 0x27AEACu;
label_27aeac:
    // 0x27aeac: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x27aeacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27aeb0:
    // 0x27aeb0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x27aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_27aeb4:
    // 0x27aeb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27aeb8:
    // 0x27aeb8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27aebc:
    // 0x27aebc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x27aebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27aec0:
    // 0x27aec0: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x27aec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_27aec4:
    // 0x27aec4: 0x7d4021  addu        $t0, $v1, $sp
    ctx->pc = 0x27aec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_27aec8:
    // 0x27aec8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x27aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27aecc:
    // 0x27aecc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x27aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aed0:
    // 0x27aed0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27aed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27aed4:
    // 0x27aed4: 0x0  nop
    ctx->pc = 0x27aed4u;
    // NOP
label_27aed8:
    // 0x27aed8: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
label_27aedc:
    if (ctx->pc == 0x27AEDCu) {
        ctx->pc = 0x27AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED8u;
        // 0x27aedc: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEE0u;
        goto label_27aee0;
    }
    ctx->pc = 0x27AED8u;
    {
        const bool branch_taken_0x27aed8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED8u;
        // 0x27aedc: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aed8) {
            ctx->pc = 0x27AEA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27aea4;
        }
    }
    ctx->pc = 0x27AEE0u;
label_27aee0:
    // 0x27aee0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27aee4:
    // 0x27aee4: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x27aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aee8:
    // 0x27aee8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27aee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27aeec:
    // 0x27aeec: 0x0  nop
    ctx->pc = 0x27aeecu;
    // NOP
label_27aef0:
    // 0x27aef0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_27aef4:
    if (ctx->pc == 0x27AEF4u) {
        ctx->pc = 0x27AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEF0u;
        // 0x27aef4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEF8u;
        goto label_27aef8;
    }
    ctx->pc = 0x27AEF0u;
    {
        const bool branch_taken_0x27aef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEF0u;
        // 0x27aef4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aef0) {
            ctx->pc = 0x27AF64u;
            goto label_27af64;
        }
    }
    ctx->pc = 0x27AEF8u;
label_27aef8:
    // 0x27aef8: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x27aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aefc:
    // 0x27aefc: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x27aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_27af00:
    // 0x27af00: 0x8ca6fffc  lw          $a2, -0x4($a1)
    ctx->pc = 0x27af00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_27af04:
    // 0x27af04: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x27af04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_27af08:
    // 0x27af08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27af08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27af0c:
    // 0x27af0c: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x27af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
label_27af10:
    // 0x27af10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_27af14:
    if (ctx->pc == 0x27AF14u) {
        ctx->pc = 0x27AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF10u;
        // 0x27af14: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF18u;
        goto label_27af18;
    }
    ctx->pc = 0x27AF10u;
    {
        const bool branch_taken_0x27af10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF10u;
        // 0x27af14: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af10) {
            ctx->pc = 0x27AF30u;
            goto label_27af30;
        }
    }
    ctx->pc = 0x27AF18u;
label_27af18:
    // 0x27af18: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x27af18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_27af1c:
    // 0x27af1c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27af1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27af20:
    // 0x27af20: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x27af20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_27af24:
    // 0x27af24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27af24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_27af28:
    // 0x27af28: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x27af28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_27af2c:
    // 0x27af2c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27af30:
    // 0x27af30: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x27af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27af34:
    // 0x27af34: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x27af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27af38:
    // 0x27af38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27af38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27af3c:
    // 0x27af3c: 0x0  nop
    ctx->pc = 0x27af3cu;
    // NOP
label_27af40:
    // 0x27af40: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_27af44:
    if (ctx->pc == 0x27AF44u) {
        ctx->pc = 0x27AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF40u;
        // 0x27af44: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF48u;
        goto label_27af48;
    }
    ctx->pc = 0x27AF40u;
    {
        const bool branch_taken_0x27af40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF40u;
        // 0x27af44: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af40) {
            ctx->pc = 0x27AF64u;
            goto label_27af64;
        }
    }
    ctx->pc = 0x27AF48u;
label_27af48:
    // 0x27af48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27af4c:
    // 0x27af4c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_27af50:
    // 0x27af50: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x27af50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_27af54:
    // 0x27af54: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_27af58:
    // 0x27af58: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x27af58u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_27af5c:
    // 0x27af5c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x27af5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_27af60:
    // 0x27af60: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x27af60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_27af64:
    // 0x27af64: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_27af68:
    // 0x27af68: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27af6c:
    // 0x27af6c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27af6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27af70:
    // 0x27af70: 0x105eff9f  beq         $v0, $fp, . + 4 + (-0x61 << 2)
label_27af74:
    if (ctx->pc == 0x27AF74u) {
        ctx->pc = 0x27AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF70u;
        // 0x27af74: 0x8fa70144  lw          $a3, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF78u;
        goto label_27af78;
    }
    ctx->pc = 0x27AF70u;
    {
        const bool branch_taken_0x27af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x27AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF70u;
        // 0x27af74: 0x8fa70144  lw          $a3, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af70) {
            ctx->pc = 0x27ADF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27adf0;
        }
    }
    ctx->pc = 0x27AF78u;
label_27af78:
    // 0x27af78: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x27af78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27af7c:
    // 0x27af7c: 0x8cb70004  lw          $s7, 0x4($a1)
    ctx->pc = 0x27af7cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27af80:
    // 0x27af80: 0xa7a30150  sh          $v1, 0x150($sp)
    ctx->pc = 0x27af80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 3));
label_27af84:
    // 0x27af84: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27af84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27af88:
    // 0x27af88: 0xa7a20152  sh          $v0, 0x152($sp)
    ctx->pc = 0x27af88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 338), (uint16_t)GPR_U32(ctx, 2));
label_27af8c:
    // 0x27af8c: 0x97b40150  lhu         $s4, 0x150($sp)
    ctx->pc = 0x27af8cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_27af90:
    // 0x27af90: 0x97a20152  lhu         $v0, 0x152($sp)
    ctx->pc = 0x27af90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_27af94:
    // 0x27af94: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_27af98:
    // 0x27af98: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27af98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27af9c:
    // 0x27af9c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_27afa0:
    if (ctx->pc == 0x27AFA0u) {
        ctx->pc = 0x27AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF9Cu;
        // 0x27afa0: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFA4u;
        goto label_27afa4;
    }
    ctx->pc = 0x27AF9Cu;
    {
        const bool branch_taken_0x27af9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF9Cu;
        // 0x27afa0: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af9c) {
            ctx->pc = 0x27B190u;
            goto label_27b190;
        }
    }
    ctx->pc = 0x27AFA4u;
label_27afa4:
    // 0x27afa4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27afa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_27afa8:
    // 0x27afa8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x27afa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27afac:
    // 0x27afac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27afb0:
    // 0x27afb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27afb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27afb4:
    // 0x27afb4: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x27afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_27afb8:
    // 0x27afb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27afbc:
    if (ctx->pc == 0x27AFBCu) {
        ctx->pc = 0x27AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB8u;
        // 0x27afbc: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFC0u;
        goto label_27afc0;
    }
    ctx->pc = 0x27AFB8u;
    {
        const bool branch_taken_0x27afb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB8u;
        // 0x27afbc: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afb8) {
            ctx->pc = 0x27AFCCu;
            goto label_27afcc;
        }
    }
    ctx->pc = 0x27AFC0u;
label_27afc0:
    // 0x27afc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27afc4:
    // 0x27afc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_27afc8:
    if (ctx->pc == 0x27AFC8u) {
        ctx->pc = 0x27AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFC4u;
        // 0x27afc8: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFCCu;
        goto label_27afcc;
    }
    ctx->pc = 0x27AFC4u;
    {
        const bool branch_taken_0x27afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFC4u;
        // 0x27afc8: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afc4) {
            ctx->pc = 0x27AFD0u;
            goto label_27afd0;
        }
    }
    ctx->pc = 0x27AFCCu;
label_27afcc:
    // 0x27afcc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x27afccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27afd0:
    // 0x27afd0: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x27afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_27afd4:
    // 0x27afd4: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x27afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_27afd8:
    // 0x27afd8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27afdc:
    // 0x27afdc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27afdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_27afe0:
    // 0x27afe0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x27afe0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27afe4:
    // 0x27afe4: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x27afe4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_27afe8:
    // 0x27afe8: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x27afe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27afec:
    // 0x27afec: 0x499021  addu        $s2, $v0, $t1
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_27aff0:
    // 0x27aff0: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x27aff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27aff4:
    // 0x27aff4: 0x498021  addu        $s0, $v0, $t1
    ctx->pc = 0x27aff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_27aff8:
    // 0x27aff8: 0xa81018  mult        $v0, $a1, $t0
    ctx->pc = 0x27aff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27affc:
    // 0x27affc: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_27b000:
    if (ctx->pc == 0x27B000u) {
        ctx->pc = 0x27B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFFCu;
        // 0x27b000: 0x498821  addu        $s1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B004u;
        goto label_27b004;
    }
    ctx->pc = 0x27AFFCu;
    {
        const bool branch_taken_0x27affc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFFCu;
        // 0x27b000: 0x498821  addu        $s1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27affc) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B004u;
label_27b004:
    // 0x27b004: 0x7fa801c0  sq          $t0, 0x1C0($sp)
    ctx->pc = 0x27b004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 8));
label_27b008:
    // 0x27b008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b00c:
    // 0x27b00c: 0x7fa901d0  sq          $t1, 0x1D0($sp)
    ctx->pc = 0x27b00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 9));
label_27b010:
    // 0x27b010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27b010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b014:
    // 0x27b014: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b018:
    // 0x27b018: 0xc0a45ea  jal         func_2917A8
label_27b01c:
    if (ctx->pc == 0x27B01Cu) {
        ctx->pc = 0x27B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B018u;
        // 0x27b01c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B020u;
        goto label_27b020;
    }
    ctx->pc = 0x27B018u;
    SET_GPR_U32(ctx, 31, 0x27B020u);
    ctx->pc = 0x27B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B018u;
    // 0x27b01c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2917A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2917A8u, 0x27B018u, 0x27B020u)) {
        return;
    }
    ctx->pc = 0x27B020u;
label_27b020:
    // 0x27b020: 0x7ba801c0  lq          $t0, 0x1C0($sp)
    ctx->pc = 0x27b020u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_27b024:
    // 0x27b024: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_27b028:
    if (ctx->pc == 0x27B028u) {
        ctx->pc = 0x27B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B024u;
        // 0x27b028: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B02Cu;
        goto label_27b02c;
    }
    ctx->pc = 0x27B024u;
    {
        const bool branch_taken_0x27b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B024u;
        // 0x27b028: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b024) {
            ctx->pc = 0x27B16Cu;
            goto label_27b16c;
        }
    }
    ctx->pc = 0x27B02Cu;
label_27b02c:
    // 0x27b02c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x27b02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27b030:
    // 0x27b030: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x27b030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27b034:
    // 0x27b034: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27b038:
    // 0x27b038: 0xb3a30173  sdl         $v1, 0x173($sp)
    ctx->pc = 0x27b038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 371); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b03c:
    // 0x27b03c: 0xb7a3016c  sdr         $v1, 0x16C($sp)
    ctx->pc = 0x27b03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b040:
    // 0x27b040: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x27b040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
label_27b044:
    // 0x27b044: 0xafb30178  sw          $s3, 0x178($sp)
    ctx->pc = 0x27b044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 19));
label_27b048:
    // 0x27b048: 0xafb0017c  sw          $s0, 0x17C($sp)
    ctx->pc = 0x27b048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 16));
label_27b04c:
    // 0x27b04c: 0xafb10180  sw          $s1, 0x180($sp)
    ctx->pc = 0x27b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 17));
label_27b050:
    // 0x27b050: 0xafb20184  sw          $s2, 0x184($sp)
    ctx->pc = 0x27b050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 18));
label_27b054:
    // 0x27b054: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x27b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27b058:
    // 0x27b058: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b05c:
    // 0x27b05c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x27b05cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_27b060:
    // 0x27b060: 0xe7a70190  swc1        $f7, 0x190($sp)
    ctx->pc = 0x27b060u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_27b064:
    // 0x27b064: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b068:
    // 0x27b068: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x27b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27b06c:
    // 0x27b06c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27b06cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_27b070:
    // 0x27b070: 0xe7a60194  swc1        $f6, 0x194($sp)
    ctx->pc = 0x27b070u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_27b074:
    // 0x27b074: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x27b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27b078:
    // 0x27b078: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b07c:
    // 0x27b07c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x27b07cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_27b080:
    // 0x27b080: 0xe7a50198  swc1        $f5, 0x198($sp)
    ctx->pc = 0x27b080u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_27b084:
    // 0x27b084: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x27b084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b088:
    // 0x27b088: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b08c:
    // 0x27b08c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27b08cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27b090:
    // 0x27b090: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x27b090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_27b094:
    // 0x27b094: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b098:
    // 0x27b098: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x27b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27b09c:
    // 0x27b09c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27b09cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27b0a0:
    // 0x27b0a0: 0xe7a401a4  swc1        $f4, 0x1A4($sp)
    ctx->pc = 0x27b0a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_27b0a4:
    // 0x27b0a4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x27b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b0a8:
    // 0x27b0a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b0ac:
    // 0x27b0ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b0acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27b0b0:
    // 0x27b0b0: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x27b0b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_27b0b4:
    // 0x27b0b4: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x27b0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_27b0b8:
    // 0x27b0b8: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x27b0b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_27b0bc:
    // 0x27b0bc: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x27b0bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_27b0c0:
    // 0x27b0c0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27b0c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_27b0c4:
    // 0x27b0c4: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x27b0c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_27b0c8:
    // 0x27b0c8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27b0c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27b0cc:
    // 0x27b0cc: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x27b0ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_27b0d0:
    // 0x27b0d0: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27b0d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_27b0d4:
    // 0x27b0d4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x27b0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_27b0d8:
    // 0x27b0d8: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x27b0d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_27b0dc:
    // 0x27b0dc: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x27b0dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_27b0e0:
    // 0x27b0e0: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x27b0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_27b0e4:
    // 0x27b0e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27b0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27b0e8:
    // 0x27b0e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27b0e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_27b0ec:
    // 0x27b0ec: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x27b0ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_27b0f0:
    // 0x27b0f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27b0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27b0f4:
    // 0x27b0f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27b0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_27b0f8:
    // 0x27b0f8: 0x46000004  c1          0x4
    ctx->pc = 0x27b0f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_27b0fc:
    // 0x27b0fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27b0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b100:
    // 0x27b100: 0x0  nop
    ctx->pc = 0x27b100u;
    // NOP
label_27b104:
    // 0x27b104: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27b108:
    if (ctx->pc == 0x27B108u) {
        ctx->pc = 0x27B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B104u;
        // 0x27b108: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B10Cu;
        goto label_27b10c;
    }
    ctx->pc = 0x27B104u;
    {
        const bool branch_taken_0x27b104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B104u;
        // 0x27b108: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b104) {
            ctx->pc = 0x27B118u;
            goto label_27b118;
        }
    }
    ctx->pc = 0x27B10Cu;
label_27b10c:
    // 0x27b10c: 0x4600a1c3  div.s       $f7, $f20, $f0
    ctx->pc = 0x27b10cu;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_27b110:
    // 0x27b110: 0x10000003  b           . + 4 + (0x3 << 2)
label_27b114:
    if (ctx->pc == 0x27B114u) {
        ctx->pc = 0x27B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B110u;
        // 0x27b114: 0xc7a00160  lwc1        $f0, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B118u;
        goto label_27b118;
    }
    ctx->pc = 0x27B110u;
    {
        const bool branch_taken_0x27b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B110u;
        // 0x27b114: 0xc7a00160  lwc1        $f0, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b110) {
            ctx->pc = 0x27B120u;
            goto label_27b120;
        }
    }
    ctx->pc = 0x27B118u;
label_27b118:
    // 0x27b118: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x27b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b11c:
    // 0x27b11c: 0x0  nop
    ctx->pc = 0x27b11cu;
    // NOP
label_27b120:
    // 0x27b120: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x27b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b124:
    // 0x27b124: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x27b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b128:
    // 0x27b128: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x27b128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_27b12c:
    // 0x27b12c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x27b12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_27b130:
    // 0x27b130: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x27b130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_27b134:
    // 0x27b134: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x27b134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_27b138:
    // 0x27b138: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x27b138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_27b13c:
    // 0x27b13c: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x27b13cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_27b140:
    // 0x27b140: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b144:
    // 0x27b144: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27b144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27b148:
    // 0x27b148: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x27b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27b14c:
    // 0x27b14c: 0x8fa601b4  lw          $a2, 0x1B4($sp)
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_27b150:
    // 0x27b150: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x27b150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_27b154:
    // 0x27b154: 0x7fa801c0  sq          $t0, 0x1C0($sp)
    ctx->pc = 0x27b154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 8));
label_27b158:
    // 0x27b158: 0xe0f809  jalr        $a3
label_27b15c:
    if (ctx->pc == 0x27B15Cu) {
        ctx->pc = 0x27B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B158u;
        // 0x27b15c: 0x7fa901d0  sq          $t1, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B160u;
        goto label_27b160;
    }
    ctx->pc = 0x27B158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27B160u);
        ctx->pc = 0x27B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B158u;
        // 0x27b15c: 0x7fa901d0  sq          $t1, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B158u, 0x27B160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B160u;
label_27b160:
    // 0x27b160: 0x7ba801c0  lq          $t0, 0x1C0($sp)
    ctx->pc = 0x27b160u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_27b164:
    // 0x27b164: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_27b168:
    if (ctx->pc == 0x27B168u) {
        ctx->pc = 0x27B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B164u;
        // 0x27b168: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B16Cu;
        goto label_27b16c;
    }
    ctx->pc = 0x27B164u;
    {
        const bool branch_taken_0x27b164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B164u;
        // 0x27b168: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b164) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27B16Cu;
label_27b16c:
    // 0x27b16c: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x27b16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_27b170:
    // 0x27b170: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x27b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27b174:
    // 0x27b174: 0x97a40152  lhu         $a0, 0x152($sp)
    ctx->pc = 0x27b174u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_27b178:
    // 0x27b178: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x27b178u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27b17c:
    // 0x27b17c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27b180:
    // 0x27b180: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27b180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27b184:
    // 0x27b184: 0x5440ff8c  bnel        $v0, $zero, . + 4 + (-0x74 << 2)
label_27b188:
    if (ctx->pc == 0x27B188u) {
        ctx->pc = 0x27B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B184u;
        // 0x27b188: 0x8ec30024  lw          $v1, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B18Cu;
        goto label_27b18c;
    }
    ctx->pc = 0x27B184u;
    {
        const bool branch_taken_0x27b184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b184) {
            ctx->pc = 0x27B188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B184u;
            // 0x27b188: 0x8ec30024  lw          $v1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27afb8;
        }
    }
    ctx->pc = 0x27B18Cu;
label_27b18c:
    // 0x27b18c: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x27b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_27b190:
    // 0x27b190: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x27b190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_27b194:
    // 0x27b194: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x27b194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27b198:
    // 0x27b198: 0x5440ff11  bnel        $v0, $zero, . + 4 + (-0xEF << 2)
label_27b19c:
    if (ctx->pc == 0x27B19Cu) {
        ctx->pc = 0x27B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B198u;
        // 0x27b19c: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B1A0u;
        goto label_27b1a0;
    }
    ctx->pc = 0x27B198u;
    {
        const bool branch_taken_0x27b198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b198) {
            ctx->pc = 0x27B19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B198u;
            // 0x27b19c: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ADE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ade0;
        }
    }
    ctx->pc = 0x27B1A0u;
label_27b1a0:
    // 0x27b1a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_27b1a4:
    if (ctx->pc == 0x27B1A4u) {
        ctx->pc = 0x27B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1A0u;
        // 0x27b1a4: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B1A8u;
        goto label_27b1a8;
    }
    ctx->pc = 0x27B1A0u;
    {
        const bool branch_taken_0x27b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1A0u;
        // 0x27b1a4: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1a0) {
            ctx->pc = 0x27B1BCu;
            goto label_27b1bc;
        }
    }
    ctx->pc = 0x27B1A8u;
label_27b1a8:
    // 0x27b1a8: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x27b1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_27b1ac:
    // 0x27b1ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27b1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b1b0:
    // 0x27b1b0: 0xc09e77e  jal         func_279DF8
label_27b1b4:
    if (ctx->pc == 0x27B1B4u) {
        ctx->pc = 0x27B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1B0u;
        // 0x27b1b4: 0x8fa701b4  lw          $a3, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B1B8u;
        goto label_27b1b8;
    }
    ctx->pc = 0x27B1B0u;
    SET_GPR_U32(ctx, 31, 0x27B1B8u);
    ctx->pc = 0x27B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B1B0u;
    // 0x27b1b4: 0x8fa701b4  lw          $a3, 0x1B4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x279DF8u, 0x27B1B0u, 0x27B1B8u)) {
        return;
    }
    ctx->pc = 0x27B1B8u;
label_27b1b8:
    // 0x27b1b8: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x27b1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_27b1bc:
    // 0x27b1bc: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x27b1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_27b1c0:
    // 0x27b1c0: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x27b1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_27b1c4:
    // 0x27b1c4: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x27b1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_27b1c8:
    // 0x27b1c8: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x27b1c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_27b1cc:
    // 0x27b1cc: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x27b1ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_27b1d0:
    // 0x27b1d0: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x27b1d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_27b1d4:
    // 0x27b1d4: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x27b1d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_27b1d8:
    // 0x27b1d8: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x27b1d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_27b1dc:
    // 0x27b1dc: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x27b1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_27b1e0:
    // 0x27b1e0: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x27b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27b1e4:
    // 0x27b1e4: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x27b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27b1e8:
    // 0x27b1e8: 0x3e00008  jr          $ra
label_27b1ec:
    if (ctx->pc == 0x27B1ECu) {
        ctx->pc = 0x27B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1E8u;
        // 0x27b1ec: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B1F0u;
        goto label_fallthrough_0x27b1e8;
    }
    ctx->pc = 0x27B1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1E8u;
        // 0x27b1ec: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27b1e8:
    ctx->pc = 0x27B1F0u;
}
