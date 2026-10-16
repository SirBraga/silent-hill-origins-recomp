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

// Function: sub_0023AAE0
// Address: 0x23aae0 - 0x23b248
void sub_0023AAE0_0x23aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAE0_0x23aae0");
#endif

    switch (ctx->pc) {
        case 0x23aae0u: goto label_23aae0;
        case 0x23aae4u: goto label_23aae4;
        case 0x23aae8u: goto label_23aae8;
        case 0x23aaecu: goto label_23aaec;
        case 0x23aaf0u: goto label_23aaf0;
        case 0x23aaf4u: goto label_23aaf4;
        case 0x23aaf8u: goto label_23aaf8;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab00u: goto label_23ab00;
        case 0x23ab04u: goto label_23ab04;
        case 0x23ab08u: goto label_23ab08;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab10u: goto label_23ab10;
        case 0x23ab14u: goto label_23ab14;
        case 0x23ab18u: goto label_23ab18;
        case 0x23ab1cu: goto label_23ab1c;
        case 0x23ab20u: goto label_23ab20;
        case 0x23ab24u: goto label_23ab24;
        case 0x23ab28u: goto label_23ab28;
        case 0x23ab2cu: goto label_23ab2c;
        case 0x23ab30u: goto label_23ab30;
        case 0x23ab34u: goto label_23ab34;
        case 0x23ab38u: goto label_23ab38;
        case 0x23ab3cu: goto label_23ab3c;
        case 0x23ab40u: goto label_23ab40;
        case 0x23ab44u: goto label_23ab44;
        case 0x23ab48u: goto label_23ab48;
        case 0x23ab4cu: goto label_23ab4c;
        case 0x23ab50u: goto label_23ab50;
        case 0x23ab54u: goto label_23ab54;
        case 0x23ab58u: goto label_23ab58;
        case 0x23ab5cu: goto label_23ab5c;
        case 0x23ab60u: goto label_23ab60;
        case 0x23ab64u: goto label_23ab64;
        case 0x23ab68u: goto label_23ab68;
        case 0x23ab6cu: goto label_23ab6c;
        case 0x23ab70u: goto label_23ab70;
        case 0x23ab74u: goto label_23ab74;
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab7cu: goto label_23ab7c;
        case 0x23ab80u: goto label_23ab80;
        case 0x23ab84u: goto label_23ab84;
        case 0x23ab88u: goto label_23ab88;
        case 0x23ab8cu: goto label_23ab8c;
        case 0x23ab90u: goto label_23ab90;
        case 0x23ab94u: goto label_23ab94;
        case 0x23ab98u: goto label_23ab98;
        case 0x23ab9cu: goto label_23ab9c;
        case 0x23aba0u: goto label_23aba0;
        case 0x23aba4u: goto label_23aba4;
        case 0x23aba8u: goto label_23aba8;
        case 0x23abacu: goto label_23abac;
        case 0x23abb0u: goto label_23abb0;
        case 0x23abb4u: goto label_23abb4;
        case 0x23abb8u: goto label_23abb8;
        case 0x23abbcu: goto label_23abbc;
        case 0x23abc0u: goto label_23abc0;
        case 0x23abc4u: goto label_23abc4;
        case 0x23abc8u: goto label_23abc8;
        case 0x23abccu: goto label_23abcc;
        case 0x23abd0u: goto label_23abd0;
        case 0x23abd4u: goto label_23abd4;
        case 0x23abd8u: goto label_23abd8;
        case 0x23abdcu: goto label_23abdc;
        case 0x23abe0u: goto label_23abe0;
        case 0x23abe4u: goto label_23abe4;
        case 0x23abe8u: goto label_23abe8;
        case 0x23abecu: goto label_23abec;
        case 0x23abf0u: goto label_23abf0;
        case 0x23abf4u: goto label_23abf4;
        case 0x23abf8u: goto label_23abf8;
        case 0x23abfcu: goto label_23abfc;
        case 0x23ac00u: goto label_23ac00;
        case 0x23ac04u: goto label_23ac04;
        case 0x23ac08u: goto label_23ac08;
        case 0x23ac0cu: goto label_23ac0c;
        case 0x23ac10u: goto label_23ac10;
        case 0x23ac14u: goto label_23ac14;
        case 0x23ac18u: goto label_23ac18;
        case 0x23ac1cu: goto label_23ac1c;
        case 0x23ac20u: goto label_23ac20;
        case 0x23ac24u: goto label_23ac24;
        case 0x23ac28u: goto label_23ac28;
        case 0x23ac2cu: goto label_23ac2c;
        case 0x23ac30u: goto label_23ac30;
        case 0x23ac34u: goto label_23ac34;
        case 0x23ac38u: goto label_23ac38;
        case 0x23ac3cu: goto label_23ac3c;
        case 0x23ac40u: goto label_23ac40;
        case 0x23ac44u: goto label_23ac44;
        case 0x23ac48u: goto label_23ac48;
        case 0x23ac4cu: goto label_23ac4c;
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac58u: goto label_23ac58;
        case 0x23ac5cu: goto label_23ac5c;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac64u: goto label_23ac64;
        case 0x23ac68u: goto label_23ac68;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23ac70u: goto label_23ac70;
        case 0x23ac74u: goto label_23ac74;
        case 0x23ac78u: goto label_23ac78;
        case 0x23ac7cu: goto label_23ac7c;
        case 0x23ac80u: goto label_23ac80;
        case 0x23ac84u: goto label_23ac84;
        case 0x23ac88u: goto label_23ac88;
        case 0x23ac8cu: goto label_23ac8c;
        case 0x23ac90u: goto label_23ac90;
        case 0x23ac94u: goto label_23ac94;
        case 0x23ac98u: goto label_23ac98;
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca0u: goto label_23aca0;
        case 0x23aca4u: goto label_23aca4;
        case 0x23aca8u: goto label_23aca8;
        case 0x23acacu: goto label_23acac;
        case 0x23acb0u: goto label_23acb0;
        case 0x23acb4u: goto label_23acb4;
        case 0x23acb8u: goto label_23acb8;
        case 0x23acbcu: goto label_23acbc;
        case 0x23acc0u: goto label_23acc0;
        case 0x23acc4u: goto label_23acc4;
        case 0x23acc8u: goto label_23acc8;
        case 0x23acccu: goto label_23accc;
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        case 0x23ad88u: goto label_23ad88;
        case 0x23ad8cu: goto label_23ad8c;
        case 0x23ad90u: goto label_23ad90;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ad98u: goto label_23ad98;
        case 0x23ad9cu: goto label_23ad9c;
        case 0x23ada0u: goto label_23ada0;
        case 0x23ada4u: goto label_23ada4;
        case 0x23ada8u: goto label_23ada8;
        case 0x23adacu: goto label_23adac;
        case 0x23adb0u: goto label_23adb0;
        case 0x23adb4u: goto label_23adb4;
        case 0x23adb8u: goto label_23adb8;
        case 0x23adbcu: goto label_23adbc;
        case 0x23adc0u: goto label_23adc0;
        case 0x23adc4u: goto label_23adc4;
        case 0x23adc8u: goto label_23adc8;
        case 0x23adccu: goto label_23adcc;
        case 0x23add0u: goto label_23add0;
        case 0x23add4u: goto label_23add4;
        case 0x23add8u: goto label_23add8;
        case 0x23addcu: goto label_23addc;
        case 0x23ade0u: goto label_23ade0;
        case 0x23ade4u: goto label_23ade4;
        case 0x23ade8u: goto label_23ade8;
        case 0x23adecu: goto label_23adec;
        case 0x23adf0u: goto label_23adf0;
        case 0x23adf4u: goto label_23adf4;
        case 0x23adf8u: goto label_23adf8;
        case 0x23adfcu: goto label_23adfc;
        case 0x23ae00u: goto label_23ae00;
        case 0x23ae04u: goto label_23ae04;
        case 0x23ae08u: goto label_23ae08;
        case 0x23ae0cu: goto label_23ae0c;
        case 0x23ae10u: goto label_23ae10;
        case 0x23ae14u: goto label_23ae14;
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae20u: goto label_23ae20;
        case 0x23ae24u: goto label_23ae24;
        case 0x23ae28u: goto label_23ae28;
        case 0x23ae2cu: goto label_23ae2c;
        case 0x23ae30u: goto label_23ae30;
        case 0x23ae34u: goto label_23ae34;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae3cu: goto label_23ae3c;
        case 0x23ae40u: goto label_23ae40;
        case 0x23ae44u: goto label_23ae44;
        case 0x23ae48u: goto label_23ae48;
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae50u: goto label_23ae50;
        case 0x23ae54u: goto label_23ae54;
        case 0x23ae58u: goto label_23ae58;
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae60u: goto label_23ae60;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae68u: goto label_23ae68;
        case 0x23ae6cu: goto label_23ae6c;
        case 0x23ae70u: goto label_23ae70;
        case 0x23ae74u: goto label_23ae74;
        case 0x23ae78u: goto label_23ae78;
        case 0x23ae7cu: goto label_23ae7c;
        case 0x23ae80u: goto label_23ae80;
        case 0x23ae84u: goto label_23ae84;
        case 0x23ae88u: goto label_23ae88;
        case 0x23ae8cu: goto label_23ae8c;
        case 0x23ae90u: goto label_23ae90;
        case 0x23ae94u: goto label_23ae94;
        case 0x23ae98u: goto label_23ae98;
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aea0u: goto label_23aea0;
        case 0x23aea4u: goto label_23aea4;
        case 0x23aea8u: goto label_23aea8;
        case 0x23aeacu: goto label_23aeac;
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aeb8u: goto label_23aeb8;
        case 0x23aebcu: goto label_23aebc;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aec4u: goto label_23aec4;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aed0u: goto label_23aed0;
        case 0x23aed4u: goto label_23aed4;
        case 0x23aed8u: goto label_23aed8;
        case 0x23aedcu: goto label_23aedc;
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        case 0x23af58u: goto label_23af58;
        case 0x23af5cu: goto label_23af5c;
        case 0x23af60u: goto label_23af60;
        case 0x23af64u: goto label_23af64;
        case 0x23af68u: goto label_23af68;
        case 0x23af6cu: goto label_23af6c;
        case 0x23af70u: goto label_23af70;
        case 0x23af74u: goto label_23af74;
        case 0x23af78u: goto label_23af78;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af80u: goto label_23af80;
        case 0x23af84u: goto label_23af84;
        case 0x23af88u: goto label_23af88;
        case 0x23af8cu: goto label_23af8c;
        case 0x23af90u: goto label_23af90;
        case 0x23af94u: goto label_23af94;
        case 0x23af98u: goto label_23af98;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afa0u: goto label_23afa0;
        case 0x23afa4u: goto label_23afa4;
        case 0x23afa8u: goto label_23afa8;
        case 0x23afacu: goto label_23afac;
        case 0x23afb0u: goto label_23afb0;
        case 0x23afb4u: goto label_23afb4;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afbcu: goto label_23afbc;
        case 0x23afc0u: goto label_23afc0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afc8u: goto label_23afc8;
        case 0x23afccu: goto label_23afcc;
        case 0x23afd0u: goto label_23afd0;
        case 0x23afd4u: goto label_23afd4;
        case 0x23afd8u: goto label_23afd8;
        case 0x23afdcu: goto label_23afdc;
        case 0x23afe0u: goto label_23afe0;
        case 0x23afe4u: goto label_23afe4;
        case 0x23afe8u: goto label_23afe8;
        case 0x23afecu: goto label_23afec;
        case 0x23aff0u: goto label_23aff0;
        case 0x23aff4u: goto label_23aff4;
        case 0x23aff8u: goto label_23aff8;
        case 0x23affcu: goto label_23affc;
        case 0x23b000u: goto label_23b000;
        case 0x23b004u: goto label_23b004;
        case 0x23b008u: goto label_23b008;
        case 0x23b00cu: goto label_23b00c;
        case 0x23b010u: goto label_23b010;
        case 0x23b014u: goto label_23b014;
        case 0x23b018u: goto label_23b018;
        case 0x23b01cu: goto label_23b01c;
        case 0x23b020u: goto label_23b020;
        case 0x23b024u: goto label_23b024;
        case 0x23b028u: goto label_23b028;
        case 0x23b02cu: goto label_23b02c;
        case 0x23b030u: goto label_23b030;
        case 0x23b034u: goto label_23b034;
        case 0x23b038u: goto label_23b038;
        case 0x23b03cu: goto label_23b03c;
        case 0x23b040u: goto label_23b040;
        case 0x23b044u: goto label_23b044;
        case 0x23b048u: goto label_23b048;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b050u: goto label_23b050;
        case 0x23b054u: goto label_23b054;
        case 0x23b058u: goto label_23b058;
        case 0x23b05cu: goto label_23b05c;
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        case 0x23b0c0u: goto label_23b0c0;
        case 0x23b0c4u: goto label_23b0c4;
        case 0x23b0c8u: goto label_23b0c8;
        case 0x23b0ccu: goto label_23b0cc;
        case 0x23b0d0u: goto label_23b0d0;
        case 0x23b0d4u: goto label_23b0d4;
        case 0x23b0d8u: goto label_23b0d8;
        case 0x23b0dcu: goto label_23b0dc;
        case 0x23b0e0u: goto label_23b0e0;
        case 0x23b0e4u: goto label_23b0e4;
        case 0x23b0e8u: goto label_23b0e8;
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b0f0u: goto label_23b0f0;
        case 0x23b0f4u: goto label_23b0f4;
        case 0x23b0f8u: goto label_23b0f8;
        case 0x23b0fcu: goto label_23b0fc;
        case 0x23b100u: goto label_23b100;
        case 0x23b104u: goto label_23b104;
        case 0x23b108u: goto label_23b108;
        case 0x23b10cu: goto label_23b10c;
        case 0x23b110u: goto label_23b110;
        case 0x23b114u: goto label_23b114;
        case 0x23b118u: goto label_23b118;
        case 0x23b11cu: goto label_23b11c;
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        case 0x23b170u: goto label_23b170;
        case 0x23b174u: goto label_23b174;
        case 0x23b178u: goto label_23b178;
        case 0x23b17cu: goto label_23b17c;
        case 0x23b180u: goto label_23b180;
        case 0x23b184u: goto label_23b184;
        case 0x23b188u: goto label_23b188;
        case 0x23b18cu: goto label_23b18c;
        case 0x23b190u: goto label_23b190;
        case 0x23b194u: goto label_23b194;
        case 0x23b198u: goto label_23b198;
        case 0x23b19cu: goto label_23b19c;
        case 0x23b1a0u: goto label_23b1a0;
        case 0x23b1a4u: goto label_23b1a4;
        case 0x23b1a8u: goto label_23b1a8;
        case 0x23b1acu: goto label_23b1ac;
        case 0x23b1b0u: goto label_23b1b0;
        case 0x23b1b4u: goto label_23b1b4;
        case 0x23b1b8u: goto label_23b1b8;
        case 0x23b1bcu: goto label_23b1bc;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b1c4u: goto label_23b1c4;
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1ccu: goto label_23b1cc;
        case 0x23b1d0u: goto label_23b1d0;
        case 0x23b1d4u: goto label_23b1d4;
        case 0x23b1d8u: goto label_23b1d8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b1e0u: goto label_23b1e0;
        case 0x23b1e4u: goto label_23b1e4;
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b1ecu: goto label_23b1ec;
        case 0x23b1f0u: goto label_23b1f0;
        case 0x23b1f4u: goto label_23b1f4;
        case 0x23b1f8u: goto label_23b1f8;
        case 0x23b1fcu: goto label_23b1fc;
        case 0x23b200u: goto label_23b200;
        case 0x23b204u: goto label_23b204;
        case 0x23b208u: goto label_23b208;
        case 0x23b20cu: goto label_23b20c;
        case 0x23b210u: goto label_23b210;
        case 0x23b214u: goto label_23b214;
        case 0x23b218u: goto label_23b218;
        case 0x23b21cu: goto label_23b21c;
        case 0x23b220u: goto label_23b220;
        case 0x23b224u: goto label_23b224;
        case 0x23b228u: goto label_23b228;
        case 0x23b22cu: goto label_23b22c;
        case 0x23b230u: goto label_23b230;
        case 0x23b234u: goto label_23b234;
        case 0x23b238u: goto label_23b238;
        case 0x23b23cu: goto label_23b23c;
        case 0x23b240u: goto label_23b240;
        case 0x23b244u: goto label_23b244;
        default: break;
    }

    ctx->pc = 0x23aae0u;

label_23aae0:
    // 0x23aae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23aae4:
    // 0x23aae4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23aae8:
    // 0x23aae8: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x23aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
label_23aaec:
    // 0x23aaec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x23aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_23aaf0:
    // 0x23aaf0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x23aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_23aaf4:
    // 0x23aaf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23aaf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aaf8:
    // 0x23aaf8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x23aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_23aafc:
    // 0x23aafc: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x23aafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_23ab00:
    // 0x23ab00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_23ab04:
    // 0x23ab04: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x23ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_23ab08:
    // 0x23ab08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23ab0c:
    // 0x23ab0c: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x23ab0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_23ab10:
    // 0x23ab10: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x23ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_23ab14:
    // 0x23ab14: 0x106001c4  beqz        $v1, . + 4 + (0x1C4 << 2)
label_23ab18:
    if (ctx->pc == 0x23AB18u) {
        ctx->pc = 0x23AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB14u;
        // 0x23ab18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB1Cu;
        goto label_23ab1c;
    }
    ctx->pc = 0x23AB14u;
    {
        const bool branch_taken_0x23ab14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB14u;
        // 0x23ab18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab14) {
            ctx->pc = 0x23B228u;
            goto label_23b228;
        }
    }
    ctx->pc = 0x23AB1Cu;
label_23ab1c:
    // 0x23ab1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23ab20:
    // 0x23ab20: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x23ab20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23ab24:
    // 0x23ab24: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x23ab24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23ab28:
    // 0x23ab28: 0x30513fff  andi        $s1, $v0, 0x3FFF
    ctx->pc = 0x23ab28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_23ab2c:
    // 0x23ab2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23ab2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ab30:
    // 0x23ab30: 0x111538  dsll        $v0, $s1, 20
    ctx->pc = 0x23ab30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 20);
label_23ab34:
    // 0x23ab34: 0x11223c  dsll32      $a0, $s1, 8
    ctx->pc = 0x23ab34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 8));
label_23ab38:
    // 0x23ab38: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x23ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_23ab3c:
    // 0x23ab3c: 0x2de30041  sltiu       $v1, $t7, 0x41
    ctx->pc = 0x23ab3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_23ab40:
    // 0x23ab40: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_23ab44:
    if (ctx->pc == 0x23AB44u) {
        ctx->pc = 0x23AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB40u;
        // 0x23ab44: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB48u;
        goto label_23ab48;
    }
    ctx->pc = 0x23AB40u;
    {
        const bool branch_taken_0x23ab40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB40u;
        // 0x23ab44: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab40) {
            ctx->pc = 0x23AB74u;
            goto label_23ab74;
        }
    }
    ctx->pc = 0x23AB48u;
label_23ab48:
    // 0x23ab48: 0xf1182  srl         $v0, $t7, 6
    ctx->pc = 0x23ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
label_23ab4c:
    // 0x23ab4c: 0x0  nop
    ctx->pc = 0x23ab4cu;
    // NOP
label_23ab50:
    // 0x23ab50: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_23ab54:
    // 0x23ab54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ab58:
    // 0x23ab58: 0xf7842  srl         $t7, $t7, 1
    ctx->pc = 0x23ab58u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_23ab5c:
    // 0x23ab5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23ab60:
    // 0x23ab60: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
label_23ab64:
    if (ctx->pc == 0x23AB64u) {
        ctx->pc = 0x23AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB60u;
        // 0x23ab64: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB68u;
        goto label_23ab68;
    }
    ctx->pc = 0x23AB60u;
    {
        const bool branch_taken_0x23ab60 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB60u;
        // 0x23ab64: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab60) {
            ctx->pc = 0x23AB74u;
            goto label_23ab74;
        }
    }
    ctx->pc = 0x23AB68u;
label_23ab68:
    // 0x23ab68: 0x2de20041  sltiu       $v0, $t7, 0x41
    ctx->pc = 0x23ab68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_23ab6c:
    // 0x23ab6c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_23ab70:
    if (ctx->pc == 0x23AB70u) {
        ctx->pc = 0x23AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB6Cu;
        // 0x23ab70: 0xf1182  srl         $v0, $t7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB74u;
        goto label_23ab74;
    }
    ctx->pc = 0x23AB6Cu;
    {
        const bool branch_taken_0x23ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB6Cu;
        // 0x23ab70: 0xf1182  srl         $v0, $t7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab6c) {
            ctx->pc = 0x23AB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ab50;
        }
    }
    ctx->pc = 0x23AB74u;
label_23ab74:
    // 0x23ab74: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x23ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_23ab78:
    // 0x23ab78: 0x26430009  addiu       $v1, $s2, 0x9
    ctx->pc = 0x23ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
label_23ab7c:
    // 0x23ab7c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x23ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_23ab80:
    // 0x23ab80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_23ab84:
    // 0x23ab84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23ab88:
    // 0x23ab88: 0xc08bbd6  jal         func_22EF58
label_23ab8c:
    if (ctx->pc == 0x23AB8Cu) {
        ctx->pc = 0x23AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB88u;
        // 0x23ab8c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB90u;
        goto label_23ab90;
    }
    ctx->pc = 0x23AB88u;
    SET_GPR_U32(ctx, 31, 0x23AB90u);
    ctx->pc = 0x23AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB88u;
    // 0x23ab8c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23AB88u, 0x23AB90u)) {
        return;
    }
    ctx->pc = 0x23AB90u;
label_23ab90:
    // 0x23ab90: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x23ab90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_23ab94:
    // 0x23ab94: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x23ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_23ab98:
    // 0x23ab98: 0x3405845a  ori         $a1, $zero, 0x845A
    ctx->pc = 0x23ab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33882);
label_23ab9c:
    // 0x23ab9c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x23ab9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
label_23aba0:
    // 0x23aba0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x23aba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23aba4:
    // 0x23aba4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_23aba8:
    // 0x23aba8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_23abac:
    // 0x23abac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23abb0:
    // 0x23abb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23abb4:
    // 0x23abb4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23abb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_23abb8:
    // 0x23abb8: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x23abb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_23abbc:
    // 0x23abbc: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23abbcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23abc0:
    // 0x23abc0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_23abc4:
    // 0x23abc4: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x23abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16684)));
label_23abc8:
    // 0x23abc8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x23abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_23abcc:
    // 0x23abcc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23abd0:
    // 0x23abd0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23abd4:
    // 0x23abd4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 3));
label_23abd8:
    // 0x23abd8: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x23abd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_23abdc:
    // 0x23abdc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x23abdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23abe0:
    // 0x23abe0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23abe0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23abe4:
    // 0x23abe4: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x23abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_23abe8:
    // 0x23abe8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23abec:
    // 0x23abec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23abecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23abf0:
    // 0x23abf0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23abf4:
    // 0x23abf4: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_23abf8:
    // 0x23abf8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x23abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_23abfc:
    // 0x23abfc: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23abfcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23ac00:
    // 0x23ac00: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x23ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_23ac04:
    // 0x23ac04: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_23ac08:
    // 0x23ac08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23ac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23ac0c:
    // 0x23ac0c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23ac10:
    // 0x23ac10: 0xdf848450  ld          $a0, -0x7BB0($gp)
    ctx->pc = 0x23ac10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_23ac14:
    // 0x23ac14: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23ac18:
    // 0x23ac18: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x23ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_23ac1c:
    // 0x23ac1c: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_23ac20:
    // 0x23ac20: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x23ac20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23ac24:
    // 0x23ac24: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23ac24u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23ac28:
    // 0x23ac28: 0x7c670020  sq          $a3, 0x20($v1)
    ctx->pc = 0x23ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 7));
label_23ac2c:
    // 0x23ac2c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x23ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_23ac30:
    // 0x23ac30: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23ac34:
    // 0x23ac34: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23ac38:
    // 0x23ac38: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23ac3c:
    // 0x23ac3c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x23ac3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23ac40:
    // 0x23ac40: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23ac40u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23ac44:
    // 0x23ac44: 0x7c670030  sq          $a3, 0x30($v1)
    ctx->pc = 0x23ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 7));
label_23ac48:
    // 0x23ac48: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_23ac4c:
    // 0x23ac4c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23ac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23ac50:
    // 0x23ac50: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23ac54:
    // 0x23ac54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23ac54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ac58:
    // 0x23ac58: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_23ac5c:
    // 0x23ac5c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23ac5cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23ac60:
    // 0x23ac60: 0x7c670040  sq          $a3, 0x40($v1)
    ctx->pc = 0x23ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 7));
label_23ac64:
    // 0x23ac64: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x23ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_23ac68:
    // 0x23ac68: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23ac6c:
    // 0x23ac6c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 3));
label_23ac70:
    // 0x23ac70: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x23ac70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23ac74:
    // 0x23ac74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23ac74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ac78:
    // 0x23ac78: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x23ac78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_23ac7c:
    // 0x23ac7c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x23ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_23ac80:
    // 0x23ac80: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
label_23ac84:
    if (ctx->pc == 0x23AC84u) {
        ctx->pc = 0x23AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC80u;
        // 0x23ac84: 0x8e6d0010  lw          $t5, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC88u;
        goto label_23ac88;
    }
    ctx->pc = 0x23AC80u;
    {
        const bool branch_taken_0x23ac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC80u;
        // 0x23ac84: 0x8e6d0010  lw          $t5, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac80) {
            ctx->pc = 0x23B1C0u;
            goto label_23b1c0;
        }
    }
    ctx->pc = 0x23AC88u;
label_23ac88:
    // 0x23ac88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23ac8c:
    // 0x23ac8c: 0x0  nop
    ctx->pc = 0x23ac8cu;
    // NOP
label_23ac90:
    // 0x23ac90: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23ac94:
    // 0x23ac94: 0x3463ffe7  ori         $v1, $v1, 0xFFE7
    ctx->pc = 0x23ac94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65511);
label_23ac98:
    // 0x23ac98: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x23ac98u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23ac9c:
    // 0x23ac9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23aca0:
    // 0x23aca0: 0x2e490006  sltiu       $t1, $s2, 0x6
    ctx->pc = 0x23aca0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23aca4:
    // 0x23aca4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23aca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_23aca8:
    // 0x23aca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23aca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23acac:
    // 0x23acac: 0x11200042  beqz        $t1, . + 4 + (0x42 << 2)
label_23acb0:
    if (ctx->pc == 0x23ACB0u) {
        ctx->pc = 0x23ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACACu;
        // 0x23acb0: 0x824025  or          $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACB4u;
        goto label_23acb4;
    }
    ctx->pc = 0x23ACACu;
    {
        const bool branch_taken_0x23acac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACACu;
        // 0x23acb0: 0x824025  or          $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23acac) {
            ctx->pc = 0x23ADB8u;
            goto label_23adb8;
        }
    }
    ctx->pc = 0x23ACB4u;
label_23acb4:
    // 0x23acb4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23acb8:
    // 0x23acb8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23acbc:
    // 0x23acbc: 0x2442b120  addiu       $v0, $v0, -0x4EE0
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947104));
label_23acc0:
    // 0x23acc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23acc4:
    // 0x23acc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23acc8:
    // 0x23acc8: 0x800008  jr          $a0
label_23accc:
    if (ctx->pc == 0x23ACCCu) {
        ctx->pc = 0x23ACD0u;
        goto label_23acd0;
    }
    ctx->pc = 0x23ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23ACD0u: goto label_23acd0;
            case 0x23ACF0u: goto label_23acf0;
            case 0x23AD1Cu: goto label_23ad1c;
            case 0x23AD4Cu: goto label_23ad4c;
            case 0x23AD7Cu: goto label_23ad7c;
            case 0x23ADB8u: goto label_23adb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23ACD0u;
label_23acd0:
    // 0x23acd0: 0x9e070018  lwu         $a3, 0x18($s0)
    ctx->pc = 0x23acd0u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_23acd4:
    // 0x23acd4: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x23acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_23acd8:
    // 0x23acd8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x23acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_23acdc:
    // 0x23acdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23acdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23ace0:
    // 0x23ace0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x23ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_23ace4:
    // 0x23ace4: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ace4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23ace8:
    // 0x23ace8: 0x10000020  b           . + 4 + (0x20 << 2)
label_23acec:
    if (ctx->pc == 0x23ACECu) {
        ctx->pc = 0x23ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACE8u;
        // 0x23acec: 0x3c04bc00  lui         $a0, 0xBC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACF0u;
        goto label_23acf0;
    }
    ctx->pc = 0x23ACE8u;
    {
        const bool branch_taken_0x23ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACE8u;
        // 0x23acec: 0x3c04bc00  lui         $a0, 0xBC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ace8) {
            ctx->pc = 0x23AD6Cu;
            goto label_23ad6c;
        }
    }
    ctx->pc = 0x23ACF0u;
label_23acf0:
    // 0x23acf0: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x23acf0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_23acf4:
    // 0x23acf4: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x23acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_23acf8:
    // 0x23acf8: 0x9e040018  lwu         $a0, 0x18($s0)
    ctx->pc = 0x23acf8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_23acfc:
    // 0x23acfc: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x23acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_23ad00:
    // 0x23ad00: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23ad00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_23ad04:
    // 0x23ad04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23ad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23ad08:
    // 0x23ad08: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x23ad08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_23ad0c:
    // 0x23ad0c: 0x3c05bc00  lui         $a1, 0xBC00
    ctx->pc = 0x23ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48128 << 16));
label_23ad10:
    // 0x23ad10: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x23ad10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
label_23ad14:
    // 0x23ad14: 0x10000023  b           . + 4 + (0x23 << 2)
label_23ad18:
    if (ctx->pc == 0x23AD18u) {
        ctx->pc = 0x23AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD14u;
        // 0x23ad18: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD1Cu;
        goto label_23ad1c;
    }
    ctx->pc = 0x23AD14u;
    {
        const bool branch_taken_0x23ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD14u;
        // 0x23ad18: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad14) {
            ctx->pc = 0x23ADA4u;
            goto label_23ada4;
        }
    }
    ctx->pc = 0x23AD1Cu;
label_23ad1c:
    // 0x23ad1c: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x23ad1cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_23ad20:
    // 0x23ad20: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x23ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_23ad24:
    // 0x23ad24: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_23ad28:
    // 0x23ad28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x23ad28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_23ad2c:
    // 0x23ad2c: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x23ad2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_23ad30:
    // 0x23ad30: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x23ad30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_23ad34:
    // 0x23ad34: 0x3c049a00  lui         $a0, 0x9A00
    ctx->pc = 0x23ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39424 << 16));
label_23ad38:
    // 0x23ad38: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x23ad38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_23ad3c:
    // 0x23ad3c: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ad3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23ad40:
    // 0x23ad40: 0x7123e  dsrl32      $v0, $a3, 8
    ctx->pc = 0x23ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 8));
label_23ad44:
    // 0x23ad44: 0x1000000a  b           . + 4 + (0xA << 2)
label_23ad48:
    if (ctx->pc == 0x23AD48u) {
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD44u;
        // 0x23ad48: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD4Cu;
        goto label_23ad4c;
    }
    ctx->pc = 0x23AD44u;
    {
        const bool branch_taken_0x23ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD44u;
        // 0x23ad48: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad44) {
            ctx->pc = 0x23AD70u;
            goto label_23ad70;
        }
    }
    ctx->pc = 0x23AD4Cu;
label_23ad4c:
    // 0x23ad4c: 0x9e070020  lwu         $a3, 0x20($s0)
    ctx->pc = 0x23ad4cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23ad50:
    // 0x23ad50: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_23ad54:
    // 0x23ad54: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_23ad58:
    // 0x23ad58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23ad58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23ad5c:
    // 0x23ad5c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x23ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_23ad60:
    // 0x23ad60: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ad60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23ad64:
    // 0x23ad64: 0x3c04bc00  lui         $a0, 0xBC00
    ctx->pc = 0x23ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
label_23ad68:
    // 0x23ad68: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x23ad68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
label_23ad6c:
    // 0x23ad6c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x23ad6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_23ad70:
    // 0x23ad70: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x23ad70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23ad74:
    // 0x23ad74: 0x10000010  b           . + 4 + (0x10 << 2)
label_23ad78:
    if (ctx->pc == 0x23AD78u) {
        ctx->pc = 0x23AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD74u;
        // 0x23ad78: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD7Cu;
        goto label_23ad7c;
    }
    ctx->pc = 0x23AD74u;
    {
        const bool branch_taken_0x23ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD74u;
        // 0x23ad78: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad74) {
            ctx->pc = 0x23ADB8u;
            goto label_23adb8;
        }
    }
    ctx->pc = 0x23AD7Cu;
label_23ad7c:
    // 0x23ad7c: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x23ad7cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_23ad80:
    // 0x23ad80: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x23ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_23ad84:
    // 0x23ad84: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x23ad84u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23ad88:
    // 0x23ad88: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x23ad88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_23ad8c:
    // 0x23ad8c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23ad8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_23ad90:
    // 0x23ad90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23ad94:
    // 0x23ad94: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x23ad94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_23ad98:
    // 0x23ad98: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x23ad98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23ad9c:
    // 0x23ad9c: 0x3c05ab00  lui         $a1, 0xAB00
    ctx->pc = 0x23ad9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43776 << 16));
label_23ada0:
    // 0x23ada0: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x23ada0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_23ada4:
    // 0x23ada4: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ada4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23ada8:
    // 0x23ada8: 0x7153a  dsrl        $v0, $a3, 20
    ctx->pc = 0x23ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 20);
label_23adac:
    // 0x23adac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x23adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_23adb0:
    // 0x23adb0: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x23adb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23adb4:
    // 0x23adb4: 0x105402d  daddu       $t0, $t0, $a1
    ctx->pc = 0x23adb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 5));
label_23adb8:
    // 0x23adb8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x23adb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23adbc:
    // 0x23adbc: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23adbcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23adc0:
    // 0x23adc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23adc4:
    // 0x23adc4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_23adc8:
    // 0x23adc8: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x23adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_23adcc:
    // 0x23adcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23add0:
    // 0x23add0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23add0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23add4:
    // 0x23add4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23add4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23add8:
    // 0x23add8: 0x3c0303f0  lui         $v1, 0x3F0
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1008 << 16));
label_23addc:
    // 0x23addc: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x23addcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_23ade0:
    // 0x23ade0: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
label_23ade4:
    if (ctx->pc == 0x23ADE4u) {
        ctx->pc = 0x23ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADE0u;
        // 0x23ade4: 0x34138  dsll        $t0, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADE8u;
        goto label_23ade8;
    }
    ctx->pc = 0x23ADE0u;
    {
        const bool branch_taken_0x23ade0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADE0u;
        // 0x23ade4: 0x34138  dsll        $t0, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ade0) {
            ctx->pc = 0x23AEF8u;
            goto label_23aef8;
        }
    }
    ctx->pc = 0x23ADE8u;
label_23ade8:
    // 0x23ade8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23adec:
    // 0x23adec: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23adf0:
    // 0x23adf0: 0x2442b140  addiu       $v0, $v0, -0x4EC0
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947136));
label_23adf4:
    // 0x23adf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23adf8:
    // 0x23adf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23adfc:
    // 0x23adfc: 0x800008  jr          $a0
label_23ae00:
    if (ctx->pc == 0x23AE00u) {
        ctx->pc = 0x23AE04u;
        goto label_23ae04;
    }
    ctx->pc = 0x23ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23AE04u;
label_23ae04:
    // 0x23ae04: 0x0  nop
    ctx->pc = 0x23ae04u;
    // NOP
label_23ae08:
    // 0x23ae08: 0x10000011  b           . + 4 + (0x11 << 2)
label_23ae0c:
    if (ctx->pc == 0x23AE0Cu) {
        ctx->pc = 0x23AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE08u;
        // 0x23ae0c: 0x9e070018  lwu         $a3, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE10u;
        goto label_23ae10;
    }
    ctx->pc = 0x23AE08u;
    {
        const bool branch_taken_0x23ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE08u;
        // 0x23ae0c: 0x9e070018  lwu         $a3, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae08) {
            ctx->pc = 0x23AE50u;
            goto label_23ae50;
        }
    }
    ctx->pc = 0x23AE10u;
label_23ae10:
    // 0x23ae10: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x23ae10u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_23ae14:
    // 0x23ae14: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x23ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_23ae18:
    // 0x23ae18: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x23ae18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_23ae1c:
    // 0x23ae1c: 0x9e030018  lwu         $v1, 0x18($s0)
    ctx->pc = 0x23ae1cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_23ae20:
    // 0x23ae20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23ae24:
    // 0x23ae24: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x23ae24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23ae28:
    // 0x23ae28: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ae28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23ae2c:
    // 0x23ae2c: 0x724ba  dsrl        $a0, $a3, 18
    ctx->pc = 0x23ae2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 18);
label_23ae30:
    // 0x23ae30: 0x7167a  dsrl        $v0, $a3, 25
    ctx->pc = 0x23ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 25);
label_23ae34:
    // 0x23ae34: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x23ae34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_23ae38:
    // 0x23ae38: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x23ae38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_23ae3c:
    // 0x23ae3c: 0x10000028  b           . + 4 + (0x28 << 2)
label_23ae40:
    if (ctx->pc == 0x23AE40u) {
        ctx->pc = 0x23AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE3Cu;
        // 0x23ae40: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE44u;
        goto label_23ae44;
    }
    ctx->pc = 0x23AE3Cu;
    {
        const bool branch_taken_0x23ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE3Cu;
        // 0x23ae40: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae3c) {
            ctx->pc = 0x23AEE0u;
            goto label_23aee0;
        }
    }
    ctx->pc = 0x23AE44u;
label_23ae44:
    // 0x23ae44: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23ae48:
    if (ctx->pc == 0x23AE48u) {
        ctx->pc = 0x23AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE44u;
        // 0x23ae48: 0x9e02001c  lwu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE4Cu;
        goto label_23ae4c;
    }
    ctx->pc = 0x23AE44u;
    {
        const bool branch_taken_0x23ae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE44u;
        // 0x23ae48: 0x9e02001c  lwu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae44) {
            ctx->pc = 0x23AEBCu;
            goto label_23aebc;
        }
    }
    ctx->pc = 0x23AE4Cu;
label_23ae4c:
    // 0x23ae4c: 0x9e070020  lwu         $a3, 0x20($s0)
    ctx->pc = 0x23ae4cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23ae50:
    // 0x23ae50: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x23ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_23ae54:
    // 0x23ae54: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x23ae54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_23ae58:
    // 0x23ae58: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ae58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23ae5c:
    // 0x23ae5c: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x23ae5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
label_23ae60:
    // 0x23ae60: 0x7117a  dsrl        $v0, $a3, 5
    ctx->pc = 0x23ae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 5);
label_23ae64:
    // 0x23ae64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23ae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_23ae68:
    // 0x23ae68: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x23ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_23ae6c:
    // 0x23ae6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23ae70:
    // 0x23ae70: 0x30e4001f  andi        $a0, $a3, 0x1F
    ctx->pc = 0x23ae70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_23ae74:
    // 0x23ae74: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x23ae74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_23ae78:
    // 0x23ae78: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x23ae78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_23ae7c:
    // 0x23ae7c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_23ae80:
    if (ctx->pc == 0x23AE80u) {
        ctx->pc = 0x23AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE7Cu;
        // 0x23ae80: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE84u;
        goto label_23ae84;
    }
    ctx->pc = 0x23AE7Cu;
    {
        const bool branch_taken_0x23ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE7Cu;
        // 0x23ae80: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae7c) {
            ctx->pc = 0x23AEFCu;
            goto label_23aefc;
        }
    }
    ctx->pc = 0x23AE84u;
label_23ae84:
    // 0x23ae84: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x23ae84u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_23ae88:
    // 0x23ae88: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x23ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_23ae8c:
    // 0x23ae8c: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x23ae8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_23ae90:
    // 0x23ae90: 0x9e030020  lwu         $v1, 0x20($s0)
    ctx->pc = 0x23ae90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23ae94:
    // 0x23ae94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23ae94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23ae98:
    // 0x23ae98: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x23ae98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23ae9c:
    // 0x23ae9c: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23ae9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23aea0:
    // 0x23aea0: 0x724ba  dsrl        $a0, $a3, 18
    ctx->pc = 0x23aea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 18);
label_23aea4:
    // 0x23aea4: 0x7167a  dsrl        $v0, $a3, 25
    ctx->pc = 0x23aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 25);
label_23aea8:
    // 0x23aea8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x23aea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_23aeac:
    // 0x23aeac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x23aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_23aeb0:
    // 0x23aeb0: 0x1000000b  b           . + 4 + (0xB << 2)
label_23aeb4:
    if (ctx->pc == 0x23AEB4u) {
        ctx->pc = 0x23AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEB0u;
        // 0x23aeb4: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEB8u;
        goto label_23aeb8;
    }
    ctx->pc = 0x23AEB0u;
    {
        const bool branch_taken_0x23aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEB0u;
        // 0x23aeb4: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aeb0) {
            ctx->pc = 0x23AEE0u;
            goto label_23aee0;
        }
    }
    ctx->pc = 0x23AEB8u;
label_23aeb8:
    // 0x23aeb8: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x23aeb8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_23aebc:
    // 0x23aebc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x23aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_23aec0:
    // 0x23aec0: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x23aec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_23aec4:
    // 0x23aec4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x23aec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_23aec8:
    // 0x23aec8: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x23aec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_23aecc:
    // 0x23aecc: 0x721be  dsrl32      $a0, $a3, 6
    ctx->pc = 0x23aeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> (32 + 6));
label_23aed0:
    // 0x23aed0: 0x7137e  dsrl32      $v0, $a3, 13
    ctx->pc = 0x23aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 13));
label_23aed4:
    // 0x23aed4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x23aed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23aed8:
    // 0x23aed8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x23aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_23aedc:
    // 0x23aedc: 0x71a3e  dsrl32      $v1, $a3, 8
    ctx->pc = 0x23aedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 8));
label_23aee0:
    // 0x23aee0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23aee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23aee4:
    // 0x23aee4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23aee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_23aee8:
    // 0x23aee8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x23aee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_23aeec:
    // 0x23aeec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x23aeecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_23aef0:
    // 0x23aef0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23aef4:
    if (ctx->pc == 0x23AEF4u) {
        ctx->pc = 0x23AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEF0u;
        // 0x23aef4: 0x1044025  or          $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEF8u;
        goto label_23aef8;
    }
    ctx->pc = 0x23AEF0u;
    {
        const bool branch_taken_0x23aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEF0u;
        // 0x23aef4: 0x1044025  or          $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aef0) {
            ctx->pc = 0x23AEFCu;
            goto label_23aefc;
        }
    }
    ctx->pc = 0x23AEF8u;
label_23aef8:
    // 0x23aef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23aef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aefc:
    // 0x23aefc: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x23aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_23af00:
    // 0x23af00: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23af00u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23af04:
    // 0x23af04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23af08:
    // 0x23af08: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_23af0c:
    // 0x23af0c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x23af0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_23af10:
    // 0x23af10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23af10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23af14:
    // 0x23af14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23af14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23af18:
    // 0x23af18: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23af18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23af1c:
    // 0x23af1c: 0x81e3a  dsrl        $v1, $t0, 24
    ctx->pc = 0x23af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 24);
label_23af20:
    // 0x23af20: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x23af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_23af24:
    // 0x23af24: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x23af24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23af28:
    // 0x23af28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23af2c:
    if (ctx->pc == 0x23AF2Cu) {
        ctx->pc = 0x23AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF28u;
        // 0x23af2c: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF30u;
        goto label_23af30;
    }
    ctx->pc = 0x23AF28u;
    {
        const bool branch_taken_0x23af28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF28u;
        // 0x23af2c: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af28) {
            ctx->pc = 0x23AF48u;
            goto label_23af48;
        }
    }
    ctx->pc = 0x23AF30u;
label_23af30:
    // 0x23af30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23af34:
    // 0x23af34: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_23af38:
    if (ctx->pc == 0x23AF38u) {
        ctx->pc = 0x23AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF34u;
        // 0x23af38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF3Cu;
        goto label_23af3c;
    }
    ctx->pc = 0x23AF34u;
    {
        const bool branch_taken_0x23af34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF34u;
        // 0x23af38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af34) {
            ctx->pc = 0x23AF98u;
            goto label_23af98;
        }
    }
    ctx->pc = 0x23AF3Cu;
label_23af3c:
    // 0x23af3c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_23af40:
    if (ctx->pc == 0x23AF40u) {
        ctx->pc = 0x23AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF3Cu;
        // 0x23af40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF44u;
        goto label_23af44;
    }
    ctx->pc = 0x23AF3Cu;
    {
        const bool branch_taken_0x23af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF3Cu;
        // 0x23af40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af3c) {
            ctx->pc = 0x23AFF0u;
            goto label_23aff0;
        }
    }
    ctx->pc = 0x23AF44u;
label_23af44:
    // 0x23af44: 0x0  nop
    ctx->pc = 0x23af44u;
    // NOP
label_23af48:
    // 0x23af48: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x23af48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_23af4c:
    // 0x23af4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23af50:
    // 0x23af50: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x23af50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_23af54:
    // 0x23af54: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23af54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_23af58:
    // 0x23af58: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x23af58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_23af5c:
    // 0x23af5c: 0x30c40008  andi        $a0, $a2, 0x8
    ctx->pc = 0x23af5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_23af60:
    // 0x23af60: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x23af60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_23af64:
    // 0x23af64: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23af64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_23af68:
    // 0x23af68: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x23af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_23af6c:
    // 0x23af6c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23af6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_23af70:
    // 0x23af70: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x23af70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_23af74:
    // 0x23af74: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x23af74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_23af78:
    // 0x23af78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23af78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23af7c:
    // 0x23af7c: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x23af7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_23af80:
    // 0x23af80: 0x25420007  addiu       $v0, $t2, 0x7
    ctx->pc = 0x23af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
label_23af84:
    // 0x23af84: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x23af84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10));
label_23af88:
    // 0x23af88: 0x30490038  andi        $t1, $v0, 0x38
    ctx->pc = 0x23af88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
label_23af8c:
    // 0x23af8c: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x23af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_23af90:
    // 0x23af90: 0x10000017  b           . + 4 + (0x17 << 2)
label_23af94:
    if (ctx->pc == 0x23AF94u) {
        ctx->pc = 0x23AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF90u;
        // 0x23af94: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF98u;
        goto label_23af98;
    }
    ctx->pc = 0x23AF90u;
    {
        const bool branch_taken_0x23af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF90u;
        // 0x23af94: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af90) {
            ctx->pc = 0x23AFF0u;
            goto label_23aff0;
        }
    }
    ctx->pc = 0x23AF98u;
label_23af98:
    // 0x23af98: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x23af98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_23af9c:
    // 0x23af9c: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_23afa0:
    // 0x23afa0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23afa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_23afa4:
    // 0x23afa4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23afa8:
    // 0x23afa8: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x23afa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_23afac:
    // 0x23afac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23afacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23afb0:
    // 0x23afb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23afb4:
    // 0x23afb4: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_23afb8:
    // 0x23afb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_23afbc:
    // 0x23afbc: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x23afbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_23afc0:
    // 0x23afc0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23afc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23afc4:
    // 0x23afc4: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x23afc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_23afc8:
    // 0x23afc8: 0x855025  or          $t2, $a0, $a1
    ctx->pc = 0x23afc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23afcc:
    // 0x23afcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23afccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23afd0:
    // 0x23afd0: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x23afd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_23afd4:
    // 0x23afd4: 0x25420003  addiu       $v0, $t2, 0x3
    ctx->pc = 0x23afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_23afd8:
    // 0x23afd8: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x23afd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10));
label_23afdc:
    // 0x23afdc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23afdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_23afe0:
    // 0x23afe0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23afe4:
    // 0x23afe4: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x23afe4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_23afe8:
    // 0x23afe8: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x23afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_23afec:
    // 0x23afec: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x23afecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_23aff0:
    // 0x23aff0: 0xf2842  srl         $a1, $t7, 1
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_23aff4:
    // 0x23aff4: 0xd3042  srl         $a2, $t5, 1
    ctx->pc = 0x23aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_23aff8:
    // 0x23aff8: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x23aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_23affc:
    // 0x23affc: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x23affcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_23b000:
    // 0x23b000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23b004:
    // 0x23b004: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x23b004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
label_23b008:
    // 0x23b008: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b00c:
    // 0x23b00c: 0x2583ffff  addiu       $v1, $t4, -0x1
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_23b010:
    // 0x23b010: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x23b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_23b014:
    // 0x23b014: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23b014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_23b018:
    // 0x23b018: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x23b018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_23b01c:
    // 0x23b01c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23b020:
    // 0x23b020: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23b024:
    // 0x23b024: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x23b024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23b028:
    // 0x23b028: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b028u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b02c:
    // 0x23b02c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23b030:
    // 0x23b030: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_23b034:
    // 0x23b034: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x23b034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_23b038:
    // 0x23b038: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23b03c:
    // 0x23b03c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b040:
    // 0x23b040: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23b044:
    // 0x23b044: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x23b044u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b048:
    // 0x23b048: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23b048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23b04c:
    // 0x23b04c: 0x11e00044  beqz        $t7, . + 4 + (0x44 << 2)
label_23b050:
    if (ctx->pc == 0x23B050u) {
        ctx->pc = 0x23B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B04Cu;
        // 0x23b050: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B054u;
        goto label_23b054;
    }
    ctx->pc = 0x23B04Cu;
    {
        const bool branch_taken_0x23b04c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B04Cu;
        // 0x23b050: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b04c) {
            ctx->pc = 0x23B160u;
            goto label_23b160;
        }
    }
    ctx->pc = 0x23B054u;
label_23b054:
    // 0x23b054: 0x25a40001  addiu       $a0, $t5, 0x1
    ctx->pc = 0x23b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_23b058:
    // 0x23b058: 0x2de20041  sltiu       $v0, $t7, 0x41
    ctx->pc = 0x23b058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_23b05c:
    // 0x23b05c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x23b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23b060:
    // 0x23b060: 0xc6d00  sll         $t5, $t4, 20
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_23b064:
    // 0x23b064: 0x1e2180b  movn        $v1, $t7, $v0
    ctx->pc = 0x23b064u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15));
label_23b068:
    // 0x23b068: 0x43500  sll         $a2, $a0, 20
    ctx->pc = 0x23b068u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
label_23b06c:
    // 0x23b06c: 0x9cd00  sll         $t9, $t1, 20
    ctx->pc = 0x23b06cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
label_23b070:
    // 0x23b070: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x23b070u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b074:
    // 0x23b074: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x23b074u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
label_23b078:
    // 0x23b078: 0x2cb80040  sltiu       $t8, $a1, 0x40
    ctx->pc = 0x23b078u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_23b07c:
    // 0x23b07c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23b080:
    // 0x23b080: 0x1d41025  or          $v0, $t6, $s4
    ctx->pc = 0x23b080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 20));
label_23b084:
    // 0x23b084: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23b084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23b088:
    // 0x23b088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b08c:
    // 0x23b08c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23b08cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23b090:
    // 0x23b090: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b090u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b094:
    // 0x23b094: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_23b098:
    // 0x23b098: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16684)));
label_23b09c:
    // 0x23b09c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x23b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_23b0a0:
    // 0x23b0a0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23b0a4:
    // 0x23b0a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b0a8:
    // 0x23b0a8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x23b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 4));
label_23b0ac:
    // 0x23b0ac: 0xb1042  srl         $v0, $t3, 1
    ctx->pc = 0x23b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
label_23b0b0:
    // 0x23b0b0: 0x1424821  addu        $t1, $t2, $v0
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_23b0b4:
    // 0x23b0b4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b0b8:
    // 0x23b0b8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_23b0bc:
    // 0x23b0bc: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x23b0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_23b0c0:
    // 0x23b0c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b0c4:
    // 0x23b0c4: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23b0c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23b0c8:
    // 0x23b0c8: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b0c8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b0cc:
    // 0x23b0cc: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x23b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_23b0d0:
    // 0x23b0d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23b0d4:
    // 0x23b0d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b0d8:
    // 0x23b0d8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23b0dc:
    // 0x23b0dc: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_23b0e0:
    // 0x23b0e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x23b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_23b0e4:
    // 0x23b0e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23b0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23b0e8:
    // 0x23b0e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b0ec:
    // 0x23b0ec: 0x3403e  dsrl32      $t0, $v1, 0
    ctx->pc = 0x23b0ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> (32 + 0));
label_23b0f0:
    // 0x23b0f0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b0f0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b0f4:
    // 0x23b0f4: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x23b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
label_23b0f8:
    // 0x23b0f8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x23b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_23b0fc:
    // 0x23b0fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b100:
    // 0x23b100: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x23b100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 4));
label_23b104:
    // 0x23b104: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x23b104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23b108:
    // 0x23b108: 0x17000003  bnez        $t8, . + 4 + (0x3 << 2)
label_23b10c:
    if (ctx->pc == 0x23B10Cu) {
        ctx->pc = 0x23B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B108u;
        // 0x23b10c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B110u;
        goto label_23b110;
    }
    ctx->pc = 0x23B108u;
    {
        const bool branch_taken_0x23b108 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B108u;
        // 0x23b10c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b108) {
            ctx->pc = 0x23B118u;
            goto label_23b118;
        }
    }
    ctx->pc = 0x23B110u;
label_23b110:
    // 0x23b110: 0x25220020  addiu       $v0, $t1, 0x20
    ctx->pc = 0x23b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_23b114:
    // 0x23b114: 0x0  nop
    ctx->pc = 0x23b114u;
    // NOP
label_23b118:
    // 0x23b118: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23b118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_23b11c:
    // 0x23b11c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x23b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_23b120:
    // 0x23b120: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b124:
    // 0x23b124: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23b124u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23b128:
    // 0x23b128: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x23b128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b12c:
    // 0x23b12c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b12cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b130:
    // 0x23b130: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23b134:
    // 0x23b134: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_23b138:
    // 0x23b138: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x23b138u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_23b13c:
    // 0x23b13c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23b140:
    // 0x23b140: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b144:
    // 0x23b144: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b144u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23b148:
    // 0x23b148: 0x25ce0400  addiu       $t6, $t6, 0x400
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1024));
label_23b14c:
    // 0x23b14c: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_23b150:
    // 0x23b150: 0x16f102b  sltu        $v0, $t3, $t7
    ctx->pc = 0x23b150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_23b154:
    // 0x23b154: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_23b158:
    if (ctx->pc == 0x23B158u) {
        ctx->pc = 0x23B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B154u;
        // 0x23b158: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B15Cu;
        goto label_23b15c;
    }
    ctx->pc = 0x23B154u;
    {
        const bool branch_taken_0x23b154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B154u;
        // 0x23b158: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b154) {
            ctx->pc = 0x23B080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b080;
        }
    }
    ctx->pc = 0x23B15Cu;
label_23b15c:
    // 0x23b15c: 0x0  nop
    ctx->pc = 0x23b15cu;
    // NOP
label_23b160:
    // 0x23b160: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x23b160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_23b164:
    // 0x23b164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b168:
    // 0x23b168: 0x70e23b89  pcpyld      $a3, $a3, $v0
    ctx->pc = 0x23b168u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_23b16c:
    // 0x23b16c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x23b16cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b170:
    // 0x23b170: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x23b170u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b174:
    // 0x23b174: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23b178:
    // 0x23b178: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_23b17c:
    // 0x23b17c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x23b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_23b180:
    // 0x23b180: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23b184:
    // 0x23b184: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b188:
    // 0x23b188: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23b18c:
    // 0x23b18c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x23b18cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_23b190:
    // 0x23b190: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x23b190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_23b194:
    // 0x23b194: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b194u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b198:
    // 0x23b198: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x23b198u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_23b19c:
    // 0x23b19c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23b1a0:
    // 0x23b1a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b1a4:
    // 0x23b1a4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23b1a8:
    // 0x23b1a8: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x23b1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_23b1ac:
    // 0x23b1ac: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x23b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_23b1b0:
    // 0x23b1b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23b1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23b1b4:
    // 0x23b1b4: 0x5440feb6  bnel        $v0, $zero, . + 4 + (-0x14A << 2)
label_23b1b8:
    if (ctx->pc == 0x23B1B8u) {
        ctx->pc = 0x23B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1B4u;
        // 0x23b1b8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1BCu;
        goto label_23b1bc;
    }
    ctx->pc = 0x23B1B4u;
    {
        const bool branch_taken_0x23b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b1b4) {
            ctx->pc = 0x23B1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B1B4u;
            // 0x23b1b8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ac90;
        }
    }
    ctx->pc = 0x23B1BCu;
label_23b1bc:
    // 0x23b1bc: 0x0  nop
    ctx->pc = 0x23b1bcu;
    // NOP
label_23b1c0:
    // 0x23b1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b1c4:
    // 0x23b1c4: 0xdf888460  ld          $t0, -0x7BA0($gp)
    ctx->pc = 0x23b1c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_23b1c8:
    // 0x23b1c8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_23b1cc:
    // 0x23b1cc: 0xaf8284d4  sw          $v0, -0x7B2C($gp)
    ctx->pc = 0x23b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935764), GPR_U32(ctx, 2));
label_23b1d0:
    // 0x23b1d0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b1d0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b1d4:
    // 0x23b1d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_23b1d8:
    // 0x23b1d8: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16684)));
label_23b1dc:
    // 0x23b1dc: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x23b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_23b1e0:
    // 0x23b1e0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23b1e4:
    // 0x23b1e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b1e8:
    // 0x23b1e8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 3));
label_23b1ec:
    // 0x23b1ec: 0xdf888450  ld          $t0, -0x7BB0($gp)
    ctx->pc = 0x23b1ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_23b1f0:
    // 0x23b1f0: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x23b1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_23b1f4:
    // 0x23b1f4: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b1f4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b1f8:
    // 0x23b1f8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x23b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_23b1fc:
    // 0x23b1fc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x23b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23b200:
    // 0x23b200: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b204:
    // 0x23b204: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_23b208:
    // 0x23b208: 0xdf888480  ld          $t0, -0x7B80($gp)
    ctx->pc = 0x23b208u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
label_23b20c:
    // 0x23b20c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x23b20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23b210:
    // 0x23b210: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x23b210u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_23b214:
    // 0x23b214: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x23b214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_23b218:
    // 0x23b218: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x23b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_23b21c:
    // 0x23b21c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23b220:
    // 0x23b220: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23b220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 3));
label_23b224:
    // 0x23b224: 0x0  nop
    ctx->pc = 0x23b224u;
    // NOP
label_23b228:
    // 0x23b228: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x23b228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23b22c:
    // 0x23b22c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23b22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23b230:
    // 0x23b230: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23b230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23b234:
    // 0x23b234: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x23b234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23b238:
    // 0x23b238: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x23b238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b23c:
    // 0x23b23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b240:
    // 0x23b240: 0x3e00008  jr          $ra
label_23b244:
    if (ctx->pc == 0x23B244u) {
        ctx->pc = 0x23B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B240u;
        // 0x23b244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B248u;
        goto label_fallthrough_0x23b240;
    }
    ctx->pc = 0x23B240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B240u;
        // 0x23b244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b240:
    ctx->pc = 0x23B248u;
}
