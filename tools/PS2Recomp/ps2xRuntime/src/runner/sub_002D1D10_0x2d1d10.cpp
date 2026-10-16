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

// Function: sub_002D1D10
// Address: 0x2d1d10 - 0x2d2588
void sub_002D1D10_0x2d1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D10_0x2d1d10");
#endif

    switch (ctx->pc) {
        case 0x2d1d10u: goto label_2d1d10;
        case 0x2d1d14u: goto label_2d1d14;
        case 0x2d1d18u: goto label_2d1d18;
        case 0x2d1d1cu: goto label_2d1d1c;
        case 0x2d1d20u: goto label_2d1d20;
        case 0x2d1d24u: goto label_2d1d24;
        case 0x2d1d28u: goto label_2d1d28;
        case 0x2d1d2cu: goto label_2d1d2c;
        case 0x2d1d30u: goto label_2d1d30;
        case 0x2d1d34u: goto label_2d1d34;
        case 0x2d1d38u: goto label_2d1d38;
        case 0x2d1d3cu: goto label_2d1d3c;
        case 0x2d1d40u: goto label_2d1d40;
        case 0x2d1d44u: goto label_2d1d44;
        case 0x2d1d48u: goto label_2d1d48;
        case 0x2d1d4cu: goto label_2d1d4c;
        case 0x2d1d50u: goto label_2d1d50;
        case 0x2d1d54u: goto label_2d1d54;
        case 0x2d1d58u: goto label_2d1d58;
        case 0x2d1d5cu: goto label_2d1d5c;
        case 0x2d1d60u: goto label_2d1d60;
        case 0x2d1d64u: goto label_2d1d64;
        case 0x2d1d68u: goto label_2d1d68;
        case 0x2d1d6cu: goto label_2d1d6c;
        case 0x2d1d70u: goto label_2d1d70;
        case 0x2d1d74u: goto label_2d1d74;
        case 0x2d1d78u: goto label_2d1d78;
        case 0x2d1d7cu: goto label_2d1d7c;
        case 0x2d1d80u: goto label_2d1d80;
        case 0x2d1d84u: goto label_2d1d84;
        case 0x2d1d88u: goto label_2d1d88;
        case 0x2d1d8cu: goto label_2d1d8c;
        case 0x2d1d90u: goto label_2d1d90;
        case 0x2d1d94u: goto label_2d1d94;
        case 0x2d1d98u: goto label_2d1d98;
        case 0x2d1d9cu: goto label_2d1d9c;
        case 0x2d1da0u: goto label_2d1da0;
        case 0x2d1da4u: goto label_2d1da4;
        case 0x2d1da8u: goto label_2d1da8;
        case 0x2d1dacu: goto label_2d1dac;
        case 0x2d1db0u: goto label_2d1db0;
        case 0x2d1db4u: goto label_2d1db4;
        case 0x2d1db8u: goto label_2d1db8;
        case 0x2d1dbcu: goto label_2d1dbc;
        case 0x2d1dc0u: goto label_2d1dc0;
        case 0x2d1dc4u: goto label_2d1dc4;
        case 0x2d1dc8u: goto label_2d1dc8;
        case 0x2d1dccu: goto label_2d1dcc;
        case 0x2d1dd0u: goto label_2d1dd0;
        case 0x2d1dd4u: goto label_2d1dd4;
        case 0x2d1dd8u: goto label_2d1dd8;
        case 0x2d1ddcu: goto label_2d1ddc;
        case 0x2d1de0u: goto label_2d1de0;
        case 0x2d1de4u: goto label_2d1de4;
        case 0x2d1de8u: goto label_2d1de8;
        case 0x2d1decu: goto label_2d1dec;
        case 0x2d1df0u: goto label_2d1df0;
        case 0x2d1df4u: goto label_2d1df4;
        case 0x2d1df8u: goto label_2d1df8;
        case 0x2d1dfcu: goto label_2d1dfc;
        case 0x2d1e00u: goto label_2d1e00;
        case 0x2d1e04u: goto label_2d1e04;
        case 0x2d1e08u: goto label_2d1e08;
        case 0x2d1e0cu: goto label_2d1e0c;
        case 0x2d1e10u: goto label_2d1e10;
        case 0x2d1e14u: goto label_2d1e14;
        case 0x2d1e18u: goto label_2d1e18;
        case 0x2d1e1cu: goto label_2d1e1c;
        case 0x2d1e20u: goto label_2d1e20;
        case 0x2d1e24u: goto label_2d1e24;
        case 0x2d1e28u: goto label_2d1e28;
        case 0x2d1e2cu: goto label_2d1e2c;
        case 0x2d1e30u: goto label_2d1e30;
        case 0x2d1e34u: goto label_2d1e34;
        case 0x2d1e38u: goto label_2d1e38;
        case 0x2d1e3cu: goto label_2d1e3c;
        case 0x2d1e40u: goto label_2d1e40;
        case 0x2d1e44u: goto label_2d1e44;
        case 0x2d1e48u: goto label_2d1e48;
        case 0x2d1e4cu: goto label_2d1e4c;
        case 0x2d1e50u: goto label_2d1e50;
        case 0x2d1e54u: goto label_2d1e54;
        case 0x2d1e58u: goto label_2d1e58;
        case 0x2d1e5cu: goto label_2d1e5c;
        case 0x2d1e60u: goto label_2d1e60;
        case 0x2d1e64u: goto label_2d1e64;
        case 0x2d1e68u: goto label_2d1e68;
        case 0x2d1e6cu: goto label_2d1e6c;
        case 0x2d1e70u: goto label_2d1e70;
        case 0x2d1e74u: goto label_2d1e74;
        case 0x2d1e78u: goto label_2d1e78;
        case 0x2d1e7cu: goto label_2d1e7c;
        case 0x2d1e80u: goto label_2d1e80;
        case 0x2d1e84u: goto label_2d1e84;
        case 0x2d1e88u: goto label_2d1e88;
        case 0x2d1e8cu: goto label_2d1e8c;
        case 0x2d1e90u: goto label_2d1e90;
        case 0x2d1e94u: goto label_2d1e94;
        case 0x2d1e98u: goto label_2d1e98;
        case 0x2d1e9cu: goto label_2d1e9c;
        case 0x2d1ea0u: goto label_2d1ea0;
        case 0x2d1ea4u: goto label_2d1ea4;
        case 0x2d1ea8u: goto label_2d1ea8;
        case 0x2d1eacu: goto label_2d1eac;
        case 0x2d1eb0u: goto label_2d1eb0;
        case 0x2d1eb4u: goto label_2d1eb4;
        case 0x2d1eb8u: goto label_2d1eb8;
        case 0x2d1ebcu: goto label_2d1ebc;
        case 0x2d1ec0u: goto label_2d1ec0;
        case 0x2d1ec4u: goto label_2d1ec4;
        case 0x2d1ec8u: goto label_2d1ec8;
        case 0x2d1eccu: goto label_2d1ecc;
        case 0x2d1ed0u: goto label_2d1ed0;
        case 0x2d1ed4u: goto label_2d1ed4;
        case 0x2d1ed8u: goto label_2d1ed8;
        case 0x2d1edcu: goto label_2d1edc;
        case 0x2d1ee0u: goto label_2d1ee0;
        case 0x2d1ee4u: goto label_2d1ee4;
        case 0x2d1ee8u: goto label_2d1ee8;
        case 0x2d1eecu: goto label_2d1eec;
        case 0x2d1ef0u: goto label_2d1ef0;
        case 0x2d1ef4u: goto label_2d1ef4;
        case 0x2d1ef8u: goto label_2d1ef8;
        case 0x2d1efcu: goto label_2d1efc;
        case 0x2d1f00u: goto label_2d1f00;
        case 0x2d1f04u: goto label_2d1f04;
        case 0x2d1f08u: goto label_2d1f08;
        case 0x2d1f0cu: goto label_2d1f0c;
        case 0x2d1f10u: goto label_2d1f10;
        case 0x2d1f14u: goto label_2d1f14;
        case 0x2d1f18u: goto label_2d1f18;
        case 0x2d1f1cu: goto label_2d1f1c;
        case 0x2d1f20u: goto label_2d1f20;
        case 0x2d1f24u: goto label_2d1f24;
        case 0x2d1f28u: goto label_2d1f28;
        case 0x2d1f2cu: goto label_2d1f2c;
        case 0x2d1f30u: goto label_2d1f30;
        case 0x2d1f34u: goto label_2d1f34;
        case 0x2d1f38u: goto label_2d1f38;
        case 0x2d1f3cu: goto label_2d1f3c;
        case 0x2d1f40u: goto label_2d1f40;
        case 0x2d1f44u: goto label_2d1f44;
        case 0x2d1f48u: goto label_2d1f48;
        case 0x2d1f4cu: goto label_2d1f4c;
        case 0x2d1f50u: goto label_2d1f50;
        case 0x2d1f54u: goto label_2d1f54;
        case 0x2d1f58u: goto label_2d1f58;
        case 0x2d1f5cu: goto label_2d1f5c;
        case 0x2d1f60u: goto label_2d1f60;
        case 0x2d1f64u: goto label_2d1f64;
        case 0x2d1f68u: goto label_2d1f68;
        case 0x2d1f6cu: goto label_2d1f6c;
        case 0x2d1f70u: goto label_2d1f70;
        case 0x2d1f74u: goto label_2d1f74;
        case 0x2d1f78u: goto label_2d1f78;
        case 0x2d1f7cu: goto label_2d1f7c;
        case 0x2d1f80u: goto label_2d1f80;
        case 0x2d1f84u: goto label_2d1f84;
        case 0x2d1f88u: goto label_2d1f88;
        case 0x2d1f8cu: goto label_2d1f8c;
        case 0x2d1f90u: goto label_2d1f90;
        case 0x2d1f94u: goto label_2d1f94;
        case 0x2d1f98u: goto label_2d1f98;
        case 0x2d1f9cu: goto label_2d1f9c;
        case 0x2d1fa0u: goto label_2d1fa0;
        case 0x2d1fa4u: goto label_2d1fa4;
        case 0x2d1fa8u: goto label_2d1fa8;
        case 0x2d1facu: goto label_2d1fac;
        case 0x2d1fb0u: goto label_2d1fb0;
        case 0x2d1fb4u: goto label_2d1fb4;
        case 0x2d1fb8u: goto label_2d1fb8;
        case 0x2d1fbcu: goto label_2d1fbc;
        case 0x2d1fc0u: goto label_2d1fc0;
        case 0x2d1fc4u: goto label_2d1fc4;
        case 0x2d1fc8u: goto label_2d1fc8;
        case 0x2d1fccu: goto label_2d1fcc;
        case 0x2d1fd0u: goto label_2d1fd0;
        case 0x2d1fd4u: goto label_2d1fd4;
        case 0x2d1fd8u: goto label_2d1fd8;
        case 0x2d1fdcu: goto label_2d1fdc;
        case 0x2d1fe0u: goto label_2d1fe0;
        case 0x2d1fe4u: goto label_2d1fe4;
        case 0x2d1fe8u: goto label_2d1fe8;
        case 0x2d1fecu: goto label_2d1fec;
        case 0x2d1ff0u: goto label_2d1ff0;
        case 0x2d1ff4u: goto label_2d1ff4;
        case 0x2d1ff8u: goto label_2d1ff8;
        case 0x2d1ffcu: goto label_2d1ffc;
        case 0x2d2000u: goto label_2d2000;
        case 0x2d2004u: goto label_2d2004;
        case 0x2d2008u: goto label_2d2008;
        case 0x2d200cu: goto label_2d200c;
        case 0x2d2010u: goto label_2d2010;
        case 0x2d2014u: goto label_2d2014;
        case 0x2d2018u: goto label_2d2018;
        case 0x2d201cu: goto label_2d201c;
        case 0x2d2020u: goto label_2d2020;
        case 0x2d2024u: goto label_2d2024;
        case 0x2d2028u: goto label_2d2028;
        case 0x2d202cu: goto label_2d202c;
        case 0x2d2030u: goto label_2d2030;
        case 0x2d2034u: goto label_2d2034;
        case 0x2d2038u: goto label_2d2038;
        case 0x2d203cu: goto label_2d203c;
        case 0x2d2040u: goto label_2d2040;
        case 0x2d2044u: goto label_2d2044;
        case 0x2d2048u: goto label_2d2048;
        case 0x2d204cu: goto label_2d204c;
        case 0x2d2050u: goto label_2d2050;
        case 0x2d2054u: goto label_2d2054;
        case 0x2d2058u: goto label_2d2058;
        case 0x2d205cu: goto label_2d205c;
        case 0x2d2060u: goto label_2d2060;
        case 0x2d2064u: goto label_2d2064;
        case 0x2d2068u: goto label_2d2068;
        case 0x2d206cu: goto label_2d206c;
        case 0x2d2070u: goto label_2d2070;
        case 0x2d2074u: goto label_2d2074;
        case 0x2d2078u: goto label_2d2078;
        case 0x2d207cu: goto label_2d207c;
        case 0x2d2080u: goto label_2d2080;
        case 0x2d2084u: goto label_2d2084;
        case 0x2d2088u: goto label_2d2088;
        case 0x2d208cu: goto label_2d208c;
        case 0x2d2090u: goto label_2d2090;
        case 0x2d2094u: goto label_2d2094;
        case 0x2d2098u: goto label_2d2098;
        case 0x2d209cu: goto label_2d209c;
        case 0x2d20a0u: goto label_2d20a0;
        case 0x2d20a4u: goto label_2d20a4;
        case 0x2d20a8u: goto label_2d20a8;
        case 0x2d20acu: goto label_2d20ac;
        case 0x2d20b0u: goto label_2d20b0;
        case 0x2d20b4u: goto label_2d20b4;
        case 0x2d20b8u: goto label_2d20b8;
        case 0x2d20bcu: goto label_2d20bc;
        case 0x2d20c0u: goto label_2d20c0;
        case 0x2d20c4u: goto label_2d20c4;
        case 0x2d20c8u: goto label_2d20c8;
        case 0x2d20ccu: goto label_2d20cc;
        case 0x2d20d0u: goto label_2d20d0;
        case 0x2d20d4u: goto label_2d20d4;
        case 0x2d20d8u: goto label_2d20d8;
        case 0x2d20dcu: goto label_2d20dc;
        case 0x2d20e0u: goto label_2d20e0;
        case 0x2d20e4u: goto label_2d20e4;
        case 0x2d20e8u: goto label_2d20e8;
        case 0x2d20ecu: goto label_2d20ec;
        case 0x2d20f0u: goto label_2d20f0;
        case 0x2d20f4u: goto label_2d20f4;
        case 0x2d20f8u: goto label_2d20f8;
        case 0x2d20fcu: goto label_2d20fc;
        case 0x2d2100u: goto label_2d2100;
        case 0x2d2104u: goto label_2d2104;
        case 0x2d2108u: goto label_2d2108;
        case 0x2d210cu: goto label_2d210c;
        case 0x2d2110u: goto label_2d2110;
        case 0x2d2114u: goto label_2d2114;
        case 0x2d2118u: goto label_2d2118;
        case 0x2d211cu: goto label_2d211c;
        case 0x2d2120u: goto label_2d2120;
        case 0x2d2124u: goto label_2d2124;
        case 0x2d2128u: goto label_2d2128;
        case 0x2d212cu: goto label_2d212c;
        case 0x2d2130u: goto label_2d2130;
        case 0x2d2134u: goto label_2d2134;
        case 0x2d2138u: goto label_2d2138;
        case 0x2d213cu: goto label_2d213c;
        case 0x2d2140u: goto label_2d2140;
        case 0x2d2144u: goto label_2d2144;
        case 0x2d2148u: goto label_2d2148;
        case 0x2d214cu: goto label_2d214c;
        case 0x2d2150u: goto label_2d2150;
        case 0x2d2154u: goto label_2d2154;
        case 0x2d2158u: goto label_2d2158;
        case 0x2d215cu: goto label_2d215c;
        case 0x2d2160u: goto label_2d2160;
        case 0x2d2164u: goto label_2d2164;
        case 0x2d2168u: goto label_2d2168;
        case 0x2d216cu: goto label_2d216c;
        case 0x2d2170u: goto label_2d2170;
        case 0x2d2174u: goto label_2d2174;
        case 0x2d2178u: goto label_2d2178;
        case 0x2d217cu: goto label_2d217c;
        case 0x2d2180u: goto label_2d2180;
        case 0x2d2184u: goto label_2d2184;
        case 0x2d2188u: goto label_2d2188;
        case 0x2d218cu: goto label_2d218c;
        case 0x2d2190u: goto label_2d2190;
        case 0x2d2194u: goto label_2d2194;
        case 0x2d2198u: goto label_2d2198;
        case 0x2d219cu: goto label_2d219c;
        case 0x2d21a0u: goto label_2d21a0;
        case 0x2d21a4u: goto label_2d21a4;
        case 0x2d21a8u: goto label_2d21a8;
        case 0x2d21acu: goto label_2d21ac;
        case 0x2d21b0u: goto label_2d21b0;
        case 0x2d21b4u: goto label_2d21b4;
        case 0x2d21b8u: goto label_2d21b8;
        case 0x2d21bcu: goto label_2d21bc;
        case 0x2d21c0u: goto label_2d21c0;
        case 0x2d21c4u: goto label_2d21c4;
        case 0x2d21c8u: goto label_2d21c8;
        case 0x2d21ccu: goto label_2d21cc;
        case 0x2d21d0u: goto label_2d21d0;
        case 0x2d21d4u: goto label_2d21d4;
        case 0x2d21d8u: goto label_2d21d8;
        case 0x2d21dcu: goto label_2d21dc;
        case 0x2d21e0u: goto label_2d21e0;
        case 0x2d21e4u: goto label_2d21e4;
        case 0x2d21e8u: goto label_2d21e8;
        case 0x2d21ecu: goto label_2d21ec;
        case 0x2d21f0u: goto label_2d21f0;
        case 0x2d21f4u: goto label_2d21f4;
        case 0x2d21f8u: goto label_2d21f8;
        case 0x2d21fcu: goto label_2d21fc;
        case 0x2d2200u: goto label_2d2200;
        case 0x2d2204u: goto label_2d2204;
        case 0x2d2208u: goto label_2d2208;
        case 0x2d220cu: goto label_2d220c;
        case 0x2d2210u: goto label_2d2210;
        case 0x2d2214u: goto label_2d2214;
        case 0x2d2218u: goto label_2d2218;
        case 0x2d221cu: goto label_2d221c;
        case 0x2d2220u: goto label_2d2220;
        case 0x2d2224u: goto label_2d2224;
        case 0x2d2228u: goto label_2d2228;
        case 0x2d222cu: goto label_2d222c;
        case 0x2d2230u: goto label_2d2230;
        case 0x2d2234u: goto label_2d2234;
        case 0x2d2238u: goto label_2d2238;
        case 0x2d223cu: goto label_2d223c;
        case 0x2d2240u: goto label_2d2240;
        case 0x2d2244u: goto label_2d2244;
        case 0x2d2248u: goto label_2d2248;
        case 0x2d224cu: goto label_2d224c;
        case 0x2d2250u: goto label_2d2250;
        case 0x2d2254u: goto label_2d2254;
        case 0x2d2258u: goto label_2d2258;
        case 0x2d225cu: goto label_2d225c;
        case 0x2d2260u: goto label_2d2260;
        case 0x2d2264u: goto label_2d2264;
        case 0x2d2268u: goto label_2d2268;
        case 0x2d226cu: goto label_2d226c;
        case 0x2d2270u: goto label_2d2270;
        case 0x2d2274u: goto label_2d2274;
        case 0x2d2278u: goto label_2d2278;
        case 0x2d227cu: goto label_2d227c;
        case 0x2d2280u: goto label_2d2280;
        case 0x2d2284u: goto label_2d2284;
        case 0x2d2288u: goto label_2d2288;
        case 0x2d228cu: goto label_2d228c;
        case 0x2d2290u: goto label_2d2290;
        case 0x2d2294u: goto label_2d2294;
        case 0x2d2298u: goto label_2d2298;
        case 0x2d229cu: goto label_2d229c;
        case 0x2d22a0u: goto label_2d22a0;
        case 0x2d22a4u: goto label_2d22a4;
        case 0x2d22a8u: goto label_2d22a8;
        case 0x2d22acu: goto label_2d22ac;
        case 0x2d22b0u: goto label_2d22b0;
        case 0x2d22b4u: goto label_2d22b4;
        case 0x2d22b8u: goto label_2d22b8;
        case 0x2d22bcu: goto label_2d22bc;
        case 0x2d22c0u: goto label_2d22c0;
        case 0x2d22c4u: goto label_2d22c4;
        case 0x2d22c8u: goto label_2d22c8;
        case 0x2d22ccu: goto label_2d22cc;
        case 0x2d22d0u: goto label_2d22d0;
        case 0x2d22d4u: goto label_2d22d4;
        case 0x2d22d8u: goto label_2d22d8;
        case 0x2d22dcu: goto label_2d22dc;
        case 0x2d22e0u: goto label_2d22e0;
        case 0x2d22e4u: goto label_2d22e4;
        case 0x2d22e8u: goto label_2d22e8;
        case 0x2d22ecu: goto label_2d22ec;
        case 0x2d22f0u: goto label_2d22f0;
        case 0x2d22f4u: goto label_2d22f4;
        case 0x2d22f8u: goto label_2d22f8;
        case 0x2d22fcu: goto label_2d22fc;
        case 0x2d2300u: goto label_2d2300;
        case 0x2d2304u: goto label_2d2304;
        case 0x2d2308u: goto label_2d2308;
        case 0x2d230cu: goto label_2d230c;
        case 0x2d2310u: goto label_2d2310;
        case 0x2d2314u: goto label_2d2314;
        case 0x2d2318u: goto label_2d2318;
        case 0x2d231cu: goto label_2d231c;
        case 0x2d2320u: goto label_2d2320;
        case 0x2d2324u: goto label_2d2324;
        case 0x2d2328u: goto label_2d2328;
        case 0x2d232cu: goto label_2d232c;
        case 0x2d2330u: goto label_2d2330;
        case 0x2d2334u: goto label_2d2334;
        case 0x2d2338u: goto label_2d2338;
        case 0x2d233cu: goto label_2d233c;
        case 0x2d2340u: goto label_2d2340;
        case 0x2d2344u: goto label_2d2344;
        case 0x2d2348u: goto label_2d2348;
        case 0x2d234cu: goto label_2d234c;
        case 0x2d2350u: goto label_2d2350;
        case 0x2d2354u: goto label_2d2354;
        case 0x2d2358u: goto label_2d2358;
        case 0x2d235cu: goto label_2d235c;
        case 0x2d2360u: goto label_2d2360;
        case 0x2d2364u: goto label_2d2364;
        case 0x2d2368u: goto label_2d2368;
        case 0x2d236cu: goto label_2d236c;
        case 0x2d2370u: goto label_2d2370;
        case 0x2d2374u: goto label_2d2374;
        case 0x2d2378u: goto label_2d2378;
        case 0x2d237cu: goto label_2d237c;
        case 0x2d2380u: goto label_2d2380;
        case 0x2d2384u: goto label_2d2384;
        case 0x2d2388u: goto label_2d2388;
        case 0x2d238cu: goto label_2d238c;
        case 0x2d2390u: goto label_2d2390;
        case 0x2d2394u: goto label_2d2394;
        case 0x2d2398u: goto label_2d2398;
        case 0x2d239cu: goto label_2d239c;
        case 0x2d23a0u: goto label_2d23a0;
        case 0x2d23a4u: goto label_2d23a4;
        case 0x2d23a8u: goto label_2d23a8;
        case 0x2d23acu: goto label_2d23ac;
        case 0x2d23b0u: goto label_2d23b0;
        case 0x2d23b4u: goto label_2d23b4;
        case 0x2d23b8u: goto label_2d23b8;
        case 0x2d23bcu: goto label_2d23bc;
        case 0x2d23c0u: goto label_2d23c0;
        case 0x2d23c4u: goto label_2d23c4;
        case 0x2d23c8u: goto label_2d23c8;
        case 0x2d23ccu: goto label_2d23cc;
        case 0x2d23d0u: goto label_2d23d0;
        case 0x2d23d4u: goto label_2d23d4;
        case 0x2d23d8u: goto label_2d23d8;
        case 0x2d23dcu: goto label_2d23dc;
        case 0x2d23e0u: goto label_2d23e0;
        case 0x2d23e4u: goto label_2d23e4;
        case 0x2d23e8u: goto label_2d23e8;
        case 0x2d23ecu: goto label_2d23ec;
        case 0x2d23f0u: goto label_2d23f0;
        case 0x2d23f4u: goto label_2d23f4;
        case 0x2d23f8u: goto label_2d23f8;
        case 0x2d23fcu: goto label_2d23fc;
        case 0x2d2400u: goto label_2d2400;
        case 0x2d2404u: goto label_2d2404;
        case 0x2d2408u: goto label_2d2408;
        case 0x2d240cu: goto label_2d240c;
        case 0x2d2410u: goto label_2d2410;
        case 0x2d2414u: goto label_2d2414;
        case 0x2d2418u: goto label_2d2418;
        case 0x2d241cu: goto label_2d241c;
        case 0x2d2420u: goto label_2d2420;
        case 0x2d2424u: goto label_2d2424;
        case 0x2d2428u: goto label_2d2428;
        case 0x2d242cu: goto label_2d242c;
        case 0x2d2430u: goto label_2d2430;
        case 0x2d2434u: goto label_2d2434;
        case 0x2d2438u: goto label_2d2438;
        case 0x2d243cu: goto label_2d243c;
        case 0x2d2440u: goto label_2d2440;
        case 0x2d2444u: goto label_2d2444;
        case 0x2d2448u: goto label_2d2448;
        case 0x2d244cu: goto label_2d244c;
        case 0x2d2450u: goto label_2d2450;
        case 0x2d2454u: goto label_2d2454;
        case 0x2d2458u: goto label_2d2458;
        case 0x2d245cu: goto label_2d245c;
        case 0x2d2460u: goto label_2d2460;
        case 0x2d2464u: goto label_2d2464;
        case 0x2d2468u: goto label_2d2468;
        case 0x2d246cu: goto label_2d246c;
        case 0x2d2470u: goto label_2d2470;
        case 0x2d2474u: goto label_2d2474;
        case 0x2d2478u: goto label_2d2478;
        case 0x2d247cu: goto label_2d247c;
        case 0x2d2480u: goto label_2d2480;
        case 0x2d2484u: goto label_2d2484;
        case 0x2d2488u: goto label_2d2488;
        case 0x2d248cu: goto label_2d248c;
        case 0x2d2490u: goto label_2d2490;
        case 0x2d2494u: goto label_2d2494;
        case 0x2d2498u: goto label_2d2498;
        case 0x2d249cu: goto label_2d249c;
        case 0x2d24a0u: goto label_2d24a0;
        case 0x2d24a4u: goto label_2d24a4;
        case 0x2d24a8u: goto label_2d24a8;
        case 0x2d24acu: goto label_2d24ac;
        case 0x2d24b0u: goto label_2d24b0;
        case 0x2d24b4u: goto label_2d24b4;
        case 0x2d24b8u: goto label_2d24b8;
        case 0x2d24bcu: goto label_2d24bc;
        case 0x2d24c0u: goto label_2d24c0;
        case 0x2d24c4u: goto label_2d24c4;
        case 0x2d24c8u: goto label_2d24c8;
        case 0x2d24ccu: goto label_2d24cc;
        case 0x2d24d0u: goto label_2d24d0;
        case 0x2d24d4u: goto label_2d24d4;
        case 0x2d24d8u: goto label_2d24d8;
        case 0x2d24dcu: goto label_2d24dc;
        case 0x2d24e0u: goto label_2d24e0;
        case 0x2d24e4u: goto label_2d24e4;
        case 0x2d24e8u: goto label_2d24e8;
        case 0x2d24ecu: goto label_2d24ec;
        case 0x2d24f0u: goto label_2d24f0;
        case 0x2d24f4u: goto label_2d24f4;
        case 0x2d24f8u: goto label_2d24f8;
        case 0x2d24fcu: goto label_2d24fc;
        case 0x2d2500u: goto label_2d2500;
        case 0x2d2504u: goto label_2d2504;
        case 0x2d2508u: goto label_2d2508;
        case 0x2d250cu: goto label_2d250c;
        case 0x2d2510u: goto label_2d2510;
        case 0x2d2514u: goto label_2d2514;
        case 0x2d2518u: goto label_2d2518;
        case 0x2d251cu: goto label_2d251c;
        case 0x2d2520u: goto label_2d2520;
        case 0x2d2524u: goto label_2d2524;
        case 0x2d2528u: goto label_2d2528;
        case 0x2d252cu: goto label_2d252c;
        case 0x2d2530u: goto label_2d2530;
        case 0x2d2534u: goto label_2d2534;
        case 0x2d2538u: goto label_2d2538;
        case 0x2d253cu: goto label_2d253c;
        case 0x2d2540u: goto label_2d2540;
        case 0x2d2544u: goto label_2d2544;
        case 0x2d2548u: goto label_2d2548;
        case 0x2d254cu: goto label_2d254c;
        case 0x2d2550u: goto label_2d2550;
        case 0x2d2554u: goto label_2d2554;
        case 0x2d2558u: goto label_2d2558;
        case 0x2d255cu: goto label_2d255c;
        case 0x2d2560u: goto label_2d2560;
        case 0x2d2564u: goto label_2d2564;
        case 0x2d2568u: goto label_2d2568;
        case 0x2d256cu: goto label_2d256c;
        case 0x2d2570u: goto label_2d2570;
        case 0x2d2574u: goto label_2d2574;
        case 0x2d2578u: goto label_2d2578;
        case 0x2d257cu: goto label_2d257c;
        case 0x2d2580u: goto label_2d2580;
        case 0x2d2584u: goto label_2d2584;
        default: break;
    }

    ctx->pc = 0x2d1d10u;

label_2d1d10:
    // 0x2d1d10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2d1d14:
    // 0x2d1d14: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d1d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2d1d18:
    // 0x2d1d18: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d1d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2d1d1c:
    // 0x2d1d1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d1d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d20:
    // 0x2d1d20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2d1d24:
    // 0x2d1d24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d1d24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d28:
    // 0x2d1d28: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2d1d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2d1d2c:
    // 0x2d1d2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d1d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2d1d30:
    // 0x2d1d30: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d1d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2d1d34:
    // 0x2d1d34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d1d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d38:
    // 0x2d1d38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2d1d3c:
    // 0x2d1d3c: 0x24a5eb90  addiu       $a1, $a1, -0x1470
    ctx->pc = 0x2d1d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962064));
label_2d1d40:
    // 0x2d1d40: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2d1d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2d1d44:
    // 0x2d1d44: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2d1d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_2d1d48:
    // 0x2d1d48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d1d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1d4c:
    // 0x2d1d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d1d50:
    // 0x2d1d50: 0xc0aa872  jal         func_2AA1C8
label_2d1d54:
    if (ctx->pc == 0x2D1D54u) {
        ctx->pc = 0x2D1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D50u;
        // 0x2d1d54: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D58u;
        goto label_2d1d58;
    }
    ctx->pc = 0x2D1D50u;
    SET_GPR_U32(ctx, 31, 0x2D1D58u);
    ctx->pc = 0x2D1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D50u;
    // 0x2d1d54: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2D1D50u, 0x2D1D58u)) {
        return;
    }
    ctx->pc = 0x2D1D58u;
label_2d1d58:
    // 0x2d1d58: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2d1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2d1d5c:
    // 0x2d1d5c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d1d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2d1d60:
    // 0x2d1d60: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x2d1d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2d1d64:
    // 0x2d1d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1d68:
    // 0x2d1d68: 0x8ec20114  lw          $v0, 0x114($s6)
    ctx->pc = 0x2d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 276)));
label_2d1d6c:
    // 0x2d1d6c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2d1d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2d1d70:
    // 0x2d1d70: 0x40f809  jalr        $v0
label_2d1d74:
    if (ctx->pc == 0x2D1D74u) {
        ctx->pc = 0x2D1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D70u;
        // 0x2d1d74: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D78u;
        goto label_2d1d78;
    }
    ctx->pc = 0x2D1D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1D78u);
        ctx->pc = 0x2D1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D70u;
        // 0x2d1d74: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D70u, 0x2D1D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1D78u;
label_2d1d78:
    // 0x2d1d78: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_2d1d7c:
    // 0x2d1d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d80:
    // 0x2d1d80: 0x247726b0  addiu       $s7, $v1, 0x26B0
    ctx->pc = 0x2d1d80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2d1d84:
    // 0x2d1d84: 0xaeb00040  sw          $s0, 0x40($s5)
    ctx->pc = 0x2d1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 16));
label_2d1d88:
    // 0x2d1d88: 0xaeb70044  sw          $s7, 0x44($s5)
    ctx->pc = 0x2d1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 23));
label_2d1d8c:
    // 0x2d1d8c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d1d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2d1d90:
    // 0x2d1d90: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2d1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2d1d94:
    // 0x2d1d94: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d1d98:
    // 0x2d1d98: 0xc0ad2b4  jal         func_2B4AD0
label_2d1d9c:
    if (ctx->pc == 0x2D1D9Cu) {
        ctx->pc = 0x2D1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D98u;
        // 0x2d1d9c: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DA0u;
        goto label_2d1da0;
    }
    ctx->pc = 0x2D1D98u;
    SET_GPR_U32(ctx, 31, 0x2D1DA0u);
    ctx->pc = 0x2D1D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D98u;
    // 0x2d1d9c: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2D1D98u, 0x2D1DA0u)) {
        return;
    }
    ctx->pc = 0x2D1DA0u;
label_2d1da0:
    // 0x2d1da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1da4:
    // 0x2d1da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1da8:
    // 0x2d1da8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2d1da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2d1dac:
    // 0x2d1dac: 0xc0c493d  jal         func_3124F4
label_2d1db0:
    if (ctx->pc == 0x2D1DB0u) {
        ctx->pc = 0x2D1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DACu;
        // 0x2d1db0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DB4u;
        goto label_2d1db4;
    }
    ctx->pc = 0x2D1DACu;
    SET_GPR_U32(ctx, 31, 0x2D1DB4u);
    ctx->pc = 0x2D1DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1DACu;
    // 0x2d1db0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2D1DACu, 0x2D1DB4u)) {
        return;
    }
    ctx->pc = 0x2D1DB4u;
label_2d1db4:
    // 0x2d1db4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2d1db8:
    // 0x2d1db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d1dbc:
    // 0x2d1dbc: 0xae110074  sw          $s1, 0x74($s0)
    ctx->pc = 0x2d1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 17));
label_2d1dc0:
    // 0x2d1dc0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2d1dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2d1dc4:
    // 0x2d1dc4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2d1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_2d1dc8:
    // 0x2d1dc8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2d1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2d1dcc:
    // 0x2d1dcc: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2d1dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_2d1dd0:
    // 0x2d1dd0: 0x8eb10040  lw          $s1, 0x40($s5)
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_2d1dd4:
    // 0x2d1dd4: 0xc0ad2d0  jal         func_2B4B40
label_2d1dd8:
    if (ctx->pc == 0x2D1DD8u) {
        ctx->pc = 0x2D1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DD4u;
        // 0x2d1dd8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DDCu;
        goto label_2d1ddc;
    }
    ctx->pc = 0x2D1DD4u;
    SET_GPR_U32(ctx, 31, 0x2D1DDCu);
    ctx->pc = 0x2D1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1DD4u;
    // 0x2d1dd8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2D1DD4u, 0x2D1DDCu)) {
        return;
    }
    ctx->pc = 0x2D1DDCu;
label_2d1ddc:
    // 0x2d1ddc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d1de0:
    // 0x2d1de0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2d1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2d1de4:
    // 0x2d1de4: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x2d1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_2d1de8:
    // 0x2d1de8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d1de8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1dec:
    // 0x2d1dec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2d1decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2d1df0:
    // 0x2d1df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2d1df4:
    if (ctx->pc == 0x2D1DF4u) {
        ctx->pc = 0x2D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DF0u;
        // 0x2d1df4: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DF8u;
        goto label_2d1df8;
    }
    ctx->pc = 0x2D1DF0u;
    {
        const bool branch_taken_0x2d1df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DF0u;
        // 0x2d1df4: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1df0) {
            ctx->pc = 0x2D1E10u;
            goto label_2d1e10;
        }
    }
    ctx->pc = 0x2D1DF8u;
label_2d1df8:
    // 0x2d1df8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2d1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2d1dfc:
    // 0x2d1dfc: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x2d1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_2d1e00:
    // 0x2d1e00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2d1e04:
    // 0x2d1e04: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d1e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d1e08:
    // 0x2d1e08: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2d1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_2d1e0c:
    // 0x2d1e0c: 0x825824  and         $t3, $a0, $v0
    ctx->pc = 0x2d1e0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2d1e10:
    // 0x2d1e10: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e14:
    // 0x2d1e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d1e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e18:
    // 0x2d1e18: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d1e1c:
    // 0x2d1e1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1e20:
    // 0x2d1e20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1e24:
    // 0x2d1e24: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e28:
    // 0x2d1e28: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2d1e2c:
    // 0x2d1e2c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x2d1e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2d1e30:
    // 0x2d1e30: 0x2e5200b  movn        $a0, $s7, $a1
    ctx->pc = 0x2d1e30u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23));
label_2d1e34:
    // 0x2d1e34: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e38:
    // 0x2d1e38: 0xaea40044  sw          $a0, 0x44($s5)
    ctx->pc = 0x2d1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 4));
label_2d1e3c:
    // 0x2d1e3c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d1e40:
    // 0x2d1e40: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2d1e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2d1e44:
    // 0x2d1e44: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2d1e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2d1e48:
    // 0x2d1e48: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d1e4c:
    // 0x2d1e4c: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x2d1e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1e50:
    // 0x2d1e50: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x2d1e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1e54:
    // 0x2d1e54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1e58:
    // 0x2d1e58: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x2d1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_2d1e5c:
    // 0x2d1e5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1e60:
    // 0x2d1e60: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2d1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e64:
    // 0x2d1e64: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2d1e68:
    // 0x2d1e68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1e6c:
    // 0x2d1e6c: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x2d1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
label_2d1e70:
    // 0x2d1e70: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e74:
    // 0x2d1e74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d1e78:
    // 0x2d1e78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1e7c:
    // 0x2d1e7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d1e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1e80:
    // 0x2d1e80: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2d1e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e84:
    // 0x2d1e84: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d1e88:
    // 0x2d1e88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1e8c:
    // 0x2d1e8c: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x2d1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_2d1e90:
    // 0x2d1e90: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x2d1e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1e94:
    // 0x2d1e94: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x2d1e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_2d1e98:
    // 0x2d1e98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1e98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1e9c:
    // 0x2d1e9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d1e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1ea0:
    // 0x2d1ea0: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2d1ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1ea4:
    // 0x2d1ea4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1ea8:
    // 0x2d1ea8: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d1eac:
    // 0x2d1eac: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x2d1eacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_2d1eb0:
    // 0x2d1eb0: 0x134880  sll         $t1, $s3, 2
    ctx->pc = 0x2d1eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1eb4:
    // 0x2d1eb4: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x2d1eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2d1eb8:
    // 0x2d1eb8: 0x1344821  addu        $t1, $t1, $s4
    ctx->pc = 0x2d1eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
label_2d1ebc:
    // 0x2d1ebc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d1ebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1ec0:
    // 0x2d1ec0: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x2d1ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1ec4:
    // 0x2d1ec4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1ec8:
    // 0x2d1ec8: 0x1144021  addu        $t0, $t0, $s4
    ctx->pc = 0x2d1ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_2d1ecc:
    // 0x2d1ecc: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x2d1eccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
label_2d1ed0:
    // 0x2d1ed0: 0x135080  sll         $t2, $s3, 2
    ctx->pc = 0x2d1ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1ed4:
    // 0x2d1ed4: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x2d1ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2d1ed8:
    // 0x2d1ed8: 0x1545021  addu        $t2, $t2, $s4
    ctx->pc = 0x2d1ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
label_2d1edc:
    // 0x2d1edc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d1edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d1ee0:
    // 0x2d1ee0: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x2d1ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1ee4:
    // 0x2d1ee4: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x2d1ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2d1ee8:
    // 0x2d1ee8: 0xf43821  addu        $a3, $a3, $s4
    ctx->pc = 0x2d1ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_2d1eec:
    // 0x2d1eec: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x2d1eecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_2d1ef0:
    // 0x2d1ef0: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x2d1ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1ef4:
    // 0x2d1ef4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1ef8:
    // 0x2d1ef8: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_2d1efc:
    // 0x2d1efc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2d1efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1f00:
    // 0x2d1f00: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2d1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1f04:
    // 0x2d1f04: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2d1f08:
    // 0x2d1f08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1f0c:
    // 0x2d1f0c: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x2d1f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
label_2d1f10:
    // 0x2d1f10: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2d1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1f14:
    // 0x2d1f14: 0x692c0007  ldl         $t4, 0x7($t1)
    ctx->pc = 0x2d1f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2d1f18:
    // 0x2d1f18: 0x6d2c0000  ldr         $t4, 0x0($t1)
    ctx->pc = 0x2d1f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2d1f1c:
    // 0x2d1f1c: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x2d1f1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_2d1f20:
    // 0x2d1f20: 0xb22c0043  sdl         $t4, 0x43($s1)
    ctx->pc = 0x2d1f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1f24:
    // 0x2d1f24: 0xb62c003c  sdr         $t4, 0x3C($s1)
    ctx->pc = 0x2d1f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1f28:
    // 0x2d1f28: 0xae2d0044  sw          $t5, 0x44($s1)
    ctx->pc = 0x2d1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 13));
label_2d1f2c:
    // 0x2d1f2c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d1f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d1f30:
    // 0x2d1f30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1f34:
    // 0x2d1f34: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2d1f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1f38:
    // 0x2d1f38: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2d1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1f3c:
    // 0x2d1f3c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d1f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d1f40:
    // 0x2d1f40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1f44:
    // 0x2d1f44: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2d1f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_2d1f48:
    // 0x2d1f48: 0x69480007  ldl         $t0, 0x7($t2)
    ctx->pc = 0x2d1f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2d1f4c:
    // 0x2d1f4c: 0x6d480000  ldr         $t0, 0x0($t2)
    ctx->pc = 0x2d1f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2d1f50:
    // 0x2d1f50: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x2d1f50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2d1f54:
    // 0x2d1f54: 0xb2280057  sdl         $t0, 0x57($s1)
    ctx->pc = 0x2d1f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1f58:
    // 0x2d1f58: 0xb6280050  sdr         $t0, 0x50($s1)
    ctx->pc = 0x2d1f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1f5c:
    // 0x2d1f5c: 0xae290058  sw          $t1, 0x58($s1)
    ctx->pc = 0x2d1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 9));
label_2d1f60:
    // 0x2d1f60: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2d1f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d1f64:
    // 0x2d1f64: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2d1f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d1f68:
    // 0x2d1f68: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2d1f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2d1f6c:
    // 0x2d1f6c: 0xb2220067  sdl         $v0, 0x67($s1)
    ctx->pc = 0x2d1f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1f70:
    // 0x2d1f70: 0xb6220060  sdr         $v0, 0x60($s1)
    ctx->pc = 0x2d1f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1f74:
    // 0x2d1f74: 0xae280068  sw          $t0, 0x68($s1)
    ctx->pc = 0x2d1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 8));
label_2d1f78:
    // 0x2d1f78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1f7c:
    // 0x2d1f7c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2d1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1f80:
    // 0x2d1f80: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2d1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_2d1f84:
    // 0x2d1f84: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2d1f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_2d1f88:
    // 0x2d1f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1f8c:
    // 0x2d1f8c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2d1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_2d1f90:
    // 0x2d1f90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1f94:
    // 0x2d1f94: 0x11600028  beqz        $t3, . + 4 + (0x28 << 2)
label_2d1f98:
    if (ctx->pc == 0x2D1F98u) {
        ctx->pc = 0x2D1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F94u;
        // 0x2d1f98: 0xae23007c  sw          $v1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F9Cu;
        goto label_2d1f9c;
    }
    ctx->pc = 0x2D1F94u;
    {
        const bool branch_taken_0x2d1f94 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F94u;
        // 0x2d1f98: 0xae23007c  sw          $v1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f94) {
            ctx->pc = 0x2D2038u;
            goto label_2d2038;
        }
    }
    ctx->pc = 0x2D1F9Cu;
label_2d1f9c:
    // 0x2d1f9c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1fa0:
    // 0x2d1fa0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d1fa4:
    // 0x2d1fa4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1fa8:
    // 0x2d1fa8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1fac:
    // 0x2d1fac: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2d1facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1fb0:
    // 0x2d1fb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d1fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d1fb4:
    // 0x2d1fb4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2d1fb8:
    // 0x2d1fb8: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2d1fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2d1fbc:
    // 0x2d1fbc: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2d1fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1fc0:
    // 0x2d1fc0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x2d1fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2d1fc4:
    // 0x2d1fc4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d1fc8:
    // 0x2d1fc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1fcc:
    // 0x2d1fcc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2d1fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1fd0:
    // 0x2d1fd0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x2d1fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2d1fd4:
    // 0x2d1fd4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d1fd8:
    // 0x2d1fd8: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x2d1fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_2d1fdc:
    // 0x2d1fdc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d1fe0:
    // 0x2d1fe0: 0x68ac0007  ldl         $t4, 0x7($a1)
    ctx->pc = 0x2d1fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2d1fe4:
    // 0x2d1fe4: 0x6cac0000  ldr         $t4, 0x0($a1)
    ctx->pc = 0x2d1fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2d1fe8:
    // 0x2d1fe8: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x2d1fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d1fec:
    // 0x2d1fec: 0xb22c008f  sdl         $t4, 0x8F($s1)
    ctx->pc = 0x2d1fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1ff0:
    // 0x2d1ff0: 0xb62c0088  sdr         $t4, 0x88($s1)
    ctx->pc = 0x2d1ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d1ff4:
    // 0x2d1ff4: 0xae2d0090  sw          $t5, 0x90($s1)
    ctx->pc = 0x2d1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 13));
label_2d1ff8:
    // 0x2d1ff8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d1ffc:
    // 0x2d1ffc: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x2d1ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2d2000:
    // 0x2d2000: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x2d2000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2d2004:
    // 0x2d2004: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2d2004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2d2008:
    // 0x2d2008: 0xb227009b  sdl         $a3, 0x9B($s1)
    ctx->pc = 0x2d2008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d200c:
    // 0x2d200c: 0xb6270094  sdr         $a3, 0x94($s1)
    ctx->pc = 0x2d200cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d2010:
    // 0x2d2010: 0xae28009c  sw          $t0, 0x9C($s1)
    ctx->pc = 0x2d2010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 8));
label_2d2014:
    // 0x2d2014: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d2014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2d2018:
    // 0x2d2018: 0x684c0007  ldl         $t4, 0x7($v0)
    ctx->pc = 0x2d2018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2d201c:
    // 0x2d201c: 0x6c4c0000  ldr         $t4, 0x0($v0)
    ctx->pc = 0x2d201cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2d2020:
    // 0x2d2020: 0x684d000f  ldl         $t5, 0xF($v0)
    ctx->pc = 0x2d2020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2d2024:
    // 0x2d2024: 0x6c4d0008  ldr         $t5, 0x8($v0)
    ctx->pc = 0x2d2024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2d2028:
    // 0x2d2028: 0xb22c00a7  sdl         $t4, 0xA7($s1)
    ctx->pc = 0x2d2028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d202c:
    // 0x2d202c: 0xb62c00a0  sdr         $t4, 0xA0($s1)
    ctx->pc = 0x2d202cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d2030:
    // 0x2d2030: 0xb22d00af  sdl         $t5, 0xAF($s1)
    ctx->pc = 0x2d2030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d2034:
    // 0x2d2034: 0xb62d00a8  sdr         $t5, 0xA8($s1)
    ctx->pc = 0x2d2034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d2038:
    // 0x2d2038: 0x2d620002  sltiu       $v0, $t3, 0x2
    ctx->pc = 0x2d2038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2d203c:
    // 0x2d203c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2d2040:
    if (ctx->pc == 0x2D2040u) {
        ctx->pc = 0x2D2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D203Cu;
        // 0x2d2040: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2044u;
        goto label_2d2044;
    }
    ctx->pc = 0x2D203Cu;
    {
        const bool branch_taken_0x2d203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d203c) {
            ctx->pc = 0x2D2040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D203Cu;
            // 0x2d2040: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D204Cu;
            goto label_2d204c;
        }
    }
    ctx->pc = 0x2D2044u;
label_2d2044:
    // 0x2d2044: 0x10000145  b           . + 4 + (0x145 << 2)
label_2d2048:
    if (ctx->pc == 0x2D2048u) {
        ctx->pc = 0x2D2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2044u;
        // 0x2d2048: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D204Cu;
        goto label_2d204c;
    }
    ctx->pc = 0x2D2044u;
    {
        const bool branch_taken_0x2d2044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2044u;
        // 0x2d2048: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2044) {
            ctx->pc = 0x2D255Cu;
            goto label_2d255c;
        }
    }
    ctx->pc = 0x2D204Cu;
label_2d204c:
    // 0x2d204c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d204cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d2050:
    // 0x2d2050: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x2d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_2d2054:
    // 0x2d2054: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d2054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d2058:
    // 0x2d2058: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2d2058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d205c:
    // 0x2d205c: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2d205cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2d2060:
    // 0x2d2060: 0x40f809  jalr        $v0
label_2d2064:
    if (ctx->pc == 0x2D2064u) {
        ctx->pc = 0x2D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2060u;
        // 0x2d2064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2068u;
        goto label_2d2068;
    }
    ctx->pc = 0x2D2060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2068u);
        ctx->pc = 0x2D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2060u;
        // 0x2d2064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2060u, 0x2D2068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2068u;
label_2d2068:
    // 0x2d2068: 0x8ec60108  lw          $a2, 0x108($s6)
    ctx->pc = 0x2d2068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_2d206c:
    // 0x2d206c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d206cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d2070:
    // 0x2d2070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d2074:
    // 0x2d2074: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d2074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d2078:
    // 0x2d2078: 0xc0f809  jalr        $a2
label_2d207c:
    if (ctx->pc == 0x2D207Cu) {
        ctx->pc = 0x2D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2078u;
        // 0x2d207c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2080u;
        goto label_2d2080;
    }
    ctx->pc = 0x2D2078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D2080u);
        ctx->pc = 0x2D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2078u;
        // 0x2d207c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2078u, 0x2D2080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2080u;
label_2d2080:
    // 0x2d2080: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2d2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d2084:
    // 0x2d2084: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2d2084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2d2088:
    // 0x2d2088: 0x8ec60108  lw          $a2, 0x108($s6)
    ctx->pc = 0x2d2088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_2d208c:
    // 0x2d208c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d208cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d2090:
    // 0x2d2090: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2d2090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d2094:
    // 0x2d2094: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d2094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d2098:
    // 0x2d2098: 0x2012  mflo        $a0
    ctx->pc = 0x2d2098u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2d209c:
    // 0x2d209c: 0xc0f809  jalr        $a2
label_2d20a0:
    if (ctx->pc == 0x2D20A0u) {
        ctx->pc = 0x2D20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D209Cu;
        // 0x2d20a0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20A4u;
        goto label_2d20a4;
    }
    ctx->pc = 0x2D209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D20A4u);
        ctx->pc = 0x2D20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D209Cu;
        // 0x2d20a0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D209Cu, 0x2D20A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D20A4u;
label_2d20a4:
    // 0x2d20a4: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x2d20a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d20a8:
    // 0x2d20a8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d20a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d20ac:
    // 0x2d20ac: 0x8ec30108  lw          $v1, 0x108($s6)
    ctx->pc = 0x2d20acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_2d20b0:
    // 0x2d20b0: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d20b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d20b4:
    // 0x2d20b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2d20b8:
    // 0x2d20b8: 0x60f809  jalr        $v1
label_2d20bc:
    if (ctx->pc == 0x2D20BCu) {
        ctx->pc = 0x2D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20B8u;
        // 0x2d20bc: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20C0u;
        goto label_2d20c0;
    }
    ctx->pc = 0x2D20B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D20C0u);
        ctx->pc = 0x2D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20B8u;
        // 0x2d20bc: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D20B8u, 0x2D20C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D20C0u;
label_2d20c0:
    // 0x2d20c0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2d20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d20c4:
    // 0x2d20c4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d20c8:
    // 0x2d20c8: 0x8ec30108  lw          $v1, 0x108($s6)
    ctx->pc = 0x2d20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_2d20cc:
    // 0x2d20cc: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d20ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d20d0:
    // 0x2d20d0: 0x2484001f  addiu       $a0, $a0, 0x1F
    ctx->pc = 0x2d20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_2d20d4:
    // 0x2d20d4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2d20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2d20d8:
    // 0x2d20d8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2d20d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_2d20dc:
    // 0x2d20dc: 0x60f809  jalr        $v1
label_2d20e0:
    if (ctx->pc == 0x2D20E0u) {
        ctx->pc = 0x2D20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20DCu;
        // 0x2d20e0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20E4u;
        goto label_2d20e4;
    }
    ctx->pc = 0x2D20DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D20E4u);
        ctx->pc = 0x2D20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20DCu;
        // 0x2d20e0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D20DCu, 0x2D20E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D20E4u;
label_2d20e4:
    // 0x2d20e4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2d20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_2d20e8:
    // 0x2d20e8: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_2d20ec:
    if (ctx->pc == 0x2D20ECu) {
        ctx->pc = 0x2D20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20E8u;
        // 0x2d20ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20F0u;
        goto label_2d20f0;
    }
    ctx->pc = 0x2D20E8u;
    {
        const bool branch_taken_0x2d20e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20E8u;
        // 0x2d20ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20e8) {
            ctx->pc = 0x2D21B8u;
            goto label_2d21b8;
        }
    }
    ctx->pc = 0x2D20F0u;
label_2d20f0:
    // 0x2d20f0: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2d20f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2d20f4:
    // 0x2d20f4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d20f8:
    // 0x2d20f8: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x2d20f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d20fc:
    // 0x2d20fc: 0x32450003  andi        $a1, $s2, 0x3
    ctx->pc = 0x2d20fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_2d2100:
    // 0x2d2100: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d2100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d2104:
    // 0x2d2104: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
label_2d2108:
    if (ctx->pc == 0x2D2108u) {
        ctx->pc = 0x2D2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2104u;
        // 0x2d2108: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D210Cu;
        goto label_2d210c;
    }
    ctx->pc = 0x2D2104u;
    {
        const bool branch_taken_0x2d2104 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2D2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2104u;
        // 0x2d2108: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2104) {
            ctx->pc = 0x2D2158u;
            goto label_2d2158;
        }
    }
    ctx->pc = 0x2D210Cu;
label_2d210c:
    // 0x2d210c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_2d2110:
    if (ctx->pc == 0x2D2110u) {
        ctx->pc = 0x2D2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D210Cu;
        // 0x2d2110: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2114u;
        goto label_2d2114;
    }
    ctx->pc = 0x2D210Cu;
    {
        const bool branch_taken_0x2d210c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D210Cu;
        // 0x2d2110: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d210c) {
            ctx->pc = 0x2D2178u;
            goto label_2d2178;
        }
    }
    ctx->pc = 0x2D2114u;
label_2d2114:
    // 0x2d2114: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2d2118:
    if (ctx->pc == 0x2D2118u) {
        ctx->pc = 0x2D2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2114u;
        // 0x2d2118: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D211Cu;
        goto label_2d211c;
    }
    ctx->pc = 0x2D2114u;
    {
        const bool branch_taken_0x2d2114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2114) {
            ctx->pc = 0x2D2118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2114u;
            // 0x2d2118: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D215Cu;
            goto label_2d215c;
        }
    }
    ctx->pc = 0x2D211Cu;
label_2d211c:
    // 0x2d211c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2d211cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d2120:
    // 0x2d2120: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2d2124:
    if (ctx->pc == 0x2D2124u) {
        ctx->pc = 0x2D2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2120u;
        // 0x2d2124: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2128u;
        goto label_2d2128;
    }
    ctx->pc = 0x2D2120u;
    {
        const bool branch_taken_0x2d2120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2120) {
            ctx->pc = 0x2D2124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2120u;
            // 0x2d2124: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2144u;
            goto label_2d2144;
        }
    }
    ctx->pc = 0x2D2128u;
label_2d2128:
    // 0x2d2128: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d2128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d212c:
    // 0x2d212c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2d212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2130:
    // 0x2d2130: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x2d2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2d2134:
    // 0x2d2134: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2138:
    // 0x2d2138: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2d2138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2d213c:
    // 0x2d213c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d213cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2140:
    // 0x2d2140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d2144:
    // 0x2d2144: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2148:
    // 0x2d2148: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d2148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d214c:
    // 0x2d214c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d214cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d2150:
    // 0x2d2150: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d2150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d2154:
    // 0x2d2154: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d2154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2d2158:
    // 0x2d2158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d215c:
    // 0x2d215c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d215cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d2160:
    // 0x2d2160: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d2164:
    // 0x2d2164: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2168:
    // 0x2d2168: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d2168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d216c:
    // 0x2d216c: 0x132302b  sltu        $a2, $t1, $s2
    ctx->pc = 0x2d216cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d2170:
    // 0x2d2170: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_2d2174:
    if (ctx->pc == 0x2D2174u) {
        ctx->pc = 0x2D2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2170u;
        // 0x2d2174: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2178u;
        goto label_2d2178;
    }
    ctx->pc = 0x2D2170u;
    {
        const bool branch_taken_0x2d2170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2170u;
        // 0x2d2174: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2170) {
            ctx->pc = 0x2D21B8u;
            goto label_2d21b8;
        }
    }
    ctx->pc = 0x2D2178u;
label_2d2178:
    // 0x2d2178: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d2178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d217c:
    // 0x2d217c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d2180:
    // 0x2d2180: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d2184:
    // 0x2d2184: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2d2184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2d2188:
    // 0x2d2188: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d2188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2d218c:
    // 0x2d218c: 0x132302b  sltu        $a2, $t1, $s2
    ctx->pc = 0x2d218cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d2190:
    // 0x2d2190: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d2190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2d2194:
    // 0x2d2194: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d2198:
    // 0x2d2198: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2d2198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2d219c:
    // 0x2d219c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2d21a0:
    // 0x2d21a0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2d21a4:
    // 0x2d21a4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d21a8:
    // 0x2d21a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2d21a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2d21ac:
    // 0x2d21ac: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2d21acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_2d21b0:
    // 0x2d21b0: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
label_2d21b4:
    if (ctx->pc == 0x2D21B4u) {
        ctx->pc = 0x2D21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B0u;
        // 0x2d21b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21B8u;
        goto label_2d21b8;
    }
    ctx->pc = 0x2D21B0u;
    {
        const bool branch_taken_0x2d21b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B0u;
        // 0x2d21b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21b0) {
            ctx->pc = 0x2D2180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2180;
        }
    }
    ctx->pc = 0x2D21B8u;
label_2d21b8:
    // 0x2d21b8: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
label_2d21bc:
    if (ctx->pc == 0x2D21BCu) {
        ctx->pc = 0x2D21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B8u;
        // 0x2d21bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21C0u;
        goto label_2d21c0;
    }
    ctx->pc = 0x2D21B8u;
    {
        const bool branch_taken_0x2d21b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B8u;
        // 0x2d21bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21b8) {
            ctx->pc = 0x2D22E0u;
            goto label_2d22e0;
        }
    }
    ctx->pc = 0x2D21C0u;
label_2d21c0:
    // 0x2d21c0: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x2d21c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d21c4:
    // 0x2d21c4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d21c8:
    // 0x2d21c8: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x2d21c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d21cc:
    // 0x2d21cc: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x2d21ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2d21d0:
    // 0x2d21d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d21d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d21d4:
    // 0x2d21d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d21d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d21d8:
    // 0x2d21d8: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
label_2d21dc:
    if (ctx->pc == 0x2D21DCu) {
        ctx->pc = 0x2D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21D8u;
        // 0x2d21dc: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21E0u;
        goto label_2d21e0;
    }
    ctx->pc = 0x2D21D8u;
    {
        const bool branch_taken_0x2d21d8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21D8u;
        // 0x2d21dc: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21d8) {
            ctx->pc = 0x2D2244u;
            goto label_2d2244;
        }
    }
    ctx->pc = 0x2D21E0u;
label_2d21e0:
    // 0x2d21e0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2d21e4:
    if (ctx->pc == 0x2D21E4u) {
        ctx->pc = 0x2D21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E0u;
        // 0x2d21e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21E8u;
        goto label_2d21e8;
    }
    ctx->pc = 0x2D21E0u;
    {
        const bool branch_taken_0x2d21e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E0u;
        // 0x2d21e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21e0) {
            ctx->pc = 0x2D2270u;
            goto label_2d2270;
        }
    }
    ctx->pc = 0x2D21E8u;
label_2d21e8:
    // 0x2d21e8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2d21ec:
    if (ctx->pc == 0x2D21ECu) {
        ctx->pc = 0x2D21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E8u;
        // 0x2d21ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21F0u;
        goto label_2d21f0;
    }
    ctx->pc = 0x2D21E8u;
    {
        const bool branch_taken_0x2d21e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d21e8) {
            ctx->pc = 0x2D21ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21E8u;
            // 0x2d21ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2248u;
            goto label_2d2248;
        }
    }
    ctx->pc = 0x2D21F0u;
label_2d21f0:
    // 0x2d21f0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d21f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d21f4:
    // 0x2d21f4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2d21f8:
    if (ctx->pc == 0x2D21F8u) {
        ctx->pc = 0x2D21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21F4u;
        // 0x2d21f8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21FCu;
        goto label_2d21fc;
    }
    ctx->pc = 0x2D21F4u;
    {
        const bool branch_taken_0x2d21f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d21f4) {
            ctx->pc = 0x2D21F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21F4u;
            // 0x2d21f8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2224u;
            goto label_2d2224;
        }
    }
    ctx->pc = 0x2D21FCu;
label_2d21fc:
    // 0x2d21fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2200:
    // 0x2d2200: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x2d2200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2204:
    // 0x2d2204: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d2204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d2208:
    // 0x2d2208: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x2d2208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2d220c:
    // 0x2d220c: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d220cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d2210:
    // 0x2d2210: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2214:
    // 0x2d2214: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2218:
    // 0x2d2218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d221c:
    // 0x2d221c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2d221cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2d2220:
    // 0x2d2220: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2224:
    // 0x2d2224: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2228:
    // 0x2d2228: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d2228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d222c:
    // 0x2d222c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d222cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d2230:
    // 0x2d2230: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d2230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d2234:
    // 0x2d2234: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d2234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d2238:
    // 0x2d2238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d223c:
    // 0x2d223c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d223cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d2240:
    // 0x2d2240: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d2240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2d2244:
    // 0x2d2244: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2248:
    // 0x2d2248: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d2248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d224c:
    // 0x2d224c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d2250:
    // 0x2d2250: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d2250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d2254:
    // 0x2d2254: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d2254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d2258:
    // 0x2d2258: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d225c:
    // 0x2d225c: 0x132502b  sltu        $t2, $t1, $s2
    ctx->pc = 0x2d225cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d2260:
    // 0x2d2260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d2264:
    // 0x2d2264: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d2264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d2268:
    // 0x2d2268: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
label_2d226c:
    if (ctx->pc == 0x2D226Cu) {
        ctx->pc = 0x2D226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2268u;
        // 0x2d226c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2270u;
        goto label_2d2270;
    }
    ctx->pc = 0x2D2268u;
    {
        const bool branch_taken_0x2d2268 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2268u;
        // 0x2d226c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2268) {
            ctx->pc = 0x2D22E0u;
            goto label_2d22e0;
        }
    }
    ctx->pc = 0x2D2270u;
label_2d2270:
    // 0x2d2270: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d2270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2274:
    // 0x2d2274: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d2274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d2278:
    // 0x2d2278: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2d227c:
    // 0x2d227c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2d227cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2d2280:
    // 0x2d2280: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2d2280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d2284:
    // 0x2d2284: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d2284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2d2288:
    // 0x2d2288: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2d2288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d228c:
    // 0x2d228c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2d228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2d2290:
    // 0x2d2290: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2d2290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2d2294:
    // 0x2d2294: 0x132502b  sltu        $t2, $t1, $s2
    ctx->pc = 0x2d2294u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2d2298:
    // 0x2d2298: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d2298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d229c:
    // 0x2d229c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x2d229cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2d22a0:
    // 0x2d22a0: 0xab2818  mult        $a1, $a1, $t3
    ctx->pc = 0x2d22a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d22a4:
    // 0x2d22a4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2d22a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2d22a8:
    // 0x2d22a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d22ac:
    // 0x2d22ac: 0xcb3018  mult        $a2, $a2, $t3
    ctx->pc = 0x2d22acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2d22b0:
    // 0x2d22b0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2d22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_2d22b4:
    // 0x2d22b4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d22b8:
    // 0x2d22b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d22bc:
    // 0x2d22bc: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2d22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2d22c0:
    // 0x2d22c0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2d22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d22c4:
    // 0x2d22c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d22c8:
    // 0x2d22c8: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2d22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_2d22cc:
    // 0x2d22cc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d22d0:
    // 0x2d22d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d22d4:
    // 0x2d22d4: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x2d22d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_2d22d8:
    // 0x2d22d8: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
label_2d22dc:
    if (ctx->pc == 0x2D22DCu) {
        ctx->pc = 0x2D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22D8u;
        // 0x2d22dc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D22E0u;
        goto label_2d22e0;
    }
    ctx->pc = 0x2D22D8u;
    {
        const bool branch_taken_0x2d22d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22D8u;
        // 0x2d22dc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22d8) {
            ctx->pc = 0x2D2278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2278;
        }
    }
    ctx->pc = 0x2D22E0u;
label_2d22e0:
    // 0x2d22e0: 0x8e2d0078  lw          $t5, 0x78($s1)
    ctx->pc = 0x2d22e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2d22e4:
    // 0x2d22e4: 0x11a0004e  beqz        $t5, . + 4 + (0x4E << 2)
label_2d22e8:
    if (ctx->pc == 0x2D22E8u) {
        ctx->pc = 0x2D22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22E4u;
        // 0x2d22e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D22ECu;
        goto label_2d22ec;
    }
    ctx->pc = 0x2D22E4u;
    {
        const bool branch_taken_0x2d22e4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22E4u;
        // 0x2d22e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22e4) {
            ctx->pc = 0x2D2420u;
            goto label_2d2420;
        }
    }
    ctx->pc = 0x2D22ECu;
label_2d22ec:
    // 0x2d22ec: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d22f0:
    // 0x2d22f0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d22f4:
    // 0x2d22f4: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x2d22f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d22f8:
    // 0x2d22f8: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x2d22f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_2d22fc:
    // 0x2d22fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d22fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d2300:
    // 0x2d2300: 0x19a00003  blez        $t5, . + 4 + (0x3 << 2)
label_2d2304:
    if (ctx->pc == 0x2D2304u) {
        ctx->pc = 0x2D2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2300u;
        // 0x2d2304: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2308u;
        goto label_2d2308;
    }
    ctx->pc = 0x2D2300u;
    {
        const bool branch_taken_0x2d2300 = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x2D2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2300u;
        // 0x2d2304: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2300) {
            ctx->pc = 0x2D2310u;
            goto label_2d2310;
        }
    }
    ctx->pc = 0x2D2308u;
label_2d2308:
    // 0x2d2308: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_2d230c:
    if (ctx->pc == 0x2D230Cu) {
        ctx->pc = 0x2D230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2308u;
        // 0x2d230c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2310u;
        goto label_2d2310;
    }
    ctx->pc = 0x2D2308u;
    {
        const bool branch_taken_0x2d2308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2308) {
            ctx->pc = 0x2D230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2308u;
            // 0x2d230c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2370u;
            goto label_2d2370;
        }
    }
    ctx->pc = 0x2D2310u;
label_2d2310:
    // 0x2d2310: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d2310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2314:
    // 0x2d2314: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2318:
    // 0x2d2318: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d2318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d231c:
    // 0x2d231c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2d231cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d2320:
    // 0x2d2320: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2d2320u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_2d2324:
    // 0x2d2324: 0x24e8000c  addiu       $t0, $a3, 0xC
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_2d2328:
    // 0x2d2328: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x2d2328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_2d232c:
    // 0x2d232c: 0x12d602b  sltu        $t4, $t1, $t5
    ctx->pc = 0x2d232cu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_2d2330:
    // 0x2d2330: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d2330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2334:
    // 0x2d2334: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d2334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2338:
    // 0x2d2338: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x2d2338u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
label_2d233c:
    // 0x2d233c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2d233cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2340:
    // 0x2d2340: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d2340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2344:
    // 0x2d2344: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x2d2344u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
label_2d2348:
    // 0x2d2348: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2d2348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2d234c:
    // 0x2d234c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2350:
    // 0x2d2350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2354:
    // 0x2d2354: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2d2354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2358:
    // 0x2d2358: 0xa4e40006  sh          $a0, 0x6($a3)
    ctx->pc = 0x2d2358u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 4));
label_2d235c:
    // 0x2d235c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d235cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d2360:
    // 0x2d2360: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d2360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2d2364:
    // 0x2d2364: 0x1180002e  beqz        $t4, . + 4 + (0x2E << 2)
label_2d2368:
    if (ctx->pc == 0x2D2368u) {
        ctx->pc = 0x2D2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2364u;
        // 0x2d2368: 0xace50008  sw          $a1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D236Cu;
        goto label_2d236c;
    }
    ctx->pc = 0x2D2364u;
    {
        const bool branch_taken_0x2d2364 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2364u;
        // 0x2d2368: 0xace50008  sw          $a1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2364) {
            ctx->pc = 0x2D2420u;
            goto label_2d2420;
        }
    }
    ctx->pc = 0x2D236Cu;
label_2d236c:
    // 0x2d236c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2d236cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d2370:
    // 0x2d2370: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d2370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d2374:
    // 0x2d2374: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2d2374u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d2378:
    // 0x2d2378: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2d2378u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d237c:
    // 0x2d237c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d237cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d2380:
    // 0x2d2380: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2d2380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2384:
    // 0x2d2384: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x2d2384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_2d2388:
    // 0x2d2388: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d2388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2d238c:
    // 0x2d238c: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x2d238cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_2d2390:
    // 0x2d2390: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2d2390u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_2d2394:
    // 0x2d2394: 0x12d602b  sltu        $t4, $t1, $t5
    ctx->pc = 0x2d2394u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_2d2398:
    // 0x2d2398: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2d2398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d239c:
    // 0x2d239c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d239cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d23a0:
    // 0x2d23a0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x2d23a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_2d23a4:
    // 0x2d23a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d23a8:
    // 0x2d23a8: 0xa5030002  sh          $v1, 0x2($t0)
    ctx->pc = 0x2d23a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
label_2d23ac:
    // 0x2d23ac: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x2d23acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_2d23b0:
    // 0x2d23b0: 0xa5420004  sh          $v0, 0x4($t2)
    ctx->pc = 0x2d23b0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 2));
label_2d23b4:
    // 0x2d23b4: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x2d23b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_2d23b8:
    // 0x2d23b8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2d23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_2d23bc:
    // 0x2d23bc: 0xa5630006  sh          $v1, 0x6($t3)
    ctx->pc = 0x2d23bcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 3));
label_2d23c0:
    // 0x2d23c0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2d23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d23c4:
    // 0x2d23c4: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x2d23c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_2d23c8:
    // 0x2d23c8: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2d23c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_2d23cc:
    // 0x2d23cc: 0xa4e2000c  sh          $v0, 0xC($a3)
    ctx->pc = 0x2d23ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 2));
label_2d23d0:
    // 0x2d23d0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2d23d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_2d23d4:
    // 0x2d23d4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2d23d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2d23d8:
    // 0x2d23d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d23dc:
    // 0x2d23dc: 0xa502000e  sh          $v0, 0xE($t0)
    ctx->pc = 0x2d23dcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 2));
label_2d23e0:
    // 0x2d23e0: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x2d23e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_2d23e4:
    // 0x2d23e4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2d23e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2d23e8:
    // 0x2d23e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d23ec:
    // 0x2d23ec: 0xa5420010  sh          $v0, 0x10($t2)
    ctx->pc = 0x2d23ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 16), (uint16_t)GPR_U32(ctx, 2));
label_2d23f0:
    // 0x2d23f0: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x2d23f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
label_2d23f4:
    // 0x2d23f4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2d23f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2d23f8:
    // 0x2d23f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d23f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d23fc:
    // 0x2d23fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2400:
    // 0x2d2400: 0xa5630012  sh          $v1, 0x12($t3)
    ctx->pc = 0x2d2400u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 18), (uint16_t)GPR_U32(ctx, 3));
label_2d2404:
    // 0x2d2404: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d2404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d2408:
    // 0x2d2408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d240c:
    // 0x2d240c: 0x256b0018  addiu       $t3, $t3, 0x18
    ctx->pc = 0x2d240cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
label_2d2410:
    // 0x2d2410: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d2410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d2414:
    // 0x2d2414: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x2d2414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_2d2418:
    // 0x2d2418: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
label_2d241c:
    if (ctx->pc == 0x2D241Cu) {
        ctx->pc = 0x2D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2418u;
        // 0x2d241c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2420u;
        goto label_2d2420;
    }
    ctx->pc = 0x2D2418u;
    {
        const bool branch_taken_0x2d2418 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2418u;
        // 0x2d241c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2418) {
            ctx->pc = 0x2D2380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2380;
        }
    }
    ctx->pc = 0x2D2420u;
label_2d2420:
    // 0x2d2420: 0x8e2c007c  lw          $t4, 0x7C($s1)
    ctx->pc = 0x2d2420u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d2424:
    // 0x2d2424: 0x1180004a  beqz        $t4, . + 4 + (0x4A << 2)
label_2d2428:
    if (ctx->pc == 0x2D2428u) {
        ctx->pc = 0x2D2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2424u;
        // 0x2d2428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D242Cu;
        goto label_2d242c;
    }
    ctx->pc = 0x2D2424u;
    {
        const bool branch_taken_0x2d2424 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2424u;
        // 0x2d2428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2424) {
            ctx->pc = 0x2D2550u;
            goto label_2d2550;
        }
    }
    ctx->pc = 0x2D242Cu;
label_2d242c:
    // 0x2d242c: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x2d242cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d2430:
    // 0x2d2430: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d2430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2d2434:
    // 0x2d2434: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x2d2434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d2438:
    // 0x2d2438: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x2d2438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2d243c:
    // 0x2d243c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d2440:
    // 0x2d2440: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d2440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d2444:
    // 0x2d2444: 0x1980001a  blez        $t4, . + 4 + (0x1A << 2)
label_2d2448:
    if (ctx->pc == 0x2D2448u) {
        ctx->pc = 0x2D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2444u;
        // 0x2d2448: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D244Cu;
        goto label_2d244c;
    }
    ctx->pc = 0x2D2444u;
    {
        const bool branch_taken_0x2d2444 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2444u;
        // 0x2d2448: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2444) {
            ctx->pc = 0x2D24B0u;
            goto label_2d24b0;
        }
    }
    ctx->pc = 0x2D244Cu;
label_2d244c:
    // 0x2d244c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2d2450:
    if (ctx->pc == 0x2D2450u) {
        ctx->pc = 0x2D2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D244Cu;
        // 0x2d2450: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2454u;
        goto label_2d2454;
    }
    ctx->pc = 0x2D244Cu;
    {
        const bool branch_taken_0x2d244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D244Cu;
        // 0x2d2450: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d244c) {
            ctx->pc = 0x2D24DCu;
            goto label_2d24dc;
        }
    }
    ctx->pc = 0x2D2454u;
label_2d2454:
    // 0x2d2454: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2d2458:
    if (ctx->pc == 0x2D2458u) {
        ctx->pc = 0x2D2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2454u;
        // 0x2d2458: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D245Cu;
        goto label_2d245c;
    }
    ctx->pc = 0x2D2454u;
    {
        const bool branch_taken_0x2d2454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2454) {
            ctx->pc = 0x2D2458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2454u;
            // 0x2d2458: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D24B4u;
            goto label_2d24b4;
        }
    }
    ctx->pc = 0x2D245Cu;
label_2d245c:
    // 0x2d245c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d245cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d2460:
    // 0x2d2460: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2d2464:
    if (ctx->pc == 0x2D2464u) {
        ctx->pc = 0x2D2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2460u;
        // 0x2d2464: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2468u;
        goto label_2d2468;
    }
    ctx->pc = 0x2D2460u;
    {
        const bool branch_taken_0x2d2460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2460) {
            ctx->pc = 0x2D2464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2460u;
            // 0x2d2464: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2490u;
            goto label_2d2490;
        }
    }
    ctx->pc = 0x2D2468u;
label_2d2468:
    // 0x2d2468: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d2468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d246c:
    // 0x2d246c: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x2d246cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2d2470:
    // 0x2d2470: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d2470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d2474:
    // 0x2d2474: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x2d2474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2d2478:
    // 0x2d2478: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d2478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d247c:
    // 0x2d247c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d247cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2480:
    // 0x2d2480: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2484:
    // 0x2d2484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d2488:
    // 0x2d2488: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2d248c:
    // 0x2d248c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2490:
    // 0x2d2490: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d2490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d2494:
    // 0x2d2494: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d2494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d2498:
    // 0x2d2498: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d2498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d249c:
    // 0x2d249c: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d249cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d24a0:
    // 0x2d24a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d24a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d24a4:
    // 0x2d24a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d24a8:
    // 0x2d24a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d24ac:
    // 0x2d24ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d24acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2d24b0:
    // 0x2d24b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d24b4:
    // 0x2d24b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d24b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d24b8:
    // 0x2d24b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d24bc:
    // 0x2d24bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d24c0:
    // 0x2d24c0: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d24c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d24c4:
    // 0x2d24c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d24c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d24c8:
    // 0x2d24c8: 0x12c502b  sltu        $t2, $t1, $t4
    ctx->pc = 0x2d24c8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_2d24cc:
    // 0x2d24cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d24d0:
    // 0x2d24d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d24d4:
    // 0x2d24d4: 0x1140001e  beqz        $t2, . + 4 + (0x1E << 2)
label_2d24d8:
    if (ctx->pc == 0x2D24D8u) {
        ctx->pc = 0x2D24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24D4u;
        // 0x2d24d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D24DCu;
        goto label_2d24dc;
    }
    ctx->pc = 0x2D24D4u;
    {
        const bool branch_taken_0x2d24d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24D4u;
        // 0x2d24d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24d4) {
            ctx->pc = 0x2D2550u;
            goto label_2d2550;
        }
    }
    ctx->pc = 0x2D24DCu;
label_2d24dc:
    // 0x2d24dc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d24dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d24e0:
    // 0x2d24e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d24e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d24e4:
    // 0x2d24e4: 0x0  nop
    ctx->pc = 0x2d24e4u;
    // NOP
label_2d24e8:
    // 0x2d24e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2d24ec:
    // 0x2d24ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2d24ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2d24f0:
    // 0x2d24f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d24f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d24f4:
    // 0x2d24f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d24f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2d24f8:
    // 0x2d24f8: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2d24f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d24fc:
    // 0x2d24fc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2d24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2d2500:
    // 0x2d2500: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2d2500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2d2504:
    // 0x2d2504: 0x12c502b  sltu        $t2, $t1, $t4
    ctx->pc = 0x2d2504u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_2d2508:
    // 0x2d2508: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2d2508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d250c:
    // 0x2d250c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x2d250cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2d2510:
    // 0x2d2510: 0xab2818  mult        $a1, $a1, $t3
    ctx->pc = 0x2d2510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2d2514:
    // 0x2d2514: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2d2514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2d2518:
    // 0x2d2518: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d2518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d251c:
    // 0x2d251c: 0xcb3018  mult        $a2, $a2, $t3
    ctx->pc = 0x2d251cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2d2520:
    // 0x2d2520: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2d2520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_2d2524:
    // 0x2d2524: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d2528:
    // 0x2d2528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d252c:
    // 0x2d252c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2d252cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2d2530:
    // 0x2d2530: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d2530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d2534:
    // 0x2d2534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d2534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d2538:
    // 0x2d2538: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2d2538u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_2d253c:
    // 0x2d253c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d2540:
    // 0x2d2540: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d2540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d2544:
    // 0x2d2544: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x2d2544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_2d2548:
    // 0x2d2548: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
label_2d254c:
    if (ctx->pc == 0x2D254Cu) {
        ctx->pc = 0x2D254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2548u;
        // 0x2d254c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2550u;
        goto label_2d2550;
    }
    ctx->pc = 0x2D2548u;
    {
        const bool branch_taken_0x2d2548 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2548u;
        // 0x2d254c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2548) {
            ctx->pc = 0x2D24E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d24e8;
        }
    }
    ctx->pc = 0x2D2550u;
label_2d2550:
    // 0x2d2550: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d2554:
    // 0x2d2554: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d2554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d2558:
    // 0x2d2558: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2d2558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_2d255c:
    // 0x2d255c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d255cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d2560:
    // 0x2d2560: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d2560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d2564:
    // 0x2d2564: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d2564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d2568:
    // 0x2d2568: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d2568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d256c:
    // 0x2d256c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d256cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d2570:
    // 0x2d2570: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d2570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d2574:
    // 0x2d2574: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2d2574u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2578:
    // 0x2d2578: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2d2578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d257c:
    // 0x2d257c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2580:
    // 0x2d2580: 0x3e00008  jr          $ra
label_2d2584:
    if (ctx->pc == 0x2D2584u) {
        ctx->pc = 0x2D2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2580u;
        // 0x2d2584: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2588u;
        goto label_fallthrough_0x2d2580;
    }
    ctx->pc = 0x2D2580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2580u;
        // 0x2d2584: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d2580:
    ctx->pc = 0x2D2588u;
}
