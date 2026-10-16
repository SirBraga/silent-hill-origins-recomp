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

// Function: sub_00259DC8
// Address: 0x259dc8 - 0x25a8e0
void sub_00259DC8_0x259dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259DC8_0x259dc8");
#endif

    switch (ctx->pc) {
        case 0x259dc8u: goto label_259dc8;
        case 0x259dccu: goto label_259dcc;
        case 0x259dd0u: goto label_259dd0;
        case 0x259dd4u: goto label_259dd4;
        case 0x259dd8u: goto label_259dd8;
        case 0x259ddcu: goto label_259ddc;
        case 0x259de0u: goto label_259de0;
        case 0x259de4u: goto label_259de4;
        case 0x259de8u: goto label_259de8;
        case 0x259decu: goto label_259dec;
        case 0x259df0u: goto label_259df0;
        case 0x259df4u: goto label_259df4;
        case 0x259df8u: goto label_259df8;
        case 0x259dfcu: goto label_259dfc;
        case 0x259e00u: goto label_259e00;
        case 0x259e04u: goto label_259e04;
        case 0x259e08u: goto label_259e08;
        case 0x259e0cu: goto label_259e0c;
        case 0x259e10u: goto label_259e10;
        case 0x259e14u: goto label_259e14;
        case 0x259e18u: goto label_259e18;
        case 0x259e1cu: goto label_259e1c;
        case 0x259e20u: goto label_259e20;
        case 0x259e24u: goto label_259e24;
        case 0x259e28u: goto label_259e28;
        case 0x259e2cu: goto label_259e2c;
        case 0x259e30u: goto label_259e30;
        case 0x259e34u: goto label_259e34;
        case 0x259e38u: goto label_259e38;
        case 0x259e3cu: goto label_259e3c;
        case 0x259e40u: goto label_259e40;
        case 0x259e44u: goto label_259e44;
        case 0x259e48u: goto label_259e48;
        case 0x259e4cu: goto label_259e4c;
        case 0x259e50u: goto label_259e50;
        case 0x259e54u: goto label_259e54;
        case 0x259e58u: goto label_259e58;
        case 0x259e5cu: goto label_259e5c;
        case 0x259e60u: goto label_259e60;
        case 0x259e64u: goto label_259e64;
        case 0x259e68u: goto label_259e68;
        case 0x259e6cu: goto label_259e6c;
        case 0x259e70u: goto label_259e70;
        case 0x259e74u: goto label_259e74;
        case 0x259e78u: goto label_259e78;
        case 0x259e7cu: goto label_259e7c;
        case 0x259e80u: goto label_259e80;
        case 0x259e84u: goto label_259e84;
        case 0x259e88u: goto label_259e88;
        case 0x259e8cu: goto label_259e8c;
        case 0x259e90u: goto label_259e90;
        case 0x259e94u: goto label_259e94;
        case 0x259e98u: goto label_259e98;
        case 0x259e9cu: goto label_259e9c;
        case 0x259ea0u: goto label_259ea0;
        case 0x259ea4u: goto label_259ea4;
        case 0x259ea8u: goto label_259ea8;
        case 0x259eacu: goto label_259eac;
        case 0x259eb0u: goto label_259eb0;
        case 0x259eb4u: goto label_259eb4;
        case 0x259eb8u: goto label_259eb8;
        case 0x259ebcu: goto label_259ebc;
        case 0x259ec0u: goto label_259ec0;
        case 0x259ec4u: goto label_259ec4;
        case 0x259ec8u: goto label_259ec8;
        case 0x259eccu: goto label_259ecc;
        case 0x259ed0u: goto label_259ed0;
        case 0x259ed4u: goto label_259ed4;
        case 0x259ed8u: goto label_259ed8;
        case 0x259edcu: goto label_259edc;
        case 0x259ee0u: goto label_259ee0;
        case 0x259ee4u: goto label_259ee4;
        case 0x259ee8u: goto label_259ee8;
        case 0x259eecu: goto label_259eec;
        case 0x259ef0u: goto label_259ef0;
        case 0x259ef4u: goto label_259ef4;
        case 0x259ef8u: goto label_259ef8;
        case 0x259efcu: goto label_259efc;
        case 0x259f00u: goto label_259f00;
        case 0x259f04u: goto label_259f04;
        case 0x259f08u: goto label_259f08;
        case 0x259f0cu: goto label_259f0c;
        case 0x259f10u: goto label_259f10;
        case 0x259f14u: goto label_259f14;
        case 0x259f18u: goto label_259f18;
        case 0x259f1cu: goto label_259f1c;
        case 0x259f20u: goto label_259f20;
        case 0x259f24u: goto label_259f24;
        case 0x259f28u: goto label_259f28;
        case 0x259f2cu: goto label_259f2c;
        case 0x259f30u: goto label_259f30;
        case 0x259f34u: goto label_259f34;
        case 0x259f38u: goto label_259f38;
        case 0x259f3cu: goto label_259f3c;
        case 0x259f40u: goto label_259f40;
        case 0x259f44u: goto label_259f44;
        case 0x259f48u: goto label_259f48;
        case 0x259f4cu: goto label_259f4c;
        case 0x259f50u: goto label_259f50;
        case 0x259f54u: goto label_259f54;
        case 0x259f58u: goto label_259f58;
        case 0x259f5cu: goto label_259f5c;
        case 0x259f60u: goto label_259f60;
        case 0x259f64u: goto label_259f64;
        case 0x259f68u: goto label_259f68;
        case 0x259f6cu: goto label_259f6c;
        case 0x259f70u: goto label_259f70;
        case 0x259f74u: goto label_259f74;
        case 0x259f78u: goto label_259f78;
        case 0x259f7cu: goto label_259f7c;
        case 0x259f80u: goto label_259f80;
        case 0x259f84u: goto label_259f84;
        case 0x259f88u: goto label_259f88;
        case 0x259f8cu: goto label_259f8c;
        case 0x259f90u: goto label_259f90;
        case 0x259f94u: goto label_259f94;
        case 0x259f98u: goto label_259f98;
        case 0x259f9cu: goto label_259f9c;
        case 0x259fa0u: goto label_259fa0;
        case 0x259fa4u: goto label_259fa4;
        case 0x259fa8u: goto label_259fa8;
        case 0x259facu: goto label_259fac;
        case 0x259fb0u: goto label_259fb0;
        case 0x259fb4u: goto label_259fb4;
        case 0x259fb8u: goto label_259fb8;
        case 0x259fbcu: goto label_259fbc;
        case 0x259fc0u: goto label_259fc0;
        case 0x259fc4u: goto label_259fc4;
        case 0x259fc8u: goto label_259fc8;
        case 0x259fccu: goto label_259fcc;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fd4u: goto label_259fd4;
        case 0x259fd8u: goto label_259fd8;
        case 0x259fdcu: goto label_259fdc;
        case 0x259fe0u: goto label_259fe0;
        case 0x259fe4u: goto label_259fe4;
        case 0x259fe8u: goto label_259fe8;
        case 0x259fecu: goto label_259fec;
        case 0x259ff0u: goto label_259ff0;
        case 0x259ff4u: goto label_259ff4;
        case 0x259ff8u: goto label_259ff8;
        case 0x259ffcu: goto label_259ffc;
        case 0x25a000u: goto label_25a000;
        case 0x25a004u: goto label_25a004;
        case 0x25a008u: goto label_25a008;
        case 0x25a00cu: goto label_25a00c;
        case 0x25a010u: goto label_25a010;
        case 0x25a014u: goto label_25a014;
        case 0x25a018u: goto label_25a018;
        case 0x25a01cu: goto label_25a01c;
        case 0x25a020u: goto label_25a020;
        case 0x25a024u: goto label_25a024;
        case 0x25a028u: goto label_25a028;
        case 0x25a02cu: goto label_25a02c;
        case 0x25a030u: goto label_25a030;
        case 0x25a034u: goto label_25a034;
        case 0x25a038u: goto label_25a038;
        case 0x25a03cu: goto label_25a03c;
        case 0x25a040u: goto label_25a040;
        case 0x25a044u: goto label_25a044;
        case 0x25a048u: goto label_25a048;
        case 0x25a04cu: goto label_25a04c;
        case 0x25a050u: goto label_25a050;
        case 0x25a054u: goto label_25a054;
        case 0x25a058u: goto label_25a058;
        case 0x25a05cu: goto label_25a05c;
        case 0x25a060u: goto label_25a060;
        case 0x25a064u: goto label_25a064;
        case 0x25a068u: goto label_25a068;
        case 0x25a06cu: goto label_25a06c;
        case 0x25a070u: goto label_25a070;
        case 0x25a074u: goto label_25a074;
        case 0x25a078u: goto label_25a078;
        case 0x25a07cu: goto label_25a07c;
        case 0x25a080u: goto label_25a080;
        case 0x25a084u: goto label_25a084;
        case 0x25a088u: goto label_25a088;
        case 0x25a08cu: goto label_25a08c;
        case 0x25a090u: goto label_25a090;
        case 0x25a094u: goto label_25a094;
        case 0x25a098u: goto label_25a098;
        case 0x25a09cu: goto label_25a09c;
        case 0x25a0a0u: goto label_25a0a0;
        case 0x25a0a4u: goto label_25a0a4;
        case 0x25a0a8u: goto label_25a0a8;
        case 0x25a0acu: goto label_25a0ac;
        case 0x25a0b0u: goto label_25a0b0;
        case 0x25a0b4u: goto label_25a0b4;
        case 0x25a0b8u: goto label_25a0b8;
        case 0x25a0bcu: goto label_25a0bc;
        case 0x25a0c0u: goto label_25a0c0;
        case 0x25a0c4u: goto label_25a0c4;
        case 0x25a0c8u: goto label_25a0c8;
        case 0x25a0ccu: goto label_25a0cc;
        case 0x25a0d0u: goto label_25a0d0;
        case 0x25a0d4u: goto label_25a0d4;
        case 0x25a0d8u: goto label_25a0d8;
        case 0x25a0dcu: goto label_25a0dc;
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a0e4u: goto label_25a0e4;
        case 0x25a0e8u: goto label_25a0e8;
        case 0x25a0ecu: goto label_25a0ec;
        case 0x25a0f0u: goto label_25a0f0;
        case 0x25a0f4u: goto label_25a0f4;
        case 0x25a0f8u: goto label_25a0f8;
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a100u: goto label_25a100;
        case 0x25a104u: goto label_25a104;
        case 0x25a108u: goto label_25a108;
        case 0x25a10cu: goto label_25a10c;
        case 0x25a110u: goto label_25a110;
        case 0x25a114u: goto label_25a114;
        case 0x25a118u: goto label_25a118;
        case 0x25a11cu: goto label_25a11c;
        case 0x25a120u: goto label_25a120;
        case 0x25a124u: goto label_25a124;
        case 0x25a128u: goto label_25a128;
        case 0x25a12cu: goto label_25a12c;
        case 0x25a130u: goto label_25a130;
        case 0x25a134u: goto label_25a134;
        case 0x25a138u: goto label_25a138;
        case 0x25a13cu: goto label_25a13c;
        case 0x25a140u: goto label_25a140;
        case 0x25a144u: goto label_25a144;
        case 0x25a148u: goto label_25a148;
        case 0x25a14cu: goto label_25a14c;
        case 0x25a150u: goto label_25a150;
        case 0x25a154u: goto label_25a154;
        case 0x25a158u: goto label_25a158;
        case 0x25a15cu: goto label_25a15c;
        case 0x25a160u: goto label_25a160;
        case 0x25a164u: goto label_25a164;
        case 0x25a168u: goto label_25a168;
        case 0x25a16cu: goto label_25a16c;
        case 0x25a170u: goto label_25a170;
        case 0x25a174u: goto label_25a174;
        case 0x25a178u: goto label_25a178;
        case 0x25a17cu: goto label_25a17c;
        case 0x25a180u: goto label_25a180;
        case 0x25a184u: goto label_25a184;
        case 0x25a188u: goto label_25a188;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a190u: goto label_25a190;
        case 0x25a194u: goto label_25a194;
        case 0x25a198u: goto label_25a198;
        case 0x25a19cu: goto label_25a19c;
        case 0x25a1a0u: goto label_25a1a0;
        case 0x25a1a4u: goto label_25a1a4;
        case 0x25a1a8u: goto label_25a1a8;
        case 0x25a1acu: goto label_25a1ac;
        case 0x25a1b0u: goto label_25a1b0;
        case 0x25a1b4u: goto label_25a1b4;
        case 0x25a1b8u: goto label_25a1b8;
        case 0x25a1bcu: goto label_25a1bc;
        case 0x25a1c0u: goto label_25a1c0;
        case 0x25a1c4u: goto label_25a1c4;
        case 0x25a1c8u: goto label_25a1c8;
        case 0x25a1ccu: goto label_25a1cc;
        case 0x25a1d0u: goto label_25a1d0;
        case 0x25a1d4u: goto label_25a1d4;
        case 0x25a1d8u: goto label_25a1d8;
        case 0x25a1dcu: goto label_25a1dc;
        case 0x25a1e0u: goto label_25a1e0;
        case 0x25a1e4u: goto label_25a1e4;
        case 0x25a1e8u: goto label_25a1e8;
        case 0x25a1ecu: goto label_25a1ec;
        case 0x25a1f0u: goto label_25a1f0;
        case 0x25a1f4u: goto label_25a1f4;
        case 0x25a1f8u: goto label_25a1f8;
        case 0x25a1fcu: goto label_25a1fc;
        case 0x25a200u: goto label_25a200;
        case 0x25a204u: goto label_25a204;
        case 0x25a208u: goto label_25a208;
        case 0x25a20cu: goto label_25a20c;
        case 0x25a210u: goto label_25a210;
        case 0x25a214u: goto label_25a214;
        case 0x25a218u: goto label_25a218;
        case 0x25a21cu: goto label_25a21c;
        case 0x25a220u: goto label_25a220;
        case 0x25a224u: goto label_25a224;
        case 0x25a228u: goto label_25a228;
        case 0x25a22cu: goto label_25a22c;
        case 0x25a230u: goto label_25a230;
        case 0x25a234u: goto label_25a234;
        case 0x25a238u: goto label_25a238;
        case 0x25a23cu: goto label_25a23c;
        case 0x25a240u: goto label_25a240;
        case 0x25a244u: goto label_25a244;
        case 0x25a248u: goto label_25a248;
        case 0x25a24cu: goto label_25a24c;
        case 0x25a250u: goto label_25a250;
        case 0x25a254u: goto label_25a254;
        case 0x25a258u: goto label_25a258;
        case 0x25a25cu: goto label_25a25c;
        case 0x25a260u: goto label_25a260;
        case 0x25a264u: goto label_25a264;
        case 0x25a268u: goto label_25a268;
        case 0x25a26cu: goto label_25a26c;
        case 0x25a270u: goto label_25a270;
        case 0x25a274u: goto label_25a274;
        case 0x25a278u: goto label_25a278;
        case 0x25a27cu: goto label_25a27c;
        case 0x25a280u: goto label_25a280;
        case 0x25a284u: goto label_25a284;
        case 0x25a288u: goto label_25a288;
        case 0x25a28cu: goto label_25a28c;
        case 0x25a290u: goto label_25a290;
        case 0x25a294u: goto label_25a294;
        case 0x25a298u: goto label_25a298;
        case 0x25a29cu: goto label_25a29c;
        case 0x25a2a0u: goto label_25a2a0;
        case 0x25a2a4u: goto label_25a2a4;
        case 0x25a2a8u: goto label_25a2a8;
        case 0x25a2acu: goto label_25a2ac;
        case 0x25a2b0u: goto label_25a2b0;
        case 0x25a2b4u: goto label_25a2b4;
        case 0x25a2b8u: goto label_25a2b8;
        case 0x25a2bcu: goto label_25a2bc;
        case 0x25a2c0u: goto label_25a2c0;
        case 0x25a2c4u: goto label_25a2c4;
        case 0x25a2c8u: goto label_25a2c8;
        case 0x25a2ccu: goto label_25a2cc;
        case 0x25a2d0u: goto label_25a2d0;
        case 0x25a2d4u: goto label_25a2d4;
        case 0x25a2d8u: goto label_25a2d8;
        case 0x25a2dcu: goto label_25a2dc;
        case 0x25a2e0u: goto label_25a2e0;
        case 0x25a2e4u: goto label_25a2e4;
        case 0x25a2e8u: goto label_25a2e8;
        case 0x25a2ecu: goto label_25a2ec;
        case 0x25a2f0u: goto label_25a2f0;
        case 0x25a2f4u: goto label_25a2f4;
        case 0x25a2f8u: goto label_25a2f8;
        case 0x25a2fcu: goto label_25a2fc;
        case 0x25a300u: goto label_25a300;
        case 0x25a304u: goto label_25a304;
        case 0x25a308u: goto label_25a308;
        case 0x25a30cu: goto label_25a30c;
        case 0x25a310u: goto label_25a310;
        case 0x25a314u: goto label_25a314;
        case 0x25a318u: goto label_25a318;
        case 0x25a31cu: goto label_25a31c;
        case 0x25a320u: goto label_25a320;
        case 0x25a324u: goto label_25a324;
        case 0x25a328u: goto label_25a328;
        case 0x25a32cu: goto label_25a32c;
        case 0x25a330u: goto label_25a330;
        case 0x25a334u: goto label_25a334;
        case 0x25a338u: goto label_25a338;
        case 0x25a33cu: goto label_25a33c;
        case 0x25a340u: goto label_25a340;
        case 0x25a344u: goto label_25a344;
        case 0x25a348u: goto label_25a348;
        case 0x25a34cu: goto label_25a34c;
        case 0x25a350u: goto label_25a350;
        case 0x25a354u: goto label_25a354;
        case 0x25a358u: goto label_25a358;
        case 0x25a35cu: goto label_25a35c;
        case 0x25a360u: goto label_25a360;
        case 0x25a364u: goto label_25a364;
        case 0x25a368u: goto label_25a368;
        case 0x25a36cu: goto label_25a36c;
        case 0x25a370u: goto label_25a370;
        case 0x25a374u: goto label_25a374;
        case 0x25a378u: goto label_25a378;
        case 0x25a37cu: goto label_25a37c;
        case 0x25a380u: goto label_25a380;
        case 0x25a384u: goto label_25a384;
        case 0x25a388u: goto label_25a388;
        case 0x25a38cu: goto label_25a38c;
        case 0x25a390u: goto label_25a390;
        case 0x25a394u: goto label_25a394;
        case 0x25a398u: goto label_25a398;
        case 0x25a39cu: goto label_25a39c;
        case 0x25a3a0u: goto label_25a3a0;
        case 0x25a3a4u: goto label_25a3a4;
        case 0x25a3a8u: goto label_25a3a8;
        case 0x25a3acu: goto label_25a3ac;
        case 0x25a3b0u: goto label_25a3b0;
        case 0x25a3b4u: goto label_25a3b4;
        case 0x25a3b8u: goto label_25a3b8;
        case 0x25a3bcu: goto label_25a3bc;
        case 0x25a3c0u: goto label_25a3c0;
        case 0x25a3c4u: goto label_25a3c4;
        case 0x25a3c8u: goto label_25a3c8;
        case 0x25a3ccu: goto label_25a3cc;
        case 0x25a3d0u: goto label_25a3d0;
        case 0x25a3d4u: goto label_25a3d4;
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a3dcu: goto label_25a3dc;
        case 0x25a3e0u: goto label_25a3e0;
        case 0x25a3e4u: goto label_25a3e4;
        case 0x25a3e8u: goto label_25a3e8;
        case 0x25a3ecu: goto label_25a3ec;
        case 0x25a3f0u: goto label_25a3f0;
        case 0x25a3f4u: goto label_25a3f4;
        case 0x25a3f8u: goto label_25a3f8;
        case 0x25a3fcu: goto label_25a3fc;
        case 0x25a400u: goto label_25a400;
        case 0x25a404u: goto label_25a404;
        case 0x25a408u: goto label_25a408;
        case 0x25a40cu: goto label_25a40c;
        case 0x25a410u: goto label_25a410;
        case 0x25a414u: goto label_25a414;
        case 0x25a418u: goto label_25a418;
        case 0x25a41cu: goto label_25a41c;
        case 0x25a420u: goto label_25a420;
        case 0x25a424u: goto label_25a424;
        case 0x25a428u: goto label_25a428;
        case 0x25a42cu: goto label_25a42c;
        case 0x25a430u: goto label_25a430;
        case 0x25a434u: goto label_25a434;
        case 0x25a438u: goto label_25a438;
        case 0x25a43cu: goto label_25a43c;
        case 0x25a440u: goto label_25a440;
        case 0x25a444u: goto label_25a444;
        case 0x25a448u: goto label_25a448;
        case 0x25a44cu: goto label_25a44c;
        case 0x25a450u: goto label_25a450;
        case 0x25a454u: goto label_25a454;
        case 0x25a458u: goto label_25a458;
        case 0x25a45cu: goto label_25a45c;
        case 0x25a460u: goto label_25a460;
        case 0x25a464u: goto label_25a464;
        case 0x25a468u: goto label_25a468;
        case 0x25a46cu: goto label_25a46c;
        case 0x25a470u: goto label_25a470;
        case 0x25a474u: goto label_25a474;
        case 0x25a478u: goto label_25a478;
        case 0x25a47cu: goto label_25a47c;
        case 0x25a480u: goto label_25a480;
        case 0x25a484u: goto label_25a484;
        case 0x25a488u: goto label_25a488;
        case 0x25a48cu: goto label_25a48c;
        case 0x25a490u: goto label_25a490;
        case 0x25a494u: goto label_25a494;
        case 0x25a498u: goto label_25a498;
        case 0x25a49cu: goto label_25a49c;
        case 0x25a4a0u: goto label_25a4a0;
        case 0x25a4a4u: goto label_25a4a4;
        case 0x25a4a8u: goto label_25a4a8;
        case 0x25a4acu: goto label_25a4ac;
        case 0x25a4b0u: goto label_25a4b0;
        case 0x25a4b4u: goto label_25a4b4;
        case 0x25a4b8u: goto label_25a4b8;
        case 0x25a4bcu: goto label_25a4bc;
        case 0x25a4c0u: goto label_25a4c0;
        case 0x25a4c4u: goto label_25a4c4;
        case 0x25a4c8u: goto label_25a4c8;
        case 0x25a4ccu: goto label_25a4cc;
        case 0x25a4d0u: goto label_25a4d0;
        case 0x25a4d4u: goto label_25a4d4;
        case 0x25a4d8u: goto label_25a4d8;
        case 0x25a4dcu: goto label_25a4dc;
        case 0x25a4e0u: goto label_25a4e0;
        case 0x25a4e4u: goto label_25a4e4;
        case 0x25a4e8u: goto label_25a4e8;
        case 0x25a4ecu: goto label_25a4ec;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a4f4u: goto label_25a4f4;
        case 0x25a4f8u: goto label_25a4f8;
        case 0x25a4fcu: goto label_25a4fc;
        case 0x25a500u: goto label_25a500;
        case 0x25a504u: goto label_25a504;
        case 0x25a508u: goto label_25a508;
        case 0x25a50cu: goto label_25a50c;
        case 0x25a510u: goto label_25a510;
        case 0x25a514u: goto label_25a514;
        case 0x25a518u: goto label_25a518;
        case 0x25a51cu: goto label_25a51c;
        case 0x25a520u: goto label_25a520;
        case 0x25a524u: goto label_25a524;
        case 0x25a528u: goto label_25a528;
        case 0x25a52cu: goto label_25a52c;
        case 0x25a530u: goto label_25a530;
        case 0x25a534u: goto label_25a534;
        case 0x25a538u: goto label_25a538;
        case 0x25a53cu: goto label_25a53c;
        case 0x25a540u: goto label_25a540;
        case 0x25a544u: goto label_25a544;
        case 0x25a548u: goto label_25a548;
        case 0x25a54cu: goto label_25a54c;
        case 0x25a550u: goto label_25a550;
        case 0x25a554u: goto label_25a554;
        case 0x25a558u: goto label_25a558;
        case 0x25a55cu: goto label_25a55c;
        case 0x25a560u: goto label_25a560;
        case 0x25a564u: goto label_25a564;
        case 0x25a568u: goto label_25a568;
        case 0x25a56cu: goto label_25a56c;
        case 0x25a570u: goto label_25a570;
        case 0x25a574u: goto label_25a574;
        case 0x25a578u: goto label_25a578;
        case 0x25a57cu: goto label_25a57c;
        case 0x25a580u: goto label_25a580;
        case 0x25a584u: goto label_25a584;
        case 0x25a588u: goto label_25a588;
        case 0x25a58cu: goto label_25a58c;
        case 0x25a590u: goto label_25a590;
        case 0x25a594u: goto label_25a594;
        case 0x25a598u: goto label_25a598;
        case 0x25a59cu: goto label_25a59c;
        case 0x25a5a0u: goto label_25a5a0;
        case 0x25a5a4u: goto label_25a5a4;
        case 0x25a5a8u: goto label_25a5a8;
        case 0x25a5acu: goto label_25a5ac;
        case 0x25a5b0u: goto label_25a5b0;
        case 0x25a5b4u: goto label_25a5b4;
        case 0x25a5b8u: goto label_25a5b8;
        case 0x25a5bcu: goto label_25a5bc;
        case 0x25a5c0u: goto label_25a5c0;
        case 0x25a5c4u: goto label_25a5c4;
        case 0x25a5c8u: goto label_25a5c8;
        case 0x25a5ccu: goto label_25a5cc;
        case 0x25a5d0u: goto label_25a5d0;
        case 0x25a5d4u: goto label_25a5d4;
        case 0x25a5d8u: goto label_25a5d8;
        case 0x25a5dcu: goto label_25a5dc;
        case 0x25a5e0u: goto label_25a5e0;
        case 0x25a5e4u: goto label_25a5e4;
        case 0x25a5e8u: goto label_25a5e8;
        case 0x25a5ecu: goto label_25a5ec;
        case 0x25a5f0u: goto label_25a5f0;
        case 0x25a5f4u: goto label_25a5f4;
        case 0x25a5f8u: goto label_25a5f8;
        case 0x25a5fcu: goto label_25a5fc;
        case 0x25a600u: goto label_25a600;
        case 0x25a604u: goto label_25a604;
        case 0x25a608u: goto label_25a608;
        case 0x25a60cu: goto label_25a60c;
        case 0x25a610u: goto label_25a610;
        case 0x25a614u: goto label_25a614;
        case 0x25a618u: goto label_25a618;
        case 0x25a61cu: goto label_25a61c;
        case 0x25a620u: goto label_25a620;
        case 0x25a624u: goto label_25a624;
        case 0x25a628u: goto label_25a628;
        case 0x25a62cu: goto label_25a62c;
        case 0x25a630u: goto label_25a630;
        case 0x25a634u: goto label_25a634;
        case 0x25a638u: goto label_25a638;
        case 0x25a63cu: goto label_25a63c;
        case 0x25a640u: goto label_25a640;
        case 0x25a644u: goto label_25a644;
        case 0x25a648u: goto label_25a648;
        case 0x25a64cu: goto label_25a64c;
        case 0x25a650u: goto label_25a650;
        case 0x25a654u: goto label_25a654;
        case 0x25a658u: goto label_25a658;
        case 0x25a65cu: goto label_25a65c;
        case 0x25a660u: goto label_25a660;
        case 0x25a664u: goto label_25a664;
        case 0x25a668u: goto label_25a668;
        case 0x25a66cu: goto label_25a66c;
        case 0x25a670u: goto label_25a670;
        case 0x25a674u: goto label_25a674;
        case 0x25a678u: goto label_25a678;
        case 0x25a67cu: goto label_25a67c;
        case 0x25a680u: goto label_25a680;
        case 0x25a684u: goto label_25a684;
        case 0x25a688u: goto label_25a688;
        case 0x25a68cu: goto label_25a68c;
        case 0x25a690u: goto label_25a690;
        case 0x25a694u: goto label_25a694;
        case 0x25a698u: goto label_25a698;
        case 0x25a69cu: goto label_25a69c;
        case 0x25a6a0u: goto label_25a6a0;
        case 0x25a6a4u: goto label_25a6a4;
        case 0x25a6a8u: goto label_25a6a8;
        case 0x25a6acu: goto label_25a6ac;
        case 0x25a6b0u: goto label_25a6b0;
        case 0x25a6b4u: goto label_25a6b4;
        case 0x25a6b8u: goto label_25a6b8;
        case 0x25a6bcu: goto label_25a6bc;
        case 0x25a6c0u: goto label_25a6c0;
        case 0x25a6c4u: goto label_25a6c4;
        case 0x25a6c8u: goto label_25a6c8;
        case 0x25a6ccu: goto label_25a6cc;
        case 0x25a6d0u: goto label_25a6d0;
        case 0x25a6d4u: goto label_25a6d4;
        case 0x25a6d8u: goto label_25a6d8;
        case 0x25a6dcu: goto label_25a6dc;
        case 0x25a6e0u: goto label_25a6e0;
        case 0x25a6e4u: goto label_25a6e4;
        case 0x25a6e8u: goto label_25a6e8;
        case 0x25a6ecu: goto label_25a6ec;
        case 0x25a6f0u: goto label_25a6f0;
        case 0x25a6f4u: goto label_25a6f4;
        case 0x25a6f8u: goto label_25a6f8;
        case 0x25a6fcu: goto label_25a6fc;
        case 0x25a700u: goto label_25a700;
        case 0x25a704u: goto label_25a704;
        case 0x25a708u: goto label_25a708;
        case 0x25a70cu: goto label_25a70c;
        case 0x25a710u: goto label_25a710;
        case 0x25a714u: goto label_25a714;
        case 0x25a718u: goto label_25a718;
        case 0x25a71cu: goto label_25a71c;
        case 0x25a720u: goto label_25a720;
        case 0x25a724u: goto label_25a724;
        case 0x25a728u: goto label_25a728;
        case 0x25a72cu: goto label_25a72c;
        case 0x25a730u: goto label_25a730;
        case 0x25a734u: goto label_25a734;
        case 0x25a738u: goto label_25a738;
        case 0x25a73cu: goto label_25a73c;
        case 0x25a740u: goto label_25a740;
        case 0x25a744u: goto label_25a744;
        case 0x25a748u: goto label_25a748;
        case 0x25a74cu: goto label_25a74c;
        case 0x25a750u: goto label_25a750;
        case 0x25a754u: goto label_25a754;
        case 0x25a758u: goto label_25a758;
        case 0x25a75cu: goto label_25a75c;
        case 0x25a760u: goto label_25a760;
        case 0x25a764u: goto label_25a764;
        case 0x25a768u: goto label_25a768;
        case 0x25a76cu: goto label_25a76c;
        case 0x25a770u: goto label_25a770;
        case 0x25a774u: goto label_25a774;
        case 0x25a778u: goto label_25a778;
        case 0x25a77cu: goto label_25a77c;
        case 0x25a780u: goto label_25a780;
        case 0x25a784u: goto label_25a784;
        case 0x25a788u: goto label_25a788;
        case 0x25a78cu: goto label_25a78c;
        case 0x25a790u: goto label_25a790;
        case 0x25a794u: goto label_25a794;
        case 0x25a798u: goto label_25a798;
        case 0x25a79cu: goto label_25a79c;
        case 0x25a7a0u: goto label_25a7a0;
        case 0x25a7a4u: goto label_25a7a4;
        case 0x25a7a8u: goto label_25a7a8;
        case 0x25a7acu: goto label_25a7ac;
        case 0x25a7b0u: goto label_25a7b0;
        case 0x25a7b4u: goto label_25a7b4;
        case 0x25a7b8u: goto label_25a7b8;
        case 0x25a7bcu: goto label_25a7bc;
        case 0x25a7c0u: goto label_25a7c0;
        case 0x25a7c4u: goto label_25a7c4;
        case 0x25a7c8u: goto label_25a7c8;
        case 0x25a7ccu: goto label_25a7cc;
        case 0x25a7d0u: goto label_25a7d0;
        case 0x25a7d4u: goto label_25a7d4;
        case 0x25a7d8u: goto label_25a7d8;
        case 0x25a7dcu: goto label_25a7dc;
        case 0x25a7e0u: goto label_25a7e0;
        case 0x25a7e4u: goto label_25a7e4;
        case 0x25a7e8u: goto label_25a7e8;
        case 0x25a7ecu: goto label_25a7ec;
        case 0x25a7f0u: goto label_25a7f0;
        case 0x25a7f4u: goto label_25a7f4;
        case 0x25a7f8u: goto label_25a7f8;
        case 0x25a7fcu: goto label_25a7fc;
        case 0x25a800u: goto label_25a800;
        case 0x25a804u: goto label_25a804;
        case 0x25a808u: goto label_25a808;
        case 0x25a80cu: goto label_25a80c;
        case 0x25a810u: goto label_25a810;
        case 0x25a814u: goto label_25a814;
        case 0x25a818u: goto label_25a818;
        case 0x25a81cu: goto label_25a81c;
        case 0x25a820u: goto label_25a820;
        case 0x25a824u: goto label_25a824;
        case 0x25a828u: goto label_25a828;
        case 0x25a82cu: goto label_25a82c;
        case 0x25a830u: goto label_25a830;
        case 0x25a834u: goto label_25a834;
        case 0x25a838u: goto label_25a838;
        case 0x25a83cu: goto label_25a83c;
        case 0x25a840u: goto label_25a840;
        case 0x25a844u: goto label_25a844;
        case 0x25a848u: goto label_25a848;
        case 0x25a84cu: goto label_25a84c;
        case 0x25a850u: goto label_25a850;
        case 0x25a854u: goto label_25a854;
        case 0x25a858u: goto label_25a858;
        case 0x25a85cu: goto label_25a85c;
        case 0x25a860u: goto label_25a860;
        case 0x25a864u: goto label_25a864;
        case 0x25a868u: goto label_25a868;
        case 0x25a86cu: goto label_25a86c;
        case 0x25a870u: goto label_25a870;
        case 0x25a874u: goto label_25a874;
        case 0x25a878u: goto label_25a878;
        case 0x25a87cu: goto label_25a87c;
        case 0x25a880u: goto label_25a880;
        case 0x25a884u: goto label_25a884;
        case 0x25a888u: goto label_25a888;
        case 0x25a88cu: goto label_25a88c;
        case 0x25a890u: goto label_25a890;
        case 0x25a894u: goto label_25a894;
        case 0x25a898u: goto label_25a898;
        case 0x25a89cu: goto label_25a89c;
        case 0x25a8a0u: goto label_25a8a0;
        case 0x25a8a4u: goto label_25a8a4;
        case 0x25a8a8u: goto label_25a8a8;
        case 0x25a8acu: goto label_25a8ac;
        case 0x25a8b0u: goto label_25a8b0;
        case 0x25a8b4u: goto label_25a8b4;
        case 0x25a8b8u: goto label_25a8b8;
        case 0x25a8bcu: goto label_25a8bc;
        case 0x25a8c0u: goto label_25a8c0;
        case 0x25a8c4u: goto label_25a8c4;
        case 0x25a8c8u: goto label_25a8c8;
        case 0x25a8ccu: goto label_25a8cc;
        case 0x25a8d0u: goto label_25a8d0;
        case 0x25a8d4u: goto label_25a8d4;
        case 0x25a8d8u: goto label_25a8d8;
        case 0x25a8dcu: goto label_25a8dc;
        default: break;
    }

    ctx->pc = 0x259dc8u;

label_259dc8:
    // 0x259dc8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x259dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_259dcc:
    // 0x259dcc: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x259dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_259dd0:
    // 0x259dd0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x259dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_259dd4:
    // 0x259dd4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x259dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_259dd8:
    // 0x259dd8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x259dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_259ddc:
    // 0x259ddc: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x259ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
label_259de0:
    // 0x259de0: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_259de4:
    // 0x259de4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x259de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_259de8:
    // 0x259de8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x259de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_259dec:
    // 0x259dec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x259decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_259df0:
    // 0x259df0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x259df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_259df4:
    // 0x259df4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x259df4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259df8:
    // 0x259df8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x259df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_259dfc:
    // 0x259dfc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x259dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_259e00:
    // 0x259e00: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x259e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_259e04:
    // 0x259e04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x259e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_259e08:
    // 0x259e08: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x259e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_259e0c:
    // 0x259e0c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x259e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_259e10:
    // 0x259e10: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x259e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_259e14:
    // 0x259e14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x259e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_259e18:
    // 0x259e18: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x259e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_259e1c:
    // 0x259e1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x259e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_259e20:
    // 0x259e20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x259e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_259e24:
    // 0x259e24: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x259e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_259e28:
    // 0x259e28: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x259e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_259e2c:
    // 0x259e2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x259e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_259e30:
    // 0x259e30: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x259e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_259e34:
    // 0x259e34: 0xc096598  jal         func_259660
label_259e38:
    if (ctx->pc == 0x259E38u) {
        ctx->pc = 0x259E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E34u;
        // 0x259e38: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E3Cu;
        goto label_259e3c;
    }
    ctx->pc = 0x259E34u;
    SET_GPR_U32(ctx, 31, 0x259E3Cu);
    ctx->pc = 0x259E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E34u;
    // 0x259e38: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259660u, 0x259E34u, 0x259E3Cu)) {
        return;
    }
    ctx->pc = 0x259E3Cu;
label_259e3c:
    // 0x259e3c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x259e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_259e40:
    // 0x259e40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x259e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259e44:
    // 0x259e44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x259e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_259e48:
    // 0x259e48: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_259e4c:
    if (ctx->pc == 0x259E4Cu) {
        ctx->pc = 0x259E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E48u;
        // 0x259e4c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E50u;
        goto label_259e50;
    }
    ctx->pc = 0x259E48u;
    {
        const bool branch_taken_0x259e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E48u;
        // 0x259e4c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e48) {
            ctx->pc = 0x259EB0u;
            goto label_259eb0;
        }
    }
    ctx->pc = 0x259E50u;
label_259e50:
    // 0x259e50: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x259e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_259e54:
    // 0x259e54: 0x0  nop
    ctx->pc = 0x259e54u;
    // NOP
label_259e58:
    // 0x259e58: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x259e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259e5c:
    // 0x259e5c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x259e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_259e60:
    // 0x259e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_259e64:
    // 0x259e64: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x259e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_259e68:
    // 0x259e68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x259e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259e6c:
    // 0x259e6c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x259e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_259e70:
    // 0x259e70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x259e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259e74:
    // 0x259e74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x259e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_259e78:
    // 0x259e78: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_259e7c:
    if (ctx->pc == 0x259E7Cu) {
        ctx->pc = 0x259E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E78u;
        // 0x259e7c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E80u;
        goto label_259e80;
    }
    ctx->pc = 0x259E78u;
    {
        const bool branch_taken_0x259e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259e78) {
            ctx->pc = 0x259E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259E78u;
            // 0x259e7c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259E80u;
            goto label_259e80;
        }
    }
    ctx->pc = 0x259E80u;
label_259e80:
    // 0x259e80: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x259e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259e84:
    // 0x259e84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x259e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_259e88:
    // 0x259e88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x259e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_259e8c:
    // 0x259e8c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x259e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_259e90:
    // 0x259e90: 0xe3282b  sltu        $a1, $a3, $v1
    ctx->pc = 0x259e90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_259e94:
    // 0x259e94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_259e98:
    // 0x259e98: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x259e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_259e9c:
    // 0x259e9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x259e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_259ea0:
    // 0x259ea0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x259ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259ea4:
    // 0x259ea4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_259ea8:
    // 0x259ea8: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
label_259eac:
    if (ctx->pc == 0x259EACu) {
        ctx->pc = 0x259EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EA8u;
        // 0x259eac: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259EB0u;
        goto label_259eb0;
    }
    ctx->pc = 0x259EA8u;
    {
        const bool branch_taken_0x259ea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x259EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EA8u;
        // 0x259eac: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ea8) {
            ctx->pc = 0x259E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259e58;
        }
    }
    ctx->pc = 0x259EB0u;
label_259eb0:
    // 0x259eb0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x259eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_259eb4:
    // 0x259eb4: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x259eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_259eb8:
    // 0x259eb8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x259eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_259ebc:
    // 0x259ebc: 0x24920fc8  addiu       $s2, $a0, 0xFC8
    ctx->pc = 0x259ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_259ec0:
    // 0x259ec0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x259ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_259ec4:
    // 0x259ec4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x259ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_259ec8:
    // 0x259ec8: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x259ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_259ecc:
    // 0x259ecc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x259eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_259ed0:
    // 0x259ed0: 0x40f809  jalr        $v0
label_259ed4:
    if (ctx->pc == 0x259ED4u) {
        ctx->pc = 0x259ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ED0u;
        // 0x259ed4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259ED8u;
        goto label_259ed8;
    }
    ctx->pc = 0x259ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259ED8u);
        ctx->pc = 0x259ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ED0u;
        // 0x259ed4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259ED0u, 0x259ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259ED8u;
label_259ed8:
    // 0x259ed8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x259ed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259edc:
    // 0x259edc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x259edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_259ee0:
    // 0x259ee0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x259ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_259ee4:
    // 0x259ee4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x259ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_259ee8:
    // 0x259ee8: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x259ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_259eec:
    // 0x259eec: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x259eecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_259ef0:
    // 0x259ef0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x259ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_259ef4:
    // 0x259ef4: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x259ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
label_259ef8:
    // 0x259ef8: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x259ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_259efc:
    // 0x259efc: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x259efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_259f00:
    // 0x259f00: 0x40f809  jalr        $v0
label_259f04:
    if (ctx->pc == 0x259F04u) {
        ctx->pc = 0x259F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F00u;
        // 0x259f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F08u;
        goto label_259f08;
    }
    ctx->pc = 0x259F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259F08u);
        ctx->pc = 0x259F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F00u;
        // 0x259f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F00u, 0x259F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259F08u;
label_259f08:
    // 0x259f08: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x259f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_259f0c:
    // 0x259f0c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x259f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_259f10:
    // 0x259f10: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x259f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_259f14:
    // 0x259f14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_259f18:
    // 0x259f18: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x259f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_259f1c:
    // 0x259f1c: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x259f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_259f20:
    // 0x259f20: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_259f24:
    // 0x259f24: 0x40f809  jalr        $v0
label_259f28:
    if (ctx->pc == 0x259F28u) {
        ctx->pc = 0x259F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F24u;
        // 0x259f28: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F2Cu;
        goto label_259f2c;
    }
    ctx->pc = 0x259F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259F2Cu);
        ctx->pc = 0x259F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F24u;
        // 0x259f28: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F24u, 0x259F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259F2Cu;
label_259f2c:
    // 0x259f2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x259f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259f30:
    // 0x259f30: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x259f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_259f34:
    // 0x259f34: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x259f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_259f38:
    // 0x259f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_259f3c:
    // 0x259f3c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x259f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_259f40:
    // 0x259f40: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x259f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_259f44:
    // 0x259f44: 0x40f809  jalr        $v0
label_259f48:
    if (ctx->pc == 0x259F48u) {
        ctx->pc = 0x259F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F44u;
        // 0x259f48: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F4Cu;
        goto label_259f4c;
    }
    ctx->pc = 0x259F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259F4Cu);
        ctx->pc = 0x259F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F44u;
        // 0x259f48: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F44u, 0x259F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259F4Cu;
label_259f4c:
    // 0x259f4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x259f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_259f50:
    // 0x259f50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x259f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_259f54:
    // 0x259f54: 0x10600238  beqz        $v1, . + 4 + (0x238 << 2)
label_259f58:
    if (ctx->pc == 0x259F58u) {
        ctx->pc = 0x259F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F54u;
        // 0x259f58: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F5Cu;
        goto label_259f5c;
    }
    ctx->pc = 0x259F54u;
    {
        const bool branch_taken_0x259f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F54u;
        // 0x259f58: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f54) {
            ctx->pc = 0x25A838u;
            goto label_25a838;
        }
    }
    ctx->pc = 0x259F5Cu;
label_259f5c:
    // 0x259f5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x259f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259f60:
    // 0x259f60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x259f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_259f64:
    // 0x259f64: 0x0  nop
    ctx->pc = 0x259f64u;
    // NOP
label_259f68:
    // 0x259f68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x259f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_259f6c:
    // 0x259f6c: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x259f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_259f70:
    // 0x259f70: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x259f70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_259f74:
    // 0x259f74: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x259f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_259f78:
    // 0x259f78: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_259f7c:
    if (ctx->pc == 0x259F7Cu) {
        ctx->pc = 0x259F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F78u;
        // 0x259f7c: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F80u;
        goto label_259f80;
    }
    ctx->pc = 0x259F78u;
    {
        const bool branch_taken_0x259f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F78u;
        // 0x259f7c: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f78) {
            ctx->pc = 0x25A048u;
            goto label_25a048;
        }
    }
    ctx->pc = 0x259F80u;
label_259f80:
    // 0x259f80: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x259f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_259f84:
    // 0x259f84: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x259f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_259f88:
    // 0x259f88: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x259f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_259f8c:
    // 0x259f8c: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x259f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_259f90:
    // 0x259f90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_259f94:
    // 0x259f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_259f98:
    // 0x259f98: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x259f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_259f9c:
    // 0x259f9c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x259f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_259fa0:
    // 0x259fa0: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x259fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_259fa4:
    // 0x259fa4: 0x40f809  jalr        $v0
label_259fa8:
    if (ctx->pc == 0x259FA8u) {
        ctx->pc = 0x259FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FA4u;
        // 0x259fa8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FACu;
        goto label_259fac;
    }
    ctx->pc = 0x259FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259FACu);
        ctx->pc = 0x259FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FA4u;
        // 0x259fa8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259FA4u, 0x259FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259FACu;
label_259fac:
    // 0x259fac: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x259facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_259fb0:
    // 0x259fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x259fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259fb4:
    // 0x259fb4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x259fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_259fb8:
    // 0x259fb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x259fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_259fbc:
    // 0x259fbc: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x259fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_259fc0:
    // 0x259fc0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x259fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_259fc4:
    // 0x259fc4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x259fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_259fc8:
    // 0x259fc8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x259fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_259fcc:
    // 0x259fcc: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x259fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_259fd0:
    // 0x259fd0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x259fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_259fd4:
    // 0x259fd4: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x259fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_259fd8:
    // 0x259fd8: 0xae3e0004  sw          $fp, 0x4($s1)
    ctx->pc = 0x259fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 30));
label_259fdc:
    // 0x259fdc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x259fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_259fe0:
    // 0x259fe0: 0x40f809  jalr        $v0
label_259fe4:
    if (ctx->pc == 0x259FE4u) {
        ctx->pc = 0x259FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FE0u;
        // 0x259fe4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FE8u;
        goto label_259fe8;
    }
    ctx->pc = 0x259FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259FE8u);
        ctx->pc = 0x259FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FE0u;
        // 0x259fe4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259FE0u, 0x259FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259FE8u;
label_259fe8:
    // 0x259fe8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x259fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_259fec:
    // 0x259fec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x259fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_259ff0:
    // 0x259ff0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x259ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_259ff4:
    // 0x259ff4: 0x800013  mtlo        $a0
    ctx->pc = 0x259ff4u;
    ctx->lo = GPR_U64(ctx, 4);
label_259ff8:
    // 0x259ff8: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x259ff8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_259ffc:
    // 0x259ffc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x259ffcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_25a000:
    // 0x25a000: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25a000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_25a004:
    // 0x25a004: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x25a004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_25a008:
    // 0x25a008: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25a008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a00c:
    // 0x25a00c: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x25a00cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_25a010:
    // 0x25a010: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x25a010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_25a014:
    // 0x25a014: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25a014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a018:
    // 0x25a018: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x25a018u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_25a01c:
    // 0x25a01c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25a020:
    // 0x25a020: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x25a020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
label_25a024:
    // 0x25a024: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25a028:
    // 0x25a028: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x25a028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
label_25a02c:
    // 0x25a02c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25a030:
    // 0x25a030: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x25a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_25a034:
    // 0x25a034: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_25a038:
    if (ctx->pc == 0x25A038u) {
        ctx->pc = 0x25A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A034u;
        // 0x25a038: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A03Cu;
        goto label_25a03c;
    }
    ctx->pc = 0x25A034u;
    {
        const bool branch_taken_0x25a034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A034u;
        // 0x25a038: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a034) {
            ctx->pc = 0x25A040u;
            goto label_25a040;
        }
    }
    ctx->pc = 0x25A03Cu;
label_25a03c:
    // 0x25a03c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x25a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_25a040:
    // 0x25a040: 0x100001f9  b           . + 4 + (0x1F9 << 2)
label_25a044:
    if (ctx->pc == 0x25A044u) {
        ctx->pc = 0x25A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A040u;
        // 0x25a044: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A048u;
        goto label_25a048;
    }
    ctx->pc = 0x25A040u;
    {
        const bool branch_taken_0x25a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A040u;
        // 0x25a044: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a040) {
            ctx->pc = 0x25A828u;
            goto label_25a828;
        }
    }
    ctx->pc = 0x25A048u;
label_25a048:
    // 0x25a048: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x25a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_25a04c:
    // 0x25a04c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_25a050:
    if (ctx->pc == 0x25A050u) {
        ctx->pc = 0x25A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A04Cu;
        // 0x25a050: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A054u;
        goto label_25a054;
    }
    ctx->pc = 0x25A04Cu;
    {
        const bool branch_taken_0x25a04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A04Cu;
        // 0x25a050: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a04c) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x25A054u;
label_25a054:
    // 0x25a054: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x25a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_25a058:
    // 0x25a058: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25a05c:
    // 0x25a05c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a060:
    // 0x25a060: 0x0  nop
    ctx->pc = 0x25a060u;
    // NOP
label_25a064:
    // 0x25a064: 0x0  nop
    ctx->pc = 0x25a064u;
    // NOP
label_25a068:
    // 0x25a068: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_25a06c:
    if (ctx->pc == 0x25A06Cu) {
        ctx->pc = 0x25A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A068u;
        // 0x25a06c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A070u;
        goto label_25a070;
    }
    ctx->pc = 0x25A068u;
    {
        const bool branch_taken_0x25a068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A068u;
        // 0x25a06c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a068) {
            ctx->pc = 0x25A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a058;
        }
    }
    ctx->pc = 0x25A070u;
label_25a070:
    // 0x25a070: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x25a070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_25a074:
    // 0x25a074: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x25a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_25a078:
    // 0x25a078: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x25a078u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25a07c:
    // 0x25a07c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a080:
    // 0x25a080: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25a084:
    // 0x25a084: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25a088:
    // 0x25a088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a08c:
    if (ctx->pc == 0x25A08Cu) {
        ctx->pc = 0x25A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A088u;
        // 0x25a08c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A090u;
        goto label_25a090;
    }
    ctx->pc = 0x25A088u;
    {
        const bool branch_taken_0x25a088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A088u;
        // 0x25a08c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a088) {
            ctx->pc = 0x25A09Cu;
            goto label_25a09c;
        }
    }
    ctx->pc = 0x25A090u;
label_25a090:
    // 0x25a090: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a094:
    // 0x25a094: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25a094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a098:
    // 0x25a098: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x25a098u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_25a09c:
    // 0x25a09c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25a0a0:
    // 0x25a0a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a0a4:
    if (ctx->pc == 0x25A0A4u) {
        ctx->pc = 0x25A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0A0u;
        // 0x25a0a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0A8u;
        goto label_25a0a8;
    }
    ctx->pc = 0x25A0A0u;
    {
        const bool branch_taken_0x25a0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0A0u;
        // 0x25a0a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0a0) {
            ctx->pc = 0x25A0B4u;
            goto label_25a0b4;
        }
    }
    ctx->pc = 0x25A0A8u;
label_25a0a8:
    // 0x25a0a8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a0ac:
    // 0x25a0ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a0b0:
    // 0x25a0b0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a0b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a0b4:
    // 0x25a0b4: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x25a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_25a0b8:
    // 0x25a0b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25a0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a0bc:
    // 0x25a0bc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_25a0c0:
    if (ctx->pc == 0x25A0C0u) {
        ctx->pc = 0x25A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0BCu;
        // 0x25a0c0: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0C4u;
        goto label_25a0c4;
    }
    ctx->pc = 0x25A0BCu;
    {
        const bool branch_taken_0x25a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0BCu;
        // 0x25a0c0: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0bc) {
            ctx->pc = 0x25A110u;
            goto label_25a110;
        }
    }
    ctx->pc = 0x25A0C4u;
label_25a0c4:
    // 0x25a0c4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a0c8:
    // 0x25a0c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a0cc:
    // 0x25a0cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a0d0:
    if (ctx->pc == 0x25A0D0u) {
        ctx->pc = 0x25A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0CCu;
        // 0x25a0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0D4u;
        goto label_25a0d4;
    }
    ctx->pc = 0x25A0CCu;
    {
        const bool branch_taken_0x25a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0CCu;
        // 0x25a0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0cc) {
            ctx->pc = 0x25A0E0u;
            goto label_25a0e0;
        }
    }
    ctx->pc = 0x25A0D4u;
label_25a0d4:
    // 0x25a0d4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a0d8:
    // 0x25a0d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a0dc:
    // 0x25a0dc: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x25a0dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_25a0e0:
    // 0x25a0e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a0e4:
    // 0x25a0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a0e8:
    if (ctx->pc == 0x25A0E8u) {
        ctx->pc = 0x25A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0E4u;
        // 0x25a0e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0ECu;
        goto label_25a0ec;
    }
    ctx->pc = 0x25A0E4u;
    {
        const bool branch_taken_0x25a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0E4u;
        // 0x25a0e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0e4) {
            ctx->pc = 0x25A0F8u;
            goto label_25a0f8;
        }
    }
    ctx->pc = 0x25A0ECu;
label_25a0ec:
    // 0x25a0ec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a0f0:
    // 0x25a0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a0f4:
    // 0x25a0f4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a0f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a0f8:
    // 0x25a0f8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25a0fc:
    // 0x25a0fc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25a0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a100:
    // 0x25a100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25a104:
    if (ctx->pc == 0x25A104u) {
        ctx->pc = 0x25A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A100u;
        // 0x25a104: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A108u;
        goto label_25a108;
    }
    ctx->pc = 0x25A100u;
    {
        const bool branch_taken_0x25a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A100u;
        // 0x25a104: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a100) {
            ctx->pc = 0x25A110u;
            goto label_25a110;
        }
    }
    ctx->pc = 0x25A108u;
label_25a108:
    // 0x25a108: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_25a10c:
    if (ctx->pc == 0x25A10Cu) {
        ctx->pc = 0x25A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A108u;
        // 0x25a10c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A110u;
        goto label_25a110;
    }
    ctx->pc = 0x25A108u;
    {
        const bool branch_taken_0x25a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A108u;
        // 0x25a10c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a108) {
            ctx->pc = 0x25A39Cu;
            goto label_25a39c;
        }
    }
    ctx->pc = 0x25A110u;
label_25a110:
    // 0x25a110: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a114:
    // 0x25a114: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25a118:
    // 0x25a118: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a11c:
    // 0x25a11c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a120:
    if (ctx->pc == 0x25A120u) {
        ctx->pc = 0x25A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A11Cu;
        // 0x25a120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A124u;
        goto label_25a124;
    }
    ctx->pc = 0x25A11Cu;
    {
        const bool branch_taken_0x25a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A11Cu;
        // 0x25a120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a11c) {
            ctx->pc = 0x25A130u;
            goto label_25a130;
        }
    }
    ctx->pc = 0x25A124u;
label_25a124:
    // 0x25a124: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a128:
    // 0x25a128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a12c:
    // 0x25a12c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a12cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a130:
    // 0x25a130: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a134:
    // 0x25a134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a138:
    if (ctx->pc == 0x25A138u) {
        ctx->pc = 0x25A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A134u;
        // 0x25a138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A13Cu;
        goto label_25a13c;
    }
    ctx->pc = 0x25A134u;
    {
        const bool branch_taken_0x25a134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A134u;
        // 0x25a138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a134) {
            ctx->pc = 0x25A148u;
            goto label_25a148;
        }
    }
    ctx->pc = 0x25A13Cu;
label_25a13c:
    // 0x25a13c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a140:
    // 0x25a140: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a144:
    // 0x25a144: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a144u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a148:
    // 0x25a148: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a14c:
    // 0x25a14c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25a14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a150:
    // 0x25a150: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_25a154:
    if (ctx->pc == 0x25A154u) {
        ctx->pc = 0x25A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A150u;
        // 0x25a154: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A158u;
        goto label_25a158;
    }
    ctx->pc = 0x25A150u;
    {
        const bool branch_taken_0x25a150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A150u;
        // 0x25a154: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a150) {
            ctx->pc = 0x25A1A4u;
            goto label_25a1a4;
        }
    }
    ctx->pc = 0x25A158u;
label_25a158:
    // 0x25a158: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x25a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25a15c:
    // 0x25a15c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a160:
    // 0x25a160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a164:
    if (ctx->pc == 0x25A164u) {
        ctx->pc = 0x25A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A160u;
        // 0x25a164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A168u;
        goto label_25a168;
    }
    ctx->pc = 0x25A160u;
    {
        const bool branch_taken_0x25a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A160u;
        // 0x25a164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a160) {
            ctx->pc = 0x25A174u;
            goto label_25a174;
        }
    }
    ctx->pc = 0x25A168u;
label_25a168:
    // 0x25a168: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a16c:
    // 0x25a16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a170:
    // 0x25a170: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a174:
    // 0x25a174: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a178:
    // 0x25a178: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a17c:
    if (ctx->pc == 0x25A17Cu) {
        ctx->pc = 0x25A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A178u;
        // 0x25a17c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A180u;
        goto label_25a180;
    }
    ctx->pc = 0x25A178u;
    {
        const bool branch_taken_0x25a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A178u;
        // 0x25a17c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a178) {
            ctx->pc = 0x25A18Cu;
            goto label_25a18c;
        }
    }
    ctx->pc = 0x25A180u;
label_25a180:
    // 0x25a180: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a184:
    // 0x25a184: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a188:
    // 0x25a188: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a188u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a18c:
    // 0x25a18c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a190:
    // 0x25a190: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25a190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a194:
    // 0x25a194: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25a198:
    if (ctx->pc == 0x25A198u) {
        ctx->pc = 0x25A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A194u;
        // 0x25a198: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A19Cu;
        goto label_25a19c;
    }
    ctx->pc = 0x25A194u;
    {
        const bool branch_taken_0x25a194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A194u;
        // 0x25a198: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a194) {
            ctx->pc = 0x25A1A4u;
            goto label_25a1a4;
        }
    }
    ctx->pc = 0x25A19Cu;
label_25a19c:
    // 0x25a19c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_25a1a0:
    if (ctx->pc == 0x25A1A0u) {
        ctx->pc = 0x25A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A19Cu;
        // 0x25a1a0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1A4u;
        goto label_25a1a4;
    }
    ctx->pc = 0x25A19Cu;
    {
        const bool branch_taken_0x25a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A19Cu;
        // 0x25a1a0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a19c) {
            ctx->pc = 0x25A39Cu;
            goto label_25a39c;
        }
    }
    ctx->pc = 0x25A1A4u;
label_25a1a4:
    // 0x25a1a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a1a8:
    // 0x25a1a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x25a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25a1ac:
    // 0x25a1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a1b0:
    // 0x25a1b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a1b4:
    if (ctx->pc == 0x25A1B4u) {
        ctx->pc = 0x25A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1B0u;
        // 0x25a1b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1B8u;
        goto label_25a1b8;
    }
    ctx->pc = 0x25A1B0u;
    {
        const bool branch_taken_0x25a1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1B0u;
        // 0x25a1b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1b0) {
            ctx->pc = 0x25A1C4u;
            goto label_25a1c4;
        }
    }
    ctx->pc = 0x25A1B8u;
label_25a1b8:
    // 0x25a1b8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a1bc:
    // 0x25a1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a1c0:
    // 0x25a1c0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a1c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a1c4:
    // 0x25a1c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a1c8:
    // 0x25a1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a1cc:
    if (ctx->pc == 0x25A1CCu) {
        ctx->pc = 0x25A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1C8u;
        // 0x25a1cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1D0u;
        goto label_25a1d0;
    }
    ctx->pc = 0x25A1C8u;
    {
        const bool branch_taken_0x25a1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1C8u;
        // 0x25a1cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1c8) {
            ctx->pc = 0x25A1DCu;
            goto label_25a1dc;
        }
    }
    ctx->pc = 0x25A1D0u;
label_25a1d0:
    // 0x25a1d0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a1d4:
    // 0x25a1d4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a1d8:
    // 0x25a1d8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a1d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a1dc:
    // 0x25a1dc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a1e0:
    // 0x25a1e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25a1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a1e4:
    // 0x25a1e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_25a1e8:
    if (ctx->pc == 0x25A1E8u) {
        ctx->pc = 0x25A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1E4u;
        // 0x25a1e8: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1ECu;
        goto label_25a1ec;
    }
    ctx->pc = 0x25A1E4u;
    {
        const bool branch_taken_0x25a1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1E4u;
        // 0x25a1e8: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1e4) {
            ctx->pc = 0x25A238u;
            goto label_25a238;
        }
    }
    ctx->pc = 0x25A1ECu;
label_25a1ec:
    // 0x25a1ec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25a1f0:
    // 0x25a1f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a1f4:
    // 0x25a1f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a1f8:
    if (ctx->pc == 0x25A1F8u) {
        ctx->pc = 0x25A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1F4u;
        // 0x25a1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1FCu;
        goto label_25a1fc;
    }
    ctx->pc = 0x25A1F4u;
    {
        const bool branch_taken_0x25a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1F4u;
        // 0x25a1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1f4) {
            ctx->pc = 0x25A208u;
            goto label_25a208;
        }
    }
    ctx->pc = 0x25A1FCu;
label_25a1fc:
    // 0x25a1fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a200:
    // 0x25a200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a204:
    // 0x25a204: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a204u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a208:
    // 0x25a208: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a20c:
    // 0x25a20c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a210:
    if (ctx->pc == 0x25A210u) {
        ctx->pc = 0x25A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A20Cu;
        // 0x25a210: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A214u;
        goto label_25a214;
    }
    ctx->pc = 0x25A20Cu;
    {
        const bool branch_taken_0x25a20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A20Cu;
        // 0x25a210: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a20c) {
            ctx->pc = 0x25A220u;
            goto label_25a220;
        }
    }
    ctx->pc = 0x25A214u;
label_25a214:
    // 0x25a214: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a218:
    // 0x25a218: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a21c:
    // 0x25a21c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a21cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a220:
    // 0x25a220: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a224:
    // 0x25a224: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25a224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a228:
    // 0x25a228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25a22c:
    if (ctx->pc == 0x25A22Cu) {
        ctx->pc = 0x25A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A228u;
        // 0x25a22c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A230u;
        goto label_25a230;
    }
    ctx->pc = 0x25A228u;
    {
        const bool branch_taken_0x25a228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A228u;
        // 0x25a22c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a228) {
            ctx->pc = 0x25A238u;
            goto label_25a238;
        }
    }
    ctx->pc = 0x25A230u;
label_25a230:
    // 0x25a230: 0x1000005a  b           . + 4 + (0x5A << 2)
label_25a234:
    if (ctx->pc == 0x25A234u) {
        ctx->pc = 0x25A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A230u;
        // 0x25a234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A238u;
        goto label_25a238;
    }
    ctx->pc = 0x25A230u;
    {
        const bool branch_taken_0x25a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A230u;
        // 0x25a234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a230) {
            ctx->pc = 0x25A39Cu;
            goto label_25a39c;
        }
    }
    ctx->pc = 0x25A238u;
label_25a238:
    // 0x25a238: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x25a238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a23c:
    // 0x25a23c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_25a240:
    // 0x25a240: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x25a240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a244:
    // 0x25a244: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_25a248:
    if (ctx->pc == 0x25A248u) {
        ctx->pc = 0x25A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A244u;
        // 0x25a248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A24Cu;
        goto label_25a24c;
    }
    ctx->pc = 0x25A244u;
    {
        const bool branch_taken_0x25a244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A244u;
        // 0x25a248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a244) {
            ctx->pc = 0x25A258u;
            goto label_25a258;
        }
    }
    ctx->pc = 0x25A24Cu;
label_25a24c:
    // 0x25a24c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x25a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_25a250:
    // 0x25a250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a254:
    // 0x25a254: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a254u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a258:
    // 0x25a258: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x25a258u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a25c:
    // 0x25a25c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_25a260:
    if (ctx->pc == 0x25A260u) {
        ctx->pc = 0x25A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A25Cu;
        // 0x25a260: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A264u;
        goto label_25a264;
    }
    ctx->pc = 0x25A25Cu;
    {
        const bool branch_taken_0x25a25c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A25Cu;
        // 0x25a260: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a25c) {
            ctx->pc = 0x25A270u;
            goto label_25a270;
        }
    }
    ctx->pc = 0x25A264u;
label_25a264:
    // 0x25a264: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x25a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_25a268:
    // 0x25a268: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a26c:
    // 0x25a26c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a26cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a270:
    // 0x25a270: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_25a274:
    // 0x25a274: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x25a274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a278:
    // 0x25a278: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x25a278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25a27c:
    // 0x25a27c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_25a280:
    if (ctx->pc == 0x25A280u) {
        ctx->pc = 0x25A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A27Cu;
        // 0x25a280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A284u;
        goto label_25a284;
    }
    ctx->pc = 0x25A27Cu;
    {
        const bool branch_taken_0x25a27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A27Cu;
        // 0x25a280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a27c) {
            ctx->pc = 0x25A290u;
            goto label_25a290;
        }
    }
    ctx->pc = 0x25A284u;
label_25a284:
    // 0x25a284: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x25a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25a288:
    // 0x25a288: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25a288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a28c:
    // 0x25a28c: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x25a28cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_25a290:
    // 0x25a290: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x25a290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25a294:
    // 0x25a294: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_25a298:
    if (ctx->pc == 0x25A298u) {
        ctx->pc = 0x25A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A294u;
        // 0x25a298: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A29Cu;
        goto label_25a29c;
    }
    ctx->pc = 0x25A294u;
    {
        const bool branch_taken_0x25a294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A294u;
        // 0x25a298: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a294) {
            ctx->pc = 0x25A2A8u;
            goto label_25a2a8;
        }
    }
    ctx->pc = 0x25A29Cu;
label_25a29c:
    // 0x25a29c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x25a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_25a2a0:
    // 0x25a2a0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a2a4:
    // 0x25a2a4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a2a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a2a8:
    // 0x25a2a8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x25a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_25a2ac:
    // 0x25a2ac: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x25a2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_25a2b0:
    // 0x25a2b0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_25a2b4:
    if (ctx->pc == 0x25A2B4u) {
        ctx->pc = 0x25A2B8u;
        goto label_25a2b8;
    }
    ctx->pc = 0x25A2B0u;
    {
        const bool branch_taken_0x25a2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a2b0) {
            ctx->pc = 0x25A330u;
            goto label_25a330;
        }
    }
    ctx->pc = 0x25A2B8u;
label_25a2b8:
    // 0x25a2b8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_25a2bc:
    if (ctx->pc == 0x25A2BCu) {
        ctx->pc = 0x25A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2B8u;
        // 0x25a2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2C0u;
        goto label_25a2c0;
    }
    ctx->pc = 0x25A2B8u;
    {
        const bool branch_taken_0x25a2b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2B8u;
        // 0x25a2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2b8) {
            ctx->pc = 0x25A2CCu;
            goto label_25a2cc;
        }
    }
    ctx->pc = 0x25A2C0u;
label_25a2c0:
    // 0x25a2c0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x25a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_25a2c4:
    // 0x25a2c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a2c8:
    // 0x25a2c8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a2c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a2cc:
    // 0x25a2cc: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_25a2d0:
    if (ctx->pc == 0x25A2D0u) {
        ctx->pc = 0x25A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2CCu;
        // 0x25a2d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2D4u;
        goto label_25a2d4;
    }
    ctx->pc = 0x25A2CCu;
    {
        const bool branch_taken_0x25a2cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2CCu;
        // 0x25a2d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2cc) {
            ctx->pc = 0x25A2E0u;
            goto label_25a2e0;
        }
    }
    ctx->pc = 0x25A2D4u;
label_25a2d4:
    // 0x25a2d4: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x25a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_25a2d8:
    // 0x25a2d8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a2d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a2dc:
    // 0x25a2dc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a2dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a2e0:
    // 0x25a2e0: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x25a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_25a2e4:
    // 0x25a2e4: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x25a2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a2e8:
    // 0x25a2e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x25a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25a2ec:
    // 0x25a2ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a2f0:
    if (ctx->pc == 0x25A2F0u) {
        ctx->pc = 0x25A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2ECu;
        // 0x25a2f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2F4u;
        goto label_25a2f4;
    }
    ctx->pc = 0x25A2ECu;
    {
        const bool branch_taken_0x25a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2ECu;
        // 0x25a2f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2ec) {
            ctx->pc = 0x25A300u;
            goto label_25a300;
        }
    }
    ctx->pc = 0x25A2F4u;
label_25a2f4:
    // 0x25a2f4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a2f8:
    // 0x25a2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a2fc:
    // 0x25a2fc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a2fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a300:
    // 0x25a300: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x25a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25a304:
    // 0x25a304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a308:
    if (ctx->pc == 0x25A308u) {
        ctx->pc = 0x25A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A304u;
        // 0x25a308: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A30Cu;
        goto label_25a30c;
    }
    ctx->pc = 0x25A304u;
    {
        const bool branch_taken_0x25a304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A304u;
        // 0x25a308: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a304) {
            ctx->pc = 0x25A318u;
            goto label_25a318;
        }
    }
    ctx->pc = 0x25A30Cu;
label_25a30c:
    // 0x25a30c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a310:
    // 0x25a310: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a314:
    // 0x25a314: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a314u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a318:
    // 0x25a318: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a31c:
    // 0x25a31c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25a31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25a320:
    // 0x25a320: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x25a320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_25a324:
    // 0x25a324: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25a328:
    // 0x25a328: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25a32c:
    if (ctx->pc == 0x25A32Cu) {
        ctx->pc = 0x25A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A328u;
        // 0x25a32c: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A330u;
        goto label_25a330;
    }
    ctx->pc = 0x25A328u;
    {
        const bool branch_taken_0x25a328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A328u;
        // 0x25a32c: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a328) {
            ctx->pc = 0x25A39Cu;
            goto label_25a39c;
        }
    }
    ctx->pc = 0x25A330u;
label_25a330:
    // 0x25a330: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_25a334:
    if (ctx->pc == 0x25A334u) {
        ctx->pc = 0x25A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A330u;
        // 0x25a334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A338u;
        goto label_25a338;
    }
    ctx->pc = 0x25A330u;
    {
        const bool branch_taken_0x25a330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A330u;
        // 0x25a334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a330) {
            ctx->pc = 0x25A344u;
            goto label_25a344;
        }
    }
    ctx->pc = 0x25A338u;
label_25a338:
    // 0x25a338: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25a33c:
    // 0x25a33c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25a33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a340:
    // 0x25a340: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x25a340u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_25a344:
    // 0x25a344: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_25a348:
    if (ctx->pc == 0x25A348u) {
        ctx->pc = 0x25A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A344u;
        // 0x25a348: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A34Cu;
        goto label_25a34c;
    }
    ctx->pc = 0x25A344u;
    {
        const bool branch_taken_0x25a344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A344u;
        // 0x25a348: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a344) {
            ctx->pc = 0x25A358u;
            goto label_25a358;
        }
    }
    ctx->pc = 0x25A34Cu;
label_25a34c:
    // 0x25a34c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x25a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_25a350:
    // 0x25a350: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a354:
    // 0x25a354: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a354u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a358:
    // 0x25a358: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x25a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_25a35c:
    // 0x25a35c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x25a35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_25a360:
    // 0x25a360: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25a364:
    // 0x25a364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a368:
    if (ctx->pc == 0x25A368u) {
        ctx->pc = 0x25A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A364u;
        // 0x25a368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A36Cu;
        goto label_25a36c;
    }
    ctx->pc = 0x25A364u;
    {
        const bool branch_taken_0x25a364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A364u;
        // 0x25a368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a364) {
            ctx->pc = 0x25A378u;
            goto label_25a378;
        }
    }
    ctx->pc = 0x25A36Cu;
label_25a36c:
    // 0x25a36c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a370:
    // 0x25a370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a374:
    // 0x25a374: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x25a374u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_25a378:
    // 0x25a378: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25a37c:
    // 0x25a37c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a380:
    if (ctx->pc == 0x25A380u) {
        ctx->pc = 0x25A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A37Cu;
        // 0x25a380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A384u;
        goto label_25a384;
    }
    ctx->pc = 0x25A37Cu;
    {
        const bool branch_taken_0x25a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A37Cu;
        // 0x25a380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a37c) {
            ctx->pc = 0x25A390u;
            goto label_25a390;
        }
    }
    ctx->pc = 0x25A384u;
label_25a384:
    // 0x25a384: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a388:
    // 0x25a388: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a38c:
    // 0x25a38c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a38cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a390:
    // 0x25a390: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x25a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25a394:
    // 0x25a394: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x25a394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_25a398:
    // 0x25a398: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x25a398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_25a39c:
    // 0x25a39c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x25a39cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a3a0:
    // 0x25a3a0: 0xafb70034  sw          $s7, 0x34($sp)
    ctx->pc = 0x25a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 23));
label_25a3a4:
    // 0x25a3a4: 0xafb60044  sw          $s6, 0x44($sp)
    ctx->pc = 0x25a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 22));
label_25a3a8:
    // 0x25a3a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x25a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_25a3ac:
    // 0x25a3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a3b0:
    // 0x25a3b0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x25a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_25a3b4:
    // 0x25a3b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25a3b8:
    // 0x25a3b8: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x25a3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25a3bc:
    // 0x25a3bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_25a3c0:
    if (ctx->pc == 0x25A3C0u) {
        ctx->pc = 0x25A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3BCu;
        // 0x25a3c0: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A3C4u;
        goto label_25a3c4;
    }
    ctx->pc = 0x25A3BCu;
    {
        const bool branch_taken_0x25a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3BCu;
        // 0x25a3c0: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3bc) {
            ctx->pc = 0x25A3E8u;
            goto label_25a3e8;
        }
    }
    ctx->pc = 0x25A3C4u;
label_25a3c4:
    // 0x25a3c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x25a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_25a3c8:
    // 0x25a3c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25a3cc:
    // 0x25a3cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25a3d0:
    // 0x25a3d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25a3d4:
    // 0x25a3d4: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x25a3d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25a3d8:
    // 0x25a3d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x25a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_25a3dc:
    // 0x25a3dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x25a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a3e0:
    // 0x25a3e0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_25a3e4:
    if (ctx->pc == 0x25A3E4u) {
        ctx->pc = 0x25A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3E0u;
        // 0x25a3e4: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A3E8u;
        goto label_25a3e8;
    }
    ctx->pc = 0x25A3E0u;
    {
        const bool branch_taken_0x25a3e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3E0u;
        // 0x25a3e4: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3e0) {
            ctx->pc = 0x25A3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a3c8;
        }
    }
    ctx->pc = 0x25A3E8u;
label_25a3e8:
    // 0x25a3e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x25a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_25a3ec:
    // 0x25a3ec: 0x10720012  beq         $v1, $s2, . + 4 + (0x12 << 2)
label_25a3f0:
    if (ctx->pc == 0x25A3F0u) {
        ctx->pc = 0x25A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3ECu;
        // 0x25a3f0: 0xafb10048  sw          $s1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A3F4u;
        goto label_25a3f4;
    }
    ctx->pc = 0x25A3ECu;
    {
        const bool branch_taken_0x25a3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x25A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3ECu;
        // 0x25a3f0: 0xafb10048  sw          $s1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3ec) {
            ctx->pc = 0x25A438u;
            goto label_25a438;
        }
    }
    ctx->pc = 0x25A3F4u;
label_25a3f4:
    // 0x25a3f4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x25a3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_25a3f8:
    // 0x25a3f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25a3fc:
    if (ctx->pc == 0x25A3FCu) {
        ctx->pc = 0x25A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3F8u;
        // 0x25a3fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A400u;
        goto label_25a400;
    }
    ctx->pc = 0x25A3F8u;
    {
        const bool branch_taken_0x25a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3F8u;
        // 0x25a3fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3f8) {
            ctx->pc = 0x25A410u;
            goto label_25a410;
        }
    }
    ctx->pc = 0x25A400u;
label_25a400:
    // 0x25a400: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25a404:
    if (ctx->pc == 0x25A404u) {
        ctx->pc = 0x25A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A400u;
        // 0x25a404: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A408u;
        goto label_25a408;
    }
    ctx->pc = 0x25A400u;
    {
        const bool branch_taken_0x25a400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A400u;
        // 0x25a404: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a400) {
            ctx->pc = 0x25A420u;
            goto label_25a420;
        }
    }
    ctx->pc = 0x25A408u;
label_25a408:
    // 0x25a408: 0x10000013  b           . + 4 + (0x13 << 2)
label_25a40c:
    if (ctx->pc == 0x25A40Cu) {
        ctx->pc = 0x25A410u;
        goto label_25a410;
    }
    ctx->pc = 0x25A408u;
    {
        const bool branch_taken_0x25a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a408) {
            ctx->pc = 0x25A458u;
            goto label_25a458;
        }
    }
    ctx->pc = 0x25A410u;
label_25a410:
    // 0x25a410: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_25a414:
    if (ctx->pc == 0x25A414u) {
        ctx->pc = 0x25A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A410u;
        // 0x25a414: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A418u;
        goto label_25a418;
    }
    ctx->pc = 0x25A410u;
    {
        const bool branch_taken_0x25a410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x25A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A410u;
        // 0x25a414: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a410) {
            ctx->pc = 0x25A440u;
            goto label_25a440;
        }
    }
    ctx->pc = 0x25A418u;
label_25a418:
    // 0x25a418: 0x1000000f  b           . + 4 + (0xF << 2)
label_25a41c:
    if (ctx->pc == 0x25A41Cu) {
        ctx->pc = 0x25A420u;
        goto label_25a420;
    }
    ctx->pc = 0x25A418u;
    {
        const bool branch_taken_0x25a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a418) {
            ctx->pc = 0x25A458u;
            goto label_25a458;
        }
    }
    ctx->pc = 0x25A420u;
label_25a420:
    // 0x25a420: 0x2de001b  divu        $zero, $s6, $fp
    ctx->pc = 0x25a420u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
label_25a424:
    // 0x25a424: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_25a428:
    if (ctx->pc == 0x25A428u) {
        ctx->pc = 0x25A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A424u;
        // 0x25a428: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A42Cu;
        goto label_25a42c;
    }
    ctx->pc = 0x25A424u;
    {
        const bool branch_taken_0x25a424 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a424) {
            ctx->pc = 0x25A428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A424u;
            // 0x25a428: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A42Cu;
            goto label_25a42c;
        }
    }
    ctx->pc = 0x25A42Cu;
label_25a42c:
    // 0x25a42c: 0x1010  mfhi        $v0
    ctx->pc = 0x25a42cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_25a430:
    // 0x25a430: 0x10000009  b           . + 4 + (0x9 << 2)
label_25a434:
    if (ctx->pc == 0x25A434u) {
        ctx->pc = 0x25A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A430u;
        // 0x25a434: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A438u;
        goto label_25a438;
    }
    ctx->pc = 0x25A430u;
    {
        const bool branch_taken_0x25a430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A430u;
        // 0x25a434: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a430) {
            ctx->pc = 0x25A458u;
            goto label_25a458;
        }
    }
    ctx->pc = 0x25A438u;
label_25a438:
    // 0x25a438: 0x10000002  b           . + 4 + (0x2 << 2)
label_25a43c:
    if (ctx->pc == 0x25A43Cu) {
        ctx->pc = 0x25A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A438u;
        // 0x25a43c: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A440u;
        goto label_25a440;
    }
    ctx->pc = 0x25A438u;
    {
        const bool branch_taken_0x25a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A438u;
        // 0x25a43c: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a438) {
            ctx->pc = 0x25A444u;
            goto label_25a444;
        }
    }
    ctx->pc = 0x25A440u;
label_25a440:
    // 0x25a440: 0x26c20002  addiu       $v0, $s6, 0x2
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_25a444:
    // 0x25a444: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_25a448:
    if (ctx->pc == 0x25A448u) {
        ctx->pc = 0x25A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A444u;
        // 0x25a448: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A44Cu;
        goto label_25a44c;
    }
    ctx->pc = 0x25A444u;
    {
        const bool branch_taken_0x25a444 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a444) {
            ctx->pc = 0x25A448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A444u;
            // 0x25a448: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A44Cu;
            goto label_25a44c;
        }
    }
    ctx->pc = 0x25A44Cu;
label_25a44c:
    // 0x25a44c: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x25a44cu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_25a450:
    // 0x25a450: 0x1810  mfhi        $v1
    ctx->pc = 0x25a450u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25a454:
    // 0x25a454: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x25a454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25a458:
    // 0x25a458: 0x1212000d  beq         $s0, $s2, . + 4 + (0xD << 2)
label_25a45c:
    if (ctx->pc == 0x25A45Cu) {
        ctx->pc = 0x25A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A458u;
        // 0x25a45c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A460u;
        goto label_25a460;
    }
    ctx->pc = 0x25A458u;
    {
        const bool branch_taken_0x25a458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x25A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A458u;
        // 0x25a45c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a458) {
            ctx->pc = 0x25A490u;
            goto label_25a490;
        }
    }
    ctx->pc = 0x25A460u;
label_25a460:
    // 0x25a460: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_25a464:
    if (ctx->pc == 0x25A464u) {
        ctx->pc = 0x25A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A460u;
        // 0x25a464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A468u;
        goto label_25a468;
    }
    ctx->pc = 0x25A460u;
    {
        const bool branch_taken_0x25a460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A460u;
        // 0x25a464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a460) {
            ctx->pc = 0x25A478u;
            goto label_25a478;
        }
    }
    ctx->pc = 0x25A468u;
label_25a468:
    // 0x25a468: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_25a46c:
    if (ctx->pc == 0x25A46Cu) {
        ctx->pc = 0x25A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A468u;
        // 0x25a46c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A470u;
        goto label_25a470;
    }
    ctx->pc = 0x25A468u;
    {
        const bool branch_taken_0x25a468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A468u;
        // 0x25a46c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a468) {
            ctx->pc = 0x25A4A4u;
            goto label_25a4a4;
        }
    }
    ctx->pc = 0x25A470u;
label_25a470:
    // 0x25a470: 0x10000012  b           . + 4 + (0x12 << 2)
label_25a474:
    if (ctx->pc == 0x25A474u) {
        ctx->pc = 0x25A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A470u;
        // 0x25a474: 0x21e001b  divu        $zero, $s0, $fp (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A478u;
        goto label_25a478;
    }
    ctx->pc = 0x25A470u;
    {
        const bool branch_taken_0x25a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A470u;
        // 0x25a474: 0x21e001b  divu        $zero, $s0, $fp (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a470) {
            ctx->pc = 0x25A4BCu;
            goto label_25a4bc;
        }
    }
    ctx->pc = 0x25A478u;
label_25a478:
    // 0x25a478: 0x3ad1021  addu        $v0, $sp, $t5
    ctx->pc = 0x25a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_25a47c:
    // 0x25a47c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a480:
    // 0x25a480: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a484:
    // 0x25a484: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x25a484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_25a488:
    // 0x25a488: 0x1000000a  b           . + 4 + (0xA << 2)
label_25a48c:
    if (ctx->pc == 0x25A48Cu) {
        ctx->pc = 0x25A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A488u;
        // 0x25a48c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A490u;
        goto label_25a490;
    }
    ctx->pc = 0x25A488u;
    {
        const bool branch_taken_0x25a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A488u;
        // 0x25a48c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a488) {
            ctx->pc = 0x25A4B4u;
            goto label_25a4b4;
        }
    }
    ctx->pc = 0x25A490u;
label_25a490:
    // 0x25a490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a494:
    // 0x25a494: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a498:
    // 0x25a498: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25a498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_25a49c:
    // 0x25a49c: 0x10000005  b           . + 4 + (0x5 << 2)
label_25a4a0:
    if (ctx->pc == 0x25A4A0u) {
        ctx->pc = 0x25A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A49Cu;
        // 0x25a4a0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A4A4u;
        goto label_25a4a4;
    }
    ctx->pc = 0x25A49Cu;
    {
        const bool branch_taken_0x25a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A49Cu;
        // 0x25a4a0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a49c) {
            ctx->pc = 0x25A4B4u;
            goto label_25a4b4;
        }
    }
    ctx->pc = 0x25A4A4u;
label_25a4a4:
    // 0x25a4a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a4a8:
    // 0x25a4a8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25a4ac:
    // 0x25a4ac: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x25a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_25a4b0:
    // 0x25a4b0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x25a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a4b4:
    // 0x25a4b4: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x25a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_25a4b8:
    // 0x25a4b8: 0x21e001b  divu        $zero, $s0, $fp
    ctx->pc = 0x25a4b8u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_25a4bc:
    // 0x25a4bc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x25a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25a4c0:
    // 0x25a4c0: 0x26090002  addiu       $t1, $s0, 0x2
    ctx->pc = 0x25a4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_25a4c4:
    // 0x25a4c4: 0x3ad6021  addu        $t4, $sp, $t5
    ctx->pc = 0x25a4c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_25a4c8:
    // 0x25a4c8: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_25a4cc:
    if (ctx->pc == 0x25A4CCu) {
        ctx->pc = 0x25A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4C8u;
        // 0x25a4cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A4D0u;
        goto label_25a4d0;
    }
    ctx->pc = 0x25A4C8u;
    {
        const bool branch_taken_0x25a4c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a4c8) {
            ctx->pc = 0x25A4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A4C8u;
            // 0x25a4cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A4D0u;
            goto label_25a4d0;
        }
    }
    ctx->pc = 0x25A4D0u;
label_25a4d0:
    // 0x25a4d0: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_25a4d4:
    // 0x25a4d4: 0x8e8b0000  lw          $t3, 0x0($s4)
    ctx->pc = 0x25a4d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a4d8:
    // 0x25a4d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25a4dc:
    // 0x25a4dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25a4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a4e0:
    // 0x25a4e0: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x25a4e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25a4e4:
    // 0x25a4e4: 0x2a350004  slti        $s5, $s1, 0x4
    ctx->pc = 0x25a4e4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_25a4e8:
    // 0x25a4e8: 0x1810  mfhi        $v1
    ctx->pc = 0x25a4e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25a4ec:
    // 0x25a4ec: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x25a4ecu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_25a4f0:
    // 0x25a4f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25a4f4:
    // 0x25a4f4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x25a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_25a4f8:
    // 0x25a4f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a4fc:
    // 0x25a4fc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x25a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_25a500:
    // 0x25a500: 0x3810  mfhi        $a3
    ctx->pc = 0x25a500u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25a504:
    // 0x25a504: 0x13e001b  divu        $zero, $t1, $fp
    ctx->pc = 0x25a504u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_25a508:
    // 0x25a508: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x25a508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_25a50c:
    // 0x25a50c: 0x400013  mtlo        $v0
    ctx->pc = 0x25a50cu;
    ctx->lo = GPR_U64(ctx, 2);
label_25a510:
    // 0x25a510: 0x4010  mfhi        $t0
    ctx->pc = 0x25a510u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25a514:
    // 0x25a514: 0x708a2000  madd        $a0, $a0, $t2
    ctx->pc = 0x25a514u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_25a518:
    // 0x25a518: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x25a518u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_25a51c:
    // 0x25a51c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a520:
    // 0x25a520: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x25a520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_25a524:
    // 0x25a524: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25a524u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a528:
    // 0x25a528: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x25a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_25a52c:
    // 0x25a52c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x25a52cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
label_25a530:
    // 0x25a530: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x25a530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_25a534:
    // 0x25a534: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a538:
    // 0x25a538: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x25a538u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_25a53c:
    // 0x25a53c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x25a53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25a540:
    // 0x25a540: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x25a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a544:
    // 0x25a544: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x25a544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_25a548:
    // 0x25a548: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x25a548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
label_25a54c:
    // 0x25a54c: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x25a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_25a550:
    // 0x25a550: 0xc096628  jal         func_2598A0
label_25a554:
    if (ctx->pc == 0x25A554u) {
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A558u;
        goto label_25a558;
    }
    ctx->pc = 0x25A550u;
    SET_GPR_U32(ctx, 31, 0x25A558u);
    ctx->pc = 0x25A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A550u;
    // 0x25a554: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2598A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2598A0u, 0x25A550u, 0x25A558u)) {
        return;
    }
    ctx->pc = 0x25A558u;
label_25a558:
    // 0x25a558: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x25a558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_25a55c:
    // 0x25a55c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a560:
    // 0x25a560: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x25a560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_25a564:
    // 0x25a564: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25a568:
    // 0x25a568: 0xc09668e  jal         func_259A38
label_25a56c:
    if (ctx->pc == 0x25A56Cu) {
        ctx->pc = 0x25A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A568u;
        // 0x25a56c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A570u;
        goto label_25a570;
    }
    ctx->pc = 0x25A568u;
    SET_GPR_U32(ctx, 31, 0x25A570u);
    ctx->pc = 0x25A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A568u;
    // 0x25a56c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259A38u, 0x25A568u, 0x25A570u)) {
        return;
    }
    ctx->pc = 0x25A570u;
label_25a570:
    // 0x25a570: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x25a570u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_25a574:
    // 0x25a574: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_25a578:
    if (ctx->pc == 0x25A578u) {
        ctx->pc = 0x25A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A574u;
        // 0x25a578: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A57Cu;
        goto label_25a57c;
    }
    ctx->pc = 0x25A574u;
    {
        const bool branch_taken_0x25a574 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A574u;
        // 0x25a578: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a574) {
            ctx->pc = 0x25A5B0u;
            goto label_25a5b0;
        }
    }
    ctx->pc = 0x25A57Cu;
label_25a57c:
    // 0x25a57c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25a580:
    // 0x25a580: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a584:
    // 0x25a584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25a588:
    if (ctx->pc == 0x25A588u) {
        ctx->pc = 0x25A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A584u;
        // 0x25a588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A58Cu;
        goto label_25a58c;
    }
    ctx->pc = 0x25A584u;
    {
        const bool branch_taken_0x25a584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A584u;
        // 0x25a588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a584) {
            ctx->pc = 0x25A59Cu;
            goto label_25a59c;
        }
    }
    ctx->pc = 0x25A58Cu;
label_25a58c:
    // 0x25a58c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x25a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_25a590:
    // 0x25a590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a594:
    // 0x25a594: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a594u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a598:
    // 0x25a598: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25a59c:
    // 0x25a59c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a5a0:
    // 0x25a5a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_25a5a4:
    if (ctx->pc == 0x25A5A4u) {
        ctx->pc = 0x25A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A0u;
        // 0x25a5a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5A8u;
        goto label_25a5a8;
    }
    ctx->pc = 0x25A5A0u;
    {
        const bool branch_taken_0x25a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A0u;
        // 0x25a5a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5a0) {
            ctx->pc = 0x25A5E8u;
            goto label_25a5e8;
        }
    }
    ctx->pc = 0x25A5A8u;
label_25a5a8:
    // 0x25a5a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_25a5ac:
    if (ctx->pc == 0x25A5ACu) {
        ctx->pc = 0x25A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A8u;
        // 0x25a5ac: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5B0u;
        goto label_25a5b0;
    }
    ctx->pc = 0x25A5A8u;
    {
        const bool branch_taken_0x25a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A8u;
        // 0x25a5ac: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5a8) {
            ctx->pc = 0x25A5E0u;
            goto label_25a5e0;
        }
    }
    ctx->pc = 0x25A5B0u;
label_25a5b0:
    // 0x25a5b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25a5b4:
    // 0x25a5b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25a5b8:
    // 0x25a5b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a5bc:
    if (ctx->pc == 0x25A5BCu) {
        ctx->pc = 0x25A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5B8u;
        // 0x25a5bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5C0u;
        goto label_25a5c0;
    }
    ctx->pc = 0x25A5B8u;
    {
        const bool branch_taken_0x25a5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5B8u;
        // 0x25a5bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5b8) {
            ctx->pc = 0x25A5CCu;
            goto label_25a5cc;
        }
    }
    ctx->pc = 0x25A5C0u;
label_25a5c0:
    // 0x25a5c0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a5c4:
    // 0x25a5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a5c8:
    // 0x25a5c8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x25a5c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_25a5cc:
    // 0x25a5cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25a5d0:
    // 0x25a5d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25a5d4:
    // 0x25a5d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a5d8:
    if (ctx->pc == 0x25A5D8u) {
        ctx->pc = 0x25A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5D4u;
        // 0x25a5d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5DCu;
        goto label_25a5dc;
    }
    ctx->pc = 0x25A5D4u;
    {
        const bool branch_taken_0x25a5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5D4u;
        // 0x25a5d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5d4) {
            ctx->pc = 0x25A5E8u;
            goto label_25a5e8;
        }
    }
    ctx->pc = 0x25A5DCu;
label_25a5dc:
    // 0x25a5dc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_25a5e0:
    // 0x25a5e0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25a5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a5e4:
    // 0x25a5e4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x25a5e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_25a5e8:
    // 0x25a5e8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25a5ec:
    // 0x25a5ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25a5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25a5f0:
    // 0x25a5f0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_25a5f4:
    if (ctx->pc == 0x25A5F4u) {
        ctx->pc = 0x25A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5F0u;
        // 0x25a5f4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5F8u;
        goto label_25a5f8;
    }
    ctx->pc = 0x25A5F0u;
    {
        const bool branch_taken_0x25a5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5F0u;
        // 0x25a5f4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5f0) {
            ctx->pc = 0x25A784u;
            goto label_25a784;
        }
    }
    ctx->pc = 0x25A5F8u;
label_25a5f8:
    // 0x25a5f8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x25a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a5fc:
    // 0x25a5fc: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x25a5fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25a600:
    // 0x25a600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a604:
    // 0x25a604: 0x94490002  lhu         $t1, 0x2($v0)
    ctx->pc = 0x25a604u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_25a608:
    // 0x25a608: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25a608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25a60c:
    // 0x25a60c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25a610:
    // 0x25a610: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x25a610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_25a614:
    // 0x25a614: 0xa5490000  sh          $t1, 0x0($t2)
    ctx->pc = 0x25a614u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
label_25a618:
    // 0x25a618: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x25a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a61c:
    // 0x25a61c: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x25a61cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25a620:
    // 0x25a620: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25a620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25a624:
    // 0x25a624: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x25a624u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
label_25a628:
    // 0x25a628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25a62c:
    // 0x25a62c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x25a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_25a630:
    // 0x25a630: 0xc09668e  jal         func_259A38
label_25a634:
    if (ctx->pc == 0x25A634u) {
        ctx->pc = 0x25A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A630u;
        // 0x25a634: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A638u;
        goto label_25a638;
    }
    ctx->pc = 0x25A630u;
    SET_GPR_U32(ctx, 31, 0x25A638u);
    ctx->pc = 0x25A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A630u;
    // 0x25a634: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259A38u, 0x25A630u, 0x25A638u)) {
        return;
    }
    ctx->pc = 0x25A638u;
label_25a638:
    // 0x25a638: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x25a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_25a63c:
    // 0x25a63c: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x25a63cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_25a640:
    // 0x25a640: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x25a640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25a644:
    // 0x25a644: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25a648:
    if (ctx->pc == 0x25A648u) {
        ctx->pc = 0x25A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A644u;
        // 0x25a648: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A64Cu;
        goto label_25a64c;
    }
    ctx->pc = 0x25A644u;
    {
        const bool branch_taken_0x25a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A644u;
        // 0x25a648: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a644) {
            ctx->pc = 0x25A66Cu;
            goto label_25a66c;
        }
    }
    ctx->pc = 0x25A64Cu;
label_25a64c:
    // 0x25a64c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25a650:
    // 0x25a650: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25a654:
    // 0x25a654: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a658:
    // 0x25a658: 0x9464fffc  lhu         $a0, -0x4($v1)
    ctx->pc = 0x25a658u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_25a65c:
    // 0x25a65c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x25a65cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_25a660:
    // 0x25a660: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_25a664:
    // 0x25a664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25a668:
    // 0x25a668: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x25a668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_25a66c:
    // 0x25a66c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x25a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_25a670:
    // 0x25a670: 0x77102b  sltu        $v0, $v1, $s7
    ctx->pc = 0x25a670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_25a674:
    // 0x25a674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25a678:
    if (ctx->pc == 0x25A678u) {
        ctx->pc = 0x25A67Cu;
        goto label_25a67c;
    }
    ctx->pc = 0x25A674u;
    {
        const bool branch_taken_0x25a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a674) {
            ctx->pc = 0x25A684u;
            goto label_25a684;
        }
    }
    ctx->pc = 0x25A67Cu;
label_25a67c:
    // 0x25a67c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x25a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_25a680:
    // 0x25a680: 0xafb7004c  sw          $s7, 0x4C($sp)
    ctx->pc = 0x25a680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 23));
label_25a684:
    // 0x25a684: 0x56a0ff49  bnel        $s5, $zero, . + 4 + (-0xB7 << 2)
label_25a688:
    if (ctx->pc == 0x25A688u) {
        ctx->pc = 0x25A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A684u;
        // 0x25a688: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A68Cu;
        goto label_25a68c;
    }
    ctx->pc = 0x25A684u;
    {
        const bool branch_taken_0x25a684 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a684) {
            ctx->pc = 0x25A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A684u;
            // 0x25a688: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a3ac;
        }
    }
    ctx->pc = 0x25A68Cu;
label_25a68c:
    // 0x25a68c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25a690:
    // 0x25a690: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25a694:
    // 0x25a694: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x25a694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_25a698:
    // 0x25a698: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x25a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_25a69c:
    // 0x25a69c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25a6a0:
    // 0x25a6a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25a6a4:
    // 0x25a6a4: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x25a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_25a6a8:
    // 0x25a6a8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a6ac:
    // 0x25a6ac: 0x40f809  jalr        $v0
label_25a6b0:
    if (ctx->pc == 0x25A6B0u) {
        ctx->pc = 0x25A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6ACu;
        // 0x25a6b0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6B4u;
        goto label_25a6b4;
    }
    ctx->pc = 0x25A6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A6B4u);
        ctx->pc = 0x25A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6ACu;
        // 0x25a6b0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A6ACu, 0x25A6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A6B4u;
label_25a6b4:
    // 0x25a6b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x25a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_25a6b8:
    // 0x25a6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25a6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a6bc:
    // 0x25a6bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25a6c0:
    // 0x25a6c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25a6c4:
    // 0x25a6c4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25a6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_25a6c8:
    // 0x25a6c8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x25a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_25a6cc:
    // 0x25a6cc: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x25a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_25a6d0:
    // 0x25a6d0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25a6d4:
    // 0x25a6d4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25a6d8:
    // 0x25a6d8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x25a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_25a6dc:
    // 0x25a6dc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x25a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25a6e0:
    // 0x25a6e0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_25a6e4:
    // 0x25a6e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25a6e8:
    // 0x25a6e8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x25a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_25a6ec:
    // 0x25a6ec: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x25a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_25a6f0:
    // 0x25a6f0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25a6f4:
    // 0x25a6f4: 0x40f809  jalr        $v0
label_25a6f8:
    if (ctx->pc == 0x25A6F8u) {
        ctx->pc = 0x25A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6F4u;
        // 0x25a6f8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6FCu;
        goto label_25a6fc;
    }
    ctx->pc = 0x25A6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A6FCu);
        ctx->pc = 0x25A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6F4u;
        // 0x25a6f8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A6F4u, 0x25A6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A6FCu;
label_25a6fc:
    // 0x25a6fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x25a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_25a700:
    // 0x25a700: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x25a700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_25a704:
    // 0x25a704: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x25a704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_25a708:
    // 0x25a708: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_25a70c:
    if (ctx->pc == 0x25A70Cu) {
        ctx->pc = 0x25A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A708u;
        // 0x25a70c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A710u;
        goto label_25a710;
    }
    ctx->pc = 0x25A708u;
    {
        const bool branch_taken_0x25a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a708) {
            ctx->pc = 0x25A70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A708u;
            // 0x25a70c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A75Cu;
            goto label_25a75c;
        }
    }
    ctx->pc = 0x25A710u;
label_25a710:
    // 0x25a710: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x25a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25a714:
    // 0x25a714: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x25a714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_25a718:
    // 0x25a718: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25a71c:
    // 0x25a71c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a720:
    // 0x25a720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25a724:
    // 0x25a724: 0x9444fffe  lhu         $a0, -0x2($v0)
    ctx->pc = 0x25a724u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_25a728:
    // 0x25a728: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25a72c:
    // 0x25a72c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25a730:
    // 0x25a730: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x25a730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_25a734:
    // 0x25a734: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25a738:
    // 0x25a738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25a73c:
    // 0x25a73c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x25a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_25a740:
    // 0x25a740: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x25a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_25a744:
    // 0x25a744: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25a748:
    // 0x25a748: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25a748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25a74c:
    // 0x25a74c: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x25a74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_25a750:
    // 0x25a750: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
label_25a754:
    if (ctx->pc == 0x25A754u) {
        ctx->pc = 0x25A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A750u;
        // 0x25a754: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A758u;
        goto label_25a758;
    }
    ctx->pc = 0x25A750u;
    {
        const bool branch_taken_0x25a750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A750u;
        // 0x25a754: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a750) {
            ctx->pc = 0x25A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a710;
        }
    }
    ctx->pc = 0x25A758u;
label_25a758:
    // 0x25a758: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25a75c:
    // 0x25a75c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a760:
    // 0x25a760: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x25a760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25a764:
    // 0x25a764: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25a764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_25a768:
    // 0x25a768: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a76c:
    // 0x25a76c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25a770:
    // 0x25a770: 0xc075fdc  jal         func_1D7F70
label_25a774:
    if (ctx->pc == 0x25A774u) {
        ctx->pc = 0x25A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A770u;
        // 0x25a774: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A778u;
        goto label_25a778;
    }
    ctx->pc = 0x25A770u;
    SET_GPR_U32(ctx, 31, 0x25A778u);
    ctx->pc = 0x25A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A770u;
    // 0x25a774: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x25A770u, 0x25A778u)) {
        return;
    }
    ctx->pc = 0x25A778u;
label_25a778:
    // 0x25a778: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25a77c:
    // 0x25a77c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_25a780:
    if (ctx->pc == 0x25A780u) {
        ctx->pc = 0x25A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A77Cu;
        // 0x25a780: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A784u;
        goto label_25a784;
    }
    ctx->pc = 0x25A77Cu;
    {
        const bool branch_taken_0x25a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A77Cu;
        // 0x25a780: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a77c) {
            ctx->pc = 0x25A828u;
            goto label_25a828;
        }
    }
    ctx->pc = 0x25A784u;
label_25a784:
    // 0x25a784: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x25a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_25a788:
    // 0x25a788: 0x97102b  sltu        $v0, $a0, $s7
    ctx->pc = 0x25a788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_25a78c:
    // 0x25a78c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25a790:
    if (ctx->pc == 0x25A790u) {
        ctx->pc = 0x25A794u;
        goto label_25a794;
    }
    ctx->pc = 0x25A78Cu;
    {
        const bool branch_taken_0x25a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a78c) {
            ctx->pc = 0x25A79Cu;
            goto label_25a79c;
        }
    }
    ctx->pc = 0x25A794u;
label_25a794:
    // 0x25a794: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x25a794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_25a798:
    // 0x25a798: 0xafb7004c  sw          $s7, 0x4C($sp)
    ctx->pc = 0x25a798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 23));
label_25a79c:
    // 0x25a79c: 0x56a0ff03  bnel        $s5, $zero, . + 4 + (-0xFD << 2)
label_25a7a0:
    if (ctx->pc == 0x25A7A0u) {
        ctx->pc = 0x25A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A79Cu;
        // 0x25a7a0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7A4u;
        goto label_25a7a4;
    }
    ctx->pc = 0x25A79Cu;
    {
        const bool branch_taken_0x25a79c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a79c) {
            ctx->pc = 0x25A7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A79Cu;
            // 0x25a7a0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a3ac;
        }
    }
    ctx->pc = 0x25A7A4u;
label_25a7a4:
    // 0x25a7a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25a7a8:
    // 0x25a7a8: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25a7ac:
    // 0x25a7ac: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x25a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_25a7b0:
    // 0x25a7b0: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x25a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_25a7b4:
    // 0x25a7b4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25a7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25a7b8:
    // 0x25a7b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25a7bc:
    // 0x25a7bc: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x25a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_25a7c0:
    // 0x25a7c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25a7c4:
    // 0x25a7c4: 0x40f809  jalr        $v0
label_25a7c8:
    if (ctx->pc == 0x25A7C8u) {
        ctx->pc = 0x25A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7C4u;
        // 0x25a7c8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7CCu;
        goto label_25a7cc;
    }
    ctx->pc = 0x25A7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A7CCu);
        ctx->pc = 0x25A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7C4u;
        // 0x25a7c8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7C4u, 0x25A7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A7CCu;
label_25a7cc:
    // 0x25a7cc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x25a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_25a7d0:
    // 0x25a7d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25a7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a7d4:
    // 0x25a7d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25a7d8:
    // 0x25a7d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25a7dc:
    // 0x25a7dc: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25a7dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_25a7e0:
    // 0x25a7e0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x25a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_25a7e4:
    // 0x25a7e4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x25a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_25a7e8:
    // 0x25a7e8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x25a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25a7ec:
    // 0x25a7ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x25a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_25a7f0:
    // 0x25a7f0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25a7f4:
    // 0x25a7f4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x25a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_25a7f8:
    // 0x25a7f8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25a7fc:
    // 0x25a7fc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x25a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25a800:
    // 0x25a800: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25a804:
    // 0x25a804: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25a808:
    // 0x25a808: 0x40f809  jalr        $v0
label_25a80c:
    if (ctx->pc == 0x25A80Cu) {
        ctx->pc = 0x25A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A808u;
        // 0x25a80c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A810u;
        goto label_25a810;
    }
    ctx->pc = 0x25A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A810u);
        ctx->pc = 0x25A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A808u;
        // 0x25a80c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A808u, 0x25A810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A810u;
label_25a810:
    // 0x25a810: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x25a810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_25a814:
    // 0x25a814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a818:
    // 0x25a818: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x25a818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25a81c:
    // 0x25a81c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25a820:
    // 0x25a820: 0xc075fdc  jal         func_1D7F70
label_25a824:
    if (ctx->pc == 0x25A824u) {
        ctx->pc = 0x25A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A820u;
        // 0x25a824: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A828u;
        goto label_25a828;
    }
    ctx->pc = 0x25A820u;
    SET_GPR_U32(ctx, 31, 0x25A828u);
    ctx->pc = 0x25A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A820u;
    // 0x25a824: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x25A820u, 0x25A828u)) {
        return;
    }
    ctx->pc = 0x25A828u;
label_25a828:
    // 0x25a828: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x25a828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25a82c:
    // 0x25a82c: 0x2e4102b  sltu        $v0, $s7, $a0
    ctx->pc = 0x25a82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25a830:
    // 0x25a830: 0x1440fdcd  bnez        $v0, . + 4 + (-0x233 << 2)
label_25a834:
    if (ctx->pc == 0x25A834u) {
        ctx->pc = 0x25A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A830u;
        // 0x25a834: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A838u;
        goto label_25a838;
    }
    ctx->pc = 0x25A830u;
    {
        const bool branch_taken_0x25a830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A830u;
        // 0x25a834: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a830) {
            ctx->pc = 0x259F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259f68;
        }
    }
    ctx->pc = 0x25A838u;
label_25a838:
    // 0x25a838: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25a83c:
    // 0x25a83c: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x25a83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25a840:
    // 0x25a840: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x25a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25a844:
    // 0x25a844: 0x40f809  jalr        $v0
label_25a848:
    if (ctx->pc == 0x25A848u) {
        ctx->pc = 0x25A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A844u;
        // 0x25a848: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A84Cu;
        goto label_25a84c;
    }
    ctx->pc = 0x25A844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A84Cu);
        ctx->pc = 0x25A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A844u;
        // 0x25a848: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A844u, 0x25A84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A84Cu;
label_25a84c:
    // 0x25a84c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x25a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_25a850:
    // 0x25a850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25a850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a854:
    // 0x25a854: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25a854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25a858:
    // 0x25a858: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25a85c:
    // 0x25a85c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x25a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_25a860:
    // 0x25a860: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_25a864:
    // 0x25a864: 0x40f809  jalr        $v0
label_25a868:
    if (ctx->pc == 0x25A868u) {
        ctx->pc = 0x25A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A864u;
        // 0x25a868: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A86Cu;
        goto label_25a86c;
    }
    ctx->pc = 0x25A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A86Cu);
        ctx->pc = 0x25A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A864u;
        // 0x25a868: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A864u, 0x25A86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A86Cu;
label_25a86c:
    // 0x25a86c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x25a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25a870:
    // 0x25a870: 0x40f809  jalr        $v0
label_25a874:
    if (ctx->pc == 0x25A874u) {
        ctx->pc = 0x25A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A870u;
        // 0x25a874: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A878u;
        goto label_25a878;
    }
    ctx->pc = 0x25A870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A878u);
        ctx->pc = 0x25A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A870u;
        // 0x25a874: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A870u, 0x25A878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A878u;
label_25a878:
    // 0x25a878: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x25a878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_25a87c:
    // 0x25a87c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25a87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a880:
    // 0x25a880: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25a880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25a884:
    // 0x25a884: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25a888:
    // 0x25a888: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x25a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_25a88c:
    // 0x25a88c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_25a890:
    // 0x25a890: 0x40f809  jalr        $v0
label_25a894:
    if (ctx->pc == 0x25A894u) {
        ctx->pc = 0x25A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A890u;
        // 0x25a894: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A898u;
        goto label_25a898;
    }
    ctx->pc = 0x25A890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A898u);
        ctx->pc = 0x25A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A890u;
        // 0x25a894: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A890u, 0x25A898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A898u;
label_25a898:
    // 0x25a898: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x25a898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_25a89c:
    // 0x25a89c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25a8a0:
    // 0x25a8a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x25a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25a8a4:
    // 0x25a8a4: 0xc09655c  jal         func_259570
label_25a8a8:
    if (ctx->pc == 0x25A8A8u) {
        ctx->pc = 0x25A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8A4u;
        // 0x25a8a8: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A8ACu;
        goto label_25a8ac;
    }
    ctx->pc = 0x25A8A4u;
    SET_GPR_U32(ctx, 31, 0x25A8ACu);
    ctx->pc = 0x25A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A8A4u;
    // 0x25a8a8: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x259570u, 0x25A8A4u, 0x25A8ACu)) {
        return;
    }
    ctx->pc = 0x25A8ACu;
label_25a8ac:
    // 0x25a8ac: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x25a8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_25a8b0:
    // 0x25a8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25a8b4:
    // 0x25a8b4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x25a8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_25a8b8:
    // 0x25a8b8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x25a8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_25a8bc:
    // 0x25a8bc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x25a8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_25a8c0:
    // 0x25a8c0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x25a8c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25a8c4:
    // 0x25a8c4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x25a8c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25a8c8:
    // 0x25a8c8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x25a8c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25a8cc:
    // 0x25a8cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x25a8ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25a8d0:
    // 0x25a8d0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x25a8d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25a8d4:
    // 0x25a8d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25a8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25a8d8:
    // 0x25a8d8: 0x3e00008  jr          $ra
label_25a8dc:
    if (ctx->pc == 0x25A8DCu) {
        ctx->pc = 0x25A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8D8u;
        // 0x25a8dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A8E0u;
        goto label_fallthrough_0x25a8d8;
    }
    ctx->pc = 0x25A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8D8u;
        // 0x25a8dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25a8d8:
    ctx->pc = 0x25A8E0u;
}
