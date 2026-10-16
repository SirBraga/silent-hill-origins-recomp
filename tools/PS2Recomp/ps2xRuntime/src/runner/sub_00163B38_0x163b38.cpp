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

// Function: sub_00163B38
// Address: 0x163b38 - 0x164248
void sub_00163B38_0x163b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163B38_0x163b38");
#endif

    switch (ctx->pc) {
        case 0x163b38u: goto label_163b38;
        case 0x163b3cu: goto label_163b3c;
        case 0x163b40u: goto label_163b40;
        case 0x163b44u: goto label_163b44;
        case 0x163b48u: goto label_163b48;
        case 0x163b4cu: goto label_163b4c;
        case 0x163b50u: goto label_163b50;
        case 0x163b54u: goto label_163b54;
        case 0x163b58u: goto label_163b58;
        case 0x163b5cu: goto label_163b5c;
        case 0x163b60u: goto label_163b60;
        case 0x163b64u: goto label_163b64;
        case 0x163b68u: goto label_163b68;
        case 0x163b6cu: goto label_163b6c;
        case 0x163b70u: goto label_163b70;
        case 0x163b74u: goto label_163b74;
        case 0x163b78u: goto label_163b78;
        case 0x163b7cu: goto label_163b7c;
        case 0x163b80u: goto label_163b80;
        case 0x163b84u: goto label_163b84;
        case 0x163b88u: goto label_163b88;
        case 0x163b8cu: goto label_163b8c;
        case 0x163b90u: goto label_163b90;
        case 0x163b94u: goto label_163b94;
        case 0x163b98u: goto label_163b98;
        case 0x163b9cu: goto label_163b9c;
        case 0x163ba0u: goto label_163ba0;
        case 0x163ba4u: goto label_163ba4;
        case 0x163ba8u: goto label_163ba8;
        case 0x163bacu: goto label_163bac;
        case 0x163bb0u: goto label_163bb0;
        case 0x163bb4u: goto label_163bb4;
        case 0x163bb8u: goto label_163bb8;
        case 0x163bbcu: goto label_163bbc;
        case 0x163bc0u: goto label_163bc0;
        case 0x163bc4u: goto label_163bc4;
        case 0x163bc8u: goto label_163bc8;
        case 0x163bccu: goto label_163bcc;
        case 0x163bd0u: goto label_163bd0;
        case 0x163bd4u: goto label_163bd4;
        case 0x163bd8u: goto label_163bd8;
        case 0x163bdcu: goto label_163bdc;
        case 0x163be0u: goto label_163be0;
        case 0x163be4u: goto label_163be4;
        case 0x163be8u: goto label_163be8;
        case 0x163becu: goto label_163bec;
        case 0x163bf0u: goto label_163bf0;
        case 0x163bf4u: goto label_163bf4;
        case 0x163bf8u: goto label_163bf8;
        case 0x163bfcu: goto label_163bfc;
        case 0x163c00u: goto label_163c00;
        case 0x163c04u: goto label_163c04;
        case 0x163c08u: goto label_163c08;
        case 0x163c0cu: goto label_163c0c;
        case 0x163c10u: goto label_163c10;
        case 0x163c14u: goto label_163c14;
        case 0x163c18u: goto label_163c18;
        case 0x163c1cu: goto label_163c1c;
        case 0x163c20u: goto label_163c20;
        case 0x163c24u: goto label_163c24;
        case 0x163c28u: goto label_163c28;
        case 0x163c2cu: goto label_163c2c;
        case 0x163c30u: goto label_163c30;
        case 0x163c34u: goto label_163c34;
        case 0x163c38u: goto label_163c38;
        case 0x163c3cu: goto label_163c3c;
        case 0x163c40u: goto label_163c40;
        case 0x163c44u: goto label_163c44;
        case 0x163c48u: goto label_163c48;
        case 0x163c4cu: goto label_163c4c;
        case 0x163c50u: goto label_163c50;
        case 0x163c54u: goto label_163c54;
        case 0x163c58u: goto label_163c58;
        case 0x163c5cu: goto label_163c5c;
        case 0x163c60u: goto label_163c60;
        case 0x163c64u: goto label_163c64;
        case 0x163c68u: goto label_163c68;
        case 0x163c6cu: goto label_163c6c;
        case 0x163c70u: goto label_163c70;
        case 0x163c74u: goto label_163c74;
        case 0x163c78u: goto label_163c78;
        case 0x163c7cu: goto label_163c7c;
        case 0x163c80u: goto label_163c80;
        case 0x163c84u: goto label_163c84;
        case 0x163c88u: goto label_163c88;
        case 0x163c8cu: goto label_163c8c;
        case 0x163c90u: goto label_163c90;
        case 0x163c94u: goto label_163c94;
        case 0x163c98u: goto label_163c98;
        case 0x163c9cu: goto label_163c9c;
        case 0x163ca0u: goto label_163ca0;
        case 0x163ca4u: goto label_163ca4;
        case 0x163ca8u: goto label_163ca8;
        case 0x163cacu: goto label_163cac;
        case 0x163cb0u: goto label_163cb0;
        case 0x163cb4u: goto label_163cb4;
        case 0x163cb8u: goto label_163cb8;
        case 0x163cbcu: goto label_163cbc;
        case 0x163cc0u: goto label_163cc0;
        case 0x163cc4u: goto label_163cc4;
        case 0x163cc8u: goto label_163cc8;
        case 0x163cccu: goto label_163ccc;
        case 0x163cd0u: goto label_163cd0;
        case 0x163cd4u: goto label_163cd4;
        case 0x163cd8u: goto label_163cd8;
        case 0x163cdcu: goto label_163cdc;
        case 0x163ce0u: goto label_163ce0;
        case 0x163ce4u: goto label_163ce4;
        case 0x163ce8u: goto label_163ce8;
        case 0x163cecu: goto label_163cec;
        case 0x163cf0u: goto label_163cf0;
        case 0x163cf4u: goto label_163cf4;
        case 0x163cf8u: goto label_163cf8;
        case 0x163cfcu: goto label_163cfc;
        case 0x163d00u: goto label_163d00;
        case 0x163d04u: goto label_163d04;
        case 0x163d08u: goto label_163d08;
        case 0x163d0cu: goto label_163d0c;
        case 0x163d10u: goto label_163d10;
        case 0x163d14u: goto label_163d14;
        case 0x163d18u: goto label_163d18;
        case 0x163d1cu: goto label_163d1c;
        case 0x163d20u: goto label_163d20;
        case 0x163d24u: goto label_163d24;
        case 0x163d28u: goto label_163d28;
        case 0x163d2cu: goto label_163d2c;
        case 0x163d30u: goto label_163d30;
        case 0x163d34u: goto label_163d34;
        case 0x163d38u: goto label_163d38;
        case 0x163d3cu: goto label_163d3c;
        case 0x163d40u: goto label_163d40;
        case 0x163d44u: goto label_163d44;
        case 0x163d48u: goto label_163d48;
        case 0x163d4cu: goto label_163d4c;
        case 0x163d50u: goto label_163d50;
        case 0x163d54u: goto label_163d54;
        case 0x163d58u: goto label_163d58;
        case 0x163d5cu: goto label_163d5c;
        case 0x163d60u: goto label_163d60;
        case 0x163d64u: goto label_163d64;
        case 0x163d68u: goto label_163d68;
        case 0x163d6cu: goto label_163d6c;
        case 0x163d70u: goto label_163d70;
        case 0x163d74u: goto label_163d74;
        case 0x163d78u: goto label_163d78;
        case 0x163d7cu: goto label_163d7c;
        case 0x163d80u: goto label_163d80;
        case 0x163d84u: goto label_163d84;
        case 0x163d88u: goto label_163d88;
        case 0x163d8cu: goto label_163d8c;
        case 0x163d90u: goto label_163d90;
        case 0x163d94u: goto label_163d94;
        case 0x163d98u: goto label_163d98;
        case 0x163d9cu: goto label_163d9c;
        case 0x163da0u: goto label_163da0;
        case 0x163da4u: goto label_163da4;
        case 0x163da8u: goto label_163da8;
        case 0x163dacu: goto label_163dac;
        case 0x163db0u: goto label_163db0;
        case 0x163db4u: goto label_163db4;
        case 0x163db8u: goto label_163db8;
        case 0x163dbcu: goto label_163dbc;
        case 0x163dc0u: goto label_163dc0;
        case 0x163dc4u: goto label_163dc4;
        case 0x163dc8u: goto label_163dc8;
        case 0x163dccu: goto label_163dcc;
        case 0x163dd0u: goto label_163dd0;
        case 0x163dd4u: goto label_163dd4;
        case 0x163dd8u: goto label_163dd8;
        case 0x163ddcu: goto label_163ddc;
        case 0x163de0u: goto label_163de0;
        case 0x163de4u: goto label_163de4;
        case 0x163de8u: goto label_163de8;
        case 0x163decu: goto label_163dec;
        case 0x163df0u: goto label_163df0;
        case 0x163df4u: goto label_163df4;
        case 0x163df8u: goto label_163df8;
        case 0x163dfcu: goto label_163dfc;
        case 0x163e00u: goto label_163e00;
        case 0x163e04u: goto label_163e04;
        case 0x163e08u: goto label_163e08;
        case 0x163e0cu: goto label_163e0c;
        case 0x163e10u: goto label_163e10;
        case 0x163e14u: goto label_163e14;
        case 0x163e18u: goto label_163e18;
        case 0x163e1cu: goto label_163e1c;
        case 0x163e20u: goto label_163e20;
        case 0x163e24u: goto label_163e24;
        case 0x163e28u: goto label_163e28;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e30u: goto label_163e30;
        case 0x163e34u: goto label_163e34;
        case 0x163e38u: goto label_163e38;
        case 0x163e3cu: goto label_163e3c;
        case 0x163e40u: goto label_163e40;
        case 0x163e44u: goto label_163e44;
        case 0x163e48u: goto label_163e48;
        case 0x163e4cu: goto label_163e4c;
        case 0x163e50u: goto label_163e50;
        case 0x163e54u: goto label_163e54;
        case 0x163e58u: goto label_163e58;
        case 0x163e5cu: goto label_163e5c;
        case 0x163e60u: goto label_163e60;
        case 0x163e64u: goto label_163e64;
        case 0x163e68u: goto label_163e68;
        case 0x163e6cu: goto label_163e6c;
        case 0x163e70u: goto label_163e70;
        case 0x163e74u: goto label_163e74;
        case 0x163e78u: goto label_163e78;
        case 0x163e7cu: goto label_163e7c;
        case 0x163e80u: goto label_163e80;
        case 0x163e84u: goto label_163e84;
        case 0x163e88u: goto label_163e88;
        case 0x163e8cu: goto label_163e8c;
        case 0x163e90u: goto label_163e90;
        case 0x163e94u: goto label_163e94;
        case 0x163e98u: goto label_163e98;
        case 0x163e9cu: goto label_163e9c;
        case 0x163ea0u: goto label_163ea0;
        case 0x163ea4u: goto label_163ea4;
        case 0x163ea8u: goto label_163ea8;
        case 0x163eacu: goto label_163eac;
        case 0x163eb0u: goto label_163eb0;
        case 0x163eb4u: goto label_163eb4;
        case 0x163eb8u: goto label_163eb8;
        case 0x163ebcu: goto label_163ebc;
        case 0x163ec0u: goto label_163ec0;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ec8u: goto label_163ec8;
        case 0x163eccu: goto label_163ecc;
        case 0x163ed0u: goto label_163ed0;
        case 0x163ed4u: goto label_163ed4;
        case 0x163ed8u: goto label_163ed8;
        case 0x163edcu: goto label_163edc;
        case 0x163ee0u: goto label_163ee0;
        case 0x163ee4u: goto label_163ee4;
        case 0x163ee8u: goto label_163ee8;
        case 0x163eecu: goto label_163eec;
        case 0x163ef0u: goto label_163ef0;
        case 0x163ef4u: goto label_163ef4;
        case 0x163ef8u: goto label_163ef8;
        case 0x163efcu: goto label_163efc;
        case 0x163f00u: goto label_163f00;
        case 0x163f04u: goto label_163f04;
        case 0x163f08u: goto label_163f08;
        case 0x163f0cu: goto label_163f0c;
        case 0x163f10u: goto label_163f10;
        case 0x163f14u: goto label_163f14;
        case 0x163f18u: goto label_163f18;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f20u: goto label_163f20;
        case 0x163f24u: goto label_163f24;
        case 0x163f28u: goto label_163f28;
        case 0x163f2cu: goto label_163f2c;
        case 0x163f30u: goto label_163f30;
        case 0x163f34u: goto label_163f34;
        case 0x163f38u: goto label_163f38;
        case 0x163f3cu: goto label_163f3c;
        case 0x163f40u: goto label_163f40;
        case 0x163f44u: goto label_163f44;
        case 0x163f48u: goto label_163f48;
        case 0x163f4cu: goto label_163f4c;
        case 0x163f50u: goto label_163f50;
        case 0x163f54u: goto label_163f54;
        case 0x163f58u: goto label_163f58;
        case 0x163f5cu: goto label_163f5c;
        case 0x163f60u: goto label_163f60;
        case 0x163f64u: goto label_163f64;
        case 0x163f68u: goto label_163f68;
        case 0x163f6cu: goto label_163f6c;
        case 0x163f70u: goto label_163f70;
        case 0x163f74u: goto label_163f74;
        case 0x163f78u: goto label_163f78;
        case 0x163f7cu: goto label_163f7c;
        case 0x163f80u: goto label_163f80;
        case 0x163f84u: goto label_163f84;
        case 0x163f88u: goto label_163f88;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f90u: goto label_163f90;
        case 0x163f94u: goto label_163f94;
        case 0x163f98u: goto label_163f98;
        case 0x163f9cu: goto label_163f9c;
        case 0x163fa0u: goto label_163fa0;
        case 0x163fa4u: goto label_163fa4;
        case 0x163fa8u: goto label_163fa8;
        case 0x163facu: goto label_163fac;
        case 0x163fb0u: goto label_163fb0;
        case 0x163fb4u: goto label_163fb4;
        case 0x163fb8u: goto label_163fb8;
        case 0x163fbcu: goto label_163fbc;
        case 0x163fc0u: goto label_163fc0;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fc8u: goto label_163fc8;
        case 0x163fccu: goto label_163fcc;
        case 0x163fd0u: goto label_163fd0;
        case 0x163fd4u: goto label_163fd4;
        case 0x163fd8u: goto label_163fd8;
        case 0x163fdcu: goto label_163fdc;
        case 0x163fe0u: goto label_163fe0;
        case 0x163fe4u: goto label_163fe4;
        case 0x163fe8u: goto label_163fe8;
        case 0x163fecu: goto label_163fec;
        case 0x163ff0u: goto label_163ff0;
        case 0x163ff4u: goto label_163ff4;
        case 0x163ff8u: goto label_163ff8;
        case 0x163ffcu: goto label_163ffc;
        case 0x164000u: goto label_164000;
        case 0x164004u: goto label_164004;
        case 0x164008u: goto label_164008;
        case 0x16400cu: goto label_16400c;
        case 0x164010u: goto label_164010;
        case 0x164014u: goto label_164014;
        case 0x164018u: goto label_164018;
        case 0x16401cu: goto label_16401c;
        case 0x164020u: goto label_164020;
        case 0x164024u: goto label_164024;
        case 0x164028u: goto label_164028;
        case 0x16402cu: goto label_16402c;
        case 0x164030u: goto label_164030;
        case 0x164034u: goto label_164034;
        case 0x164038u: goto label_164038;
        case 0x16403cu: goto label_16403c;
        case 0x164040u: goto label_164040;
        case 0x164044u: goto label_164044;
        case 0x164048u: goto label_164048;
        case 0x16404cu: goto label_16404c;
        case 0x164050u: goto label_164050;
        case 0x164054u: goto label_164054;
        case 0x164058u: goto label_164058;
        case 0x16405cu: goto label_16405c;
        case 0x164060u: goto label_164060;
        case 0x164064u: goto label_164064;
        case 0x164068u: goto label_164068;
        case 0x16406cu: goto label_16406c;
        case 0x164070u: goto label_164070;
        case 0x164074u: goto label_164074;
        case 0x164078u: goto label_164078;
        case 0x16407cu: goto label_16407c;
        case 0x164080u: goto label_164080;
        case 0x164084u: goto label_164084;
        case 0x164088u: goto label_164088;
        case 0x16408cu: goto label_16408c;
        case 0x164090u: goto label_164090;
        case 0x164094u: goto label_164094;
        case 0x164098u: goto label_164098;
        case 0x16409cu: goto label_16409c;
        case 0x1640a0u: goto label_1640a0;
        case 0x1640a4u: goto label_1640a4;
        case 0x1640a8u: goto label_1640a8;
        case 0x1640acu: goto label_1640ac;
        case 0x1640b0u: goto label_1640b0;
        case 0x1640b4u: goto label_1640b4;
        case 0x1640b8u: goto label_1640b8;
        case 0x1640bcu: goto label_1640bc;
        case 0x1640c0u: goto label_1640c0;
        case 0x1640c4u: goto label_1640c4;
        case 0x1640c8u: goto label_1640c8;
        case 0x1640ccu: goto label_1640cc;
        case 0x1640d0u: goto label_1640d0;
        case 0x1640d4u: goto label_1640d4;
        case 0x1640d8u: goto label_1640d8;
        case 0x1640dcu: goto label_1640dc;
        case 0x1640e0u: goto label_1640e0;
        case 0x1640e4u: goto label_1640e4;
        case 0x1640e8u: goto label_1640e8;
        case 0x1640ecu: goto label_1640ec;
        case 0x1640f0u: goto label_1640f0;
        case 0x1640f4u: goto label_1640f4;
        case 0x1640f8u: goto label_1640f8;
        case 0x1640fcu: goto label_1640fc;
        case 0x164100u: goto label_164100;
        case 0x164104u: goto label_164104;
        case 0x164108u: goto label_164108;
        case 0x16410cu: goto label_16410c;
        case 0x164110u: goto label_164110;
        case 0x164114u: goto label_164114;
        case 0x164118u: goto label_164118;
        case 0x16411cu: goto label_16411c;
        case 0x164120u: goto label_164120;
        case 0x164124u: goto label_164124;
        case 0x164128u: goto label_164128;
        case 0x16412cu: goto label_16412c;
        case 0x164130u: goto label_164130;
        case 0x164134u: goto label_164134;
        case 0x164138u: goto label_164138;
        case 0x16413cu: goto label_16413c;
        case 0x164140u: goto label_164140;
        case 0x164144u: goto label_164144;
        case 0x164148u: goto label_164148;
        case 0x16414cu: goto label_16414c;
        case 0x164150u: goto label_164150;
        case 0x164154u: goto label_164154;
        case 0x164158u: goto label_164158;
        case 0x16415cu: goto label_16415c;
        case 0x164160u: goto label_164160;
        case 0x164164u: goto label_164164;
        case 0x164168u: goto label_164168;
        case 0x16416cu: goto label_16416c;
        case 0x164170u: goto label_164170;
        case 0x164174u: goto label_164174;
        case 0x164178u: goto label_164178;
        case 0x16417cu: goto label_16417c;
        case 0x164180u: goto label_164180;
        case 0x164184u: goto label_164184;
        case 0x164188u: goto label_164188;
        case 0x16418cu: goto label_16418c;
        case 0x164190u: goto label_164190;
        case 0x164194u: goto label_164194;
        case 0x164198u: goto label_164198;
        case 0x16419cu: goto label_16419c;
        case 0x1641a0u: goto label_1641a0;
        case 0x1641a4u: goto label_1641a4;
        case 0x1641a8u: goto label_1641a8;
        case 0x1641acu: goto label_1641ac;
        case 0x1641b0u: goto label_1641b0;
        case 0x1641b4u: goto label_1641b4;
        case 0x1641b8u: goto label_1641b8;
        case 0x1641bcu: goto label_1641bc;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641c4u: goto label_1641c4;
        case 0x1641c8u: goto label_1641c8;
        case 0x1641ccu: goto label_1641cc;
        case 0x1641d0u: goto label_1641d0;
        case 0x1641d4u: goto label_1641d4;
        case 0x1641d8u: goto label_1641d8;
        case 0x1641dcu: goto label_1641dc;
        case 0x1641e0u: goto label_1641e0;
        case 0x1641e4u: goto label_1641e4;
        case 0x1641e8u: goto label_1641e8;
        case 0x1641ecu: goto label_1641ec;
        case 0x1641f0u: goto label_1641f0;
        case 0x1641f4u: goto label_1641f4;
        case 0x1641f8u: goto label_1641f8;
        case 0x1641fcu: goto label_1641fc;
        case 0x164200u: goto label_164200;
        case 0x164204u: goto label_164204;
        case 0x164208u: goto label_164208;
        case 0x16420cu: goto label_16420c;
        case 0x164210u: goto label_164210;
        case 0x164214u: goto label_164214;
        case 0x164218u: goto label_164218;
        case 0x16421cu: goto label_16421c;
        case 0x164220u: goto label_164220;
        case 0x164224u: goto label_164224;
        case 0x164228u: goto label_164228;
        case 0x16422cu: goto label_16422c;
        case 0x164230u: goto label_164230;
        case 0x164234u: goto label_164234;
        case 0x164238u: goto label_164238;
        case 0x16423cu: goto label_16423c;
        case 0x164240u: goto label_164240;
        case 0x164244u: goto label_164244;
        default: break;
    }

    ctx->pc = 0x163b38u;

label_163b38:
    // 0x163b38: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x163b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_163b3c:
    // 0x163b3c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x163b3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_163b40:
    // 0x163b40: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x163b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_163b44:
    // 0x163b44: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x163b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_163b48:
    // 0x163b48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x163b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163b4c:
    // 0x163b4c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x163b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_163b50:
    // 0x163b50: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x163b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163b54:
    // 0x163b54: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x163b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_163b58:
    // 0x163b58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x163b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_163b5c:
    // 0x163b5c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x163b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_163b60:
    // 0x163b60: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x163b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_163b64:
    // 0x163b64: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x163b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_163b68:
    // 0x163b68: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x163b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_163b6c:
    // 0x163b6c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x163b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_163b70:
    // 0x163b70: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x163b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_163b74:
    // 0x163b74: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x163b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
label_163b78:
    // 0x163b78: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x163b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
label_163b7c:
    // 0x163b7c: 0xafab0054  sw          $t3, 0x54($sp)
    ctx->pc = 0x163b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
label_163b80:
    // 0x163b80: 0xafa8004c  sw          $t0, 0x4C($sp)
    ctx->pc = 0x163b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
label_163b84:
    // 0x163b84: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_163b88:
    if (ctx->pc == 0x163B88u) {
        ctx->pc = 0x163B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B84u;
        // 0x163b88: 0xae696b1c  sw          $t1, 0x6B1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 27420), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B8Cu;
        goto label_163b8c;
    }
    ctx->pc = 0x163B84u;
    {
        const bool branch_taken_0x163b84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B84u;
        // 0x163b88: 0xae696b1c  sw          $t1, 0x6B1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 27420), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b84) {
            ctx->pc = 0x163BF0u;
            goto label_163bf0;
        }
    }
    ctx->pc = 0x163B8Cu;
label_163b8c:
    // 0x163b8c: 0x92a20024  lbu         $v0, 0x24($s5)
    ctx->pc = 0x163b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_163b90:
    // 0x163b90: 0x104001a1  beqz        $v0, . + 4 + (0x1A1 << 2)
label_163b94:
    if (ctx->pc == 0x163B94u) {
        ctx->pc = 0x163B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B90u;
        // 0x163b94: 0x26626afc  addiu       $v0, $s3, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B98u;
        goto label_163b98;
    }
    ctx->pc = 0x163B90u;
    {
        const bool branch_taken_0x163b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B90u;
        // 0x163b94: 0x26626afc  addiu       $v0, $s3, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b90) {
            ctx->pc = 0x164218u;
            goto label_164218;
        }
    }
    ctx->pc = 0x163B98u;
label_163b98:
    // 0x163b98: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x163b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_163b9c:
    // 0x163b9c: 0x1060019f  beqz        $v1, . + 4 + (0x19F << 2)
label_163ba0:
    if (ctx->pc == 0x163BA0u) {
        ctx->pc = 0x163BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B9Cu;
        // 0x163ba0: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BA4u;
        goto label_163ba4;
    }
    ctx->pc = 0x163B9Cu;
    {
        const bool branch_taken_0x163b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B9Cu;
        // 0x163ba0: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b9c) {
            ctx->pc = 0x16421Cu;
            goto label_16421c;
        }
    }
    ctx->pc = 0x163BA4u;
label_163ba4:
    // 0x163ba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163ba8:
    // 0x163ba8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_163bac:
    if (ctx->pc == 0x163BACu) {
        ctx->pc = 0x163BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA8u;
        // 0x163bac: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BB0u;
        goto label_163bb0;
    }
    ctx->pc = 0x163BA8u;
    {
        const bool branch_taken_0x163ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163ba8) {
            ctx->pc = 0x163BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BA8u;
            // 0x163bac: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163BD8u;
            goto label_163bd8;
        }
    }
    ctx->pc = 0x163BB0u;
label_163bb0:
    // 0x163bb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_163bb4:
    // 0x163bb4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_163bb8:
    if (ctx->pc == 0x163BB8u) {
        ctx->pc = 0x163BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BB4u;
        // 0x163bb8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BBCu;
        goto label_163bbc;
    }
    ctx->pc = 0x163BB4u;
    {
        const bool branch_taken_0x163bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163bb4) {
            ctx->pc = 0x163BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BB4u;
            // 0x163bb8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163BD8u;
            goto label_163bd8;
        }
    }
    ctx->pc = 0x163BBCu;
label_163bbc:
    // 0x163bbc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x163bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_163bc0:
    // 0x163bc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_163bc4:
    if (ctx->pc == 0x163BC4u) {
        ctx->pc = 0x163BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BC0u;
        // 0x163bc4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BC8u;
        goto label_163bc8;
    }
    ctx->pc = 0x163BC0u;
    {
        const bool branch_taken_0x163bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163bc0) {
            ctx->pc = 0x163BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BC0u;
            // 0x163bc4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163BD8u;
            goto label_163bd8;
        }
    }
    ctx->pc = 0x163BC8u;
label_163bc8:
    // 0x163bc8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x163bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_163bcc:
    // 0x163bcc: 0x10400193  beqz        $v0, . + 4 + (0x193 << 2)
label_163bd0:
    if (ctx->pc == 0x163BD0u) {
        ctx->pc = 0x163BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BCCu;
        // 0x163bd0: 0x26626afc  addiu       $v0, $s3, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BD4u;
        goto label_163bd4;
    }
    ctx->pc = 0x163BCCu;
    {
        const bool branch_taken_0x163bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BCCu;
        // 0x163bd0: 0x26626afc  addiu       $v0, $s3, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bcc) {
            ctx->pc = 0x16421Cu;
            goto label_16421c;
        }
    }
    ctx->pc = 0x163BD4u;
label_163bd4:
    // 0x163bd4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x163bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_163bd8:
    // 0x163bd8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x163bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_163bdc:
    // 0x163bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163be0:
    // 0x163be0: 0xc08063c  jal         func_2018F0
label_163be4:
    if (ctx->pc == 0x163BE4u) {
        ctx->pc = 0x163BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BE0u;
        // 0x163be4: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BE8u;
        goto label_163be8;
    }
    ctx->pc = 0x163BE0u;
    SET_GPR_U32(ctx, 31, 0x163BE8u);
    ctx->pc = 0x163BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BE0u;
    // 0x163be4: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x163BE0u, 0x163BE8u)) {
        return;
    }
    ctx->pc = 0x163BE8u;
label_163be8:
    // 0x163be8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_163bec:
    if (ctx->pc == 0x163BECu) {
        ctx->pc = 0x163BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BE8u;
        // 0x163bec: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BF0u;
        goto label_163bf0;
    }
    ctx->pc = 0x163BE8u;
    {
        const bool branch_taken_0x163be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163be8) {
            ctx->pc = 0x163BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BE8u;
            // 0x163bec: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163C04u;
            goto label_163c04;
        }
    }
    ctx->pc = 0x163BF0u;
label_163bf0:
    // 0x163bf0: 0x10000189  b           . + 4 + (0x189 << 2)
label_163bf4:
    if (ctx->pc == 0x163BF4u) {
        ctx->pc = 0x163BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BF0u;
        // 0x163bf4: 0x26626afc  addiu       $v0, $s3, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BF8u;
        goto label_163bf8;
    }
    ctx->pc = 0x163BF0u;
    {
        const bool branch_taken_0x163bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BF0u;
        // 0x163bf4: 0x26626afc  addiu       $v0, $s3, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bf0) {
            ctx->pc = 0x164218u;
            goto label_164218;
        }
    }
    ctx->pc = 0x163BF8u;
label_163bf8:
    // 0x163bf8: 0x24a23c0c  addiu       $v0, $a1, 0x3C0C
    ctx->pc = 0x163bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15372));
label_163bfc:
    // 0x163bfc: 0x10000032  b           . + 4 + (0x32 << 2)
label_163c00:
    if (ctx->pc == 0x163C00u) {
        ctx->pc = 0x163C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BFCu;
        // 0x163c00: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C04u;
        goto label_163c04;
    }
    ctx->pc = 0x163BFCu;
    {
        const bool branch_taken_0x163bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BFCu;
        // 0x163c00: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bfc) {
            ctx->pc = 0x163CC8u;
            goto label_163cc8;
        }
    }
    ctx->pc = 0x163C04u;
label_163c04:
    // 0x163c04: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_163c08:
    // 0x163c08: 0x24a53d60  addiu       $a1, $a1, 0x3D60
    ctx->pc = 0x163c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15712));
label_163c0c:
    // 0x163c0c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x163c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_163c10:
    // 0x163c10: 0xc065ae2  jal         func_196B88
label_163c14:
    if (ctx->pc == 0x163C14u) {
        ctx->pc = 0x163C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C10u;
        // 0x163c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C18u;
        goto label_163c18;
    }
    ctx->pc = 0x163C10u;
    SET_GPR_U32(ctx, 31, 0x163C18u);
    ctx->pc = 0x163C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C10u;
    // 0x163c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x163C10u, 0x163C18u)) {
        return;
    }
    ctx->pc = 0x163C18u;
label_163c18:
    // 0x163c18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x163c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_163c1c:
    // 0x163c1c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x163c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_163c20:
    // 0x163c20: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x163c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_163c24:
    // 0x163c24: 0xc065ae2  jal         func_196B88
label_163c28:
    if (ctx->pc == 0x163C28u) {
        ctx->pc = 0x163C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C24u;
        // 0x163c28: 0x24a53d68  addiu       $a1, $a1, 0x3D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C2Cu;
        goto label_163c2c;
    }
    ctx->pc = 0x163C24u;
    SET_GPR_U32(ctx, 31, 0x163C2Cu);
    ctx->pc = 0x163C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C24u;
    // 0x163c28: 0x24a53d68  addiu       $a1, $a1, 0x3D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x163C24u, 0x163C2Cu)) {
        return;
    }
    ctx->pc = 0x163C2Cu;
label_163c2c:
    // 0x163c2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x163c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_163c30:
    // 0x163c30: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x163c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_163c34:
    // 0x163c34: 0x24a53d70  addiu       $a1, $a1, 0x3D70
    ctx->pc = 0x163c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15728));
label_163c38:
    // 0x163c38: 0xc065ae2  jal         func_196B88
label_163c3c:
    if (ctx->pc == 0x163C3Cu) {
        ctx->pc = 0x163C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C38u;
        // 0x163c3c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C40u;
        goto label_163c40;
    }
    ctx->pc = 0x163C38u;
    SET_GPR_U32(ctx, 31, 0x163C40u);
    ctx->pc = 0x163C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C38u;
    // 0x163c3c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x163C38u, 0x163C40u)) {
        return;
    }
    ctx->pc = 0x163C40u;
label_163c40:
    // 0x163c40: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x163c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_163c44:
    // 0x163c44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x163c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_163c48:
    // 0x163c48: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x163c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_163c4c:
    // 0x163c4c: 0xc065ae2  jal         func_196B88
label_163c50:
    if (ctx->pc == 0x163C50u) {
        ctx->pc = 0x163C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C4Cu;
        // 0x163c50: 0x24a53cb0  addiu       $a1, $a1, 0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C54u;
        goto label_163c54;
    }
    ctx->pc = 0x163C4Cu;
    SET_GPR_U32(ctx, 31, 0x163C54u);
    ctx->pc = 0x163C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C4Cu;
    // 0x163c50: 0x24a53cb0  addiu       $a1, $a1, 0x3CB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B88u, 0x163C4Cu, 0x163C54u)) {
        return;
    }
    ctx->pc = 0x163C54u;
label_163c54:
    // 0x163c54: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x163c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_163c58:
    // 0x163c58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163c5c:
    // 0x163c5c: 0x92a30004  lbu         $v1, 0x4($s5)
    ctx->pc = 0x163c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_163c60:
    // 0x163c60: 0x54620081  bnel        $v1, $v0, . + 4 + (0x81 << 2)
label_163c64:
    if (ctx->pc == 0x163C64u) {
        ctx->pc = 0x163C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C60u;
        // 0x163c64: 0x92a20024  lbu         $v0, 0x24($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C68u;
        goto label_163c68;
    }
    ctx->pc = 0x163C60u;
    {
        const bool branch_taken_0x163c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163c60) {
            ctx->pc = 0x163C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163C60u;
            // 0x163c64: 0x92a20024  lbu         $v0, 0x24($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E68u;
            goto label_163e68;
        }
    }
    ctx->pc = 0x163C68u;
label_163c68:
    // 0x163c68: 0x8e626b20  lw          $v0, 0x6B20($s3)
    ctx->pc = 0x163c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27424)));
label_163c6c:
    // 0x163c6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_163c70:
    if (ctx->pc == 0x163C70u) {
        ctx->pc = 0x163C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C6Cu;
        // 0x163c70: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C74u;
        goto label_163c74;
    }
    ctx->pc = 0x163C6Cu;
    {
        const bool branch_taken_0x163c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C6Cu;
        // 0x163c70: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c6c) {
            ctx->pc = 0x163C80u;
            goto label_163c80;
        }
    }
    ctx->pc = 0x163C74u;
label_163c74:
    // 0x163c74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x163c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_163c78:
    // 0x163c78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163c78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163c7c:
    // 0x163c7c: 0xae626b20  sw          $v0, 0x6B20($s3)
    ctx->pc = 0x163c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 27424), GPR_U32(ctx, 2));
label_163c80:
    // 0x163c80: 0x26626afc  addiu       $v0, $s3, 0x6AFC
    ctx->pc = 0x163c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
label_163c84:
    // 0x163c84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x163c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163c88:
    // 0x163c88: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x163c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_163c8c:
    // 0x163c8c: 0x28820060  slti        $v0, $a0, 0x60
    ctx->pc = 0x163c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)96) ? 1 : 0);
label_163c90:
    // 0x163c90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_163c94:
    if (ctx->pc == 0x163C94u) {
        ctx->pc = 0x163C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C90u;
        // 0x163c94: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C98u;
        goto label_163c98;
    }
    ctx->pc = 0x163C90u;
    {
        const bool branch_taken_0x163c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C90u;
        // 0x163c94: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c90) {
            ctx->pc = 0x163CC4u;
            goto label_163cc4;
        }
    }
    ctx->pc = 0x163C98u;
label_163c98:
    // 0x163c98: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x163c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_163c9c:
    // 0x163c9c: 0x24433c0c  addiu       $v1, $v0, 0x3C0C
    ctx->pc = 0x163c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15372));
label_163ca0:
    // 0x163ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163ca4:
    // 0x163ca4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x163ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_163ca8:
    // 0x163ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163cac:
    // 0x163cac: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
label_163cb0:
    if (ctx->pc == 0x163CB0u) {
        ctx->pc = 0x163CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CACu;
        // 0x163cb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CB4u;
        goto label_163cb4;
    }
    ctx->pc = 0x163CACu;
    {
        const bool branch_taken_0x163cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CACu;
        // 0x163cb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cac) {
            ctx->pc = 0x163BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163bf8;
        }
    }
    ctx->pc = 0x163CB4u;
label_163cb4:
    // 0x163cb4: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x163cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_163cb8:
    // 0x163cb8: 0x28820060  slti        $v0, $a0, 0x60
    ctx->pc = 0x163cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)96) ? 1 : 0);
label_163cbc:
    // 0x163cbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_163cc0:
    if (ctx->pc == 0x163CC0u) {
        ctx->pc = 0x163CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CBCu;
        // 0x163cc0: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CC4u;
        goto label_163cc4;
    }
    ctx->pc = 0x163CBCu;
    {
        const bool branch_taken_0x163cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CBCu;
        // 0x163cc0: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cbc) {
            ctx->pc = 0x163CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ca8;
        }
    }
    ctx->pc = 0x163CC4u;
label_163cc4:
    // 0x163cc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x163cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163cc8:
    // 0x163cc8: 0x12200153  beqz        $s1, . + 4 + (0x153 << 2)
label_163ccc:
    if (ctx->pc == 0x163CCCu) {
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CC8u;
        // 0x163ccc: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CD0u;
        goto label_163cd0;
    }
    ctx->pc = 0x163CC8u;
    {
        const bool branch_taken_0x163cc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CC8u;
        // 0x163ccc: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cc8) {
            ctx->pc = 0x164218u;
            goto label_164218;
        }
    }
    ctx->pc = 0x163CD0u;
label_163cd0:
    // 0x163cd0: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x163cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_163cd4:
    // 0x163cd4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_163cd8:
    if (ctx->pc == 0x163CD8u) {
        ctx->pc = 0x163CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CD4u;
        // 0x163cd8: 0xaea00028  sw          $zero, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CDCu;
        goto label_163cdc;
    }
    ctx->pc = 0x163CD4u;
    {
        const bool branch_taken_0x163cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163cd4) {
            ctx->pc = 0x163CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CD4u;
            // 0x163cd8: 0xaea00028  sw          $zero, 0x28($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163CDCu;
            goto label_163cdc;
        }
    }
    ctx->pc = 0x163CDCu;
label_163cdc:
    // 0x163cdc: 0x92a30024  lbu         $v1, 0x24($s5)
    ctx->pc = 0x163cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_163ce0:
    // 0x163ce0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x163ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163ce4:
    // 0x163ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ce8:
    // 0x163ce8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x163ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_163cec:
    // 0x163cec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_163cf0:
    if (ctx->pc == 0x163CF0u) {
        ctx->pc = 0x163CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CECu;
        // 0x163cf0: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CF4u;
        goto label_163cf4;
    }
    ctx->pc = 0x163CECu;
    {
        const bool branch_taken_0x163cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CECu;
        // 0x163cf0: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cec) {
            ctx->pc = 0x163D20u;
            goto label_163d20;
        }
    }
    ctx->pc = 0x163CF4u;
label_163cf4:
    // 0x163cf4: 0x27a40002  addiu       $a0, $sp, 0x2
    ctx->pc = 0x163cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_163cf8:
    // 0x163cf8: 0x26a30005  addiu       $v1, $s5, 0x5
    ctx->pc = 0x163cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
label_163cfc:
    // 0x163cfc: 0x0  nop
    ctx->pc = 0x163cfcu;
    // NOP
label_163d00:
    // 0x163d00: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x163d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_163d04:
    // 0x163d04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_163d08:
    // 0x163d08: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x163d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_163d0c:
    // 0x163d0c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x163d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_163d10:
    // 0x163d10: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x163d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_163d14:
    // 0x163d14: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x163d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_163d18:
    // 0x163d18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_163d1c:
    if (ctx->pc == 0x163D1Cu) {
        ctx->pc = 0x163D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D18u;
        // 0x163d1c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D20u;
        goto label_163d20;
    }
    ctx->pc = 0x163D18u;
    {
        const bool branch_taken_0x163d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D18u;
        // 0x163d1c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d18) {
            ctx->pc = 0x163D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163d00;
        }
    }
    ctx->pc = 0x163D20u;
label_163d20:
    // 0x163d20: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x163d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_163d24:
    // 0x163d24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x163d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163d28:
    // 0x163d28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_163d2c:
    // 0x163d2c: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x163d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_163d30:
    // 0x163d30: 0xc065b1c  jal         func_196C70
label_163d34:
    if (ctx->pc == 0x163D34u) {
        ctx->pc = 0x163D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D30u;
        // 0x163d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D38u;
        goto label_163d38;
    }
    ctx->pc = 0x163D30u;
    SET_GPR_U32(ctx, 31, 0x163D38u);
    ctx->pc = 0x163D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D30u;
    // 0x163d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196C70u, 0x163D30u, 0x163D38u)) {
        return;
    }
    ctx->pc = 0x163D38u;
label_163d38:
    // 0x163d38: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x163d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_163d3c:
    // 0x163d3c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_163d40:
    if (ctx->pc == 0x163D40u) {
        ctx->pc = 0x163D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D3Cu;
        // 0x163d40: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D44u;
        goto label_163d44;
    }
    ctx->pc = 0x163D3Cu;
    {
        const bool branch_taken_0x163d3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D3Cu;
        // 0x163d40: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d3c) {
            ctx->pc = 0x163D54u;
            goto label_163d54;
        }
    }
    ctx->pc = 0x163D44u;
label_163d44:
    // 0x163d44: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x163d44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_163d48:
    // 0x163d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163d4c:
    // 0x163d4c: 0xc059792  jal         func_165E48
label_163d50:
    if (ctx->pc == 0x163D50u) {
        ctx->pc = 0x163D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D4Cu;
        // 0x163d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D54u;
        goto label_163d54;
    }
    ctx->pc = 0x163D4Cu;
    SET_GPR_U32(ctx, 31, 0x163D54u);
    ctx->pc = 0x163D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D4Cu;
    // 0x163d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165E48u, 0x163D4Cu, 0x163D54u)) {
        return;
    }
    ctx->pc = 0x163D54u;
label_163d54:
    // 0x163d54: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x163d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_163d58:
    // 0x163d58: 0xc0808f0  jal         func_2023C0
label_163d5c:
    if (ctx->pc == 0x163D5Cu) {
        ctx->pc = 0x163D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D58u;
        // 0x163d5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D60u;
        goto label_163d60;
    }
    ctx->pc = 0x163D58u;
    SET_GPR_U32(ctx, 31, 0x163D60u);
    ctx->pc = 0x163D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D58u;
    // 0x163d5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x163D58u, 0x163D60u)) {
        return;
    }
    ctx->pc = 0x163D60u;
label_163d60:
    // 0x163d60: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x163d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_163d64:
    // 0x163d64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163d68:
    // 0x163d68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x163d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163d6c:
    // 0x163d6c: 0xc056a7a  jal         func_15A9E8
label_163d70:
    if (ctx->pc == 0x163D70u) {
        ctx->pc = 0x163D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D6Cu;
        // 0x163d70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D74u;
        goto label_163d74;
    }
    ctx->pc = 0x163D6Cu;
    SET_GPR_U32(ctx, 31, 0x163D74u);
    ctx->pc = 0x163D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D6Cu;
    // 0x163d70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A9E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A9E8u, 0x163D6Cu, 0x163D74u)) {
        return;
    }
    ctx->pc = 0x163D74u;
label_163d74:
    // 0x163d74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x163d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_163d78:
    // 0x163d78: 0xc0955f8  jal         func_2557E0
label_163d7c:
    if (ctx->pc == 0x163D7Cu) {
        ctx->pc = 0x163D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D78u;
        // 0x163d7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D80u;
        goto label_163d80;
    }
    ctx->pc = 0x163D78u;
    SET_GPR_U32(ctx, 31, 0x163D80u);
    ctx->pc = 0x163D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D78u;
    // 0x163d7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x163D78u, 0x163D80u)) {
        return;
    }
    ctx->pc = 0x163D80u;
label_163d80:
    // 0x163d80: 0xae350024  sw          $s5, 0x24($s1)
    ctx->pc = 0x163d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 21));
label_163d84:
    // 0x163d84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x163d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163d88:
    // 0x163d88: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x163d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_163d8c:
    // 0x163d8c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x163d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_163d90:
    // 0x163d90: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x163d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_163d94:
    // 0x163d94: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x163d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_163d98:
    // 0x163d98: 0xa6230034  sh          $v1, 0x34($s1)
    ctx->pc = 0x163d98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 3));
label_163d9c:
    // 0x163d9c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x163d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_163da0:
    // 0x163da0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x163da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_163da4:
    // 0x163da4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x163da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_163da8:
    // 0x163da8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x163da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_163dac:
    // 0x163dac: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x163dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_163db0:
    // 0x163db0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x163db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_163db4:
    // 0x163db4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x163db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_163db8:
    // 0x163db8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x163db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_163dbc:
    // 0x163dbc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x163dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_163dc0:
    // 0x163dc0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x163dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_163dc4:
    // 0x163dc4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x163dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_163dc8:
    // 0x163dc8: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x163dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_163dcc:
    // 0x163dcc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x163dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_163dd0:
    // 0x163dd0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x163dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_163dd4:
    // 0x163dd4: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x163dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_163dd8:
    // 0x163dd8: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x163dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_163ddc:
    // 0x163ddc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x163ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_163de0:
    // 0x163de0: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x163de0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_163de4:
    // 0x163de4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_163de8:
    // 0x163de8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x163de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_163dec:
    // 0x163dec: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x163decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_163df0:
    // 0x163df0: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x163df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_163df4:
    // 0x163df4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x163df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_163df8:
    // 0x163df8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x163df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_163dfc:
    // 0x163dfc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x163dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_163e00:
    // 0x163e00: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x163e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_163e04:
    // 0x163e04: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x163e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_163e08:
    // 0x163e08: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x163e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_163e0c:
    // 0x163e0c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x163e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_163e10:
    // 0x163e10: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x163e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
label_163e14:
    // 0x163e14: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x163e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_163e18:
    // 0x163e18: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x163e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
label_163e1c:
    // 0x163e1c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x163e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_163e20:
    // 0x163e20: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x163e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_163e24:
    // 0x163e24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_163e28:
    // 0x163e28: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x163e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_163e2c:
    // 0x163e2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x163e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_163e30:
    // 0x163e30: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_163e34:
    if (ctx->pc == 0x163E34u) {
        ctx->pc = 0x163E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E30u;
        // 0x163e34: 0xac710060  sw          $s1, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E38u;
        goto label_163e38;
    }
    ctx->pc = 0x163E30u;
    {
        const bool branch_taken_0x163e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163e30) {
            ctx->pc = 0x163E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163E30u;
            // 0x163e34: 0xac710060  sw          $s1, 0x60($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163E38u;
label_163e38:
    // 0x163e38: 0x8e626490  lw          $v0, 0x6490($s3)
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 25744)));
label_163e3c:
    // 0x163e3c: 0x8e636b1c  lw          $v1, 0x6B1C($s3)
    ctx->pc = 0x163e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27420)));
label_163e40:
    // 0x163e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_163e44:
    // 0x163e44: 0xae626490  sw          $v0, 0x6490($s3)
    ctx->pc = 0x163e44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 25744), GPR_U32(ctx, 2));
label_163e48:
    // 0x163e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_163e4c:
    // 0x163e4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x163e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_163e50:
    // 0x163e50: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x163e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_163e54:
    // 0x163e54: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x163e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_163e58:
    // 0x163e58: 0x8e626b1c  lw          $v0, 0x6B1C($s3)
    ctx->pc = 0x163e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27420)));
label_163e5c:
    // 0x163e5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_163e60:
    // 0x163e60: 0x100000ec  b           . + 4 + (0xEC << 2)
label_163e64:
    if (ctx->pc == 0x163E64u) {
        ctx->pc = 0x163E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E60u;
        // 0x163e64: 0xae626b1c  sw          $v0, 0x6B1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 27420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E68u;
        goto label_163e68;
    }
    ctx->pc = 0x163E60u;
    {
        const bool branch_taken_0x163e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E60u;
        // 0x163e64: 0xae626b1c  sw          $v0, 0x6B1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 27420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e60) {
            ctx->pc = 0x164214u;
            goto label_164214;
        }
    }
    ctx->pc = 0x163E68u;
label_163e68:
    // 0x163e68: 0x26636afc  addiu       $v1, $s3, 0x6AFC
    ctx->pc = 0x163e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 27388));
label_163e6c:
    // 0x163e6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x163e6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163e70:
    // 0x163e70: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_163e74:
    if (ctx->pc == 0x163E74u) {
        ctx->pc = 0x163E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E70u;
        // 0x163e74: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E78u;
        goto label_163e78;
    }
    ctx->pc = 0x163E70u;
    {
        const bool branch_taken_0x163e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E70u;
        // 0x163e74: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e70) {
            ctx->pc = 0x164214u;
            goto label_164214;
        }
    }
    ctx->pc = 0x163E78u;
label_163e78:
    // 0x163e78: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x163e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_163e7c:
    // 0x163e7c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x163e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_163e80:
    // 0x163e80: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x163e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_163e84:
    // 0x163e84: 0x8e626b20  lw          $v0, 0x6B20($s3)
    ctx->pc = 0x163e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27424)));
label_163e88:
    // 0x163e88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_163e8c:
    if (ctx->pc == 0x163E8Cu) {
        ctx->pc = 0x163E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E88u;
        // 0x163e8c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E90u;
        goto label_163e90;
    }
    ctx->pc = 0x163E88u;
    {
        const bool branch_taken_0x163e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E88u;
        // 0x163e8c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e88) {
            ctx->pc = 0x163E9Cu;
            goto label_163e9c;
        }
    }
    ctx->pc = 0x163E90u;
label_163e90:
    // 0x163e90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_163e94:
    // 0x163e94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163e98:
    // 0x163e98: 0xae626b20  sw          $v0, 0x6B20($s3)
    ctx->pc = 0x163e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 27424), GPR_U32(ctx, 2));
label_163e9c:
    // 0x163e9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x163e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163ea0:
    // 0x163ea0: 0x28820060  slti        $v0, $a0, 0x60
    ctx->pc = 0x163ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)96) ? 1 : 0);
label_163ea4:
    // 0x163ea4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_163ea8:
    if (ctx->pc == 0x163EA8u) {
        ctx->pc = 0x163EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EA4u;
        // 0x163ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EACu;
        goto label_163eac;
    }
    ctx->pc = 0x163EA4u;
    {
        const bool branch_taken_0x163ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EA4u;
        // 0x163ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ea4) {
            ctx->pc = 0x163EE4u;
            goto label_163ee4;
        }
    }
    ctx->pc = 0x163EACu;
label_163eac:
    // 0x163eac: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x163eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_163eb0:
    // 0x163eb0: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x163eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_163eb4:
    // 0x163eb4: 0x24433c0c  addiu       $v1, $v0, 0x3C0C
    ctx->pc = 0x163eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15372));
label_163eb8:
    // 0x163eb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x163eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163ebc:
    // 0x163ebc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x163ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_163ec0:
    // 0x163ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163ec4:
    // 0x163ec4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_163ec8:
    if (ctx->pc == 0x163EC8u) {
        ctx->pc = 0x163EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC4u;
        // 0x163ec8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163ECCu;
        goto label_163ecc;
    }
    ctx->pc = 0x163EC4u;
    {
        const bool branch_taken_0x163ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC4u;
        // 0x163ec8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ec4) {
            ctx->pc = 0x163EF4u;
            goto label_163ef4;
        }
    }
    ctx->pc = 0x163ECCu;
label_163ecc:
    // 0x163ecc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_163ed0:
    // 0x163ed0: 0x24a6006c  addiu       $a2, $a1, 0x6C
    ctx->pc = 0x163ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
label_163ed4:
    // 0x163ed4: 0x28820060  slti        $v0, $a0, 0x60
    ctx->pc = 0x163ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)96) ? 1 : 0);
label_163ed8:
    // 0x163ed8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_163edc:
    if (ctx->pc == 0x163EDCu) {
        ctx->pc = 0x163EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ED8u;
        // 0x163edc: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EE0u;
        goto label_163ee0;
    }
    ctx->pc = 0x163ED8u;
    {
        const bool branch_taken_0x163ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ED8u;
        // 0x163edc: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ed8) {
            ctx->pc = 0x163EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ec0;
        }
    }
    ctx->pc = 0x163EE0u;
label_163ee0:
    // 0x163ee0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x163ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ee4:
    // 0x163ee4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_163ee8:
    if (ctx->pc == 0x163EE8u) {
        ctx->pc = 0x163EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE4u;
        // 0x163ee8: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EECu;
        goto label_163eec;
    }
    ctx->pc = 0x163EE4u;
    {
        const bool branch_taken_0x163ee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x163EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE4u;
        // 0x163ee8: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ee4) {
            ctx->pc = 0x163F00u;
            goto label_163f00;
        }
    }
    ctx->pc = 0x163EECu;
label_163eec:
    // 0x163eec: 0x100000ca  b           . + 4 + (0xCA << 2)
label_163ef0:
    if (ctx->pc == 0x163EF0u) {
        ctx->pc = 0x163EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EECu;
        // 0x163ef0: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EF4u;
        goto label_163ef4;
    }
    ctx->pc = 0x163EECu;
    {
        const bool branch_taken_0x163eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EECu;
        // 0x163ef0: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163eec) {
            ctx->pc = 0x164218u;
            goto label_164218;
        }
    }
    ctx->pc = 0x163EF4u;
label_163ef4:
    // 0x163ef4: 0x24c23c0c  addiu       $v0, $a2, 0x3C0C
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15372));
label_163ef8:
    // 0x163ef8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_163efc:
    if (ctx->pc == 0x163EFCu) {
        ctx->pc = 0x163EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EF8u;
        // 0x163efc: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F00u;
        goto label_163f00;
    }
    ctx->pc = 0x163EF8u;
    {
        const bool branch_taken_0x163ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EF8u;
        // 0x163efc: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ef8) {
            ctx->pc = 0x163EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ee4;
        }
    }
    ctx->pc = 0x163F00u;
label_163f00:
    // 0x163f00: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x163f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_163f04:
    // 0x163f04: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x163f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_163f08:
    // 0x163f08: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_163f0c:
    // 0x163f0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_163f10:
    if (ctx->pc == 0x163F10u) {
        ctx->pc = 0x163F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F0Cu;
        // 0x163f10: 0x90420007  lbu         $v0, 0x7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F14u;
        goto label_163f14;
    }
    ctx->pc = 0x163F0Cu;
    {
        const bool branch_taken_0x163f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F0Cu;
        // 0x163f10: 0x90420007  lbu         $v0, 0x7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f0c) {
            ctx->pc = 0x163F1Cu;
            goto label_163f1c;
        }
    }
    ctx->pc = 0x163F14u;
label_163f14:
    // 0x163f14: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
label_163f18:
    if (ctx->pc == 0x163F18u) {
        ctx->pc = 0x163F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F14u;
        // 0x163f18: 0x26c30001  addiu       $v1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F1Cu;
        goto label_163f1c;
    }
    ctx->pc = 0x163F14u;
    {
        const bool branch_taken_0x163f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F14u;
        // 0x163f18: 0x26c30001  addiu       $v1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f14) {
            ctx->pc = 0x164200u;
            goto label_164200;
        }
    }
    ctx->pc = 0x163F1Cu;
label_163f1c:
    // 0x163f1c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x163f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_163f20:
    // 0x163f20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x163f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163f24:
    // 0x163f24: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x163f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_163f28:
    // 0x163f28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x163f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163f2c:
    // 0x163f2c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x163f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_163f30:
    // 0x163f30: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x163f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_163f34:
    // 0x163f34: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x163f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_163f38:
    // 0x163f38: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x163f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_163f3c:
    // 0x163f3c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x163f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_163f40:
    // 0x163f40: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x163f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_163f44:
    // 0x163f44: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x163f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_163f48:
    // 0x163f48: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x163f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_163f4c:
    // 0x163f4c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x163f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_163f50:
    // 0x163f50: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x163f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_163f54:
    // 0x163f54: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x163f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_163f58:
    // 0x163f58: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x163f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_163f5c:
    // 0x163f5c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x163f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_163f60:
    // 0x163f60: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x163f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_163f64:
    // 0x163f64: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x163f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_163f68:
    // 0x163f68: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x163f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_163f6c:
    // 0x163f6c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x163f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_163f70:
    // 0x163f70: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x163f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_163f74:
    // 0x163f74: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x163f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_163f78:
    // 0x163f78: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x163f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_163f7c:
    // 0x163f7c: 0xae350024  sw          $s5, 0x24($s1)
    ctx->pc = 0x163f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 21));
label_163f80:
    // 0x163f80: 0xa2360028  sb          $s6, 0x28($s1)
    ctx->pc = 0x163f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 22));
label_163f84:
    // 0x163f84: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x163f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_163f88:
    // 0x163f88: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x163f88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_163f8c:
    // 0x163f8c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_163f90:
    // 0x163f90: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x163f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_163f94:
    // 0x163f94: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x163f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_163f98:
    // 0x163f98: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x163f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_163f9c:
    // 0x163f9c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x163f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_163fa0:
    // 0x163fa0: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x163fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_163fa4:
    // 0x163fa4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_163fa8:
    // 0x163fa8: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x163fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_163fac:
    // 0x163fac: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x163facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_163fb0:
    // 0x163fb0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x163fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_163fb4:
    // 0x163fb4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_163fb8:
    // 0x163fb8: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x163fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
label_163fbc:
    // 0x163fbc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x163fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_163fc0:
    // 0x163fc0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x163fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_163fc4:
    // 0x163fc4: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_163fc8:
    // 0x163fc8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_163fcc:
    // 0x163fcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_163fd0:
    if (ctx->pc == 0x163FD0u) {
        ctx->pc = 0x163FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FCCu;
        // 0x163fd0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FD4u;
        goto label_163fd4;
    }
    ctx->pc = 0x163FCCu;
    {
        const bool branch_taken_0x163fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FCCu;
        // 0x163fd0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fcc) {
            ctx->pc = 0x163FDCu;
            goto label_163fdc;
        }
    }
    ctx->pc = 0x163FD4u;
label_163fd4:
    // 0x163fd4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x163fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_163fd8:
    // 0x163fd8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x163fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_163fdc:
    // 0x163fdc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x163fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163fe0:
    // 0x163fe0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_163fe4:
    if (ctx->pc == 0x163FE4u) {
        ctx->pc = 0x163FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FE0u;
        // 0x163fe4: 0x8c7e0018  lw          $fp, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FE8u;
        goto label_163fe8;
    }
    ctx->pc = 0x163FE0u;
    {
        const bool branch_taken_0x163fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163fe0) {
            ctx->pc = 0x163FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163FE0u;
            // 0x163fe4: 0x8c7e0018  lw          $fp, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163FE8u;
            goto label_163fe8;
        }
    }
    ctx->pc = 0x163FE8u;
label_163fe8:
    // 0x163fe8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x163fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_163fec:
    // 0x163fec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_163ff0:
    if (ctx->pc == 0x163FF0u) {
        ctx->pc = 0x163FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FECu;
        // 0x163ff0: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FF4u;
        goto label_163ff4;
    }
    ctx->pc = 0x163FECu;
    {
        const bool branch_taken_0x163fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fec) {
            ctx->pc = 0x163FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163FECu;
            // 0x163ff0: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164000u;
            goto label_164000;
        }
    }
    ctx->pc = 0x163FF4u;
label_163ff4:
    // 0x163ff4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x163ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_163ff8:
    // 0x163ff8: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x163ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_163ffc:
    // 0x163ffc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x163ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_164000:
    // 0x164000: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_164004:
    if (ctx->pc == 0x164004u) {
        ctx->pc = 0x164004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164000u;
        // 0x164004: 0x8c570018  lw          $s7, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164008u;
        goto label_164008;
    }
    ctx->pc = 0x164000u;
    {
        const bool branch_taken_0x164000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164000) {
            ctx->pc = 0x164004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164000u;
            // 0x164004: 0x8c570018  lw          $s7, 0x18($v0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164008u;
            goto label_164008;
        }
    }
    ctx->pc = 0x164008u;
label_164008:
    // 0x164008: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_16400c:
    // 0x16400c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16400cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164010:
    // 0x164010: 0xc065b1c  jal         func_196C70
label_164014:
    if (ctx->pc == 0x164014u) {
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164018u;
        goto label_164018;
    }
    ctx->pc = 0x164010u;
    SET_GPR_U32(ctx, 31, 0x164018u);
    ctx->pc = 0x164014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164010u;
    // 0x164014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196C70u, 0x164010u, 0x164018u)) {
        return;
    }
    ctx->pc = 0x164018u;
label_164018:
    // 0x164018: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x164018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16401c:
    // 0x16401c: 0x5240002c  beql        $s2, $zero, . + 4 + (0x2C << 2)
label_164020:
    if (ctx->pc == 0x164020u) {
        ctx->pc = 0x164020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16401Cu;
        // 0x164020: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164024u;
        goto label_164024;
    }
    ctx->pc = 0x16401Cu;
    {
        const bool branch_taken_0x16401c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16401c) {
            ctx->pc = 0x164020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16401Cu;
            // 0x164020: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1640D0u;
            goto label_1640d0;
        }
    }
    ctx->pc = 0x164024u;
label_164024:
    // 0x164024: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x164024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_164028:
    // 0x164028: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_16402c:
    if (ctx->pc == 0x16402Cu) {
        ctx->pc = 0x16402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164028u;
        // 0x16402c: 0x8fa70070  lw          $a3, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164030u;
        goto label_164030;
    }
    ctx->pc = 0x164028u;
    {
        const bool branch_taken_0x164028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164028u;
        // 0x16402c: 0x8fa70070  lw          $a3, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164028) {
            ctx->pc = 0x164044u;
            goto label_164044;
        }
    }
    ctx->pc = 0x164030u;
label_164030:
    // 0x164030: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_164034:
    // 0x164034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164038:
    // 0x164038: 0xc059792  jal         func_165E48
label_16403c:
    if (ctx->pc == 0x16403Cu) {
        ctx->pc = 0x16403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164038u;
        // 0x16403c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164040u;
        goto label_164040;
    }
    ctx->pc = 0x164038u;
    SET_GPR_U32(ctx, 31, 0x164040u);
    ctx->pc = 0x16403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164038u;
    // 0x16403c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165E48u, 0x164038u, 0x164040u)) {
        return;
    }
    ctx->pc = 0x164040u;
label_164040:
    // 0x164040: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x164040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_164044:
    // 0x164044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164048:
    // 0x164048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16404c:
    // 0x16404c: 0xc076e1e  jal         func_1DB878
label_164050:
    if (ctx->pc == 0x164050u) {
        ctx->pc = 0x164050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16404Cu;
        // 0x164050: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164054u;
        goto label_164054;
    }
    ctx->pc = 0x16404Cu;
    SET_GPR_U32(ctx, 31, 0x164054u);
    ctx->pc = 0x164050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16404Cu;
    // 0x164050: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB878u, 0x16404Cu, 0x164054u)) {
        return;
    }
    ctx->pc = 0x164054u;
label_164054:
    // 0x164054: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x164054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_164058:
    // 0x164058: 0xc07b39a  jal         func_1ECE68
label_16405c:
    if (ctx->pc == 0x16405Cu) {
        ctx->pc = 0x16405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164058u;
        // 0x16405c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164060u;
        goto label_164060;
    }
    ctx->pc = 0x164058u;
    SET_GPR_U32(ctx, 31, 0x164060u);
    ctx->pc = 0x16405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164058u;
    // 0x16405c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECE68u, 0x164058u, 0x164060u)) {
        return;
    }
    ctx->pc = 0x164060u;
label_164060:
    // 0x164060: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_164064:
    if (ctx->pc == 0x164064u) {
        ctx->pc = 0x164064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164060u;
        // 0x164064: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164068u;
        goto label_164068;
    }
    ctx->pc = 0x164060u;
    {
        const bool branch_taken_0x164060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164060u;
        // 0x164064: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164060) {
            ctx->pc = 0x164070u;
            goto label_164070;
        }
    }
    ctx->pc = 0x164068u;
label_164068:
    // 0x164068: 0xc07b556  jal         func_1ED558
label_16406c:
    if (ctx->pc == 0x16406Cu) {
        ctx->pc = 0x16406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164068u;
        // 0x16406c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164070u;
        goto label_164070;
    }
    ctx->pc = 0x164068u;
    SET_GPR_U32(ctx, 31, 0x164070u);
    ctx->pc = 0x16406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164068u;
    // 0x16406c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED558u, 0x164068u, 0x164070u)) {
        return;
    }
    ctx->pc = 0x164070u;
label_164070:
    // 0x164070: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x164070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_164074:
    // 0x164074: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x164074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_164078:
    // 0x164078: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_16407c:
    // 0x16407c: 0xc05ee90  jal         func_17BA40
label_164080:
    if (ctx->pc == 0x164080u) {
        ctx->pc = 0x164080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16407Cu;
        // 0x164080: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164084u;
        goto label_164084;
    }
    ctx->pc = 0x16407Cu;
    SET_GPR_U32(ctx, 31, 0x164084u);
    ctx->pc = 0x164080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16407Cu;
    // 0x164080: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x16407Cu, 0x164084u)) {
        return;
    }
    ctx->pc = 0x164084u;
label_164084:
    // 0x164084: 0xc081be4  jal         func_206F90
label_164088:
    if (ctx->pc == 0x164088u) {
        ctx->pc = 0x164088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164084u;
        // 0x164088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16408Cu;
        goto label_16408c;
    }
    ctx->pc = 0x164084u;
    SET_GPR_U32(ctx, 31, 0x16408Cu);
    ctx->pc = 0x164088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164084u;
    // 0x164088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x164084u, 0x16408Cu)) {
        return;
    }
    ctx->pc = 0x16408Cu;
label_16408c:
    // 0x16408c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16408cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164090:
    // 0x164090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164094:
    // 0x164094: 0xc081bfa  jal         func_206FE8
label_164098:
    if (ctx->pc == 0x164098u) {
        ctx->pc = 0x164098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164094u;
        // 0x164098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16409Cu;
        goto label_16409c;
    }
    ctx->pc = 0x164094u;
    SET_GPR_U32(ctx, 31, 0x16409Cu);
    ctx->pc = 0x164098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164094u;
    // 0x164098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206FE8u, 0x164094u, 0x16409Cu)) {
        return;
    }
    ctx->pc = 0x16409Cu;
label_16409c:
    // 0x16409c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1640a0:
    // 0x1640a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1640a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1640a4:
    // 0x1640a4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1640a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1640a8:
    // 0x1640a8: 0xc09418e  jal         func_250638
label_1640ac:
    if (ctx->pc == 0x1640ACu) {
        ctx->pc = 0x1640ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640A8u;
        // 0x1640ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640B0u;
        goto label_1640b0;
    }
    ctx->pc = 0x1640A8u;
    SET_GPR_U32(ctx, 31, 0x1640B0u);
    ctx->pc = 0x1640ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640A8u;
    // 0x1640ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250638u, 0x1640A8u, 0x1640B0u)) {
        return;
    }
    ctx->pc = 0x1640B0u;
label_1640b0:
    // 0x1640b0: 0x52e00007  beql        $s7, $zero, . + 4 + (0x7 << 2)
label_1640b4:
    if (ctx->pc == 0x1640B4u) {
        ctx->pc = 0x1640B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B0u;
        // 0x1640b4: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640B8u;
        goto label_1640b8;
    }
    ctx->pc = 0x1640B0u;
    {
        const bool branch_taken_0x1640b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640b0) {
            ctx->pc = 0x1640B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1640B0u;
            // 0x1640b4: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1640D0u;
            goto label_1640d0;
        }
    }
    ctx->pc = 0x1640B8u;
label_1640b8:
    // 0x1640b8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_1640bc:
    if (ctx->pc == 0x1640BCu) {
        ctx->pc = 0x1640BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B8u;
        // 0x1640bc: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640C0u;
        goto label_1640c0;
    }
    ctx->pc = 0x1640B8u;
    {
        const bool branch_taken_0x1640b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640b8) {
            ctx->pc = 0x1640BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1640B8u;
            // 0x1640bc: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1640D0u;
            goto label_1640d0;
        }
    }
    ctx->pc = 0x1640C0u;
label_1640c0:
    // 0x1640c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1640c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1640c4:
    // 0x1640c4: 0xc09d55c  jal         func_275570
label_1640c8:
    if (ctx->pc == 0x1640C8u) {
        ctx->pc = 0x1640C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640C4u;
        // 0x1640c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640CCu;
        goto label_1640cc;
    }
    ctx->pc = 0x1640C4u;
    SET_GPR_U32(ctx, 31, 0x1640CCu);
    ctx->pc = 0x1640C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640C4u;
    // 0x1640c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x1640C4u, 0x1640CCu)) {
        return;
    }
    ctx->pc = 0x1640CCu;
label_1640cc:
    // 0x1640cc: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1640ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_1640d0:
    // 0x1640d0: 0xae370010  sw          $s7, 0x10($s1)
    ctx->pc = 0x1640d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 23));
label_1640d4:
    // 0x1640d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1640d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1640d8:
    // 0x1640d8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1640d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_1640dc:
    // 0x1640dc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1640dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1640e0:
    // 0x1640e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1640e4:
    if (ctx->pc == 0x1640E4u) {
        ctx->pc = 0x1640E8u;
        goto label_1640e8;
    }
    ctx->pc = 0x1640E0u;
    {
        const bool branch_taken_0x1640e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640e0) {
            ctx->pc = 0x1640F4u;
            goto label_1640f4;
        }
    }
    ctx->pc = 0x1640E8u;
label_1640e8:
    // 0x1640e8: 0xc0420a6  jal         func_108298
label_1640ec:
    if (ctx->pc == 0x1640ECu) {
        ctx->pc = 0x1640ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640E8u;
        // 0x1640ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640F0u;
        goto label_1640f0;
    }
    ctx->pc = 0x1640E8u;
    SET_GPR_U32(ctx, 31, 0x1640F0u);
    ctx->pc = 0x1640ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640E8u;
    // 0x1640ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108298u, 0x1640E8u, 0x1640F0u)) {
        return;
    }
    ctx->pc = 0x1640F0u;
label_1640f0:
    // 0x1640f0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1640f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1640f4:
    // 0x1640f4: 0x57c00001  bnel        $fp, $zero, . + 4 + (0x1 << 2)
label_1640f8:
    if (ctx->pc == 0x1640F8u) {
        ctx->pc = 0x1640F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640F4u;
        // 0x1640f8: 0xae3e0018  sw          $fp, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640FCu;
        goto label_1640fc;
    }
    ctx->pc = 0x1640F4u;
    {
        const bool branch_taken_0x1640f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1640f4) {
            ctx->pc = 0x1640F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1640F4u;
            // 0x1640f8: 0xae3e0018  sw          $fp, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1640FCu;
            goto label_1640fc;
        }
    }
    ctx->pc = 0x1640FCu;
label_1640fc:
    // 0x1640fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1640fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_164100:
    // 0x164100: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_164104:
    if (ctx->pc == 0x164104u) {
        ctx->pc = 0x164104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164100u;
        // 0x164104: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164108u;
        goto label_164108;
    }
    ctx->pc = 0x164100u;
    {
        const bool branch_taken_0x164100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164100) {
            ctx->pc = 0x164104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164100u;
            // 0x164104: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164108u;
            goto label_164108;
        }
    }
    ctx->pc = 0x164108u;
label_164108:
    // 0x164108: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x164108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_16410c:
    // 0x16410c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_164110:
    if (ctx->pc == 0x164110u) {
        ctx->pc = 0x164110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16410Cu;
        // 0x164110: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164114u;
        goto label_164114;
    }
    ctx->pc = 0x16410Cu;
    {
        const bool branch_taken_0x16410c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16410c) {
            ctx->pc = 0x164110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16410Cu;
            // 0x164110: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164114u;
            goto label_164114;
        }
    }
    ctx->pc = 0x164114u;
label_164114:
    // 0x164114: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x164114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_164118:
    // 0x164118: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16411c:
    // 0x16411c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x16411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_164120:
    // 0x164120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_164124:
    // 0x164124: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x164124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_164128:
    // 0x164128: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_16412c:
    if (ctx->pc == 0x16412Cu) {
        ctx->pc = 0x16412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164128u;
        // 0x16412c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164130u;
        goto label_164130;
    }
    ctx->pc = 0x164128u;
    {
        const bool branch_taken_0x164128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x16412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164128u;
        // 0x16412c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164128) {
            ctx->pc = 0x164158u;
            goto label_164158;
        }
    }
    ctx->pc = 0x164130u;
label_164130:
    // 0x164130: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x164130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_164134:
    // 0x164134: 0xc0808f0  jal         func_2023C0
label_164138:
    if (ctx->pc == 0x164138u) {
        ctx->pc = 0x164138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164134u;
        // 0x164138: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16413Cu;
        goto label_16413c;
    }
    ctx->pc = 0x164134u;
    SET_GPR_U32(ctx, 31, 0x16413Cu);
    ctx->pc = 0x164138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164134u;
    // 0x164138: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x164134u, 0x16413Cu)) {
        return;
    }
    ctx->pc = 0x16413Cu;
label_16413c:
    // 0x16413c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164140:
    // 0x164140: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_164144:
    // 0x164144: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x164144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_164148:
    // 0x164148: 0x40f809  jalr        $v0
label_16414c:
    if (ctx->pc == 0x16414Cu) {
        ctx->pc = 0x16414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164148u;
        // 0x16414c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164150u;
        goto label_164150;
    }
    ctx->pc = 0x164148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164150u);
        ctx->pc = 0x16414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164148u;
        // 0x16414c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164148u, 0x164150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164150u;
label_164150:
    // 0x164150: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x164150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
label_164154:
    // 0x164154: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x164154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_164158:
    // 0x164158: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16415c:
    if (ctx->pc == 0x16415Cu) {
        ctx->pc = 0x16415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164158u;
        // 0x16415c: 0xac510060  sw          $s1, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164160u;
        goto label_164160;
    }
    ctx->pc = 0x164158u;
    {
        const bool branch_taken_0x164158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164158) {
            ctx->pc = 0x16415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164158u;
            // 0x16415c: 0xac510060  sw          $s1, 0x60($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164160u;
            goto label_164160;
        }
    }
    ctx->pc = 0x164160u;
label_164160:
    // 0x164160: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x164160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_164164:
    // 0x164164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164168:
    // 0x164168: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x164168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_16416c:
    // 0x16416c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x16416cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_164170:
    // 0x164170: 0x8e626490  lw          $v0, 0x6490($s3)
    ctx->pc = 0x164170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 25744)));
label_164174:
    // 0x164174: 0x8e636b1c  lw          $v1, 0x6B1C($s3)
    ctx->pc = 0x164174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27420)));
label_164178:
    // 0x164178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16417c:
    // 0x16417c: 0xae626490  sw          $v0, 0x6490($s3)
    ctx->pc = 0x16417cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 25744), GPR_U32(ctx, 2));
label_164180:
    // 0x164180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_164184:
    // 0x164184: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_164188:
    // 0x164188: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x164188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16418c:
    // 0x16418c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x16418cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_164190:
    // 0x164190: 0x8e626b1c  lw          $v0, 0x6B1C($s3)
    ctx->pc = 0x164190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27420)));
label_164194:
    // 0x164194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_164198:
    // 0x164198: 0xae626b1c  sw          $v0, 0x6B1C($s3)
    ctx->pc = 0x164198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 27420), GPR_U32(ctx, 2));
label_16419c:
    // 0x16419c: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x16419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_1641a0:
    // 0x1641a0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1641a4:
    if (ctx->pc == 0x1641A4u) {
        ctx->pc = 0x1641A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641A0u;
        // 0x1641a4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641A8u;
        goto label_1641a8;
    }
    ctx->pc = 0x1641A0u;
    {
        const bool branch_taken_0x1641a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641A0u;
        // 0x1641a4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641a0) {
            ctx->pc = 0x1641FCu;
            goto label_1641fc;
        }
    }
    ctx->pc = 0x1641A8u;
label_1641a8:
    // 0x1641a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1641a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1641ac:
    // 0x1641ac: 0xc0c493d  jal         func_3124F4
label_1641b0:
    if (ctx->pc == 0x1641B0u) {
        ctx->pc = 0x1641B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641ACu;
        // 0x1641b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641B4u;
        goto label_1641b4;
    }
    ctx->pc = 0x1641ACu;
    SET_GPR_U32(ctx, 31, 0x1641B4u);
    ctx->pc = 0x1641B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641ACu;
    // 0x1641b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1641ACu, 0x1641B4u)) {
        return;
    }
    ctx->pc = 0x1641B4u;
label_1641b4:
    // 0x1641b4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1641b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_1641b8:
    // 0x1641b8: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_1641bc:
    // 0x1641bc: 0x8e696b1c  lw          $t1, 0x6B1C($s3)
    ctx->pc = 0x1641bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27420)));
label_1641c0:
    // 0x1641c0: 0x24635928  addiu       $v1, $v1, 0x5928
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22824));
label_1641c4:
    // 0x1641c4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1641c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1641c8:
    // 0x1641c8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1641c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1641cc:
    // 0x1641cc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_1641d0:
    // 0x1641d0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1641d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1641d4:
    // 0x1641d4: 0x24635898  addiu       $v1, $v1, 0x5898
    ctx->pc = 0x1641d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22680));
label_1641d8:
    // 0x1641d8: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1641dc:
    // 0x1641dc: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x1641dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1641e0:
    // 0x1641e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1641e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1641e4:
    // 0x1641e4: 0xafb2003c  sw          $s2, 0x3C($sp)
    ctx->pc = 0x1641e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 18));
label_1641e8:
    // 0x1641e8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1641e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1641ec:
    // 0x1641ec: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1641ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1641f0:
    // 0x1641f0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1641f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1641f4:
    // 0x1641f4: 0xc058ece  jal         func_163B38
label_1641f8:
    if (ctx->pc == 0x1641F8u) {
        ctx->pc = 0x1641F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F4u;
        // 0x1641f8: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641FCu;
        goto label_1641fc;
    }
    ctx->pc = 0x1641F4u;
    SET_GPR_U32(ctx, 31, 0x1641FCu);
    ctx->pc = 0x1641F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641F4u;
    // 0x1641f8: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163B38u;
    goto label_163b38;
    ctx->pc = 0x1641FCu;
label_1641fc:
    // 0x1641fc: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1641fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_164200:
    // 0x164200: 0x92a20024  lbu         $v0, 0x24($s5)
    ctx->pc = 0x164200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
label_164204:
    // 0x164204: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x164204u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_164208:
    // 0x164208: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x164208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16420c:
    // 0x16420c: 0x5440ff1e  bnel        $v0, $zero, . + 4 + (-0xE2 << 2)
label_164210:
    if (ctx->pc == 0x164210u) {
        ctx->pc = 0x164210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16420Cu;
        // 0x164210: 0x8e626b20  lw          $v0, 0x6B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164214u;
        goto label_164214;
    }
    ctx->pc = 0x16420Cu;
    {
        const bool branch_taken_0x16420c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16420c) {
            ctx->pc = 0x164210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16420Cu;
            // 0x164210: 0x8e626b20  lw          $v0, 0x6B20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163e88;
        }
    }
    ctx->pc = 0x164214u;
label_164214:
    // 0x164214: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_164218:
    // 0x164218: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x164218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_16421c:
    // 0x16421c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x16421cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_164220:
    // 0x164220: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x164220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_164224:
    // 0x164224: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x164224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_164228:
    // 0x164228: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x164228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_16422c:
    // 0x16422c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x16422cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_164230:
    // 0x164230: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x164230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_164234:
    // 0x164234: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x164234u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_164238:
    // 0x164238: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x164238u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16423c:
    // 0x16423c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_164240:
    // 0x164240: 0x3e00008  jr          $ra
label_164244:
    if (ctx->pc == 0x164244u) {
        ctx->pc = 0x164244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164240u;
        // 0x164244: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164248u;
        goto label_fallthrough_0x164240;
    }
    ctx->pc = 0x164240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164240u;
        // 0x164244: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x164240:
    ctx->pc = 0x164248u;
}
