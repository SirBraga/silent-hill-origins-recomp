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

// Function: sub_00121AF0
// Address: 0x121af0 - 0x1229b8
void sub_00121AF0_0x121af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121AF0_0x121af0");
#endif

    switch (ctx->pc) {
        case 0x121af0u: goto label_121af0;
        case 0x121af4u: goto label_121af4;
        case 0x121af8u: goto label_121af8;
        case 0x121afcu: goto label_121afc;
        case 0x121b00u: goto label_121b00;
        case 0x121b04u: goto label_121b04;
        case 0x121b08u: goto label_121b08;
        case 0x121b0cu: goto label_121b0c;
        case 0x121b10u: goto label_121b10;
        case 0x121b14u: goto label_121b14;
        case 0x121b18u: goto label_121b18;
        case 0x121b1cu: goto label_121b1c;
        case 0x121b20u: goto label_121b20;
        case 0x121b24u: goto label_121b24;
        case 0x121b28u: goto label_121b28;
        case 0x121b2cu: goto label_121b2c;
        case 0x121b30u: goto label_121b30;
        case 0x121b34u: goto label_121b34;
        case 0x121b38u: goto label_121b38;
        case 0x121b3cu: goto label_121b3c;
        case 0x121b40u: goto label_121b40;
        case 0x121b44u: goto label_121b44;
        case 0x121b48u: goto label_121b48;
        case 0x121b4cu: goto label_121b4c;
        case 0x121b50u: goto label_121b50;
        case 0x121b54u: goto label_121b54;
        case 0x121b58u: goto label_121b58;
        case 0x121b5cu: goto label_121b5c;
        case 0x121b60u: goto label_121b60;
        case 0x121b64u: goto label_121b64;
        case 0x121b68u: goto label_121b68;
        case 0x121b6cu: goto label_121b6c;
        case 0x121b70u: goto label_121b70;
        case 0x121b74u: goto label_121b74;
        case 0x121b78u: goto label_121b78;
        case 0x121b7cu: goto label_121b7c;
        case 0x121b80u: goto label_121b80;
        case 0x121b84u: goto label_121b84;
        case 0x121b88u: goto label_121b88;
        case 0x121b8cu: goto label_121b8c;
        case 0x121b90u: goto label_121b90;
        case 0x121b94u: goto label_121b94;
        case 0x121b98u: goto label_121b98;
        case 0x121b9cu: goto label_121b9c;
        case 0x121ba0u: goto label_121ba0;
        case 0x121ba4u: goto label_121ba4;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bacu: goto label_121bac;
        case 0x121bb0u: goto label_121bb0;
        case 0x121bb4u: goto label_121bb4;
        case 0x121bb8u: goto label_121bb8;
        case 0x121bbcu: goto label_121bbc;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bc4u: goto label_121bc4;
        case 0x121bc8u: goto label_121bc8;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd0u: goto label_121bd0;
        case 0x121bd4u: goto label_121bd4;
        case 0x121bd8u: goto label_121bd8;
        case 0x121bdcu: goto label_121bdc;
        case 0x121be0u: goto label_121be0;
        case 0x121be4u: goto label_121be4;
        case 0x121be8u: goto label_121be8;
        case 0x121becu: goto label_121bec;
        case 0x121bf0u: goto label_121bf0;
        case 0x121bf4u: goto label_121bf4;
        case 0x121bf8u: goto label_121bf8;
        case 0x121bfcu: goto label_121bfc;
        case 0x121c00u: goto label_121c00;
        case 0x121c04u: goto label_121c04;
        case 0x121c08u: goto label_121c08;
        case 0x121c0cu: goto label_121c0c;
        case 0x121c10u: goto label_121c10;
        case 0x121c14u: goto label_121c14;
        case 0x121c18u: goto label_121c18;
        case 0x121c1cu: goto label_121c1c;
        case 0x121c20u: goto label_121c20;
        case 0x121c24u: goto label_121c24;
        case 0x121c28u: goto label_121c28;
        case 0x121c2cu: goto label_121c2c;
        case 0x121c30u: goto label_121c30;
        case 0x121c34u: goto label_121c34;
        case 0x121c38u: goto label_121c38;
        case 0x121c3cu: goto label_121c3c;
        case 0x121c40u: goto label_121c40;
        case 0x121c44u: goto label_121c44;
        case 0x121c48u: goto label_121c48;
        case 0x121c4cu: goto label_121c4c;
        case 0x121c50u: goto label_121c50;
        case 0x121c54u: goto label_121c54;
        case 0x121c58u: goto label_121c58;
        case 0x121c5cu: goto label_121c5c;
        case 0x121c60u: goto label_121c60;
        case 0x121c64u: goto label_121c64;
        case 0x121c68u: goto label_121c68;
        case 0x121c6cu: goto label_121c6c;
        case 0x121c70u: goto label_121c70;
        case 0x121c74u: goto label_121c74;
        case 0x121c78u: goto label_121c78;
        case 0x121c7cu: goto label_121c7c;
        case 0x121c80u: goto label_121c80;
        case 0x121c84u: goto label_121c84;
        case 0x121c88u: goto label_121c88;
        case 0x121c8cu: goto label_121c8c;
        case 0x121c90u: goto label_121c90;
        case 0x121c94u: goto label_121c94;
        case 0x121c98u: goto label_121c98;
        case 0x121c9cu: goto label_121c9c;
        case 0x121ca0u: goto label_121ca0;
        case 0x121ca4u: goto label_121ca4;
        case 0x121ca8u: goto label_121ca8;
        case 0x121cacu: goto label_121cac;
        case 0x121cb0u: goto label_121cb0;
        case 0x121cb4u: goto label_121cb4;
        case 0x121cb8u: goto label_121cb8;
        case 0x121cbcu: goto label_121cbc;
        case 0x121cc0u: goto label_121cc0;
        case 0x121cc4u: goto label_121cc4;
        case 0x121cc8u: goto label_121cc8;
        case 0x121cccu: goto label_121ccc;
        case 0x121cd0u: goto label_121cd0;
        case 0x121cd4u: goto label_121cd4;
        case 0x121cd8u: goto label_121cd8;
        case 0x121cdcu: goto label_121cdc;
        case 0x121ce0u: goto label_121ce0;
        case 0x121ce4u: goto label_121ce4;
        case 0x121ce8u: goto label_121ce8;
        case 0x121cecu: goto label_121cec;
        case 0x121cf0u: goto label_121cf0;
        case 0x121cf4u: goto label_121cf4;
        case 0x121cf8u: goto label_121cf8;
        case 0x121cfcu: goto label_121cfc;
        case 0x121d00u: goto label_121d00;
        case 0x121d04u: goto label_121d04;
        case 0x121d08u: goto label_121d08;
        case 0x121d0cu: goto label_121d0c;
        case 0x121d10u: goto label_121d10;
        case 0x121d14u: goto label_121d14;
        case 0x121d18u: goto label_121d18;
        case 0x121d1cu: goto label_121d1c;
        case 0x121d20u: goto label_121d20;
        case 0x121d24u: goto label_121d24;
        case 0x121d28u: goto label_121d28;
        case 0x121d2cu: goto label_121d2c;
        case 0x121d30u: goto label_121d30;
        case 0x121d34u: goto label_121d34;
        case 0x121d38u: goto label_121d38;
        case 0x121d3cu: goto label_121d3c;
        case 0x121d40u: goto label_121d40;
        case 0x121d44u: goto label_121d44;
        case 0x121d48u: goto label_121d48;
        case 0x121d4cu: goto label_121d4c;
        case 0x121d50u: goto label_121d50;
        case 0x121d54u: goto label_121d54;
        case 0x121d58u: goto label_121d58;
        case 0x121d5cu: goto label_121d5c;
        case 0x121d60u: goto label_121d60;
        case 0x121d64u: goto label_121d64;
        case 0x121d68u: goto label_121d68;
        case 0x121d6cu: goto label_121d6c;
        case 0x121d70u: goto label_121d70;
        case 0x121d74u: goto label_121d74;
        case 0x121d78u: goto label_121d78;
        case 0x121d7cu: goto label_121d7c;
        case 0x121d80u: goto label_121d80;
        case 0x121d84u: goto label_121d84;
        case 0x121d88u: goto label_121d88;
        case 0x121d8cu: goto label_121d8c;
        case 0x121d90u: goto label_121d90;
        case 0x121d94u: goto label_121d94;
        case 0x121d98u: goto label_121d98;
        case 0x121d9cu: goto label_121d9c;
        case 0x121da0u: goto label_121da0;
        case 0x121da4u: goto label_121da4;
        case 0x121da8u: goto label_121da8;
        case 0x121dacu: goto label_121dac;
        case 0x121db0u: goto label_121db0;
        case 0x121db4u: goto label_121db4;
        case 0x121db8u: goto label_121db8;
        case 0x121dbcu: goto label_121dbc;
        case 0x121dc0u: goto label_121dc0;
        case 0x121dc4u: goto label_121dc4;
        case 0x121dc8u: goto label_121dc8;
        case 0x121dccu: goto label_121dcc;
        case 0x121dd0u: goto label_121dd0;
        case 0x121dd4u: goto label_121dd4;
        case 0x121dd8u: goto label_121dd8;
        case 0x121ddcu: goto label_121ddc;
        case 0x121de0u: goto label_121de0;
        case 0x121de4u: goto label_121de4;
        case 0x121de8u: goto label_121de8;
        case 0x121decu: goto label_121dec;
        case 0x121df0u: goto label_121df0;
        case 0x121df4u: goto label_121df4;
        case 0x121df8u: goto label_121df8;
        case 0x121dfcu: goto label_121dfc;
        case 0x121e00u: goto label_121e00;
        case 0x121e04u: goto label_121e04;
        case 0x121e08u: goto label_121e08;
        case 0x121e0cu: goto label_121e0c;
        case 0x121e10u: goto label_121e10;
        case 0x121e14u: goto label_121e14;
        case 0x121e18u: goto label_121e18;
        case 0x121e1cu: goto label_121e1c;
        case 0x121e20u: goto label_121e20;
        case 0x121e24u: goto label_121e24;
        case 0x121e28u: goto label_121e28;
        case 0x121e2cu: goto label_121e2c;
        case 0x121e30u: goto label_121e30;
        case 0x121e34u: goto label_121e34;
        case 0x121e38u: goto label_121e38;
        case 0x121e3cu: goto label_121e3c;
        case 0x121e40u: goto label_121e40;
        case 0x121e44u: goto label_121e44;
        case 0x121e48u: goto label_121e48;
        case 0x121e4cu: goto label_121e4c;
        case 0x121e50u: goto label_121e50;
        case 0x121e54u: goto label_121e54;
        case 0x121e58u: goto label_121e58;
        case 0x121e5cu: goto label_121e5c;
        case 0x121e60u: goto label_121e60;
        case 0x121e64u: goto label_121e64;
        case 0x121e68u: goto label_121e68;
        case 0x121e6cu: goto label_121e6c;
        case 0x121e70u: goto label_121e70;
        case 0x121e74u: goto label_121e74;
        case 0x121e78u: goto label_121e78;
        case 0x121e7cu: goto label_121e7c;
        case 0x121e80u: goto label_121e80;
        case 0x121e84u: goto label_121e84;
        case 0x121e88u: goto label_121e88;
        case 0x121e8cu: goto label_121e8c;
        case 0x121e90u: goto label_121e90;
        case 0x121e94u: goto label_121e94;
        case 0x121e98u: goto label_121e98;
        case 0x121e9cu: goto label_121e9c;
        case 0x121ea0u: goto label_121ea0;
        case 0x121ea4u: goto label_121ea4;
        case 0x121ea8u: goto label_121ea8;
        case 0x121eacu: goto label_121eac;
        case 0x121eb0u: goto label_121eb0;
        case 0x121eb4u: goto label_121eb4;
        case 0x121eb8u: goto label_121eb8;
        case 0x121ebcu: goto label_121ebc;
        case 0x121ec0u: goto label_121ec0;
        case 0x121ec4u: goto label_121ec4;
        case 0x121ec8u: goto label_121ec8;
        case 0x121eccu: goto label_121ecc;
        case 0x121ed0u: goto label_121ed0;
        case 0x121ed4u: goto label_121ed4;
        case 0x121ed8u: goto label_121ed8;
        case 0x121edcu: goto label_121edc;
        case 0x121ee0u: goto label_121ee0;
        case 0x121ee4u: goto label_121ee4;
        case 0x121ee8u: goto label_121ee8;
        case 0x121eecu: goto label_121eec;
        case 0x121ef0u: goto label_121ef0;
        case 0x121ef4u: goto label_121ef4;
        case 0x121ef8u: goto label_121ef8;
        case 0x121efcu: goto label_121efc;
        case 0x121f00u: goto label_121f00;
        case 0x121f04u: goto label_121f04;
        case 0x121f08u: goto label_121f08;
        case 0x121f0cu: goto label_121f0c;
        case 0x121f10u: goto label_121f10;
        case 0x121f14u: goto label_121f14;
        case 0x121f18u: goto label_121f18;
        case 0x121f1cu: goto label_121f1c;
        case 0x121f20u: goto label_121f20;
        case 0x121f24u: goto label_121f24;
        case 0x121f28u: goto label_121f28;
        case 0x121f2cu: goto label_121f2c;
        case 0x121f30u: goto label_121f30;
        case 0x121f34u: goto label_121f34;
        case 0x121f38u: goto label_121f38;
        case 0x121f3cu: goto label_121f3c;
        case 0x121f40u: goto label_121f40;
        case 0x121f44u: goto label_121f44;
        case 0x121f48u: goto label_121f48;
        case 0x121f4cu: goto label_121f4c;
        case 0x121f50u: goto label_121f50;
        case 0x121f54u: goto label_121f54;
        case 0x121f58u: goto label_121f58;
        case 0x121f5cu: goto label_121f5c;
        case 0x121f60u: goto label_121f60;
        case 0x121f64u: goto label_121f64;
        case 0x121f68u: goto label_121f68;
        case 0x121f6cu: goto label_121f6c;
        case 0x121f70u: goto label_121f70;
        case 0x121f74u: goto label_121f74;
        case 0x121f78u: goto label_121f78;
        case 0x121f7cu: goto label_121f7c;
        case 0x121f80u: goto label_121f80;
        case 0x121f84u: goto label_121f84;
        case 0x121f88u: goto label_121f88;
        case 0x121f8cu: goto label_121f8c;
        case 0x121f90u: goto label_121f90;
        case 0x121f94u: goto label_121f94;
        case 0x121f98u: goto label_121f98;
        case 0x121f9cu: goto label_121f9c;
        case 0x121fa0u: goto label_121fa0;
        case 0x121fa4u: goto label_121fa4;
        case 0x121fa8u: goto label_121fa8;
        case 0x121facu: goto label_121fac;
        case 0x121fb0u: goto label_121fb0;
        case 0x121fb4u: goto label_121fb4;
        case 0x121fb8u: goto label_121fb8;
        case 0x121fbcu: goto label_121fbc;
        case 0x121fc0u: goto label_121fc0;
        case 0x121fc4u: goto label_121fc4;
        case 0x121fc8u: goto label_121fc8;
        case 0x121fccu: goto label_121fcc;
        case 0x121fd0u: goto label_121fd0;
        case 0x121fd4u: goto label_121fd4;
        case 0x121fd8u: goto label_121fd8;
        case 0x121fdcu: goto label_121fdc;
        case 0x121fe0u: goto label_121fe0;
        case 0x121fe4u: goto label_121fe4;
        case 0x121fe8u: goto label_121fe8;
        case 0x121fecu: goto label_121fec;
        case 0x121ff0u: goto label_121ff0;
        case 0x121ff4u: goto label_121ff4;
        case 0x121ff8u: goto label_121ff8;
        case 0x121ffcu: goto label_121ffc;
        case 0x122000u: goto label_122000;
        case 0x122004u: goto label_122004;
        case 0x122008u: goto label_122008;
        case 0x12200cu: goto label_12200c;
        case 0x122010u: goto label_122010;
        case 0x122014u: goto label_122014;
        case 0x122018u: goto label_122018;
        case 0x12201cu: goto label_12201c;
        case 0x122020u: goto label_122020;
        case 0x122024u: goto label_122024;
        case 0x122028u: goto label_122028;
        case 0x12202cu: goto label_12202c;
        case 0x122030u: goto label_122030;
        case 0x122034u: goto label_122034;
        case 0x122038u: goto label_122038;
        case 0x12203cu: goto label_12203c;
        case 0x122040u: goto label_122040;
        case 0x122044u: goto label_122044;
        case 0x122048u: goto label_122048;
        case 0x12204cu: goto label_12204c;
        case 0x122050u: goto label_122050;
        case 0x122054u: goto label_122054;
        case 0x122058u: goto label_122058;
        case 0x12205cu: goto label_12205c;
        case 0x122060u: goto label_122060;
        case 0x122064u: goto label_122064;
        case 0x122068u: goto label_122068;
        case 0x12206cu: goto label_12206c;
        case 0x122070u: goto label_122070;
        case 0x122074u: goto label_122074;
        case 0x122078u: goto label_122078;
        case 0x12207cu: goto label_12207c;
        case 0x122080u: goto label_122080;
        case 0x122084u: goto label_122084;
        case 0x122088u: goto label_122088;
        case 0x12208cu: goto label_12208c;
        case 0x122090u: goto label_122090;
        case 0x122094u: goto label_122094;
        case 0x122098u: goto label_122098;
        case 0x12209cu: goto label_12209c;
        case 0x1220a0u: goto label_1220a0;
        case 0x1220a4u: goto label_1220a4;
        case 0x1220a8u: goto label_1220a8;
        case 0x1220acu: goto label_1220ac;
        case 0x1220b0u: goto label_1220b0;
        case 0x1220b4u: goto label_1220b4;
        case 0x1220b8u: goto label_1220b8;
        case 0x1220bcu: goto label_1220bc;
        case 0x1220c0u: goto label_1220c0;
        case 0x1220c4u: goto label_1220c4;
        case 0x1220c8u: goto label_1220c8;
        case 0x1220ccu: goto label_1220cc;
        case 0x1220d0u: goto label_1220d0;
        case 0x1220d4u: goto label_1220d4;
        case 0x1220d8u: goto label_1220d8;
        case 0x1220dcu: goto label_1220dc;
        case 0x1220e0u: goto label_1220e0;
        case 0x1220e4u: goto label_1220e4;
        case 0x1220e8u: goto label_1220e8;
        case 0x1220ecu: goto label_1220ec;
        case 0x1220f0u: goto label_1220f0;
        case 0x1220f4u: goto label_1220f4;
        case 0x1220f8u: goto label_1220f8;
        case 0x1220fcu: goto label_1220fc;
        case 0x122100u: goto label_122100;
        case 0x122104u: goto label_122104;
        case 0x122108u: goto label_122108;
        case 0x12210cu: goto label_12210c;
        case 0x122110u: goto label_122110;
        case 0x122114u: goto label_122114;
        case 0x122118u: goto label_122118;
        case 0x12211cu: goto label_12211c;
        case 0x122120u: goto label_122120;
        case 0x122124u: goto label_122124;
        case 0x122128u: goto label_122128;
        case 0x12212cu: goto label_12212c;
        case 0x122130u: goto label_122130;
        case 0x122134u: goto label_122134;
        case 0x122138u: goto label_122138;
        case 0x12213cu: goto label_12213c;
        case 0x122140u: goto label_122140;
        case 0x122144u: goto label_122144;
        case 0x122148u: goto label_122148;
        case 0x12214cu: goto label_12214c;
        case 0x122150u: goto label_122150;
        case 0x122154u: goto label_122154;
        case 0x122158u: goto label_122158;
        case 0x12215cu: goto label_12215c;
        case 0x122160u: goto label_122160;
        case 0x122164u: goto label_122164;
        case 0x122168u: goto label_122168;
        case 0x12216cu: goto label_12216c;
        case 0x122170u: goto label_122170;
        case 0x122174u: goto label_122174;
        case 0x122178u: goto label_122178;
        case 0x12217cu: goto label_12217c;
        case 0x122180u: goto label_122180;
        case 0x122184u: goto label_122184;
        case 0x122188u: goto label_122188;
        case 0x12218cu: goto label_12218c;
        case 0x122190u: goto label_122190;
        case 0x122194u: goto label_122194;
        case 0x122198u: goto label_122198;
        case 0x12219cu: goto label_12219c;
        case 0x1221a0u: goto label_1221a0;
        case 0x1221a4u: goto label_1221a4;
        case 0x1221a8u: goto label_1221a8;
        case 0x1221acu: goto label_1221ac;
        case 0x1221b0u: goto label_1221b0;
        case 0x1221b4u: goto label_1221b4;
        case 0x1221b8u: goto label_1221b8;
        case 0x1221bcu: goto label_1221bc;
        case 0x1221c0u: goto label_1221c0;
        case 0x1221c4u: goto label_1221c4;
        case 0x1221c8u: goto label_1221c8;
        case 0x1221ccu: goto label_1221cc;
        case 0x1221d0u: goto label_1221d0;
        case 0x1221d4u: goto label_1221d4;
        case 0x1221d8u: goto label_1221d8;
        case 0x1221dcu: goto label_1221dc;
        case 0x1221e0u: goto label_1221e0;
        case 0x1221e4u: goto label_1221e4;
        case 0x1221e8u: goto label_1221e8;
        case 0x1221ecu: goto label_1221ec;
        case 0x1221f0u: goto label_1221f0;
        case 0x1221f4u: goto label_1221f4;
        case 0x1221f8u: goto label_1221f8;
        case 0x1221fcu: goto label_1221fc;
        case 0x122200u: goto label_122200;
        case 0x122204u: goto label_122204;
        case 0x122208u: goto label_122208;
        case 0x12220cu: goto label_12220c;
        case 0x122210u: goto label_122210;
        case 0x122214u: goto label_122214;
        case 0x122218u: goto label_122218;
        case 0x12221cu: goto label_12221c;
        case 0x122220u: goto label_122220;
        case 0x122224u: goto label_122224;
        case 0x122228u: goto label_122228;
        case 0x12222cu: goto label_12222c;
        case 0x122230u: goto label_122230;
        case 0x122234u: goto label_122234;
        case 0x122238u: goto label_122238;
        case 0x12223cu: goto label_12223c;
        case 0x122240u: goto label_122240;
        case 0x122244u: goto label_122244;
        case 0x122248u: goto label_122248;
        case 0x12224cu: goto label_12224c;
        case 0x122250u: goto label_122250;
        case 0x122254u: goto label_122254;
        case 0x122258u: goto label_122258;
        case 0x12225cu: goto label_12225c;
        case 0x122260u: goto label_122260;
        case 0x122264u: goto label_122264;
        case 0x122268u: goto label_122268;
        case 0x12226cu: goto label_12226c;
        case 0x122270u: goto label_122270;
        case 0x122274u: goto label_122274;
        case 0x122278u: goto label_122278;
        case 0x12227cu: goto label_12227c;
        case 0x122280u: goto label_122280;
        case 0x122284u: goto label_122284;
        case 0x122288u: goto label_122288;
        case 0x12228cu: goto label_12228c;
        case 0x122290u: goto label_122290;
        case 0x122294u: goto label_122294;
        case 0x122298u: goto label_122298;
        case 0x12229cu: goto label_12229c;
        case 0x1222a0u: goto label_1222a0;
        case 0x1222a4u: goto label_1222a4;
        case 0x1222a8u: goto label_1222a8;
        case 0x1222acu: goto label_1222ac;
        case 0x1222b0u: goto label_1222b0;
        case 0x1222b4u: goto label_1222b4;
        case 0x1222b8u: goto label_1222b8;
        case 0x1222bcu: goto label_1222bc;
        case 0x1222c0u: goto label_1222c0;
        case 0x1222c4u: goto label_1222c4;
        case 0x1222c8u: goto label_1222c8;
        case 0x1222ccu: goto label_1222cc;
        case 0x1222d0u: goto label_1222d0;
        case 0x1222d4u: goto label_1222d4;
        case 0x1222d8u: goto label_1222d8;
        case 0x1222dcu: goto label_1222dc;
        case 0x1222e0u: goto label_1222e0;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222e8u: goto label_1222e8;
        case 0x1222ecu: goto label_1222ec;
        case 0x1222f0u: goto label_1222f0;
        case 0x1222f4u: goto label_1222f4;
        case 0x1222f8u: goto label_1222f8;
        case 0x1222fcu: goto label_1222fc;
        case 0x122300u: goto label_122300;
        case 0x122304u: goto label_122304;
        case 0x122308u: goto label_122308;
        case 0x12230cu: goto label_12230c;
        case 0x122310u: goto label_122310;
        case 0x122314u: goto label_122314;
        case 0x122318u: goto label_122318;
        case 0x12231cu: goto label_12231c;
        case 0x122320u: goto label_122320;
        case 0x122324u: goto label_122324;
        case 0x122328u: goto label_122328;
        case 0x12232cu: goto label_12232c;
        case 0x122330u: goto label_122330;
        case 0x122334u: goto label_122334;
        case 0x122338u: goto label_122338;
        case 0x12233cu: goto label_12233c;
        case 0x122340u: goto label_122340;
        case 0x122344u: goto label_122344;
        case 0x122348u: goto label_122348;
        case 0x12234cu: goto label_12234c;
        case 0x122350u: goto label_122350;
        case 0x122354u: goto label_122354;
        case 0x122358u: goto label_122358;
        case 0x12235cu: goto label_12235c;
        case 0x122360u: goto label_122360;
        case 0x122364u: goto label_122364;
        case 0x122368u: goto label_122368;
        case 0x12236cu: goto label_12236c;
        case 0x122370u: goto label_122370;
        case 0x122374u: goto label_122374;
        case 0x122378u: goto label_122378;
        case 0x12237cu: goto label_12237c;
        case 0x122380u: goto label_122380;
        case 0x122384u: goto label_122384;
        case 0x122388u: goto label_122388;
        case 0x12238cu: goto label_12238c;
        case 0x122390u: goto label_122390;
        case 0x122394u: goto label_122394;
        case 0x122398u: goto label_122398;
        case 0x12239cu: goto label_12239c;
        case 0x1223a0u: goto label_1223a0;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223a8u: goto label_1223a8;
        case 0x1223acu: goto label_1223ac;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223b4u: goto label_1223b4;
        case 0x1223b8u: goto label_1223b8;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c0u: goto label_1223c0;
        case 0x1223c4u: goto label_1223c4;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d0u: goto label_1223d0;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223d8u: goto label_1223d8;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223e0u: goto label_1223e0;
        case 0x1223e4u: goto label_1223e4;
        case 0x1223e8u: goto label_1223e8;
        case 0x1223ecu: goto label_1223ec;
        case 0x1223f0u: goto label_1223f0;
        case 0x1223f4u: goto label_1223f4;
        case 0x1223f8u: goto label_1223f8;
        case 0x1223fcu: goto label_1223fc;
        case 0x122400u: goto label_122400;
        case 0x122404u: goto label_122404;
        case 0x122408u: goto label_122408;
        case 0x12240cu: goto label_12240c;
        case 0x122410u: goto label_122410;
        case 0x122414u: goto label_122414;
        case 0x122418u: goto label_122418;
        case 0x12241cu: goto label_12241c;
        case 0x122420u: goto label_122420;
        case 0x122424u: goto label_122424;
        case 0x122428u: goto label_122428;
        case 0x12242cu: goto label_12242c;
        case 0x122430u: goto label_122430;
        case 0x122434u: goto label_122434;
        case 0x122438u: goto label_122438;
        case 0x12243cu: goto label_12243c;
        case 0x122440u: goto label_122440;
        case 0x122444u: goto label_122444;
        case 0x122448u: goto label_122448;
        case 0x12244cu: goto label_12244c;
        case 0x122450u: goto label_122450;
        case 0x122454u: goto label_122454;
        case 0x122458u: goto label_122458;
        case 0x12245cu: goto label_12245c;
        case 0x122460u: goto label_122460;
        case 0x122464u: goto label_122464;
        case 0x122468u: goto label_122468;
        case 0x12246cu: goto label_12246c;
        case 0x122470u: goto label_122470;
        case 0x122474u: goto label_122474;
        case 0x122478u: goto label_122478;
        case 0x12247cu: goto label_12247c;
        case 0x122480u: goto label_122480;
        case 0x122484u: goto label_122484;
        case 0x122488u: goto label_122488;
        case 0x12248cu: goto label_12248c;
        case 0x122490u: goto label_122490;
        case 0x122494u: goto label_122494;
        case 0x122498u: goto label_122498;
        case 0x12249cu: goto label_12249c;
        case 0x1224a0u: goto label_1224a0;
        case 0x1224a4u: goto label_1224a4;
        case 0x1224a8u: goto label_1224a8;
        case 0x1224acu: goto label_1224ac;
        case 0x1224b0u: goto label_1224b0;
        case 0x1224b4u: goto label_1224b4;
        case 0x1224b8u: goto label_1224b8;
        case 0x1224bcu: goto label_1224bc;
        case 0x1224c0u: goto label_1224c0;
        case 0x1224c4u: goto label_1224c4;
        case 0x1224c8u: goto label_1224c8;
        case 0x1224ccu: goto label_1224cc;
        case 0x1224d0u: goto label_1224d0;
        case 0x1224d4u: goto label_1224d4;
        case 0x1224d8u: goto label_1224d8;
        case 0x1224dcu: goto label_1224dc;
        case 0x1224e0u: goto label_1224e0;
        case 0x1224e4u: goto label_1224e4;
        case 0x1224e8u: goto label_1224e8;
        case 0x1224ecu: goto label_1224ec;
        case 0x1224f0u: goto label_1224f0;
        case 0x1224f4u: goto label_1224f4;
        case 0x1224f8u: goto label_1224f8;
        case 0x1224fcu: goto label_1224fc;
        case 0x122500u: goto label_122500;
        case 0x122504u: goto label_122504;
        case 0x122508u: goto label_122508;
        case 0x12250cu: goto label_12250c;
        case 0x122510u: goto label_122510;
        case 0x122514u: goto label_122514;
        case 0x122518u: goto label_122518;
        case 0x12251cu: goto label_12251c;
        case 0x122520u: goto label_122520;
        case 0x122524u: goto label_122524;
        case 0x122528u: goto label_122528;
        case 0x12252cu: goto label_12252c;
        case 0x122530u: goto label_122530;
        case 0x122534u: goto label_122534;
        case 0x122538u: goto label_122538;
        case 0x12253cu: goto label_12253c;
        case 0x122540u: goto label_122540;
        case 0x122544u: goto label_122544;
        case 0x122548u: goto label_122548;
        case 0x12254cu: goto label_12254c;
        case 0x122550u: goto label_122550;
        case 0x122554u: goto label_122554;
        case 0x122558u: goto label_122558;
        case 0x12255cu: goto label_12255c;
        case 0x122560u: goto label_122560;
        case 0x122564u: goto label_122564;
        case 0x122568u: goto label_122568;
        case 0x12256cu: goto label_12256c;
        case 0x122570u: goto label_122570;
        case 0x122574u: goto label_122574;
        case 0x122578u: goto label_122578;
        case 0x12257cu: goto label_12257c;
        case 0x122580u: goto label_122580;
        case 0x122584u: goto label_122584;
        case 0x122588u: goto label_122588;
        case 0x12258cu: goto label_12258c;
        case 0x122590u: goto label_122590;
        case 0x122594u: goto label_122594;
        case 0x122598u: goto label_122598;
        case 0x12259cu: goto label_12259c;
        case 0x1225a0u: goto label_1225a0;
        case 0x1225a4u: goto label_1225a4;
        case 0x1225a8u: goto label_1225a8;
        case 0x1225acu: goto label_1225ac;
        case 0x1225b0u: goto label_1225b0;
        case 0x1225b4u: goto label_1225b4;
        case 0x1225b8u: goto label_1225b8;
        case 0x1225bcu: goto label_1225bc;
        case 0x1225c0u: goto label_1225c0;
        case 0x1225c4u: goto label_1225c4;
        case 0x1225c8u: goto label_1225c8;
        case 0x1225ccu: goto label_1225cc;
        case 0x1225d0u: goto label_1225d0;
        case 0x1225d4u: goto label_1225d4;
        case 0x1225d8u: goto label_1225d8;
        case 0x1225dcu: goto label_1225dc;
        case 0x1225e0u: goto label_1225e0;
        case 0x1225e4u: goto label_1225e4;
        case 0x1225e8u: goto label_1225e8;
        case 0x1225ecu: goto label_1225ec;
        case 0x1225f0u: goto label_1225f0;
        case 0x1225f4u: goto label_1225f4;
        case 0x1225f8u: goto label_1225f8;
        case 0x1225fcu: goto label_1225fc;
        case 0x122600u: goto label_122600;
        case 0x122604u: goto label_122604;
        case 0x122608u: goto label_122608;
        case 0x12260cu: goto label_12260c;
        case 0x122610u: goto label_122610;
        case 0x122614u: goto label_122614;
        case 0x122618u: goto label_122618;
        case 0x12261cu: goto label_12261c;
        case 0x122620u: goto label_122620;
        case 0x122624u: goto label_122624;
        case 0x122628u: goto label_122628;
        case 0x12262cu: goto label_12262c;
        case 0x122630u: goto label_122630;
        case 0x122634u: goto label_122634;
        case 0x122638u: goto label_122638;
        case 0x12263cu: goto label_12263c;
        case 0x122640u: goto label_122640;
        case 0x122644u: goto label_122644;
        case 0x122648u: goto label_122648;
        case 0x12264cu: goto label_12264c;
        case 0x122650u: goto label_122650;
        case 0x122654u: goto label_122654;
        case 0x122658u: goto label_122658;
        case 0x12265cu: goto label_12265c;
        case 0x122660u: goto label_122660;
        case 0x122664u: goto label_122664;
        case 0x122668u: goto label_122668;
        case 0x12266cu: goto label_12266c;
        case 0x122670u: goto label_122670;
        case 0x122674u: goto label_122674;
        case 0x122678u: goto label_122678;
        case 0x12267cu: goto label_12267c;
        case 0x122680u: goto label_122680;
        case 0x122684u: goto label_122684;
        case 0x122688u: goto label_122688;
        case 0x12268cu: goto label_12268c;
        case 0x122690u: goto label_122690;
        case 0x122694u: goto label_122694;
        case 0x122698u: goto label_122698;
        case 0x12269cu: goto label_12269c;
        case 0x1226a0u: goto label_1226a0;
        case 0x1226a4u: goto label_1226a4;
        case 0x1226a8u: goto label_1226a8;
        case 0x1226acu: goto label_1226ac;
        case 0x1226b0u: goto label_1226b0;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226b8u: goto label_1226b8;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c0u: goto label_1226c0;
        case 0x1226c4u: goto label_1226c4;
        case 0x1226c8u: goto label_1226c8;
        case 0x1226ccu: goto label_1226cc;
        case 0x1226d0u: goto label_1226d0;
        case 0x1226d4u: goto label_1226d4;
        case 0x1226d8u: goto label_1226d8;
        case 0x1226dcu: goto label_1226dc;
        case 0x1226e0u: goto label_1226e0;
        case 0x1226e4u: goto label_1226e4;
        case 0x1226e8u: goto label_1226e8;
        case 0x1226ecu: goto label_1226ec;
        case 0x1226f0u: goto label_1226f0;
        case 0x1226f4u: goto label_1226f4;
        case 0x1226f8u: goto label_1226f8;
        case 0x1226fcu: goto label_1226fc;
        case 0x122700u: goto label_122700;
        case 0x122704u: goto label_122704;
        case 0x122708u: goto label_122708;
        case 0x12270cu: goto label_12270c;
        case 0x122710u: goto label_122710;
        case 0x122714u: goto label_122714;
        case 0x122718u: goto label_122718;
        case 0x12271cu: goto label_12271c;
        case 0x122720u: goto label_122720;
        case 0x122724u: goto label_122724;
        case 0x122728u: goto label_122728;
        case 0x12272cu: goto label_12272c;
        case 0x122730u: goto label_122730;
        case 0x122734u: goto label_122734;
        case 0x122738u: goto label_122738;
        case 0x12273cu: goto label_12273c;
        case 0x122740u: goto label_122740;
        case 0x122744u: goto label_122744;
        case 0x122748u: goto label_122748;
        case 0x12274cu: goto label_12274c;
        case 0x122750u: goto label_122750;
        case 0x122754u: goto label_122754;
        case 0x122758u: goto label_122758;
        case 0x12275cu: goto label_12275c;
        case 0x122760u: goto label_122760;
        case 0x122764u: goto label_122764;
        case 0x122768u: goto label_122768;
        case 0x12276cu: goto label_12276c;
        case 0x122770u: goto label_122770;
        case 0x122774u: goto label_122774;
        case 0x122778u: goto label_122778;
        case 0x12277cu: goto label_12277c;
        case 0x122780u: goto label_122780;
        case 0x122784u: goto label_122784;
        case 0x122788u: goto label_122788;
        case 0x12278cu: goto label_12278c;
        case 0x122790u: goto label_122790;
        case 0x122794u: goto label_122794;
        case 0x122798u: goto label_122798;
        case 0x12279cu: goto label_12279c;
        case 0x1227a0u: goto label_1227a0;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227a8u: goto label_1227a8;
        case 0x1227acu: goto label_1227ac;
        case 0x1227b0u: goto label_1227b0;
        case 0x1227b4u: goto label_1227b4;
        case 0x1227b8u: goto label_1227b8;
        case 0x1227bcu: goto label_1227bc;
        case 0x1227c0u: goto label_1227c0;
        case 0x1227c4u: goto label_1227c4;
        case 0x1227c8u: goto label_1227c8;
        case 0x1227ccu: goto label_1227cc;
        case 0x1227d0u: goto label_1227d0;
        case 0x1227d4u: goto label_1227d4;
        case 0x1227d8u: goto label_1227d8;
        case 0x1227dcu: goto label_1227dc;
        case 0x1227e0u: goto label_1227e0;
        case 0x1227e4u: goto label_1227e4;
        case 0x1227e8u: goto label_1227e8;
        case 0x1227ecu: goto label_1227ec;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f4u: goto label_1227f4;
        case 0x1227f8u: goto label_1227f8;
        case 0x1227fcu: goto label_1227fc;
        case 0x122800u: goto label_122800;
        case 0x122804u: goto label_122804;
        case 0x122808u: goto label_122808;
        case 0x12280cu: goto label_12280c;
        case 0x122810u: goto label_122810;
        case 0x122814u: goto label_122814;
        case 0x122818u: goto label_122818;
        case 0x12281cu: goto label_12281c;
        case 0x122820u: goto label_122820;
        case 0x122824u: goto label_122824;
        case 0x122828u: goto label_122828;
        case 0x12282cu: goto label_12282c;
        case 0x122830u: goto label_122830;
        case 0x122834u: goto label_122834;
        case 0x122838u: goto label_122838;
        case 0x12283cu: goto label_12283c;
        case 0x122840u: goto label_122840;
        case 0x122844u: goto label_122844;
        case 0x122848u: goto label_122848;
        case 0x12284cu: goto label_12284c;
        case 0x122850u: goto label_122850;
        case 0x122854u: goto label_122854;
        case 0x122858u: goto label_122858;
        case 0x12285cu: goto label_12285c;
        case 0x122860u: goto label_122860;
        case 0x122864u: goto label_122864;
        case 0x122868u: goto label_122868;
        case 0x12286cu: goto label_12286c;
        case 0x122870u: goto label_122870;
        case 0x122874u: goto label_122874;
        case 0x122878u: goto label_122878;
        case 0x12287cu: goto label_12287c;
        case 0x122880u: goto label_122880;
        case 0x122884u: goto label_122884;
        case 0x122888u: goto label_122888;
        case 0x12288cu: goto label_12288c;
        case 0x122890u: goto label_122890;
        case 0x122894u: goto label_122894;
        case 0x122898u: goto label_122898;
        case 0x12289cu: goto label_12289c;
        case 0x1228a0u: goto label_1228a0;
        case 0x1228a4u: goto label_1228a4;
        case 0x1228a8u: goto label_1228a8;
        case 0x1228acu: goto label_1228ac;
        case 0x1228b0u: goto label_1228b0;
        case 0x1228b4u: goto label_1228b4;
        case 0x1228b8u: goto label_1228b8;
        case 0x1228bcu: goto label_1228bc;
        case 0x1228c0u: goto label_1228c0;
        case 0x1228c4u: goto label_1228c4;
        case 0x1228c8u: goto label_1228c8;
        case 0x1228ccu: goto label_1228cc;
        case 0x1228d0u: goto label_1228d0;
        case 0x1228d4u: goto label_1228d4;
        case 0x1228d8u: goto label_1228d8;
        case 0x1228dcu: goto label_1228dc;
        case 0x1228e0u: goto label_1228e0;
        case 0x1228e4u: goto label_1228e4;
        case 0x1228e8u: goto label_1228e8;
        case 0x1228ecu: goto label_1228ec;
        case 0x1228f0u: goto label_1228f0;
        case 0x1228f4u: goto label_1228f4;
        case 0x1228f8u: goto label_1228f8;
        case 0x1228fcu: goto label_1228fc;
        case 0x122900u: goto label_122900;
        case 0x122904u: goto label_122904;
        case 0x122908u: goto label_122908;
        case 0x12290cu: goto label_12290c;
        case 0x122910u: goto label_122910;
        case 0x122914u: goto label_122914;
        case 0x122918u: goto label_122918;
        case 0x12291cu: goto label_12291c;
        case 0x122920u: goto label_122920;
        case 0x122924u: goto label_122924;
        case 0x122928u: goto label_122928;
        case 0x12292cu: goto label_12292c;
        case 0x122930u: goto label_122930;
        case 0x122934u: goto label_122934;
        case 0x122938u: goto label_122938;
        case 0x12293cu: goto label_12293c;
        case 0x122940u: goto label_122940;
        case 0x122944u: goto label_122944;
        case 0x122948u: goto label_122948;
        case 0x12294cu: goto label_12294c;
        case 0x122950u: goto label_122950;
        case 0x122954u: goto label_122954;
        case 0x122958u: goto label_122958;
        case 0x12295cu: goto label_12295c;
        case 0x122960u: goto label_122960;
        case 0x122964u: goto label_122964;
        case 0x122968u: goto label_122968;
        case 0x12296cu: goto label_12296c;
        case 0x122970u: goto label_122970;
        case 0x122974u: goto label_122974;
        case 0x122978u: goto label_122978;
        case 0x12297cu: goto label_12297c;
        case 0x122980u: goto label_122980;
        case 0x122984u: goto label_122984;
        case 0x122988u: goto label_122988;
        case 0x12298cu: goto label_12298c;
        case 0x122990u: goto label_122990;
        case 0x122994u: goto label_122994;
        case 0x122998u: goto label_122998;
        case 0x12299cu: goto label_12299c;
        case 0x1229a0u: goto label_1229a0;
        case 0x1229a4u: goto label_1229a4;
        case 0x1229a8u: goto label_1229a8;
        case 0x1229acu: goto label_1229ac;
        case 0x1229b0u: goto label_1229b0;
        case 0x1229b4u: goto label_1229b4;
        default: break;
    }

    ctx->pc = 0x121af0u;

label_121af0:
    // 0x121af0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x121af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_121af4:
    // 0x121af4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_121af8:
    // 0x121af8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121afc:
    // 0x121afc: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x121afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_121b00:
    // 0x121b00: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x121b00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_121b04:
    // 0x121b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121b08:
    // 0x121b08: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x121b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_121b0c:
    // 0x121b0c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x121b0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_121b10:
    // 0x121b10: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x121b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_121b14:
    // 0x121b14: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_121b18:
    // 0x121b18: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x121b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_121b1c:
    // 0x121b1c: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x121b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_121b20:
    // 0x121b20: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x121b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_121b24:
    // 0x121b24: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x121b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_121b28:
    // 0x121b28: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x121b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_121b2c:
    // 0x121b2c: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x121b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_121b30:
    // 0x121b30: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x121b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_121b34:
    // 0x121b34: 0xe7b80200  swc1        $f24, 0x200($sp)
    ctx->pc = 0x121b34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_121b38:
    // 0x121b38: 0xe7b701f8  swc1        $f23, 0x1F8($sp)
    ctx->pc = 0x121b38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_121b3c:
    // 0x121b3c: 0xe7b601f0  swc1        $f22, 0x1F0($sp)
    ctx->pc = 0x121b3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_121b40:
    // 0x121b40: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x121b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_121b44:
    // 0x121b44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_121b48:
    // 0x121b48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x121b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_121b4c:
    // 0x121b4c: 0xc0682e8  jal         func_1A0BA0
label_121b50:
    if (ctx->pc == 0x121B50u) {
        ctx->pc = 0x121B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B4Cu;
        // 0x121b50: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B54u;
        goto label_121b54;
    }
    ctx->pc = 0x121B4Cu;
    SET_GPR_U32(ctx, 31, 0x121B54u);
    ctx->pc = 0x121B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B4Cu;
    // 0x121b50: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0BA0u, 0x121B4Cu, 0x121B54u)) {
        return;
    }
    ctx->pc = 0x121B54u;
label_121b54:
    // 0x121b54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121b58:
    // 0x121b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121b5c:
    // 0x121b5c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_121b60:
    if (ctx->pc == 0x121B60u) {
        ctx->pc = 0x121B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B5Cu;
        // 0x121b60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B64u;
        goto label_121b64;
    }
    ctx->pc = 0x121B5Cu;
    {
        const bool branch_taken_0x121b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x121B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B5Cu;
        // 0x121b60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b5c) {
            ctx->pc = 0x121B84u;
            goto label_121b84;
        }
    }
    ctx->pc = 0x121B64u;
label_121b64:
    // 0x121b64: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_121b68:
    if (ctx->pc == 0x121B68u) {
        ctx->pc = 0x121B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B64u;
        // 0x121b68: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B6Cu;
        goto label_121b6c;
    }
    ctx->pc = 0x121B64u;
    {
        const bool branch_taken_0x121b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121b64) {
            ctx->pc = 0x121B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B64u;
            // 0x121b68: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B94u;
            goto label_121b94;
        }
    }
    ctx->pc = 0x121B6Cu;
label_121b6c:
    // 0x121b6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121b70:
    // 0x121b70: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_121b74:
    if (ctx->pc == 0x121B74u) {
        ctx->pc = 0x121B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B70u;
        // 0x121b74: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B78u;
        goto label_121b78;
    }
    ctx->pc = 0x121B70u;
    {
        const bool branch_taken_0x121b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x121b70) {
            ctx->pc = 0x121B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B70u;
            // 0x121b74: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B94u;
            goto label_121b94;
        }
    }
    ctx->pc = 0x121B78u;
label_121b78:
    // 0x121b78: 0x8e220e50  lw          $v0, 0xE50($s1)
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3664)));
label_121b7c:
    // 0x121b7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_121b80:
    if (ctx->pc == 0x121B80u) {
        ctx->pc = 0x121B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B7Cu;
        // 0x121b80: 0xc6200e18  lwc1        $f0, 0xE18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B84u;
        goto label_121b84;
    }
    ctx->pc = 0x121B7Cu;
    {
        const bool branch_taken_0x121b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121b7c) {
            ctx->pc = 0x121B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B7Cu;
            // 0x121b80: 0xc6200e18  lwc1        $f0, 0xE18($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B90u;
            goto label_121b90;
        }
    }
    ctx->pc = 0x121B84u;
label_121b84:
    // 0x121b84: 0xc6200e14  lwc1        $f0, 0xE14($s1)
    ctx->pc = 0x121b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121b88:
    // 0x121b88: 0x10000002  b           . + 4 + (0x2 << 2)
label_121b8c:
    if (ctx->pc == 0x121B8Cu) {
        ctx->pc = 0x121B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B88u;
        // 0x121b8c: 0xe6200e1c  swc1        $f0, 0xE1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B90u;
        goto label_121b90;
    }
    ctx->pc = 0x121B88u;
    {
        const bool branch_taken_0x121b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B88u;
        // 0x121b8c: 0xe6200e1c  swc1        $f0, 0xE1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b88) {
            ctx->pc = 0x121B94u;
            goto label_121b94;
        }
    }
    ctx->pc = 0x121B90u;
label_121b90:
    // 0x121b90: 0xe6200e1c  swc1        $f0, 0xE1C($s1)
    ctx->pc = 0x121b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
label_121b94:
    // 0x121b94: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x121b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_121b98:
    // 0x121b98: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_121b9c:
    // 0x121b9c: 0xafb00130  sw          $s0, 0x130($sp)
    ctx->pc = 0x121b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 16));
label_121ba0:
    // 0x121ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121ba4:
    // 0x121ba4: 0xc068230  jal         func_1A08C0
label_121ba8:
    if (ctx->pc == 0x121BA8u) {
        ctx->pc = 0x121BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BA4u;
        // 0x121ba8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BACu;
        goto label_121bac;
    }
    ctx->pc = 0x121BA4u;
    SET_GPR_U32(ctx, 31, 0x121BACu);
    ctx->pc = 0x121BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BA4u;
    // 0x121ba8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A08C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A08C0u, 0x121BA4u, 0x121BACu)) {
        return;
    }
    ctx->pc = 0x121BACu;
label_121bac:
    // 0x121bac: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x121bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_121bb0:
    // 0x121bb0: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x121bb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_121bb4:
    // 0x121bb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_121bb8:
    // 0x121bb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_121bbc:
    if (ctx->pc == 0x121BBCu) {
        ctx->pc = 0x121BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BB8u;
        // 0x121bbc: 0x26220e30  addiu       $v0, $s1, 0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BC0u;
        goto label_121bc0;
    }
    ctx->pc = 0x121BB8u;
    {
        const bool branch_taken_0x121bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BB8u;
        // 0x121bbc: 0x26220e30  addiu       $v0, $s1, 0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bb8) {
            ctx->pc = 0x121BE8u;
            goto label_121be8;
        }
    }
    ctx->pc = 0x121BC0u;
label_121bc0:
    // 0x121bc0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121bc4:
    // 0x121bc4: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x121bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_121bc8:
    // 0x121bc8: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x121bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_121bcc:
    // 0x121bcc: 0x40f809  jalr        $v0
label_121bd0:
    if (ctx->pc == 0x121BD0u) {
        ctx->pc = 0x121BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BCCu;
        // 0x121bd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BD4u;
        goto label_121bd4;
    }
    ctx->pc = 0x121BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121BD4u);
        ctx->pc = 0x121BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BCCu;
        // 0x121bd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121BCCu, 0x121BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121BD4u;
label_121bd4:
    // 0x121bd4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x121bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_121bd8:
    // 0x121bd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121bdc:
    // 0x121bdc: 0xc06826e  jal         func_1A09B8
label_121be0:
    if (ctx->pc == 0x121BE0u) {
        ctx->pc = 0x121BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BDCu;
        // 0x121be0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BE4u;
        goto label_121be4;
    }
    ctx->pc = 0x121BDCu;
    SET_GPR_U32(ctx, 31, 0x121BE4u);
    ctx->pc = 0x121BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BDCu;
    // 0x121be0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A09B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A09B8u, 0x121BDCu, 0x121BE4u)) {
        return;
    }
    ctx->pc = 0x121BE4u;
label_121be4:
    // 0x121be4: 0x26220e30  addiu       $v0, $s1, 0xE30
    ctx->pc = 0x121be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3632));
label_121be8:
    // 0x121be8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x121be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_121bec:
    // 0x121bec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x121becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_121bf0:
    // 0x121bf0: 0xae200e30  sw          $zero, 0xE30($s1)
    ctx->pc = 0x121bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
label_121bf4:
    // 0x121bf4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121bf8:
    // 0x121bf8: 0x84440218  lh          $a0, 0x218($v0)
    ctx->pc = 0x121bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 536)));
label_121bfc:
    // 0x121bfc: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x121bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_121c00:
    // 0x121c00: 0x60f809  jalr        $v1
label_121c04:
    if (ctx->pc == 0x121C04u) {
        ctx->pc = 0x121C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C00u;
        // 0x121c04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C08u;
        goto label_121c08;
    }
    ctx->pc = 0x121C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121C08u);
        ctx->pc = 0x121C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C00u;
        // 0x121c04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C00u, 0x121C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C08u;
label_121c08:
    // 0x121c08: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121c0c:
    // 0x121c0c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x121c0cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_121c10:
    // 0x121c10: 0x84440220  lh          $a0, 0x220($v0)
    ctx->pc = 0x121c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
label_121c14:
    // 0x121c14: 0x8c430224  lw          $v1, 0x224($v0)
    ctx->pc = 0x121c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
label_121c18:
    // 0x121c18: 0x60f809  jalr        $v1
label_121c1c:
    if (ctx->pc == 0x121C1Cu) {
        ctx->pc = 0x121C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C18u;
        // 0x121c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C20u;
        goto label_121c20;
    }
    ctx->pc = 0x121C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121C20u);
        ctx->pc = 0x121C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C18u;
        // 0x121c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C18u, 0x121C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C20u;
label_121c20:
    // 0x121c20: 0x8e220c8c  lw          $v0, 0xC8C($s1)
    ctx->pc = 0x121c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
label_121c24:
    // 0x121c24: 0x6a230ce7  ldl         $v1, 0xCE7($s1)
    ctx->pc = 0x121c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_121c28:
    // 0x121c28: 0x6e230ce0  ldr         $v1, 0xCE0($s1)
    ctx->pc = 0x121c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_121c2c:
    // 0x121c2c: 0x8e240ce8  lw          $a0, 0xCE8($s1)
    ctx->pc = 0x121c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3304)));
label_121c30:
    // 0x121c30: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x121c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121c34:
    // 0x121c34: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x121c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121c38:
    // 0x121c38: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x121c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_121c3c:
    // 0x121c3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_121c40:
    if (ctx->pc == 0x121C40u) {
        ctx->pc = 0x121C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C3Cu;
        // 0x121c40: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C44u;
        goto label_121c44;
    }
    ctx->pc = 0x121C3Cu;
    {
        const bool branch_taken_0x121c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C3Cu;
        // 0x121c40: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c3c) {
            ctx->pc = 0x121C78u;
            goto label_121c78;
        }
    }
    ctx->pc = 0x121C44u;
label_121c44:
    // 0x121c44: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121c48:
    // 0x121c48: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x121c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_121c4c:
    // 0x121c4c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x121c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_121c50:
    // 0x121c50: 0x60f809  jalr        $v1
label_121c54:
    if (ctx->pc == 0x121C54u) {
        ctx->pc = 0x121C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C50u;
        // 0x121c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C58u;
        goto label_121c58;
    }
    ctx->pc = 0x121C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121C58u);
        ctx->pc = 0x121C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C50u;
        // 0x121c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C50u, 0x121C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C58u;
label_121c58:
    // 0x121c58: 0x1000000d  b           . + 4 + (0xD << 2)
label_121c5c:
    if (ctx->pc == 0x121C5Cu) {
        ctx->pc = 0x121C60u;
        goto label_121c60;
    }
    ctx->pc = 0x121C58u;
    {
        const bool branch_taken_0x121c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c58) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x121C60u;
label_121c60:
    // 0x121c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_121c64:
    // 0x121c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121c68:
    // 0x121c68: 0x0  nop
    ctx->pc = 0x121c68u;
    // NOP
label_121c6c:
    // 0x121c6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x121c6cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_121c70:
    // 0x121c70: 0x10000033  b           . + 4 + (0x33 << 2)
label_121c74:
    if (ctx->pc == 0x121C74u) {
        ctx->pc = 0x121C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C70u;
        // 0x121c74: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C78u;
        goto label_121c78;
    }
    ctx->pc = 0x121C70u;
    {
        const bool branch_taken_0x121c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C70u;
        // 0x121c74: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c70) {
            ctx->pc = 0x121D40u;
            goto label_121d40;
        }
    }
    ctx->pc = 0x121C78u;
label_121c78:
    // 0x121c78: 0x6a270ce7  ldl         $a3, 0xCE7($s1)
    ctx->pc = 0x121c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_121c7c:
    // 0x121c7c: 0x6e270ce0  ldr         $a3, 0xCE0($s1)
    ctx->pc = 0x121c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_121c80:
    // 0x121c80: 0x8e280ce8  lw          $t0, 0xCE8($s1)
    ctx->pc = 0x121c80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3304)));
label_121c84:
    // 0x121c84: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x121c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121c88:
    // 0x121c88: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x121c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121c8c:
    // 0x121c8c: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x121c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_121c90:
    // 0x121c90: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x121c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_121c94:
    // 0x121c94: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x121c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_121c98:
    // 0x121c98: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x121c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_121c9c:
    // 0x121c9c: 0xb2240ce7  sdl         $a0, 0xCE7($s1)
    ctx->pc = 0x121c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121ca0:
    // 0x121ca0: 0xb6240ce0  sdr         $a0, 0xCE0($s1)
    ctx->pc = 0x121ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121ca4:
    // 0x121ca4: 0xae250ce8  sw          $a1, 0xCE8($s1)
    ctx->pc = 0x121ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 5));
label_121ca8:
    // 0x121ca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121cac:
    // 0x121cac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x121cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_121cb0:
    // 0x121cb0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_121cb4:
    // 0x121cb4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x121cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_121cb8:
    // 0x121cb8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x121cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_121cbc:
    // 0x121cbc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x121cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_121cc0:
    // 0x121cc0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x121cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_121cc4:
    // 0x121cc4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_121cc8:
    if (ctx->pc == 0x121CC8u) {
        ctx->pc = 0x121CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CC4u;
        // 0x121cc8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121CCCu;
        goto label_121ccc;
    }
    ctx->pc = 0x121CC4u;
    {
        const bool branch_taken_0x121cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x121CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CC4u;
        // 0x121cc8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cc4) {
            ctx->pc = 0x121CF0u;
            goto label_121cf0;
        }
    }
    ctx->pc = 0x121CCCu;
label_121ccc:
    // 0x121ccc: 0x4600c045  abs.s       $f1, $f24
    ctx->pc = 0x121cccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[24]);
label_121cd0:
    // 0x121cd0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x121cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_121cd4:
    // 0x121cd4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x121cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_121cd8:
    // 0x121cd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121cdc:
    // 0x121cdc: 0x0  nop
    ctx->pc = 0x121cdcu;
    // NOP
label_121ce0:
    // 0x121ce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121ce4:
    // 0x121ce4: 0x0  nop
    ctx->pc = 0x121ce4u;
    // NOP
label_121ce8:
    // 0x121ce8: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_121cec:
    if (ctx->pc == 0x121CECu) {
        ctx->pc = 0x121CF0u;
        goto label_121cf0;
    }
    ctx->pc = 0x121CE8u;
    {
        const bool branch_taken_0x121ce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121ce8) {
            ctx->pc = 0x121DB8u;
            goto label_121db8;
        }
    }
    ctx->pc = 0x121CF0u;
label_121cf0:
    // 0x121cf0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x121cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_121cf4:
    // 0x121cf4: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x121cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_121cf8:
    // 0x121cf8: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x121cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_121cfc:
    // 0x121cfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x121cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_121d00:
    // 0x121d00: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x121d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121d04:
    // 0x121d04: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x121d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121d08:
    // 0x121d08: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x121d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_121d0c:
    // 0x121d0c: 0xc04642c  jal         func_1190B0
label_121d10:
    if (ctx->pc == 0x121D10u) {
        ctx->pc = 0x121D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D0Cu;
        // 0x121d10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D14u;
        goto label_121d14;
    }
    ctx->pc = 0x121D0Cu;
    SET_GPR_U32(ctx, 31, 0x121D14u);
    ctx->pc = 0x121D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D0Cu;
    // 0x121d10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x121D0Cu, 0x121D14u)) {
        return;
    }
    ctx->pc = 0x121D14u;
label_121d14:
    // 0x121d14: 0x0  nop
    ctx->pc = 0x121d14u;
    // NOP
label_121d18:
    // 0x121d18: 0x0  nop
    ctx->pc = 0x121d18u;
    // NOP
label_121d1c:
    // 0x121d1c: 0x46000044  c1          0x44
    ctx->pc = 0x121d1cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_121d20:
    // 0x121d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121d24:
    // 0x121d24: 0x0  nop
    ctx->pc = 0x121d24u;
    // NOP
label_121d28:
    // 0x121d28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121d2c:
    // 0x121d2c: 0x0  nop
    ctx->pc = 0x121d2cu;
    // NOP
label_121d30:
    // 0x121d30: 0x4501ffcb  bc1t        . + 4 + (-0x35 << 2)
label_121d34:
    if (ctx->pc == 0x121D34u) {
        ctx->pc = 0x121D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D30u;
        // 0x121d34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D38u;
        goto label_121d38;
    }
    ctx->pc = 0x121D30u;
    {
        const bool branch_taken_0x121d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x121D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D30u;
        // 0x121d34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d30) {
            ctx->pc = 0x121C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121c60;
        }
    }
    ctx->pc = 0x121D38u;
label_121d38:
    // 0x121d38: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x121d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121d3c:
    // 0x121d3c: 0x0  nop
    ctx->pc = 0x121d3cu;
    // NOP
label_121d40:
    // 0x121d40: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x121d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_121d44:
    // 0x121d44: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x121d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_121d48:
    // 0x121d48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x121d48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_121d4c:
    // 0x121d4c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x121d4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_121d50:
    // 0x121d50: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x121d50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_121d54:
    // 0x121d54: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x121d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_121d58:
    // 0x121d58: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x121d58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_121d5c:
    // 0x121d5c: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x121d5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_121d60:
    // 0x121d60: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x121d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_121d64:
    // 0x121d64: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x121d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_121d68:
    // 0x121d68: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x121d68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_121d6c:
    // 0x121d6c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x121d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121d70:
    // 0x121d70: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x121d70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_121d74:
    // 0x121d74: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x121d74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_121d78:
    // 0x121d78: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x121d78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_121d7c:
    // 0x121d7c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x121d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_121d80:
    // 0x121d80: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x121d80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_121d84:
    // 0x121d84: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x121d84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_121d88:
    // 0x121d88: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x121d88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_121d8c:
    // 0x121d8c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x121d8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_121d90:
    // 0x121d90: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x121d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_121d94:
    // 0x121d94: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x121d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_121d98:
    // 0x121d98: 0x1000001f  b           . + 4 + (0x1F << 2)
label_121d9c:
    if (ctx->pc == 0x121D9Cu) {
        ctx->pc = 0x121D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D98u;
        // 0x121d9c: 0xe7a30040  swc1        $f3, 0x40($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DA0u;
        goto label_121da0;
    }
    ctx->pc = 0x121D98u;
    {
        const bool branch_taken_0x121d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D98u;
        // 0x121d9c: 0xe7a30040  swc1        $f3, 0x40($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d98) {
            ctx->pc = 0x121E18u;
            goto label_121e18;
        }
    }
    ctx->pc = 0x121DA0u;
label_121da0:
    // 0x121da0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_121da4:
    // 0x121da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121da8:
    // 0x121da8: 0x0  nop
    ctx->pc = 0x121da8u;
    // NOP
label_121dac:
    // 0x121dac: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x121dacu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_121db0:
    // 0x121db0: 0x10000027  b           . + 4 + (0x27 << 2)
label_121db4:
    if (ctx->pc == 0x121DB4u) {
        ctx->pc = 0x121DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DB0u;
        // 0x121db4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DB8u;
        goto label_121db8;
    }
    ctx->pc = 0x121DB0u;
    {
        const bool branch_taken_0x121db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DB0u;
        // 0x121db4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121db0) {
            ctx->pc = 0x121E50u;
            goto label_121e50;
        }
    }
    ctx->pc = 0x121DB8u;
label_121db8:
    // 0x121db8: 0x6a260cf7  ldl         $a2, 0xCF7($s1)
    ctx->pc = 0x121db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_121dbc:
    // 0x121dbc: 0x6e260cf0  ldr         $a2, 0xCF0($s1)
    ctx->pc = 0x121dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_121dc0:
    // 0x121dc0: 0x8e270cf8  lw          $a3, 0xCF8($s1)
    ctx->pc = 0x121dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3320)));
label_121dc4:
    // 0x121dc4: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x121dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121dc8:
    // 0x121dc8: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x121dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121dcc:
    // 0x121dcc: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x121dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_121dd0:
    // 0x121dd0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x121dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_121dd4:
    // 0x121dd4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x121dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121dd8:
    // 0x121dd8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x121dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121ddc:
    // 0x121ddc: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x121ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_121de0:
    // 0x121de0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x121de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121de4:
    // 0x121de4: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x121de4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_121de8:
    // 0x121de8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x121de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_121dec:
    // 0x121dec: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x121decu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_121df0:
    // 0x121df0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x121df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_121df4:
    // 0x121df4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x121df4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_121df8:
    // 0x121df8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x121df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_121dfc:
    // 0x121dfc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x121dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_121e00:
    // 0x121e00: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x121e00u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_121e04:
    // 0x121e04: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x121e04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_121e08:
    // 0x121e08: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x121e08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_121e0c:
    // 0x121e0c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x121e0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_121e10:
    // 0x121e10: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x121e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_121e14:
    // 0x121e14: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x121e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_121e18:
    // 0x121e18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_121e1c:
    // 0x121e1c: 0xc04642c  jal         func_1190B0
label_121e20:
    if (ctx->pc == 0x121E20u) {
        ctx->pc = 0x121E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E1Cu;
        // 0x121e20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E24u;
        goto label_121e24;
    }
    ctx->pc = 0x121E1Cu;
    SET_GPR_U32(ctx, 31, 0x121E24u);
    ctx->pc = 0x121E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E1Cu;
    // 0x121e20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x121E1Cu, 0x121E24u)) {
        return;
    }
    ctx->pc = 0x121E24u;
label_121e24:
    // 0x121e24: 0x0  nop
    ctx->pc = 0x121e24u;
    // NOP
label_121e28:
    // 0x121e28: 0x0  nop
    ctx->pc = 0x121e28u;
    // NOP
label_121e2c:
    // 0x121e2c: 0x46000044  c1          0x44
    ctx->pc = 0x121e2cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_121e30:
    // 0x121e30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121e34:
    // 0x121e34: 0x0  nop
    ctx->pc = 0x121e34u;
    // NOP
label_121e38:
    // 0x121e38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121e3c:
    // 0x121e3c: 0x0  nop
    ctx->pc = 0x121e3cu;
    // NOP
label_121e40:
    // 0x121e40: 0x4501ffd7  bc1t        . + 4 + (-0x29 << 2)
label_121e44:
    if (ctx->pc == 0x121E44u) {
        ctx->pc = 0x121E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E40u;
        // 0x121e44: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E48u;
        goto label_121e48;
    }
    ctx->pc = 0x121E40u;
    {
        const bool branch_taken_0x121e40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x121E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E40u;
        // 0x121e44: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e40) {
            ctx->pc = 0x121DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121da0;
        }
    }
    ctx->pc = 0x121E48u;
label_121e48:
    // 0x121e48: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x121e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121e4c:
    // 0x121e4c: 0x0  nop
    ctx->pc = 0x121e4cu;
    // NOP
label_121e50:
    // 0x121e50: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x121e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121e54:
    // 0x121e54: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x121e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121e58:
    // 0x121e58: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x121e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_121e5c:
    // 0x121e5c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x121e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_121e60:
    // 0x121e60: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x121e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_121e64:
    // 0x121e64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x121e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_121e68:
    // 0x121e68: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x121e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_121e6c:
    // 0x121e6c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x121e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_121e70:
    // 0x121e70: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_121e74:
    // 0x121e74: 0x8c62083c  lw          $v0, 0x83C($v1)
    ctx->pc = 0x121e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2108)));
label_121e78:
    // 0x121e78: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x121e78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_121e7c:
    // 0x121e7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_121e80:
    // 0x121e80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_121e84:
    if (ctx->pc == 0x121E84u) {
        ctx->pc = 0x121E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E80u;
        // 0x121e84: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E88u;
        goto label_121e88;
    }
    ctx->pc = 0x121E80u;
    {
        const bool branch_taken_0x121e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E80u;
        // 0x121e84: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e80) {
            ctx->pc = 0x121EA8u;
            goto label_121ea8;
        }
    }
    ctx->pc = 0x121E88u;
label_121e88:
    // 0x121e88: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121e8c:
    // 0x121e8c: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_121e90:
    // 0x121e90: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x121e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_121e94:
    // 0x121e94: 0x60f809  jalr        $v1
label_121e98:
    if (ctx->pc == 0x121E98u) {
        ctx->pc = 0x121E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E94u;
        // 0x121e98: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E9Cu;
        goto label_121e9c;
    }
    ctx->pc = 0x121E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121E9Cu);
        ctx->pc = 0x121E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E94u;
        // 0x121e98: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E94u, 0x121E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E9Cu;
label_121e9c:
    // 0x121e9c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x121e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_121ea0:
    // 0x121ea0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x121ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_121ea4:
    // 0x121ea4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x121ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_121ea8:
    // 0x121ea8: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x121ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_121eac:
    // 0x121eac: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x121eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_121eb0:
    // 0x121eb0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x121eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_121eb4:
    // 0x121eb4: 0xb2240cf7  sdl         $a0, 0xCF7($s1)
    ctx->pc = 0x121eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121eb8:
    // 0x121eb8: 0xb6240cf0  sdr         $a0, 0xCF0($s1)
    ctx->pc = 0x121eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121ebc:
    // 0x121ebc: 0xae250cf8  sw          $a1, 0xCF8($s1)
    ctx->pc = 0x121ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3320), GPR_U32(ctx, 5));
label_121ec0:
    // 0x121ec0: 0x26280d24  addiu       $t0, $s1, 0xD24
    ctx->pc = 0x121ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 3364));
label_121ec4:
    // 0x121ec4: 0xafa80134  sw          $t0, 0x134($sp)
    ctx->pc = 0x121ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 8));
label_121ec8:
    // 0x121ec8: 0x8e220c00  lw          $v0, 0xC00($s1)
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3072)));
label_121ecc:
    // 0x121ecc: 0x104002a5  beqz        $v0, . + 4 + (0x2A5 << 2)
label_121ed0:
    if (ctx->pc == 0x121ED0u) {
        ctx->pc = 0x121ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ECCu;
        // 0x121ed0: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121ED4u;
        goto label_121ed4;
    }
    ctx->pc = 0x121ECCu;
    {
        const bool branch_taken_0x121ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ECCu;
        // 0x121ed0: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ecc) {
            ctx->pc = 0x122964u;
            goto label_122964;
        }
    }
    ctx->pc = 0x121ED4u;
label_121ed4:
    // 0x121ed4: 0x8e220cdc  lw          $v0, 0xCDC($s1)
    ctx->pc = 0x121ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
label_121ed8:
    // 0x121ed8: 0x104002a3  beqz        $v0, . + 4 + (0x2A3 << 2)
label_121edc:
    if (ctx->pc == 0x121EDCu) {
        ctx->pc = 0x121EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED8u;
        // 0x121edc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EE0u;
        goto label_121ee0;
    }
    ctx->pc = 0x121ED8u;
    {
        const bool branch_taken_0x121ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED8u;
        // 0x121edc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ed8) {
            ctx->pc = 0x122968u;
            goto label_122968;
        }
    }
    ctx->pc = 0x121EE0u;
label_121ee0:
    // 0x121ee0: 0x4600c005  abs.s       $f0, $f24
    ctx->pc = 0x121ee0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[24]);
label_121ee4:
    // 0x121ee4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x121ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_121ee8:
    // 0x121ee8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x121ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_121eec:
    // 0x121eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_121ef0:
    // 0x121ef0: 0x0  nop
    ctx->pc = 0x121ef0u;
    // NOP
label_121ef4:
    // 0x121ef4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121ef8:
    // 0x121ef8: 0x0  nop
    ctx->pc = 0x121ef8u;
    // NOP
label_121efc:
    // 0x121efc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_121f00:
    if (ctx->pc == 0x121F00u) {
        ctx->pc = 0x121F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EFCu;
        // 0x121f00: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F04u;
        goto label_121f04;
    }
    ctx->pc = 0x121EFCu;
    {
        const bool branch_taken_0x121efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EFCu;
        // 0x121f00: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121efc) {
            ctx->pc = 0x121F08u;
            goto label_121f08;
        }
    }
    ctx->pc = 0x121F04u;
label_121f04:
    // 0x121f04: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x121f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_121f08:
    // 0x121f08: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x121f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_121f0c:
    // 0x121f0c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x121f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_121f10:
    // 0x121f10: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x121f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_121f14:
    // 0x121f14: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x121f14u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_121f18:
    // 0x121f18: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x121f18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_121f1c:
    // 0x121f1c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x121f1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_121f20:
    // 0x121f20: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x121f20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_121f24:
    // 0x121f24: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x121f24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_121f28:
    // 0x121f28: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x121f28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_121f2c:
    // 0x121f2c: 0xc7a90040  lwc1        $f9, 0x40($sp)
    ctx->pc = 0x121f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_121f30:
    // 0x121f30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x121f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121f34:
    // 0x121f34: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x121f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_121f38:
    // 0x121f38: 0xc7a80048  lwc1        $f8, 0x48($sp)
    ctx->pc = 0x121f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_121f3c:
    // 0x121f3c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x121f3cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_121f40:
    // 0x121f40: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x121f40u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_121f44:
    // 0x121f44: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x121f44u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_121f48:
    // 0x121f48: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x121f48u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_121f4c:
    // 0x121f4c: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x121f4cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_121f50:
    // 0x121f50: 0xe7a80068  swc1        $f8, 0x68($sp)
    ctx->pc = 0x121f50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_121f54:
    // 0x121f54: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x121f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_121f58:
    // 0x121f58: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x121f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121f5c:
    // 0x121f5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x121f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121f60:
    // 0x121f60: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x121f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121f64:
    // 0x121f64: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x121f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_121f68:
    // 0x121f68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x121f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_121f6c:
    // 0x121f6c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x121f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_121f70:
    // 0x121f70: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x121f70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_121f74:
    // 0x121f74: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x121f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_121f78:
    // 0x121f78: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x121f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_121f7c:
    // 0x121f7c: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x121f7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
label_121f80:
    // 0x121f80: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x121f80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_121f84:
    // 0x121f84: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x121f84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
label_121f88:
    // 0x121f88: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x121f88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_121f8c:
    // 0x121f8c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x121f8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_121f90:
    // 0x121f90: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x121f90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_121f94:
    // 0x121f94: 0xe6240e34  swc1        $f4, 0xE34($s1)
    ctx->pc = 0x121f94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3636), bits); }
label_121f98:
    // 0x121f98: 0xc6200e80  lwc1        $f0, 0xE80($s1)
    ctx->pc = 0x121f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121f9c:
    // 0x121f9c: 0xc6210300  lwc1        $f1, 0x300($s1)
    ctx->pc = 0x121f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121fa0:
    // 0x121fa0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x121fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121fa4:
    // 0x121fa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x121fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_121fa8:
    // 0x121fa8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x121fa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_121fac:
    // 0x121fac: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x121facu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_121fb0:
    // 0x121fb0: 0xe6250e38  swc1        $f5, 0xE38($s1)
    ctx->pc = 0x121fb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3640), bits); }
label_121fb4:
    // 0x121fb4: 0xe6260e30  swc1        $f6, 0xE30($s1)
    ctx->pc = 0x121fb4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3632), bits); }
label_121fb8:
    // 0x121fb8: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x121fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_121fbc:
    // 0x121fbc: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x121fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_121fc0:
    // 0x121fc0: 0x40f809  jalr        $v0
label_121fc4:
    if (ctx->pc == 0x121FC4u) {
        ctx->pc = 0x121FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FC0u;
        // 0x121fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FC8u;
        goto label_121fc8;
    }
    ctx->pc = 0x121FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121FC8u);
        ctx->pc = 0x121FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FC0u;
        // 0x121fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FC0u, 0x121FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121FC8u;
label_121fc8:
    // 0x121fc8: 0xc6210e30  lwc1        $f1, 0xE30($s1)
    ctx->pc = 0x121fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121fcc:
    // 0x121fcc: 0xc6220e34  lwc1        $f2, 0xE34($s1)
    ctx->pc = 0x121fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121fd0:
    // 0x121fd0: 0xc6230e1c  lwc1        $f3, 0xE1C($s1)
    ctx->pc = 0x121fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_121fd4:
    // 0x121fd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x121fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_121fd8:
    // 0x121fd8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x121fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_121fdc:
    // 0x121fdc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x121fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_121fe0:
    // 0x121fe0: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x121fe0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121fe4:
    // 0x121fe4: 0xe6210e30  swc1        $f1, 0xE30($s1)
    ctx->pc = 0x121fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3632), bits); }
label_121fe8:
    // 0x121fe8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_121fec:
    if (ctx->pc == 0x121FECu) {
        ctx->pc = 0x121FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FE8u;
        // 0x121fec: 0xe6220e34  swc1        $f2, 0xE34($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3636), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FF0u;
        goto label_121ff0;
    }
    ctx->pc = 0x121FE8u;
    {
        const bool branch_taken_0x121fe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x121FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FE8u;
        // 0x121fec: 0xe6220e34  swc1        $f2, 0xE34($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fe8) {
            ctx->pc = 0x122008u;
            goto label_122008;
        }
    }
    ctx->pc = 0x121FF0u;
label_121ff0:
    // 0x121ff0: 0x46151802  mul.s       $f0, $f3, $f21
    ctx->pc = 0x121ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_121ff4:
    // 0x121ff4: 0xc6210e20  lwc1        $f1, 0xE20($s1)
    ctx->pc = 0x121ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121ff8:
    // 0x121ff8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x121ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_121ffc:
    // 0x121ffc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x121ffcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_122000:
    // 0x122000: 0xe6210e20  swc1        $f1, 0xE20($s1)
    ctx->pc = 0x122000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3616), bits); }
label_122004:
    // 0x122004: 0xe6220e34  swc1        $f2, 0xE34($s1)
    ctx->pc = 0x122004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3636), bits); }
label_122008:
    // 0x122008: 0x8e220e58  lw          $v0, 0xE58($s1)
    ctx->pc = 0x122008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3672)));
label_12200c:
    // 0x12200c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_122010:
    if (ctx->pc == 0x122010u) {
        ctx->pc = 0x122014u;
        goto label_122014;
    }
    ctx->pc = 0x12200Cu;
    {
        const bool branch_taken_0x12200c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12200c) {
            ctx->pc = 0x122030u;
            goto label_122030;
        }
    }
    ctx->pc = 0x122014u;
label_122014:
    // 0x122014: 0xc6200e34  lwc1        $f0, 0xE34($s1)
    ctx->pc = 0x122014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122018:
    // 0x122018: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x122018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12201c:
    // 0x12201c: 0x0  nop
    ctx->pc = 0x12201cu;
    // NOP
label_122020:
    // 0x122020: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_122024:
    if (ctx->pc == 0x122024u) {
        ctx->pc = 0x122024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122020u;
        // 0x122024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122028u;
        goto label_122028;
    }
    ctx->pc = 0x122020u;
    {
        const bool branch_taken_0x122020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122020u;
        // 0x122024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122020) {
            ctx->pc = 0x122030u;
            goto label_122030;
        }
    }
    ctx->pc = 0x122028u;
label_122028:
    // 0x122028: 0xae200e58  sw          $zero, 0xE58($s1)
    ctx->pc = 0x122028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3672), GPR_U32(ctx, 0));
label_12202c:
    // 0x12202c: 0xae220e5c  sw          $v0, 0xE5C($s1)
    ctx->pc = 0x12202cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3676), GPR_U32(ctx, 2));
label_122030:
    // 0x122030: 0x6a220e37  ldl         $v0, 0xE37($s1)
    ctx->pc = 0x122030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3639); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_122034:
    // 0x122034: 0x6e220e30  ldr         $v0, 0xE30($s1)
    ctx->pc = 0x122034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_122038:
    // 0x122038: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_12203c:
    // 0x12203c: 0xb2220e47  sdl         $v0, 0xE47($s1)
    ctx->pc = 0x12203cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122040:
    // 0x122040: 0xb6220e40  sdr         $v0, 0xE40($s1)
    ctx->pc = 0x122040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122044:
    // 0x122044: 0xae230e48  sw          $v1, 0xE48($s1)
    ctx->pc = 0x122044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3656), GPR_U32(ctx, 3));
label_122048:
    // 0x122048: 0x26220e40  addiu       $v0, $s1, 0xE40
    ctx->pc = 0x122048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3648));
label_12204c:
    // 0x12204c: 0xc6200e40  lwc1        $f0, 0xE40($s1)
    ctx->pc = 0x12204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122050:
    // 0x122050: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x122050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_122054:
    // 0x122054: 0xe6200e40  swc1        $f0, 0xE40($s1)
    ctx->pc = 0x122054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
label_122058:
    // 0x122058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x122058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12205c:
    // 0x12205c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122060:
    // 0x122060: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x122060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_122064:
    // 0x122064: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x122064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_122068:
    // 0x122068: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x122068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12206c:
    // 0x12206c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_122070:
    // 0x122070: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x122070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_122074:
    // 0x122074: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_122078:
    // 0x122078: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x122078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12207c:
    // 0x12207c: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x12207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_122080:
    // 0x122080: 0x40f809  jalr        $v0
label_122084:
    if (ctx->pc == 0x122084u) {
        ctx->pc = 0x122084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122080u;
        // 0x122084: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122088u;
        goto label_122088;
    }
    ctx->pc = 0x122080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122088u);
        ctx->pc = 0x122084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122080u;
        // 0x122084: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122080u, 0x122088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122088u;
label_122088:
    // 0x122088: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_12208c:
    if (ctx->pc == 0x12208Cu) {
        ctx->pc = 0x12208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122088u;
        // 0x12208c: 0x8e230180  lw          $v1, 0x180($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122090u;
        goto label_122090;
    }
    ctx->pc = 0x122088u;
    {
        const bool branch_taken_0x122088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122088) {
            ctx->pc = 0x12208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122088u;
            // 0x12208c: 0x8e230180  lw          $v1, 0x180($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1220A0u;
            goto label_1220a0;
        }
    }
    ctx->pc = 0x122090u;
label_122090:
    // 0x122090: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x122090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_122094:
    // 0x122094: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x122094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_122098:
    // 0x122098: 0xae200e40  sw          $zero, 0xE40($s1)
    ctx->pc = 0x122098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3648), GPR_U32(ctx, 0));
label_12209c:
    // 0x12209c: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x12209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1220a0:
    // 0x1220a0: 0x6a2601f7  ldl         $a2, 0x1F7($s1)
    ctx->pc = 0x1220a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1220a4:
    // 0x1220a4: 0x6e2601f0  ldr         $a2, 0x1F0($s1)
    ctx->pc = 0x1220a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1220a8:
    // 0x1220a8: 0x8e2701f8  lw          $a3, 0x1F8($s1)
    ctx->pc = 0x1220a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_1220ac:
    // 0x1220ac: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x1220acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1220b0:
    // 0x1220b0: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x1220b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1220b4:
    // 0x1220b4: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x1220b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
label_1220b8:
    // 0x1220b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1220b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1220bc:
    // 0x1220bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1220c0:
    if (ctx->pc == 0x1220C0u) {
        ctx->pc = 0x1220C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220BCu;
        // 0x1220c0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1220C4u;
        goto label_1220c4;
    }
    ctx->pc = 0x1220BCu;
    {
        const bool branch_taken_0x1220bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220BCu;
        // 0x1220c0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220bc) {
            ctx->pc = 0x122114u;
            goto label_122114;
        }
    }
    ctx->pc = 0x1220C4u;
label_1220c4:
    // 0x1220c4: 0x6a2302c7  ldl         $v1, 0x2C7($s1)
    ctx->pc = 0x1220c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1220c8:
    // 0x1220c8: 0x6e2302c0  ldr         $v1, 0x2C0($s1)
    ctx->pc = 0x1220c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1220cc:
    // 0x1220cc: 0x8e2402c8  lw          $a0, 0x2C8($s1)
    ctx->pc = 0x1220ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_1220d0:
    // 0x1220d0: 0xb3a30097  sdl         $v1, 0x97($sp)
    ctx->pc = 0x1220d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1220d4:
    // 0x1220d4: 0xb7a30090  sdr         $v1, 0x90($sp)
    ctx->pc = 0x1220d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1220d8:
    // 0x1220d8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1220d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_1220dc:
    // 0x1220dc: 0x6a2702d7  ldl         $a3, 0x2D7($s1)
    ctx->pc = 0x1220dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1220e0:
    // 0x1220e0: 0x6e2702d0  ldr         $a3, 0x2D0($s1)
    ctx->pc = 0x1220e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1220e4:
    // 0x1220e4: 0x8e2802d8  lw          $t0, 0x2D8($s1)
    ctx->pc = 0x1220e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_1220e8:
    // 0x1220e8: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x1220e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1220ec:
    // 0x1220ec: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x1220ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1220f0:
    // 0x1220f0: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x1220f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
label_1220f4:
    // 0x1220f4: 0x6a2402e7  ldl         $a0, 0x2E7($s1)
    ctx->pc = 0x1220f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1220f8:
    // 0x1220f8: 0x6e2402e0  ldr         $a0, 0x2E0($s1)
    ctx->pc = 0x1220f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1220fc:
    // 0x1220fc: 0x8e2502e8  lw          $a1, 0x2E8($s1)
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
label_122100:
    // 0x122100: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x122100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122104:
    // 0x122104: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x122104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122108:
    // 0x122108: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x122108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_12210c:
    // 0x12210c: 0x1000000a  b           . + 4 + (0xA << 2)
label_122110:
    if (ctx->pc == 0x122110u) {
        ctx->pc = 0x122110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12210Cu;
        // 0x122110: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122114u;
        goto label_122114;
    }
    ctx->pc = 0x12210Cu;
    {
        const bool branch_taken_0x12210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12210Cu;
        // 0x122110: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12210c) {
            ctx->pc = 0x122138u;
            goto label_122138;
        }
    }
    ctx->pc = 0x122114u;
label_122114:
    // 0x122114: 0xc04f0d8  jal         func_13C360
label_122118:
    if (ctx->pc == 0x122118u) {
        ctx->pc = 0x122118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122114u;
        // 0x122118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12211Cu;
        goto label_12211c;
    }
    ctx->pc = 0x122114u;
    SET_GPR_U32(ctx, 31, 0x12211Cu);
    ctx->pc = 0x122118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122114u;
    // 0x122118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C360u, 0x122114u, 0x12211Cu)) {
        return;
    }
    ctx->pc = 0x12211Cu;
label_12211c:
    // 0x12211c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122120:
    // 0x122120: 0xc04f0e6  jal         func_13C398
label_122124:
    if (ctx->pc == 0x122124u) {
        ctx->pc = 0x122124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122120u;
        // 0x122124: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122128u;
        goto label_122128;
    }
    ctx->pc = 0x122120u;
    SET_GPR_U32(ctx, 31, 0x122128u);
    ctx->pc = 0x122124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122120u;
    // 0x122124: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C398u, 0x122120u, 0x122128u)) {
        return;
    }
    ctx->pc = 0x122128u;
label_122128:
    // 0x122128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12212c:
    // 0x12212c: 0xc04f0f4  jal         func_13C3D0
label_122130:
    if (ctx->pc == 0x122130u) {
        ctx->pc = 0x122130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12212Cu;
        // 0x122130: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122134u;
        goto label_122134;
    }
    ctx->pc = 0x12212Cu;
    SET_GPR_U32(ctx, 31, 0x122134u);
    ctx->pc = 0x122130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12212Cu;
    // 0x122130: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x12212Cu, 0x122134u)) {
        return;
    }
    ctx->pc = 0x122134u;
label_122134:
    // 0x122134: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x122134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122138:
    // 0x122138: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x122138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12213c:
    // 0x12213c: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x12213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_122140:
    // 0x122140: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x122140u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_122144:
    // 0x122144: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x122144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_122148:
    // 0x122148: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x122148u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_12214c:
    // 0x12214c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x12214cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_122150:
    // 0x122150: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x122150u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_122154:
    // 0x122154: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x122154u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_122158:
    // 0x122158: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x122158u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_12215c:
    // 0x12215c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x12215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122160:
    // 0x122160: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x122160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_122164:
    // 0x122164: 0xc7a800a4  lwc1        $f8, 0xA4($sp)
    ctx->pc = 0x122164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_122168:
    // 0x122168: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x122168u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_12216c:
    // 0x12216c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x12216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122170:
    // 0x122170: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x122170u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_122174:
    // 0x122174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_122178:
    // 0x122178: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x122178u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_12217c:
    // 0x12217c: 0xe7a800a4  swc1        $f8, 0xA4($sp)
    ctx->pc = 0x12217cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_122180:
    // 0x122180: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x122180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_122184:
    // 0x122184: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x122184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122188:
    // 0x122188: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x122188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12218c:
    // 0x12218c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x12218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122190:
    // 0x122190: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x122190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_122194:
    // 0x122194: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x122194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122198:
    // 0x122198: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x122198u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12219c:
    // 0x12219c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12219cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1221a0:
    // 0x1221a0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1221a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1221a4:
    // 0x1221a4: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x1221a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1221a8:
    // 0x1221a8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1221a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1221ac:
    // 0x1221ac: 0xc6200e40  lwc1        $f0, 0xE40($s1)
    ctx->pc = 0x1221acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1221b0:
    // 0x1221b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1221b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1221b4:
    // 0x1221b4: 0xe6200e40  swc1        $f0, 0xE40($s1)
    ctx->pc = 0x1221b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
label_1221b8:
    // 0x1221b8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1221b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1221bc:
    // 0x1221bc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1221bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1221c0:
    // 0x1221c0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1221c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_1221c4:
    // 0x1221c4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1221c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1221c8:
    // 0x1221c8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1221c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1221cc:
    // 0x1221cc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1221ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1221d0:
    // 0x1221d0: 0x26220e40  addiu       $v0, $s1, 0xE40
    ctx->pc = 0x1221d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3648));
label_1221d4:
    // 0x1221d4: 0xc6200e40  lwc1        $f0, 0xE40($s1)
    ctx->pc = 0x1221d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1221d8:
    // 0x1221d8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1221d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1221dc:
    // 0x1221dc: 0xe6200e40  swc1        $f0, 0xE40($s1)
    ctx->pc = 0x1221dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
label_1221e0:
    // 0x1221e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1221e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1221e4:
    // 0x1221e4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1221e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1221e8:
    // 0x1221e8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1221e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_1221ec:
    // 0x1221ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1221ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1221f0:
    // 0x1221f0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1221f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1221f4:
    // 0x1221f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1221f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1221f8:
    // 0x1221f8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1221f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1221fc:
    // 0x1221fc: 0xc6210e40  lwc1        $f1, 0xE40($s1)
    ctx->pc = 0x1221fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122200:
    // 0x122200: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x122200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122204:
    // 0x122204: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x122204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122208:
    // 0x122208: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x122208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12220c:
    // 0x12220c: 0xe6210e40  swc1        $f1, 0xE40($s1)
    ctx->pc = 0x12220cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
label_122210:
    // 0x122210: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x122210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122214:
    // 0x122214: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x122214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122218:
    // 0x122218: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x122218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_12221c:
    // 0x12221c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_122220:
    // 0x122220: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x122220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122224:
    // 0x122224: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x122224u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_122228:
    // 0x122228: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x122228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12222c:
    // 0x12222c: 0xc6200ecc  lwc1        $f0, 0xECC($s1)
    ctx->pc = 0x12222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122230:
    // 0x122230: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x122230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_122234:
    // 0x122234: 0x0  nop
    ctx->pc = 0x122234u;
    // NOP
label_122238:
    // 0x122238: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x122238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12223c:
    // 0x12223c: 0x0  nop
    ctx->pc = 0x12223cu;
    // NOP
label_122240:
    // 0x122240: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_122244:
    if (ctx->pc == 0x122244u) {
        ctx->pc = 0x122244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122240u;
        // 0x122244: 0x26300c50  addiu       $s0, $s1, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122248u;
        goto label_122248;
    }
    ctx->pc = 0x122240u;
    {
        const bool branch_taken_0x122240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122240u;
        // 0x122244: 0x26300c50  addiu       $s0, $s1, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122240) {
            ctx->pc = 0x1222D8u;
            goto label_1222d8;
        }
    }
    ctx->pc = 0x122248u;
label_122248:
    // 0x122248: 0xc6200ed0  lwc1        $f0, 0xED0($s1)
    ctx->pc = 0x122248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12224c:
    // 0x12224c: 0x6a280ee7  ldl         $t0, 0xEE7($s1)
    ctx->pc = 0x12224cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_122250:
    // 0x122250: 0x6e280ee0  ldr         $t0, 0xEE0($s1)
    ctx->pc = 0x122250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_122254:
    // 0x122254: 0x8e220ee8  lw          $v0, 0xEE8($s1)
    ctx->pc = 0x122254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3816)));
label_122258:
    // 0x122258: 0xb3a800c7  sdl         $t0, 0xC7($sp)
    ctx->pc = 0x122258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12225c:
    // 0x12225c: 0xb7a800c0  sdr         $t0, 0xC0($sp)
    ctx->pc = 0x12225cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122260:
    // 0x122260: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x122260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_122264:
    // 0x122264: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x122264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122268:
    // 0x122268: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x122268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12226c:
    // 0x12226c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12226cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_122270:
    // 0x122270: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x122270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122274:
    // 0x122274: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x122274u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_122278:
    // 0x122278: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x122278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_12227c:
    // 0x12227c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x12227cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_122280:
    // 0x122280: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x122280u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_122284:
    // 0x122284: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x122284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_122288:
    // 0x122288: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x122288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_12228c:
    // 0x12228c: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x12228cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_122290:
    // 0x122290: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x122290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_122294:
    // 0x122294: 0xc6200e40  lwc1        $f0, 0xE40($s1)
    ctx->pc = 0x122294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122298:
    // 0x122298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x122298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12229c:
    // 0x12229c: 0xe6200e40  swc1        $f0, 0xE40($s1)
    ctx->pc = 0x12229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
label_1222a0:
    // 0x1222a0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1222a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1222a4:
    // 0x1222a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1222a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1222a8:
    // 0x1222a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1222a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1222ac:
    // 0x1222ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1222acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1222b0:
    // 0x1222b0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1222b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1222b4:
    // 0x1222b4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1222b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1222b8:
    // 0x1222b8: 0xc6210ec8  lwc1        $f1, 0xEC8($s1)
    ctx->pc = 0x1222b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1222bc:
    // 0x1222bc: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1222bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1222c0:
    // 0x1222c0: 0xc6200ed0  lwc1        $f0, 0xED0($s1)
    ctx->pc = 0x1222c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1222c4:
    // 0x1222c4: 0xc6220ecc  lwc1        $f2, 0xECC($s1)
    ctx->pc = 0x1222c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1222c8:
    // 0x1222c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1222c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1222cc:
    // 0x1222cc: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x1222ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
label_1222d0:
    // 0x1222d0: 0xe6200ed0  swc1        $f0, 0xED0($s1)
    ctx->pc = 0x1222d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3792), bits); }
label_1222d4:
    // 0x1222d4: 0xe6220ecc  swc1        $f2, 0xECC($s1)
    ctx->pc = 0x1222d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3788), bits); }
label_1222d8:
    // 0x1222d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1222d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1222dc:
    // 0x1222dc: 0xc04f0c2  jal         func_13C308
label_1222e0:
    if (ctx->pc == 0x1222E0u) {
        ctx->pc = 0x1222E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222DCu;
        // 0x1222e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1222E4u;
        goto label_1222e4;
    }
    ctx->pc = 0x1222DCu;
    SET_GPR_U32(ctx, 31, 0x1222E4u);
    ctx->pc = 0x1222E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222DCu;
    // 0x1222e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1222DCu, 0x1222E4u)) {
        return;
    }
    ctx->pc = 0x1222E4u;
label_1222e4:
    // 0x1222e4: 0xc6200c50  lwc1        $f0, 0xC50($s1)
    ctx->pc = 0x1222e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1222e8:
    // 0x1222e8: 0xc6210e40  lwc1        $f1, 0xE40($s1)
    ctx->pc = 0x1222e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1222ec:
    // 0x1222ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1222ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1222f0:
    // 0x1222f0: 0xe6200c50  swc1        $f0, 0xC50($s1)
    ctx->pc = 0x1222f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3152), bits); }
label_1222f4:
    // 0x1222f4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1222f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1222f8:
    // 0x1222f8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1222f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1222fc:
    // 0x1222fc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1222fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122300:
    // 0x122300: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x122300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122304:
    // 0x122304: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x122304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_122308:
    // 0x122308: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x122308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12230c:
    // 0x12230c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x12230cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_122310:
    // 0x122310: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x122310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_122314:
    // 0x122314: 0x8e220cd0  lw          $v0, 0xCD0($s1)
    ctx->pc = 0x122314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
label_122318:
    // 0x122318: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_12231c:
    if (ctx->pc == 0x12231Cu) {
        ctx->pc = 0x12231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122318u;
        // 0x12231c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122320u;
        goto label_122320;
    }
    ctx->pc = 0x122318u;
    {
        const bool branch_taken_0x122318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122318) {
            ctx->pc = 0x12231Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122318u;
            // 0x12231c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122454u;
            goto label_122454;
        }
    }
    ctx->pc = 0x122320u;
label_122320:
    // 0x122320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122324:
    // 0x122324: 0xc04f0c2  jal         func_13C308
label_122328:
    if (ctx->pc == 0x122328u) {
        ctx->pc = 0x122328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122324u;
        // 0x122328: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12232Cu;
        goto label_12232c;
    }
    ctx->pc = 0x122324u;
    SET_GPR_U32(ctx, 31, 0x12232Cu);
    ctx->pc = 0x122328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122324u;
    // 0x122328: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x122324u, 0x12232Cu)) {
        return;
    }
    ctx->pc = 0x12232Cu;
label_12232c:
    // 0x12232c: 0xc6210c50  lwc1        $f1, 0xC50($s1)
    ctx->pc = 0x12232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122330:
    // 0x122330: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x122330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122334:
    // 0x122334: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x122334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122338:
    // 0x122338: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x122338u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_12233c:
    // 0x12233c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122340:
    // 0x122340: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x122340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122344:
    // 0x122344: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x122344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122348:
    // 0x122348: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x122348u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_12234c:
    // 0x12234c: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x12234cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_122350:
    // 0x122350: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x122350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_122354:
    // 0x122354: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x122354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_122358:
    // 0x122358: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x122358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_12235c:
    // 0x12235c: 0x6ba50107  ldl         $a1, 0x107($sp)
    ctx->pc = 0x12235cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_122360:
    // 0x122360: 0x6fa50100  ldr         $a1, 0x100($sp)
    ctx->pc = 0x122360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_122364:
    // 0x122364: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x122364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_122368:
    // 0x122368: 0xb3a500f7  sdl         $a1, 0xF7($sp)
    ctx->pc = 0x122368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12236c:
    // 0x12236c: 0xb7a500f0  sdr         $a1, 0xF0($sp)
    ctx->pc = 0x12236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122370:
    // 0x122370: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x122370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
label_122374:
    // 0x122374: 0x6ba300f7  ldl         $v1, 0xF7($sp)
    ctx->pc = 0x122374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_122378:
    // 0x122378: 0x6fa300f0  ldr         $v1, 0xF0($sp)
    ctx->pc = 0x122378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12237c:
    // 0x12237c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x12237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_122380:
    // 0x122380: 0xb3a300c7  sdl         $v1, 0xC7($sp)
    ctx->pc = 0x122380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122384:
    // 0x122384: 0xb7a300c0  sdr         $v1, 0xC0($sp)
    ctx->pc = 0x122384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122388:
    // 0x122388: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x122388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_12238c:
    // 0x12238c: 0x26220cb0  addiu       $v0, $s1, 0xCB0
    ctx->pc = 0x12238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
label_122390:
    // 0x122390: 0xc6210cb0  lwc1        $f1, 0xCB0($s1)
    ctx->pc = 0x122390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122394:
    // 0x122394: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x122394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122398:
    // 0x122398: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x122398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12239c:
    // 0x12239c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12239cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1223a0:
    // 0x1223a0: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x1223a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1223a4:
    // 0x1223a4: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x1223a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1223a8:
    // 0x1223a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1223a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1223ac:
    // 0x1223ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1223acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1223b0:
    // 0x1223b0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1223b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1223b4:
    // 0x1223b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1223b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1223b8:
    // 0x1223b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1223b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1223bc:
    // 0x1223bc: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x1223bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1223c0:
    // 0x1223c0: 0x6ba70107  ldl         $a3, 0x107($sp)
    ctx->pc = 0x1223c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1223c4:
    // 0x1223c4: 0x6fa70100  ldr         $a3, 0x100($sp)
    ctx->pc = 0x1223c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1223c8:
    // 0x1223c8: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x1223c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1223cc:
    // 0x1223cc: 0xb3a700f7  sdl         $a3, 0xF7($sp)
    ctx->pc = 0x1223ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1223d0:
    // 0x1223d0: 0xb7a700f0  sdr         $a3, 0xF0($sp)
    ctx->pc = 0x1223d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1223d4:
    // 0x1223d4: 0xafa800f8  sw          $t0, 0xF8($sp)
    ctx->pc = 0x1223d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
label_1223d8:
    // 0x1223d8: 0x6ba400f7  ldl         $a0, 0xF7($sp)
    ctx->pc = 0x1223d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1223dc:
    // 0x1223dc: 0x6fa400f0  ldr         $a0, 0xF0($sp)
    ctx->pc = 0x1223dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1223e0:
    // 0x1223e0: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1223e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1223e4:
    // 0x1223e4: 0xb3a400d7  sdl         $a0, 0xD7($sp)
    ctx->pc = 0x1223e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1223e8:
    // 0x1223e8: 0xb7a400d0  sdr         $a0, 0xD0($sp)
    ctx->pc = 0x1223e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1223ec:
    // 0x1223ec: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x1223ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
label_1223f0:
    // 0x1223f0: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x1223f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1223f4:
    // 0x1223f4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1223f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1223f8:
    // 0x1223f8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1223f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1223fc:
    // 0x1223fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1223fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_122400:
    // 0x122400: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x122400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122404:
    // 0x122404: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x122404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_122408:
    // 0x122408: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x122408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12240c:
    // 0x12240c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x12240cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_122410:
    // 0x122410: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x122410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_122414:
    // 0x122414: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x122414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_122418:
    // 0x122418: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x122418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_12241c:
    // 0x12241c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12241cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_122420:
    // 0x122420: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x122420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_122424:
    // 0x122424: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x122424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122428:
    // 0x122428: 0x0  nop
    ctx->pc = 0x122428u;
    // NOP
label_12242c:
    // 0x12242c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_122430:
    if (ctx->pc == 0x122430u) {
        ctx->pc = 0x122430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12242Cu;
        // 0x122430: 0xe7b400c4  swc1        $f20, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122434u;
        goto label_122434;
    }
    ctx->pc = 0x12242Cu;
    {
        const bool branch_taken_0x12242c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12242Cu;
        // 0x122430: 0xe7b400c4  swc1        $f20, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12242c) {
            ctx->pc = 0x122450u;
            goto label_122450;
        }
    }
    ctx->pc = 0x122434u;
label_122434:
    // 0x122434: 0x6a280cb7  ldl         $t0, 0xCB7($s1)
    ctx->pc = 0x122434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_122438:
    // 0x122438: 0x6e280cb0  ldr         $t0, 0xCB0($s1)
    ctx->pc = 0x122438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_12243c:
    // 0x12243c: 0x8e220cb8  lw          $v0, 0xCB8($s1)
    ctx->pc = 0x12243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3256)));
label_122440:
    // 0x122440: 0xb2280c57  sdl         $t0, 0xC57($s1)
    ctx->pc = 0x122440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122444:
    // 0x122444: 0xb6280c50  sdr         $t0, 0xC50($s1)
    ctx->pc = 0x122444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122448:
    // 0x122448: 0xae220c58  sw          $v0, 0xC58($s1)
    ctx->pc = 0x122448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3160), GPR_U32(ctx, 2));
label_12244c:
    // 0x12244c: 0xae200cd0  sw          $zero, 0xCD0($s1)
    ctx->pc = 0x12244cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3280), GPR_U32(ctx, 0));
label_122450:
    // 0x122450: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x122450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_122454:
    // 0x122454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122458:
    // 0x122458: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x122458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_12245c:
    // 0x12245c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x12245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_122460:
    // 0x122460: 0x60f809  jalr        $v1
label_122464:
    if (ctx->pc == 0x122464u) {
        ctx->pc = 0x122464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122460u;
        // 0x122464: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122468u;
        goto label_122468;
    }
    ctx->pc = 0x122460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122468u);
        ctx->pc = 0x122464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122460u;
        // 0x122464: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122460u, 0x122468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122468u;
label_122468:
    // 0x122468: 0x8e220c00  lw          $v0, 0xC00($s1)
    ctx->pc = 0x122468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3072)));
label_12246c:
    // 0x12246c: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_122470:
    // 0x122470: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x122470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_122474:
    // 0x122474: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_122478:
    if (ctx->pc == 0x122478u) {
        ctx->pc = 0x122478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122474u;
        // 0x122478: 0x26250d24  addiu       $a1, $s1, 0xD24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3364));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12247Cu;
        goto label_12247c;
    }
    ctx->pc = 0x122474u;
    {
        const bool branch_taken_0x122474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122474) {
            ctx->pc = 0x122478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122474u;
            // 0x122478: 0x26250d24  addiu       $a1, $s1, 0xD24 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3364));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12248Cu;
            goto label_12248c;
        }
    }
    ctx->pc = 0x12247Cu;
label_12247c:
    // 0x12247c: 0xc0ab42e  jal         func_2AD0B8
label_122480:
    if (ctx->pc == 0x122480u) {
        ctx->pc = 0x122480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12247Cu;
        // 0x122480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122484u;
        goto label_122484;
    }
    ctx->pc = 0x12247Cu;
    SET_GPR_U32(ctx, 31, 0x122484u);
    ctx->pc = 0x122480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12247Cu;
    // 0x122480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x12247Cu, 0x122484u)) {
        return;
    }
    ctx->pc = 0x122484u;
label_122484:
    // 0x122484: 0x8e220c00  lw          $v0, 0xC00($s1)
    ctx->pc = 0x122484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3072)));
label_122488:
    // 0x122488: 0x26250d24  addiu       $a1, $s1, 0xD24
    ctx->pc = 0x122488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3364));
label_12248c:
    // 0x12248c: 0xafa50134  sw          $a1, 0x134($sp)
    ctx->pc = 0x12248cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 5));
label_122490:
    // 0x122490: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x122490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_122494:
    // 0x122494: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x122494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_122498:
    // 0x122498: 0x8c9e0004  lw          $fp, 0x4($a0)
    ctx->pc = 0x122498u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_12249c:
    // 0x12249c: 0x53c00131  beql        $fp, $zero, . + 4 + (0x131 << 2)
label_1224a0:
    if (ctx->pc == 0x1224A0u) {
        ctx->pc = 0x1224A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12249Cu;
        // 0x1224a0: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224A4u;
        goto label_1224a4;
    }
    ctx->pc = 0x12249Cu;
    {
        const bool branch_taken_0x12249c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x12249c) {
            ctx->pc = 0x1224A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12249Cu;
            // 0x1224a0: 0x8fa40130  lw          $a0, 0x130($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122964u;
            goto label_122964;
        }
    }
    ctx->pc = 0x1224A4u;
label_1224a4:
    // 0x1224a4: 0x8e221458  lw          $v0, 0x1458($s1)
    ctx->pc = 0x1224a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5208)));
label_1224a8:
    // 0x1224a8: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_1224ac:
    if (ctx->pc == 0x1224ACu) {
        ctx->pc = 0x1224B0u;
        goto label_1224b0;
    }
    ctx->pc = 0x1224A8u;
    {
        const bool branch_taken_0x1224a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224a8) {
            ctx->pc = 0x122740u;
            goto label_122740;
        }
    }
    ctx->pc = 0x1224B0u;
label_1224b0:
    // 0x1224b0: 0x8e220cdc  lw          $v0, 0xCDC($s1)
    ctx->pc = 0x1224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
label_1224b4:
    // 0x1224b4: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_1224b8:
    if (ctx->pc == 0x1224B8u) {
        ctx->pc = 0x1224B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224B4u;
        // 0x1224b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224BCu;
        goto label_1224bc;
    }
    ctx->pc = 0x1224B4u;
    {
        const bool branch_taken_0x1224b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224B4u;
        // 0x1224b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224b4) {
            ctx->pc = 0x122740u;
            goto label_122740;
        }
    }
    ctx->pc = 0x1224BCu;
label_1224bc:
    // 0x1224bc: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1224bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_1224c0:
    // 0x1224c0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1224c4:
    // 0x1224c4: 0x1080009e  beqz        $a0, . + 4 + (0x9E << 2)
label_1224c8:
    if (ctx->pc == 0x1224C8u) {
        ctx->pc = 0x1224CCu;
        goto label_1224cc;
    }
    ctx->pc = 0x1224C4u;
    {
        const bool branch_taken_0x1224c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224c4) {
            ctx->pc = 0x122740u;
            goto label_122740;
        }
    }
    ctx->pc = 0x1224CCu;
label_1224cc:
    // 0x1224cc: 0xc05e396  jal         func_178E58
label_1224d0:
    if (ctx->pc == 0x1224D0u) {
        ctx->pc = 0x1224D4u;
        goto label_1224d4;
    }
    ctx->pc = 0x1224CCu;
    SET_GPR_U32(ctx, 31, 0x1224D4u);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x1224CCu, 0x1224D4u)) {
        return;
    }
    ctx->pc = 0x1224D4u;
label_1224d4:
    // 0x1224d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1224d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1224d8:
    // 0x1224d8: 0x12a00099  beqz        $s5, . + 4 + (0x99 << 2)
label_1224dc:
    if (ctx->pc == 0x1224DCu) {
        ctx->pc = 0x1224E0u;
        goto label_1224e0;
    }
    ctx->pc = 0x1224D8u;
    {
        const bool branch_taken_0x1224d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224d8) {
            ctx->pc = 0x122740u;
            goto label_122740;
        }
    }
    ctx->pc = 0x1224E0u;
label_1224e0:
    // 0x1224e0: 0x8e220c00  lw          $v0, 0xC00($s1)
    ctx->pc = 0x1224e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3072)));
label_1224e4:
    // 0x1224e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1224e8:
    if (ctx->pc == 0x1224E8u) {
        ctx->pc = 0x1224ECu;
        goto label_1224ec;
    }
    ctx->pc = 0x1224E4u;
    {
        const bool branch_taken_0x1224e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224e4) {
            ctx->pc = 0x122500u;
            goto label_122500;
        }
    }
    ctx->pc = 0x1224ECu;
label_1224ec:
    // 0x1224ec: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1224ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1224f0:
    // 0x1224f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1224f4:
    // 0x1224f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1224f8:
    // 0x1224f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1224fc:
    if (ctx->pc == 0x1224FCu) {
        ctx->pc = 0x1224FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224F8u;
        // 0x1224fc: 0xc481004c  lwc1        $f1, 0x4C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122500u;
        goto label_122500;
    }
    ctx->pc = 0x1224F8u;
    {
        const bool branch_taken_0x1224f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224F8u;
        // 0x1224fc: 0xc481004c  lwc1        $f1, 0x4C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224f8) {
            ctx->pc = 0x122504u;
            goto label_122504;
        }
    }
    ctx->pc = 0x122500u;
label_122500:
    // 0x122500: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x122500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122504:
    // 0x122504: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x122504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_122508:
    // 0x122508: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x122508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12250c:
    // 0x12250c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x12250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_122510:
    // 0x122510: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x122510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_122514:
    // 0x122514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122518:
    // 0x122518: 0x26270d24  addiu       $a3, $s1, 0xD24
    ctx->pc = 0x122518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3364));
label_12251c:
    // 0x12251c: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x12251cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
label_122520:
    // 0x122520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x122520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122524:
    // 0x122524: 0xafa70134  sw          $a3, 0x134($sp)
    ctx->pc = 0x122524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 7));
label_122528:
    // 0x122528: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x122528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12252c:
    // 0x12252c: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x12252cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_122530:
    // 0x122530: 0x6a280c47  ldl         $t0, 0xC47($s1)
    ctx->pc = 0x122530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_122534:
    // 0x122534: 0x6e280c40  ldr         $t0, 0xC40($s1)
    ctx->pc = 0x122534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_122538:
    // 0x122538: 0x8e230c48  lw          $v1, 0xC48($s1)
    ctx->pc = 0x122538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3144)));
label_12253c:
    // 0x12253c: 0xb3a800f7  sdl         $t0, 0xF7($sp)
    ctx->pc = 0x12253cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122540:
    // 0x122540: 0xb7a800f0  sdr         $t0, 0xF0($sp)
    ctx->pc = 0x122540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122544:
    // 0x122544: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x122544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_122548:
    // 0x122548: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
label_12254c:
    if (ctx->pc == 0x12254Cu) {
        ctx->pc = 0x12254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122548u;
        // 0x12254c: 0x27b700c0  addiu       $s7, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122550u;
        goto label_122550;
    }
    ctx->pc = 0x122548u;
    {
        const bool branch_taken_0x122548 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x12254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122548u;
        // 0x12254c: 0x27b700c0  addiu       $s7, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122548) {
            ctx->pc = 0x1226A8u;
            goto label_1226a8;
        }
    }
    ctx->pc = 0x122550u;
label_122550:
    // 0x122550: 0x263414a0  addiu       $s4, $s1, 0x14A0
    ctx->pc = 0x122550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 5280));
label_122554:
    // 0x122554: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x122554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_122558:
    // 0x122558: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x122558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12255c:
    // 0x12255c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12255cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_122560:
    // 0x122560: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x122560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_122564:
    // 0x122564: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x122564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_122568:
    // 0x122568: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x122568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_12256c:
    // 0x12256c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x12256cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_122570:
    // 0x122570: 0x26301460  addiu       $s0, $s1, 0x1460
    ctx->pc = 0x122570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5216));
label_122574:
    // 0x122574: 0x0  nop
    ctx->pc = 0x122574u;
    // NOP
label_122578:
    // 0x122578: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x122578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12257c:
    // 0x12257c: 0xc6220c44  lwc1        $f2, 0xC44($s1)
    ctx->pc = 0x12257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122580:
    // 0x122580: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x122580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_122584:
    // 0x122584: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x122584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_122588:
    // 0x122588: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x122588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12258c:
    // 0x12258c: 0x0  nop
    ctx->pc = 0x12258cu;
    // NOP
label_122590:
    // 0x122590: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_122594:
    if (ctx->pc == 0x122594u) {
        ctx->pc = 0x122594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122590u;
        // 0x122594: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122598u;
        goto label_122598;
    }
    ctx->pc = 0x122590u;
    {
        const bool branch_taken_0x122590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122590u;
        // 0x122594: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122590) {
            ctx->pc = 0x1225A0u;
            goto label_1225a0;
        }
    }
    ctx->pc = 0x122598u;
label_122598:
    // 0x122598: 0x46161000  add.s       $f0, $f2, $f22
    ctx->pc = 0x122598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_12259c:
    // 0x12259c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x12259cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1225a0:
    // 0x1225a0: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x1225a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1225a4:
    // 0x1225a4: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x1225a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1225a8:
    // 0x1225a8: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1225ac:
    // 0x1225ac: 0xb3a60107  sdl         $a2, 0x107($sp)
    ctx->pc = 0x1225acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1225b0:
    // 0x1225b0: 0xb7a60100  sdr         $a2, 0x100($sp)
    ctx->pc = 0x1225b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1225b4:
    // 0x1225b4: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x1225b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
label_1225b8:
    // 0x1225b8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1225b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1225bc:
    // 0x1225bc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1225bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1225c0:
    // 0x1225c0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1225c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1225c4:
    // 0x1225c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1225c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1225c8:
    // 0x1225c8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1225c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1225cc:
    // 0x1225cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1225ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1225d0:
    // 0x1225d0: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x1225d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1225d4:
    // 0x1225d4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x1225d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1225d8:
    // 0x1225d8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1225d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1225dc:
    // 0x1225dc: 0x6ba30127  ldl         $v1, 0x127($sp)
    ctx->pc = 0x1225dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1225e0:
    // 0x1225e0: 0x6fa30120  ldr         $v1, 0x120($sp)
    ctx->pc = 0x1225e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1225e4:
    // 0x1225e4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1225e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1225e8:
    // 0x1225e8: 0xb3a30117  sdl         $v1, 0x117($sp)
    ctx->pc = 0x1225e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1225ec:
    // 0x1225ec: 0xb7a30110  sdr         $v1, 0x110($sp)
    ctx->pc = 0x1225ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1225f0:
    // 0x1225f0: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x1225f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_1225f4:
    // 0x1225f4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1225f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1225f8:
    // 0x1225f8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1225f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1225fc:
    // 0x1225fc: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1225fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122600:
    // 0x122600: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x122600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122604:
    // 0x122604: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x122604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122608:
    // 0x122608: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x122608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12260c:
    // 0x12260c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12260cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_122610:
    // 0x122610: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x122610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_122614:
    // 0x122614: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x122614u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_122618:
    // 0x122618: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x122618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_12261c:
    // 0x12261c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x12261cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_122620:
    // 0x122620: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x122620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_122624:
    // 0x122624: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_122628:
    // 0x122628: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x122628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12262c:
    // 0x12262c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_122630:
    // 0x122630: 0xc086156  jal         func_218558
label_122634:
    if (ctx->pc == 0x122634u) {
        ctx->pc = 0x122634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122630u;
        // 0x122634: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122638u;
        goto label_122638;
    }
    ctx->pc = 0x122630u;
    SET_GPR_U32(ctx, 31, 0x122638u);
    ctx->pc = 0x122634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122630u;
    // 0x122634: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x122630u, 0x122638u)) {
        return;
    }
    ctx->pc = 0x122638u;
label_122638:
    // 0x122638: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_12263c:
    if (ctx->pc == 0x12263Cu) {
        ctx->pc = 0x12263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122638u;
        // 0x12263c: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122640u;
        goto label_122640;
    }
    ctx->pc = 0x122638u;
    {
        const bool branch_taken_0x122638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122638u;
        // 0x12263c: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122638) {
            ctx->pc = 0x122694u;
            goto label_122694;
        }
    }
    ctx->pc = 0x122640u;
label_122640:
    // 0x122640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x122640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_122644:
    // 0x122644: 0x12620012  beq         $s3, $v0, . + 4 + (0x12 << 2)
label_122648:
    if (ctx->pc == 0x122648u) {
        ctx->pc = 0x122648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122644u;
        // 0x122648: 0xae2214b0  sw          $v0, 0x14B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12264Cu;
        goto label_12264c;
    }
    ctx->pc = 0x122644u;
    {
        const bool branch_taken_0x122644 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x122648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122644u;
        // 0x122648: 0xae2214b0  sw          $v0, 0x14B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122644) {
            ctx->pc = 0x122690u;
            goto label_122690;
        }
    }
    ctx->pc = 0x12264Cu;
label_12264c:
    // 0x12264c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12264cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_122650:
    // 0x122650: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x122650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_122654:
    // 0x122654: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x122654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_122658:
    // 0x122658: 0x68471467  ldl         $a3, 0x1467($v0)
    ctx->pc = 0x122658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12265c:
    // 0x12265c: 0x6c471460  ldr         $a3, 0x1460($v0)
    ctx->pc = 0x12265cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_122660:
    // 0x122660: 0x8c481468  lw          $t0, 0x1468($v0)
    ctx->pc = 0x122660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5224)));
label_122664:
    // 0x122664: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x122664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122668:
    // 0x122668: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x122668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12266c:
    // 0x12266c: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x12266cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_122670:
    // 0x122670: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x122670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_122674:
    // 0x122674: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_122678:
    // 0x122678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x122678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12267c:
    // 0x12267c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x12267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_122680:
    // 0x122680: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x122680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122684:
    // 0x122684: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x122684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_122688:
    // 0x122688: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_12268c:
    // 0x12268c: 0x0  nop
    ctx->pc = 0x12268cu;
    // NOP
label_122690:
    // 0x122690: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x122690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_122694:
    // 0x122694: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x122694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_122698:
    // 0x122698: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x122698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_12269c:
    // 0x12269c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x12269cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1226a0:
    // 0x1226a0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_1226a4:
    if (ctx->pc == 0x1226A4u) {
        ctx->pc = 0x1226A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226A0u;
        // 0x1226a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226A8u;
        goto label_1226a8;
    }
    ctx->pc = 0x1226A0u;
    {
        const bool branch_taken_0x1226a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1226A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226A0u;
        // 0x1226a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226a0) {
            ctx->pc = 0x122578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122578;
        }
    }
    ctx->pc = 0x1226A8u;
label_1226a8:
    // 0x1226a8: 0xc6210c44  lwc1        $f1, 0xC44($s1)
    ctx->pc = 0x1226a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1226ac:
    // 0x1226ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1226acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1226b0:
    // 0x1226b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1226b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1226b4:
    // 0x1226b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1226b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1226b8:
    // 0x1226b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1226b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1226bc:
    // 0x1226bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1226bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1226c0:
    // 0x1226c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1226c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1226c4:
    // 0x1226c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1226c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1226c8:
    // 0x1226c8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1226c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_1226cc:
    // 0x1226cc: 0x6a270c57  ldl         $a3, 0xC57($s1)
    ctx->pc = 0x1226ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1226d0:
    // 0x1226d0: 0x6e270c50  ldr         $a3, 0xC50($s1)
    ctx->pc = 0x1226d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1226d4:
    // 0x1226d4: 0x8e280c58  lw          $t0, 0xC58($s1)
    ctx->pc = 0x1226d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3160)));
label_1226d8:
    // 0x1226d8: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x1226d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226dc:
    // 0x1226dc: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x1226dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226e0:
    // 0x1226e0: 0xafa80118  sw          $t0, 0x118($sp)
    ctx->pc = 0x1226e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 8));
label_1226e4:
    // 0x1226e4: 0x6ba70117  ldl         $a3, 0x117($sp)
    ctx->pc = 0x1226e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1226e8:
    // 0x1226e8: 0x6fa70110  ldr         $a3, 0x110($sp)
    ctx->pc = 0x1226e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1226ec:
    // 0x1226ec: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1226ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1226f0:
    // 0x1226f0: 0xb3a70107  sdl         $a3, 0x107($sp)
    ctx->pc = 0x1226f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226f4:
    // 0x1226f4: 0xb7a70100  sdr         $a3, 0x100($sp)
    ctx->pc = 0x1226f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1226f8:
    // 0x1226f8: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x1226f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
label_1226fc:
    // 0x1226fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1226fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_122700:
    // 0x122700: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x122700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_122704:
    // 0x122704: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x122704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_122708:
    // 0x122708: 0xc086156  jal         func_218558
label_12270c:
    if (ctx->pc == 0x12270Cu) {
        ctx->pc = 0x12270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122708u;
        // 0x12270c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122710u;
        goto label_122710;
    }
    ctx->pc = 0x122708u;
    SET_GPR_U32(ctx, 31, 0x122710u);
    ctx->pc = 0x12270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122708u;
    // 0x12270c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x122708u, 0x122710u)) {
        return;
    }
    ctx->pc = 0x122710u;
label_122710:
    // 0x122710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122714:
    // 0x122714: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_122718:
    if (ctx->pc == 0x122718u) {
        ctx->pc = 0x122718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122714u;
        // 0x122718: 0xc7a100d4  lwc1        $f1, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12271Cu;
        goto label_12271c;
    }
    ctx->pc = 0x122714u;
    {
        const bool branch_taken_0x122714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x122718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122714u;
        // 0x122718: 0xc7a100d4  lwc1        $f1, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122714) {
            ctx->pc = 0x122740u;
            goto label_122740;
        }
    }
    ctx->pc = 0x12271Cu;
label_12271c:
    // 0x12271c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x12271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_122720:
    // 0x122720: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x122720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_122724:
    // 0x122724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122728:
    // 0x122728: 0x0  nop
    ctx->pc = 0x122728u;
    // NOP
label_12272c:
    // 0x12272c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12272cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122730:
    // 0x122730: 0x0  nop
    ctx->pc = 0x122730u;
    // NOP
label_122734:
    // 0x122734: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_122738:
    if (ctx->pc == 0x122738u) {
        ctx->pc = 0x122738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122734u;
        // 0x122738: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12273Cu;
        goto label_12273c;
    }
    ctx->pc = 0x122734u;
    {
        const bool branch_taken_0x122734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122734u;
        // 0x122738: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122734) {
            ctx->pc = 0x122740u;
            goto label_122740;
        }
    }
    ctx->pc = 0x12273Cu;
label_12273c:
    // 0x12273c: 0xe6200c54  swc1        $f0, 0xC54($s1)
    ctx->pc = 0x12273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3156), bits); }
label_122740:
    // 0x122740: 0x6a240c47  ldl         $a0, 0xC47($s1)
    ctx->pc = 0x122740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_122744:
    // 0x122744: 0x6e240c40  ldr         $a0, 0xC40($s1)
    ctx->pc = 0x122744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_122748:
    // 0x122748: 0x8e250c48  lw          $a1, 0xC48($s1)
    ctx->pc = 0x122748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3144)));
label_12274c:
    // 0x12274c: 0xb3a400c7  sdl         $a0, 0xC7($sp)
    ctx->pc = 0x12274cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122750:
    // 0x122750: 0xb7a400c0  sdr         $a0, 0xC0($sp)
    ctx->pc = 0x122750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122754:
    // 0x122754: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x122754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
label_122758:
    // 0x122758: 0x6a280c57  ldl         $t0, 0xC57($s1)
    ctx->pc = 0x122758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_12275c:
    // 0x12275c: 0x6e280c50  ldr         $t0, 0xC50($s1)
    ctx->pc = 0x12275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_122760:
    // 0x122760: 0x8e220c58  lw          $v0, 0xC58($s1)
    ctx->pc = 0x122760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3160)));
label_122764:
    // 0x122764: 0xb3a800d7  sdl         $t0, 0xD7($sp)
    ctx->pc = 0x122764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122768:
    // 0x122768: 0xb7a800d0  sdr         $t0, 0xD0($sp)
    ctx->pc = 0x122768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12276c:
    // 0x12276c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x12276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_122770:
    // 0x122770: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x122770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122774:
    // 0x122774: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x122774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122778:
    // 0x122778: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x122778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12277c:
    // 0x12277c: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x12277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122780:
    // 0x122780: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x122780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122784:
    // 0x122784: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x122784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_122788:
    // 0x122788: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x122788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_12278c:
    // 0x12278c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x12278cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_122790:
    // 0x122790: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x122790u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_122794:
    // 0x122794: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x122794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_122798:
    // 0x122798: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x122798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_12279c:
    // 0x12279c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x12279cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1227a0:
    // 0x1227a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1227a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1227a4:
    // 0x1227a4: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_1227a8:
    // 0x1227a8: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
label_1227ac:
    if (ctx->pc == 0x1227ACu) {
        ctx->pc = 0x1227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A8u;
        // 0x1227ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1227B0u;
        goto label_1227b0;
    }
    ctx->pc = 0x1227A8u;
    {
        const bool branch_taken_0x1227a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A8u;
        // 0x1227ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227a8) {
            ctx->pc = 0x122870u;
            goto label_122870;
        }
    }
    ctx->pc = 0x1227B0u;
label_1227b0:
    // 0x1227b0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1227b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1227b4:
    // 0x1227b4: 0x26231460  addiu       $v1, $s1, 0x1460
    ctx->pc = 0x1227b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5216));
label_1227b8:
    // 0x1227b8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1227b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1227bc:
    // 0x1227bc: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x1227bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1227c0:
    // 0x1227c0: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x1227c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1227c4:
    // 0x1227c4: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x1227c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1227c8:
    // 0x1227c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1227c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1227cc:
    // 0x1227cc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1227ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1227d0:
    // 0x1227d0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1227d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1227d4:
    // 0x1227d4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1227d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1227d8:
    // 0x1227d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1227d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1227dc:
    // 0x1227dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1227dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1227e0:
    // 0x1227e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1227e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1227e4:
    // 0x1227e4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1227e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1227e8:
    // 0x1227e8: 0x0  nop
    ctx->pc = 0x1227e8u;
    // NOP
label_1227ec:
    // 0x1227ec: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_1227f0:
    if (ctx->pc == 0x1227F0u) {
        ctx->pc = 0x1227F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227ECu;
        // 0x1227f0: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1227F4u;
        goto label_1227f4;
    }
    ctx->pc = 0x1227ECu;
    {
        const bool branch_taken_0x1227ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1227ec) {
            ctx->pc = 0x1227F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1227ECu;
            // 0x1227f0: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122860u;
            goto label_122860;
        }
    }
    ctx->pc = 0x1227F4u;
label_1227f4:
    // 0x1227f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1227f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1227f8:
    // 0x1227f8: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x1227f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1227fc:
    // 0x1227fc: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1227fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_122800:
    // 0x122800: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x122800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_122804:
    // 0x122804: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x122804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_122808:
    // 0x122808: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x122808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_12280c:
    // 0x12280c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x12280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_122810:
    // 0x122810: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x122810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_122814:
    // 0x122814: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x122814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_122818:
    // 0x122818: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x122818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_12281c:
    // 0x12281c: 0xb3a600e7  sdl         $a2, 0xE7($sp)
    ctx->pc = 0x12281cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122820:
    // 0x122820: 0xb7a600e0  sdr         $a2, 0xE0($sp)
    ctx->pc = 0x122820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122824:
    // 0x122824: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x122824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
label_122828:
    // 0x122828: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x122828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12282c:
    // 0x12282c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x12282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122830:
    // 0x122830: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x122830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122834:
    // 0x122834: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x122834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122838:
    // 0x122838: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x122838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12283c:
    // 0x12283c: 0xc7a500e8  lwc1        $f5, 0xE8($sp)
    ctx->pc = 0x12283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_122840:
    // 0x122840: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x122840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_122844:
    // 0x122844: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x122844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_122848:
    // 0x122848: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x122848u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_12284c:
    // 0x12284c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x12284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_122850:
    // 0x122850: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x122850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_122854:
    // 0x122854: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x122854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_122858:
    // 0x122858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12285c:
    // 0x12285c: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x12285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_122860:
    // 0x122860: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x122860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_122864:
    // 0x122864: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x122864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_122868:
    // 0x122868: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_12286c:
    if (ctx->pc == 0x12286Cu) {
        ctx->pc = 0x12286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122868u;
        // 0x12286c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122870u;
        goto label_122870;
    }
    ctx->pc = 0x122868u;
    {
        const bool branch_taken_0x122868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122868u;
        // 0x12286c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122868) {
            ctx->pc = 0x1227B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1227b8;
        }
    }
    ctx->pc = 0x122870u;
label_122870:
    // 0x122870: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_122874:
    if (ctx->pc == 0x122874u) {
        ctx->pc = 0x122874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122870u;
        // 0x122874: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122878u;
        goto label_122878;
    }
    ctx->pc = 0x122870u;
    {
        const bool branch_taken_0x122870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122870u;
        // 0x122874: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122870) {
            ctx->pc = 0x1228D8u;
            goto label_1228d8;
        }
    }
    ctx->pc = 0x122878u;
label_122878:
    // 0x122878: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x122878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12287c:
    // 0x12287c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x12287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122880:
    // 0x122880: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x122880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_122884:
    // 0x122884: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x122884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122888:
    // 0x122888: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x122888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12288c:
    // 0x12288c: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x12288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122890:
    // 0x122890: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x122890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_122894:
    // 0x122894: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x122894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_122898:
    // 0x122898: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x122898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_12289c:
    // 0x12289c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x12289cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1228a0:
    // 0x1228a0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1228a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1228a4:
    // 0x1228a4: 0x6ba300f7  ldl         $v1, 0xF7($sp)
    ctx->pc = 0x1228a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1228a8:
    // 0x1228a8: 0x6fa300f0  ldr         $v1, 0xF0($sp)
    ctx->pc = 0x1228a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1228ac:
    // 0x1228ac: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1228acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1228b0:
    // 0x1228b0: 0xb3a300e7  sdl         $v1, 0xE7($sp)
    ctx->pc = 0x1228b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1228b4:
    // 0x1228b4: 0xb7a300e0  sdr         $v1, 0xE0($sp)
    ctx->pc = 0x1228b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1228b8:
    // 0x1228b8: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x1228b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_1228bc:
    // 0x1228bc: 0x6ba700e7  ldl         $a3, 0xE7($sp)
    ctx->pc = 0x1228bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1228c0:
    // 0x1228c0: 0x6fa700e0  ldr         $a3, 0xE0($sp)
    ctx->pc = 0x1228c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1228c4:
    // 0x1228c4: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x1228c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1228c8:
    // 0x1228c8: 0xb2270c57  sdl         $a3, 0xC57($s1)
    ctx->pc = 0x1228c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1228cc:
    // 0x1228cc: 0xb6270c50  sdr         $a3, 0xC50($s1)
    ctx->pc = 0x1228ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1228d0:
    // 0x1228d0: 0xae280c58  sw          $t0, 0xC58($s1)
    ctx->pc = 0x1228d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3160), GPR_U32(ctx, 8));
label_1228d4:
    // 0x1228d4: 0x0  nop
    ctx->pc = 0x1228d4u;
    // NOP
label_1228d8:
    // 0x1228d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1228dc:
    // 0x1228dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1228dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1228e0:
    // 0x1228e0: 0x0  nop
    ctx->pc = 0x1228e0u;
    // NOP
label_1228e4:
    // 0x1228e4: 0x461518c3  div.s       $f3, $f3, $f21
    ctx->pc = 0x1228e4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[21]);
label_1228e8:
    // 0x1228e8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1228e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1228ec:
    // 0x1228ec: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x1228ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1228f0:
    // 0x1228f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1228f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1228f4:
    // 0x1228f4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1228f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1228f8:
    // 0x1228f8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1228f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1228fc:
    // 0x1228fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1228fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_122900:
    // 0x122900: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x122900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_122904:
    // 0x122904: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x122904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_122908:
    // 0x122908: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x122908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_12290c:
    // 0x12290c: 0x8e220e54  lw          $v0, 0xE54($s1)
    ctx->pc = 0x12290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3668)));
label_122910:
    // 0x122910: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_122914:
    if (ctx->pc == 0x122914u) {
        ctx->pc = 0x122914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122910u;
        // 0x122914: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122918u;
        goto label_122918;
    }
    ctx->pc = 0x122910u;
    {
        const bool branch_taken_0x122910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122910) {
            ctx->pc = 0x122914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122910u;
            // 0x122914: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122934u;
            goto label_122934;
        }
    }
    ctx->pc = 0x122918u;
label_122918:
    // 0x122918: 0x8e22145c  lw          $v0, 0x145C($s1)
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5212)));
label_12291c:
    // 0x12291c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_122920:
    if (ctx->pc == 0x122920u) {
        ctx->pc = 0x122920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12291Cu;
        // 0x122920: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122924u;
        goto label_122924;
    }
    ctx->pc = 0x12291Cu;
    {
        const bool branch_taken_0x12291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12291Cu;
        // 0x122920: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12291c) {
            ctx->pc = 0x122930u;
            goto label_122930;
        }
    }
    ctx->pc = 0x122924u;
label_122924:
    // 0x122924: 0xc4408334  lwc1        $f0, -0x7CCC($v0)
    ctx->pc = 0x122924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122928:
    // 0x122928: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x122928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_12292c:
    // 0x12292c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x12292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_122930:
    // 0x122930: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x122930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_122934:
    // 0x122934: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x122934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_122938:
    // 0x122938: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x122938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_12293c:
    // 0x12293c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_122940:
    // 0x122940: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x122940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_122944:
    // 0x122944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_122948:
    // 0x122948: 0x6ba400d7  ldl         $a0, 0xD7($sp)
    ctx->pc = 0x122948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12294c:
    // 0x12294c: 0x6fa400d0  ldr         $a0, 0xD0($sp)
    ctx->pc = 0x12294cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_122950:
    // 0x122950: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x122950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_122954:
    // 0x122954: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x122954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122958:
    // 0x122958: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x122958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12295c:
    // 0x12295c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12295cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_122960:
    // 0x122960: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x122960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_122964:
    // 0x122964: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x122964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_122968:
    // 0x122968: 0xc06802e  jal         func_1A00B8
label_12296c:
    if (ctx->pc == 0x12296Cu) {
        ctx->pc = 0x12296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122968u;
        // 0x12296c: 0x8fa50134  lw          $a1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122970u;
        goto label_122970;
    }
    ctx->pc = 0x122968u;
    SET_GPR_U32(ctx, 31, 0x122970u);
    ctx->pc = 0x12296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122968u;
    // 0x12296c: 0x8fa50134  lw          $a1, 0x134($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x122968u, 0x122970u)) {
        return;
    }
    ctx->pc = 0x122970u;
label_122970:
    // 0x122970: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x122970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_122974:
    // 0x122974: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x122974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_122978:
    // 0x122978: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x122978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_12297c:
    // 0x12297c: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x12297cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_122980:
    // 0x122980: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x122980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_122984:
    // 0x122984: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x122984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_122988:
    // 0x122988: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x122988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_12298c:
    // 0x12298c: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x12298cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_122990:
    // 0x122990: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x122990u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_122994:
    // 0x122994: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x122994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_122998:
    // 0x122998: 0xc7b80200  lwc1        $f24, 0x200($sp)
    ctx->pc = 0x122998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_12299c:
    // 0x12299c: 0xc7b701f8  lwc1        $f23, 0x1F8($sp)
    ctx->pc = 0x12299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1229a0:
    // 0x1229a0: 0xc7b601f0  lwc1        $f22, 0x1F0($sp)
    ctx->pc = 0x1229a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1229a4:
    // 0x1229a4: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x1229a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1229a8:
    // 0x1229a8: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x1229a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1229ac:
    // 0x1229ac: 0x3e00008  jr          $ra
label_1229b0:
    if (ctx->pc == 0x1229B0u) {
        ctx->pc = 0x1229B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229ACu;
        // 0x1229b0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1229B4u;
        goto label_1229b4;
    }
    ctx->pc = 0x1229ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1229B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229ACu;
        // 0x1229b0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1229ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1229B4u;
label_1229b4:
    // 0x1229b4: 0x0  nop
    ctx->pc = 0x1229b4u;
    // NOP
    ctx->pc = 0x1229b8u;
}
