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

// Function: sub_002B1B88
// Address: 0x2b1b88 - 0x2b2808
void sub_002B1B88_0x2b1b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1B88_0x2b1b88");
#endif

    switch (ctx->pc) {
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1b8cu: goto label_2b1b8c;
        case 0x2b1b90u: goto label_2b1b90;
        case 0x2b1b94u: goto label_2b1b94;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1b9cu: goto label_2b1b9c;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1ba8u: goto label_2b1ba8;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bb0u: goto label_2b1bb0;
        case 0x2b1bb4u: goto label_2b1bb4;
        case 0x2b1bb8u: goto label_2b1bb8;
        case 0x2b1bbcu: goto label_2b1bbc;
        case 0x2b1bc0u: goto label_2b1bc0;
        case 0x2b1bc4u: goto label_2b1bc4;
        case 0x2b1bc8u: goto label_2b1bc8;
        case 0x2b1bccu: goto label_2b1bcc;
        case 0x2b1bd0u: goto label_2b1bd0;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1bd8u: goto label_2b1bd8;
        case 0x2b1bdcu: goto label_2b1bdc;
        case 0x2b1be0u: goto label_2b1be0;
        case 0x2b1be4u: goto label_2b1be4;
        case 0x2b1be8u: goto label_2b1be8;
        case 0x2b1becu: goto label_2b1bec;
        case 0x2b1bf0u: goto label_2b1bf0;
        case 0x2b1bf4u: goto label_2b1bf4;
        case 0x2b1bf8u: goto label_2b1bf8;
        case 0x2b1bfcu: goto label_2b1bfc;
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c04u: goto label_2b1c04;
        case 0x2b1c08u: goto label_2b1c08;
        case 0x2b1c0cu: goto label_2b1c0c;
        case 0x2b1c10u: goto label_2b1c10;
        case 0x2b1c14u: goto label_2b1c14;
        case 0x2b1c18u: goto label_2b1c18;
        case 0x2b1c1cu: goto label_2b1c1c;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c2cu: goto label_2b1c2c;
        case 0x2b1c30u: goto label_2b1c30;
        case 0x2b1c34u: goto label_2b1c34;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c40u: goto label_2b1c40;
        case 0x2b1c44u: goto label_2b1c44;
        case 0x2b1c48u: goto label_2b1c48;
        case 0x2b1c4cu: goto label_2b1c4c;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c58u: goto label_2b1c58;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c60u: goto label_2b1c60;
        case 0x2b1c64u: goto label_2b1c64;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c6cu: goto label_2b1c6c;
        case 0x2b1c70u: goto label_2b1c70;
        case 0x2b1c74u: goto label_2b1c74;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1c7cu: goto label_2b1c7c;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1c88u: goto label_2b1c88;
        case 0x2b1c8cu: goto label_2b1c8c;
        case 0x2b1c90u: goto label_2b1c90;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1c98u: goto label_2b1c98;
        case 0x2b1c9cu: goto label_2b1c9c;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1ca4u: goto label_2b1ca4;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cb0u: goto label_2b1cb0;
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1cbcu: goto label_2b1cbc;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1cc4u: goto label_2b1cc4;
        case 0x2b1cc8u: goto label_2b1cc8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cd0u: goto label_2b1cd0;
        case 0x2b1cd4u: goto label_2b1cd4;
        case 0x2b1cd8u: goto label_2b1cd8;
        case 0x2b1cdcu: goto label_2b1cdc;
        case 0x2b1ce0u: goto label_2b1ce0;
        case 0x2b1ce4u: goto label_2b1ce4;
        case 0x2b1ce8u: goto label_2b1ce8;
        case 0x2b1cecu: goto label_2b1cec;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf4u: goto label_2b1cf4;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1cfcu: goto label_2b1cfc;
        case 0x2b1d00u: goto label_2b1d00;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d08u: goto label_2b1d08;
        case 0x2b1d0cu: goto label_2b1d0c;
        case 0x2b1d10u: goto label_2b1d10;
        case 0x2b1d14u: goto label_2b1d14;
        case 0x2b1d18u: goto label_2b1d18;
        case 0x2b1d1cu: goto label_2b1d1c;
        case 0x2b1d20u: goto label_2b1d20;
        case 0x2b1d24u: goto label_2b1d24;
        case 0x2b1d28u: goto label_2b1d28;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d30u: goto label_2b1d30;
        case 0x2b1d34u: goto label_2b1d34;
        case 0x2b1d38u: goto label_2b1d38;
        case 0x2b1d3cu: goto label_2b1d3c;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d44u: goto label_2b1d44;
        case 0x2b1d48u: goto label_2b1d48;
        case 0x2b1d4cu: goto label_2b1d4c;
        case 0x2b1d50u: goto label_2b1d50;
        case 0x2b1d54u: goto label_2b1d54;
        case 0x2b1d58u: goto label_2b1d58;
        case 0x2b1d5cu: goto label_2b1d5c;
        case 0x2b1d60u: goto label_2b1d60;
        case 0x2b1d64u: goto label_2b1d64;
        case 0x2b1d68u: goto label_2b1d68;
        case 0x2b1d6cu: goto label_2b1d6c;
        case 0x2b1d70u: goto label_2b1d70;
        case 0x2b1d74u: goto label_2b1d74;
        case 0x2b1d78u: goto label_2b1d78;
        case 0x2b1d7cu: goto label_2b1d7c;
        case 0x2b1d80u: goto label_2b1d80;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1d88u: goto label_2b1d88;
        case 0x2b1d8cu: goto label_2b1d8c;
        case 0x2b1d90u: goto label_2b1d90;
        case 0x2b1d94u: goto label_2b1d94;
        case 0x2b1d98u: goto label_2b1d98;
        case 0x2b1d9cu: goto label_2b1d9c;
        case 0x2b1da0u: goto label_2b1da0;
        case 0x2b1da4u: goto label_2b1da4;
        case 0x2b1da8u: goto label_2b1da8;
        case 0x2b1dacu: goto label_2b1dac;
        case 0x2b1db0u: goto label_2b1db0;
        case 0x2b1db4u: goto label_2b1db4;
        case 0x2b1db8u: goto label_2b1db8;
        case 0x2b1dbcu: goto label_2b1dbc;
        case 0x2b1dc0u: goto label_2b1dc0;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1dc8u: goto label_2b1dc8;
        case 0x2b1dccu: goto label_2b1dcc;
        case 0x2b1dd0u: goto label_2b1dd0;
        case 0x2b1dd4u: goto label_2b1dd4;
        case 0x2b1dd8u: goto label_2b1dd8;
        case 0x2b1ddcu: goto label_2b1ddc;
        case 0x2b1de0u: goto label_2b1de0;
        case 0x2b1de4u: goto label_2b1de4;
        case 0x2b1de8u: goto label_2b1de8;
        case 0x2b1decu: goto label_2b1dec;
        case 0x2b1df0u: goto label_2b1df0;
        case 0x2b1df4u: goto label_2b1df4;
        case 0x2b1df8u: goto label_2b1df8;
        case 0x2b1dfcu: goto label_2b1dfc;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e04u: goto label_2b1e04;
        case 0x2b1e08u: goto label_2b1e08;
        case 0x2b1e0cu: goto label_2b1e0c;
        case 0x2b1e10u: goto label_2b1e10;
        case 0x2b1e14u: goto label_2b1e14;
        case 0x2b1e18u: goto label_2b1e18;
        case 0x2b1e1cu: goto label_2b1e1c;
        case 0x2b1e20u: goto label_2b1e20;
        case 0x2b1e24u: goto label_2b1e24;
        case 0x2b1e28u: goto label_2b1e28;
        case 0x2b1e2cu: goto label_2b1e2c;
        case 0x2b1e30u: goto label_2b1e30;
        case 0x2b1e34u: goto label_2b1e34;
        case 0x2b1e38u: goto label_2b1e38;
        case 0x2b1e3cu: goto label_2b1e3c;
        case 0x2b1e40u: goto label_2b1e40;
        case 0x2b1e44u: goto label_2b1e44;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e4cu: goto label_2b1e4c;
        case 0x2b1e50u: goto label_2b1e50;
        case 0x2b1e54u: goto label_2b1e54;
        case 0x2b1e58u: goto label_2b1e58;
        case 0x2b1e5cu: goto label_2b1e5c;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e64u: goto label_2b1e64;
        case 0x2b1e68u: goto label_2b1e68;
        case 0x2b1e6cu: goto label_2b1e6c;
        case 0x2b1e70u: goto label_2b1e70;
        case 0x2b1e74u: goto label_2b1e74;
        case 0x2b1e78u: goto label_2b1e78;
        case 0x2b1e7cu: goto label_2b1e7c;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1e84u: goto label_2b1e84;
        case 0x2b1e88u: goto label_2b1e88;
        case 0x2b1e8cu: goto label_2b1e8c;
        case 0x2b1e90u: goto label_2b1e90;
        case 0x2b1e94u: goto label_2b1e94;
        case 0x2b1e98u: goto label_2b1e98;
        case 0x2b1e9cu: goto label_2b1e9c;
        case 0x2b1ea0u: goto label_2b1ea0;
        case 0x2b1ea4u: goto label_2b1ea4;
        case 0x2b1ea8u: goto label_2b1ea8;
        case 0x2b1eacu: goto label_2b1eac;
        case 0x2b1eb0u: goto label_2b1eb0;
        case 0x2b1eb4u: goto label_2b1eb4;
        case 0x2b1eb8u: goto label_2b1eb8;
        case 0x2b1ebcu: goto label_2b1ebc;
        case 0x2b1ec0u: goto label_2b1ec0;
        case 0x2b1ec4u: goto label_2b1ec4;
        case 0x2b1ec8u: goto label_2b1ec8;
        case 0x2b1eccu: goto label_2b1ecc;
        case 0x2b1ed0u: goto label_2b1ed0;
        case 0x2b1ed4u: goto label_2b1ed4;
        case 0x2b1ed8u: goto label_2b1ed8;
        case 0x2b1edcu: goto label_2b1edc;
        case 0x2b1ee0u: goto label_2b1ee0;
        case 0x2b1ee4u: goto label_2b1ee4;
        case 0x2b1ee8u: goto label_2b1ee8;
        case 0x2b1eecu: goto label_2b1eec;
        case 0x2b1ef0u: goto label_2b1ef0;
        case 0x2b1ef4u: goto label_2b1ef4;
        case 0x2b1ef8u: goto label_2b1ef8;
        case 0x2b1efcu: goto label_2b1efc;
        case 0x2b1f00u: goto label_2b1f00;
        case 0x2b1f04u: goto label_2b1f04;
        case 0x2b1f08u: goto label_2b1f08;
        case 0x2b1f0cu: goto label_2b1f0c;
        case 0x2b1f10u: goto label_2b1f10;
        case 0x2b1f14u: goto label_2b1f14;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f1cu: goto label_2b1f1c;
        case 0x2b1f20u: goto label_2b1f20;
        case 0x2b1f24u: goto label_2b1f24;
        case 0x2b1f28u: goto label_2b1f28;
        case 0x2b1f2cu: goto label_2b1f2c;
        case 0x2b1f30u: goto label_2b1f30;
        case 0x2b1f34u: goto label_2b1f34;
        case 0x2b1f38u: goto label_2b1f38;
        case 0x2b1f3cu: goto label_2b1f3c;
        case 0x2b1f40u: goto label_2b1f40;
        case 0x2b1f44u: goto label_2b1f44;
        case 0x2b1f48u: goto label_2b1f48;
        case 0x2b1f4cu: goto label_2b1f4c;
        case 0x2b1f50u: goto label_2b1f50;
        case 0x2b1f54u: goto label_2b1f54;
        case 0x2b1f58u: goto label_2b1f58;
        case 0x2b1f5cu: goto label_2b1f5c;
        case 0x2b1f60u: goto label_2b1f60;
        case 0x2b1f64u: goto label_2b1f64;
        case 0x2b1f68u: goto label_2b1f68;
        case 0x2b1f6cu: goto label_2b1f6c;
        case 0x2b1f70u: goto label_2b1f70;
        case 0x2b1f74u: goto label_2b1f74;
        case 0x2b1f78u: goto label_2b1f78;
        case 0x2b1f7cu: goto label_2b1f7c;
        case 0x2b1f80u: goto label_2b1f80;
        case 0x2b1f84u: goto label_2b1f84;
        case 0x2b1f88u: goto label_2b1f88;
        case 0x2b1f8cu: goto label_2b1f8c;
        case 0x2b1f90u: goto label_2b1f90;
        case 0x2b1f94u: goto label_2b1f94;
        case 0x2b1f98u: goto label_2b1f98;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1fa0u: goto label_2b1fa0;
        case 0x2b1fa4u: goto label_2b1fa4;
        case 0x2b1fa8u: goto label_2b1fa8;
        case 0x2b1facu: goto label_2b1fac;
        case 0x2b1fb0u: goto label_2b1fb0;
        case 0x2b1fb4u: goto label_2b1fb4;
        case 0x2b1fb8u: goto label_2b1fb8;
        case 0x2b1fbcu: goto label_2b1fbc;
        case 0x2b1fc0u: goto label_2b1fc0;
        case 0x2b1fc4u: goto label_2b1fc4;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fccu: goto label_2b1fcc;
        case 0x2b1fd0u: goto label_2b1fd0;
        case 0x2b1fd4u: goto label_2b1fd4;
        case 0x2b1fd8u: goto label_2b1fd8;
        case 0x2b1fdcu: goto label_2b1fdc;
        case 0x2b1fe0u: goto label_2b1fe0;
        case 0x2b1fe4u: goto label_2b1fe4;
        case 0x2b1fe8u: goto label_2b1fe8;
        case 0x2b1fecu: goto label_2b1fec;
        case 0x2b1ff0u: goto label_2b1ff0;
        case 0x2b1ff4u: goto label_2b1ff4;
        case 0x2b1ff8u: goto label_2b1ff8;
        case 0x2b1ffcu: goto label_2b1ffc;
        case 0x2b2000u: goto label_2b2000;
        case 0x2b2004u: goto label_2b2004;
        case 0x2b2008u: goto label_2b2008;
        case 0x2b200cu: goto label_2b200c;
        case 0x2b2010u: goto label_2b2010;
        case 0x2b2014u: goto label_2b2014;
        case 0x2b2018u: goto label_2b2018;
        case 0x2b201cu: goto label_2b201c;
        case 0x2b2020u: goto label_2b2020;
        case 0x2b2024u: goto label_2b2024;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b202cu: goto label_2b202c;
        case 0x2b2030u: goto label_2b2030;
        case 0x2b2034u: goto label_2b2034;
        case 0x2b2038u: goto label_2b2038;
        case 0x2b203cu: goto label_2b203c;
        case 0x2b2040u: goto label_2b2040;
        case 0x2b2044u: goto label_2b2044;
        case 0x2b2048u: goto label_2b2048;
        case 0x2b204cu: goto label_2b204c;
        case 0x2b2050u: goto label_2b2050;
        case 0x2b2054u: goto label_2b2054;
        case 0x2b2058u: goto label_2b2058;
        case 0x2b205cu: goto label_2b205c;
        case 0x2b2060u: goto label_2b2060;
        case 0x2b2064u: goto label_2b2064;
        case 0x2b2068u: goto label_2b2068;
        case 0x2b206cu: goto label_2b206c;
        case 0x2b2070u: goto label_2b2070;
        case 0x2b2074u: goto label_2b2074;
        case 0x2b2078u: goto label_2b2078;
        case 0x2b207cu: goto label_2b207c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b2088u: goto label_2b2088;
        case 0x2b208cu: goto label_2b208c;
        case 0x2b2090u: goto label_2b2090;
        case 0x2b2094u: goto label_2b2094;
        case 0x2b2098u: goto label_2b2098;
        case 0x2b209cu: goto label_2b209c;
        case 0x2b20a0u: goto label_2b20a0;
        case 0x2b20a4u: goto label_2b20a4;
        case 0x2b20a8u: goto label_2b20a8;
        case 0x2b20acu: goto label_2b20ac;
        case 0x2b20b0u: goto label_2b20b0;
        case 0x2b20b4u: goto label_2b20b4;
        case 0x2b20b8u: goto label_2b20b8;
        case 0x2b20bcu: goto label_2b20bc;
        case 0x2b20c0u: goto label_2b20c0;
        case 0x2b20c4u: goto label_2b20c4;
        case 0x2b20c8u: goto label_2b20c8;
        case 0x2b20ccu: goto label_2b20cc;
        case 0x2b20d0u: goto label_2b20d0;
        case 0x2b20d4u: goto label_2b20d4;
        case 0x2b20d8u: goto label_2b20d8;
        case 0x2b20dcu: goto label_2b20dc;
        case 0x2b20e0u: goto label_2b20e0;
        case 0x2b20e4u: goto label_2b20e4;
        case 0x2b20e8u: goto label_2b20e8;
        case 0x2b20ecu: goto label_2b20ec;
        case 0x2b20f0u: goto label_2b20f0;
        case 0x2b20f4u: goto label_2b20f4;
        case 0x2b20f8u: goto label_2b20f8;
        case 0x2b20fcu: goto label_2b20fc;
        case 0x2b2100u: goto label_2b2100;
        case 0x2b2104u: goto label_2b2104;
        case 0x2b2108u: goto label_2b2108;
        case 0x2b210cu: goto label_2b210c;
        case 0x2b2110u: goto label_2b2110;
        case 0x2b2114u: goto label_2b2114;
        case 0x2b2118u: goto label_2b2118;
        case 0x2b211cu: goto label_2b211c;
        case 0x2b2120u: goto label_2b2120;
        case 0x2b2124u: goto label_2b2124;
        case 0x2b2128u: goto label_2b2128;
        case 0x2b212cu: goto label_2b212c;
        case 0x2b2130u: goto label_2b2130;
        case 0x2b2134u: goto label_2b2134;
        case 0x2b2138u: goto label_2b2138;
        case 0x2b213cu: goto label_2b213c;
        case 0x2b2140u: goto label_2b2140;
        case 0x2b2144u: goto label_2b2144;
        case 0x2b2148u: goto label_2b2148;
        case 0x2b214cu: goto label_2b214c;
        case 0x2b2150u: goto label_2b2150;
        case 0x2b2154u: goto label_2b2154;
        case 0x2b2158u: goto label_2b2158;
        case 0x2b215cu: goto label_2b215c;
        case 0x2b2160u: goto label_2b2160;
        case 0x2b2164u: goto label_2b2164;
        case 0x2b2168u: goto label_2b2168;
        case 0x2b216cu: goto label_2b216c;
        case 0x2b2170u: goto label_2b2170;
        case 0x2b2174u: goto label_2b2174;
        case 0x2b2178u: goto label_2b2178;
        case 0x2b217cu: goto label_2b217c;
        case 0x2b2180u: goto label_2b2180;
        case 0x2b2184u: goto label_2b2184;
        case 0x2b2188u: goto label_2b2188;
        case 0x2b218cu: goto label_2b218c;
        case 0x2b2190u: goto label_2b2190;
        case 0x2b2194u: goto label_2b2194;
        case 0x2b2198u: goto label_2b2198;
        case 0x2b219cu: goto label_2b219c;
        case 0x2b21a0u: goto label_2b21a0;
        case 0x2b21a4u: goto label_2b21a4;
        case 0x2b21a8u: goto label_2b21a8;
        case 0x2b21acu: goto label_2b21ac;
        case 0x2b21b0u: goto label_2b21b0;
        case 0x2b21b4u: goto label_2b21b4;
        case 0x2b21b8u: goto label_2b21b8;
        case 0x2b21bcu: goto label_2b21bc;
        case 0x2b21c0u: goto label_2b21c0;
        case 0x2b21c4u: goto label_2b21c4;
        case 0x2b21c8u: goto label_2b21c8;
        case 0x2b21ccu: goto label_2b21cc;
        case 0x2b21d0u: goto label_2b21d0;
        case 0x2b21d4u: goto label_2b21d4;
        case 0x2b21d8u: goto label_2b21d8;
        case 0x2b21dcu: goto label_2b21dc;
        case 0x2b21e0u: goto label_2b21e0;
        case 0x2b21e4u: goto label_2b21e4;
        case 0x2b21e8u: goto label_2b21e8;
        case 0x2b21ecu: goto label_2b21ec;
        case 0x2b21f0u: goto label_2b21f0;
        case 0x2b21f4u: goto label_2b21f4;
        case 0x2b21f8u: goto label_2b21f8;
        case 0x2b21fcu: goto label_2b21fc;
        case 0x2b2200u: goto label_2b2200;
        case 0x2b2204u: goto label_2b2204;
        case 0x2b2208u: goto label_2b2208;
        case 0x2b220cu: goto label_2b220c;
        case 0x2b2210u: goto label_2b2210;
        case 0x2b2214u: goto label_2b2214;
        case 0x2b2218u: goto label_2b2218;
        case 0x2b221cu: goto label_2b221c;
        case 0x2b2220u: goto label_2b2220;
        case 0x2b2224u: goto label_2b2224;
        case 0x2b2228u: goto label_2b2228;
        case 0x2b222cu: goto label_2b222c;
        case 0x2b2230u: goto label_2b2230;
        case 0x2b2234u: goto label_2b2234;
        case 0x2b2238u: goto label_2b2238;
        case 0x2b223cu: goto label_2b223c;
        case 0x2b2240u: goto label_2b2240;
        case 0x2b2244u: goto label_2b2244;
        case 0x2b2248u: goto label_2b2248;
        case 0x2b224cu: goto label_2b224c;
        case 0x2b2250u: goto label_2b2250;
        case 0x2b2254u: goto label_2b2254;
        case 0x2b2258u: goto label_2b2258;
        case 0x2b225cu: goto label_2b225c;
        case 0x2b2260u: goto label_2b2260;
        case 0x2b2264u: goto label_2b2264;
        case 0x2b2268u: goto label_2b2268;
        case 0x2b226cu: goto label_2b226c;
        case 0x2b2270u: goto label_2b2270;
        case 0x2b2274u: goto label_2b2274;
        case 0x2b2278u: goto label_2b2278;
        case 0x2b227cu: goto label_2b227c;
        case 0x2b2280u: goto label_2b2280;
        case 0x2b2284u: goto label_2b2284;
        case 0x2b2288u: goto label_2b2288;
        case 0x2b228cu: goto label_2b228c;
        case 0x2b2290u: goto label_2b2290;
        case 0x2b2294u: goto label_2b2294;
        case 0x2b2298u: goto label_2b2298;
        case 0x2b229cu: goto label_2b229c;
        case 0x2b22a0u: goto label_2b22a0;
        case 0x2b22a4u: goto label_2b22a4;
        case 0x2b22a8u: goto label_2b22a8;
        case 0x2b22acu: goto label_2b22ac;
        case 0x2b22b0u: goto label_2b22b0;
        case 0x2b22b4u: goto label_2b22b4;
        case 0x2b22b8u: goto label_2b22b8;
        case 0x2b22bcu: goto label_2b22bc;
        case 0x2b22c0u: goto label_2b22c0;
        case 0x2b22c4u: goto label_2b22c4;
        case 0x2b22c8u: goto label_2b22c8;
        case 0x2b22ccu: goto label_2b22cc;
        case 0x2b22d0u: goto label_2b22d0;
        case 0x2b22d4u: goto label_2b22d4;
        case 0x2b22d8u: goto label_2b22d8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b22e4u: goto label_2b22e4;
        case 0x2b22e8u: goto label_2b22e8;
        case 0x2b22ecu: goto label_2b22ec;
        case 0x2b22f0u: goto label_2b22f0;
        case 0x2b22f4u: goto label_2b22f4;
        case 0x2b22f8u: goto label_2b22f8;
        case 0x2b22fcu: goto label_2b22fc;
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2304u: goto label_2b2304;
        case 0x2b2308u: goto label_2b2308;
        case 0x2b230cu: goto label_2b230c;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2314u: goto label_2b2314;
        case 0x2b2318u: goto label_2b2318;
        case 0x2b231cu: goto label_2b231c;
        case 0x2b2320u: goto label_2b2320;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2328u: goto label_2b2328;
        case 0x2b232cu: goto label_2b232c;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2334u: goto label_2b2334;
        case 0x2b2338u: goto label_2b2338;
        case 0x2b233cu: goto label_2b233c;
        case 0x2b2340u: goto label_2b2340;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2348u: goto label_2b2348;
        case 0x2b234cu: goto label_2b234c;
        case 0x2b2350u: goto label_2b2350;
        case 0x2b2354u: goto label_2b2354;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b235cu: goto label_2b235c;
        case 0x2b2360u: goto label_2b2360;
        case 0x2b2364u: goto label_2b2364;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b236cu: goto label_2b236c;
        case 0x2b2370u: goto label_2b2370;
        case 0x2b2374u: goto label_2b2374;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b237cu: goto label_2b237c;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b2384u: goto label_2b2384;
        case 0x2b2388u: goto label_2b2388;
        case 0x2b238cu: goto label_2b238c;
        case 0x2b2390u: goto label_2b2390;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b2398u: goto label_2b2398;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b23a4u: goto label_2b23a4;
        case 0x2b23a8u: goto label_2b23a8;
        case 0x2b23acu: goto label_2b23ac;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23b4u: goto label_2b23b4;
        case 0x2b23b8u: goto label_2b23b8;
        case 0x2b23bcu: goto label_2b23bc;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23c8u: goto label_2b23c8;
        case 0x2b23ccu: goto label_2b23cc;
        case 0x2b23d0u: goto label_2b23d0;
        case 0x2b23d4u: goto label_2b23d4;
        case 0x2b23d8u: goto label_2b23d8;
        case 0x2b23dcu: goto label_2b23dc;
        case 0x2b23e0u: goto label_2b23e0;
        case 0x2b23e4u: goto label_2b23e4;
        case 0x2b23e8u: goto label_2b23e8;
        case 0x2b23ecu: goto label_2b23ec;
        case 0x2b23f0u: goto label_2b23f0;
        case 0x2b23f4u: goto label_2b23f4;
        case 0x2b23f8u: goto label_2b23f8;
        case 0x2b23fcu: goto label_2b23fc;
        case 0x2b2400u: goto label_2b2400;
        case 0x2b2404u: goto label_2b2404;
        case 0x2b2408u: goto label_2b2408;
        case 0x2b240cu: goto label_2b240c;
        case 0x2b2410u: goto label_2b2410;
        case 0x2b2414u: goto label_2b2414;
        case 0x2b2418u: goto label_2b2418;
        case 0x2b241cu: goto label_2b241c;
        case 0x2b2420u: goto label_2b2420;
        case 0x2b2424u: goto label_2b2424;
        case 0x2b2428u: goto label_2b2428;
        case 0x2b242cu: goto label_2b242c;
        case 0x2b2430u: goto label_2b2430;
        case 0x2b2434u: goto label_2b2434;
        case 0x2b2438u: goto label_2b2438;
        case 0x2b243cu: goto label_2b243c;
        case 0x2b2440u: goto label_2b2440;
        case 0x2b2444u: goto label_2b2444;
        case 0x2b2448u: goto label_2b2448;
        case 0x2b244cu: goto label_2b244c;
        case 0x2b2450u: goto label_2b2450;
        case 0x2b2454u: goto label_2b2454;
        case 0x2b2458u: goto label_2b2458;
        case 0x2b245cu: goto label_2b245c;
        case 0x2b2460u: goto label_2b2460;
        case 0x2b2464u: goto label_2b2464;
        case 0x2b2468u: goto label_2b2468;
        case 0x2b246cu: goto label_2b246c;
        case 0x2b2470u: goto label_2b2470;
        case 0x2b2474u: goto label_2b2474;
        case 0x2b2478u: goto label_2b2478;
        case 0x2b247cu: goto label_2b247c;
        case 0x2b2480u: goto label_2b2480;
        case 0x2b2484u: goto label_2b2484;
        case 0x2b2488u: goto label_2b2488;
        case 0x2b248cu: goto label_2b248c;
        case 0x2b2490u: goto label_2b2490;
        case 0x2b2494u: goto label_2b2494;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b249cu: goto label_2b249c;
        case 0x2b24a0u: goto label_2b24a0;
        case 0x2b24a4u: goto label_2b24a4;
        case 0x2b24a8u: goto label_2b24a8;
        case 0x2b24acu: goto label_2b24ac;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24b4u: goto label_2b24b4;
        case 0x2b24b8u: goto label_2b24b8;
        case 0x2b24bcu: goto label_2b24bc;
        case 0x2b24c0u: goto label_2b24c0;
        case 0x2b24c4u: goto label_2b24c4;
        case 0x2b24c8u: goto label_2b24c8;
        case 0x2b24ccu: goto label_2b24cc;
        case 0x2b24d0u: goto label_2b24d0;
        case 0x2b24d4u: goto label_2b24d4;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24dcu: goto label_2b24dc;
        case 0x2b24e0u: goto label_2b24e0;
        case 0x2b24e4u: goto label_2b24e4;
        case 0x2b24e8u: goto label_2b24e8;
        case 0x2b24ecu: goto label_2b24ec;
        case 0x2b24f0u: goto label_2b24f0;
        case 0x2b24f4u: goto label_2b24f4;
        case 0x2b24f8u: goto label_2b24f8;
        case 0x2b24fcu: goto label_2b24fc;
        case 0x2b2500u: goto label_2b2500;
        case 0x2b2504u: goto label_2b2504;
        case 0x2b2508u: goto label_2b2508;
        case 0x2b250cu: goto label_2b250c;
        case 0x2b2510u: goto label_2b2510;
        case 0x2b2514u: goto label_2b2514;
        case 0x2b2518u: goto label_2b2518;
        case 0x2b251cu: goto label_2b251c;
        case 0x2b2520u: goto label_2b2520;
        case 0x2b2524u: goto label_2b2524;
        case 0x2b2528u: goto label_2b2528;
        case 0x2b252cu: goto label_2b252c;
        case 0x2b2530u: goto label_2b2530;
        case 0x2b2534u: goto label_2b2534;
        case 0x2b2538u: goto label_2b2538;
        case 0x2b253cu: goto label_2b253c;
        case 0x2b2540u: goto label_2b2540;
        case 0x2b2544u: goto label_2b2544;
        case 0x2b2548u: goto label_2b2548;
        case 0x2b254cu: goto label_2b254c;
        case 0x2b2550u: goto label_2b2550;
        case 0x2b2554u: goto label_2b2554;
        case 0x2b2558u: goto label_2b2558;
        case 0x2b255cu: goto label_2b255c;
        case 0x2b2560u: goto label_2b2560;
        case 0x2b2564u: goto label_2b2564;
        case 0x2b2568u: goto label_2b2568;
        case 0x2b256cu: goto label_2b256c;
        case 0x2b2570u: goto label_2b2570;
        case 0x2b2574u: goto label_2b2574;
        case 0x2b2578u: goto label_2b2578;
        case 0x2b257cu: goto label_2b257c;
        case 0x2b2580u: goto label_2b2580;
        case 0x2b2584u: goto label_2b2584;
        case 0x2b2588u: goto label_2b2588;
        case 0x2b258cu: goto label_2b258c;
        case 0x2b2590u: goto label_2b2590;
        case 0x2b2594u: goto label_2b2594;
        case 0x2b2598u: goto label_2b2598;
        case 0x2b259cu: goto label_2b259c;
        case 0x2b25a0u: goto label_2b25a0;
        case 0x2b25a4u: goto label_2b25a4;
        case 0x2b25a8u: goto label_2b25a8;
        case 0x2b25acu: goto label_2b25ac;
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25b4u: goto label_2b25b4;
        case 0x2b25b8u: goto label_2b25b8;
        case 0x2b25bcu: goto label_2b25bc;
        case 0x2b25c0u: goto label_2b25c0;
        case 0x2b25c4u: goto label_2b25c4;
        case 0x2b25c8u: goto label_2b25c8;
        case 0x2b25ccu: goto label_2b25cc;
        case 0x2b25d0u: goto label_2b25d0;
        case 0x2b25d4u: goto label_2b25d4;
        case 0x2b25d8u: goto label_2b25d8;
        case 0x2b25dcu: goto label_2b25dc;
        case 0x2b25e0u: goto label_2b25e0;
        case 0x2b25e4u: goto label_2b25e4;
        case 0x2b25e8u: goto label_2b25e8;
        case 0x2b25ecu: goto label_2b25ec;
        case 0x2b25f0u: goto label_2b25f0;
        case 0x2b25f4u: goto label_2b25f4;
        case 0x2b25f8u: goto label_2b25f8;
        case 0x2b25fcu: goto label_2b25fc;
        case 0x2b2600u: goto label_2b2600;
        case 0x2b2604u: goto label_2b2604;
        case 0x2b2608u: goto label_2b2608;
        case 0x2b260cu: goto label_2b260c;
        case 0x2b2610u: goto label_2b2610;
        case 0x2b2614u: goto label_2b2614;
        case 0x2b2618u: goto label_2b2618;
        case 0x2b261cu: goto label_2b261c;
        case 0x2b2620u: goto label_2b2620;
        case 0x2b2624u: goto label_2b2624;
        case 0x2b2628u: goto label_2b2628;
        case 0x2b262cu: goto label_2b262c;
        case 0x2b2630u: goto label_2b2630;
        case 0x2b2634u: goto label_2b2634;
        case 0x2b2638u: goto label_2b2638;
        case 0x2b263cu: goto label_2b263c;
        case 0x2b2640u: goto label_2b2640;
        case 0x2b2644u: goto label_2b2644;
        case 0x2b2648u: goto label_2b2648;
        case 0x2b264cu: goto label_2b264c;
        case 0x2b2650u: goto label_2b2650;
        case 0x2b2654u: goto label_2b2654;
        case 0x2b2658u: goto label_2b2658;
        case 0x2b265cu: goto label_2b265c;
        case 0x2b2660u: goto label_2b2660;
        case 0x2b2664u: goto label_2b2664;
        case 0x2b2668u: goto label_2b2668;
        case 0x2b266cu: goto label_2b266c;
        case 0x2b2670u: goto label_2b2670;
        case 0x2b2674u: goto label_2b2674;
        case 0x2b2678u: goto label_2b2678;
        case 0x2b267cu: goto label_2b267c;
        case 0x2b2680u: goto label_2b2680;
        case 0x2b2684u: goto label_2b2684;
        case 0x2b2688u: goto label_2b2688;
        case 0x2b268cu: goto label_2b268c;
        case 0x2b2690u: goto label_2b2690;
        case 0x2b2694u: goto label_2b2694;
        case 0x2b2698u: goto label_2b2698;
        case 0x2b269cu: goto label_2b269c;
        case 0x2b26a0u: goto label_2b26a0;
        case 0x2b26a4u: goto label_2b26a4;
        case 0x2b26a8u: goto label_2b26a8;
        case 0x2b26acu: goto label_2b26ac;
        case 0x2b26b0u: goto label_2b26b0;
        case 0x2b26b4u: goto label_2b26b4;
        case 0x2b26b8u: goto label_2b26b8;
        case 0x2b26bcu: goto label_2b26bc;
        case 0x2b26c0u: goto label_2b26c0;
        case 0x2b26c4u: goto label_2b26c4;
        case 0x2b26c8u: goto label_2b26c8;
        case 0x2b26ccu: goto label_2b26cc;
        case 0x2b26d0u: goto label_2b26d0;
        case 0x2b26d4u: goto label_2b26d4;
        case 0x2b26d8u: goto label_2b26d8;
        case 0x2b26dcu: goto label_2b26dc;
        case 0x2b26e0u: goto label_2b26e0;
        case 0x2b26e4u: goto label_2b26e4;
        case 0x2b26e8u: goto label_2b26e8;
        case 0x2b26ecu: goto label_2b26ec;
        case 0x2b26f0u: goto label_2b26f0;
        case 0x2b26f4u: goto label_2b26f4;
        case 0x2b26f8u: goto label_2b26f8;
        case 0x2b26fcu: goto label_2b26fc;
        case 0x2b2700u: goto label_2b2700;
        case 0x2b2704u: goto label_2b2704;
        case 0x2b2708u: goto label_2b2708;
        case 0x2b270cu: goto label_2b270c;
        case 0x2b2710u: goto label_2b2710;
        case 0x2b2714u: goto label_2b2714;
        case 0x2b2718u: goto label_2b2718;
        case 0x2b271cu: goto label_2b271c;
        case 0x2b2720u: goto label_2b2720;
        case 0x2b2724u: goto label_2b2724;
        case 0x2b2728u: goto label_2b2728;
        case 0x2b272cu: goto label_2b272c;
        case 0x2b2730u: goto label_2b2730;
        case 0x2b2734u: goto label_2b2734;
        case 0x2b2738u: goto label_2b2738;
        case 0x2b273cu: goto label_2b273c;
        case 0x2b2740u: goto label_2b2740;
        case 0x2b2744u: goto label_2b2744;
        case 0x2b2748u: goto label_2b2748;
        case 0x2b274cu: goto label_2b274c;
        case 0x2b2750u: goto label_2b2750;
        case 0x2b2754u: goto label_2b2754;
        case 0x2b2758u: goto label_2b2758;
        case 0x2b275cu: goto label_2b275c;
        case 0x2b2760u: goto label_2b2760;
        case 0x2b2764u: goto label_2b2764;
        case 0x2b2768u: goto label_2b2768;
        case 0x2b276cu: goto label_2b276c;
        case 0x2b2770u: goto label_2b2770;
        case 0x2b2774u: goto label_2b2774;
        case 0x2b2778u: goto label_2b2778;
        case 0x2b277cu: goto label_2b277c;
        case 0x2b2780u: goto label_2b2780;
        case 0x2b2784u: goto label_2b2784;
        case 0x2b2788u: goto label_2b2788;
        case 0x2b278cu: goto label_2b278c;
        case 0x2b2790u: goto label_2b2790;
        case 0x2b2794u: goto label_2b2794;
        case 0x2b2798u: goto label_2b2798;
        case 0x2b279cu: goto label_2b279c;
        case 0x2b27a0u: goto label_2b27a0;
        case 0x2b27a4u: goto label_2b27a4;
        case 0x2b27a8u: goto label_2b27a8;
        case 0x2b27acu: goto label_2b27ac;
        case 0x2b27b0u: goto label_2b27b0;
        case 0x2b27b4u: goto label_2b27b4;
        case 0x2b27b8u: goto label_2b27b8;
        case 0x2b27bcu: goto label_2b27bc;
        case 0x2b27c0u: goto label_2b27c0;
        case 0x2b27c4u: goto label_2b27c4;
        case 0x2b27c8u: goto label_2b27c8;
        case 0x2b27ccu: goto label_2b27cc;
        case 0x2b27d0u: goto label_2b27d0;
        case 0x2b27d4u: goto label_2b27d4;
        case 0x2b27d8u: goto label_2b27d8;
        case 0x2b27dcu: goto label_2b27dc;
        case 0x2b27e0u: goto label_2b27e0;
        case 0x2b27e4u: goto label_2b27e4;
        case 0x2b27e8u: goto label_2b27e8;
        case 0x2b27ecu: goto label_2b27ec;
        case 0x2b27f0u: goto label_2b27f0;
        case 0x2b27f4u: goto label_2b27f4;
        case 0x2b27f8u: goto label_2b27f8;
        case 0x2b27fcu: goto label_2b27fc;
        case 0x2b2800u: goto label_2b2800;
        case 0x2b2804u: goto label_2b2804;
        default: break;
    }

    ctx->pc = 0x2b1b88u;

label_2b1b88:
    // 0x2b1b88: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2b1b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2b1b8c:
    // 0x2b1b8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1b90:
    // 0x2b1b90: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x2b1b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_2b1b94:
    // 0x2b1b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1b98:
    // 0x2b1b98: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x2b1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_2b1b9c:
    // 0x2b1b9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b1b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ba0:
    // 0x2b1ba0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2b1ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_2b1ba4:
    // 0x2b1ba4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b1ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ba8:
    // 0x2b1ba8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2b1ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_2b1bac:
    // 0x2b1bac: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x2b1bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_2b1bb0:
    // 0x2b1bb0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x2b1bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_2b1bb4:
    // 0x2b1bb4: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x2b1bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_2b1bb8:
    // 0x2b1bb8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x2b1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_2b1bbc:
    // 0x2b1bbc: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x2b1bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_2b1bc0:
    // 0x2b1bc0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b1bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2b1bc4:
    // 0x2b1bc4: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2b1bc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2b1bc8:
    // 0x2b1bc8: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2b1bc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2b1bcc:
    // 0x2b1bcc: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2b1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2b1bd0:
    // 0x2b1bd0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2b1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2b1bd4:
    // 0x2b1bd4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2b1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_2b1bd8:
    // 0x2b1bd8: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b1bdc:
    // 0x2b1bdc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2b1bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_2b1be0:
    // 0x2b1be0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2b1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2b1be4:
    // 0x2b1be4: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2b1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1be8:
    // 0x2b1be8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1bec:
    // 0x2b1bec: 0xafa60074  sw          $a2, 0x74($sp)
    ctx->pc = 0x2b1becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
label_2b1bf0:
    // 0x2b1bf0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2b1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2b1bf4:
    // 0x2b1bf4: 0x8c750044  lw          $s5, 0x44($v1)
    ctx->pc = 0x2b1bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2b1bf8:
    // 0x2b1bf8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2b1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2b1bfc:
    // 0x2b1bfc: 0xc0c493d  jal         func_3124F4
label_2b1c00:
    if (ctx->pc == 0x2B1C00u) {
        ctx->pc = 0x2B1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BFCu;
        // 0x2b1c00: 0x153040  sll         $a2, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C04u;
        goto label_2b1c04;
    }
    ctx->pc = 0x2B1BFCu;
    SET_GPR_U32(ctx, 31, 0x2B1C04u);
    ctx->pc = 0x2B1C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BFCu;
    // 0x2b1c00: 0x153040  sll         $a2, $s5, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2B1BFCu, 0x2B1C04u)) {
        return;
    }
    ctx->pc = 0x2B1C04u;
label_2b1c04:
    // 0x2b1c04: 0x8e870074  lw          $a3, 0x74($s4)
    ctx->pc = 0x2b1c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_2b1c08:
    // 0x2b1c08: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x2b1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b1c0c:
    // 0x2b1c0c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_2b1c10:
    if (ctx->pc == 0x2B1C10u) {
        ctx->pc = 0x2B1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C0Cu;
        // 0x2b1c10: 0xafa70078  sw          $a3, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C14u;
        goto label_2b1c14;
    }
    ctx->pc = 0x2B1C0Cu;
    {
        const bool branch_taken_0x2b1c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C0Cu;
        // 0x2b1c10: 0xafa70078  sw          $a3, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c0c) {
            ctx->pc = 0x2B1CECu;
            goto label_2b1cec;
        }
    }
    ctx->pc = 0x2B1C14u;
label_2b1c14:
    // 0x2b1c14: 0x241e0028  addiu       $fp, $zero, 0x28
    ctx->pc = 0x2b1c14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b1c18:
    // 0x2b1c18: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x2b1c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b1c1c:
    // 0x2b1c1c: 0x0  nop
    ctx->pc = 0x2b1c1cu;
    // NOP
label_2b1c20:
    // 0x2b1c20: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x2b1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2b1c24:
    // 0x2b1c24: 0x2ea2018  mult        $a0, $s7, $t2
    ctx->pc = 0x2b1c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2b1c28:
    // 0x2b1c28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b1c2c:
    // 0x2b1c2c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2b1c30:
    // 0x2b1c30: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b1c34:
    // 0x2b1c34: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2b1c38:
    if (ctx->pc == 0x2B1C38u) {
        ctx->pc = 0x2B1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C34u;
        // 0x2b1c38: 0x26f60001  addiu       $s6, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C3Cu;
        goto label_2b1c3c;
    }
    ctx->pc = 0x2B1C34u;
    {
        const bool branch_taken_0x2b1c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C34u;
        // 0x2b1c38: 0x26f60001  addiu       $s6, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c34) {
            ctx->pc = 0x2B1CD8u;
            goto label_2b1cd8;
        }
    }
    ctx->pc = 0x2B1C3Cu;
label_2b1c3c:
    // 0x2b1c3c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2b1c40:
    // 0x2b1c40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b1c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c44:
    // 0x2b1c44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1c48:
    // 0x2b1c48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2b1c4c:
    if (ctx->pc == 0x2B1C4Cu) {
        ctx->pc = 0x2B1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C48u;
        // 0x2b1c4c: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C50u;
        goto label_2b1c50;
    }
    ctx->pc = 0x2B1C48u;
    {
        const bool branch_taken_0x2b1c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C48u;
        // 0x2b1c4c: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c48) {
            ctx->pc = 0x2B1CD8u;
            goto label_2b1cd8;
        }
    }
    ctx->pc = 0x2B1C50u;
label_2b1c50:
    // 0x2b1c50: 0x2fea818  mult        $s5, $s7, $fp
    ctx->pc = 0x2b1c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2b1c54:
    // 0x2b1c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c58:
    // 0x2b1c58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b1c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b1c5c:
    // 0x2b1c5c: 0xc0ac66a  jal         func_2B19A8
label_2b1c60:
    if (ctx->pc == 0x2B1C60u) {
        ctx->pc = 0x2B1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C5Cu;
        // 0x2b1c60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C64u;
        goto label_2b1c64;
    }
    ctx->pc = 0x2B1C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C64u);
    ctx->pc = 0x2B1C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C5Cu;
    // 0x2b1c60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B19A8u, 0x2B1C5Cu, 0x2B1C64u)) {
        return;
    }
    ctx->pc = 0x2B1C64u;
label_2b1c64:
    // 0x2b1c64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2b1c68:
    if (ctx->pc == 0x2B1C68u) {
        ctx->pc = 0x2B1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C64u;
        // 0x2b1c68: 0x8fac0074  lw          $t4, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C6Cu;
        goto label_2b1c6c;
    }
    ctx->pc = 0x2B1C64u;
    {
        const bool branch_taken_0x2b1c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C64u;
        // 0x2b1c68: 0x8fac0074  lw          $t4, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c64) {
            ctx->pc = 0x2B1CB0u;
            goto label_2b1cb0;
        }
    }
    ctx->pc = 0x2B1C6Cu;
label_2b1c6c:
    // 0x2b1c6c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b1c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b1c70:
    // 0x2b1c70: 0x94b1000c  lhu         $s1, 0xC($a1)
    ctx->pc = 0x2b1c70u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_2b1c74:
    // 0x2b1c74: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2b1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2b1c78:
    // 0x2b1c78: 0x22c2021  addu        $a0, $s1, $t4
    ctx->pc = 0x2b1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
label_2b1c7c:
    // 0x2b1c7c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2b1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2b1c80:
    // 0x2b1c80: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b1c80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1c84:
    // 0x2b1c84: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_2b1c88:
    if (ctx->pc == 0x2B1C88u) {
        ctx->pc = 0x2B1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C84u;
        // 0x2b1c88: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1C8Cu;
        goto label_2b1c8c;
    }
    ctx->pc = 0x2B1C84u;
    {
        const bool branch_taken_0x2b1c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1c84) {
            ctx->pc = 0x2B1C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1C84u;
            // 0x2b1c88: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1CB4u;
            goto label_2b1cb4;
        }
    }
    ctx->pc = 0x2B1C8Cu;
label_2b1c8c:
    // 0x2b1c8c: 0x94b30020  lhu         $s3, 0x20($a1)
    ctx->pc = 0x2b1c8cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1c90:
    // 0x2b1c90: 0x8fb10070  lw          $s1, 0x70($sp)
    ctx->pc = 0x2b1c90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1c94:
    // 0x2b1c94: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x2b1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1c98:
    // 0x2b1c98: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1c9c:
    // 0x2b1c9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b1c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b1ca0:
    // 0x2b1ca0: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x2b1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
label_2b1ca4:
    // 0x2b1ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b1ca8:
    // 0x2b1ca8: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x2b1ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
label_2b1cac:
    // 0x2b1cac: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x2b1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_2b1cb0:
    // 0x2b1cb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b1cb4:
    // 0x2b1cb4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b1cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b1cb8:
    // 0x2b1cb8: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x2b1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2b1cbc:
    // 0x2b1cbc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1cc0:
    // 0x2b1cc0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2b1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_2b1cc4:
    // 0x2b1cc4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2b1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2b1cc8:
    // 0x2b1cc8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b1ccc:
    // 0x2b1ccc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b1cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1cd0:
    // 0x2b1cd0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2b1cd4:
    if (ctx->pc == 0x2B1CD4u) {
        ctx->pc = 0x2B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CD0u;
        // 0x2b1cd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CD8u;
        goto label_2b1cd8;
    }
    ctx->pc = 0x2B1CD0u;
    {
        const bool branch_taken_0x2b1cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CD0u;
        // 0x2b1cd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cd0) {
            ctx->pc = 0x2B1C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1c58;
        }
    }
    ctx->pc = 0x2B1CD8u;
label_2b1cd8:
    // 0x2b1cd8: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b1cdc:
    // 0x2b1cdc: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x2b1cdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ce0:
    // 0x2b1ce0: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x2b1ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1ce4:
    // 0x2b1ce4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2b1ce8:
    if (ctx->pc == 0x2B1CE8u) {
        ctx->pc = 0x2B1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE4u;
        // 0x2b1ce8: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CECu;
        goto label_2b1cec;
    }
    ctx->pc = 0x2B1CE4u;
    {
        const bool branch_taken_0x2b1ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE4u;
        // 0x2b1ce8: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ce4) {
            ctx->pc = 0x2B1C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1c20;
        }
    }
    ctx->pc = 0x2B1CECu;
label_2b1cec:
    // 0x2b1cec: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2b1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1cf0:
    // 0x2b1cf0: 0x10a00105  beqz        $a1, . + 4 + (0x105 << 2)
label_2b1cf4:
    if (ctx->pc == 0x2B1CF4u) {
        ctx->pc = 0x2B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CF0u;
        // 0x2b1cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1CF8u;
        goto label_2b1cf8;
    }
    ctx->pc = 0x2B1CF0u;
    {
        const bool branch_taken_0x2b1cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CF0u;
        // 0x2b1cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cf0) {
            ctx->pc = 0x2B2108u;
            goto label_2b2108;
        }
    }
    ctx->pc = 0x2B1CF8u;
label_2b1cf8:
    // 0x2b1cf8: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x2b1cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2b1cfc:
    // 0x2b1cfc: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2b1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_2b1d00:
    // 0x2b1d00: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2b1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2b1d04:
    // 0x2b1d04: 0x8e870030  lw          $a3, 0x30($s4)
    ctx->pc = 0x2b1d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2b1d08:
    // 0x2b1d08: 0xafa7007c  sw          $a3, 0x7C($sp)
    ctx->pc = 0x2b1d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 7));
label_2b1d0c:
    // 0x2b1d0c: 0x8e8a0034  lw          $t2, 0x34($s4)
    ctx->pc = 0x2b1d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2b1d10:
    // 0x2b1d10: 0xafaa0080  sw          $t2, 0x80($sp)
    ctx->pc = 0x2b1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 10));
label_2b1d14:
    // 0x2b1d14: 0x8e8c0038  lw          $t4, 0x38($s4)
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2b1d18:
    // 0x2b1d18: 0xafac0084  sw          $t4, 0x84($sp)
    ctx->pc = 0x2b1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 12));
label_2b1d1c:
    // 0x2b1d1c: 0x8e90003c  lw          $s0, 0x3C($s4)
    ctx->pc = 0x2b1d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_2b1d20:
    // 0x2b1d20: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_2b1d24:
    if (ctx->pc == 0x2B1D24u) {
        ctx->pc = 0x2B1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D20u;
        // 0x2b1d24: 0xafb00088  sw          $s0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D28u;
        goto label_2b1d28;
    }
    ctx->pc = 0x2B1D20u;
    {
        const bool branch_taken_0x2b1d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D20u;
        // 0x2b1d24: 0xafb00088  sw          $s0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d20) {
            ctx->pc = 0x2B1EA4u;
            goto label_2b1ea4;
        }
    }
    ctx->pc = 0x2B1D28u;
label_2b1d28:
    // 0x2b1d28: 0x8e860074  lw          $a2, 0x74($s4)
    ctx->pc = 0x2b1d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_2b1d2c:
    // 0x2b1d2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b1d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d30:
    // 0x2b1d30: 0x30e30003  andi        $v1, $a3, 0x3
    ctx->pc = 0x2b1d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_2b1d34:
    // 0x2b1d34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b1d38:
    // 0x2b1d38: 0x18e00020  blez        $a3, . + 4 + (0x20 << 2)
label_2b1d3c:
    if (ctx->pc == 0x2B1D3Cu) {
        ctx->pc = 0x2B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D38u;
        // 0x2b1d3c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D40u;
        goto label_2b1d40;
    }
    ctx->pc = 0x2B1D38u;
    {
        const bool branch_taken_0x2b1d38 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D38u;
        // 0x2b1d3c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d38) {
            ctx->pc = 0x2B1DBCu;
            goto label_2b1dbc;
        }
    }
    ctx->pc = 0x2B1D40u;
label_2b1d40:
    // 0x2b1d40: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_2b1d44:
    if (ctx->pc == 0x2B1D44u) {
        ctx->pc = 0x2B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D40u;
        // 0x2b1d44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D48u;
        goto label_2b1d48;
    }
    ctx->pc = 0x2B1D40u;
    {
        const bool branch_taken_0x2b1d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D40u;
        // 0x2b1d44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d40) {
            ctx->pc = 0x2B1DF0u;
            goto label_2b1df0;
        }
    }
    ctx->pc = 0x2B1D48u;
label_2b1d48:
    // 0x2b1d48: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_2b1d4c:
    if (ctx->pc == 0x2B1D4Cu) {
        ctx->pc = 0x2B1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D48u;
        // 0x2b1d4c: 0x8ca60000  lw          $a2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D50u;
        goto label_2b1d50;
    }
    ctx->pc = 0x2B1D48u;
    {
        const bool branch_taken_0x2b1d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d48) {
            ctx->pc = 0x2B1D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D48u;
            // 0x2b1d4c: 0x8ca60000  lw          $a2, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1DC0u;
            goto label_2b1dc0;
        }
    }
    ctx->pc = 0x2B1D50u;
label_2b1d50:
    // 0x2b1d50: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b1d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b1d54:
    // 0x2b1d54: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2b1d58:
    if (ctx->pc == 0x2B1D58u) {
        ctx->pc = 0x2B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D54u;
        // 0x2b1d58: 0x8ca60000  lw          $a2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D5Cu;
        goto label_2b1d5c;
    }
    ctx->pc = 0x2B1D54u;
    {
        const bool branch_taken_0x2b1d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d54) {
            ctx->pc = 0x2B1D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D54u;
            // 0x2b1d58: 0x8ca60000  lw          $a2, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D94u;
            goto label_2b1d94;
        }
    }
    ctx->pc = 0x2B1D5Cu;
label_2b1d5c:
    // 0x2b1d5c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2b1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b1d60:
    // 0x2b1d60: 0x8fb1008c  lw          $s1, 0x8C($sp)
    ctx->pc = 0x2b1d60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1d64:
    // 0x2b1d64: 0x94b30020  lhu         $s3, 0x20($a1)
    ctx->pc = 0x2b1d64u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1d68:
    // 0x2b1d68: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1d6c:
    // 0x2b1d6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b1d70:
    // 0x2b1d70: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1d74:
    // 0x2b1d74: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2b1d78:
    if (ctx->pc == 0x2B1D78u) {
        ctx->pc = 0x2B1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D74u;
        // 0x2b1d78: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D7Cu;
        goto label_2b1d7c;
    }
    ctx->pc = 0x2B1D74u;
    {
        const bool branch_taken_0x2b1d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d74) {
            ctx->pc = 0x2B1D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1D74u;
            // 0x2b1d78: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D7Cu;
label_2b1d7c:
    // 0x2b1d7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2b1d80:
    // 0x2b1d80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2b1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b1d84:
    // 0x2b1d84: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2b1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2b1d88:
    // 0x2b1d88: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x2b1d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2b1d8c:
    // 0x2b1d8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b1d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1d90:
    // 0x2b1d90: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2b1d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b1d94:
    // 0x2b1d94: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x2b1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1d98:
    // 0x2b1d98: 0x94d30020  lhu         $s3, 0x20($a2)
    ctx->pc = 0x2b1d98u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_2b1d9c:
    // 0x2b1d9c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1da0:
    // 0x2b1da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b1da4:
    // 0x2b1da4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1da8:
    // 0x2b1da8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1dac:
    if (ctx->pc == 0x2B1DACu) {
        ctx->pc = 0x2B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DA8u;
        // 0x2b1dac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DB0u;
        goto label_2b1db0;
    }
    ctx->pc = 0x2B1DA8u;
    {
        const bool branch_taken_0x2b1da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DA8u;
        // 0x2b1dac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1da8) {
            ctx->pc = 0x2B1DB8u;
            goto label_2b1db8;
        }
    }
    ctx->pc = 0x2B1DB0u;
label_2b1db0:
    // 0x2b1db0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2b1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_2b1db4:
    // 0x2b1db4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1db8:
    // 0x2b1db8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b1db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b1dbc:
    // 0x2b1dbc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2b1dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b1dc0:
    // 0x2b1dc0: 0x8faa008c  lw          $t2, 0x8C($sp)
    ctx->pc = 0x2b1dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1dc4:
    // 0x2b1dc4: 0x94d30020  lhu         $s3, 0x20($a2)
    ctx->pc = 0x2b1dc4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_2b1dc8:
    // 0x2b1dc8: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1dcc:
    // 0x2b1dcc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2b1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2b1dd0:
    // 0x2b1dd0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1dd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1dd4:
    // 0x2b1dd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1dd8:
    if (ctx->pc == 0x2B1DD8u) {
        ctx->pc = 0x2B1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DD4u;
        // 0x2b1dd8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DDCu;
        goto label_2b1ddc;
    }
    ctx->pc = 0x2B1DD4u;
    {
        const bool branch_taken_0x2b1dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DD4u;
        // 0x2b1dd8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dd4) {
            ctx->pc = 0x2B1DE4u;
            goto label_2b1de4;
        }
    }
    ctx->pc = 0x2B1DDCu;
label_2b1ddc:
    // 0x2b1ddc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2b1ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_2b1de0:
    // 0x2b1de0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1de4:
    // 0x2b1de4: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x2b1de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2b1de8:
    // 0x2b1de8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2b1dec:
    if (ctx->pc == 0x2B1DECu) {
        ctx->pc = 0x2B1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DE8u;
        // 0x2b1dec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DF0u;
        goto label_2b1df0;
    }
    ctx->pc = 0x2B1DE8u;
    {
        const bool branch_taken_0x2b1de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DE8u;
        // 0x2b1dec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1de8) {
            ctx->pc = 0x2B1EA4u;
            goto label_2b1ea4;
        }
    }
    ctx->pc = 0x2B1DF0u;
label_2b1df0:
    // 0x2b1df0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b1df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b1df4:
    // 0x2b1df4: 0x0  nop
    ctx->pc = 0x2b1df4u;
    // NOP
label_2b1df8:
    // 0x2b1df8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2b1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b1dfc:
    // 0x2b1dfc: 0x8fac008c  lw          $t4, 0x8C($sp)
    ctx->pc = 0x2b1dfcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1e00:
    // 0x2b1e00: 0x94b30020  lhu         $s3, 0x20($a1)
    ctx->pc = 0x2b1e00u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1e04:
    // 0x2b1e04: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1e08:
    // 0x2b1e08: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2b1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_2b1e0c:
    // 0x2b1e0c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1e10:
    // 0x2b1e10: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2b1e14:
    if (ctx->pc == 0x2B1E14u) {
        ctx->pc = 0x2B1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E10u;
        // 0x2b1e14: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E18u;
        goto label_2b1e18;
    }
    ctx->pc = 0x2B1E10u;
    {
        const bool branch_taken_0x2b1e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e10) {
            ctx->pc = 0x2B1E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E10u;
            // 0x2b1e14: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E24u;
            goto label_2b1e24;
        }
    }
    ctx->pc = 0x2B1E18u;
label_2b1e18:
    // 0x2b1e18: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b1e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2b1e1c:
    // 0x2b1e1c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1e20:
    // 0x2b1e20: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2b1e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b1e24:
    // 0x2b1e24: 0x8fb0008c  lw          $s0, 0x8C($sp)
    ctx->pc = 0x2b1e24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1e28:
    // 0x2b1e28: 0x94b30020  lhu         $s3, 0x20($a1)
    ctx->pc = 0x2b1e28u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1e2c:
    // 0x2b1e2c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1e30:
    // 0x2b1e30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b1e34:
    // 0x2b1e34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1e34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1e38:
    // 0x2b1e38: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2b1e3c:
    if (ctx->pc == 0x2B1E3Cu) {
        ctx->pc = 0x2B1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E38u;
        // 0x2b1e3c: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E40u;
        goto label_2b1e40;
    }
    ctx->pc = 0x2B1E38u;
    {
        const bool branch_taken_0x2b1e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e38) {
            ctx->pc = 0x2B1E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E38u;
            // 0x2b1e3c: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E4Cu;
            goto label_2b1e4c;
        }
    }
    ctx->pc = 0x2B1E40u;
label_2b1e40:
    // 0x2b1e40: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2b1e44:
    // 0x2b1e44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1e48:
    // 0x2b1e48: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2b1e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2b1e4c:
    // 0x2b1e4c: 0x8fb1008c  lw          $s1, 0x8C($sp)
    ctx->pc = 0x2b1e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1e50:
    // 0x2b1e50: 0x94b30020  lhu         $s3, 0x20($a1)
    ctx->pc = 0x2b1e50u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1e54:
    // 0x2b1e54: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1e58:
    // 0x2b1e58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b1e5c:
    // 0x2b1e5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1e60:
    // 0x2b1e60: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2b1e64:
    if (ctx->pc == 0x2B1E64u) {
        ctx->pc = 0x2B1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E60u;
        // 0x2b1e64: 0x8cc5000c  lw          $a1, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E68u;
        goto label_2b1e68;
    }
    ctx->pc = 0x2B1E60u;
    {
        const bool branch_taken_0x2b1e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e60) {
            ctx->pc = 0x2B1E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1E60u;
            // 0x2b1e64: 0x8cc5000c  lw          $a1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1E74u;
            goto label_2b1e74;
        }
    }
    ctx->pc = 0x2B1E68u;
label_2b1e68:
    // 0x2b1e68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b1e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2b1e6c:
    // 0x2b1e6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1e70:
    // 0x2b1e70: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2b1e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2b1e74:
    // 0x2b1e74: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x2b1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1e78:
    // 0x2b1e78: 0x94b30020  lhu         $s3, 0x20($a1)
    ctx->pc = 0x2b1e78u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1e7c:
    // 0x2b1e7c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b1e80:
    // 0x2b1e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b1e84:
    // 0x2b1e84: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1e84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1e88:
    // 0x2b1e88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b1e8c:
    if (ctx->pc == 0x2B1E8Cu) {
        ctx->pc = 0x2B1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E88u;
        // 0x2b1e8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1E90u;
        goto label_2b1e90;
    }
    ctx->pc = 0x2B1E88u;
    {
        const bool branch_taken_0x2b1e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E88u;
        // 0x2b1e8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e88) {
            ctx->pc = 0x2B1E98u;
            goto label_2b1e98;
        }
    }
    ctx->pc = 0x2B1E90u;
label_2b1e90:
    // 0x2b1e90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2b1e94:
    // 0x2b1e94: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2b1e98:
    // 0x2b1e98: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x2b1e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2b1e9c:
    // 0x2b1e9c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_2b1ea0:
    if (ctx->pc == 0x2B1EA0u) {
        ctx->pc = 0x2B1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E9Cu;
        // 0x2b1ea0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1EA4u;
        goto label_2b1ea4;
    }
    ctx->pc = 0x2B1E9Cu;
    {
        const bool branch_taken_0x2b1e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E9Cu;
        // 0x2b1ea0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e9c) {
            ctx->pc = 0x2B1DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1df8;
        }
    }
    ctx->pc = 0x2B1EA4u;
label_2b1ea4:
    // 0x2b1ea4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2b1ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1ea8:
    // 0x2b1ea8: 0x10800097  beqz        $a0, . + 4 + (0x97 << 2)
label_2b1eac:
    if (ctx->pc == 0x2B1EACu) {
        ctx->pc = 0x2B1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EA8u;
        // 0x2b1eac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1EB0u;
        goto label_2b1eb0;
    }
    ctx->pc = 0x2B1EA8u;
    {
        const bool branch_taken_0x2b1ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EA8u;
        // 0x2b1eac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ea8) {
            ctx->pc = 0x2B2108u;
            goto label_2b2108;
        }
    }
    ctx->pc = 0x2B1EB0u;
label_2b1eb0:
    // 0x2b1eb0: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2b1eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b1eb4:
    // 0x2b1eb4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2b1eb8:
    // 0x2b1eb8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2b1eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b1ebc:
    // 0x2b1ebc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b1ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b1ec0:
    // 0x2b1ec0: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x2b1ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1ec4:
    // 0x2b1ec4: 0xafb20098  sw          $s2, 0x98($sp)
    ctx->pc = 0x2b1ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
label_2b1ec8:
    // 0x2b1ec8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2b1ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2b1ecc:
    // 0x2b1ecc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b1eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ed0:
    // 0x2b1ed0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2b1ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b1ed4:
    // 0x2b1ed4: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x2b1ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_2b1ed8:
    // 0x2b1ed8: 0x9495000c  lhu         $s5, 0xC($a0)
    ctx->pc = 0x2b1ed8u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_2b1edc:
    // 0x2b1edc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b1ee0:
    // 0x2b1ee0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2b1ee4:
    // 0x2b1ee4: 0x12a00083  beqz        $s5, . + 4 + (0x83 << 2)
label_2b1ee8:
    if (ctx->pc == 0x2B1EE8u) {
        ctx->pc = 0x2B1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EE4u;
        // 0x2b1ee8: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1EECu;
        goto label_2b1eec;
    }
    ctx->pc = 0x2B1EE4u;
    {
        const bool branch_taken_0x2b1ee4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EE4u;
        // 0x2b1ee8: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ee4) {
            ctx->pc = 0x2B20F4u;
            goto label_2b20f4;
        }
    }
    ctx->pc = 0x2B1EECu;
label_2b1eec:
    // 0x2b1eec: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2b1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2b1ef0:
    // 0x2b1ef0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2b1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2b1ef4:
    // 0x2b1ef4: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2b1ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2b1ef8:
    // 0x2b1ef8: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x2b1ef8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b1efc:
    // 0x2b1efc: 0x400013  mtlo        $v0
    ctx->pc = 0x2b1efcu;
    ctx->lo = GPR_U64(ctx, 2);
label_2b1f00:
    // 0x2b1f00: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2b1f00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2b1f04:
    // 0x2b1f04: 0x722f2800  madd        $a1, $s1, $t7
    ctx->pc = 0x2b1f04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2b1f08:
    // 0x2b1f08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2b1f0c:
    // 0x2b1f0c: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x2b1f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2b1f10:
    // 0x2b1f10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b1f10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f14:
    // 0x2b1f14: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_2b1f18:
    // 0x2b1f18: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x2b1f18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f1c:
    // 0x2b1f1c: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x2b1f1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f20:
    // 0x2b1f20: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2b1f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2b1f24:
    // 0x2b1f24: 0x1aa00003  blez        $s5, . + 4 + (0x3 << 2)
label_2b1f28:
    if (ctx->pc == 0x2B1F28u) {
        ctx->pc = 0x2B1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F24u;
        // 0x2b1f28: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F2Cu;
        goto label_2b1f2c;
    }
    ctx->pc = 0x2B1F24u;
    {
        const bool branch_taken_0x2b1f24 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x2B1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F24u;
        // 0x2b1f28: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f24) {
            ctx->pc = 0x2B1F34u;
            goto label_2b1f34;
        }
    }
    ctx->pc = 0x2B1F2Cu;
label_2b1f2c:
    // 0x2b1f2c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_2b1f30:
    if (ctx->pc == 0x2B1F30u) {
        ctx->pc = 0x2B1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F2Cu;
        // 0x2b1f30: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F34u;
        goto label_2b1f34;
    }
    ctx->pc = 0x2B1F2Cu;
    {
        const bool branch_taken_0x2b1f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f2c) {
            ctx->pc = 0x2B1F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1F2Cu;
            // 0x2b1f30: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1FCCu;
            goto label_2b1fcc;
        }
    }
    ctx->pc = 0x2B1F34u;
label_2b1f34:
    // 0x2b1f34: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b1f38:
    // 0x2b1f38: 0x24aa000c  addiu       $t2, $a1, 0xC
    ctx->pc = 0x2b1f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2b1f3c:
    // 0x2b1f3c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b1f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1f40:
    // 0x2b1f40: 0x250d0004  addiu       $t5, $t0, 0x4
    ctx->pc = 0x2b1f40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_2b1f44:
    // 0x2b1f44: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b1f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b1f48:
    // 0x2b1f48: 0x24ec0010  addiu       $t4, $a3, 0x10
    ctx->pc = 0x2b1f48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2b1f4c:
    // 0x2b1f4c: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x2b1f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b1f50:
    // 0x2b1f50: 0x275482b  sltu        $t1, $s3, $s5
    ctx->pc = 0x2b1f50u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2b1f54:
    // 0x2b1f54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b1f58:
    // 0x2b1f58: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2b1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b1f5c:
    // 0x2b1f5c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b1f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b1f60:
    // 0x2b1f60: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2b1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2b1f64:
    // 0x2b1f64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1f68:
    // 0x2b1f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b1f6c:
    // 0x2b1f6c: 0x68700037  ldl         $s0, 0x37($v1)
    ctx->pc = 0x2b1f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2b1f70:
    // 0x2b1f70: 0x6c700030  ldr         $s0, 0x30($v1)
    ctx->pc = 0x2b1f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2b1f74:
    // 0x2b1f74: 0x8c710038  lw          $s1, 0x38($v1)
    ctx->pc = 0x2b1f74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b1f78:
    // 0x2b1f78: 0xb0b00007  sdl         $s0, 0x7($a1)
    ctx->pc = 0x2b1f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1f7c:
    // 0x2b1f7c: 0xb4b00000  sdr         $s0, 0x0($a1)
    ctx->pc = 0x2b1f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1f80:
    // 0x2b1f80: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x2b1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
label_2b1f84:
    // 0x2b1f84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b1f88:
    // 0x2b1f88: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2b1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b1f8c:
    // 0x2b1f8c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b1f90:
    // 0x2b1f90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b1f94:
    // 0x2b1f94: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b1f98:
    // 0x2b1f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b1f9c:
    // 0x2b1f9c: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2b1f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2b1fa0:
    // 0x2b1fa0: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2b1fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b1fa4:
    // 0x2b1fa4: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2b1fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b1fa8:
    // 0x2b1fa8: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2b1fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b1fac:
    // 0x2b1fac: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x2b1facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1fb0:
    // 0x2b1fb0: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x2b1fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1fb4:
    // 0x2b1fb4: 0xb0e6000f  sdl         $a2, 0xF($a3)
    ctx->pc = 0x2b1fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1fb8:
    // 0x2b1fb8: 0xb4e60008  sdr         $a2, 0x8($a3)
    ctx->pc = 0x2b1fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1fbc:
    // 0x2b1fbc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2b1fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1fc0:
    // 0x2b1fc0: 0x1120004c  beqz        $t1, . + 4 + (0x4C << 2)
label_2b1fc4:
    if (ctx->pc == 0x2B1FC4u) {
        ctx->pc = 0x2B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC0u;
        // 0x2b1fc4: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FC8u;
        goto label_2b1fc8;
    }
    ctx->pc = 0x2B1FC0u;
    {
        const bool branch_taken_0x2b1fc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC0u;
        // 0x2b1fc4: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fc0) {
            ctx->pc = 0x2B20F4u;
            goto label_2b20f4;
        }
    }
    ctx->pc = 0x2B1FC8u;
label_2b1fc8:
    // 0x2b1fc8: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2b1fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fcc:
    // 0x2b1fcc: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2b1fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fd0:
    // 0x2b1fd0: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2b1fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fd4:
    // 0x2b1fd4: 0x0  nop
    ctx->pc = 0x2b1fd4u;
    // NOP
label_2b1fd8:
    // 0x2b1fd8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_2b1fdc:
    // 0x2b1fdc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2b1fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2b1fe0:
    // 0x2b1fe0: 0x275482b  sltu        $t1, $s3, $s5
    ctx->pc = 0x2b1fe0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2b1fe4:
    // 0x2b1fe4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b1fe8:
    // 0x2b1fe8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2b1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_2b1fec:
    // 0x2b1fec: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b1fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b1ff0:
    // 0x2b1ff0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b1ff4:
    // 0x2b1ff4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b1ff8:
    // 0x2b1ff8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b1ffc:
    // 0x2b1ffc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2b1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2b2000:
    // 0x2b2000: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2004:
    // 0x2b2004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b2008:
    // 0x2b2008: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x2b2008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b200c:
    // 0x2b200c: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x2b200cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b2010:
    // 0x2b2010: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b2010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2014:
    // 0x2b2014: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x2b2014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b2018:
    // 0x2b2018: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x2b2018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b201c:
    // 0x2b201c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x2b201cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_2b2020:
    // 0x2b2020: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b2020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b2024:
    // 0x2b2024: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b2024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b2028:
    // 0x2b2028: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2b2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b202c:
    // 0x2b202c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b202cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b2030:
    // 0x2b2030: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b2030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b2034:
    // 0x2b2034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b2038:
    // 0x2b2038: 0x68500007  ldl         $s0, 0x7($v0)
    ctx->pc = 0x2b2038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2b203c:
    // 0x2b203c: 0x6c500000  ldr         $s0, 0x0($v0)
    ctx->pc = 0x2b203cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2b2040:
    // 0x2b2040: 0x6851000f  ldl         $s1, 0xF($v0)
    ctx->pc = 0x2b2040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
label_2b2044:
    // 0x2b2044: 0x6c510008  ldr         $s1, 0x8($v0)
    ctx->pc = 0x2b2044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
label_2b2048:
    // 0x2b2048: 0xb0f00007  sdl         $s0, 0x7($a3)
    ctx->pc = 0x2b2048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b204c:
    // 0x2b204c: 0xb4f00000  sdr         $s0, 0x0($a3)
    ctx->pc = 0x2b204cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b2050:
    // 0x2b2050: 0xb0f1000f  sdl         $s1, 0xF($a3)
    ctx->pc = 0x2b2050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b2054:
    // 0x2b2054: 0xb4f10008  sdr         $s1, 0x8($a3)
    ctx->pc = 0x2b2054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b2058:
    // 0x2b2058: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b2058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_2b205c:
    // 0x2b205c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2b205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2060:
    // 0x2b2060: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b2064:
    // 0x2b2064: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2b2064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2b2068:
    // 0x2b2068: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2b2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_2b206c:
    // 0x2b206c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2b206cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b2070:
    // 0x2b2070: 0x256b0018  addiu       $t3, $t3, 0x18
    ctx->pc = 0x2b2070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
label_2b2074:
    // 0x2b2074: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b2074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b2078:
    // 0x2b2078: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b207c:
    // 0x2b207c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2b207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b2080:
    // 0x2b2080: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2b2080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2b2084:
    // 0x2b2084: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2088:
    // 0x2b2088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b208c:
    // 0x2b208c: 0x684a0037  ldl         $t2, 0x37($v0)
    ctx->pc = 0x2b208cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2b2090:
    // 0x2b2090: 0x6c4a0030  ldr         $t2, 0x30($v0)
    ctx->pc = 0x2b2090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2b2094:
    // 0x2b2094: 0x8c4c0038  lw          $t4, 0x38($v0)
    ctx->pc = 0x2b2094u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2098:
    // 0x2b2098: 0xb10a0013  sdl         $t2, 0x13($t0)
    ctx->pc = 0x2b2098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b209c:
    // 0x2b209c: 0xb50a000c  sdr         $t2, 0xC($t0)
    ctx->pc = 0x2b209cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b20a0:
    // 0x2b20a0: 0xad0c0014  sw          $t4, 0x14($t0)
    ctx->pc = 0x2b20a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 12));
label_2b20a4:
    // 0x2b20a4: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x2b20a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_2b20a8:
    // 0x2b20a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b20ac:
    // 0x2b20ac: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b20b0:
    // 0x2b20b0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2b20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b20b4:
    // 0x2b20b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b20b8:
    // 0x2b20b8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b20bc:
    // 0x2b20bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b20c0:
    // 0x2b20c0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2b20c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b20c4:
    // 0x2b20c4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2b20c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b20c8:
    // 0x2b20c8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2b20c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b20cc:
    // 0x2b20cc: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2b20ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b20d0:
    // 0x2b20d0: 0xb0e30017  sdl         $v1, 0x17($a3)
    ctx->pc = 0x2b20d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b20d4:
    // 0x2b20d4: 0xb4e30010  sdr         $v1, 0x10($a3)
    ctx->pc = 0x2b20d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b20d8:
    // 0x2b20d8: 0xb0e4001f  sdl         $a0, 0x1F($a3)
    ctx->pc = 0x2b20d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b20dc:
    // 0x2b20dc: 0xb4e40018  sdr         $a0, 0x18($a3)
    ctx->pc = 0x2b20dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b20e0:
    // 0x2b20e0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2b20e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_2b20e4:
    // 0x2b20e4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2b20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b20e8:
    // 0x2b20e8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2b20e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2b20ec:
    // 0x2b20ec: 0x1520ffba  bnez        $t1, . + 4 + (-0x46 << 2)
label_2b20f0:
    if (ctx->pc == 0x2B20F0u) {
        ctx->pc = 0x2B20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20ECu;
        // 0x2b20f0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20F4u;
        goto label_2b20f4;
    }
    ctx->pc = 0x2B20ECu;
    {
        const bool branch_taken_0x2b20ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20ECu;
        // 0x2b20f0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20ec) {
            ctx->pc = 0x2B1FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1fd8;
        }
    }
    ctx->pc = 0x2B20F4u;
label_2b20f4:
    // 0x2b20f4: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x2b20f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2b20f8:
    // 0x2b20f8: 0x8fac0070  lw          $t4, 0x70($sp)
    ctx->pc = 0x2b20f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b20fc:
    // 0x2b20fc: 0x24c102b  sltu        $v0, $s2, $t4
    ctx->pc = 0x2b20fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_2b2100:
    // 0x2b2100: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
label_2b2104:
    if (ctx->pc == 0x2B2104u) {
        ctx->pc = 0x2B2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2100u;
        // 0x2b2104: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2108u;
        goto label_2b2108;
    }
    ctx->pc = 0x2B2100u;
    {
        const bool branch_taken_0x2b2100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2100u;
        // 0x2b2104: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2100) {
            ctx->pc = 0x2B1EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1eb8;
        }
    }
    ctx->pc = 0x2B2108u;
label_2b2108:
    // 0x2b2108: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2b2108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b210c:
    // 0x2b210c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b210cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2110:
    // 0x2b2110: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2114:
    // 0x2b2114: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b2114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b2118:
    // 0x2b2118: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x2b2118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b211c:
    // 0x2b211c: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x2b211cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b2120:
    // 0x2b2120: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2b2120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b2124:
    // 0x2b2124: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2b2124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b2128:
    // 0x2b2128: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x2b2128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2b212c:
    // 0x2b212c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x2b212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b2130:
    // 0x2b2130: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2b2130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b2134:
    // 0x2b2134: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2b2134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b2138:
    // 0x2b2138: 0x68470057  ldl         $a3, 0x57($v0)
    ctx->pc = 0x2b2138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b213c:
    // 0x2b213c: 0x6c470050  ldr         $a3, 0x50($v0)
    ctx->pc = 0x2b213cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b2140:
    // 0x2b2140: 0xc0af94c  jal         func_2BE530
label_2b2144:
    if (ctx->pc == 0x2B2144u) {
        ctx->pc = 0x2B2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2140u;
        // 0x2b2144: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2148u;
        goto label_2b2148;
    }
    ctx->pc = 0x2B2140u;
    SET_GPR_U32(ctx, 31, 0x2B2148u);
    ctx->pc = 0x2B2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2140u;
    // 0x2b2144: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE530u, 0x2B2140u, 0x2B2148u)) {
        return;
    }
    ctx->pc = 0x2B2148u;
label_2b2148:
    // 0x2b2148: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b2148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b214c:
    // 0x2b214c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2b2150:
    if (ctx->pc == 0x2B2150u) {
        ctx->pc = 0x2B2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B214Cu;
        // 0x2b2150: 0x8fb10070  lw          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2154u;
        goto label_2b2154;
    }
    ctx->pc = 0x2B214Cu;
    {
        const bool branch_taken_0x2b214c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B214Cu;
        // 0x2b2150: 0x8fb10070  lw          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b214c) {
            ctx->pc = 0x2B2200u;
            goto label_2b2200;
        }
    }
    ctx->pc = 0x2B2154u;
label_2b2154:
    // 0x2b2154: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x2b2154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b2158:
    // 0x2b2158: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b215c:
    // 0x2b215c: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x2b215cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2b2160:
    // 0x2b2160: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2b2164:
    // 0x2b2164: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2b2164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b2168:
    // 0x2b2168: 0xafb00098  sw          $s0, 0x98($sp)
    ctx->pc = 0x2b2168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
label_2b216c:
    // 0x2b216c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b2170:
    // 0x2b2170: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2b2174:
    // 0x2b2174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b2174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b2178:
    // 0x2b2178: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2b217c:
    if (ctx->pc == 0x2B217Cu) {
        ctx->pc = 0x2B217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2178u;
        // 0x2b217c: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2180u;
        goto label_2b2180;
    }
    ctx->pc = 0x2B2178u;
    {
        const bool branch_taken_0x2b2178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2178) {
            ctx->pc = 0x2B217Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2178u;
            // 0x2b217c: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B21ECu;
            goto label_2b21ec;
        }
    }
    ctx->pc = 0x2B2180u;
label_2b2180:
    // 0x2b2180: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b2184:
    // 0x2b2184: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2b2188:
    if (ctx->pc == 0x2B2188u) {
        ctx->pc = 0x2B2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2184u;
        // 0x2b2188: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B218Cu;
        goto label_2b218c;
    }
    ctx->pc = 0x2B2184u;
    {
        const bool branch_taken_0x2b2184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2184u;
        // 0x2b2188: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2184) {
            ctx->pc = 0x2B21E8u;
            goto label_2b21e8;
        }
    }
    ctx->pc = 0x2B218Cu;
label_2b218c:
    // 0x2b218c: 0x2559018  mult        $s2, $s2, $s5
    ctx->pc = 0x2b218cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_2b2190:
    // 0x2b2190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b2190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2194:
    // 0x2b2194: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2b2194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2b2198:
    // 0x2b2198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b219c:
    // 0x2b219c: 0x0  nop
    ctx->pc = 0x2b219cu;
    // NOP
label_2b21a0:
    // 0x2b21a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b21a4:
    // 0x2b21a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b21a8:
    // 0x2b21a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b21a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b21ac:
    // 0x2b21ac: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2b21acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2b21b0:
    // 0x2b21b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b21b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b21b4:
    // 0x2b21b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2b21b8:
    // 0x2b21b8: 0x40f809  jalr        $v0
label_2b21bc:
    if (ctx->pc == 0x2B21BCu) {
        ctx->pc = 0x2B21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21B8u;
        // 0x2b21bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21C0u;
        goto label_2b21c0;
    }
    ctx->pc = 0x2B21B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B21C0u);
        ctx->pc = 0x2B21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21B8u;
        // 0x2b21bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21B8u, 0x2B21C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B21C0u;
label_2b21c0:
    // 0x2b21c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b21c4:
    // 0x2b21c4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2b21c8:
    // 0x2b21c8: 0x40f809  jalr        $v0
label_2b21cc:
    if (ctx->pc == 0x2B21CCu) {
        ctx->pc = 0x2B21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21C8u;
        // 0x2b21cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21D0u;
        goto label_2b21d0;
    }
    ctx->pc = 0x2B21C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B21D0u);
        ctx->pc = 0x2B21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21C8u;
        // 0x2b21cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21C8u, 0x2B21D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B21D0u;
label_2b21d0:
    // 0x2b21d0: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2b21d4:
    // 0x2b21d4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2b21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2b21d8:
    // 0x2b21d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b21dc:
    // 0x2b21dc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2b21dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b21e0:
    // 0x2b21e0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2b21e4:
    if (ctx->pc == 0x2B21E4u) {
        ctx->pc = 0x2B21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21E0u;
        // 0x2b21e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21E8u;
        goto label_2b21e8;
    }
    ctx->pc = 0x2B21E0u;
    {
        const bool branch_taken_0x2b21e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b21e0) {
            ctx->pc = 0x2B21E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B21E0u;
            // 0x2b21e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B21A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b21a0;
        }
    }
    ctx->pc = 0x2B21E8u;
label_2b21e8:
    // 0x2b21e8: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b21ec:
    // 0x2b21ec: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x2b21ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2b21f0:
    // 0x2b21f0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b21f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b21f4:
    // 0x2b21f4: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_2b21f8:
    if (ctx->pc == 0x2B21F8u) {
        ctx->pc = 0x2B21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21F4u;
        // 0x2b21f8: 0x2561818  mult        $v1, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B21FCu;
        goto label_2b21fc;
    }
    ctx->pc = 0x2B21F4u;
    {
        const bool branch_taken_0x2b21f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b21f4) {
            ctx->pc = 0x2B21F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B21F4u;
            // 0x2b21f8: 0x2561818  mult        $v1, $s2, $s6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2160;
        }
    }
    ctx->pc = 0x2B21FCu;
label_2b21fc:
    // 0x2b21fc: 0x8fb10070  lw          $s1, 0x70($sp)
    ctx->pc = 0x2b21fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b2200:
    // 0x2b2200: 0x12200173  beqz        $s1, . + 4 + (0x173 << 2)
label_2b2204:
    if (ctx->pc == 0x2B2204u) {
        ctx->pc = 0x2B2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2200u;
        // 0x2b2204: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2208u;
        goto label_2b2208;
    }
    ctx->pc = 0x2B2200u;
    {
        const bool branch_taken_0x2b2200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2200u;
        // 0x2b2204: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2200) {
            ctx->pc = 0x2B27D0u;
            goto label_2b27d0;
        }
    }
    ctx->pc = 0x2B2208u;
label_2b2208:
    // 0x2b2208: 0x122000d6  beqz        $s1, . + 4 + (0xD6 << 2)
label_2b220c:
    if (ctx->pc == 0x2B220Cu) {
        ctx->pc = 0x2B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2208u;
        // 0x2b220c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2210u;
        goto label_2b2210;
    }
    ctx->pc = 0x2B2208u;
    {
        const bool branch_taken_0x2b2208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2208u;
        // 0x2b220c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2208) {
            ctx->pc = 0x2B2564u;
            goto label_2b2564;
        }
    }
    ctx->pc = 0x2B2210u;
label_2b2210:
    // 0x2b2210: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b2210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2b2214:
    // 0x2b2214: 0x0  nop
    ctx->pc = 0x2b2214u;
    // NOP
label_2b2218:
    // 0x2b2218: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2b2218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b221c:
    // 0x2b221c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b221cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b2220:
    // 0x2b2220: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2b2220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_2b2224:
    // 0x2b2224: 0xafb20098  sw          $s2, 0x98($sp)
    ctx->pc = 0x2b2224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
label_2b2228:
    // 0x2b2228: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2b2228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b222c:
    // 0x2b222c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2b222cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b2230:
    // 0x2b2230: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b2230u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2234:
    // 0x2b2234: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2238:
    // 0x2b2238: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b2238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b223c:
    // 0x2b223c: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2b223cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_2b2240:
    // 0x2b2240: 0x9475000c  lhu         $s5, 0xC($v1)
    ctx->pc = 0x2b2240u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2b2244:
    // 0x2b2244: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b2244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b2248:
    // 0x2b2248: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2b224c:
    // 0x2b224c: 0x12a000b5  beqz        $s5, . + 4 + (0xB5 << 2)
label_2b2250:
    if (ctx->pc == 0x2B2250u) {
        ctx->pc = 0x2B2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B224Cu;
        // 0x2b2250: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2254u;
        goto label_2b2254;
    }
    ctx->pc = 0x2B224Cu;
    {
        const bool branch_taken_0x2b224c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B224Cu;
        // 0x2b2250: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b224c) {
            ctx->pc = 0x2B2524u;
            goto label_2b2524;
        }
    }
    ctx->pc = 0x2B2254u;
label_2b2254:
    // 0x2b2254: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2b2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2b2258:
    // 0x2b2258: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2b2258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b225c:
    // 0x2b225c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2b2260:
    // 0x2b2260: 0x400013  mtlo        $v0
    ctx->pc = 0x2b2260u;
    ctx->lo = GPR_U64(ctx, 2);
label_2b2264:
    // 0x2b2264: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2b2264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_2b2268:
    // 0x2b2268: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b226c:
    // 0x2b226c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2b226cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2b2270:
    // 0x2b2270: 0x7222b000  madd        $s6, $s1, $v0
    ctx->pc = 0x2b2270u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2b2274:
    // 0x2b2274: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b2274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2b2278:
    // 0x2b2278: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b2278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2b227c:
    // 0x2b227c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x2b227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_2b2280:
    // 0x2b2280: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b2284:
    // 0x2b2284: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b2284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b2288:
    // 0x2b2288: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b228c:
    // 0x2b228c: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x2b228cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_2b2290:
    // 0x2b2290: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2b2290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2b2294:
    // 0x2b2294: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2b2294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2b2298:
    // 0x2b2298: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2b2298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b229c:
    // 0x2b229c: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x2b229cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b22a0:
    // 0x2b22a0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2b22a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b22a4:
    // 0x2b22a4: 0x0  nop
    ctx->pc = 0x2b22a4u;
    // NOP
label_2b22a8:
    // 0x2b22a8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2b22a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b22ac:
    // 0x2b22ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b22acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b22b0:
    // 0x2b22b0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2b22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b22b4:
    // 0x2b22b4: 0xc0ac608  jal         func_2B1820
label_2b22b8:
    if (ctx->pc == 0x2B22B8u) {
        ctx->pc = 0x2B22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22B4u;
        // 0x2b22b8: 0x8fa60094  lw          $a2, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22BCu;
        goto label_2b22bc;
    }
    ctx->pc = 0x2B22B4u;
    SET_GPR_U32(ctx, 31, 0x2B22BCu);
    ctx->pc = 0x2B22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B22B4u;
    // 0x2b22b8: 0x8fa60094  lw          $a2, 0x94($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B1820u, 0x2B22B4u, 0x2B22BCu)) {
        return;
    }
    ctx->pc = 0x2B22BCu;
label_2b22bc:
    // 0x2b22bc: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_2b22c0:
    if (ctx->pc == 0x2B22C0u) {
        ctx->pc = 0x2B22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22BCu;
        // 0x2b22c0: 0x8fa60094  lw          $a2, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22C4u;
        goto label_2b22c4;
    }
    ctx->pc = 0x2B22BCu;
    {
        const bool branch_taken_0x2b22bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22BCu;
        // 0x2b22c0: 0x8fa60094  lw          $a2, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22bc) {
            ctx->pc = 0x2B24F8u;
            goto label_2b24f8;
        }
    }
    ctx->pc = 0x2B22C4u;
label_2b22c4:
    // 0x2b22c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b22c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b22c8:
    // 0x2b22c8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x2b22c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b22cc:
    // 0x2b22cc: 0xc0ad0b8  jal         func_2B42E0
label_2b22d0:
    if (ctx->pc == 0x2B22D0u) {
        ctx->pc = 0x2B22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22CCu;
        // 0x2b22d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22D4u;
        goto label_2b22d4;
    }
    ctx->pc = 0x2B22CCu;
    SET_GPR_U32(ctx, 31, 0x2B22D4u);
    ctx->pc = 0x2B22D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B22CCu;
    // 0x2b22d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B42E0u, 0x2B22CCu, 0x2B22D4u)) {
        return;
    }
    ctx->pc = 0x2B22D4u;
label_2b22d4:
    // 0x2b22d4: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2b22d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b22d8:
    // 0x2b22d8: 0x8faa00a0  lw          $t2, 0xA0($sp)
    ctx->pc = 0x2b22d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b22dc:
    // 0x2b22dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b22e0:
    // 0x2b22e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b22e4:
    // 0x2b22e4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2b22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_2b22e8:
    // 0x2b22e8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b22e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b22ec:
    // 0x2b22ec: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x2b22ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b22f0:
    // 0x2b22f0: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x2b22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2b22f4:
    // 0x2b22f4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2b22f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2b22f8:
    // 0x2b22f8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b22f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b22fc:
    // 0x2b22fc: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x2b22fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_2b2300:
    // 0x2b2300: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b2300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2304:
    // 0x2b2304: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b2304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2b2308:
    // 0x2b2308: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b2308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2b230c:
    // 0x2b230c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b230cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2b2310:
    // 0x2b2310: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b2310u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b2314:
    // 0x2b2314: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b2314u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2b2318:
    // 0x2b2318: 0x4603a8c3  div.s       $f3, $f21, $f3
    ctx->pc = 0x2b2318u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[3]);
label_2b231c:
    // 0x2b231c: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x2b231cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_2b2320:
    // 0x2b2320: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2b2320u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2b2324:
    // 0x2b2324: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x2b2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2b2328:
    // 0x2b2328: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2b2328u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_2b232c:
    // 0x2b232c: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2b232cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2b2330:
    // 0x2b2330: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x2b2330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2b2334:
    // 0x2b2334: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2b2334u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2b2338:
    // 0x2b2338: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2b2338u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2b233c:
    // 0x2b233c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2b233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2340:
    // 0x2b2340: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2b2340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2b2344:
    // 0x2b2344: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b2344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b2348:
    // 0x2b2348: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2b2348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b234c:
    // 0x2b234c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2b234cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_2b2350:
    // 0x2b2350: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b2350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b2354:
    // 0x2b2354: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2b2354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2358:
    // 0x2b2358: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b2358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2b235c:
    // 0x2b235c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b2360:
    // 0x2b2360: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b2360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2364:
    // 0x2b2364: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x2b2364u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b2368:
    // 0x2b2368: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b236c:
    // 0x2b236c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2b236cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_2b2370:
    // 0x2b2370: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2b2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b2374:
    // 0x2b2374: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2b2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b2378:
    // 0x2b2378: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2b2378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2b237c:
    // 0x2b237c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2b237cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2b2380:
    // 0x2b2380: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2b2380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b2384:
    // 0x2b2384: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b2384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b2388:
    // 0x2b2388: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2b2388u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2b238c:
    // 0x2b238c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2b2390:
    // 0x2b2390: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2b2390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2b2394:
    // 0x2b2394: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b2394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2398:
    // 0x2b2398: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b2398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2b239c:
    // 0x2b239c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b239cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2b23a0:
    // 0x2b23a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b23a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b23a4:
    // 0x2b23a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b23a8:
    // 0x2b23a8: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x2b23a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_2b23ac:
    // 0x2b23ac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b23acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2b23b0:
    // 0x2b23b0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2b23b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2b23b4:
    // 0x2b23b4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b23b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b23b8:
    // 0x2b23b8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2b23b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2b23bc:
    // 0x2b23bc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2b23bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2b23c0:
    // 0x2b23c0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b23c4:
    // 0x2b23c4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2b23c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2b23c8:
    // 0x2b23c8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2b23c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2b23cc:
    // 0x2b23cc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2b23ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2b23d0:
    // 0x2b23d0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b23d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b23d4:
    // 0x2b23d4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2b23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b23d8:
    // 0x2b23d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b23d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b23dc:
    // 0x2b23dc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b23dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2b23e0:
    // 0x2b23e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b23e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b23e4:
    // 0x2b23e4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x2b23e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b23e8:
    // 0x2b23e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2b23e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2b23ec:
    // 0x2b23ec: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2b23ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2b23f0:
    // 0x2b23f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b23f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b23f4:
    // 0x2b23f4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2b23f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b23f8:
    // 0x2b23f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b23f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b23fc:
    // 0x2b23fc: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2b23fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2b2400:
    // 0x2b2400: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2b2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2404:
    // 0x2b2404: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2b2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2408:
    // 0x2b2408: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b240c:
    // 0x2b240c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2b240cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2b2410:
    // 0x2b2410: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2b2410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2b2414:
    // 0x2b2414: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b2414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2418:
    // 0x2b2418: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2b2418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b241c:
    // 0x2b241c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b241cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b2420:
    // 0x2b2420: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2b2420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2b2424:
    // 0x2b2424: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b2424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2428:
    // 0x2b2428: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x2b2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b242c:
    // 0x2b242c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b242cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b2430:
    // 0x2b2430: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x2b2430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2b2434:
    // 0x2b2434: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2b2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2438:
    // 0x2b2438: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b2438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b243c:
    // 0x2b243c: 0xac8c000c  sw          $t4, 0xC($a0)
    ctx->pc = 0x2b243cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 12));
label_2b2440:
    // 0x2b2440: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b2440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b2444:
    // 0x2b2444: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2b2444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2b2448:
    // 0x2b2448: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2b2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b244c:
    // 0x2b244c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2b244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2450:
    // 0x2b2450: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2b2450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_2b2454:
    // 0x2b2454: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b2454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b2458:
    // 0x2b2458: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2b2458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_2b245c:
    // 0x2b245c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2b245cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_2b2460:
    // 0x2b2460: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x2b2460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_2b2464:
    // 0x2b2464: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x2b2464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2b2468:
    // 0x2b2468: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b246c:
    // 0x2b246c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2b2470:
    // 0x2b2470: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2b2470u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2b2474:
    // 0x2b2474: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b2474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2b2478:
    // 0x2b2478: 0x6bc30007  ldl         $v1, 0x7($fp)
    ctx->pc = 0x2b2478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b247c:
    // 0x2b247c: 0x6fc30000  ldr         $v1, 0x0($fp)
    ctx->pc = 0x2b247cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b2480:
    // 0x2b2480: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x2b2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2b2484:
    // 0x2b2484: 0xb0430037  sdl         $v1, 0x37($v0)
    ctx->pc = 0x2b2484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b2488:
    // 0x2b2488: 0xb4430030  sdr         $v1, 0x30($v0)
    ctx->pc = 0x2b2488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b248c:
    // 0x2b248c: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x2b248cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_2b2490:
    // 0x2b2490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2494:
    // 0x2b2494: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b2494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b2498:
    // 0x2b2498: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b249c:
    // 0x2b249c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2b249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b24a0:
    // 0x2b24a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b24a4:
    // 0x2b24a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b24a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b24a8:
    // 0x2b24a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b24ac:
    // 0x2b24ac: 0x6a2a0007  ldl         $t2, 0x7($s1)
    ctx->pc = 0x2b24acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2b24b0:
    // 0x2b24b0: 0x6e2a0000  ldr         $t2, 0x0($s1)
    ctx->pc = 0x2b24b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2b24b4:
    // 0x2b24b4: 0x6a2c000f  ldl         $t4, 0xF($s1)
    ctx->pc = 0x2b24b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2b24b8:
    // 0x2b24b8: 0x6e2c0008  ldr         $t4, 0x8($s1)
    ctx->pc = 0x2b24b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2b24bc:
    // 0x2b24bc: 0xb04a0007  sdl         $t2, 0x7($v0)
    ctx->pc = 0x2b24bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b24c0:
    // 0x2b24c0: 0xb44a0000  sdr         $t2, 0x0($v0)
    ctx->pc = 0x2b24c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b24c4:
    // 0x2b24c4: 0xb04c000f  sdl         $t4, 0xF($v0)
    ctx->pc = 0x2b24c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b24c8:
    // 0x2b24c8: 0x12e50007  beq         $s7, $a1, . + 4 + (0x7 << 2)
label_2b24cc:
    if (ctx->pc == 0x2B24CCu) {
        ctx->pc = 0x2B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24C8u;
        // 0x2b24cc: 0xb44c0008  sdr         $t4, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24D0u;
        goto label_2b24d0;
    }
    ctx->pc = 0x2B24C8u;
    {
        const bool branch_taken_0x2b24c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24C8u;
        // 0x2b24cc: 0xb44c0008  sdr         $t4, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24c8) {
            ctx->pc = 0x2B24E8u;
            goto label_2b24e8;
        }
    }
    ctx->pc = 0x2B24D0u;
label_2b24d0:
    // 0x2b24d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b24d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b24d4:
    // 0x2b24d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b24d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b24d8:
    // 0x2b24d8: 0xc0ad05a  jal         func_2B4168
label_2b24dc:
    if (ctx->pc == 0x2B24DCu) {
        ctx->pc = 0x2B24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24D8u;
        // 0x2b24dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24E0u;
        goto label_2b24e0;
    }
    ctx->pc = 0x2B24D8u;
    SET_GPR_U32(ctx, 31, 0x2B24E0u);
    ctx->pc = 0x2B24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24D8u;
    // 0x2b24dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4168u, 0x2B24D8u, 0x2B24E0u)) {
        return;
    }
    ctx->pc = 0x2B24E0u;
label_2b24e0:
    // 0x2b24e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b24e4:
    if (ctx->pc == 0x2B24E4u) {
        ctx->pc = 0x2B24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E0u;
        // 0x2b24e4: 0x8fa600a0  lw          $a2, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24E8u;
        goto label_2b24e8;
    }
    ctx->pc = 0x2B24E0u;
    {
        const bool branch_taken_0x2b24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E0u;
        // 0x2b24e4: 0x8fa600a0  lw          $a2, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24e0) {
            ctx->pc = 0x2B24FCu;
            goto label_2b24fc;
        }
    }
    ctx->pc = 0x2B24E8u;
label_2b24e8:
    // 0x2b24e8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2b24e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2b24ec:
    // 0x2b24ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b24ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2b24f0:
    // 0x2b24f0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x2b24f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_2b24f4:
    // 0x2b24f4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2b24f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2b24f8:
    // 0x2b24f8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2b24f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b24fc:
    // 0x2b24fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b24fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b2500:
    // 0x2b2500: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2b2500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2b2504:
    // 0x2b2504: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2b2504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2b2508:
    // 0x2b2508: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2b2508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_2b250c:
    // 0x2b250c: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x2b250cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_2b2510:
    // 0x2b2510: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x2b2510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
label_2b2514:
    // 0x2b2514: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2b2514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2b2518:
    // 0x2b2518: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x2b2518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2b251c:
    // 0x2b251c: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
label_2b2520:
    if (ctx->pc == 0x2B2520u) {
        ctx->pc = 0x2B2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B251Cu;
        // 0x2b2520: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2524u;
        goto label_2b2524;
    }
    ctx->pc = 0x2B251Cu;
    {
        const bool branch_taken_0x2b251c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B251Cu;
        // 0x2b2520: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b251c) {
            ctx->pc = 0x2B22A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b22a8;
        }
    }
    ctx->pc = 0x2B2524u;
label_2b2524:
    // 0x2b2524: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x2b2524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b2528:
    // 0x2b2528: 0x8faa0078  lw          $t2, 0x78($sp)
    ctx->pc = 0x2b2528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b252c:
    // 0x2b252c: 0xea8021  addu        $s0, $a3, $t2
    ctx->pc = 0x2b252cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_2b2530:
    // 0x2b2530: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b2530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2534:
    // 0x2b2534: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2538:
    // 0x2b2538: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2b253c:
    // 0x2b253c: 0x40f809  jalr        $v0
label_2b2540:
    if (ctx->pc == 0x2B2540u) {
        ctx->pc = 0x2B2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B253Cu;
        // 0x2b2540: 0x8fb20098  lw          $s2, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2544u;
        goto label_2b2544;
    }
    ctx->pc = 0x2B253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2544u);
        ctx->pc = 0x2B2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B253Cu;
        // 0x2b2540: 0x8fb20098  lw          $s2, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B253Cu, 0x2B2544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2544u;
label_2b2544:
    // 0x2b2544: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b2544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2548:
    // 0x2b2548: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b2548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b254c:
    // 0x2b254c: 0xc0ab47e  jal         func_2AD1F8
label_2b2550:
    if (ctx->pc == 0x2B2550u) {
        ctx->pc = 0x2B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B254Cu;
        // 0x2b2550: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2554u;
        goto label_2b2554;
    }
    ctx->pc = 0x2B254Cu;
    SET_GPR_U32(ctx, 31, 0x2B2554u);
    ctx->pc = 0x2B2550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B254Cu;
    // 0x2b2550: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD1F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD1F8u, 0x2B254Cu, 0x2B2554u)) {
        return;
    }
    ctx->pc = 0x2B2554u;
label_2b2554:
    // 0x2b2554: 0x8fac0070  lw          $t4, 0x70($sp)
    ctx->pc = 0x2b2554u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b2558:
    // 0x2b2558: 0x24c182b  sltu        $v1, $s2, $t4
    ctx->pc = 0x2b2558u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_2b255c:
    // 0x2b255c: 0x1460ff2e  bnez        $v1, . + 4 + (-0xD2 << 2)
label_2b2560:
    if (ctx->pc == 0x2B2560u) {
        ctx->pc = 0x2B2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B255Cu;
        // 0x2b2560: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2564u;
        goto label_2b2564;
    }
    ctx->pc = 0x2B255Cu;
    {
        const bool branch_taken_0x2b255c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B255Cu;
        // 0x2b2560: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b255c) {
            ctx->pc = 0x2B2218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2218;
        }
    }
    ctx->pc = 0x2B2564u;
label_2b2564:
    // 0x2b2564: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2b2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b2568:
    // 0x2b2568: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x2b2568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b256c:
    // 0x2b256c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2b256cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b2570:
    // 0x2b2570: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2574:
    // 0x2b2574: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2b2574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b2578:
    // 0x2b2578: 0x8e870080  lw          $a3, 0x80($s4)
    ctx->pc = 0x2b2578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_2b257c:
    // 0x2b257c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2580:
    // 0x2b2580: 0xc0ab32e  jal         func_2ACCB8
label_2b2584:
    if (ctx->pc == 0x2B2584u) {
        ctx->pc = 0x2B2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2580u;
        // 0x2b2584: 0x8e880088  lw          $t0, 0x88($s4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2588u;
        goto label_2b2588;
    }
    ctx->pc = 0x2B2580u;
    SET_GPR_U32(ctx, 31, 0x2B2588u);
    ctx->pc = 0x2B2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2580u;
    // 0x2b2584: 0x8e880088  lw          $t0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACCB8u, 0x2B2580u, 0x2B2588u)) {
        return;
    }
    ctx->pc = 0x2B2588u;
label_2b2588:
    // 0x2b2588: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x2b2588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b258c:
    // 0x2b258c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b258cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2590:
    // 0x2b2590: 0x8fa80084  lw          $t0, 0x84($sp)
    ctx->pc = 0x2b2590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2b2594:
    // 0x2b2594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2598:
    // 0x2b2598: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x2b2598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2b259c:
    // 0x2b259c: 0x8faa0074  lw          $t2, 0x74($sp)
    ctx->pc = 0x2b259cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b25a0:
    // 0x2b25a0: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x2b25a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_2b25a4:
    // 0x2b25a4: 0xc0b2e16  jal         func_2CB858
label_2b25a8:
    if (ctx->pc == 0x2B25A8u) {
        ctx->pc = 0x2B25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25A4u;
        // 0x2b25a8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25ACu;
        goto label_2b25ac;
    }
    ctx->pc = 0x2B25A4u;
    SET_GPR_U32(ctx, 31, 0x2B25ACu);
    ctx->pc = 0x2B25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25A4u;
    // 0x2b25a8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CB858u, 0x2B25A4u, 0x2B25ACu)) {
        return;
    }
    ctx->pc = 0x2B25ACu;
label_2b25ac:
    // 0x2b25ac: 0x8fa80084  lw          $t0, 0x84($sp)
    ctx->pc = 0x2b25acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2b25b0:
    // 0x2b25b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b25b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b25b4:
    // 0x2b25b4: 0x8faa0074  lw          $t2, 0x74($sp)
    ctx->pc = 0x2b25b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b25b8:
    // 0x2b25b8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2b25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b25bc:
    // 0x2b25bc: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2b25bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b25c0:
    // 0x2b25c0: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x2b25c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b25c4:
    // 0x2b25c4: 0xc0b4b82  jal         func_2D2E08
label_2b25c8:
    if (ctx->pc == 0x2B25C8u) {
        ctx->pc = 0x2B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25C4u;
        // 0x2b25c8: 0x8fa90088  lw          $t1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25CCu;
        goto label_2b25cc;
    }
    ctx->pc = 0x2B25C4u;
    SET_GPR_U32(ctx, 31, 0x2B25CCu);
    ctx->pc = 0x2B25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25C4u;
    // 0x2b25c8: 0x8fa90088  lw          $t1, 0x88($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D2E08u, 0x2B25C4u, 0x2B25CCu)) {
        return;
    }
    ctx->pc = 0x2B25CCu;
label_2b25cc:
    // 0x2b25cc: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x2b25ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b25d0:
    // 0x2b25d0: 0x1200007f  beqz        $s0, . + 4 + (0x7F << 2)
label_2b25d4:
    if (ctx->pc == 0x2B25D4u) {
        ctx->pc = 0x2B25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25D0u;
        // 0x2b25d4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25D8u;
        goto label_2b25d8;
    }
    ctx->pc = 0x2B25D0u;
    {
        const bool branch_taken_0x2b25d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25D0u;
        // 0x2b25d4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25d0) {
            ctx->pc = 0x2B27D0u;
            goto label_2b27d0;
        }
    }
    ctx->pc = 0x2B25D8u;
label_2b25d8:
    // 0x2b25d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2b25dc:
    // 0x2b25dc: 0x0  nop
    ctx->pc = 0x2b25dcu;
    // NOP
label_2b25e0:
    // 0x2b25e0: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x2b25e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b25e4:
    // 0x2b25e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b25e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b25e8:
    // 0x2b25e8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2b25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_2b25ec:
    // 0x2b25ec: 0xafb20098  sw          $s2, 0x98($sp)
    ctx->pc = 0x2b25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
label_2b25f0:
    // 0x2b25f0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2b25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b25f4:
    // 0x2b25f4: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2b25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b25f8:
    // 0x2b25f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b25f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b25fc:
    // 0x2b25fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b2600:
    // 0x2b2600: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x2b2600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_2b2604:
    // 0x2b2604: 0x94b5000c  lhu         $s5, 0xC($a1)
    ctx->pc = 0x2b2604u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_2b2608:
    // 0x2b2608: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b260c:
    // 0x2b260c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b2610:
    // 0x2b2610: 0x12a0005d  beqz        $s5, . + 4 + (0x5D << 2)
label_2b2614:
    if (ctx->pc == 0x2B2614u) {
        ctx->pc = 0x2B2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2610u;
        // 0x2b2614: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2618u;
        goto label_2b2618;
    }
    ctx->pc = 0x2B2610u;
    {
        const bool branch_taken_0x2b2610 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2610u;
        // 0x2b2614: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2610) {
            ctx->pc = 0x2B2788u;
            goto label_2b2788;
        }
    }
    ctx->pc = 0x2B2618u;
label_2b2618:
    // 0x2b2618: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2b2618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2b261c:
    // 0x2b261c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b261cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2b2620:
    // 0x2b2620: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2b2620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b2624:
    // 0x2b2624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2628:
    // 0x2b2628: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x2b2628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2b262c:
    // 0x2b262c: 0x1aa0001f  blez        $s5, . + 4 + (0x1F << 2)
label_2b2630:
    if (ctx->pc == 0x2B2630u) {
        ctx->pc = 0x2B2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B262Cu;
        // 0x2b2630: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2634u;
        goto label_2b2634;
    }
    ctx->pc = 0x2B262Cu;
    {
        const bool branch_taken_0x2b262c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x2B2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B262Cu;
        // 0x2b2630: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b262c) {
            ctx->pc = 0x2B26ACu;
            goto label_2b26ac;
        }
    }
    ctx->pc = 0x2B2634u;
label_2b2634:
    // 0x2b2634: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
label_2b2638:
    if (ctx->pc == 0x2B2638u) {
        ctx->pc = 0x2B2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2634u;
        // 0x2b2638: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B263Cu;
        goto label_2b263c;
    }
    ctx->pc = 0x2B2634u;
    {
        const bool branch_taken_0x2b2634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2634) {
            ctx->pc = 0x2B2638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2634u;
            // 0x2b2638: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26D8u;
            goto label_2b26d8;
        }
    }
    ctx->pc = 0x2B263Cu;
label_2b263c:
    // 0x2b263c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2b263cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b2640:
    // 0x2b2640: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2b2644:
    if (ctx->pc == 0x2B2644u) {
        ctx->pc = 0x2B2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2640u;
        // 0x2b2644: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2648u;
        goto label_2b2648;
    }
    ctx->pc = 0x2B2640u;
    {
        const bool branch_taken_0x2b2640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2640) {
            ctx->pc = 0x2B2644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2640u;
            // 0x2b2644: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26B0u;
            goto label_2b26b0;
        }
    }
    ctx->pc = 0x2B2648u;
label_2b2648:
    // 0x2b2648: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b2648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b264c:
    // 0x2b264c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2b2650:
    if (ctx->pc == 0x2B2650u) {
        ctx->pc = 0x2B2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B264Cu;
        // 0x2b2650: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2654u;
        goto label_2b2654;
    }
    ctx->pc = 0x2B264Cu;
    {
        const bool branch_taken_0x2b264c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b264c) {
            ctx->pc = 0x2B2650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B264Cu;
            // 0x2b2650: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2680u;
            goto label_2b2680;
        }
    }
    ctx->pc = 0x2B2654u;
label_2b2654:
    // 0x2b2654: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b2654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b2658:
    // 0x2b2658: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x2b2658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b265c:
    // 0x2b265c: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2b265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b2660:
    // 0x2b2660: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b2660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2664:
    // 0x2b2664: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2b2664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b2668:
    // 0x2b2668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b266c:
    // 0x2b266c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2b266cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2b2670:
    // 0x2b2670: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b2670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b2674:
    // 0x2b2674: 0xc0af888  jal         func_2BE220
label_2b2678:
    if (ctx->pc == 0x2B2678u) {
        ctx->pc = 0x2B2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2674u;
        // 0x2b2678: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B267Cu;
        goto label_2b267c;
    }
    ctx->pc = 0x2B2674u;
    SET_GPR_U32(ctx, 31, 0x2B267Cu);
    ctx->pc = 0x2B2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2674u;
    // 0x2b2678: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2B2674u, 0x2B267Cu)) {
        return;
    }
    ctx->pc = 0x2B267Cu;
label_2b267c:
    // 0x2b267c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2680:
    // 0x2b2680: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b2680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b2684:
    // 0x2b2684: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2b2684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b2688:
    // 0x2b2688: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b268c:
    // 0x2b268c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b2690:
    // 0x2b2690: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b2690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b2694:
    // 0x2b2694: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2b2694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b2698:
    // 0x2b2698: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b2698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b269c:
    // 0x2b269c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2b269cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2b26a0:
    // 0x2b26a0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b26a4:
    // 0x2b26a4: 0xc0af888  jal         func_2BE220
label_2b26a8:
    if (ctx->pc == 0x2B26A8u) {
        ctx->pc = 0x2B26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26A4u;
        // 0x2b26a8: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26ACu;
        goto label_2b26ac;
    }
    ctx->pc = 0x2B26A4u;
    SET_GPR_U32(ctx, 31, 0x2B26ACu);
    ctx->pc = 0x2B26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26A4u;
    // 0x2b26a8: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2B26A4u, 0x2B26ACu)) {
        return;
    }
    ctx->pc = 0x2B26ACu;
label_2b26ac:
    // 0x2b26ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b26acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b26b0:
    // 0x2b26b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b26b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b26b4:
    // 0x2b26b4: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2b26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b26b8:
    // 0x2b26b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b26bc:
    // 0x2b26bc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b26bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b26c0:
    // 0x2b26c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b26c4:
    // 0x2b26c4: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2b26c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b26c8:
    // 0x2b26c8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b26cc:
    // 0x2b26cc: 0x10000028  b           . + 4 + (0x28 << 2)
label_2b26d0:
    if (ctx->pc == 0x2B26D0u) {
        ctx->pc = 0x2B26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26CCu;
        // 0x2b26d0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26D4u;
        goto label_2b26d4;
    }
    ctx->pc = 0x2B26CCu;
    {
        const bool branch_taken_0x2b26cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26CCu;
        // 0x2b26d0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26cc) {
            ctx->pc = 0x2B2770u;
            goto label_2b2770;
        }
    }
    ctx->pc = 0x2B26D4u;
label_2b26d4:
    // 0x2b26d4: 0x0  nop
    ctx->pc = 0x2b26d4u;
    // NOP
label_2b26d8:
    // 0x2b26d8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2b26d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2b26dc:
    // 0x2b26dc: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2b26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b26e0:
    // 0x2b26e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b26e4:
    // 0x2b26e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b26e8:
    // 0x2b26e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b26ec:
    // 0x2b26ec: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2b26ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b26f0:
    // 0x2b26f0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b26f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b26f4:
    // 0x2b26f4: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b26f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b26f8:
    // 0x2b26f8: 0xc0af888  jal         func_2BE220
label_2b26fc:
    if (ctx->pc == 0x2B26FCu) {
        ctx->pc = 0x2B26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26F8u;
        // 0x2b26fc: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2700u;
        goto label_2b2700;
    }
    ctx->pc = 0x2B26F8u;
    SET_GPR_U32(ctx, 31, 0x2B2700u);
    ctx->pc = 0x2B26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26F8u;
    // 0x2b26fc: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2B26F8u, 0x2B2700u)) {
        return;
    }
    ctx->pc = 0x2B2700u;
label_2b2700:
    // 0x2b2700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b2700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2704:
    // 0x2b2704: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2b2704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b2708:
    // 0x2b2708: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b270c:
    // 0x2b270c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b270cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2710:
    // 0x2b2710: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b2710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b2714:
    // 0x2b2714: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2b2714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b2718:
    // 0x2b2718: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2b2718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b271c:
    // 0x2b271c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b2720:
    // 0x2b2720: 0xc0af888  jal         func_2BE220
label_2b2724:
    if (ctx->pc == 0x2B2724u) {
        ctx->pc = 0x2B2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2720u;
        // 0x2b2724: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2728u;
        goto label_2b2728;
    }
    ctx->pc = 0x2B2720u;
    SET_GPR_U32(ctx, 31, 0x2B2728u);
    ctx->pc = 0x2B2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2720u;
    // 0x2b2724: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2B2720u, 0x2B2728u)) {
        return;
    }
    ctx->pc = 0x2B2728u;
label_2b2728:
    // 0x2b2728: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b2728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b272c:
    // 0x2b272c: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2b272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b2730:
    // 0x2b2730: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b2734:
    // 0x2b2734: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b2734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2738:
    // 0x2b2738: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b2738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b273c:
    // 0x2b273c: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2b273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b2740:
    // 0x2b2740: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2b2740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2b2744:
    // 0x2b2744: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b2744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b2748:
    // 0x2b2748: 0xc0af888  jal         func_2BE220
label_2b274c:
    if (ctx->pc == 0x2B274Cu) {
        ctx->pc = 0x2B274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2748u;
        // 0x2b274c: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2750u;
        goto label_2b2750;
    }
    ctx->pc = 0x2B2748u;
    SET_GPR_U32(ctx, 31, 0x2B2750u);
    ctx->pc = 0x2B274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2748u;
    // 0x2b274c: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2B2748u, 0x2B2750u)) {
        return;
    }
    ctx->pc = 0x2B2750u;
label_2b2750:
    // 0x2b2750: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b2750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2754:
    // 0x2b2754: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2b2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b2758:
    // 0x2b2758: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b275c:
    // 0x2b275c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b275cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2760:
    // 0x2b2760: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b2764:
    // 0x2b2764: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2b2764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b2768:
    // 0x2b2768: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x2b2768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2b276c:
    // 0x2b276c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2b276cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2b2770:
    // 0x2b2770: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b2770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b2774:
    // 0x2b2774: 0xc0af888  jal         func_2BE220
label_2b2778:
    if (ctx->pc == 0x2B2778u) {
        ctx->pc = 0x2B2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2774u;
        // 0x2b2778: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B277Cu;
        goto label_2b277c;
    }
    ctx->pc = 0x2B2774u;
    SET_GPR_U32(ctx, 31, 0x2B277Cu);
    ctx->pc = 0x2B2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2774u;
    // 0x2b2778: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE220u, 0x2B2774u, 0x2B277Cu)) {
        return;
    }
    ctx->pc = 0x2B277Cu;
label_2b277c:
    // 0x2b277c: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x2b277cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2b2780:
    // 0x2b2780: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
label_2b2784:
    if (ctx->pc == 0x2B2784u) {
        ctx->pc = 0x2B2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2780u;
        // 0x2b2784: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2788u;
        goto label_2b2788;
    }
    ctx->pc = 0x2B2780u;
    {
        const bool branch_taken_0x2b2780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2780) {
            ctx->pc = 0x2B2784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2780u;
            // 0x2b2784: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B26D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b26d8;
        }
    }
    ctx->pc = 0x2B2788u;
label_2b2788:
    // 0x2b2788: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x2b2788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b278c:
    // 0x2b278c: 0x8faa0078  lw          $t2, 0x78($sp)
    ctx->pc = 0x2b278cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b2790:
    // 0x2b2790: 0xea8021  addu        $s0, $a3, $t2
    ctx->pc = 0x2b2790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_2b2794:
    // 0x2b2794: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b2794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2798:
    // 0x2b2798: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b279c:
    // 0x2b279c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2b27a0:
    // 0x2b27a0: 0x40f809  jalr        $v0
label_2b27a4:
    if (ctx->pc == 0x2B27A4u) {
        ctx->pc = 0x2B27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27A0u;
        // 0x2b27a4: 0x8fb20098  lw          $s2, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27A8u;
        goto label_2b27a8;
    }
    ctx->pc = 0x2B27A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B27A8u);
        ctx->pc = 0x2B27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27A0u;
        // 0x2b27a4: 0x8fb20098  lw          $s2, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B27A0u, 0x2B27A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B27A8u;
label_2b27a8:
    // 0x2b27a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b27ac:
    // 0x2b27ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b27acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b27b0:
    // 0x2b27b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2b27b4:
    // 0x2b27b4: 0x40f809  jalr        $v0
label_2b27b8:
    if (ctx->pc == 0x2B27B8u) {
        ctx->pc = 0x2B27BCu;
        goto label_2b27bc;
    }
    ctx->pc = 0x2B27B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B27BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B27B4u, 0x2B27BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B27BCu;
label_2b27bc:
    // 0x2b27bc: 0x8fac0070  lw          $t4, 0x70($sp)
    ctx->pc = 0x2b27bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b27c0:
    // 0x2b27c0: 0x24c182b  sltu        $v1, $s2, $t4
    ctx->pc = 0x2b27c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_2b27c4:
    // 0x2b27c4: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
label_2b27c8:
    if (ctx->pc == 0x2B27C8u) {
        ctx->pc = 0x2B27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27C4u;
        // 0x2b27c8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27CCu;
        goto label_2b27cc;
    }
    ctx->pc = 0x2B27C4u;
    {
        const bool branch_taken_0x2b27c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27C4u;
        // 0x2b27c8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27c4) {
            ctx->pc = 0x2B25E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b25e0;
        }
    }
    ctx->pc = 0x2B27CCu;
label_2b27cc:
    // 0x2b27cc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2b27ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b27d0:
    // 0x2b27d0: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2b27d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2b27d4:
    // 0x2b27d4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2b27d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2b27d8:
    // 0x2b27d8: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2b27d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2b27dc:
    // 0x2b27dc: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2b27dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2b27e0:
    // 0x2b27e0: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2b27e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b27e4:
    // 0x2b27e4: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2b27e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b27e8:
    // 0x2b27e8: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2b27e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b27ec:
    // 0x2b27ec: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2b27ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b27f0:
    // 0x2b27f0: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x2b27f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b27f4:
    // 0x2b27f4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b27f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b27f8:
    // 0x2b27f8: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2b27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b27fc:
    // 0x2b27fc: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2b27fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b2800:
    // 0x2b2800: 0x3e00008  jr          $ra
label_2b2804:
    if (ctx->pc == 0x2B2804u) {
        ctx->pc = 0x2B2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2800u;
        // 0x2b2804: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2808u;
        goto label_fallthrough_0x2b2800;
    }
    ctx->pc = 0x2B2800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2800u;
        // 0x2b2804: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b2800:
    ctx->pc = 0x2B2808u;
}
