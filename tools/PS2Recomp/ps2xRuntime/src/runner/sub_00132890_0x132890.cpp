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

// Function: sub_00132890
// Address: 0x132890 - 0x133068
void sub_00132890_0x132890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132890_0x132890");
#endif

    switch (ctx->pc) {
        case 0x132890u: goto label_132890;
        case 0x132894u: goto label_132894;
        case 0x132898u: goto label_132898;
        case 0x13289cu: goto label_13289c;
        case 0x1328a0u: goto label_1328a0;
        case 0x1328a4u: goto label_1328a4;
        case 0x1328a8u: goto label_1328a8;
        case 0x1328acu: goto label_1328ac;
        case 0x1328b0u: goto label_1328b0;
        case 0x1328b4u: goto label_1328b4;
        case 0x1328b8u: goto label_1328b8;
        case 0x1328bcu: goto label_1328bc;
        case 0x1328c0u: goto label_1328c0;
        case 0x1328c4u: goto label_1328c4;
        case 0x1328c8u: goto label_1328c8;
        case 0x1328ccu: goto label_1328cc;
        case 0x1328d0u: goto label_1328d0;
        case 0x1328d4u: goto label_1328d4;
        case 0x1328d8u: goto label_1328d8;
        case 0x1328dcu: goto label_1328dc;
        case 0x1328e0u: goto label_1328e0;
        case 0x1328e4u: goto label_1328e4;
        case 0x1328e8u: goto label_1328e8;
        case 0x1328ecu: goto label_1328ec;
        case 0x1328f0u: goto label_1328f0;
        case 0x1328f4u: goto label_1328f4;
        case 0x1328f8u: goto label_1328f8;
        case 0x1328fcu: goto label_1328fc;
        case 0x132900u: goto label_132900;
        case 0x132904u: goto label_132904;
        case 0x132908u: goto label_132908;
        case 0x13290cu: goto label_13290c;
        case 0x132910u: goto label_132910;
        case 0x132914u: goto label_132914;
        case 0x132918u: goto label_132918;
        case 0x13291cu: goto label_13291c;
        case 0x132920u: goto label_132920;
        case 0x132924u: goto label_132924;
        case 0x132928u: goto label_132928;
        case 0x13292cu: goto label_13292c;
        case 0x132930u: goto label_132930;
        case 0x132934u: goto label_132934;
        case 0x132938u: goto label_132938;
        case 0x13293cu: goto label_13293c;
        case 0x132940u: goto label_132940;
        case 0x132944u: goto label_132944;
        case 0x132948u: goto label_132948;
        case 0x13294cu: goto label_13294c;
        case 0x132950u: goto label_132950;
        case 0x132954u: goto label_132954;
        case 0x132958u: goto label_132958;
        case 0x13295cu: goto label_13295c;
        case 0x132960u: goto label_132960;
        case 0x132964u: goto label_132964;
        case 0x132968u: goto label_132968;
        case 0x13296cu: goto label_13296c;
        case 0x132970u: goto label_132970;
        case 0x132974u: goto label_132974;
        case 0x132978u: goto label_132978;
        case 0x13297cu: goto label_13297c;
        case 0x132980u: goto label_132980;
        case 0x132984u: goto label_132984;
        case 0x132988u: goto label_132988;
        case 0x13298cu: goto label_13298c;
        case 0x132990u: goto label_132990;
        case 0x132994u: goto label_132994;
        case 0x132998u: goto label_132998;
        case 0x13299cu: goto label_13299c;
        case 0x1329a0u: goto label_1329a0;
        case 0x1329a4u: goto label_1329a4;
        case 0x1329a8u: goto label_1329a8;
        case 0x1329acu: goto label_1329ac;
        case 0x1329b0u: goto label_1329b0;
        case 0x1329b4u: goto label_1329b4;
        case 0x1329b8u: goto label_1329b8;
        case 0x1329bcu: goto label_1329bc;
        case 0x1329c0u: goto label_1329c0;
        case 0x1329c4u: goto label_1329c4;
        case 0x1329c8u: goto label_1329c8;
        case 0x1329ccu: goto label_1329cc;
        case 0x1329d0u: goto label_1329d0;
        case 0x1329d4u: goto label_1329d4;
        case 0x1329d8u: goto label_1329d8;
        case 0x1329dcu: goto label_1329dc;
        case 0x1329e0u: goto label_1329e0;
        case 0x1329e4u: goto label_1329e4;
        case 0x1329e8u: goto label_1329e8;
        case 0x1329ecu: goto label_1329ec;
        case 0x1329f0u: goto label_1329f0;
        case 0x1329f4u: goto label_1329f4;
        case 0x1329f8u: goto label_1329f8;
        case 0x1329fcu: goto label_1329fc;
        case 0x132a00u: goto label_132a00;
        case 0x132a04u: goto label_132a04;
        case 0x132a08u: goto label_132a08;
        case 0x132a0cu: goto label_132a0c;
        case 0x132a10u: goto label_132a10;
        case 0x132a14u: goto label_132a14;
        case 0x132a18u: goto label_132a18;
        case 0x132a1cu: goto label_132a1c;
        case 0x132a20u: goto label_132a20;
        case 0x132a24u: goto label_132a24;
        case 0x132a28u: goto label_132a28;
        case 0x132a2cu: goto label_132a2c;
        case 0x132a30u: goto label_132a30;
        case 0x132a34u: goto label_132a34;
        case 0x132a38u: goto label_132a38;
        case 0x132a3cu: goto label_132a3c;
        case 0x132a40u: goto label_132a40;
        case 0x132a44u: goto label_132a44;
        case 0x132a48u: goto label_132a48;
        case 0x132a4cu: goto label_132a4c;
        case 0x132a50u: goto label_132a50;
        case 0x132a54u: goto label_132a54;
        case 0x132a58u: goto label_132a58;
        case 0x132a5cu: goto label_132a5c;
        case 0x132a60u: goto label_132a60;
        case 0x132a64u: goto label_132a64;
        case 0x132a68u: goto label_132a68;
        case 0x132a6cu: goto label_132a6c;
        case 0x132a70u: goto label_132a70;
        case 0x132a74u: goto label_132a74;
        case 0x132a78u: goto label_132a78;
        case 0x132a7cu: goto label_132a7c;
        case 0x132a80u: goto label_132a80;
        case 0x132a84u: goto label_132a84;
        case 0x132a88u: goto label_132a88;
        case 0x132a8cu: goto label_132a8c;
        case 0x132a90u: goto label_132a90;
        case 0x132a94u: goto label_132a94;
        case 0x132a98u: goto label_132a98;
        case 0x132a9cu: goto label_132a9c;
        case 0x132aa0u: goto label_132aa0;
        case 0x132aa4u: goto label_132aa4;
        case 0x132aa8u: goto label_132aa8;
        case 0x132aacu: goto label_132aac;
        case 0x132ab0u: goto label_132ab0;
        case 0x132ab4u: goto label_132ab4;
        case 0x132ab8u: goto label_132ab8;
        case 0x132abcu: goto label_132abc;
        case 0x132ac0u: goto label_132ac0;
        case 0x132ac4u: goto label_132ac4;
        case 0x132ac8u: goto label_132ac8;
        case 0x132accu: goto label_132acc;
        case 0x132ad0u: goto label_132ad0;
        case 0x132ad4u: goto label_132ad4;
        case 0x132ad8u: goto label_132ad8;
        case 0x132adcu: goto label_132adc;
        case 0x132ae0u: goto label_132ae0;
        case 0x132ae4u: goto label_132ae4;
        case 0x132ae8u: goto label_132ae8;
        case 0x132aecu: goto label_132aec;
        case 0x132af0u: goto label_132af0;
        case 0x132af4u: goto label_132af4;
        case 0x132af8u: goto label_132af8;
        case 0x132afcu: goto label_132afc;
        case 0x132b00u: goto label_132b00;
        case 0x132b04u: goto label_132b04;
        case 0x132b08u: goto label_132b08;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b10u: goto label_132b10;
        case 0x132b14u: goto label_132b14;
        case 0x132b18u: goto label_132b18;
        case 0x132b1cu: goto label_132b1c;
        case 0x132b20u: goto label_132b20;
        case 0x132b24u: goto label_132b24;
        case 0x132b28u: goto label_132b28;
        case 0x132b2cu: goto label_132b2c;
        case 0x132b30u: goto label_132b30;
        case 0x132b34u: goto label_132b34;
        case 0x132b38u: goto label_132b38;
        case 0x132b3cu: goto label_132b3c;
        case 0x132b40u: goto label_132b40;
        case 0x132b44u: goto label_132b44;
        case 0x132b48u: goto label_132b48;
        case 0x132b4cu: goto label_132b4c;
        case 0x132b50u: goto label_132b50;
        case 0x132b54u: goto label_132b54;
        case 0x132b58u: goto label_132b58;
        case 0x132b5cu: goto label_132b5c;
        case 0x132b60u: goto label_132b60;
        case 0x132b64u: goto label_132b64;
        case 0x132b68u: goto label_132b68;
        case 0x132b6cu: goto label_132b6c;
        case 0x132b70u: goto label_132b70;
        case 0x132b74u: goto label_132b74;
        case 0x132b78u: goto label_132b78;
        case 0x132b7cu: goto label_132b7c;
        case 0x132b80u: goto label_132b80;
        case 0x132b84u: goto label_132b84;
        case 0x132b88u: goto label_132b88;
        case 0x132b8cu: goto label_132b8c;
        case 0x132b90u: goto label_132b90;
        case 0x132b94u: goto label_132b94;
        case 0x132b98u: goto label_132b98;
        case 0x132b9cu: goto label_132b9c;
        case 0x132ba0u: goto label_132ba0;
        case 0x132ba4u: goto label_132ba4;
        case 0x132ba8u: goto label_132ba8;
        case 0x132bacu: goto label_132bac;
        case 0x132bb0u: goto label_132bb0;
        case 0x132bb4u: goto label_132bb4;
        case 0x132bb8u: goto label_132bb8;
        case 0x132bbcu: goto label_132bbc;
        case 0x132bc0u: goto label_132bc0;
        case 0x132bc4u: goto label_132bc4;
        case 0x132bc8u: goto label_132bc8;
        case 0x132bccu: goto label_132bcc;
        case 0x132bd0u: goto label_132bd0;
        case 0x132bd4u: goto label_132bd4;
        case 0x132bd8u: goto label_132bd8;
        case 0x132bdcu: goto label_132bdc;
        case 0x132be0u: goto label_132be0;
        case 0x132be4u: goto label_132be4;
        case 0x132be8u: goto label_132be8;
        case 0x132becu: goto label_132bec;
        case 0x132bf0u: goto label_132bf0;
        case 0x132bf4u: goto label_132bf4;
        case 0x132bf8u: goto label_132bf8;
        case 0x132bfcu: goto label_132bfc;
        case 0x132c00u: goto label_132c00;
        case 0x132c04u: goto label_132c04;
        case 0x132c08u: goto label_132c08;
        case 0x132c0cu: goto label_132c0c;
        case 0x132c10u: goto label_132c10;
        case 0x132c14u: goto label_132c14;
        case 0x132c18u: goto label_132c18;
        case 0x132c1cu: goto label_132c1c;
        case 0x132c20u: goto label_132c20;
        case 0x132c24u: goto label_132c24;
        case 0x132c28u: goto label_132c28;
        case 0x132c2cu: goto label_132c2c;
        case 0x132c30u: goto label_132c30;
        case 0x132c34u: goto label_132c34;
        case 0x132c38u: goto label_132c38;
        case 0x132c3cu: goto label_132c3c;
        case 0x132c40u: goto label_132c40;
        case 0x132c44u: goto label_132c44;
        case 0x132c48u: goto label_132c48;
        case 0x132c4cu: goto label_132c4c;
        case 0x132c50u: goto label_132c50;
        case 0x132c54u: goto label_132c54;
        case 0x132c58u: goto label_132c58;
        case 0x132c5cu: goto label_132c5c;
        case 0x132c60u: goto label_132c60;
        case 0x132c64u: goto label_132c64;
        case 0x132c68u: goto label_132c68;
        case 0x132c6cu: goto label_132c6c;
        case 0x132c70u: goto label_132c70;
        case 0x132c74u: goto label_132c74;
        case 0x132c78u: goto label_132c78;
        case 0x132c7cu: goto label_132c7c;
        case 0x132c80u: goto label_132c80;
        case 0x132c84u: goto label_132c84;
        case 0x132c88u: goto label_132c88;
        case 0x132c8cu: goto label_132c8c;
        case 0x132c90u: goto label_132c90;
        case 0x132c94u: goto label_132c94;
        case 0x132c98u: goto label_132c98;
        case 0x132c9cu: goto label_132c9c;
        case 0x132ca0u: goto label_132ca0;
        case 0x132ca4u: goto label_132ca4;
        case 0x132ca8u: goto label_132ca8;
        case 0x132cacu: goto label_132cac;
        case 0x132cb0u: goto label_132cb0;
        case 0x132cb4u: goto label_132cb4;
        case 0x132cb8u: goto label_132cb8;
        case 0x132cbcu: goto label_132cbc;
        case 0x132cc0u: goto label_132cc0;
        case 0x132cc4u: goto label_132cc4;
        case 0x132cc8u: goto label_132cc8;
        case 0x132cccu: goto label_132ccc;
        case 0x132cd0u: goto label_132cd0;
        case 0x132cd4u: goto label_132cd4;
        case 0x132cd8u: goto label_132cd8;
        case 0x132cdcu: goto label_132cdc;
        case 0x132ce0u: goto label_132ce0;
        case 0x132ce4u: goto label_132ce4;
        case 0x132ce8u: goto label_132ce8;
        case 0x132cecu: goto label_132cec;
        case 0x132cf0u: goto label_132cf0;
        case 0x132cf4u: goto label_132cf4;
        case 0x132cf8u: goto label_132cf8;
        case 0x132cfcu: goto label_132cfc;
        case 0x132d00u: goto label_132d00;
        case 0x132d04u: goto label_132d04;
        case 0x132d08u: goto label_132d08;
        case 0x132d0cu: goto label_132d0c;
        case 0x132d10u: goto label_132d10;
        case 0x132d14u: goto label_132d14;
        case 0x132d18u: goto label_132d18;
        case 0x132d1cu: goto label_132d1c;
        case 0x132d20u: goto label_132d20;
        case 0x132d24u: goto label_132d24;
        case 0x132d28u: goto label_132d28;
        case 0x132d2cu: goto label_132d2c;
        case 0x132d30u: goto label_132d30;
        case 0x132d34u: goto label_132d34;
        case 0x132d38u: goto label_132d38;
        case 0x132d3cu: goto label_132d3c;
        case 0x132d40u: goto label_132d40;
        case 0x132d44u: goto label_132d44;
        case 0x132d48u: goto label_132d48;
        case 0x132d4cu: goto label_132d4c;
        case 0x132d50u: goto label_132d50;
        case 0x132d54u: goto label_132d54;
        case 0x132d58u: goto label_132d58;
        case 0x132d5cu: goto label_132d5c;
        case 0x132d60u: goto label_132d60;
        case 0x132d64u: goto label_132d64;
        case 0x132d68u: goto label_132d68;
        case 0x132d6cu: goto label_132d6c;
        case 0x132d70u: goto label_132d70;
        case 0x132d74u: goto label_132d74;
        case 0x132d78u: goto label_132d78;
        case 0x132d7cu: goto label_132d7c;
        case 0x132d80u: goto label_132d80;
        case 0x132d84u: goto label_132d84;
        case 0x132d88u: goto label_132d88;
        case 0x132d8cu: goto label_132d8c;
        case 0x132d90u: goto label_132d90;
        case 0x132d94u: goto label_132d94;
        case 0x132d98u: goto label_132d98;
        case 0x132d9cu: goto label_132d9c;
        case 0x132da0u: goto label_132da0;
        case 0x132da4u: goto label_132da4;
        case 0x132da8u: goto label_132da8;
        case 0x132dacu: goto label_132dac;
        case 0x132db0u: goto label_132db0;
        case 0x132db4u: goto label_132db4;
        case 0x132db8u: goto label_132db8;
        case 0x132dbcu: goto label_132dbc;
        case 0x132dc0u: goto label_132dc0;
        case 0x132dc4u: goto label_132dc4;
        case 0x132dc8u: goto label_132dc8;
        case 0x132dccu: goto label_132dcc;
        case 0x132dd0u: goto label_132dd0;
        case 0x132dd4u: goto label_132dd4;
        case 0x132dd8u: goto label_132dd8;
        case 0x132ddcu: goto label_132ddc;
        case 0x132de0u: goto label_132de0;
        case 0x132de4u: goto label_132de4;
        case 0x132de8u: goto label_132de8;
        case 0x132decu: goto label_132dec;
        case 0x132df0u: goto label_132df0;
        case 0x132df4u: goto label_132df4;
        case 0x132df8u: goto label_132df8;
        case 0x132dfcu: goto label_132dfc;
        case 0x132e00u: goto label_132e00;
        case 0x132e04u: goto label_132e04;
        case 0x132e08u: goto label_132e08;
        case 0x132e0cu: goto label_132e0c;
        case 0x132e10u: goto label_132e10;
        case 0x132e14u: goto label_132e14;
        case 0x132e18u: goto label_132e18;
        case 0x132e1cu: goto label_132e1c;
        case 0x132e20u: goto label_132e20;
        case 0x132e24u: goto label_132e24;
        case 0x132e28u: goto label_132e28;
        case 0x132e2cu: goto label_132e2c;
        case 0x132e30u: goto label_132e30;
        case 0x132e34u: goto label_132e34;
        case 0x132e38u: goto label_132e38;
        case 0x132e3cu: goto label_132e3c;
        case 0x132e40u: goto label_132e40;
        case 0x132e44u: goto label_132e44;
        case 0x132e48u: goto label_132e48;
        case 0x132e4cu: goto label_132e4c;
        case 0x132e50u: goto label_132e50;
        case 0x132e54u: goto label_132e54;
        case 0x132e58u: goto label_132e58;
        case 0x132e5cu: goto label_132e5c;
        case 0x132e60u: goto label_132e60;
        case 0x132e64u: goto label_132e64;
        case 0x132e68u: goto label_132e68;
        case 0x132e6cu: goto label_132e6c;
        case 0x132e70u: goto label_132e70;
        case 0x132e74u: goto label_132e74;
        case 0x132e78u: goto label_132e78;
        case 0x132e7cu: goto label_132e7c;
        case 0x132e80u: goto label_132e80;
        case 0x132e84u: goto label_132e84;
        case 0x132e88u: goto label_132e88;
        case 0x132e8cu: goto label_132e8c;
        case 0x132e90u: goto label_132e90;
        case 0x132e94u: goto label_132e94;
        case 0x132e98u: goto label_132e98;
        case 0x132e9cu: goto label_132e9c;
        case 0x132ea0u: goto label_132ea0;
        case 0x132ea4u: goto label_132ea4;
        case 0x132ea8u: goto label_132ea8;
        case 0x132eacu: goto label_132eac;
        case 0x132eb0u: goto label_132eb0;
        case 0x132eb4u: goto label_132eb4;
        case 0x132eb8u: goto label_132eb8;
        case 0x132ebcu: goto label_132ebc;
        case 0x132ec0u: goto label_132ec0;
        case 0x132ec4u: goto label_132ec4;
        case 0x132ec8u: goto label_132ec8;
        case 0x132eccu: goto label_132ecc;
        case 0x132ed0u: goto label_132ed0;
        case 0x132ed4u: goto label_132ed4;
        case 0x132ed8u: goto label_132ed8;
        case 0x132edcu: goto label_132edc;
        case 0x132ee0u: goto label_132ee0;
        case 0x132ee4u: goto label_132ee4;
        case 0x132ee8u: goto label_132ee8;
        case 0x132eecu: goto label_132eec;
        case 0x132ef0u: goto label_132ef0;
        case 0x132ef4u: goto label_132ef4;
        case 0x132ef8u: goto label_132ef8;
        case 0x132efcu: goto label_132efc;
        case 0x132f00u: goto label_132f00;
        case 0x132f04u: goto label_132f04;
        case 0x132f08u: goto label_132f08;
        case 0x132f0cu: goto label_132f0c;
        case 0x132f10u: goto label_132f10;
        case 0x132f14u: goto label_132f14;
        case 0x132f18u: goto label_132f18;
        case 0x132f1cu: goto label_132f1c;
        case 0x132f20u: goto label_132f20;
        case 0x132f24u: goto label_132f24;
        case 0x132f28u: goto label_132f28;
        case 0x132f2cu: goto label_132f2c;
        case 0x132f30u: goto label_132f30;
        case 0x132f34u: goto label_132f34;
        case 0x132f38u: goto label_132f38;
        case 0x132f3cu: goto label_132f3c;
        case 0x132f40u: goto label_132f40;
        case 0x132f44u: goto label_132f44;
        case 0x132f48u: goto label_132f48;
        case 0x132f4cu: goto label_132f4c;
        case 0x132f50u: goto label_132f50;
        case 0x132f54u: goto label_132f54;
        case 0x132f58u: goto label_132f58;
        case 0x132f5cu: goto label_132f5c;
        case 0x132f60u: goto label_132f60;
        case 0x132f64u: goto label_132f64;
        case 0x132f68u: goto label_132f68;
        case 0x132f6cu: goto label_132f6c;
        case 0x132f70u: goto label_132f70;
        case 0x132f74u: goto label_132f74;
        case 0x132f78u: goto label_132f78;
        case 0x132f7cu: goto label_132f7c;
        case 0x132f80u: goto label_132f80;
        case 0x132f84u: goto label_132f84;
        case 0x132f88u: goto label_132f88;
        case 0x132f8cu: goto label_132f8c;
        case 0x132f90u: goto label_132f90;
        case 0x132f94u: goto label_132f94;
        case 0x132f98u: goto label_132f98;
        case 0x132f9cu: goto label_132f9c;
        case 0x132fa0u: goto label_132fa0;
        case 0x132fa4u: goto label_132fa4;
        case 0x132fa8u: goto label_132fa8;
        case 0x132facu: goto label_132fac;
        case 0x132fb0u: goto label_132fb0;
        case 0x132fb4u: goto label_132fb4;
        case 0x132fb8u: goto label_132fb8;
        case 0x132fbcu: goto label_132fbc;
        case 0x132fc0u: goto label_132fc0;
        case 0x132fc4u: goto label_132fc4;
        case 0x132fc8u: goto label_132fc8;
        case 0x132fccu: goto label_132fcc;
        case 0x132fd0u: goto label_132fd0;
        case 0x132fd4u: goto label_132fd4;
        case 0x132fd8u: goto label_132fd8;
        case 0x132fdcu: goto label_132fdc;
        case 0x132fe0u: goto label_132fe0;
        case 0x132fe4u: goto label_132fe4;
        case 0x132fe8u: goto label_132fe8;
        case 0x132fecu: goto label_132fec;
        case 0x132ff0u: goto label_132ff0;
        case 0x132ff4u: goto label_132ff4;
        case 0x132ff8u: goto label_132ff8;
        case 0x132ffcu: goto label_132ffc;
        case 0x133000u: goto label_133000;
        case 0x133004u: goto label_133004;
        case 0x133008u: goto label_133008;
        case 0x13300cu: goto label_13300c;
        case 0x133010u: goto label_133010;
        case 0x133014u: goto label_133014;
        case 0x133018u: goto label_133018;
        case 0x13301cu: goto label_13301c;
        case 0x133020u: goto label_133020;
        case 0x133024u: goto label_133024;
        case 0x133028u: goto label_133028;
        case 0x13302cu: goto label_13302c;
        case 0x133030u: goto label_133030;
        case 0x133034u: goto label_133034;
        case 0x133038u: goto label_133038;
        case 0x13303cu: goto label_13303c;
        case 0x133040u: goto label_133040;
        case 0x133044u: goto label_133044;
        case 0x133048u: goto label_133048;
        case 0x13304cu: goto label_13304c;
        case 0x133050u: goto label_133050;
        case 0x133054u: goto label_133054;
        case 0x133058u: goto label_133058;
        case 0x13305cu: goto label_13305c;
        case 0x133060u: goto label_133060;
        case 0x133064u: goto label_133064;
        default: break;
    }

    ctx->pc = 0x132890u;

label_132890:
    // 0x132890: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x132890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_132894:
    // 0x132894: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x132894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_132898:
    // 0x132898: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x132898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_13289c:
    // 0x13289c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13289cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1328a0:
    // 0x1328a0: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1328a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_1328a4:
    // 0x1328a4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1328a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1328a8:
    // 0x1328a8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1328a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_1328ac:
    // 0x1328ac: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1328acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_1328b0:
    // 0x1328b0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1328b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_1328b4:
    // 0x1328b4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1328b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_1328b8:
    // 0x1328b8: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1328b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_1328bc:
    // 0x1328bc: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x1328bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_1328c0:
    // 0x1328c0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1328c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1328c4:
    // 0x1328c4: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x1328c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1328c8:
    // 0x1328c8: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x1328c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1328cc:
    // 0x1328cc: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x1328ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1328d0:
    // 0x1328d0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x1328d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1328d4:
    // 0x1328d4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1328d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1328d8:
    // 0x1328d8: 0x8e021868  lw          $v0, 0x1868($s0)
    ctx->pc = 0x1328d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6248)));
label_1328dc:
    // 0x1328dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1328e0:
    if (ctx->pc == 0x1328E0u) {
        ctx->pc = 0x1328E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328DCu;
        // 0x1328e0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1328E4u;
        goto label_1328e4;
    }
    ctx->pc = 0x1328DCu;
    {
        const bool branch_taken_0x1328dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1328E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328DCu;
        // 0x1328e0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328dc) {
            ctx->pc = 0x1328ECu;
            goto label_1328ec;
        }
    }
    ctx->pc = 0x1328E4u;
label_1328e4:
    // 0x1328e4: 0xae001538  sw          $zero, 0x1538($s0)
    ctx->pc = 0x1328e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5432), GPR_U32(ctx, 0));
label_1328e8:
    // 0x1328e8: 0xae001868  sw          $zero, 0x1868($s0)
    ctx->pc = 0x1328e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6248), GPR_U32(ctx, 0));
label_1328ec:
    // 0x1328ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_1328f0:
    // 0x1328f0: 0xae001534  sw          $zero, 0x1534($s0)
    ctx->pc = 0x1328f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5428), GPR_U32(ctx, 0));
label_1328f4:
    // 0x1328f4: 0xc440de0c  lwc1        $f0, -0x21F4($v0)
    ctx->pc = 0x1328f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1328f8:
    // 0x1328f8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1328f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1328fc:
    // 0x1328fc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1328fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_132900:
    // 0x132900: 0xc6171944  lwc1        $f23, 0x1944($s0)
    ctx->pc = 0x132900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_132904:
    // 0x132904: 0xe600152c  swc1        $f0, 0x152C($s0)
    ctx->pc = 0x132904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5420), bits); }
label_132908:
    // 0x132908: 0xe6001530  swc1        $f0, 0x1530($s0)
    ctx->pc = 0x132908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5424), bits); }
label_13290c:
    // 0x13290c: 0x8c628b2c  lw          $v0, -0x74D4($v1)
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937388)));
label_132910:
    // 0x132910: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x132910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_132914:
    // 0x132914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_132918:
    if (ctx->pc == 0x132918u) {
        ctx->pc = 0x132918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132914u;
        // 0x132918: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13291Cu;
        goto label_13291c;
    }
    ctx->pc = 0x132914u;
    {
        const bool branch_taken_0x132914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132914u;
        // 0x132918: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132914) {
            ctx->pc = 0x132930u;
            goto label_132930;
        }
    }
    ctx->pc = 0x13291Cu;
label_13291c:
    // 0x13291c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x13291cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_132920:
    // 0x132920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x132920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_132924:
    // 0x132924: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
label_132928:
    if (ctx->pc == 0x132928u) {
        ctx->pc = 0x132928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132924u;
        // 0x132928: 0xc6171948  lwc1        $f23, 0x1948($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13292Cu;
        goto label_13292c;
    }
    ctx->pc = 0x132924u;
    {
        const bool branch_taken_0x132924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132924) {
            ctx->pc = 0x132928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132924u;
            // 0x132928: 0xc6171948  lwc1        $f23, 0x1948($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x132930u;
            goto label_132930;
        }
    }
    ctx->pc = 0x13292Cu;
label_13292c:
    // 0x13292c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x13292cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_132930:
    // 0x132930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x132930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_132934:
    // 0x132934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132938:
    // 0x132938: 0xc0c493d  jal         func_3124F4
label_13293c:
    if (ctx->pc == 0x13293Cu) {
        ctx->pc = 0x13293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132938u;
        // 0x13293c: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132940u;
        goto label_132940;
    }
    ctx->pc = 0x132938u;
    SET_GPR_U32(ctx, 31, 0x132940u);
    ctx->pc = 0x13293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132938u;
    // 0x13293c: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x132938u, 0x132940u)) {
        return;
    }
    ctx->pc = 0x132940u;
label_132940:
    // 0x132940: 0xc0691d8  jal         func_1A4760
label_132944:
    if (ctx->pc == 0x132944u) {
        ctx->pc = 0x132948u;
        goto label_132948;
    }
    ctx->pc = 0x132940u;
    SET_GPR_U32(ctx, 31, 0x132948u);
    ctx->pc = 0x1A4760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4760u, 0x132940u, 0x132948u)) {
        return;
    }
    ctx->pc = 0x132948u;
label_132948:
    // 0x132948: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_13294c:
    if (ctx->pc == 0x13294Cu) {
        ctx->pc = 0x13294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132948u;
        // 0x13294c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132950u;
        goto label_132950;
    }
    ctx->pc = 0x132948u;
    {
        const bool branch_taken_0x132948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132948u;
        // 0x13294c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132948) {
            ctx->pc = 0x13299Cu;
            goto label_13299c;
        }
    }
    ctx->pc = 0x132950u;
label_132950:
    // 0x132950: 0xc0691ec  jal         func_1A47B0
label_132954:
    if (ctx->pc == 0x132954u) {
        ctx->pc = 0x132958u;
        goto label_132958;
    }
    ctx->pc = 0x132950u;
    SET_GPR_U32(ctx, 31, 0x132958u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x132950u, 0x132958u)) {
        return;
    }
    ctx->pc = 0x132958u;
label_132958:
    // 0x132958: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13295c:
    // 0x13295c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13295cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132960:
    // 0x132960: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x132960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_132964:
    // 0x132964: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_132968:
    if (ctx->pc == 0x132968u) {
        ctx->pc = 0x132968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132964u;
        // 0x132968: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13296Cu;
        goto label_13296c;
    }
    ctx->pc = 0x132964u;
    {
        const bool branch_taken_0x132964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132964u;
        // 0x132968: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132964) {
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x13296Cu;
label_13296c:
    // 0x13296c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x13296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_132970:
    // 0x132970: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x132970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_132974:
    // 0x132974: 0x0  nop
    ctx->pc = 0x132974u;
    // NOP
label_132978:
    // 0x132978: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x132978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13297c:
    // 0x13297c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_132980:
    // 0x132980: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x132980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_132984:
    // 0x132984: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x132984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_132988:
    // 0x132988: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x132988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13298c:
    // 0x13298c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x13298cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_132990:
    // 0x132990: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_132994:
    if (ctx->pc == 0x132994u) {
        ctx->pc = 0x132994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132990u;
        // 0x132994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132998u;
        goto label_132998;
    }
    ctx->pc = 0x132990u;
    {
        const bool branch_taken_0x132990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132990u;
        // 0x132994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132990) {
            ctx->pc = 0x132978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132978;
        }
    }
    ctx->pc = 0x132998u;
label_132998:
    // 0x132998: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x132998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13299c:
    // 0x13299c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1329a0:
    // 0x1329a0: 0x1062009c  beq         $v1, $v0, . + 4 + (0x9C << 2)
label_1329a4:
    if (ctx->pc == 0x1329A4u) {
        ctx->pc = 0x1329A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329A0u;
        // 0x1329a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1329A8u;
        goto label_1329a8;
    }
    ctx->pc = 0x1329A0u;
    {
        const bool branch_taken_0x1329a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1329A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329A0u;
        // 0x1329a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329a0) {
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x1329A8u;
label_1329a8:
    // 0x1329a8: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x1329a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1329ac:
    // 0x1329ac: 0x0  nop
    ctx->pc = 0x1329acu;
    // NOP
label_1329b0:
    // 0x1329b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1329b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1329b4:
    // 0x1329b4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1329b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1329b8:
    // 0x1329b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1329b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1329bc:
    // 0x1329bc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1329bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1329c0:
    // 0x1329c0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1329c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1329c4:
    // 0x1329c4: 0x84650160  lh          $a1, 0x160($v1)
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_1329c8:
    // 0x1329c8: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x1329c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_1329cc:
    // 0x1329cc: 0x40f809  jalr        $v0
label_1329d0:
    if (ctx->pc == 0x1329D0u) {
        ctx->pc = 0x1329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329CCu;
        // 0x1329d0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1329D4u;
        goto label_1329d4;
    }
    ctx->pc = 0x1329CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1329D4u);
        ctx->pc = 0x1329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329CCu;
        // 0x1329d0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1329CCu, 0x1329D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1329D4u;
label_1329d4:
    // 0x1329d4: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_1329d8:
    if (ctx->pc == 0x1329D8u) {
        ctx->pc = 0x1329D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329D4u;
        // 0x1329d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1329DCu;
        goto label_1329dc;
    }
    ctx->pc = 0x1329D4u;
    {
        const bool branch_taken_0x1329d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329D4u;
        // 0x1329d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329d4) {
            ctx->pc = 0x132BECu;
            goto label_132bec;
        }
    }
    ctx->pc = 0x1329DCu;
label_1329dc:
    // 0x1329dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1329e0:
    // 0x1329e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1329e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1329e4:
    // 0x1329e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1329e8:
    // 0x1329e8: 0x8c432d1c  lw          $v1, 0x2D1C($v0)
    ctx->pc = 0x1329e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11548)));
label_1329ec:
    // 0x1329ec: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
label_1329f0:
    if (ctx->pc == 0x1329F0u) {
        ctx->pc = 0x1329F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329ECu;
        // 0x1329f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1329F4u;
        goto label_1329f4;
    }
    ctx->pc = 0x1329ECu;
    {
        const bool branch_taken_0x1329ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329ECu;
        // 0x1329f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329ec) {
            ctx->pc = 0x132BF0u;
            goto label_132bf0;
        }
    }
    ctx->pc = 0x1329F4u;
label_1329f4:
    // 0x1329f4: 0xc04f0cc  jal         func_13C330
label_1329f8:
    if (ctx->pc == 0x1329F8u) {
        ctx->pc = 0x1329F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329F4u;
        // 0x1329f8: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1329FCu;
        goto label_1329fc;
    }
    ctx->pc = 0x1329F4u;
    SET_GPR_U32(ctx, 31, 0x1329FCu);
    ctx->pc = 0x1329F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329F4u;
    // 0x1329f8: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1329F4u, 0x1329FCu)) {
        return;
    }
    ctx->pc = 0x1329FCu;
label_1329fc:
    // 0x1329fc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1329fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_132a00:
    // 0x132a00: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x132a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_132a04:
    // 0x132a04: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x132a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_132a08:
    // 0x132a08: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x132a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132a0c:
    // 0x132a0c: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x132a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132a10:
    // 0x132a10: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x132a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_132a14:
    // 0x132a14: 0xc04f0cc  jal         func_13C330
label_132a18:
    if (ctx->pc == 0x132A18u) {
        ctx->pc = 0x132A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A14u;
        // 0x132a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132A1Cu;
        goto label_132a1c;
    }
    ctx->pc = 0x132A14u;
    SET_GPR_U32(ctx, 31, 0x132A1Cu);
    ctx->pc = 0x132A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A14u;
    // 0x132a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x132A14u, 0x132A1Cu)) {
        return;
    }
    ctx->pc = 0x132A1Cu;
label_132a1c:
    // 0x132a1c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x132a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_132a20:
    // 0x132a20: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x132a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_132a24:
    // 0x132a24: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x132a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_132a28:
    // 0x132a28: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x132a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132a2c:
    // 0x132a2c: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x132a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132a30:
    // 0x132a30: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x132a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_132a34:
    // 0x132a34: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x132a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132a38:
    // 0x132a38: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x132a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132a3c:
    // 0x132a3c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x132a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132a40:
    // 0x132a40: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x132a40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_132a44:
    // 0x132a44: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x132a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_132a48:
    // 0x132a48: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x132a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132a4c:
    // 0x132a4c: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x132a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132a50:
    // 0x132a50: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x132a50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_132a54:
    // 0x132a54: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x132a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_132a58:
    // 0x132a58: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x132a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_132a5c:
    // 0x132a5c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x132a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_132a60:
    // 0x132a60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x132a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_132a64:
    // 0x132a64: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x132a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_132a68:
    // 0x132a68: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x132a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_132a6c:
    // 0x132a6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x132a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_132a70:
    // 0x132a70: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x132a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132a74:
    // 0x132a74: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x132a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132a78:
    // 0x132a78: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x132a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_132a7c:
    // 0x132a7c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x132a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132a80:
    // 0x132a80: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x132a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132a84:
    // 0x132a84: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x132a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_132a88:
    // 0x132a88: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x132a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132a8c:
    // 0x132a8c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x132a8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_132a90:
    // 0x132a90: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x132a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_132a94:
    // 0x132a94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x132a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_132a98:
    // 0x132a98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132a9c:
    // 0x132a9c: 0x0  nop
    ctx->pc = 0x132a9cu;
    // NOP
label_132aa0:
    // 0x132aa0: 0x0  nop
    ctx->pc = 0x132aa0u;
    // NOP
label_132aa4:
    // 0x132aa4: 0x46000504  c1          0x504
    ctx->pc = 0x132aa4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_132aa8:
    // 0x132aa8: 0xc600152c  lwc1        $f0, 0x152C($s0)
    ctx->pc = 0x132aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132aac:
    // 0x132aac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x132aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132ab0:
    // 0x132ab0: 0x0  nop
    ctx->pc = 0x132ab0u;
    // NOP
label_132ab4:
    // 0x132ab4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_132ab8:
    if (ctx->pc == 0x132AB8u) {
        ctx->pc = 0x132AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AB4u;
        // 0x132ab8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132ABCu;
        goto label_132abc;
    }
    ctx->pc = 0x132AB4u;
    {
        const bool branch_taken_0x132ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AB4u;
        // 0x132ab8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ab4) {
            ctx->pc = 0x132AD8u;
            goto label_132ad8;
        }
    }
    ctx->pc = 0x132ABCu;
label_132abc:
    // 0x132abc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132ac0:
    // 0x132ac0: 0xe614152c  swc1        $f20, 0x152C($s0)
    ctx->pc = 0x132ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5420), bits); }
label_132ac4:
    // 0x132ac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132ac8:
    // 0x132ac8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x132ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_132acc:
    // 0x132acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x132accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132ad0:
    // 0x132ad0: 0xae031534  sw          $v1, 0x1534($s0)
    ctx->pc = 0x132ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5428), GPR_U32(ctx, 3));
label_132ad4:
    // 0x132ad4: 0x0  nop
    ctx->pc = 0x132ad4u;
    // NOP
label_132ad8:
    // 0x132ad8: 0x4617a036  c.le.s      $f20, $f23
    ctx->pc = 0x132ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132adc:
    // 0x132adc: 0x0  nop
    ctx->pc = 0x132adcu;
    // NOP
label_132ae0:
    // 0x132ae0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_132ae4:
    if (ctx->pc == 0x132AE4u) {
        ctx->pc = 0x132AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AE0u;
        // 0x132ae4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132AE8u;
        goto label_132ae8;
    }
    ctx->pc = 0x132AE0u;
    {
        const bool branch_taken_0x132ae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x132AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AE0u;
        // 0x132ae4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ae0) {
            ctx->pc = 0x132AECu;
            goto label_132aec;
        }
    }
    ctx->pc = 0x132AE8u;
label_132ae8:
    // 0x132ae8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x132ae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132aec:
    // 0x132aec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x132aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_132af0:
    // 0x132af0: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x132af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_132af4:
    // 0x132af4: 0xc05e396  jal         func_178E58
label_132af8:
    if (ctx->pc == 0x132AF8u) {
        ctx->pc = 0x132AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AF4u;
        // 0x132af8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132AFCu;
        goto label_132afc;
    }
    ctx->pc = 0x132AF4u;
    SET_GPR_U32(ctx, 31, 0x132AFCu);
    ctx->pc = 0x132AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AF4u;
    // 0x132af8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x132AF4u, 0x132AFCu)) {
        return;
    }
    ctx->pc = 0x132AFCu;
label_132afc:
    // 0x132afc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x132afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132b00:
    // 0x132b00: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_132b04:
    // 0x132b04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132b08:
    // 0x132b08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132b0c:
    // 0x132b0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132b10:
    // 0x132b10: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_132b14:
    // 0x132b14: 0xc062018  jal         func_188060
label_132b18:
    if (ctx->pc == 0x132B18u) {
        ctx->pc = 0x132B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B14u;
        // 0x132b18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132B1Cu;
        goto label_132b1c;
    }
    ctx->pc = 0x132B14u;
    SET_GPR_U32(ctx, 31, 0x132B1Cu);
    ctx->pc = 0x132B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B14u;
    // 0x132b18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188060u, 0x132B14u, 0x132B1Cu)) {
        return;
    }
    ctx->pc = 0x132B1Cu;
label_132b1c:
    // 0x132b1c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x132b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132b20:
    // 0x132b20: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x132b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_132b24:
    // 0x132b24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x132b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_132b28:
    // 0x132b28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x132b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_132b2c:
    // 0x132b2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x132b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_132b30:
    // 0x132b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132b34:
    // 0x132b34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132b38:
    // 0x132b38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132b3c:
    // 0x132b3c: 0xc04f0c2  jal         func_13C308
label_132b40:
    if (ctx->pc == 0x132B40u) {
        ctx->pc = 0x132B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B3Cu;
        // 0x132b40: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132B44u;
        goto label_132b44;
    }
    ctx->pc = 0x132B3Cu;
    SET_GPR_U32(ctx, 31, 0x132B44u);
    ctx->pc = 0x132B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B3Cu;
    // 0x132b40: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x132B3Cu, 0x132B44u)) {
        return;
    }
    ctx->pc = 0x132B44u;
label_132b44:
    // 0x132b44: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x132b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132b48:
    // 0x132b48: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_132b4c:
    // 0x132b4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x132b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_132b50:
    // 0x132b50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x132b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_132b54:
    // 0x132b54: 0x0  nop
    ctx->pc = 0x132b54u;
    // NOP
label_132b58:
    // 0x132b58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132b5c:
    // 0x132b5c: 0x12c00023  beqz        $s6, . + 4 + (0x23 << 2)
label_132b60:
    if (ctx->pc == 0x132B60u) {
        ctx->pc = 0x132B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B5Cu;
        // 0x132b60: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132B64u;
        goto label_132b64;
    }
    ctx->pc = 0x132B5Cu;
    {
        const bool branch_taken_0x132b5c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B5Cu;
        // 0x132b60: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b5c) {
            ctx->pc = 0x132BECu;
            goto label_132bec;
        }
    }
    ctx->pc = 0x132B64u;
label_132b64:
    // 0x132b64: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
label_132b68:
    if (ctx->pc == 0x132B68u) {
        ctx->pc = 0x132B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B64u;
        // 0x132b68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132B6Cu;
        goto label_132b6c;
    }
    ctx->pc = 0x132B64u;
    {
        const bool branch_taken_0x132b64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B64u;
        // 0x132b68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b64) {
            ctx->pc = 0x132BECu;
            goto label_132bec;
        }
    }
    ctx->pc = 0x132B6Cu;
label_132b6c:
    // 0x132b6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132b70:
    // 0x132b70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x132b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_132b74:
    // 0x132b74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x132b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132b78:
    // 0x132b78: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x132b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_132b7c:
    // 0x132b7c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x132b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_132b80:
    // 0x132b80: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x132b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_132b84:
    // 0x132b84: 0x40f809  jalr        $v0
label_132b88:
    if (ctx->pc == 0x132B88u) {
        ctx->pc = 0x132B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B84u;
        // 0x132b88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132B8Cu;
        goto label_132b8c;
    }
    ctx->pc = 0x132B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132B8Cu);
        ctx->pc = 0x132B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B84u;
        // 0x132b88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B84u, 0x132B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132B8Cu;
label_132b8c:
    // 0x132b8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_132b90:
    if (ctx->pc == 0x132B90u) {
        ctx->pc = 0x132B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B8Cu;
        // 0x132b90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132B94u;
        goto label_132b94;
    }
    ctx->pc = 0x132B8Cu;
    {
        const bool branch_taken_0x132b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B8Cu;
        // 0x132b90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b8c) {
            ctx->pc = 0x132BACu;
            goto label_132bac;
        }
    }
    ctx->pc = 0x132B94u;
label_132b94:
    // 0x132b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132b98:
    // 0x132b98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x132b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132b9c:
    // 0x132b9c: 0xc086156  jal         func_218558
label_132ba0:
    if (ctx->pc == 0x132BA0u) {
        ctx->pc = 0x132BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B9Cu;
        // 0x132ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132BA4u;
        goto label_132ba4;
    }
    ctx->pc = 0x132B9Cu;
    SET_GPR_U32(ctx, 31, 0x132BA4u);
    ctx->pc = 0x132BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B9Cu;
    // 0x132ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x132B9Cu, 0x132BA4u)) {
        return;
    }
    ctx->pc = 0x132BA4u;
label_132ba4:
    // 0x132ba4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_132ba8:
    if (ctx->pc == 0x132BA8u) {
        ctx->pc = 0x132BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BA4u;
        // 0x132ba8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132BACu;
        goto label_132bac;
    }
    ctx->pc = 0x132BA4u;
    {
        const bool branch_taken_0x132ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BA4u;
        // 0x132ba8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ba4) {
            ctx->pc = 0x132BF0u;
            goto label_132bf0;
        }
    }
    ctx->pc = 0x132BACu;
label_132bac:
    // 0x132bac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132bb0:
    // 0x132bb0: 0x8e031538  lw          $v1, 0x1538($s0)
    ctx->pc = 0x132bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
label_132bb4:
    // 0x132bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132bb8:
    // 0x132bb8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x132bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_132bbc:
    // 0x132bbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132bc0:
    // 0x132bc0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_132bc4:
    if (ctx->pc == 0x132BC4u) {
        ctx->pc = 0x132BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BC0u;
        // 0x132bc4: 0xc6001530  lwc1        $f0, 0x1530($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132BC8u;
        goto label_132bc8;
    }
    ctx->pc = 0x132BC0u;
    {
        const bool branch_taken_0x132bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132bc0) {
            ctx->pc = 0x132BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BC0u;
            // 0x132bc4: 0xc6001530  lwc1        $f0, 0x1530($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x132BD4u;
            goto label_132bd4;
        }
    }
    ctx->pc = 0x132BC8u;
label_132bc8:
    // 0x132bc8: 0xe6141530  swc1        $f20, 0x1530($s0)
    ctx->pc = 0x132bc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5424), bits); }
label_132bcc:
    // 0x132bcc: 0x10000007  b           . + 4 + (0x7 << 2)
label_132bd0:
    if (ctx->pc == 0x132BD0u) {
        ctx->pc = 0x132BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BCCu;
        // 0x132bd0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132BD4u;
        goto label_132bd4;
    }
    ctx->pc = 0x132BCCu;
    {
        const bool branch_taken_0x132bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BCCu;
        // 0x132bd0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bcc) {
            ctx->pc = 0x132BECu;
            goto label_132bec;
        }
    }
    ctx->pc = 0x132BD4u;
label_132bd4:
    // 0x132bd4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x132bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132bd8:
    // 0x132bd8: 0x0  nop
    ctx->pc = 0x132bd8u;
    // NOP
label_132bdc:
    // 0x132bdc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_132be0:
    if (ctx->pc == 0x132BE0u) {
        ctx->pc = 0x132BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BDCu;
        // 0x132be0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132BE4u;
        goto label_132be4;
    }
    ctx->pc = 0x132BDCu;
    {
        const bool branch_taken_0x132bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BDCu;
        // 0x132be0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bdc) {
            ctx->pc = 0x132BF0u;
            goto label_132bf0;
        }
    }
    ctx->pc = 0x132BE4u;
label_132be4:
    // 0x132be4: 0xe6151530  swc1        $f21, 0x1530($s0)
    ctx->pc = 0x132be4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5424), bits); }
label_132be8:
    // 0x132be8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x132be8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132bec:
    // 0x132bec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x132becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132bf0:
    // 0x132bf0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x132bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_132bf4:
    // 0x132bf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x132bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_132bf8:
    // 0x132bf8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_132bfc:
    if (ctx->pc == 0x132BFCu) {
        ctx->pc = 0x132BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BF8u;
        // 0x132bfc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C00u;
        goto label_132c00;
    }
    ctx->pc = 0x132BF8u;
    {
        const bool branch_taken_0x132bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BF8u;
        // 0x132bfc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bf8) {
            ctx->pc = 0x132C04u;
            goto label_132c04;
        }
    }
    ctx->pc = 0x132C00u;
label_132c00:
    // 0x132c00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x132c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_132c04:
    // 0x132c04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x132c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132c08:
    // 0x132c08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x132c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_132c0c:
    // 0x132c0c: 0x1462ff68  bne         $v1, $v0, . + 4 + (-0x98 << 2)
label_132c10:
    if (ctx->pc == 0x132C10u) {
        ctx->pc = 0x132C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C0Cu;
        // 0x132c10: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C14u;
        goto label_132c14;
    }
    ctx->pc = 0x132C0Cu;
    {
        const bool branch_taken_0x132c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x132C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C0Cu;
        // 0x132c10: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c0c) {
            ctx->pc = 0x1329B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1329b0;
        }
    }
    ctx->pc = 0x132C14u;
label_132c14:
    // 0x132c14: 0x52c0000e  beql        $s6, $zero, . + 4 + (0xE << 2)
label_132c18:
    if (ctx->pc == 0x132C18u) {
        ctx->pc = 0x132C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C14u;
        // 0x132c18: 0x8e021bbc  lw          $v0, 0x1BBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C1Cu;
        goto label_132c1c;
    }
    ctx->pc = 0x132C14u;
    {
        const bool branch_taken_0x132c14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c14) {
            ctx->pc = 0x132C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C14u;
            // 0x132c18: 0x8e021bbc  lw          $v0, 0x1BBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C50u;
            goto label_132c50;
        }
    }
    ctx->pc = 0x132C1Cu;
label_132c1c:
    // 0x132c1c: 0x8e020b5c  lw          $v0, 0xB5C($s0)
    ctx->pc = 0x132c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2908)));
label_132c20:
    // 0x132c20: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x132c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_132c24:
    // 0x132c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_132c28:
    // 0x132c28: 0x504000fd  beql        $v0, $zero, . + 4 + (0xFD << 2)
label_132c2c:
    if (ctx->pc == 0x132C2Cu) {
        ctx->pc = 0x132C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C28u;
        // 0x132c2c: 0xae171538  sw          $s7, 0x1538($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5432), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C30u;
        goto label_132c30;
    }
    ctx->pc = 0x132C28u;
    {
        const bool branch_taken_0x132c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c28) {
            ctx->pc = 0x132C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C28u;
            // 0x132c2c: 0xae171538  sw          $s7, 0x1538($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5432), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133020u;
            goto label_133020;
        }
    }
    ctx->pc = 0x132C30u;
label_132c30:
    // 0x132c30: 0x100000fb  b           . + 4 + (0xFB << 2)
label_132c34:
    if (ctx->pc == 0x132C34u) {
        ctx->pc = 0x132C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C30u;
        // 0x132c34: 0xae001538  sw          $zero, 0x1538($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C38u;
        goto label_132c38;
    }
    ctx->pc = 0x132C30u;
    {
        const bool branch_taken_0x132c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C30u;
        // 0x132c34: 0xae001538  sw          $zero, 0x1538($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c30) {
            ctx->pc = 0x133020u;
            goto label_133020;
        }
    }
    ctx->pc = 0x132C38u;
label_132c38:
    // 0x132c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_132c3c:
    // 0x132c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132c40:
    // 0x132c40: 0x0  nop
    ctx->pc = 0x132c40u;
    // NOP
label_132c44:
    // 0x132c44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x132c44u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_132c48:
    // 0x132c48: 0x10000035  b           . + 4 + (0x35 << 2)
label_132c4c:
    if (ctx->pc == 0x132C4Cu) {
        ctx->pc = 0x132C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C48u;
        // 0x132c4c: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C50u;
        goto label_132c50;
    }
    ctx->pc = 0x132C48u;
    {
        const bool branch_taken_0x132c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C48u;
        // 0x132c4c: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c48) {
            ctx->pc = 0x132D20u;
            goto label_132d20;
        }
    }
    ctx->pc = 0x132C50u;
label_132c50:
    // 0x132c50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_132c54:
    if (ctx->pc == 0x132C54u) {
        ctx->pc = 0x132C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C50u;
        // 0x132c54: 0x8e030b5c  lw          $v1, 0xB5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C58u;
        goto label_132c58;
    }
    ctx->pc = 0x132C50u;
    {
        const bool branch_taken_0x132c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132c50) {
            ctx->pc = 0x132C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C50u;
            // 0x132c54: 0x8e030b5c  lw          $v1, 0xB5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C68u;
            goto label_132c68;
        }
    }
    ctx->pc = 0x132C58u;
label_132c58:
    // 0x132c58: 0x8e021bc0  lw          $v0, 0x1BC0($s0)
    ctx->pc = 0x132c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7104)));
label_132c5c:
    // 0x132c5c: 0x504000f1  beql        $v0, $zero, . + 4 + (0xF1 << 2)
label_132c60:
    if (ctx->pc == 0x132C60u) {
        ctx->pc = 0x132C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C5Cu;
        // 0x132c60: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C64u;
        goto label_132c64;
    }
    ctx->pc = 0x132C5Cu;
    {
        const bool branch_taken_0x132c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c5c) {
            ctx->pc = 0x132C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C5Cu;
            // 0x132c60: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133024u;
            goto label_133024;
        }
    }
    ctx->pc = 0x132C64u;
label_132c64:
    // 0x132c64: 0x8e030b5c  lw          $v1, 0xB5C($s0)
    ctx->pc = 0x132c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2908)));
label_132c68:
    // 0x132c68: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x132c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_132c6c:
    // 0x132c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_132c70:
    // 0x132c70: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_132c74:
    if (ctx->pc == 0x132C74u) {
        ctx->pc = 0x132C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C70u;
        // 0x132c74: 0x31343  sra         $v0, $v1, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C78u;
        goto label_132c78;
    }
    ctx->pc = 0x132C70u;
    {
        const bool branch_taken_0x132c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C70u;
        // 0x132c74: 0x31343  sra         $v0, $v1, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c70) {
            ctx->pc = 0x133020u;
            goto label_133020;
        }
    }
    ctx->pc = 0x132C78u;
label_132c78:
    // 0x132c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_132c7c:
    // 0x132c7c: 0x544000e9  bnel        $v0, $zero, . + 4 + (0xE9 << 2)
label_132c80:
    if (ctx->pc == 0x132C80u) {
        ctx->pc = 0x132C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C7Cu;
        // 0x132c80: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C84u;
        goto label_132c84;
    }
    ctx->pc = 0x132C7Cu;
    {
        const bool branch_taken_0x132c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132c7c) {
            ctx->pc = 0x132C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C7Cu;
            // 0x132c80: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133024u;
            goto label_133024;
        }
    }
    ctx->pc = 0x132C84u;
label_132c84:
    // 0x132c84: 0x8e041538  lw          $a0, 0x1538($s0)
    ctx->pc = 0x132c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
label_132c88:
    // 0x132c88: 0xc04f0cc  jal         func_13C330
label_132c8c:
    if (ctx->pc == 0x132C8Cu) {
        ctx->pc = 0x132C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C88u;
        // 0x132c8c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C90u;
        goto label_132c90;
    }
    ctx->pc = 0x132C88u;
    SET_GPR_U32(ctx, 31, 0x132C90u);
    ctx->pc = 0x132C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C88u;
    // 0x132c8c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x132C88u, 0x132C90u)) {
        return;
    }
    ctx->pc = 0x132C90u;
label_132c90:
    // 0x132c90: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x132c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_132c94:
    // 0x132c94: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x132c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_132c98:
    // 0x132c98: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x132c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_132c9c:
    // 0x132c9c: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x132c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132ca0:
    // 0x132ca0: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x132ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132ca4:
    // 0x132ca4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x132ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_132ca8:
    // 0x132ca8: 0xc04f0cc  jal         func_13C330
label_132cac:
    if (ctx->pc == 0x132CACu) {
        ctx->pc = 0x132CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CA8u;
        // 0x132cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CB0u;
        goto label_132cb0;
    }
    ctx->pc = 0x132CA8u;
    SET_GPR_U32(ctx, 31, 0x132CB0u);
    ctx->pc = 0x132CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CA8u;
    // 0x132cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x132CA8u, 0x132CB0u)) {
        return;
    }
    ctx->pc = 0x132CB0u;
label_132cb0:
    // 0x132cb0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x132cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_132cb4:
    // 0x132cb4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x132cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_132cb8:
    // 0x132cb8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x132cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_132cbc:
    // 0x132cbc: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x132cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132cc0:
    // 0x132cc0: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x132cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132cc4:
    // 0x132cc4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x132cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_132cc8:
    // 0x132cc8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x132cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132ccc:
    // 0x132ccc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x132cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132cd0:
    // 0x132cd0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x132cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132cd4:
    // 0x132cd4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x132cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132cd8:
    // 0x132cd8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x132cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_132cdc:
    // 0x132cdc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x132cdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_132ce0:
    // 0x132ce0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x132ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_132ce4:
    // 0x132ce4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x132ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_132ce8:
    // 0x132ce8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x132ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_132cec:
    // 0x132cec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x132cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_132cf0:
    // 0x132cf0: 0xc04642c  jal         func_1190B0
label_132cf4:
    if (ctx->pc == 0x132CF4u) {
        ctx->pc = 0x132CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CF0u;
        // 0x132cf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CF8u;
        goto label_132cf8;
    }
    ctx->pc = 0x132CF0u;
    SET_GPR_U32(ctx, 31, 0x132CF8u);
    ctx->pc = 0x132CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CF0u;
    // 0x132cf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x132CF0u, 0x132CF8u)) {
        return;
    }
    ctx->pc = 0x132CF8u;
label_132cf8:
    // 0x132cf8: 0x0  nop
    ctx->pc = 0x132cf8u;
    // NOP
label_132cfc:
    // 0x132cfc: 0x0  nop
    ctx->pc = 0x132cfcu;
    // NOP
label_132d00:
    // 0x132d00: 0x46000044  c1          0x44
    ctx->pc = 0x132d00u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_132d04:
    // 0x132d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132d08:
    // 0x132d08: 0x0  nop
    ctx->pc = 0x132d08u;
    // NOP
label_132d0c:
    // 0x132d0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x132d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132d10:
    // 0x132d10: 0x0  nop
    ctx->pc = 0x132d10u;
    // NOP
label_132d14:
    // 0x132d14: 0x4501ffc8  bc1t        . + 4 + (-0x38 << 2)
label_132d18:
    if (ctx->pc == 0x132D18u) {
        ctx->pc = 0x132D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D14u;
        // 0x132d18: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D1Cu;
        goto label_132d1c;
    }
    ctx->pc = 0x132D14u;
    {
        const bool branch_taken_0x132d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x132D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D14u;
        // 0x132d18: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d14) {
            ctx->pc = 0x132C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132c38;
        }
    }
    ctx->pc = 0x132D1Cu;
label_132d1c:
    // 0x132d1c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x132d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132d20:
    // 0x132d20: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x132d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132d24:
    // 0x132d24: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x132d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132d28:
    // 0x132d28: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x132d28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_132d2c:
    // 0x132d2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x132d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_132d30:
    // 0x132d30: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x132d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_132d34:
    // 0x132d34: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x132d34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_132d38:
    // 0x132d38: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x132d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_132d3c:
    // 0x132d3c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x132d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_132d40:
    // 0x132d40: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x132d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_132d44:
    // 0x132d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_132d48:
    // 0x132d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132d4c:
    // 0x132d4c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x132d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_132d50:
    // 0x132d50: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x132d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_132d54:
    // 0x132d54: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x132d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_132d58:
    // 0x132d58: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x132d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_132d5c:
    // 0x132d5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x132d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_132d60:
    // 0x132d60: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x132d60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_132d64:
    // 0x132d64: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x132d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_132d68:
    // 0x132d68: 0x460308c1  sub.s       $f3, $f1, $f3
    ctx->pc = 0x132d68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_132d6c:
    // 0x132d6c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x132d6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_132d70:
    // 0x132d70: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x132d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_132d74:
    // 0x132d74: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x132d74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_132d78:
    // 0x132d78: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x132d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_132d7c:
    // 0x132d7c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x132d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_132d80:
    // 0x132d80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x132d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132d84:
    // 0x132d84: 0x46002606  mov.s       $f24, $f4
    ctx->pc = 0x132d84u;
    ctx->f[24] = FPU_MOV_S(ctx->f[4]);
label_132d88:
    // 0x132d88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_132d8c:
    // 0x132d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132d90:
    // 0x132d90: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x132d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_132d94:
    // 0x132d94: 0xc0c493d  jal         func_3124F4
label_132d98:
    if (ctx->pc == 0x132D98u) {
        ctx->pc = 0x132D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D94u;
        // 0x132d98: 0xc7d6de0c  lwc1        $f22, -0x21F4($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294958604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D9Cu;
        goto label_132d9c;
    }
    ctx->pc = 0x132D94u;
    SET_GPR_U32(ctx, 31, 0x132D9Cu);
    ctx->pc = 0x132D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D94u;
    // 0x132d98: 0xc7d6de0c  lwc1        $f22, -0x21F4($fp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294958604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x132D94u, 0x132D9Cu)) {
        return;
    }
    ctx->pc = 0x132D9Cu;
label_132d9c:
    // 0x132d9c: 0xc0691d8  jal         func_1A4760
label_132da0:
    if (ctx->pc == 0x132DA0u) {
        ctx->pc = 0x132DA4u;
        goto label_132da4;
    }
    ctx->pc = 0x132D9Cu;
    SET_GPR_U32(ctx, 31, 0x132DA4u);
    ctx->pc = 0x1A4760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4760u, 0x132D9Cu, 0x132DA4u)) {
        return;
    }
    ctx->pc = 0x132DA4u;
label_132da4:
    // 0x132da4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_132da8:
    if (ctx->pc == 0x132DA8u) {
        ctx->pc = 0x132DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DA4u;
        // 0x132da8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DACu;
        goto label_132dac;
    }
    ctx->pc = 0x132DA4u;
    {
        const bool branch_taken_0x132da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DA4u;
        // 0x132da8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132da4) {
            ctx->pc = 0x132DF4u;
            goto label_132df4;
        }
    }
    ctx->pc = 0x132DACu;
label_132dac:
    // 0x132dac: 0xc0691ec  jal         func_1A47B0
label_132db0:
    if (ctx->pc == 0x132DB0u) {
        ctx->pc = 0x132DB4u;
        goto label_132db4;
    }
    ctx->pc = 0x132DACu;
    SET_GPR_U32(ctx, 31, 0x132DB4u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x132DACu, 0x132DB4u)) {
        return;
    }
    ctx->pc = 0x132DB4u;
label_132db4:
    // 0x132db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132db8:
    // 0x132db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132dbc:
    // 0x132dbc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x132dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_132dc0:
    // 0x132dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_132dc4:
    if (ctx->pc == 0x132DC4u) {
        ctx->pc = 0x132DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DC0u;
        // 0x132dc4: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DC8u;
        goto label_132dc8;
    }
    ctx->pc = 0x132DC0u;
    {
        const bool branch_taken_0x132dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DC0u;
        // 0x132dc4: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dc0) {
            ctx->pc = 0x132DF0u;
            goto label_132df0;
        }
    }
    ctx->pc = 0x132DC8u;
label_132dc8:
    // 0x132dc8: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x132dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_132dcc:
    // 0x132dcc: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x132dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_132dd0:
    // 0x132dd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x132dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_132dd4:
    // 0x132dd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x132dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_132dd8:
    // 0x132dd8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x132dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_132ddc:
    // 0x132ddc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x132ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_132de0:
    // 0x132de0: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_132de4:
    // 0x132de4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x132de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_132de8:
    // 0x132de8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_132dec:
    if (ctx->pc == 0x132DECu) {
        ctx->pc = 0x132DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DE8u;
        // 0x132dec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DF0u;
        goto label_132df0;
    }
    ctx->pc = 0x132DE8u;
    {
        const bool branch_taken_0x132de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DE8u;
        // 0x132dec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132de8) {
            ctx->pc = 0x132DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132dd0;
        }
    }
    ctx->pc = 0x132DF0u;
label_132df0:
    // 0x132df0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_132df4:
    // 0x132df4: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x132df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_132df8:
    // 0x132df8: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
label_132dfc:
    if (ctx->pc == 0x132DFCu) {
        ctx->pc = 0x132DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DF8u;
        // 0x132dfc: 0x27b20088  addiu       $s2, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E00u;
        goto label_132e00;
    }
    ctx->pc = 0x132DF8u;
    {
        const bool branch_taken_0x132df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x132DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DF8u;
        // 0x132dfc: 0x27b20088  addiu       $s2, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132df8) {
            ctx->pc = 0x133010u;
            goto label_133010;
        }
    }
    ctx->pc = 0x132E00u;
label_132e00:
    // 0x132e00: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x132e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_132e04:
    // 0x132e04: 0x26111890  addiu       $s1, $s0, 0x1890
    ctx->pc = 0x132e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6288));
label_132e08:
    // 0x132e08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x132e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_132e0c:
    // 0x132e0c: 0x0  nop
    ctx->pc = 0x132e0cu;
    // NOP
label_132e10:
    // 0x132e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132e14:
    // 0x132e14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x132e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_132e18:
    // 0x132e18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x132e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132e1c:
    // 0x132e1c: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x132e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_132e20:
    // 0x132e20: 0xc4800bdc  lwc1        $f0, 0xBDC($a0)
    ctx->pc = 0x132e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132e24:
    // 0x132e24: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x132e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132e28:
    // 0x132e28: 0x0  nop
    ctx->pc = 0x132e28u;
    // NOP
label_132e2c:
    // 0x132e2c: 0x4502006f  bc1fl       . + 4 + (0x6F << 2)
label_132e30:
    if (ctx->pc == 0x132E30u) {
        ctx->pc = 0x132E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E2Cu;
        // 0x132e30: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E34u;
        goto label_132e34;
    }
    ctx->pc = 0x132E2Cu;
    {
        const bool branch_taken_0x132e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132e2c) {
            ctx->pc = 0x132E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132E2Cu;
            // 0x132e30: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132FECu;
            goto label_132fec;
        }
    }
    ctx->pc = 0x132E34u;
label_132e34:
    // 0x132e34: 0x8c622d1c  lw          $v0, 0x2D1C($v1)
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11548)));
label_132e38:
    // 0x132e38: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
label_132e3c:
    if (ctx->pc == 0x132E3Cu) {
        ctx->pc = 0x132E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E38u;
        // 0x132e3c: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E40u;
        goto label_132e40;
    }
    ctx->pc = 0x132E38u;
    {
        const bool branch_taken_0x132e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e38) {
            ctx->pc = 0x132E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132E38u;
            // 0x132e3c: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132FECu;
            goto label_132fec;
        }
    }
    ctx->pc = 0x132E40u;
label_132e40:
    // 0x132e40: 0x8e021538  lw          $v0, 0x1538($s0)
    ctx->pc = 0x132e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
label_132e44:
    // 0x132e44: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
label_132e48:
    if (ctx->pc == 0x132E48u) {
        ctx->pc = 0x132E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E44u;
        // 0x132e48: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E4Cu;
        goto label_132e4c;
    }
    ctx->pc = 0x132E44u;
    {
        const bool branch_taken_0x132e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x132E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E44u;
        // 0x132e48: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e44) {
            ctx->pc = 0x132FECu;
            goto label_132fec;
        }
    }
    ctx->pc = 0x132E4Cu;
label_132e4c:
    // 0x132e4c: 0xc04f0cc  jal         func_13C330
label_132e50:
    if (ctx->pc == 0x132E50u) {
        ctx->pc = 0x132E54u;
        goto label_132e54;
    }
    ctx->pc = 0x132E4Cu;
    SET_GPR_U32(ctx, 31, 0x132E54u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x132E4Cu, 0x132E54u)) {
        return;
    }
    ctx->pc = 0x132E54u;
label_132e54:
    // 0x132e54: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x132e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_132e58:
    // 0x132e58: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x132e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_132e5c:
    // 0x132e5c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x132e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_132e60:
    // 0x132e60: 0xb3a30077  sdl         $v1, 0x77($sp)
    ctx->pc = 0x132e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132e64:
    // 0x132e64: 0xb7a30070  sdr         $v1, 0x70($sp)
    ctx->pc = 0x132e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132e68:
    // 0x132e68: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x132e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_132e6c:
    // 0x132e6c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x132e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132e70:
    // 0x132e70: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x132e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132e74:
    // 0x132e74: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x132e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132e78:
    // 0x132e78: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x132e78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_132e7c:
    // 0x132e7c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x132e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_132e80:
    // 0x132e80: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x132e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132e84:
    // 0x132e84: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x132e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132e88:
    // 0x132e88: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x132e88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_132e8c:
    // 0x132e8c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x132e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_132e90:
    // 0x132e90: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x132e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_132e94:
    // 0x132e94: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x132e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_132e98:
    // 0x132e98: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x132e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_132e9c:
    // 0x132e9c: 0x6ba700c7  ldl         $a3, 0xC7($sp)
    ctx->pc = 0x132e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_132ea0:
    // 0x132ea0: 0x6fa700c0  ldr         $a3, 0xC0($sp)
    ctx->pc = 0x132ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_132ea4:
    // 0x132ea4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x132ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_132ea8:
    // 0x132ea8: 0xb3a700b7  sdl         $a3, 0xB7($sp)
    ctx->pc = 0x132ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132eac:
    // 0x132eac: 0xb7a700b0  sdr         $a3, 0xB0($sp)
    ctx->pc = 0x132eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132eb0:
    // 0x132eb0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x132eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_132eb4:
    // 0x132eb4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x132eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132eb8:
    // 0x132eb8: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x132eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132ebc:
    // 0x132ebc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x132ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_132ec0:
    // 0x132ec0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x132ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132ec4:
    // 0x132ec4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x132ec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_132ec8:
    // 0x132ec8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x132ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_132ecc:
    // 0x132ecc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x132eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_132ed0:
    // 0x132ed0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132ed4:
    // 0x132ed4: 0x0  nop
    ctx->pc = 0x132ed4u;
    // NOP
label_132ed8:
    // 0x132ed8: 0x0  nop
    ctx->pc = 0x132ed8u;
    // NOP
label_132edc:
    // 0x132edc: 0x46000504  c1          0x504
    ctx->pc = 0x132edcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_132ee0:
    // 0x132ee0: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x132ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132ee4:
    // 0x132ee4: 0x0  nop
    ctx->pc = 0x132ee4u;
    // NOP
label_132ee8:
    // 0x132ee8: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_132eec:
    if (ctx->pc == 0x132EECu) {
        ctx->pc = 0x132EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EE8u;
        // 0x132eec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EF0u;
        goto label_132ef0;
    }
    ctx->pc = 0x132EE8u;
    {
        const bool branch_taken_0x132ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EE8u;
        // 0x132eec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ee8) {
            ctx->pc = 0x132FE8u;
            goto label_132fe8;
        }
    }
    ctx->pc = 0x132EF0u;
label_132ef0:
    // 0x132ef0: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x132ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_132ef4:
    // 0x132ef4: 0xc04642c  jal         func_1190B0
label_132ef8:
    if (ctx->pc == 0x132EF8u) {
        ctx->pc = 0x132EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EF4u;
        // 0x132ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EFCu;
        goto label_132efc;
    }
    ctx->pc = 0x132EF4u;
    SET_GPR_U32(ctx, 31, 0x132EFCu);
    ctx->pc = 0x132EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EF4u;
    // 0x132ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x132EF4u, 0x132EFCu)) {
        return;
    }
    ctx->pc = 0x132EFCu;
label_132efc:
    // 0x132efc: 0x0  nop
    ctx->pc = 0x132efcu;
    // NOP
label_132f00:
    // 0x132f00: 0x0  nop
    ctx->pc = 0x132f00u;
    // NOP
label_132f04:
    // 0x132f04: 0x46000044  c1          0x44
    ctx->pc = 0x132f04u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_132f08:
    // 0x132f08: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x132f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132f0c:
    // 0x132f0c: 0x0  nop
    ctx->pc = 0x132f0cu;
    // NOP
label_132f10:
    // 0x132f10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_132f14:
    if (ctx->pc == 0x132F14u) {
        ctx->pc = 0x132F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F10u;
        // 0x132f14: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F18u;
        goto label_132f18;
    }
    ctx->pc = 0x132F10u;
    {
        const bool branch_taken_0x132f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F10u;
        // 0x132f14: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f10) {
            ctx->pc = 0x132F30u;
            goto label_132f30;
        }
    }
    ctx->pc = 0x132F18u;
label_132f18:
    // 0x132f18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_132f1c:
    // 0x132f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132f20:
    // 0x132f20: 0x0  nop
    ctx->pc = 0x132f20u;
    // NOP
label_132f24:
    // 0x132f24: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x132f24u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_132f28:
    // 0x132f28: 0x10000003  b           . + 4 + (0x3 << 2)
label_132f2c:
    if (ctx->pc == 0x132F2Cu) {
        ctx->pc = 0x132F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F28u;
        // 0x132f2c: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F30u;
        goto label_132f30;
    }
    ctx->pc = 0x132F28u;
    {
        const bool branch_taken_0x132f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F28u;
        // 0x132f2c: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f28) {
            ctx->pc = 0x132F38u;
            goto label_132f38;
        }
    }
    ctx->pc = 0x132F30u;
label_132f30:
    // 0x132f30: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x132f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132f34:
    // 0x132f34: 0x0  nop
    ctx->pc = 0x132f34u;
    // NOP
label_132f38:
    // 0x132f38: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x132f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132f3c:
    // 0x132f3c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x132f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132f40:
    // 0x132f40: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x132f40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_132f44:
    // 0x132f44: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x132f44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_132f48:
    // 0x132f48: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x132f48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_132f4c:
    // 0x132f4c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x132f4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_132f50:
    // 0x132f50: 0xe7a500b4  swc1        $f5, 0xB4($sp)
    ctx->pc = 0x132f50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_132f54:
    // 0x132f54: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x132f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_132f58:
    // 0x132f58: 0xc6021890  lwc1        $f2, 0x1890($s0)
    ctx->pc = 0x132f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132f5c:
    // 0x132f5c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x132f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_132f60:
    // 0x132f60: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x132f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132f64:
    // 0x132f64: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x132f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_132f68:
    // 0x132f68: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x132f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132f6c:
    // 0x132f6c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x132f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_132f70:
    // 0x132f70: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x132f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_132f74:
    // 0x132f74: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x132f74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_132f78:
    // 0x132f78: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x132f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_132f7c:
    // 0x132f7c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x132f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132f80:
    // 0x132f80: 0x0  nop
    ctx->pc = 0x132f80u;
    // NOP
label_132f84:
    // 0x132f84: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_132f88:
    if (ctx->pc == 0x132F88u) {
        ctx->pc = 0x132F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F84u;
        // 0x132f88: 0xc7a20054  lwc1        $f2, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F8Cu;
        goto label_132f8c;
    }
    ctx->pc = 0x132F84u;
    {
        const bool branch_taken_0x132f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F84u;
        // 0x132f88: 0xc7a20054  lwc1        $f2, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f84) {
            ctx->pc = 0x132FE8u;
            goto label_132fe8;
        }
    }
    ctx->pc = 0x132F8Cu;
label_132f8c:
    // 0x132f8c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x132f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132f90:
    // 0x132f90: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x132f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_132f94:
    // 0x132f94: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x132f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132f98:
    // 0x132f98: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x132f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_132f9c:
    // 0x132f9c: 0x8e021bc0  lw          $v0, 0x1BC0($s0)
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7104)));
label_132fa0:
    // 0x132fa0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x132fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_132fa4:
    // 0x132fa4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x132fa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_132fa8:
    // 0x132fa8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_132fac:
    if (ctx->pc == 0x132FACu) {
        ctx->pc = 0x132FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FA8u;
        // 0x132fac: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FB0u;
        goto label_132fb0;
    }
    ctx->pc = 0x132FA8u;
    {
        const bool branch_taken_0x132fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FA8u;
        // 0x132fac: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132fa8) {
            ctx->pc = 0x132FB4u;
            goto label_132fb4;
        }
    }
    ctx->pc = 0x132FB0u;
label_132fb0:
    // 0x132fb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x132fb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_132fb4:
    // 0x132fb4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x132fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132fb8:
    // 0x132fb8: 0x0  nop
    ctx->pc = 0x132fb8u;
    // NOP
label_132fbc:
    // 0x132fbc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_132fc0:
    if (ctx->pc == 0x132FC0u) {
        ctx->pc = 0x132FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FBCu;
        // 0x132fc0: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FC4u;
        goto label_132fc4;
    }
    ctx->pc = 0x132FBCu;
    {
        const bool branch_taken_0x132fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FBCu;
        // 0x132fc0: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132fbc) {
            ctx->pc = 0x132FECu;
            goto label_132fec;
        }
    }
    ctx->pc = 0x132FC4u;
label_132fc4:
    // 0x132fc4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x132fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132fc8:
    // 0x132fc8: 0x0  nop
    ctx->pc = 0x132fc8u;
    // NOP
label_132fcc:
    // 0x132fcc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_132fd0:
    if (ctx->pc == 0x132FD0u) {
        ctx->pc = 0x132FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FCCu;
        // 0x132fd0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FD4u;
        goto label_132fd4;
    }
    ctx->pc = 0x132FCCu;
    {
        const bool branch_taken_0x132fcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FCCu;
        // 0x132fd0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132fcc) {
            ctx->pc = 0x132FECu;
            goto label_132fec;
        }
    }
    ctx->pc = 0x132FD4u;
label_132fd4:
    // 0x132fd4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x132fd4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_132fd8:
    // 0x132fd8: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x132fd8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_132fdc:
    // 0x132fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132fe0:
    // 0x132fe0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_132fe4:
    // 0x132fe4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x132fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132fe8:
    // 0x132fe8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_132fec:
    // 0x132fec: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x132fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_132ff0:
    // 0x132ff0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x132ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_132ff4:
    // 0x132ff4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_132ff8:
    if (ctx->pc == 0x132FF8u) {
        ctx->pc = 0x132FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FF4u;
        // 0x132ff8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FFCu;
        goto label_132ffc;
    }
    ctx->pc = 0x132FF4u;
    {
        const bool branch_taken_0x132ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FF4u;
        // 0x132ff8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ff4) {
            ctx->pc = 0x133000u;
            goto label_133000;
        }
    }
    ctx->pc = 0x132FFCu;
label_132ffc:
    // 0x132ffc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x132ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_133000:
    // 0x133000: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_133004:
    // 0x133004: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x133004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_133008:
    // 0x133008: 0x1462ff81  bne         $v1, $v0, . + 4 + (-0x7F << 2)
label_13300c:
    if (ctx->pc == 0x13300Cu) {
        ctx->pc = 0x13300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133008u;
        // 0x13300c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133010u;
        goto label_133010;
    }
    ctx->pc = 0x133008u;
    {
        const bool branch_taken_0x133008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133008u;
        // 0x13300c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133008) {
            ctx->pc = 0x132E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132e10;
        }
    }
    ctx->pc = 0x133010u;
label_133010:
    // 0x133010: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_133014:
    if (ctx->pc == 0x133014u) {
        ctx->pc = 0x133014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133010u;
        // 0x133014: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133018u;
        goto label_133018;
    }
    ctx->pc = 0x133010u;
    {
        const bool branch_taken_0x133010 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x133010) {
            ctx->pc = 0x133014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133010u;
            // 0x133014: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133024u;
            goto label_133024;
        }
    }
    ctx->pc = 0x133018u;
label_133018:
    // 0x133018: 0xe6181530  swc1        $f24, 0x1530($s0)
    ctx->pc = 0x133018u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5424), bits); }
label_13301c:
    // 0x13301c: 0xae131538  sw          $s3, 0x1538($s0)
    ctx->pc = 0x13301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5432), GPR_U32(ctx, 19));
label_133020:
    // 0x133020: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x133020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_133024:
    // 0x133024: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x133024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_133028:
    // 0x133028: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x133028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_13302c:
    // 0x13302c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x13302cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_133030:
    // 0x133030: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x133030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_133034:
    // 0x133034: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x133034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_133038:
    // 0x133038: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x133038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_13303c:
    // 0x13303c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x13303cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_133040:
    // 0x133040: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x133040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_133044:
    // 0x133044: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x133044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_133048:
    // 0x133048: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x133048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_13304c:
    // 0x13304c: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x13304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_133050:
    // 0x133050: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x133050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_133054:
    // 0x133054: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x133054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_133058:
    // 0x133058: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x133058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13305c:
    // 0x13305c: 0x3e00008  jr          $ra
label_133060:
    if (ctx->pc == 0x133060u) {
        ctx->pc = 0x133060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13305Cu;
        // 0x133060: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133064u;
        goto label_133064;
    }
    ctx->pc = 0x13305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13305Cu;
        // 0x133060: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133064u;
label_133064:
    // 0x133064: 0x0  nop
    ctx->pc = 0x133064u;
    // NOP
    ctx->pc = 0x133068u;
}
