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

// Function: sub_00266960
// Address: 0x266960 - 0x267078
void sub_00266960_0x266960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266960_0x266960");
#endif

    switch (ctx->pc) {
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        case 0x266b10u: goto label_266b10;
        case 0x266b14u: goto label_266b14;
        case 0x266b18u: goto label_266b18;
        case 0x266b1cu: goto label_266b1c;
        case 0x266b20u: goto label_266b20;
        case 0x266b24u: goto label_266b24;
        case 0x266b28u: goto label_266b28;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b30u: goto label_266b30;
        case 0x266b34u: goto label_266b34;
        case 0x266b38u: goto label_266b38;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b40u: goto label_266b40;
        case 0x266b44u: goto label_266b44;
        case 0x266b48u: goto label_266b48;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b50u: goto label_266b50;
        case 0x266b54u: goto label_266b54;
        case 0x266b58u: goto label_266b58;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b60u: goto label_266b60;
        case 0x266b64u: goto label_266b64;
        case 0x266b68u: goto label_266b68;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b70u: goto label_266b70;
        case 0x266b74u: goto label_266b74;
        case 0x266b78u: goto label_266b78;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b80u: goto label_266b80;
        case 0x266b84u: goto label_266b84;
        case 0x266b88u: goto label_266b88;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b90u: goto label_266b90;
        case 0x266b94u: goto label_266b94;
        case 0x266b98u: goto label_266b98;
        case 0x266b9cu: goto label_266b9c;
        case 0x266ba0u: goto label_266ba0;
        case 0x266ba4u: goto label_266ba4;
        case 0x266ba8u: goto label_266ba8;
        case 0x266bacu: goto label_266bac;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bb4u: goto label_266bb4;
        case 0x266bb8u: goto label_266bb8;
        case 0x266bbcu: goto label_266bbc;
        case 0x266bc0u: goto label_266bc0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266bc8u: goto label_266bc8;
        case 0x266bccu: goto label_266bcc;
        case 0x266bd0u: goto label_266bd0;
        case 0x266bd4u: goto label_266bd4;
        case 0x266bd8u: goto label_266bd8;
        case 0x266bdcu: goto label_266bdc;
        case 0x266be0u: goto label_266be0;
        case 0x266be4u: goto label_266be4;
        case 0x266be8u: goto label_266be8;
        case 0x266becu: goto label_266bec;
        case 0x266bf0u: goto label_266bf0;
        case 0x266bf4u: goto label_266bf4;
        case 0x266bf8u: goto label_266bf8;
        case 0x266bfcu: goto label_266bfc;
        case 0x266c00u: goto label_266c00;
        case 0x266c04u: goto label_266c04;
        case 0x266c08u: goto label_266c08;
        case 0x266c0cu: goto label_266c0c;
        case 0x266c10u: goto label_266c10;
        case 0x266c14u: goto label_266c14;
        case 0x266c18u: goto label_266c18;
        case 0x266c1cu: goto label_266c1c;
        case 0x266c20u: goto label_266c20;
        case 0x266c24u: goto label_266c24;
        case 0x266c28u: goto label_266c28;
        case 0x266c2cu: goto label_266c2c;
        case 0x266c30u: goto label_266c30;
        case 0x266c34u: goto label_266c34;
        case 0x266c38u: goto label_266c38;
        case 0x266c3cu: goto label_266c3c;
        case 0x266c40u: goto label_266c40;
        case 0x266c44u: goto label_266c44;
        case 0x266c48u: goto label_266c48;
        case 0x266c4cu: goto label_266c4c;
        case 0x266c50u: goto label_266c50;
        case 0x266c54u: goto label_266c54;
        case 0x266c58u: goto label_266c58;
        case 0x266c5cu: goto label_266c5c;
        case 0x266c60u: goto label_266c60;
        case 0x266c64u: goto label_266c64;
        case 0x266c68u: goto label_266c68;
        case 0x266c6cu: goto label_266c6c;
        case 0x266c70u: goto label_266c70;
        case 0x266c74u: goto label_266c74;
        case 0x266c78u: goto label_266c78;
        case 0x266c7cu: goto label_266c7c;
        case 0x266c80u: goto label_266c80;
        case 0x266c84u: goto label_266c84;
        case 0x266c88u: goto label_266c88;
        case 0x266c8cu: goto label_266c8c;
        case 0x266c90u: goto label_266c90;
        case 0x266c94u: goto label_266c94;
        case 0x266c98u: goto label_266c98;
        case 0x266c9cu: goto label_266c9c;
        case 0x266ca0u: goto label_266ca0;
        case 0x266ca4u: goto label_266ca4;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cacu: goto label_266cac;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cb4u: goto label_266cb4;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cbcu: goto label_266cbc;
        case 0x266cc0u: goto label_266cc0;
        case 0x266cc4u: goto label_266cc4;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cccu: goto label_266ccc;
        case 0x266cd0u: goto label_266cd0;
        case 0x266cd4u: goto label_266cd4;
        case 0x266cd8u: goto label_266cd8;
        case 0x266cdcu: goto label_266cdc;
        case 0x266ce0u: goto label_266ce0;
        case 0x266ce4u: goto label_266ce4;
        case 0x266ce8u: goto label_266ce8;
        case 0x266cecu: goto label_266cec;
        case 0x266cf0u: goto label_266cf0;
        case 0x266cf4u: goto label_266cf4;
        case 0x266cf8u: goto label_266cf8;
        case 0x266cfcu: goto label_266cfc;
        case 0x266d00u: goto label_266d00;
        case 0x266d04u: goto label_266d04;
        case 0x266d08u: goto label_266d08;
        case 0x266d0cu: goto label_266d0c;
        case 0x266d10u: goto label_266d10;
        case 0x266d14u: goto label_266d14;
        case 0x266d18u: goto label_266d18;
        case 0x266d1cu: goto label_266d1c;
        case 0x266d20u: goto label_266d20;
        case 0x266d24u: goto label_266d24;
        case 0x266d28u: goto label_266d28;
        case 0x266d2cu: goto label_266d2c;
        case 0x266d30u: goto label_266d30;
        case 0x266d34u: goto label_266d34;
        case 0x266d38u: goto label_266d38;
        case 0x266d3cu: goto label_266d3c;
        case 0x266d40u: goto label_266d40;
        case 0x266d44u: goto label_266d44;
        case 0x266d48u: goto label_266d48;
        case 0x266d4cu: goto label_266d4c;
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        case 0x266df0u: goto label_266df0;
        case 0x266df4u: goto label_266df4;
        case 0x266df8u: goto label_266df8;
        case 0x266dfcu: goto label_266dfc;
        case 0x266e00u: goto label_266e00;
        case 0x266e04u: goto label_266e04;
        case 0x266e08u: goto label_266e08;
        case 0x266e0cu: goto label_266e0c;
        case 0x266e10u: goto label_266e10;
        case 0x266e14u: goto label_266e14;
        case 0x266e18u: goto label_266e18;
        case 0x266e1cu: goto label_266e1c;
        case 0x266e20u: goto label_266e20;
        case 0x266e24u: goto label_266e24;
        case 0x266e28u: goto label_266e28;
        case 0x266e2cu: goto label_266e2c;
        case 0x266e30u: goto label_266e30;
        case 0x266e34u: goto label_266e34;
        case 0x266e38u: goto label_266e38;
        case 0x266e3cu: goto label_266e3c;
        case 0x266e40u: goto label_266e40;
        case 0x266e44u: goto label_266e44;
        case 0x266e48u: goto label_266e48;
        case 0x266e4cu: goto label_266e4c;
        case 0x266e50u: goto label_266e50;
        case 0x266e54u: goto label_266e54;
        case 0x266e58u: goto label_266e58;
        case 0x266e5cu: goto label_266e5c;
        case 0x266e60u: goto label_266e60;
        case 0x266e64u: goto label_266e64;
        case 0x266e68u: goto label_266e68;
        case 0x266e6cu: goto label_266e6c;
        case 0x266e70u: goto label_266e70;
        case 0x266e74u: goto label_266e74;
        case 0x266e78u: goto label_266e78;
        case 0x266e7cu: goto label_266e7c;
        case 0x266e80u: goto label_266e80;
        case 0x266e84u: goto label_266e84;
        case 0x266e88u: goto label_266e88;
        case 0x266e8cu: goto label_266e8c;
        case 0x266e90u: goto label_266e90;
        case 0x266e94u: goto label_266e94;
        case 0x266e98u: goto label_266e98;
        case 0x266e9cu: goto label_266e9c;
        case 0x266ea0u: goto label_266ea0;
        case 0x266ea4u: goto label_266ea4;
        case 0x266ea8u: goto label_266ea8;
        case 0x266eacu: goto label_266eac;
        case 0x266eb0u: goto label_266eb0;
        case 0x266eb4u: goto label_266eb4;
        case 0x266eb8u: goto label_266eb8;
        case 0x266ebcu: goto label_266ebc;
        case 0x266ec0u: goto label_266ec0;
        case 0x266ec4u: goto label_266ec4;
        case 0x266ec8u: goto label_266ec8;
        case 0x266eccu: goto label_266ecc;
        case 0x266ed0u: goto label_266ed0;
        case 0x266ed4u: goto label_266ed4;
        case 0x266ed8u: goto label_266ed8;
        case 0x266edcu: goto label_266edc;
        case 0x266ee0u: goto label_266ee0;
        case 0x266ee4u: goto label_266ee4;
        case 0x266ee8u: goto label_266ee8;
        case 0x266eecu: goto label_266eec;
        case 0x266ef0u: goto label_266ef0;
        case 0x266ef4u: goto label_266ef4;
        case 0x266ef8u: goto label_266ef8;
        case 0x266efcu: goto label_266efc;
        case 0x266f00u: goto label_266f00;
        case 0x266f04u: goto label_266f04;
        case 0x266f08u: goto label_266f08;
        case 0x266f0cu: goto label_266f0c;
        case 0x266f10u: goto label_266f10;
        case 0x266f14u: goto label_266f14;
        case 0x266f18u: goto label_266f18;
        case 0x266f1cu: goto label_266f1c;
        case 0x266f20u: goto label_266f20;
        case 0x266f24u: goto label_266f24;
        case 0x266f28u: goto label_266f28;
        case 0x266f2cu: goto label_266f2c;
        case 0x266f30u: goto label_266f30;
        case 0x266f34u: goto label_266f34;
        case 0x266f38u: goto label_266f38;
        case 0x266f3cu: goto label_266f3c;
        case 0x266f40u: goto label_266f40;
        case 0x266f44u: goto label_266f44;
        case 0x266f48u: goto label_266f48;
        case 0x266f4cu: goto label_266f4c;
        case 0x266f50u: goto label_266f50;
        case 0x266f54u: goto label_266f54;
        case 0x266f58u: goto label_266f58;
        case 0x266f5cu: goto label_266f5c;
        case 0x266f60u: goto label_266f60;
        case 0x266f64u: goto label_266f64;
        case 0x266f68u: goto label_266f68;
        case 0x266f6cu: goto label_266f6c;
        case 0x266f70u: goto label_266f70;
        case 0x266f74u: goto label_266f74;
        case 0x266f78u: goto label_266f78;
        case 0x266f7cu: goto label_266f7c;
        case 0x266f80u: goto label_266f80;
        case 0x266f84u: goto label_266f84;
        case 0x266f88u: goto label_266f88;
        case 0x266f8cu: goto label_266f8c;
        case 0x266f90u: goto label_266f90;
        case 0x266f94u: goto label_266f94;
        case 0x266f98u: goto label_266f98;
        case 0x266f9cu: goto label_266f9c;
        case 0x266fa0u: goto label_266fa0;
        case 0x266fa4u: goto label_266fa4;
        case 0x266fa8u: goto label_266fa8;
        case 0x266facu: goto label_266fac;
        case 0x266fb0u: goto label_266fb0;
        case 0x266fb4u: goto label_266fb4;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fbcu: goto label_266fbc;
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        case 0x267000u: goto label_267000;
        case 0x267004u: goto label_267004;
        case 0x267008u: goto label_267008;
        case 0x26700cu: goto label_26700c;
        case 0x267010u: goto label_267010;
        case 0x267014u: goto label_267014;
        case 0x267018u: goto label_267018;
        case 0x26701cu: goto label_26701c;
        case 0x267020u: goto label_267020;
        case 0x267024u: goto label_267024;
        case 0x267028u: goto label_267028;
        case 0x26702cu: goto label_26702c;
        case 0x267030u: goto label_267030;
        case 0x267034u: goto label_267034;
        case 0x267038u: goto label_267038;
        case 0x26703cu: goto label_26703c;
        case 0x267040u: goto label_267040;
        case 0x267044u: goto label_267044;
        case 0x267048u: goto label_267048;
        case 0x26704cu: goto label_26704c;
        case 0x267050u: goto label_267050;
        case 0x267054u: goto label_267054;
        case 0x267058u: goto label_267058;
        case 0x26705cu: goto label_26705c;
        case 0x267060u: goto label_267060;
        case 0x267064u: goto label_267064;
        case 0x267068u: goto label_267068;
        case 0x26706cu: goto label_26706c;
        case 0x267070u: goto label_267070;
        case 0x267074u: goto label_267074;
        default: break;
    }

    ctx->pc = 0x266960u;

label_266960:
    // 0x266960: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x266960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_266964:
    // 0x266964: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x266964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_266968:
    // 0x266968: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x266968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_26696c:
    // 0x26696c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26696cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_266970:
    // 0x266970: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x266970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_266974:
    // 0x266974: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_266978:
    // 0x266978: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x266978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_26697c:
    // 0x26697c: 0x2482e6e0  addiu       $v0, $a0, -0x1920
    ctx->pc = 0x26697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
label_266980:
    // 0x266980: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x266980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_266984:
    // 0x266984: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x266984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_266988:
    // 0x266988: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x266988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_26698c:
    // 0x26698c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x26698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_266990:
    // 0x266990: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x266990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_266994:
    // 0x266994: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x266994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_266998:
    // 0x266998: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x266998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_26699c:
    // 0x26699c: 0x8e550008  lw          $s5, 0x8($s2)
    ctx->pc = 0x26699cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2669a0:
    // 0x2669a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2669a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2669a4:
    // 0x2669a4: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x2669a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2669a8:
    // 0x2669a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2669a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2669ac:
    // 0x2669ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2669acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2669b0:
    // 0x2669b0: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x2669b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_2669b4:
    // 0x2669b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2669b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2669b8:
    // 0x2669b8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2669b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2669bc:
    // 0x2669bc: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x2669bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_2669c0:
    // 0x2669c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2669c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2669c4:
    // 0x2669c4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2669c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2669c8:
    // 0x2669c8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2669c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2669cc:
    // 0x2669cc: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_2669d0:
    if (ctx->pc == 0x2669D0u) {
        ctx->pc = 0x2669D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669CCu;
        // 0x2669d0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2669D4u;
        goto label_2669d4;
    }
    ctx->pc = 0x2669CCu;
    {
        const bool branch_taken_0x2669cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2669D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669CCu;
        // 0x2669d0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669cc) {
            ctx->pc = 0x266A0Cu;
            goto label_266a0c;
        }
    }
    ctx->pc = 0x2669D4u;
label_2669d4:
    // 0x2669d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2669d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2669d8:
    // 0x2669d8: 0x8c4241b8  lw          $v0, 0x41B8($v0)
    ctx->pc = 0x2669d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16824)));
label_2669dc:
    // 0x2669dc: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x2669dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_2669e0:
    // 0x2669e0: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x2669e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2669e4:
    // 0x2669e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2669e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2669e8:
    // 0x2669e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2669ec:
    if (ctx->pc == 0x2669ECu) {
        ctx->pc = 0x2669ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E8u;
        // 0x2669ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2669F0u;
        goto label_2669f0;
    }
    ctx->pc = 0x2669E8u;
    {
        const bool branch_taken_0x2669e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E8u;
        // 0x2669ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669e8) {
            ctx->pc = 0x266A00u;
            goto label_266a00;
        }
    }
    ctx->pc = 0x2669F0u;
label_2669f0:
    // 0x2669f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2669f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2669f4:
    // 0x2669f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2669f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2669f8:
    // 0x2669f8: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
label_2669fc:
    if (ctx->pc == 0x2669FCu) {
        ctx->pc = 0x2669FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669F8u;
        // 0x2669fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A00u;
        goto label_266a00;
    }
    ctx->pc = 0x2669F8u;
    {
        const bool branch_taken_0x2669f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2669f8) {
            ctx->pc = 0x2669FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2669F8u;
            // 0x2669fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A50u;
            goto label_266a50;
        }
    }
    ctx->pc = 0x266A00u;
label_266a00:
    // 0x266a00: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x266a00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_266a04:
    // 0x266a04: 0x10000010  b           . + 4 + (0x10 << 2)
label_266a08:
    if (ctx->pc == 0x266A08u) {
        ctx->pc = 0x266A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A04u;
        // 0x266a08: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A0Cu;
        goto label_266a0c;
    }
    ctx->pc = 0x266A04u;
    {
        const bool branch_taken_0x266a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A04u;
        // 0x266a08: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a04) {
            ctx->pc = 0x266A48u;
            goto label_266a48;
        }
    }
    ctx->pc = 0x266A0Cu;
label_266a0c:
    // 0x266a0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_266a10:
    // 0x266a10: 0x8c4241b0  lw          $v0, 0x41B0($v0)
    ctx->pc = 0x266a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16816)));
label_266a14:
    // 0x266a14: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x266a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_266a18:
    // 0x266a18: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x266a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_266a1c:
    // 0x266a1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x266a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_266a20:
    // 0x266a20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_266a24:
    if (ctx->pc == 0x266A24u) {
        ctx->pc = 0x266A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A20u;
        // 0x266a24: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A28u;
        goto label_266a28;
    }
    ctx->pc = 0x266A20u;
    {
        const bool branch_taken_0x266a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A20u;
        // 0x266a24: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a20) {
            ctx->pc = 0x266A40u;
            goto label_266a40;
        }
    }
    ctx->pc = 0x266A28u;
label_266a28:
    // 0x266a28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266a2c:
    // 0x266a2c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x266a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_266a30:
    // 0x266a30: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_266a34:
    if (ctx->pc == 0x266A34u) {
        ctx->pc = 0x266A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A30u;
        // 0x266a34: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A38u;
        goto label_266a38;
    }
    ctx->pc = 0x266A30u;
    {
        const bool branch_taken_0x266a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266a30) {
            ctx->pc = 0x266A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266A30u;
            // 0x266a34: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A44u;
            goto label_266a44;
        }
    }
    ctx->pc = 0x266A38u;
label_266a38:
    // 0x266a38: 0x10000005  b           . + 4 + (0x5 << 2)
label_266a3c:
    if (ctx->pc == 0x266A3Cu) {
        ctx->pc = 0x266A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A38u;
        // 0x266a3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A40u;
        goto label_266a40;
    }
    ctx->pc = 0x266A38u;
    {
        const bool branch_taken_0x266a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A38u;
        // 0x266a3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a38) {
            ctx->pc = 0x266A50u;
            goto label_266a50;
        }
    }
    ctx->pc = 0x266A40u;
label_266a40:
    // 0x266a40: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x266a40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_266a44:
    // 0x266a44: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x266a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_266a48:
    // 0x266a48: 0xc0993a4  jal         func_264E90
label_266a4c:
    if (ctx->pc == 0x266A4Cu) {
        ctx->pc = 0x266A50u;
        goto label_266a50;
    }
    ctx->pc = 0x266A48u;
    SET_GPR_U32(ctx, 31, 0x266A50u);
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x266A48u, 0x266A50u)) {
        return;
    }
    ctx->pc = 0x266A50u;
label_266a50:
    // 0x266a50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266a54:
    // 0x266a54: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x266a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_266a58:
    // 0x266a58: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x266a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_266a5c:
    // 0x266a5c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x266a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_266a60:
    // 0x266a60: 0x10600178  beqz        $v1, . + 4 + (0x178 << 2)
label_266a64:
    if (ctx->pc == 0x266A64u) {
        ctx->pc = 0x266A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A60u;
        // 0x266a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A68u;
        goto label_266a68;
    }
    ctx->pc = 0x266A60u;
    {
        const bool branch_taken_0x266a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A60u;
        // 0x266a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a60) {
            ctx->pc = 0x267044u;
            goto label_267044;
        }
    }
    ctx->pc = 0x266A68u;
label_266a68:
    // 0x266a68: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x266a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_266a6c:
    // 0x266a6c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x266a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_266a70:
    // 0x266a70: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x266a70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_266a74:
    // 0x266a74: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_266a78:
    if (ctx->pc == 0x266A78u) {
        ctx->pc = 0x266A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A74u;
        // 0x266a78: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A7Cu;
        goto label_266a7c;
    }
    ctx->pc = 0x266A74u;
    {
        const bool branch_taken_0x266a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x266A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A74u;
        // 0x266a78: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a74) {
            ctx->pc = 0x266A90u;
            goto label_266a90;
        }
    }
    ctx->pc = 0x266A7Cu;
label_266a7c:
    // 0x266a7c: 0x26a2004c  addiu       $v0, $s5, 0x4C
    ctx->pc = 0x266a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
label_266a80:
    // 0x266a80: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x266a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266a84:
    // 0x266a84: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266a88:
    // 0x266a88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x266a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_266a8c:
    // 0x266a8c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x266a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_266a90:
    // 0x266a90: 0x8ea80018  lw          $t0, 0x18($s5)
    ctx->pc = 0x266a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_266a94:
    // 0x266a94: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x266a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_266a98:
    // 0x266a98: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x266a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_266a9c:
    // 0x266a9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x266a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_266aa0:
    // 0x266aa0: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_266aa4:
    if (ctx->pc == 0x266AA4u) {
        ctx->pc = 0x266AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AA0u;
        // 0x266aa4: 0x8ea30018  lw          $v1, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AA8u;
        goto label_266aa8;
    }
    ctx->pc = 0x266AA0u;
    {
        const bool branch_taken_0x266aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266aa0) {
            ctx->pc = 0x266AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266AA0u;
            // 0x266aa4: 0x8ea30018  lw          $v1, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266BB8u;
            goto label_266bb8;
        }
    }
    ctx->pc = 0x266AA8u;
label_266aa8:
    // 0x266aa8: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x266aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_266aac:
    // 0x266aac: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x266aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_266ab0:
    // 0x266ab0: 0x91020008  lbu         $v0, 0x8($t0)
    ctx->pc = 0x266ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_266ab4:
    // 0x266ab4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x266ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_266ab8:
    // 0x266ab8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x266ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_266abc:
    // 0x266abc: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x266abcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
label_266ac0:
    // 0x266ac0: 0x3042009f  andi        $v0, $v0, 0x9F
    ctx->pc = 0x266ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)159);
label_266ac4:
    // 0x266ac4: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x266ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_266ac8:
    // 0x266ac8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x266ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_266acc:
    // 0x266acc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x266accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_266ad0:
    // 0x266ad0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_266ad4:
    // 0x266ad4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x266ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_266ad8:
    // 0x266ad8: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x266ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_266adc:
    // 0x266adc: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x266adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_266ae0:
    // 0x266ae0: 0xae460014  sw          $a2, 0x14($s2)
    ctx->pc = 0x266ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 6));
label_266ae4:
    // 0x266ae4: 0xae450018  sw          $a1, 0x18($s2)
    ctx->pc = 0x266ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
label_266ae8:
    // 0x266ae8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x266ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_266aec:
    // 0x266aec: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_266af0:
    if (ctx->pc == 0x266AF0u) {
        ctx->pc = 0x266AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AECu;
        // 0x266af0: 0x24490018  addiu       $t1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AF4u;
        goto label_266af4;
    }
    ctx->pc = 0x266AECu;
    {
        const bool branch_taken_0x266aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AECu;
        // 0x266af0: 0x24490018  addiu       $t1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266aec) {
            ctx->pc = 0x266BB0u;
            goto label_266bb0;
        }
    }
    ctx->pc = 0x266AF4u;
label_266af4:
    // 0x266af4: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x266af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_266af8:
    // 0x266af8: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
label_266afc:
    if (ctx->pc == 0x266AFCu) {
        ctx->pc = 0x266AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AF8u;
        // 0x266afc: 0x26a7004c  addiu       $a3, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B00u;
        goto label_266b00;
    }
    ctx->pc = 0x266AF8u;
    {
        const bool branch_taken_0x266af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x266AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AF8u;
        // 0x266afc: 0x26a7004c  addiu       $a3, $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266af8) {
            ctx->pc = 0x266B34u;
            goto label_266b34;
        }
    }
    ctx->pc = 0x266B00u;
label_266b00:
    // 0x266b00: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x266b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_266b04:
    // 0x266b04: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x266b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_266b08:
    // 0x266b08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x266b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_266b0c:
    // 0x266b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_266b10:
    // 0x266b10: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_266b14:
    if (ctx->pc == 0x266B14u) {
        ctx->pc = 0x266B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B10u;
        // 0x266b14: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B18u;
        goto label_266b18;
    }
    ctx->pc = 0x266B10u;
    {
        const bool branch_taken_0x266b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B10u;
        // 0x266b14: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b10) {
            ctx->pc = 0x266B30u;
            goto label_266b30;
        }
    }
    ctx->pc = 0x266B18u;
label_266b18:
    // 0x266b18: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x266b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_266b1c:
    // 0x266b1c: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x266b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
label_266b20:
    // 0x266b20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_266b24:
    if (ctx->pc == 0x266B24u) {
        ctx->pc = 0x266B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B20u;
        // 0x266b24: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B28u;
        goto label_266b28;
    }
    ctx->pc = 0x266B20u;
    {
        const bool branch_taken_0x266b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B20u;
        // 0x266b24: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b20) {
            ctx->pc = 0x266B30u;
            goto label_266b30;
        }
    }
    ctx->pc = 0x266B28u;
label_266b28:
    // 0x266b28: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x266b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_266b2c:
    // 0x266b2c: 0x0  nop
    ctx->pc = 0x266b2cu;
    // NOP
label_266b30:
    // 0x266b30: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x266b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_266b34:
    // 0x266b34: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x266b34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_266b38:
    // 0x266b38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_266b3c:
    if (ctx->pc == 0x266B3Cu) {
        ctx->pc = 0x266B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B38u;
        // 0x266b3c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B40u;
        goto label_266b40;
    }
    ctx->pc = 0x266B38u;
    {
        const bool branch_taken_0x266b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B38u;
        // 0x266b3c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b38) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266B40u;
label_266b40:
    // 0x266b40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_266b44:
    if (ctx->pc == 0x266B44u) {
        ctx->pc = 0x266B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B40u;
        // 0x266b44: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B48u;
        goto label_266b48;
    }
    ctx->pc = 0x266B40u;
    {
        const bool branch_taken_0x266b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b40) {
            ctx->pc = 0x266B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B40u;
            // 0x266b44: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B58u;
            goto label_266b58;
        }
    }
    ctx->pc = 0x266B48u;
label_266b48:
    // 0x266b48: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x266b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_266b4c:
    // 0x266b4c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x266b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_266b50:
    // 0x266b50: 0x10000007  b           . + 4 + (0x7 << 2)
label_266b54:
    if (ctx->pc == 0x266B54u) {
        ctx->pc = 0x266B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B50u;
        // 0x266b54: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B58u;
        goto label_266b58;
    }
    ctx->pc = 0x266B50u;
    {
        const bool branch_taken_0x266b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B50u;
        // 0x266b54: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b50) {
            ctx->pc = 0x266B70u;
            goto label_266b70;
        }
    }
    ctx->pc = 0x266B58u;
label_266b58:
    // 0x266b58: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x266b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_266b5c:
    // 0x266b5c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x266b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_266b60:
    // 0x266b60: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x266b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_266b64:
    // 0x266b64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x266b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_266b68:
    // 0x266b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_266b6c:
    // 0x266b6c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x266b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_266b70:
    // 0x266b70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x266b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_266b74:
    // 0x266b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_266b78:
    // 0x266b78: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_266b7c:
    if (ctx->pc == 0x266B7Cu) {
        ctx->pc = 0x266B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B78u;
        // 0x266b7c: 0x8ea30018  lw          $v1, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B80u;
        goto label_266b80;
    }
    ctx->pc = 0x266B78u;
    {
        const bool branch_taken_0x266b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b78) {
            ctx->pc = 0x266B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B78u;
            // 0x266b7c: 0x8ea30018  lw          $v1, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266BB8u;
            goto label_266bb8;
        }
    }
    ctx->pc = 0x266B80u;
label_266b80:
    // 0x266b80: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x266b80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_266b84:
    // 0x266b84: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x266b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
label_266b88:
    // 0x266b88: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_266b8c:
    if (ctx->pc == 0x266B8Cu) {
        ctx->pc = 0x266B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B88u;
        // 0x266b8c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266B90u;
        goto label_266b90;
    }
    ctx->pc = 0x266B88u;
    {
        const bool branch_taken_0x266b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266b88) {
            ctx->pc = 0x266B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B88u;
            // 0x266b8c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266BA8u;
            goto label_266ba8;
        }
    }
    ctx->pc = 0x266B90u;
label_266b90:
    // 0x266b90: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x266b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_266b94:
    // 0x266b94: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x266b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
label_266b98:
    // 0x266b98: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_266b9c:
    if (ctx->pc == 0x266B9Cu) {
        ctx->pc = 0x266B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B98u;
        // 0x266b9c: 0x8ea30018  lw          $v1, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BA0u;
        goto label_266ba0;
    }
    ctx->pc = 0x266B98u;
    {
        const bool branch_taken_0x266b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x266b98) {
            ctx->pc = 0x266B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B98u;
            // 0x266b9c: 0x8ea30018  lw          $v1, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266BB8u;
            goto label_266bb8;
        }
    }
    ctx->pc = 0x266BA0u;
label_266ba0:
    // 0x266ba0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x266ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_266ba4:
    // 0x266ba4: 0x0  nop
    ctx->pc = 0x266ba4u;
    // NOP
label_266ba8:
    // 0x266ba8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x266ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_266bac:
    // 0x266bac: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x266bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_266bb0:
    // 0x266bb0: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x266bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_266bb4:
    // 0x266bb4: 0x0  nop
    ctx->pc = 0x266bb4u;
    // NOP
label_266bb8:
    // 0x266bb8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x266bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_266bbc:
    // 0x266bbc: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x266bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_266bc0:
    // 0x266bc0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x266bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_266bc4:
    // 0x266bc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x266bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_266bc8:
    // 0x266bc8: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x266bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_266bcc:
    // 0x266bcc: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x266bccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_266bd0:
    // 0x266bd0: 0x8e300fc8  lw          $s0, 0xFC8($s1)
    ctx->pc = 0x266bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4040)));
label_266bd4:
    // 0x266bd4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x266bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_266bd8:
    // 0x266bd8: 0xc08994a  jal         func_226528
label_266bdc:
    if (ctx->pc == 0x266BDCu) {
        ctx->pc = 0x266BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BD8u;
        // 0x266bdc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BE0u;
        goto label_266be0;
    }
    ctx->pc = 0x266BD8u;
    SET_GPR_U32(ctx, 31, 0x266BE0u);
    ctx->pc = 0x266BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BD8u;
    // 0x266bdc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x266BD8u, 0x266BE0u)) {
        return;
    }
    ctx->pc = 0x266BE0u;
label_266be0:
    // 0x266be0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x266be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_266be4:
    // 0x266be4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x266be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266be8:
    // 0x266be8: 0xc092d9c  jal         func_24B670
label_266bec:
    if (ctx->pc == 0x266BECu) {
        ctx->pc = 0x266BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BE8u;
        // 0x266bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266BF0u;
        goto label_266bf0;
    }
    ctx->pc = 0x266BE8u;
    SET_GPR_U32(ctx, 31, 0x266BF0u);
    ctx->pc = 0x266BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BE8u;
    // 0x266bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x266BE8u, 0x266BF0u)) {
        return;
    }
    ctx->pc = 0x266BF0u;
label_266bf0:
    // 0x266bf0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x266bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_266bf4:
    // 0x266bf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266bf8:
    // 0x266bf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x266bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_266bfc:
    // 0x266bfc: 0xc09533c  jal         func_254CF0
label_266c00:
    if (ctx->pc == 0x266C00u) {
        ctx->pc = 0x266C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BFCu;
        // 0x266c00: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C04u;
        goto label_266c04;
    }
    ctx->pc = 0x266BFCu;
    SET_GPR_U32(ctx, 31, 0x266C04u);
    ctx->pc = 0x266C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BFCu;
    // 0x266c00: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x266BFCu, 0x266C04u)) {
        return;
    }
    ctx->pc = 0x266C04u;
label_266c04:
    // 0x266c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266c08:
    // 0x266c08: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x266c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_266c0c:
    // 0x266c0c: 0x8c634170  lw          $v1, 0x4170($v1)
    ctx->pc = 0x266c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16752)));
label_266c10:
    // 0x266c10: 0x8e220fc8  lw          $v0, 0xFC8($s1)
    ctx->pc = 0x266c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4040)));
label_266c14:
    // 0x266c14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x266c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_266c18:
    // 0x266c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_266c1c:
    // 0x266c1c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x266c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_266c20:
    // 0x266c20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_266c24:
    // 0x266c24: 0x10000003  b           . + 4 + (0x3 << 2)
label_266c28:
    if (ctx->pc == 0x266C28u) {
        ctx->pc = 0x266C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C24u;
        // 0x266c28: 0x2b880  sll         $s7, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C2Cu;
        goto label_266c2c;
    }
    ctx->pc = 0x266C24u;
    {
        const bool branch_taken_0x266c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C24u;
        // 0x266c28: 0x2b880  sll         $s7, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c24) {
            ctx->pc = 0x266C34u;
            goto label_266c34;
        }
    }
    ctx->pc = 0x266C2Cu;
label_266c2c:
    // 0x266c2c: 0x0  nop
    ctx->pc = 0x266c2cu;
    // NOP
label_266c30:
    // 0x266c30: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x266c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_266c34:
    // 0x266c34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x266c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_266c38:
    // 0x266c38: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x266c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_266c3c:
    // 0x266c3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x266c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_266c40:
    // 0x266c40: 0x50a20017  beql        $a1, $v0, . + 4 + (0x17 << 2)
label_266c44:
    if (ctx->pc == 0x266C44u) {
        ctx->pc = 0x266C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C40u;
        // 0x266c44: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C48u;
        goto label_266c48;
    }
    ctx->pc = 0x266C40u;
    {
        const bool branch_taken_0x266c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x266c40) {
            ctx->pc = 0x266C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266C40u;
            // 0x266c44: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266CA0u;
            goto label_266ca0;
        }
    }
    ctx->pc = 0x266C48u;
label_266c48:
    // 0x266c48: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x266c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266c4c:
    // 0x266c4c: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x266c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_266c50:
    // 0x266c50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x266c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266c54:
    // 0x266c54: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x266c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266c58:
    // 0x266c58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x266c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_266c5c:
    // 0x266c5c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x266c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266c60:
    // 0x266c60: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x266c60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_266c64:
    // 0x266c64: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x266c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266c68:
    // 0x266c68: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x266c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_266c6c:
    // 0x266c6c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x266c6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_266c70:
    // 0x266c70: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x266c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266c74:
    // 0x266c74: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x266c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_266c78:
    // 0x266c78: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x266c78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_266c7c:
    // 0x266c7c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x266c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_266c80:
    // 0x266c80: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x266c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_266c84:
    // 0x266c84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x266c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266c88:
    // 0x266c88: 0x0  nop
    ctx->pc = 0x266c88u;
    // NOP
label_266c8c:
    // 0x266c8c: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
label_266c90:
    if (ctx->pc == 0x266C90u) {
        ctx->pc = 0x266C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C8Cu;
        // 0x266c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C94u;
        goto label_266c94;
    }
    ctx->pc = 0x266C8Cu;
    {
        const bool branch_taken_0x266c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C8Cu;
        // 0x266c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c8c) {
            ctx->pc = 0x266C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266c30;
        }
    }
    ctx->pc = 0x266C94u;
label_266c94:
    // 0x266c94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x266c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_266c98:
    // 0x266c98: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x266c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_266c9c:
    // 0x266c9c: 0x0  nop
    ctx->pc = 0x266c9cu;
    // NOP
label_266ca0:
    // 0x266ca0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266ca4:
    // 0x266ca4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x266ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_266ca8:
    // 0x266ca8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_266cac:
    if (ctx->pc == 0x266CACu) {
        ctx->pc = 0x266CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CA8u;
        // 0x266cac: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CB0u;
        goto label_266cb0;
    }
    ctx->pc = 0x266CA8u;
    {
        const bool branch_taken_0x266ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CA8u;
        // 0x266cac: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ca8) {
            ctx->pc = 0x266CE8u;
            goto label_266ce8;
        }
    }
    ctx->pc = 0x266CB0u;
label_266cb0:
    // 0x266cb0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x266cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_266cb4:
    // 0x266cb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_266cb8:
    if (ctx->pc == 0x266CB8u) {
        ctx->pc = 0x266CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CB4u;
        // 0x266cb8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CBCu;
        goto label_266cbc;
    }
    ctx->pc = 0x266CB4u;
    {
        const bool branch_taken_0x266cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cb4) {
            ctx->pc = 0x266CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266CB4u;
            // 0x266cb8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266CBCu;
label_266cbc:
    // 0x266cbc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x266cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_266cc0:
    // 0x266cc0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_266cc4:
    if (ctx->pc == 0x266CC4u) {
        ctx->pc = 0x266CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CC0u;
        // 0x266cc4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CC8u;
        goto label_266cc8;
    }
    ctx->pc = 0x266CC0u;
    {
        const bool branch_taken_0x266cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cc0) {
            ctx->pc = 0x266CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266CC0u;
            // 0x266cc4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266CE0u;
            goto label_266ce0;
        }
    }
    ctx->pc = 0x266CC8u;
label_266cc8:
    // 0x266cc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x266cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_266ccc:
    // 0x266ccc: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x266cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
label_266cd0:
    // 0x266cd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_266cd4:
    // 0x266cd4: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x266cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13648)));
label_266cd8:
    // 0x266cd8: 0x10000018  b           . + 4 + (0x18 << 2)
label_266cdc:
    if (ctx->pc == 0x266CDCu) {
        ctx->pc = 0x266CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CD8u;
        // 0x266cdc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CE0u;
        goto label_266ce0;
    }
    ctx->pc = 0x266CD8u;
    {
        const bool branch_taken_0x266cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CD8u;
        // 0x266cdc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cd8) {
            ctx->pc = 0x266D3Cu;
            goto label_266d3c;
        }
    }
    ctx->pc = 0x266CE0u;
label_266ce0:
    // 0x266ce0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_266ce4:
    if (ctx->pc == 0x266CE4u) {
        ctx->pc = 0x266CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CE0u;
        // 0x266ce4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266CE8u;
        goto label_266ce8;
    }
    ctx->pc = 0x266CE0u;
    {
        const bool branch_taken_0x266ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CE0u;
        // 0x266ce4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ce0) {
            ctx->pc = 0x266D00u;
            goto label_266d00;
        }
    }
    ctx->pc = 0x266CE8u;
label_266ce8:
    // 0x266ce8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x266ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_266cec:
    // 0x266cec: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x266cecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
label_266cf0:
    // 0x266cf0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x266cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_266cf4:
    // 0x266cf4: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x266cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13648)));
label_266cf8:
    // 0x266cf8: 0x10000011  b           . + 4 + (0x11 << 2)
label_266cfc:
    if (ctx->pc == 0x266CFCu) {
        ctx->pc = 0x266CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF8u;
        // 0x266cfc: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D00u;
        goto label_266d00;
    }
    ctx->pc = 0x266CF8u;
    {
        const bool branch_taken_0x266cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF8u;
        // 0x266cfc: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cf8) {
            ctx->pc = 0x266D40u;
            goto label_266d40;
        }
    }
    ctx->pc = 0x266D00u;
label_266d00:
    // 0x266d00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_266d04:
    if (ctx->pc == 0x266D04u) {
        ctx->pc = 0x266D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D00u;
        // 0x266d04: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D08u;
        goto label_266d08;
    }
    ctx->pc = 0x266D00u;
    {
        const bool branch_taken_0x266d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d00) {
            ctx->pc = 0x266D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266D00u;
            // 0x266d04: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266D20u;
            goto label_266d20;
        }
    }
    ctx->pc = 0x266D08u;
label_266d08:
    // 0x266d08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x266d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266d0c:
    // 0x266d0c: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x266d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
label_266d10:
    // 0x266d10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_266d14:
    // 0x266d14: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x266d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13648)));
label_266d18:
    // 0x266d18: 0x10000008  b           . + 4 + (0x8 << 2)
label_266d1c:
    if (ctx->pc == 0x266D1Cu) {
        ctx->pc = 0x266D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D18u;
        // 0x266d1c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D20u;
        goto label_266d20;
    }
    ctx->pc = 0x266D18u;
    {
        const bool branch_taken_0x266d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D18u;
        // 0x266d1c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d18) {
            ctx->pc = 0x266D3Cu;
            goto label_266d3c;
        }
    }
    ctx->pc = 0x266D20u;
label_266d20:
    // 0x266d20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_266d24:
    if (ctx->pc == 0x266D24u) {
        ctx->pc = 0x266D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D20u;
        // 0x266d24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D28u;
        goto label_266d28;
    }
    ctx->pc = 0x266D20u;
    {
        const bool branch_taken_0x266d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D20u;
        // 0x266d24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d20) {
            ctx->pc = 0x266D2Cu;
            goto label_266d2c;
        }
    }
    ctx->pc = 0x266D28u;
label_266d28:
    // 0x266d28: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x266d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_266d2c:
    // 0x266d2c: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x266d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
label_266d30:
    // 0x266d30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_266d34:
    // 0x266d34: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x266d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13648)));
label_266d38:
    // 0x266d38: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x266d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_266d3c:
    // 0x266d3c: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x266d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_266d40:
    // 0x266d40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266d44:
    // 0x266d44: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_266d48:
    if (ctx->pc == 0x266D48u) {
        ctx->pc = 0x266D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D44u;
        // 0x266d48: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D4Cu;
        goto label_266d4c;
    }
    ctx->pc = 0x266D44u;
    {
        const bool branch_taken_0x266d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d44) {
            ctx->pc = 0x266D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266D44u;
            // 0x266d48: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266D5Cu;
            goto label_266d5c;
        }
    }
    ctx->pc = 0x266D4Cu;
label_266d4c:
    // 0x266d4c: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x266d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_266d50:
    // 0x266d50: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x266d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_266d54:
    // 0x266d54: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x266d54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_266d58:
    // 0x266d58: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x266d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_266d5c:
    // 0x266d5c: 0x2684e6e0  addiu       $a0, $s4, -0x1920
    ctx->pc = 0x266d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960864));
label_266d60:
    // 0x266d60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_266d64:
    // 0x266d64: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_266d68:
    // 0x266d68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x266d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_266d6c:
    // 0x266d6c: 0xa243002a  sb          $v1, 0x2A($s2)
    ctx->pc = 0x266d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 3));
label_266d70:
    // 0x266d70: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_266d74:
    // 0x266d74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_266d78:
    if (ctx->pc == 0x266D78u) {
        ctx->pc = 0x266D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D74u;
        // 0x266d78: 0x8e530008  lw          $s3, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D7Cu;
        goto label_266d7c;
    }
    ctx->pc = 0x266D74u;
    {
        const bool branch_taken_0x266d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d74) {
            ctx->pc = 0x266D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266D74u;
            // 0x266d78: 0x8e530008  lw          $s3, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266D90u;
            goto label_266d90;
        }
    }
    ctx->pc = 0x266D7Cu;
label_266d7c:
    // 0x266d7c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x266d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_266d80:
    // 0x266d80: 0x40f809  jalr        $v0
label_266d84:
    if (ctx->pc == 0x266D84u) {
        ctx->pc = 0x266D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D80u;
        // 0x266d84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D88u;
        goto label_266d88;
    }
    ctx->pc = 0x266D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x266D88u);
        ctx->pc = 0x266D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D80u;
        // 0x266d84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D80u, 0x266D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266D88u;
label_266d88:
    // 0x266d88: 0x1000007d  b           . + 4 + (0x7D << 2)
label_266d8c:
    if (ctx->pc == 0x266D8Cu) {
        ctx->pc = 0x266D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D88u;
        // 0x266d8c: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266D90u;
        goto label_266d90;
    }
    ctx->pc = 0x266D88u;
    {
        const bool branch_taken_0x266d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D88u;
        // 0x266d8c: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d88) {
            ctx->pc = 0x266F80u;
            goto label_266f80;
        }
    }
    ctx->pc = 0x266D90u;
label_266d90:
    // 0x266d90: 0x8e720018  lw          $s2, 0x18($s3)
    ctx->pc = 0x266d90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_266d94:
    // 0x266d94: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x266d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_266d98:
    // 0x266d98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x266d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_266d9c:
    // 0x266d9c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_266da0:
    if (ctx->pc == 0x266DA0u) {
        ctx->pc = 0x266DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D9Cu;
        // 0x266da0: 0x26230fc8  addiu       $v1, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DA4u;
        goto label_266da4;
    }
    ctx->pc = 0x266D9Cu;
    {
        const bool branch_taken_0x266d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D9Cu;
        // 0x266da0: 0x26230fc8  addiu       $v1, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d9c) {
            ctx->pc = 0x266F7Cu;
            goto label_266f7c;
        }
    }
    ctx->pc = 0x266DA4u;
label_266da4:
    // 0x266da4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x266da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_266da8:
    // 0x266da8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_266dac:
    // 0x266dac: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x266dacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_266db0:
    // 0x266db0: 0xc08994a  jal         func_226528
label_266db4:
    if (ctx->pc == 0x266DB4u) {
        ctx->pc = 0x266DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DB0u;
        // 0x266db4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DB8u;
        goto label_266db8;
    }
    ctx->pc = 0x266DB0u;
    SET_GPR_U32(ctx, 31, 0x266DB8u);
    ctx->pc = 0x266DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DB0u;
    // 0x266db4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x266DB0u, 0x266DB8u)) {
        return;
    }
    ctx->pc = 0x266DB8u;
label_266db8:
    // 0x266db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266dbc:
    // 0x266dbc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x266dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_266dc0:
    // 0x266dc0: 0xc092e7c  jal         func_24B9F0
label_266dc4:
    if (ctx->pc == 0x266DC4u) {
        ctx->pc = 0x266DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DC0u;
        // 0x266dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DC8u;
        goto label_266dc8;
    }
    ctx->pc = 0x266DC0u;
    SET_GPR_U32(ctx, 31, 0x266DC8u);
    ctx->pc = 0x266DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DC0u;
    // 0x266dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x266DC0u, 0x266DC8u)) {
        return;
    }
    ctx->pc = 0x266DC8u;
label_266dc8:
    // 0x266dc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x266dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_266dcc:
    // 0x266dcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x266dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_266dd0:
    // 0x266dd0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x266dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_266dd4:
    // 0x266dd4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_266dd8:
    if (ctx->pc == 0x266DD8u) {
        ctx->pc = 0x266DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DD4u;
        // 0x266dd8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DDCu;
        goto label_266ddc;
    }
    ctx->pc = 0x266DD4u;
    {
        const bool branch_taken_0x266dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DD4u;
        // 0x266dd8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dd4) {
            ctx->pc = 0x266E10u;
            goto label_266e10;
        }
    }
    ctx->pc = 0x266DDCu;
label_266ddc:
    // 0x266ddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x266ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_266de0:
    // 0x266de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266de4:
    // 0x266de4: 0x0  nop
    ctx->pc = 0x266de4u;
    // NOP
label_266de8:
    // 0x266de8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x266de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_266dec:
    // 0x266dec: 0x10000018  b           . + 4 + (0x18 << 2)
label_266df0:
    if (ctx->pc == 0x266DF0u) {
        ctx->pc = 0x266DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DECu;
        // 0x266df0: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x266DF4u;
        goto label_266df4;
    }
    ctx->pc = 0x266DECu;
    {
        const bool branch_taken_0x266dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DECu;
        // 0x266df0: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dec) {
            ctx->pc = 0x266E50u;
            goto label_266e50;
        }
    }
    ctx->pc = 0x266DF4u;
label_266df4:
    // 0x266df4: 0x0  nop
    ctx->pc = 0x266df4u;
    // NOP
label_266df8:
    // 0x266df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x266df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_266dfc:
    // 0x266dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266e00:
    // 0x266e00: 0x0  nop
    ctx->pc = 0x266e00u;
    // NOP
label_266e04:
    // 0x266e04: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x266e04u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_266e08:
    // 0x266e08: 0x10000011  b           . + 4 + (0x11 << 2)
label_266e0c:
    if (ctx->pc == 0x266E0Cu) {
        ctx->pc = 0x266E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E08u;
        // 0x266e0c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E10u;
        goto label_266e10;
    }
    ctx->pc = 0x266E08u;
    {
        const bool branch_taken_0x266e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E08u;
        // 0x266e0c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e08) {
            ctx->pc = 0x266E50u;
            goto label_266e50;
        }
    }
    ctx->pc = 0x266E10u;
label_266e10:
    // 0x266e10: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x266e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266e14:
    // 0x266e14: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_266e18:
    // 0x266e18: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x266e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266e1c:
    // 0x266e1c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x266e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_266e20:
    // 0x266e20: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_266e24:
    // 0x266e24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x266e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_266e28:
    // 0x266e28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x266e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_266e2c:
    // 0x266e2c: 0x46000084  c1          0x84
    ctx->pc = 0x266e2cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_266e30:
    // 0x266e30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x266e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_266e34:
    // 0x266e34: 0x0  nop
    ctx->pc = 0x266e34u;
    // NOP
label_266e38:
    // 0x266e38: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x266e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266e3c:
    // 0x266e3c: 0x0  nop
    ctx->pc = 0x266e3cu;
    // NOP
label_266e40:
    // 0x266e40: 0x4501ffed  bc1t        . + 4 + (-0x13 << 2)
label_266e44:
    if (ctx->pc == 0x266E44u) {
        ctx->pc = 0x266E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E40u;
        // 0x266e44: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E48u;
        goto label_266e48;
    }
    ctx->pc = 0x266E40u;
    {
        const bool branch_taken_0x266e40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x266E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E40u;
        // 0x266e44: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e40) {
            ctx->pc = 0x266DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266df8;
        }
    }
    ctx->pc = 0x266E48u;
label_266e48:
    // 0x266e48: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x266e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_266e4c:
    // 0x266e4c: 0x0  nop
    ctx->pc = 0x266e4cu;
    // NOP
label_266e50:
    // 0x266e50: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x266e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_266e54:
    // 0x266e54: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x266e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_266e58:
    // 0x266e58: 0x2484fcc0  addiu       $a0, $a0, -0x340
    ctx->pc = 0x266e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966464));
label_266e5c:
    // 0x266e5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x266e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_266e60:
    // 0x266e60: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_266e64:
    // 0x266e64: 0x26760064  addiu       $s6, $s3, 0x64
    ctx->pc = 0x266e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_266e68:
    // 0x266e68: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x266e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_266e6c:
    // 0x266e6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x266e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_266e70:
    // 0x266e70: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_266e74:
    // 0x266e74: 0xc09703c  jal         func_25C0F0
label_266e78:
    if (ctx->pc == 0x266E78u) {
        ctx->pc = 0x266E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E74u;
        // 0x266e78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E7Cu;
        goto label_266e7c;
    }
    ctx->pc = 0x266E74u;
    SET_GPR_U32(ctx, 31, 0x266E7Cu);
    ctx->pc = 0x266E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E74u;
    // 0x266e78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C0F0u, 0x266E74u, 0x266E7Cu)) {
        return;
    }
    ctx->pc = 0x266E7Cu;
label_266e7c:
    // 0x266e7c: 0x8e720064  lw          $s2, 0x64($s3)
    ctx->pc = 0x266e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_266e80:
    // 0x266e80: 0x1256003f  beq         $s2, $s6, . + 4 + (0x3F << 2)
label_266e84:
    if (ctx->pc == 0x266E84u) {
        ctx->pc = 0x266E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E80u;
        // 0x266e84: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E88u;
        goto label_266e88;
    }
    ctx->pc = 0x266E80u;
    {
        const bool branch_taken_0x266e80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x266E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E80u;
        // 0x266e84: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e80) {
            ctx->pc = 0x266F80u;
            goto label_266f80;
        }
    }
    ctx->pc = 0x266E88u;
label_266e88:
    // 0x266e88: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x266e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_266e8c:
    // 0x266e8c: 0x0  nop
    ctx->pc = 0x266e8cu;
    // NOP
label_266e90:
    // 0x266e90: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x266e90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_266e94:
    // 0x266e94: 0x24540040  addiu       $s4, $v0, 0x40
    ctx->pc = 0x266e94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_266e98:
    // 0x266e98: 0x12340035  beq         $s1, $s4, . + 4 + (0x35 << 2)
label_266e9c:
    if (ctx->pc == 0x266E9Cu) {
        ctx->pc = 0x266E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E98u;
        // 0x266e9c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EA0u;
        goto label_266ea0;
    }
    ctx->pc = 0x266E98u;
    {
        const bool branch_taken_0x266e98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x266E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E98u;
        // 0x266e9c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e98) {
            ctx->pc = 0x266F70u;
            goto label_266f70;
        }
    }
    ctx->pc = 0x266EA0u;
label_266ea0:
    // 0x266ea0: 0x247e0fc8  addiu       $fp, $v1, 0xFC8
    ctx->pc = 0x266ea0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_266ea4:
    // 0x266ea4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x266ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_266ea8:
    // 0x266ea8: 0x5080002f  beql        $a0, $zero, . + 4 + (0x2F << 2)
label_266eac:
    if (ctx->pc == 0x266EACu) {
        ctx->pc = 0x266EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EA8u;
        // 0x266eac: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EB0u;
        goto label_266eb0;
    }
    ctx->pc = 0x266EA8u;
    {
        const bool branch_taken_0x266ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ea8) {
            ctx->pc = 0x266EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266EA8u;
            // 0x266eac: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266F68u;
            goto label_266f68;
        }
    }
    ctx->pc = 0x266EB0u;
label_266eb0:
    // 0x266eb0: 0x97c5000a  lhu         $a1, 0xA($fp)
    ctx->pc = 0x266eb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
label_266eb4:
    // 0x266eb4: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x266eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_266eb8:
    // 0x266eb8: 0x5045002b  beql        $v0, $a1, . + 4 + (0x2B << 2)
label_266ebc:
    if (ctx->pc == 0x266EBCu) {
        ctx->pc = 0x266EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB8u;
        // 0x266ebc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EC0u;
        goto label_266ec0;
    }
    ctx->pc = 0x266EB8u;
    {
        const bool branch_taken_0x266eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x266eb8) {
            ctx->pc = 0x266EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266EB8u;
            // 0x266ebc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266F68u;
            goto label_266f68;
        }
    }
    ctx->pc = 0x266EC0u;
label_266ec0:
    // 0x266ec0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x266ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_266ec4:
    // 0x266ec4: 0x92620062  lbu         $v0, 0x62($s3)
    ctx->pc = 0x266ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_266ec8:
    // 0x266ec8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x266ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_266ecc:
    // 0x266ecc: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_266ed0:
    if (ctx->pc == 0x266ED0u) {
        ctx->pc = 0x266ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266ECCu;
        // 0x266ed0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266ED4u;
        goto label_266ed4;
    }
    ctx->pc = 0x266ECCu;
    {
        const bool branch_taken_0x266ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ecc) {
            ctx->pc = 0x266ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266ECCu;
            // 0x266ed0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266F68u;
            goto label_266f68;
        }
    }
    ctx->pc = 0x266ED4u;
label_266ed4:
    // 0x266ed4: 0xa485003c  sh          $a1, 0x3C($a0)
    ctx->pc = 0x266ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 5));
label_266ed8:
    // 0x266ed8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x266ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_266edc:
    // 0x266edc: 0xc08994a  jal         func_226528
label_266ee0:
    if (ctx->pc == 0x266EE0u) {
        ctx->pc = 0x266EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EDCu;
        // 0x266ee0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EE4u;
        goto label_266ee4;
    }
    ctx->pc = 0x266EDCu;
    SET_GPR_U32(ctx, 31, 0x266EE4u);
    ctx->pc = 0x266EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266EDCu;
    // 0x266ee0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x266EDCu, 0x266EE4u)) {
        return;
    }
    ctx->pc = 0x266EE4u;
label_266ee4:
    // 0x266ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266ee8:
    // 0x266ee8: 0xc09533c  jal         func_254CF0
label_266eec:
    if (ctx->pc == 0x266EECu) {
        ctx->pc = 0x266EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EE8u;
        // 0x266eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EF0u;
        goto label_266ef0;
    }
    ctx->pc = 0x266EE8u;
    SET_GPR_U32(ctx, 31, 0x266EF0u);
    ctx->pc = 0x266EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266EE8u;
    // 0x266eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x266EE8u, 0x266EF0u)) {
        return;
    }
    ctx->pc = 0x266EF0u;
label_266ef0:
    // 0x266ef0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x266ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_266ef4:
    // 0x266ef4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x266ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266ef8:
    // 0x266ef8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x266ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266efc:
    // 0x266efc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x266efcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_266f00:
    // 0x266f00: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x266f00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266f04:
    // 0x266f04: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x266f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266f08:
    // 0x266f08: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x266f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266f0c:
    // 0x266f0c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x266f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_266f10:
    // 0x266f10: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x266f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_266f14:
    // 0x266f14: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x266f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266f18:
    // 0x266f18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x266f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266f1c:
    // 0x266f1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x266f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_266f20:
    // 0x266f20: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x266f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_266f24:
    // 0x266f24: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x266f24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_266f28:
    // 0x266f28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x266f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_266f2c:
    // 0x266f2c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x266f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_266f30:
    // 0x266f30: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x266f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266f34:
    // 0x266f34: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_266f38:
    // 0x266f38: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x266f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266f3c:
    // 0x266f3c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x266f3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_266f40:
    // 0x266f40: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x266f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_266f44:
    // 0x266f44: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x266f44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_266f48:
    // 0x266f48: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266f48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_266f4c:
    // 0x266f4c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x266f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266f50:
    // 0x266f50: 0x0  nop
    ctx->pc = 0x266f50u;
    // NOP
label_266f54:
    // 0x266f54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_266f58:
    if (ctx->pc == 0x266F58u) {
        ctx->pc = 0x266F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F54u;
        // 0x266f58: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F5Cu;
        goto label_266f5c;
    }
    ctx->pc = 0x266F54u;
    {
        const bool branch_taken_0x266f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266f54) {
            ctx->pc = 0x266F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F54u;
            // 0x266f58: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266F68u;
            goto label_266f68;
        }
    }
    ctx->pc = 0x266F5Cu;
label_266f5c:
    // 0x266f5c: 0xc097f50  jal         func_25FD40
label_266f60:
    if (ctx->pc == 0x266F60u) {
        ctx->pc = 0x266F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F5Cu;
        // 0x266f60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F64u;
        goto label_266f64;
    }
    ctx->pc = 0x266F5Cu;
    SET_GPR_U32(ctx, 31, 0x266F64u);
    ctx->pc = 0x266F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F5Cu;
    // 0x266f60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FD40u, 0x266F5Cu, 0x266F64u)) {
        return;
    }
    ctx->pc = 0x266F64u;
label_266f64:
    // 0x266f64: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x266f64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_266f68:
    // 0x266f68: 0x5634ffcf  bnel        $s1, $s4, . + 4 + (-0x31 << 2)
label_266f6c:
    if (ctx->pc == 0x266F6Cu) {
        ctx->pc = 0x266F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F68u;
        // 0x266f6c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F70u;
        goto label_266f70;
    }
    ctx->pc = 0x266F68u;
    {
        const bool branch_taken_0x266f68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x266f68) {
            ctx->pc = 0x266F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F68u;
            // 0x266f6c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266ea8;
        }
    }
    ctx->pc = 0x266F70u;
label_266f70:
    // 0x266f70: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x266f70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_266f74:
    // 0x266f74: 0x5656ffc6  bnel        $s2, $s6, . + 4 + (-0x3A << 2)
label_266f78:
    if (ctx->pc == 0x266F78u) {
        ctx->pc = 0x266F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F74u;
        // 0x266f78: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F7Cu;
        goto label_266f7c;
    }
    ctx->pc = 0x266F74u;
    {
        const bool branch_taken_0x266f74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x266f74) {
            ctx->pc = 0x266F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F74u;
            // 0x266f78: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266e90;
        }
    }
    ctx->pc = 0x266F7Cu;
label_266f7c:
    // 0x266f7c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x266f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_266f80:
    // 0x266f80: 0xc099c8a  jal         func_267228
label_266f84:
    if (ctx->pc == 0x266F84u) {
        ctx->pc = 0x266F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F80u;
        // 0x266f84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F88u;
        goto label_266f88;
    }
    ctx->pc = 0x266F80u;
    SET_GPR_U32(ctx, 31, 0x266F88u);
    ctx->pc = 0x266F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F80u;
    // 0x266f84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267228u, 0x266F80u, 0x266F88u)) {
        return;
    }
    ctx->pc = 0x266F88u;
label_266f88:
    // 0x266f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266f8c:
    // 0x266f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x266f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266f90:
    // 0x266f90: 0xc08bbd6  jal         func_22EF58
label_266f94:
    if (ctx->pc == 0x266F94u) {
        ctx->pc = 0x266F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F90u;
        // 0x266f94: 0x36e50002  ori         $a1, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F98u;
        goto label_266f98;
    }
    ctx->pc = 0x266F90u;
    SET_GPR_U32(ctx, 31, 0x266F98u);
    ctx->pc = 0x266F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F90u;
    // 0x266f94: 0x36e50002  ori         $a1, $s7, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x266F90u, 0x266F98u)) {
        return;
    }
    ctx->pc = 0x266F98u;
label_266f98:
    // 0x266f98: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x266f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_266f9c:
    // 0x266f9c: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x266f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16684)));
label_266fa0:
    // 0x266fa0: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x266fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_266fa4:
    // 0x266fa4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x266fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_266fa8:
    // 0x266fa8: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x266fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
label_266fac:
    // 0x266fac: 0x344202bc  ori         $v0, $v0, 0x2BC
    ctx->pc = 0x266facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)700);
label_266fb0:
    // 0x266fb0: 0x2e42025  or          $a0, $s7, $a0
    ctx->pc = 0x266fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
label_266fb4:
    // 0x266fb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x266fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_266fb8:
    // 0x266fb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x266fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_266fbc:
    // 0x266fbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x266fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_266fc0:
    // 0x266fc0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x266fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_266fc4:
    // 0x266fc4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x266fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_266fc8:
    // 0x266fc8: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x266fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
label_266fcc:
    // 0x266fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266fd0:
    // 0x266fd0: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x266fd0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_266fd4:
    // 0x266fd4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x266fd4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_266fd8:
    // 0x266fd8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x266fd8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_266fdc:
    // 0x266fdc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x266fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_266fe0:
    // 0x266fe0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x266fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_266fe4:
    // 0x266fe4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x266fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_266fe8:
    // 0x266fe8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_266fec:
    if (ctx->pc == 0x266FECu) {
        ctx->pc = 0x266FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FE8u;
        // 0x266fec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FF0u;
        goto label_266ff0;
    }
    ctx->pc = 0x266FE8u;
    {
        const bool branch_taken_0x266fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FE8u;
        // 0x266fec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fe8) {
            ctx->pc = 0x267038u;
            goto label_267038;
        }
    }
    ctx->pc = 0x266FF0u;
label_266ff0:
    // 0x266ff0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x266ff0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_266ff4:
    // 0x266ff4: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x266ff4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_266ff8:
    // 0x266ff8: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x266ff8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_266ffc:
    // 0x266ffc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x266ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_267000:
    // 0x267000: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x267000u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_267004:
    // 0x267004: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x267004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_267008:
    // 0x267008: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x267008u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_26700c:
    // 0x26700c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x26700cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_267010:
    // 0x267010: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x267010u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_267014:
    // 0x267014: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x267014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_267018:
    // 0x267018: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x267018u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_26701c:
    // 0x26701c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x26701cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_267020:
    // 0x267020: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x267020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_267024:
    // 0x267024: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x267024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_267028:
    // 0x267028: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x267028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_26702c:
    // 0x26702c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_267030:
    if (ctx->pc == 0x267030u) {
        ctx->pc = 0x267030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26702Cu;
        // 0x267030: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267034u;
        goto label_267034;
    }
    ctx->pc = 0x26702Cu;
    {
        const bool branch_taken_0x26702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26702Cu;
        // 0x267030: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26702c) {
            ctx->pc = 0x266FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266ff0;
        }
    }
    ctx->pc = 0x267034u;
label_267034:
    // 0x267034: 0x0  nop
    ctx->pc = 0x267034u;
    // NOP
label_267038:
    // 0x267038: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x267038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_26703c:
    // 0x26703c: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x26703cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 6));
label_267040:
    // 0x267040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267044:
    // 0x267044: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x267044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_267048:
    // 0x267048: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x267048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_26704c:
    // 0x26704c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x26704cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_267050:
    // 0x267050: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x267050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_267054:
    // 0x267054: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x267054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_267058:
    // 0x267058: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x267058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_26705c:
    // 0x26705c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x26705cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_267060:
    // 0x267060: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x267060u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_267064:
    // 0x267064: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x267064u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_267068:
    // 0x267068: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x267068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26706c:
    // 0x26706c: 0x3e00008  jr          $ra
label_267070:
    if (ctx->pc == 0x267070u) {
        ctx->pc = 0x267070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26706Cu;
        // 0x267070: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267074u;
        goto label_267074;
    }
    ctx->pc = 0x26706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26706Cu;
        // 0x267070: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267074u;
label_267074:
    // 0x267074: 0x0  nop
    ctx->pc = 0x267074u;
    // NOP
    ctx->pc = 0x267078u;
}
