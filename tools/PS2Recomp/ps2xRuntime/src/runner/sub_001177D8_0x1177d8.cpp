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

// Function: sub_001177D8
// Address: 0x1177d8 - 0x118ab8
void sub_001177D8_0x1177d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001177D8_0x1177d8");
#endif

    switch (ctx->pc) {
        case 0x1177d8u: goto label_1177d8;
        case 0x1177dcu: goto label_1177dc;
        case 0x1177e0u: goto label_1177e0;
        case 0x1177e4u: goto label_1177e4;
        case 0x1177e8u: goto label_1177e8;
        case 0x1177ecu: goto label_1177ec;
        case 0x1177f0u: goto label_1177f0;
        case 0x1177f4u: goto label_1177f4;
        case 0x1177f8u: goto label_1177f8;
        case 0x1177fcu: goto label_1177fc;
        case 0x117800u: goto label_117800;
        case 0x117804u: goto label_117804;
        case 0x117808u: goto label_117808;
        case 0x11780cu: goto label_11780c;
        case 0x117810u: goto label_117810;
        case 0x117814u: goto label_117814;
        case 0x117818u: goto label_117818;
        case 0x11781cu: goto label_11781c;
        case 0x117820u: goto label_117820;
        case 0x117824u: goto label_117824;
        case 0x117828u: goto label_117828;
        case 0x11782cu: goto label_11782c;
        case 0x117830u: goto label_117830;
        case 0x117834u: goto label_117834;
        case 0x117838u: goto label_117838;
        case 0x11783cu: goto label_11783c;
        case 0x117840u: goto label_117840;
        case 0x117844u: goto label_117844;
        case 0x117848u: goto label_117848;
        case 0x11784cu: goto label_11784c;
        case 0x117850u: goto label_117850;
        case 0x117854u: goto label_117854;
        case 0x117858u: goto label_117858;
        case 0x11785cu: goto label_11785c;
        case 0x117860u: goto label_117860;
        case 0x117864u: goto label_117864;
        case 0x117868u: goto label_117868;
        case 0x11786cu: goto label_11786c;
        case 0x117870u: goto label_117870;
        case 0x117874u: goto label_117874;
        case 0x117878u: goto label_117878;
        case 0x11787cu: goto label_11787c;
        case 0x117880u: goto label_117880;
        case 0x117884u: goto label_117884;
        case 0x117888u: goto label_117888;
        case 0x11788cu: goto label_11788c;
        case 0x117890u: goto label_117890;
        case 0x117894u: goto label_117894;
        case 0x117898u: goto label_117898;
        case 0x11789cu: goto label_11789c;
        case 0x1178a0u: goto label_1178a0;
        case 0x1178a4u: goto label_1178a4;
        case 0x1178a8u: goto label_1178a8;
        case 0x1178acu: goto label_1178ac;
        case 0x1178b0u: goto label_1178b0;
        case 0x1178b4u: goto label_1178b4;
        case 0x1178b8u: goto label_1178b8;
        case 0x1178bcu: goto label_1178bc;
        case 0x1178c0u: goto label_1178c0;
        case 0x1178c4u: goto label_1178c4;
        case 0x1178c8u: goto label_1178c8;
        case 0x1178ccu: goto label_1178cc;
        case 0x1178d0u: goto label_1178d0;
        case 0x1178d4u: goto label_1178d4;
        case 0x1178d8u: goto label_1178d8;
        case 0x1178dcu: goto label_1178dc;
        case 0x1178e0u: goto label_1178e0;
        case 0x1178e4u: goto label_1178e4;
        case 0x1178e8u: goto label_1178e8;
        case 0x1178ecu: goto label_1178ec;
        case 0x1178f0u: goto label_1178f0;
        case 0x1178f4u: goto label_1178f4;
        case 0x1178f8u: goto label_1178f8;
        case 0x1178fcu: goto label_1178fc;
        case 0x117900u: goto label_117900;
        case 0x117904u: goto label_117904;
        case 0x117908u: goto label_117908;
        case 0x11790cu: goto label_11790c;
        case 0x117910u: goto label_117910;
        case 0x117914u: goto label_117914;
        case 0x117918u: goto label_117918;
        case 0x11791cu: goto label_11791c;
        case 0x117920u: goto label_117920;
        case 0x117924u: goto label_117924;
        case 0x117928u: goto label_117928;
        case 0x11792cu: goto label_11792c;
        case 0x117930u: goto label_117930;
        case 0x117934u: goto label_117934;
        case 0x117938u: goto label_117938;
        case 0x11793cu: goto label_11793c;
        case 0x117940u: goto label_117940;
        case 0x117944u: goto label_117944;
        case 0x117948u: goto label_117948;
        case 0x11794cu: goto label_11794c;
        case 0x117950u: goto label_117950;
        case 0x117954u: goto label_117954;
        case 0x117958u: goto label_117958;
        case 0x11795cu: goto label_11795c;
        case 0x117960u: goto label_117960;
        case 0x117964u: goto label_117964;
        case 0x117968u: goto label_117968;
        case 0x11796cu: goto label_11796c;
        case 0x117970u: goto label_117970;
        case 0x117974u: goto label_117974;
        case 0x117978u: goto label_117978;
        case 0x11797cu: goto label_11797c;
        case 0x117980u: goto label_117980;
        case 0x117984u: goto label_117984;
        case 0x117988u: goto label_117988;
        case 0x11798cu: goto label_11798c;
        case 0x117990u: goto label_117990;
        case 0x117994u: goto label_117994;
        case 0x117998u: goto label_117998;
        case 0x11799cu: goto label_11799c;
        case 0x1179a0u: goto label_1179a0;
        case 0x1179a4u: goto label_1179a4;
        case 0x1179a8u: goto label_1179a8;
        case 0x1179acu: goto label_1179ac;
        case 0x1179b0u: goto label_1179b0;
        case 0x1179b4u: goto label_1179b4;
        case 0x1179b8u: goto label_1179b8;
        case 0x1179bcu: goto label_1179bc;
        case 0x1179c0u: goto label_1179c0;
        case 0x1179c4u: goto label_1179c4;
        case 0x1179c8u: goto label_1179c8;
        case 0x1179ccu: goto label_1179cc;
        case 0x1179d0u: goto label_1179d0;
        case 0x1179d4u: goto label_1179d4;
        case 0x1179d8u: goto label_1179d8;
        case 0x1179dcu: goto label_1179dc;
        case 0x1179e0u: goto label_1179e0;
        case 0x1179e4u: goto label_1179e4;
        case 0x1179e8u: goto label_1179e8;
        case 0x1179ecu: goto label_1179ec;
        case 0x1179f0u: goto label_1179f0;
        case 0x1179f4u: goto label_1179f4;
        case 0x1179f8u: goto label_1179f8;
        case 0x1179fcu: goto label_1179fc;
        case 0x117a00u: goto label_117a00;
        case 0x117a04u: goto label_117a04;
        case 0x117a08u: goto label_117a08;
        case 0x117a0cu: goto label_117a0c;
        case 0x117a10u: goto label_117a10;
        case 0x117a14u: goto label_117a14;
        case 0x117a18u: goto label_117a18;
        case 0x117a1cu: goto label_117a1c;
        case 0x117a20u: goto label_117a20;
        case 0x117a24u: goto label_117a24;
        case 0x117a28u: goto label_117a28;
        case 0x117a2cu: goto label_117a2c;
        case 0x117a30u: goto label_117a30;
        case 0x117a34u: goto label_117a34;
        case 0x117a38u: goto label_117a38;
        case 0x117a3cu: goto label_117a3c;
        case 0x117a40u: goto label_117a40;
        case 0x117a44u: goto label_117a44;
        case 0x117a48u: goto label_117a48;
        case 0x117a4cu: goto label_117a4c;
        case 0x117a50u: goto label_117a50;
        case 0x117a54u: goto label_117a54;
        case 0x117a58u: goto label_117a58;
        case 0x117a5cu: goto label_117a5c;
        case 0x117a60u: goto label_117a60;
        case 0x117a64u: goto label_117a64;
        case 0x117a68u: goto label_117a68;
        case 0x117a6cu: goto label_117a6c;
        case 0x117a70u: goto label_117a70;
        case 0x117a74u: goto label_117a74;
        case 0x117a78u: goto label_117a78;
        case 0x117a7cu: goto label_117a7c;
        case 0x117a80u: goto label_117a80;
        case 0x117a84u: goto label_117a84;
        case 0x117a88u: goto label_117a88;
        case 0x117a8cu: goto label_117a8c;
        case 0x117a90u: goto label_117a90;
        case 0x117a94u: goto label_117a94;
        case 0x117a98u: goto label_117a98;
        case 0x117a9cu: goto label_117a9c;
        case 0x117aa0u: goto label_117aa0;
        case 0x117aa4u: goto label_117aa4;
        case 0x117aa8u: goto label_117aa8;
        case 0x117aacu: goto label_117aac;
        case 0x117ab0u: goto label_117ab0;
        case 0x117ab4u: goto label_117ab4;
        case 0x117ab8u: goto label_117ab8;
        case 0x117abcu: goto label_117abc;
        case 0x117ac0u: goto label_117ac0;
        case 0x117ac4u: goto label_117ac4;
        case 0x117ac8u: goto label_117ac8;
        case 0x117accu: goto label_117acc;
        case 0x117ad0u: goto label_117ad0;
        case 0x117ad4u: goto label_117ad4;
        case 0x117ad8u: goto label_117ad8;
        case 0x117adcu: goto label_117adc;
        case 0x117ae0u: goto label_117ae0;
        case 0x117ae4u: goto label_117ae4;
        case 0x117ae8u: goto label_117ae8;
        case 0x117aecu: goto label_117aec;
        case 0x117af0u: goto label_117af0;
        case 0x117af4u: goto label_117af4;
        case 0x117af8u: goto label_117af8;
        case 0x117afcu: goto label_117afc;
        case 0x117b00u: goto label_117b00;
        case 0x117b04u: goto label_117b04;
        case 0x117b08u: goto label_117b08;
        case 0x117b0cu: goto label_117b0c;
        case 0x117b10u: goto label_117b10;
        case 0x117b14u: goto label_117b14;
        case 0x117b18u: goto label_117b18;
        case 0x117b1cu: goto label_117b1c;
        case 0x117b20u: goto label_117b20;
        case 0x117b24u: goto label_117b24;
        case 0x117b28u: goto label_117b28;
        case 0x117b2cu: goto label_117b2c;
        case 0x117b30u: goto label_117b30;
        case 0x117b34u: goto label_117b34;
        case 0x117b38u: goto label_117b38;
        case 0x117b3cu: goto label_117b3c;
        case 0x117b40u: goto label_117b40;
        case 0x117b44u: goto label_117b44;
        case 0x117b48u: goto label_117b48;
        case 0x117b4cu: goto label_117b4c;
        case 0x117b50u: goto label_117b50;
        case 0x117b54u: goto label_117b54;
        case 0x117b58u: goto label_117b58;
        case 0x117b5cu: goto label_117b5c;
        case 0x117b60u: goto label_117b60;
        case 0x117b64u: goto label_117b64;
        case 0x117b68u: goto label_117b68;
        case 0x117b6cu: goto label_117b6c;
        case 0x117b70u: goto label_117b70;
        case 0x117b74u: goto label_117b74;
        case 0x117b78u: goto label_117b78;
        case 0x117b7cu: goto label_117b7c;
        case 0x117b80u: goto label_117b80;
        case 0x117b84u: goto label_117b84;
        case 0x117b88u: goto label_117b88;
        case 0x117b8cu: goto label_117b8c;
        case 0x117b90u: goto label_117b90;
        case 0x117b94u: goto label_117b94;
        case 0x117b98u: goto label_117b98;
        case 0x117b9cu: goto label_117b9c;
        case 0x117ba0u: goto label_117ba0;
        case 0x117ba4u: goto label_117ba4;
        case 0x117ba8u: goto label_117ba8;
        case 0x117bacu: goto label_117bac;
        case 0x117bb0u: goto label_117bb0;
        case 0x117bb4u: goto label_117bb4;
        case 0x117bb8u: goto label_117bb8;
        case 0x117bbcu: goto label_117bbc;
        case 0x117bc0u: goto label_117bc0;
        case 0x117bc4u: goto label_117bc4;
        case 0x117bc8u: goto label_117bc8;
        case 0x117bccu: goto label_117bcc;
        case 0x117bd0u: goto label_117bd0;
        case 0x117bd4u: goto label_117bd4;
        case 0x117bd8u: goto label_117bd8;
        case 0x117bdcu: goto label_117bdc;
        case 0x117be0u: goto label_117be0;
        case 0x117be4u: goto label_117be4;
        case 0x117be8u: goto label_117be8;
        case 0x117becu: goto label_117bec;
        case 0x117bf0u: goto label_117bf0;
        case 0x117bf4u: goto label_117bf4;
        case 0x117bf8u: goto label_117bf8;
        case 0x117bfcu: goto label_117bfc;
        case 0x117c00u: goto label_117c00;
        case 0x117c04u: goto label_117c04;
        case 0x117c08u: goto label_117c08;
        case 0x117c0cu: goto label_117c0c;
        case 0x117c10u: goto label_117c10;
        case 0x117c14u: goto label_117c14;
        case 0x117c18u: goto label_117c18;
        case 0x117c1cu: goto label_117c1c;
        case 0x117c20u: goto label_117c20;
        case 0x117c24u: goto label_117c24;
        case 0x117c28u: goto label_117c28;
        case 0x117c2cu: goto label_117c2c;
        case 0x117c30u: goto label_117c30;
        case 0x117c34u: goto label_117c34;
        case 0x117c38u: goto label_117c38;
        case 0x117c3cu: goto label_117c3c;
        case 0x117c40u: goto label_117c40;
        case 0x117c44u: goto label_117c44;
        case 0x117c48u: goto label_117c48;
        case 0x117c4cu: goto label_117c4c;
        case 0x117c50u: goto label_117c50;
        case 0x117c54u: goto label_117c54;
        case 0x117c58u: goto label_117c58;
        case 0x117c5cu: goto label_117c5c;
        case 0x117c60u: goto label_117c60;
        case 0x117c64u: goto label_117c64;
        case 0x117c68u: goto label_117c68;
        case 0x117c6cu: goto label_117c6c;
        case 0x117c70u: goto label_117c70;
        case 0x117c74u: goto label_117c74;
        case 0x117c78u: goto label_117c78;
        case 0x117c7cu: goto label_117c7c;
        case 0x117c80u: goto label_117c80;
        case 0x117c84u: goto label_117c84;
        case 0x117c88u: goto label_117c88;
        case 0x117c8cu: goto label_117c8c;
        case 0x117c90u: goto label_117c90;
        case 0x117c94u: goto label_117c94;
        case 0x117c98u: goto label_117c98;
        case 0x117c9cu: goto label_117c9c;
        case 0x117ca0u: goto label_117ca0;
        case 0x117ca4u: goto label_117ca4;
        case 0x117ca8u: goto label_117ca8;
        case 0x117cacu: goto label_117cac;
        case 0x117cb0u: goto label_117cb0;
        case 0x117cb4u: goto label_117cb4;
        case 0x117cb8u: goto label_117cb8;
        case 0x117cbcu: goto label_117cbc;
        case 0x117cc0u: goto label_117cc0;
        case 0x117cc4u: goto label_117cc4;
        case 0x117cc8u: goto label_117cc8;
        case 0x117cccu: goto label_117ccc;
        case 0x117cd0u: goto label_117cd0;
        case 0x117cd4u: goto label_117cd4;
        case 0x117cd8u: goto label_117cd8;
        case 0x117cdcu: goto label_117cdc;
        case 0x117ce0u: goto label_117ce0;
        case 0x117ce4u: goto label_117ce4;
        case 0x117ce8u: goto label_117ce8;
        case 0x117cecu: goto label_117cec;
        case 0x117cf0u: goto label_117cf0;
        case 0x117cf4u: goto label_117cf4;
        case 0x117cf8u: goto label_117cf8;
        case 0x117cfcu: goto label_117cfc;
        case 0x117d00u: goto label_117d00;
        case 0x117d04u: goto label_117d04;
        case 0x117d08u: goto label_117d08;
        case 0x117d0cu: goto label_117d0c;
        case 0x117d10u: goto label_117d10;
        case 0x117d14u: goto label_117d14;
        case 0x117d18u: goto label_117d18;
        case 0x117d1cu: goto label_117d1c;
        case 0x117d20u: goto label_117d20;
        case 0x117d24u: goto label_117d24;
        case 0x117d28u: goto label_117d28;
        case 0x117d2cu: goto label_117d2c;
        case 0x117d30u: goto label_117d30;
        case 0x117d34u: goto label_117d34;
        case 0x117d38u: goto label_117d38;
        case 0x117d3cu: goto label_117d3c;
        case 0x117d40u: goto label_117d40;
        case 0x117d44u: goto label_117d44;
        case 0x117d48u: goto label_117d48;
        case 0x117d4cu: goto label_117d4c;
        case 0x117d50u: goto label_117d50;
        case 0x117d54u: goto label_117d54;
        case 0x117d58u: goto label_117d58;
        case 0x117d5cu: goto label_117d5c;
        case 0x117d60u: goto label_117d60;
        case 0x117d64u: goto label_117d64;
        case 0x117d68u: goto label_117d68;
        case 0x117d6cu: goto label_117d6c;
        case 0x117d70u: goto label_117d70;
        case 0x117d74u: goto label_117d74;
        case 0x117d78u: goto label_117d78;
        case 0x117d7cu: goto label_117d7c;
        case 0x117d80u: goto label_117d80;
        case 0x117d84u: goto label_117d84;
        case 0x117d88u: goto label_117d88;
        case 0x117d8cu: goto label_117d8c;
        case 0x117d90u: goto label_117d90;
        case 0x117d94u: goto label_117d94;
        case 0x117d98u: goto label_117d98;
        case 0x117d9cu: goto label_117d9c;
        case 0x117da0u: goto label_117da0;
        case 0x117da4u: goto label_117da4;
        case 0x117da8u: goto label_117da8;
        case 0x117dacu: goto label_117dac;
        case 0x117db0u: goto label_117db0;
        case 0x117db4u: goto label_117db4;
        case 0x117db8u: goto label_117db8;
        case 0x117dbcu: goto label_117dbc;
        case 0x117dc0u: goto label_117dc0;
        case 0x117dc4u: goto label_117dc4;
        case 0x117dc8u: goto label_117dc8;
        case 0x117dccu: goto label_117dcc;
        case 0x117dd0u: goto label_117dd0;
        case 0x117dd4u: goto label_117dd4;
        case 0x117dd8u: goto label_117dd8;
        case 0x117ddcu: goto label_117ddc;
        case 0x117de0u: goto label_117de0;
        case 0x117de4u: goto label_117de4;
        case 0x117de8u: goto label_117de8;
        case 0x117decu: goto label_117dec;
        case 0x117df0u: goto label_117df0;
        case 0x117df4u: goto label_117df4;
        case 0x117df8u: goto label_117df8;
        case 0x117dfcu: goto label_117dfc;
        case 0x117e00u: goto label_117e00;
        case 0x117e04u: goto label_117e04;
        case 0x117e08u: goto label_117e08;
        case 0x117e0cu: goto label_117e0c;
        case 0x117e10u: goto label_117e10;
        case 0x117e14u: goto label_117e14;
        case 0x117e18u: goto label_117e18;
        case 0x117e1cu: goto label_117e1c;
        case 0x117e20u: goto label_117e20;
        case 0x117e24u: goto label_117e24;
        case 0x117e28u: goto label_117e28;
        case 0x117e2cu: goto label_117e2c;
        case 0x117e30u: goto label_117e30;
        case 0x117e34u: goto label_117e34;
        case 0x117e38u: goto label_117e38;
        case 0x117e3cu: goto label_117e3c;
        case 0x117e40u: goto label_117e40;
        case 0x117e44u: goto label_117e44;
        case 0x117e48u: goto label_117e48;
        case 0x117e4cu: goto label_117e4c;
        case 0x117e50u: goto label_117e50;
        case 0x117e54u: goto label_117e54;
        case 0x117e58u: goto label_117e58;
        case 0x117e5cu: goto label_117e5c;
        case 0x117e60u: goto label_117e60;
        case 0x117e64u: goto label_117e64;
        case 0x117e68u: goto label_117e68;
        case 0x117e6cu: goto label_117e6c;
        case 0x117e70u: goto label_117e70;
        case 0x117e74u: goto label_117e74;
        case 0x117e78u: goto label_117e78;
        case 0x117e7cu: goto label_117e7c;
        case 0x117e80u: goto label_117e80;
        case 0x117e84u: goto label_117e84;
        case 0x117e88u: goto label_117e88;
        case 0x117e8cu: goto label_117e8c;
        case 0x117e90u: goto label_117e90;
        case 0x117e94u: goto label_117e94;
        case 0x117e98u: goto label_117e98;
        case 0x117e9cu: goto label_117e9c;
        case 0x117ea0u: goto label_117ea0;
        case 0x117ea4u: goto label_117ea4;
        case 0x117ea8u: goto label_117ea8;
        case 0x117eacu: goto label_117eac;
        case 0x117eb0u: goto label_117eb0;
        case 0x117eb4u: goto label_117eb4;
        case 0x117eb8u: goto label_117eb8;
        case 0x117ebcu: goto label_117ebc;
        case 0x117ec0u: goto label_117ec0;
        case 0x117ec4u: goto label_117ec4;
        case 0x117ec8u: goto label_117ec8;
        case 0x117eccu: goto label_117ecc;
        case 0x117ed0u: goto label_117ed0;
        case 0x117ed4u: goto label_117ed4;
        case 0x117ed8u: goto label_117ed8;
        case 0x117edcu: goto label_117edc;
        case 0x117ee0u: goto label_117ee0;
        case 0x117ee4u: goto label_117ee4;
        case 0x117ee8u: goto label_117ee8;
        case 0x117eecu: goto label_117eec;
        case 0x117ef0u: goto label_117ef0;
        case 0x117ef4u: goto label_117ef4;
        case 0x117ef8u: goto label_117ef8;
        case 0x117efcu: goto label_117efc;
        case 0x117f00u: goto label_117f00;
        case 0x117f04u: goto label_117f04;
        case 0x117f08u: goto label_117f08;
        case 0x117f0cu: goto label_117f0c;
        case 0x117f10u: goto label_117f10;
        case 0x117f14u: goto label_117f14;
        case 0x117f18u: goto label_117f18;
        case 0x117f1cu: goto label_117f1c;
        case 0x117f20u: goto label_117f20;
        case 0x117f24u: goto label_117f24;
        case 0x117f28u: goto label_117f28;
        case 0x117f2cu: goto label_117f2c;
        case 0x117f30u: goto label_117f30;
        case 0x117f34u: goto label_117f34;
        case 0x117f38u: goto label_117f38;
        case 0x117f3cu: goto label_117f3c;
        case 0x117f40u: goto label_117f40;
        case 0x117f44u: goto label_117f44;
        case 0x117f48u: goto label_117f48;
        case 0x117f4cu: goto label_117f4c;
        case 0x117f50u: goto label_117f50;
        case 0x117f54u: goto label_117f54;
        case 0x117f58u: goto label_117f58;
        case 0x117f5cu: goto label_117f5c;
        case 0x117f60u: goto label_117f60;
        case 0x117f64u: goto label_117f64;
        case 0x117f68u: goto label_117f68;
        case 0x117f6cu: goto label_117f6c;
        case 0x117f70u: goto label_117f70;
        case 0x117f74u: goto label_117f74;
        case 0x117f78u: goto label_117f78;
        case 0x117f7cu: goto label_117f7c;
        case 0x117f80u: goto label_117f80;
        case 0x117f84u: goto label_117f84;
        case 0x117f88u: goto label_117f88;
        case 0x117f8cu: goto label_117f8c;
        case 0x117f90u: goto label_117f90;
        case 0x117f94u: goto label_117f94;
        case 0x117f98u: goto label_117f98;
        case 0x117f9cu: goto label_117f9c;
        case 0x117fa0u: goto label_117fa0;
        case 0x117fa4u: goto label_117fa4;
        case 0x117fa8u: goto label_117fa8;
        case 0x117facu: goto label_117fac;
        case 0x117fb0u: goto label_117fb0;
        case 0x117fb4u: goto label_117fb4;
        case 0x117fb8u: goto label_117fb8;
        case 0x117fbcu: goto label_117fbc;
        case 0x117fc0u: goto label_117fc0;
        case 0x117fc4u: goto label_117fc4;
        case 0x117fc8u: goto label_117fc8;
        case 0x117fccu: goto label_117fcc;
        case 0x117fd0u: goto label_117fd0;
        case 0x117fd4u: goto label_117fd4;
        case 0x117fd8u: goto label_117fd8;
        case 0x117fdcu: goto label_117fdc;
        case 0x117fe0u: goto label_117fe0;
        case 0x117fe4u: goto label_117fe4;
        case 0x117fe8u: goto label_117fe8;
        case 0x117fecu: goto label_117fec;
        case 0x117ff0u: goto label_117ff0;
        case 0x117ff4u: goto label_117ff4;
        case 0x117ff8u: goto label_117ff8;
        case 0x117ffcu: goto label_117ffc;
        case 0x118000u: goto label_118000;
        case 0x118004u: goto label_118004;
        case 0x118008u: goto label_118008;
        case 0x11800cu: goto label_11800c;
        case 0x118010u: goto label_118010;
        case 0x118014u: goto label_118014;
        case 0x118018u: goto label_118018;
        case 0x11801cu: goto label_11801c;
        case 0x118020u: goto label_118020;
        case 0x118024u: goto label_118024;
        case 0x118028u: goto label_118028;
        case 0x11802cu: goto label_11802c;
        case 0x118030u: goto label_118030;
        case 0x118034u: goto label_118034;
        case 0x118038u: goto label_118038;
        case 0x11803cu: goto label_11803c;
        case 0x118040u: goto label_118040;
        case 0x118044u: goto label_118044;
        case 0x118048u: goto label_118048;
        case 0x11804cu: goto label_11804c;
        case 0x118050u: goto label_118050;
        case 0x118054u: goto label_118054;
        case 0x118058u: goto label_118058;
        case 0x11805cu: goto label_11805c;
        case 0x118060u: goto label_118060;
        case 0x118064u: goto label_118064;
        case 0x118068u: goto label_118068;
        case 0x11806cu: goto label_11806c;
        case 0x118070u: goto label_118070;
        case 0x118074u: goto label_118074;
        case 0x118078u: goto label_118078;
        case 0x11807cu: goto label_11807c;
        case 0x118080u: goto label_118080;
        case 0x118084u: goto label_118084;
        case 0x118088u: goto label_118088;
        case 0x11808cu: goto label_11808c;
        case 0x118090u: goto label_118090;
        case 0x118094u: goto label_118094;
        case 0x118098u: goto label_118098;
        case 0x11809cu: goto label_11809c;
        case 0x1180a0u: goto label_1180a0;
        case 0x1180a4u: goto label_1180a4;
        case 0x1180a8u: goto label_1180a8;
        case 0x1180acu: goto label_1180ac;
        case 0x1180b0u: goto label_1180b0;
        case 0x1180b4u: goto label_1180b4;
        case 0x1180b8u: goto label_1180b8;
        case 0x1180bcu: goto label_1180bc;
        case 0x1180c0u: goto label_1180c0;
        case 0x1180c4u: goto label_1180c4;
        case 0x1180c8u: goto label_1180c8;
        case 0x1180ccu: goto label_1180cc;
        case 0x1180d0u: goto label_1180d0;
        case 0x1180d4u: goto label_1180d4;
        case 0x1180d8u: goto label_1180d8;
        case 0x1180dcu: goto label_1180dc;
        case 0x1180e0u: goto label_1180e0;
        case 0x1180e4u: goto label_1180e4;
        case 0x1180e8u: goto label_1180e8;
        case 0x1180ecu: goto label_1180ec;
        case 0x1180f0u: goto label_1180f0;
        case 0x1180f4u: goto label_1180f4;
        case 0x1180f8u: goto label_1180f8;
        case 0x1180fcu: goto label_1180fc;
        case 0x118100u: goto label_118100;
        case 0x118104u: goto label_118104;
        case 0x118108u: goto label_118108;
        case 0x11810cu: goto label_11810c;
        case 0x118110u: goto label_118110;
        case 0x118114u: goto label_118114;
        case 0x118118u: goto label_118118;
        case 0x11811cu: goto label_11811c;
        case 0x118120u: goto label_118120;
        case 0x118124u: goto label_118124;
        case 0x118128u: goto label_118128;
        case 0x11812cu: goto label_11812c;
        case 0x118130u: goto label_118130;
        case 0x118134u: goto label_118134;
        case 0x118138u: goto label_118138;
        case 0x11813cu: goto label_11813c;
        case 0x118140u: goto label_118140;
        case 0x118144u: goto label_118144;
        case 0x118148u: goto label_118148;
        case 0x11814cu: goto label_11814c;
        case 0x118150u: goto label_118150;
        case 0x118154u: goto label_118154;
        case 0x118158u: goto label_118158;
        case 0x11815cu: goto label_11815c;
        case 0x118160u: goto label_118160;
        case 0x118164u: goto label_118164;
        case 0x118168u: goto label_118168;
        case 0x11816cu: goto label_11816c;
        case 0x118170u: goto label_118170;
        case 0x118174u: goto label_118174;
        case 0x118178u: goto label_118178;
        case 0x11817cu: goto label_11817c;
        case 0x118180u: goto label_118180;
        case 0x118184u: goto label_118184;
        case 0x118188u: goto label_118188;
        case 0x11818cu: goto label_11818c;
        case 0x118190u: goto label_118190;
        case 0x118194u: goto label_118194;
        case 0x118198u: goto label_118198;
        case 0x11819cu: goto label_11819c;
        case 0x1181a0u: goto label_1181a0;
        case 0x1181a4u: goto label_1181a4;
        case 0x1181a8u: goto label_1181a8;
        case 0x1181acu: goto label_1181ac;
        case 0x1181b0u: goto label_1181b0;
        case 0x1181b4u: goto label_1181b4;
        case 0x1181b8u: goto label_1181b8;
        case 0x1181bcu: goto label_1181bc;
        case 0x1181c0u: goto label_1181c0;
        case 0x1181c4u: goto label_1181c4;
        case 0x1181c8u: goto label_1181c8;
        case 0x1181ccu: goto label_1181cc;
        case 0x1181d0u: goto label_1181d0;
        case 0x1181d4u: goto label_1181d4;
        case 0x1181d8u: goto label_1181d8;
        case 0x1181dcu: goto label_1181dc;
        case 0x1181e0u: goto label_1181e0;
        case 0x1181e4u: goto label_1181e4;
        case 0x1181e8u: goto label_1181e8;
        case 0x1181ecu: goto label_1181ec;
        case 0x1181f0u: goto label_1181f0;
        case 0x1181f4u: goto label_1181f4;
        case 0x1181f8u: goto label_1181f8;
        case 0x1181fcu: goto label_1181fc;
        case 0x118200u: goto label_118200;
        case 0x118204u: goto label_118204;
        case 0x118208u: goto label_118208;
        case 0x11820cu: goto label_11820c;
        case 0x118210u: goto label_118210;
        case 0x118214u: goto label_118214;
        case 0x118218u: goto label_118218;
        case 0x11821cu: goto label_11821c;
        case 0x118220u: goto label_118220;
        case 0x118224u: goto label_118224;
        case 0x118228u: goto label_118228;
        case 0x11822cu: goto label_11822c;
        case 0x118230u: goto label_118230;
        case 0x118234u: goto label_118234;
        case 0x118238u: goto label_118238;
        case 0x11823cu: goto label_11823c;
        case 0x118240u: goto label_118240;
        case 0x118244u: goto label_118244;
        case 0x118248u: goto label_118248;
        case 0x11824cu: goto label_11824c;
        case 0x118250u: goto label_118250;
        case 0x118254u: goto label_118254;
        case 0x118258u: goto label_118258;
        case 0x11825cu: goto label_11825c;
        case 0x118260u: goto label_118260;
        case 0x118264u: goto label_118264;
        case 0x118268u: goto label_118268;
        case 0x11826cu: goto label_11826c;
        case 0x118270u: goto label_118270;
        case 0x118274u: goto label_118274;
        case 0x118278u: goto label_118278;
        case 0x11827cu: goto label_11827c;
        case 0x118280u: goto label_118280;
        case 0x118284u: goto label_118284;
        case 0x118288u: goto label_118288;
        case 0x11828cu: goto label_11828c;
        case 0x118290u: goto label_118290;
        case 0x118294u: goto label_118294;
        case 0x118298u: goto label_118298;
        case 0x11829cu: goto label_11829c;
        case 0x1182a0u: goto label_1182a0;
        case 0x1182a4u: goto label_1182a4;
        case 0x1182a8u: goto label_1182a8;
        case 0x1182acu: goto label_1182ac;
        case 0x1182b0u: goto label_1182b0;
        case 0x1182b4u: goto label_1182b4;
        case 0x1182b8u: goto label_1182b8;
        case 0x1182bcu: goto label_1182bc;
        case 0x1182c0u: goto label_1182c0;
        case 0x1182c4u: goto label_1182c4;
        case 0x1182c8u: goto label_1182c8;
        case 0x1182ccu: goto label_1182cc;
        case 0x1182d0u: goto label_1182d0;
        case 0x1182d4u: goto label_1182d4;
        case 0x1182d8u: goto label_1182d8;
        case 0x1182dcu: goto label_1182dc;
        case 0x1182e0u: goto label_1182e0;
        case 0x1182e4u: goto label_1182e4;
        case 0x1182e8u: goto label_1182e8;
        case 0x1182ecu: goto label_1182ec;
        case 0x1182f0u: goto label_1182f0;
        case 0x1182f4u: goto label_1182f4;
        case 0x1182f8u: goto label_1182f8;
        case 0x1182fcu: goto label_1182fc;
        case 0x118300u: goto label_118300;
        case 0x118304u: goto label_118304;
        case 0x118308u: goto label_118308;
        case 0x11830cu: goto label_11830c;
        case 0x118310u: goto label_118310;
        case 0x118314u: goto label_118314;
        case 0x118318u: goto label_118318;
        case 0x11831cu: goto label_11831c;
        case 0x118320u: goto label_118320;
        case 0x118324u: goto label_118324;
        case 0x118328u: goto label_118328;
        case 0x11832cu: goto label_11832c;
        case 0x118330u: goto label_118330;
        case 0x118334u: goto label_118334;
        case 0x118338u: goto label_118338;
        case 0x11833cu: goto label_11833c;
        case 0x118340u: goto label_118340;
        case 0x118344u: goto label_118344;
        case 0x118348u: goto label_118348;
        case 0x11834cu: goto label_11834c;
        case 0x118350u: goto label_118350;
        case 0x118354u: goto label_118354;
        case 0x118358u: goto label_118358;
        case 0x11835cu: goto label_11835c;
        case 0x118360u: goto label_118360;
        case 0x118364u: goto label_118364;
        case 0x118368u: goto label_118368;
        case 0x11836cu: goto label_11836c;
        case 0x118370u: goto label_118370;
        case 0x118374u: goto label_118374;
        case 0x118378u: goto label_118378;
        case 0x11837cu: goto label_11837c;
        case 0x118380u: goto label_118380;
        case 0x118384u: goto label_118384;
        case 0x118388u: goto label_118388;
        case 0x11838cu: goto label_11838c;
        case 0x118390u: goto label_118390;
        case 0x118394u: goto label_118394;
        case 0x118398u: goto label_118398;
        case 0x11839cu: goto label_11839c;
        case 0x1183a0u: goto label_1183a0;
        case 0x1183a4u: goto label_1183a4;
        case 0x1183a8u: goto label_1183a8;
        case 0x1183acu: goto label_1183ac;
        case 0x1183b0u: goto label_1183b0;
        case 0x1183b4u: goto label_1183b4;
        case 0x1183b8u: goto label_1183b8;
        case 0x1183bcu: goto label_1183bc;
        case 0x1183c0u: goto label_1183c0;
        case 0x1183c4u: goto label_1183c4;
        case 0x1183c8u: goto label_1183c8;
        case 0x1183ccu: goto label_1183cc;
        case 0x1183d0u: goto label_1183d0;
        case 0x1183d4u: goto label_1183d4;
        case 0x1183d8u: goto label_1183d8;
        case 0x1183dcu: goto label_1183dc;
        case 0x1183e0u: goto label_1183e0;
        case 0x1183e4u: goto label_1183e4;
        case 0x1183e8u: goto label_1183e8;
        case 0x1183ecu: goto label_1183ec;
        case 0x1183f0u: goto label_1183f0;
        case 0x1183f4u: goto label_1183f4;
        case 0x1183f8u: goto label_1183f8;
        case 0x1183fcu: goto label_1183fc;
        case 0x118400u: goto label_118400;
        case 0x118404u: goto label_118404;
        case 0x118408u: goto label_118408;
        case 0x11840cu: goto label_11840c;
        case 0x118410u: goto label_118410;
        case 0x118414u: goto label_118414;
        case 0x118418u: goto label_118418;
        case 0x11841cu: goto label_11841c;
        case 0x118420u: goto label_118420;
        case 0x118424u: goto label_118424;
        case 0x118428u: goto label_118428;
        case 0x11842cu: goto label_11842c;
        case 0x118430u: goto label_118430;
        case 0x118434u: goto label_118434;
        case 0x118438u: goto label_118438;
        case 0x11843cu: goto label_11843c;
        case 0x118440u: goto label_118440;
        case 0x118444u: goto label_118444;
        case 0x118448u: goto label_118448;
        case 0x11844cu: goto label_11844c;
        case 0x118450u: goto label_118450;
        case 0x118454u: goto label_118454;
        case 0x118458u: goto label_118458;
        case 0x11845cu: goto label_11845c;
        case 0x118460u: goto label_118460;
        case 0x118464u: goto label_118464;
        case 0x118468u: goto label_118468;
        case 0x11846cu: goto label_11846c;
        case 0x118470u: goto label_118470;
        case 0x118474u: goto label_118474;
        case 0x118478u: goto label_118478;
        case 0x11847cu: goto label_11847c;
        case 0x118480u: goto label_118480;
        case 0x118484u: goto label_118484;
        case 0x118488u: goto label_118488;
        case 0x11848cu: goto label_11848c;
        case 0x118490u: goto label_118490;
        case 0x118494u: goto label_118494;
        case 0x118498u: goto label_118498;
        case 0x11849cu: goto label_11849c;
        case 0x1184a0u: goto label_1184a0;
        case 0x1184a4u: goto label_1184a4;
        case 0x1184a8u: goto label_1184a8;
        case 0x1184acu: goto label_1184ac;
        case 0x1184b0u: goto label_1184b0;
        case 0x1184b4u: goto label_1184b4;
        case 0x1184b8u: goto label_1184b8;
        case 0x1184bcu: goto label_1184bc;
        case 0x1184c0u: goto label_1184c0;
        case 0x1184c4u: goto label_1184c4;
        case 0x1184c8u: goto label_1184c8;
        case 0x1184ccu: goto label_1184cc;
        case 0x1184d0u: goto label_1184d0;
        case 0x1184d4u: goto label_1184d4;
        case 0x1184d8u: goto label_1184d8;
        case 0x1184dcu: goto label_1184dc;
        case 0x1184e0u: goto label_1184e0;
        case 0x1184e4u: goto label_1184e4;
        case 0x1184e8u: goto label_1184e8;
        case 0x1184ecu: goto label_1184ec;
        case 0x1184f0u: goto label_1184f0;
        case 0x1184f4u: goto label_1184f4;
        case 0x1184f8u: goto label_1184f8;
        case 0x1184fcu: goto label_1184fc;
        case 0x118500u: goto label_118500;
        case 0x118504u: goto label_118504;
        case 0x118508u: goto label_118508;
        case 0x11850cu: goto label_11850c;
        case 0x118510u: goto label_118510;
        case 0x118514u: goto label_118514;
        case 0x118518u: goto label_118518;
        case 0x11851cu: goto label_11851c;
        case 0x118520u: goto label_118520;
        case 0x118524u: goto label_118524;
        case 0x118528u: goto label_118528;
        case 0x11852cu: goto label_11852c;
        case 0x118530u: goto label_118530;
        case 0x118534u: goto label_118534;
        case 0x118538u: goto label_118538;
        case 0x11853cu: goto label_11853c;
        case 0x118540u: goto label_118540;
        case 0x118544u: goto label_118544;
        case 0x118548u: goto label_118548;
        case 0x11854cu: goto label_11854c;
        case 0x118550u: goto label_118550;
        case 0x118554u: goto label_118554;
        case 0x118558u: goto label_118558;
        case 0x11855cu: goto label_11855c;
        case 0x118560u: goto label_118560;
        case 0x118564u: goto label_118564;
        case 0x118568u: goto label_118568;
        case 0x11856cu: goto label_11856c;
        case 0x118570u: goto label_118570;
        case 0x118574u: goto label_118574;
        case 0x118578u: goto label_118578;
        case 0x11857cu: goto label_11857c;
        case 0x118580u: goto label_118580;
        case 0x118584u: goto label_118584;
        case 0x118588u: goto label_118588;
        case 0x11858cu: goto label_11858c;
        case 0x118590u: goto label_118590;
        case 0x118594u: goto label_118594;
        case 0x118598u: goto label_118598;
        case 0x11859cu: goto label_11859c;
        case 0x1185a0u: goto label_1185a0;
        case 0x1185a4u: goto label_1185a4;
        case 0x1185a8u: goto label_1185a8;
        case 0x1185acu: goto label_1185ac;
        case 0x1185b0u: goto label_1185b0;
        case 0x1185b4u: goto label_1185b4;
        case 0x1185b8u: goto label_1185b8;
        case 0x1185bcu: goto label_1185bc;
        case 0x1185c0u: goto label_1185c0;
        case 0x1185c4u: goto label_1185c4;
        case 0x1185c8u: goto label_1185c8;
        case 0x1185ccu: goto label_1185cc;
        case 0x1185d0u: goto label_1185d0;
        case 0x1185d4u: goto label_1185d4;
        case 0x1185d8u: goto label_1185d8;
        case 0x1185dcu: goto label_1185dc;
        case 0x1185e0u: goto label_1185e0;
        case 0x1185e4u: goto label_1185e4;
        case 0x1185e8u: goto label_1185e8;
        case 0x1185ecu: goto label_1185ec;
        case 0x1185f0u: goto label_1185f0;
        case 0x1185f4u: goto label_1185f4;
        case 0x1185f8u: goto label_1185f8;
        case 0x1185fcu: goto label_1185fc;
        case 0x118600u: goto label_118600;
        case 0x118604u: goto label_118604;
        case 0x118608u: goto label_118608;
        case 0x11860cu: goto label_11860c;
        case 0x118610u: goto label_118610;
        case 0x118614u: goto label_118614;
        case 0x118618u: goto label_118618;
        case 0x11861cu: goto label_11861c;
        case 0x118620u: goto label_118620;
        case 0x118624u: goto label_118624;
        case 0x118628u: goto label_118628;
        case 0x11862cu: goto label_11862c;
        case 0x118630u: goto label_118630;
        case 0x118634u: goto label_118634;
        case 0x118638u: goto label_118638;
        case 0x11863cu: goto label_11863c;
        case 0x118640u: goto label_118640;
        case 0x118644u: goto label_118644;
        case 0x118648u: goto label_118648;
        case 0x11864cu: goto label_11864c;
        case 0x118650u: goto label_118650;
        case 0x118654u: goto label_118654;
        case 0x118658u: goto label_118658;
        case 0x11865cu: goto label_11865c;
        case 0x118660u: goto label_118660;
        case 0x118664u: goto label_118664;
        case 0x118668u: goto label_118668;
        case 0x11866cu: goto label_11866c;
        case 0x118670u: goto label_118670;
        case 0x118674u: goto label_118674;
        case 0x118678u: goto label_118678;
        case 0x11867cu: goto label_11867c;
        case 0x118680u: goto label_118680;
        case 0x118684u: goto label_118684;
        case 0x118688u: goto label_118688;
        case 0x11868cu: goto label_11868c;
        case 0x118690u: goto label_118690;
        case 0x118694u: goto label_118694;
        case 0x118698u: goto label_118698;
        case 0x11869cu: goto label_11869c;
        case 0x1186a0u: goto label_1186a0;
        case 0x1186a4u: goto label_1186a4;
        case 0x1186a8u: goto label_1186a8;
        case 0x1186acu: goto label_1186ac;
        case 0x1186b0u: goto label_1186b0;
        case 0x1186b4u: goto label_1186b4;
        case 0x1186b8u: goto label_1186b8;
        case 0x1186bcu: goto label_1186bc;
        case 0x1186c0u: goto label_1186c0;
        case 0x1186c4u: goto label_1186c4;
        case 0x1186c8u: goto label_1186c8;
        case 0x1186ccu: goto label_1186cc;
        case 0x1186d0u: goto label_1186d0;
        case 0x1186d4u: goto label_1186d4;
        case 0x1186d8u: goto label_1186d8;
        case 0x1186dcu: goto label_1186dc;
        case 0x1186e0u: goto label_1186e0;
        case 0x1186e4u: goto label_1186e4;
        case 0x1186e8u: goto label_1186e8;
        case 0x1186ecu: goto label_1186ec;
        case 0x1186f0u: goto label_1186f0;
        case 0x1186f4u: goto label_1186f4;
        case 0x1186f8u: goto label_1186f8;
        case 0x1186fcu: goto label_1186fc;
        case 0x118700u: goto label_118700;
        case 0x118704u: goto label_118704;
        case 0x118708u: goto label_118708;
        case 0x11870cu: goto label_11870c;
        case 0x118710u: goto label_118710;
        case 0x118714u: goto label_118714;
        case 0x118718u: goto label_118718;
        case 0x11871cu: goto label_11871c;
        case 0x118720u: goto label_118720;
        case 0x118724u: goto label_118724;
        case 0x118728u: goto label_118728;
        case 0x11872cu: goto label_11872c;
        case 0x118730u: goto label_118730;
        case 0x118734u: goto label_118734;
        case 0x118738u: goto label_118738;
        case 0x11873cu: goto label_11873c;
        case 0x118740u: goto label_118740;
        case 0x118744u: goto label_118744;
        case 0x118748u: goto label_118748;
        case 0x11874cu: goto label_11874c;
        case 0x118750u: goto label_118750;
        case 0x118754u: goto label_118754;
        case 0x118758u: goto label_118758;
        case 0x11875cu: goto label_11875c;
        case 0x118760u: goto label_118760;
        case 0x118764u: goto label_118764;
        case 0x118768u: goto label_118768;
        case 0x11876cu: goto label_11876c;
        case 0x118770u: goto label_118770;
        case 0x118774u: goto label_118774;
        case 0x118778u: goto label_118778;
        case 0x11877cu: goto label_11877c;
        case 0x118780u: goto label_118780;
        case 0x118784u: goto label_118784;
        case 0x118788u: goto label_118788;
        case 0x11878cu: goto label_11878c;
        case 0x118790u: goto label_118790;
        case 0x118794u: goto label_118794;
        case 0x118798u: goto label_118798;
        case 0x11879cu: goto label_11879c;
        case 0x1187a0u: goto label_1187a0;
        case 0x1187a4u: goto label_1187a4;
        case 0x1187a8u: goto label_1187a8;
        case 0x1187acu: goto label_1187ac;
        case 0x1187b0u: goto label_1187b0;
        case 0x1187b4u: goto label_1187b4;
        case 0x1187b8u: goto label_1187b8;
        case 0x1187bcu: goto label_1187bc;
        case 0x1187c0u: goto label_1187c0;
        case 0x1187c4u: goto label_1187c4;
        case 0x1187c8u: goto label_1187c8;
        case 0x1187ccu: goto label_1187cc;
        case 0x1187d0u: goto label_1187d0;
        case 0x1187d4u: goto label_1187d4;
        case 0x1187d8u: goto label_1187d8;
        case 0x1187dcu: goto label_1187dc;
        case 0x1187e0u: goto label_1187e0;
        case 0x1187e4u: goto label_1187e4;
        case 0x1187e8u: goto label_1187e8;
        case 0x1187ecu: goto label_1187ec;
        case 0x1187f0u: goto label_1187f0;
        case 0x1187f4u: goto label_1187f4;
        case 0x1187f8u: goto label_1187f8;
        case 0x1187fcu: goto label_1187fc;
        case 0x118800u: goto label_118800;
        case 0x118804u: goto label_118804;
        case 0x118808u: goto label_118808;
        case 0x11880cu: goto label_11880c;
        case 0x118810u: goto label_118810;
        case 0x118814u: goto label_118814;
        case 0x118818u: goto label_118818;
        case 0x11881cu: goto label_11881c;
        case 0x118820u: goto label_118820;
        case 0x118824u: goto label_118824;
        case 0x118828u: goto label_118828;
        case 0x11882cu: goto label_11882c;
        case 0x118830u: goto label_118830;
        case 0x118834u: goto label_118834;
        case 0x118838u: goto label_118838;
        case 0x11883cu: goto label_11883c;
        case 0x118840u: goto label_118840;
        case 0x118844u: goto label_118844;
        case 0x118848u: goto label_118848;
        case 0x11884cu: goto label_11884c;
        case 0x118850u: goto label_118850;
        case 0x118854u: goto label_118854;
        case 0x118858u: goto label_118858;
        case 0x11885cu: goto label_11885c;
        case 0x118860u: goto label_118860;
        case 0x118864u: goto label_118864;
        case 0x118868u: goto label_118868;
        case 0x11886cu: goto label_11886c;
        case 0x118870u: goto label_118870;
        case 0x118874u: goto label_118874;
        case 0x118878u: goto label_118878;
        case 0x11887cu: goto label_11887c;
        case 0x118880u: goto label_118880;
        case 0x118884u: goto label_118884;
        case 0x118888u: goto label_118888;
        case 0x11888cu: goto label_11888c;
        case 0x118890u: goto label_118890;
        case 0x118894u: goto label_118894;
        case 0x118898u: goto label_118898;
        case 0x11889cu: goto label_11889c;
        case 0x1188a0u: goto label_1188a0;
        case 0x1188a4u: goto label_1188a4;
        case 0x1188a8u: goto label_1188a8;
        case 0x1188acu: goto label_1188ac;
        case 0x1188b0u: goto label_1188b0;
        case 0x1188b4u: goto label_1188b4;
        case 0x1188b8u: goto label_1188b8;
        case 0x1188bcu: goto label_1188bc;
        case 0x1188c0u: goto label_1188c0;
        case 0x1188c4u: goto label_1188c4;
        case 0x1188c8u: goto label_1188c8;
        case 0x1188ccu: goto label_1188cc;
        case 0x1188d0u: goto label_1188d0;
        case 0x1188d4u: goto label_1188d4;
        case 0x1188d8u: goto label_1188d8;
        case 0x1188dcu: goto label_1188dc;
        case 0x1188e0u: goto label_1188e0;
        case 0x1188e4u: goto label_1188e4;
        case 0x1188e8u: goto label_1188e8;
        case 0x1188ecu: goto label_1188ec;
        case 0x1188f0u: goto label_1188f0;
        case 0x1188f4u: goto label_1188f4;
        case 0x1188f8u: goto label_1188f8;
        case 0x1188fcu: goto label_1188fc;
        case 0x118900u: goto label_118900;
        case 0x118904u: goto label_118904;
        case 0x118908u: goto label_118908;
        case 0x11890cu: goto label_11890c;
        case 0x118910u: goto label_118910;
        case 0x118914u: goto label_118914;
        case 0x118918u: goto label_118918;
        case 0x11891cu: goto label_11891c;
        case 0x118920u: goto label_118920;
        case 0x118924u: goto label_118924;
        case 0x118928u: goto label_118928;
        case 0x11892cu: goto label_11892c;
        case 0x118930u: goto label_118930;
        case 0x118934u: goto label_118934;
        case 0x118938u: goto label_118938;
        case 0x11893cu: goto label_11893c;
        case 0x118940u: goto label_118940;
        case 0x118944u: goto label_118944;
        case 0x118948u: goto label_118948;
        case 0x11894cu: goto label_11894c;
        case 0x118950u: goto label_118950;
        case 0x118954u: goto label_118954;
        case 0x118958u: goto label_118958;
        case 0x11895cu: goto label_11895c;
        case 0x118960u: goto label_118960;
        case 0x118964u: goto label_118964;
        case 0x118968u: goto label_118968;
        case 0x11896cu: goto label_11896c;
        case 0x118970u: goto label_118970;
        case 0x118974u: goto label_118974;
        case 0x118978u: goto label_118978;
        case 0x11897cu: goto label_11897c;
        case 0x118980u: goto label_118980;
        case 0x118984u: goto label_118984;
        case 0x118988u: goto label_118988;
        case 0x11898cu: goto label_11898c;
        case 0x118990u: goto label_118990;
        case 0x118994u: goto label_118994;
        case 0x118998u: goto label_118998;
        case 0x11899cu: goto label_11899c;
        case 0x1189a0u: goto label_1189a0;
        case 0x1189a4u: goto label_1189a4;
        case 0x1189a8u: goto label_1189a8;
        case 0x1189acu: goto label_1189ac;
        case 0x1189b0u: goto label_1189b0;
        case 0x1189b4u: goto label_1189b4;
        case 0x1189b8u: goto label_1189b8;
        case 0x1189bcu: goto label_1189bc;
        case 0x1189c0u: goto label_1189c0;
        case 0x1189c4u: goto label_1189c4;
        case 0x1189c8u: goto label_1189c8;
        case 0x1189ccu: goto label_1189cc;
        case 0x1189d0u: goto label_1189d0;
        case 0x1189d4u: goto label_1189d4;
        case 0x1189d8u: goto label_1189d8;
        case 0x1189dcu: goto label_1189dc;
        case 0x1189e0u: goto label_1189e0;
        case 0x1189e4u: goto label_1189e4;
        case 0x1189e8u: goto label_1189e8;
        case 0x1189ecu: goto label_1189ec;
        case 0x1189f0u: goto label_1189f0;
        case 0x1189f4u: goto label_1189f4;
        case 0x1189f8u: goto label_1189f8;
        case 0x1189fcu: goto label_1189fc;
        case 0x118a00u: goto label_118a00;
        case 0x118a04u: goto label_118a04;
        case 0x118a08u: goto label_118a08;
        case 0x118a0cu: goto label_118a0c;
        case 0x118a10u: goto label_118a10;
        case 0x118a14u: goto label_118a14;
        case 0x118a18u: goto label_118a18;
        case 0x118a1cu: goto label_118a1c;
        case 0x118a20u: goto label_118a20;
        case 0x118a24u: goto label_118a24;
        case 0x118a28u: goto label_118a28;
        case 0x118a2cu: goto label_118a2c;
        case 0x118a30u: goto label_118a30;
        case 0x118a34u: goto label_118a34;
        case 0x118a38u: goto label_118a38;
        case 0x118a3cu: goto label_118a3c;
        case 0x118a40u: goto label_118a40;
        case 0x118a44u: goto label_118a44;
        case 0x118a48u: goto label_118a48;
        case 0x118a4cu: goto label_118a4c;
        case 0x118a50u: goto label_118a50;
        case 0x118a54u: goto label_118a54;
        case 0x118a58u: goto label_118a58;
        case 0x118a5cu: goto label_118a5c;
        case 0x118a60u: goto label_118a60;
        case 0x118a64u: goto label_118a64;
        case 0x118a68u: goto label_118a68;
        case 0x118a6cu: goto label_118a6c;
        case 0x118a70u: goto label_118a70;
        case 0x118a74u: goto label_118a74;
        case 0x118a78u: goto label_118a78;
        case 0x118a7cu: goto label_118a7c;
        case 0x118a80u: goto label_118a80;
        case 0x118a84u: goto label_118a84;
        case 0x118a88u: goto label_118a88;
        case 0x118a8cu: goto label_118a8c;
        case 0x118a90u: goto label_118a90;
        case 0x118a94u: goto label_118a94;
        case 0x118a98u: goto label_118a98;
        case 0x118a9cu: goto label_118a9c;
        case 0x118aa0u: goto label_118aa0;
        case 0x118aa4u: goto label_118aa4;
        case 0x118aa8u: goto label_118aa8;
        case 0x118aacu: goto label_118aac;
        case 0x118ab0u: goto label_118ab0;
        case 0x118ab4u: goto label_118ab4;
        default: break;
    }

    ctx->pc = 0x1177d8u;

label_1177d8:
    // 0x1177d8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1177d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1177dc:
    // 0x1177dc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1177dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1177e0:
    // 0x1177e0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1177e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1177e4:
    // 0x1177e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1177e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1177e8:
    // 0x1177e8: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1177e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1177ec:
    // 0x1177ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1177ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1177f0:
    // 0x1177f0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1177f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1177f4:
    // 0x1177f4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1177f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1177f8:
    // 0x1177f8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1177f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1177fc:
    // 0x1177fc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1177fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_117800:
    // 0x117800: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x117800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_117804:
    // 0x117804: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x117804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_117808:
    // 0x117808: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x117808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_11780c:
    // 0x11780c: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x11780cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_117810:
    // 0x117810: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x117810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_117814:
    // 0x117814: 0x12600499  beqz        $s3, . + 4 + (0x499 << 2)
label_117818:
    if (ctx->pc == 0x117818u) {
        ctx->pc = 0x117818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117814u;
        // 0x117818: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11781Cu;
        goto label_11781c;
    }
    ctx->pc = 0x117814u;
    {
        const bool branch_taken_0x117814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x117818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117814u;
        // 0x117818: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117814) {
            ctx->pc = 0x118A7Cu;
            goto label_118a7c;
        }
    }
    ctx->pc = 0x11781Cu;
label_11781c:
    // 0x11781c: 0x92630034  lbu         $v1, 0x34($s3)
    ctx->pc = 0x11781cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_117820:
    // 0x117820: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x117820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_117824:
    // 0x117824: 0x10400496  beqz        $v0, . + 4 + (0x496 << 2)
label_117828:
    if (ctx->pc == 0x117828u) {
        ctx->pc = 0x117828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117824u;
        // 0x117828: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11782Cu;
        goto label_11782c;
    }
    ctx->pc = 0x117824u;
    {
        const bool branch_taken_0x117824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117824u;
        // 0x117828: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117824) {
            ctx->pc = 0x118A80u;
            goto label_118a80;
        }
    }
    ctx->pc = 0x11782Cu;
label_11782c:
    // 0x11782c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_117830:
    // 0x117830: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x117830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_117834:
    // 0x117834: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x117834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_117838:
    // 0x117838: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x117838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_11783c:
    // 0x11783c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x11783cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117840:
    // 0x117840: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x117840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117844:
    // 0x117844: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_117848:
    if (ctx->pc == 0x117848u) {
        ctx->pc = 0x117848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117844u;
        // 0x117848: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11784Cu;
        goto label_11784c;
    }
    ctx->pc = 0x117844u;
    {
        const bool branch_taken_0x117844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117844u;
        // 0x117848: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117844) {
            ctx->pc = 0x117898u;
            goto label_117898;
        }
    }
    ctx->pc = 0x11784Cu;
label_11784c:
    // 0x11784c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x11784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_117850:
    // 0x117850: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_117854:
    if (ctx->pc == 0x117854u) {
        ctx->pc = 0x117854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117850u;
        // 0x117854: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117858u;
        goto label_117858;
    }
    ctx->pc = 0x117850u;
    {
        const bool branch_taken_0x117850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117850u;
        // 0x117854: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117850) {
            ctx->pc = 0x117898u;
            goto label_117898;
        }
    }
    ctx->pc = 0x117858u;
label_117858:
    // 0x117858: 0xc621009c  lwc1        $f1, 0x9C($s1)
    ctx->pc = 0x117858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11785c:
    // 0x11785c: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x11785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117860:
    // 0x117860: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x117860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117864:
    // 0x117864: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x117864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_117868:
    // 0x117868: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x117868u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_11786c:
    // 0x11786c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11786cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_117870:
    // 0x117870: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x117870u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_117874:
    // 0x117874: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x117874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117878:
    // 0x117878: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x117878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11787c:
    // 0x11787c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x11787cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_117880:
    // 0x117880: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x117880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_117884:
    // 0x117884: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x117884u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_117888:
    // 0x117888: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x117888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11788c:
    // 0x11788c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_117890:
    // 0x117890: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_117894:
    // 0x117894: 0x0  nop
    ctx->pc = 0x117894u;
    // NOP
label_117898:
    // 0x117898: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x117898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_11789c:
    // 0x11789c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1178a0:
    if (ctx->pc == 0x1178A0u) {
        ctx->pc = 0x1178A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11789Cu;
        // 0x1178a0: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178A4u;
        goto label_1178a4;
    }
    ctx->pc = 0x11789Cu;
    {
        const bool branch_taken_0x11789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11789Cu;
        // 0x1178a0: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11789c) {
            ctx->pc = 0x1178C0u;
            goto label_1178c0;
        }
    }
    ctx->pc = 0x1178A4u;
label_1178a4:
    // 0x1178a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1178a8:
    if (ctx->pc == 0x1178A8u) {
        ctx->pc = 0x1178A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A4u;
        // 0x1178a8: 0xc6200048  lwc1        $f0, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178ACu;
        goto label_1178ac;
    }
    ctx->pc = 0x1178A4u;
    {
        const bool branch_taken_0x1178a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A4u;
        // 0x1178a8: 0xc6200048  lwc1        $f0, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a4) {
            ctx->pc = 0x1178CCu;
            goto label_1178cc;
        }
    }
    ctx->pc = 0x1178ACu;
label_1178ac:
    // 0x1178ac: 0x0  nop
    ctx->pc = 0x1178acu;
    // NOP
label_1178b0:
    // 0x1178b0: 0x0  nop
    ctx->pc = 0x1178b0u;
    // NOP
label_1178b4:
    // 0x1178b4: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x1178b4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[2]);
label_1178b8:
    // 0x1178b8: 0x10000059  b           . + 4 + (0x59 << 2)
label_1178bc:
    if (ctx->pc == 0x1178BCu) {
        ctx->pc = 0x1178BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B8u;
        // 0x1178bc: 0xc7a30044  lwc1        $f3, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178C0u;
        goto label_1178c0;
    }
    ctx->pc = 0x1178B8u;
    {
        const bool branch_taken_0x1178b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B8u;
        // 0x1178bc: 0xc7a30044  lwc1        $f3, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178b8) {
            ctx->pc = 0x117A20u;
            goto label_117a20;
        }
    }
    ctx->pc = 0x1178C0u;
label_1178c0:
    // 0x1178c0: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1178c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1178c4:
    // 0x1178c4: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x1178c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1178c8:
    // 0x1178c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1178c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1178cc:
    // 0x1178cc: 0x46001140  add.s       $f5, $f2, $f0
    ctx->pc = 0x1178ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1178d0:
    // 0x1178d0: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x1178d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1178d4:
    // 0x1178d4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1178d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1178d8:
    // 0x1178d8: 0xc6240210  lwc1        $f4, 0x210($s1)
    ctx->pc = 0x1178d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1178dc:
    // 0x1178dc: 0xc6210214  lwc1        $f1, 0x214($s1)
    ctx->pc = 0x1178dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1178e0:
    // 0x1178e0: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x1178e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1178e4:
    // 0x1178e4: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1178e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1178e8:
    // 0x1178e8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1178e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1178ec:
    // 0x1178ec: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x1178ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_1178f0:
    // 0x1178f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1178f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1178f4:
    // 0x1178f4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1178f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1178f8:
    // 0x1178f8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1178f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1178fc:
    // 0x1178fc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1178fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_117900:
    // 0x117900: 0xc093aa8  jal         func_24EAA0
label_117904:
    if (ctx->pc == 0x117904u) {
        ctx->pc = 0x117904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117900u;
        // 0x117904: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117908u;
        goto label_117908;
    }
    ctx->pc = 0x117900u;
    SET_GPR_U32(ctx, 31, 0x117908u);
    ctx->pc = 0x117904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117900u;
    // 0x117904: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x117900u, 0x117908u)) {
        return;
    }
    ctx->pc = 0x117908u;
label_117908:
    // 0x117908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11790c:
    // 0x11790c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11790cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_117910:
    // 0x117910: 0xc62101e0  lwc1        $f1, 0x1E0($s1)
    ctx->pc = 0x117910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117914:
    // 0x117914: 0x0  nop
    ctx->pc = 0x117914u;
    // NOP
label_117918:
    // 0x117918: 0x0  nop
    ctx->pc = 0x117918u;
    // NOP
label_11791c:
    // 0x11791c: 0x4616a883  div.s       $f2, $f21, $f22
    ctx->pc = 0x11791cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[22]);
label_117920:
    // 0x117920: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x117920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_117924:
    // 0x117924: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x117924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_117928:
    // 0x117928: 0x0  nop
    ctx->pc = 0x117928u;
    // NOP
label_11792c:
    // 0x11792c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x11792cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117930:
    // 0x117930: 0xe62101e0  swc1        $f1, 0x1E0($s1)
    ctx->pc = 0x117930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
label_117934:
    // 0x117934: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_117938:
    if (ctx->pc == 0x117938u) {
        ctx->pc = 0x117938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117934u;
        // 0x117938: 0x460205c2  mul.s       $f23, $f0, $f2 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11793Cu;
        goto label_11793c;
    }
    ctx->pc = 0x117934u;
    {
        const bool branch_taken_0x117934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117934u;
        // 0x117938: 0x460205c2  mul.s       $f23, $f0, $f2 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117934) {
            ctx->pc = 0x117940u;
            goto label_117940;
        }
    }
    ctx->pc = 0x11793Cu;
label_11793c:
    // 0x11793c: 0xe63401e0  swc1        $f20, 0x1E0($s1)
    ctx->pc = 0x11793cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
label_117940:
    // 0x117940: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x117940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_117944:
    // 0x117944: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x117944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_117948:
    // 0x117948: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x117948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_11794c:
    // 0x11794c: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x11794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117950:
    // 0x117950: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x117950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117954:
    // 0x117954: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x117954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_117958:
    // 0x117958: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x117958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_11795c:
    // 0x11795c: 0x6a2500db  ldl         $a1, 0xDB($s1)
    ctx->pc = 0x11795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_117960:
    // 0x117960: 0x6e2500d4  ldr         $a1, 0xD4($s1)
    ctx->pc = 0x117960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_117964:
    // 0x117964: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x117964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_117968:
    // 0x117968: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x117968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11796c:
    // 0x11796c: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x11796cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117970:
    // 0x117970: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x117970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_117974:
    // 0x117974: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x117974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_117978:
    // 0x117978: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x117978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11797c:
    // 0x11797c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x11797cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_117980:
    // 0x117980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x117980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_117984:
    // 0x117984: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x117984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117988:
    // 0x117988: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x117988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11798c:
    // 0x11798c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x11798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_117990:
    // 0x117990: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x117990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117994:
    // 0x117994: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x117994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117998:
    // 0x117998: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x117998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11799c:
    // 0x11799c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x11799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1179a0:
    // 0x1179a0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1179a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1179a4:
    // 0x1179a4: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x1179a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1179a8:
    // 0x1179a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1179a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1179ac:
    // 0x1179ac: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x1179acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1179b0:
    // 0x1179b0: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x1179b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_1179b4:
    // 0x1179b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1179b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1179b8:
    // 0x1179b8: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x1179b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1179bc:
    // 0x1179bc: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x1179bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1179c0:
    // 0x1179c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1179c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1179c4:
    // 0x1179c4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x1179c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1179c8:
    // 0x1179c8: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x1179c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_1179cc:
    // 0x1179cc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1179ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1179d0:
    // 0x1179d0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1179d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1179d4:
    // 0x1179d4: 0x0  nop
    ctx->pc = 0x1179d4u;
    // NOP
label_1179d8:
    // 0x1179d8: 0x0  nop
    ctx->pc = 0x1179d8u;
    // NOP
label_1179dc:
    // 0x1179dc: 0x46000004  c1          0x4
    ctx->pc = 0x1179dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1179e0:
    // 0x1179e0: 0xc62102ac  lwc1        $f1, 0x2AC($s1)
    ctx->pc = 0x1179e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1179e4:
    // 0x1179e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1179e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1179e8:
    // 0x1179e8: 0x0  nop
    ctx->pc = 0x1179e8u;
    // NOP
label_1179ec:
    // 0x1179ec: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_1179f0:
    if (ctx->pc == 0x1179F0u) {
        ctx->pc = 0x1179F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179ECu;
        // 0x1179f0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179F4u;
        goto label_1179f4;
    }
    ctx->pc = 0x1179ECu;
    {
        const bool branch_taken_0x1179ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1179F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179ECu;
        // 0x1179f0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179ec) {
            ctx->pc = 0x117AA0u;
            goto label_117aa0;
        }
    }
    ctx->pc = 0x1179F4u;
label_1179f4:
    // 0x1179f4: 0xc04642c  jal         func_1190B0
label_1179f8:
    if (ctx->pc == 0x1179F8u) {
        ctx->pc = 0x1179F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179F4u;
        // 0x1179f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179FCu;
        goto label_1179fc;
    }
    ctx->pc = 0x1179F4u;
    SET_GPR_U32(ctx, 31, 0x1179FCu);
    ctx->pc = 0x1179F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179F4u;
    // 0x1179f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1179F4u, 0x1179FCu)) {
        return;
    }
    ctx->pc = 0x1179FCu;
label_1179fc:
    // 0x1179fc: 0x0  nop
    ctx->pc = 0x1179fcu;
    // NOP
label_117a00:
    // 0x117a00: 0x0  nop
    ctx->pc = 0x117a00u;
    // NOP
label_117a04:
    // 0x117a04: 0x46000084  c1          0x84
    ctx->pc = 0x117a04u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_117a08:
    // 0x117a08: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x117a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117a0c:
    // 0x117a0c: 0x0  nop
    ctx->pc = 0x117a0cu;
    // NOP
label_117a10:
    // 0x117a10: 0x4501ffa6  bc1t        . + 4 + (-0x5A << 2)
label_117a14:
    if (ctx->pc == 0x117A14u) {
        ctx->pc = 0x117A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A10u;
        // 0x117a14: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117A18u;
        goto label_117a18;
    }
    ctx->pc = 0x117A10u;
    {
        const bool branch_taken_0x117a10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x117A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A10u;
        // 0x117a14: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a10) {
            ctx->pc = 0x1178ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1178ac;
        }
    }
    ctx->pc = 0x117A18u;
label_117a18:
    // 0x117a18: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x117a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117a1c:
    // 0x117a1c: 0x0  nop
    ctx->pc = 0x117a1cu;
    // NOP
label_117a20:
    // 0x117a20: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x117a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117a24:
    // 0x117a24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x117a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_117a28:
    // 0x117a28: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x117a28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_117a2c:
    // 0x117a2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x117a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_117a30:
    // 0x117a30: 0xc62202ac  lwc1        $f2, 0x2AC($s1)
    ctx->pc = 0x117a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117a34:
    // 0x117a34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x117a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_117a38:
    // 0x117a38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x117a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_117a3c:
    // 0x117a3c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x117a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_117a40:
    // 0x117a40: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x117a40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_117a44:
    // 0x117a44: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x117a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_117a48:
    // 0x117a48: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x117a48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_117a4c:
    // 0x117a4c: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x117a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_117a50:
    // 0x117a50: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x117a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_117a54:
    // 0x117a54: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_117a58:
    // 0x117a58: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x117a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117a5c:
    // 0x117a5c: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x117a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117a60:
    // 0x117a60: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x117a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
label_117a64:
    // 0x117a64: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x117a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_117a68:
    // 0x117a68: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x117a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117a6c:
    // 0x117a6c: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x117a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117a70:
    // 0x117a70: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x117a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117a74:
    // 0x117a74: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x117a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117a78:
    // 0x117a78: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x117a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117a7c:
    // 0x117a7c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x117a7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_117a80:
    // 0x117a80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x117a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_117a84:
    // 0x117a84: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x117a84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_117a88:
    // 0x117a88: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x117a88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_117a8c:
    // 0x117a8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x117a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_117a90:
    // 0x117a90: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x117a90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_117a94:
    // 0x117a94: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x117a94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_117a98:
    // 0x117a98: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x117a98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_117a9c:
    // 0x117a9c: 0x0  nop
    ctx->pc = 0x117a9cu;
    // NOP
label_117aa0:
    // 0x117aa0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x117aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_117aa4:
    // 0x117aa4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x117aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_117aa8:
    // 0x117aa8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x117aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_117aac:
    // 0x117aac: 0xb2230217  sdl         $v1, 0x217($s1)
    ctx->pc = 0x117aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117ab0:
    // 0x117ab0: 0xb6230210  sdr         $v1, 0x210($s1)
    ctx->pc = 0x117ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117ab4:
    // 0x117ab4: 0xae240218  sw          $a0, 0x218($s1)
    ctx->pc = 0x117ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 4));
label_117ab8:
    // 0x117ab8: 0xe6360270  swc1        $f22, 0x270($s1)
    ctx->pc = 0x117ab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
label_117abc:
    // 0x117abc: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x117abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_117ac0:
    // 0x117ac0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_117ac4:
    if (ctx->pc == 0x117AC4u) {
        ctx->pc = 0x117AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AC0u;
        // 0x117ac4: 0xc6220260  lwc1        $f2, 0x260($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117AC8u;
        goto label_117ac8;
    }
    ctx->pc = 0x117AC0u;
    {
        const bool branch_taken_0x117ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117ac0) {
            ctx->pc = 0x117AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117AC0u;
            // 0x117ac4: 0xc6220260  lwc1        $f2, 0x260($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x117ADCu;
            goto label_117adc;
        }
    }
    ctx->pc = 0x117AC8u;
label_117ac8:
    // 0x117ac8: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x117ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117acc:
    // 0x117acc: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x117accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117ad0:
    // 0x117ad0: 0xe6200260  swc1        $f0, 0x260($s1)
    ctx->pc = 0x117ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
label_117ad4:
    // 0x117ad4: 0x10000017  b           . + 4 + (0x17 << 2)
label_117ad8:
    if (ctx->pc == 0x117AD8u) {
        ctx->pc = 0x117AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AD4u;
        // 0x117ad8: 0xe6210264  swc1        $f1, 0x264($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117ADCu;
        goto label_117adc;
    }
    ctx->pc = 0x117AD4u;
    {
        const bool branch_taken_0x117ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AD4u;
        // 0x117ad8: 0xe6210264  swc1        $f1, 0x264($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ad4) {
            ctx->pc = 0x117B34u;
            goto label_117b34;
        }
    }
    ctx->pc = 0x117ADCu;
label_117adc:
    // 0x117adc: 0xc6210268  lwc1        $f1, 0x268($s1)
    ctx->pc = 0x117adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117ae0:
    // 0x117ae0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x117ae0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117ae4:
    // 0x117ae4: 0x0  nop
    ctx->pc = 0x117ae4u;
    // NOP
label_117ae8:
    // 0x117ae8: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
label_117aec:
    if (ctx->pc == 0x117AECu) {
        ctx->pc = 0x117AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AE8u;
        // 0x117aec: 0x8e22020c  lw          $v0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117AF0u;
        goto label_117af0;
    }
    ctx->pc = 0x117AE8u;
    {
        const bool branch_taken_0x117ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117ae8) {
            ctx->pc = 0x117AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117AE8u;
            // 0x117aec: 0x8e22020c  lw          $v0, 0x20C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117B38u;
            goto label_117b38;
        }
    }
    ctx->pc = 0x117AF0u;
label_117af0:
    // 0x117af0: 0xc62002a8  lwc1        $f0, 0x2A8($s1)
    ctx->pc = 0x117af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117af4:
    // 0x117af4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x117af4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_117af8:
    // 0x117af8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x117af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_117afc:
    // 0x117afc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x117afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117b00:
    // 0x117b00: 0x0  nop
    ctx->pc = 0x117b00u;
    // NOP
label_117b04:
    // 0x117b04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_117b08:
    if (ctx->pc == 0x117B08u) {
        ctx->pc = 0x117B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B04u;
        // 0x117b08: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B0Cu;
        goto label_117b0c;
    }
    ctx->pc = 0x117B04u;
    {
        const bool branch_taken_0x117b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117b04) {
            ctx->pc = 0x117B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117B04u;
            // 0x117b08: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117B0Cu;
            goto label_117b0c;
        }
    }
    ctx->pc = 0x117B0Cu;
label_117b0c:
    // 0x117b0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x117b0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_117b10:
    // 0x117b10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x117b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117b14:
    // 0x117b14: 0x0  nop
    ctx->pc = 0x117b14u;
    // NOP
label_117b18:
    // 0x117b18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_117b1c:
    if (ctx->pc == 0x117B1Cu) {
        ctx->pc = 0x117B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B18u;
        // 0x117b1c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B20u;
        goto label_117b20;
    }
    ctx->pc = 0x117B18u;
    {
        const bool branch_taken_0x117b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117b18) {
            ctx->pc = 0x117B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117B18u;
            // 0x117b1c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117B20u;
            goto label_117b20;
        }
    }
    ctx->pc = 0x117B20u;
label_117b20:
    // 0x117b20: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x117b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_117b24:
    // 0x117b24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x117b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_117b28:
    // 0x117b28: 0xc09b0e8  jal         func_26C3A0
label_117b2c:
    if (ctx->pc == 0x117B2Cu) {
        ctx->pc = 0x117B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B28u;
        // 0x117b2c: 0xe6200260  swc1        $f0, 0x260($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B30u;
        goto label_117b30;
    }
    ctx->pc = 0x117B28u;
    SET_GPR_U32(ctx, 31, 0x117B30u);
    ctx->pc = 0x117B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B28u;
    // 0x117b2c: 0xe6200260  swc1        $f0, 0x260($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x117B28u, 0x117B30u)) {
        return;
    }
    ctx->pc = 0x117B30u;
label_117b30:
    // 0x117b30: 0xe6200264  swc1        $f0, 0x264($s1)
    ctx->pc = 0x117b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
label_117b34:
    // 0x117b34: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x117b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_117b38:
    // 0x117b38: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_117b3c:
    if (ctx->pc == 0x117B3Cu) {
        ctx->pc = 0x117B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B38u;
        // 0x117b3c: 0xc62301f4  lwc1        $f3, 0x1F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B40u;
        goto label_117b40;
    }
    ctx->pc = 0x117B38u;
    {
        const bool branch_taken_0x117b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b38) {
            ctx->pc = 0x117B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117B38u;
            // 0x117b3c: 0xc62301f4  lwc1        $f3, 0x1F4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C08u;
            goto label_117c08;
        }
    }
    ctx->pc = 0x117B40u;
label_117b40:
    // 0x117b40: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x117b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_117b44:
    // 0x117b44: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x117b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_117b48:
    // 0x117b48: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x117b48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_117b4c:
    // 0x117b4c: 0xb22701fb  sdl         $a3, 0x1FB($s1)
    ctx->pc = 0x117b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117b50:
    // 0x117b50: 0xb62701f4  sdr         $a3, 0x1F4($s1)
    ctx->pc = 0x117b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117b54:
    // 0x117b54: 0xae2801fc  sw          $t0, 0x1FC($s1)
    ctx->pc = 0x117b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 8));
label_117b58:
    // 0x117b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117b5c:
    // 0x117b5c: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x117b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_117b60:
    // 0x117b60: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_117b64:
    if (ctx->pc == 0x117B64u) {
        ctx->pc = 0x117B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B60u;
        // 0x117b64: 0x262601f4  addiu       $a2, $s1, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B68u;
        goto label_117b68;
    }
    ctx->pc = 0x117B60u;
    {
        const bool branch_taken_0x117b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B60u;
        // 0x117b64: 0x262601f4  addiu       $a2, $s1, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b60) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117B68u;
label_117b68:
    // 0x117b68: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x117b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_117b6c:
    // 0x117b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_117b70:
    if (ctx->pc == 0x117B70u) {
        ctx->pc = 0x117B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B6Cu;
        // 0x117b70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B74u;
        goto label_117b74;
    }
    ctx->pc = 0x117B6Cu;
    {
        const bool branch_taken_0x117b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B6Cu;
        // 0x117b70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b6c) {
            ctx->pc = 0x117B84u;
            goto label_117b84;
        }
    }
    ctx->pc = 0x117B74u;
label_117b74:
    // 0x117b74: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_117b78:
    if (ctx->pc == 0x117B78u) {
        ctx->pc = 0x117B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B74u;
        // 0x117b78: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B7Cu;
        goto label_117b7c;
    }
    ctx->pc = 0x117B74u;
    {
        const bool branch_taken_0x117b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b74) {
            ctx->pc = 0x117B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117B74u;
            // 0x117b78: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117B94u;
            goto label_117b94;
        }
    }
    ctx->pc = 0x117B7Cu;
label_117b7c:
    // 0x117b7c: 0x10000022  b           . + 4 + (0x22 << 2)
label_117b80:
    if (ctx->pc == 0x117B80u) {
        ctx->pc = 0x117B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B7Cu;
        // 0x117b80: 0xc62301f4  lwc1        $f3, 0x1F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B84u;
        goto label_117b84;
    }
    ctx->pc = 0x117B7Cu;
    {
        const bool branch_taken_0x117b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B7Cu;
        // 0x117b80: 0xc62301f4  lwc1        $f3, 0x1F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b7c) {
            ctx->pc = 0x117C08u;
            goto label_117c08;
        }
    }
    ctx->pc = 0x117B84u;
label_117b84:
    // 0x117b84: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_117b88:
    if (ctx->pc == 0x117B88u) {
        ctx->pc = 0x117B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B84u;
        // 0x117b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B8Cu;
        goto label_117b8c;
    }
    ctx->pc = 0x117B84u;
    {
        const bool branch_taken_0x117b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B84u;
        // 0x117b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b84) {
            ctx->pc = 0x117BF4u;
            goto label_117bf4;
        }
    }
    ctx->pc = 0x117B8Cu;
label_117b8c:
    // 0x117b8c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_117b90:
    if (ctx->pc == 0x117B90u) {
        ctx->pc = 0x117B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B8Cu;
        // 0x117b90: 0xc62301f4  lwc1        $f3, 0x1F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B94u;
        goto label_117b94;
    }
    ctx->pc = 0x117B8Cu;
    {
        const bool branch_taken_0x117b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B8Cu;
        // 0x117b90: 0xc62301f4  lwc1        $f3, 0x1F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b8c) {
            ctx->pc = 0x117C08u;
            goto label_117c08;
        }
    }
    ctx->pc = 0x117B94u;
label_117b94:
    // 0x117b94: 0x262401e8  addiu       $a0, $s1, 0x1E8
    ctx->pc = 0x117b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
label_117b98:
    // 0x117b98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x117b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_117b9c:
    // 0x117b9c: 0x68460027  ldl         $a2, 0x27($v0)
    ctx->pc = 0x117b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_117ba0:
    // 0x117ba0: 0x6c460020  ldr         $a2, 0x20($v0)
    ctx->pc = 0x117ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_117ba4:
    // 0x117ba4: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x117ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_117ba8:
    // 0x117ba8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x117ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117bac:
    // 0x117bac: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x117bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117bb0:
    // 0x117bb0: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x117bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
label_117bb4:
    // 0x117bb4: 0xc093a88  jal         func_24EA20
label_117bb8:
    if (ctx->pc == 0x117BB8u) {
        ctx->pc = 0x117BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BB4u;
        // 0x117bb8: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117BBCu;
        goto label_117bbc;
    }
    ctx->pc = 0x117BB4u;
    SET_GPR_U32(ctx, 31, 0x117BBCu);
    ctx->pc = 0x117BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BB4u;
    // 0x117bb8: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x117BB4u, 0x117BBCu)) {
        return;
    }
    ctx->pc = 0x117BBCu;
label_117bbc:
    // 0x117bbc: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x117bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117bc0:
    // 0x117bc0: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x117bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117bc4:
    // 0x117bc4: 0xc62001e8  lwc1        $f0, 0x1E8($s1)
    ctx->pc = 0x117bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117bc8:
    // 0x117bc8: 0xc62201ec  lwc1        $f2, 0x1EC($s1)
    ctx->pc = 0x117bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117bcc:
    // 0x117bcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x117bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_117bd0:
    // 0x117bd0: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x117bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117bd4:
    // 0x117bd4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x117bd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_117bd8:
    // 0x117bd8: 0xc62101f0  lwc1        $f1, 0x1F0($s1)
    ctx->pc = 0x117bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117bdc:
    // 0x117bdc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x117bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_117be0:
    // 0x117be0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x117be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_117be4:
    // 0x117be4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x117be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_117be8:
    // 0x117be8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x117be8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_117bec:
    // 0x117bec: 0x10000004  b           . + 4 + (0x4 << 2)
label_117bf0:
    if (ctx->pc == 0x117BF0u) {
        ctx->pc = 0x117BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BECu;
        // 0x117bf0: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117BF4u;
        goto label_117bf4;
    }
    ctx->pc = 0x117BECu;
    {
        const bool branch_taken_0x117bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BECu;
        // 0x117bf0: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bec) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117BF4u;
label_117bf4:
    // 0x117bf4: 0x262500d4  addiu       $a1, $s1, 0xD4
    ctx->pc = 0x117bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_117bf8:
    // 0x117bf8: 0xc0454d8  jal         func_115360
label_117bfc:
    if (ctx->pc == 0x117BFCu) {
        ctx->pc = 0x117BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BF8u;
        // 0x117bfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C00u;
        goto label_117c00;
    }
    ctx->pc = 0x117BF8u;
    SET_GPR_U32(ctx, 31, 0x117C00u);
    ctx->pc = 0x117BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BF8u;
    // 0x117bfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115360u, 0x117BF8u, 0x117C00u)) {
        return;
    }
    ctx->pc = 0x117C00u;
label_117c00:
    // 0x117c00: 0xc62301f4  lwc1        $f3, 0x1F4($s1)
    ctx->pc = 0x117c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117c04:
    // 0x117c04: 0x0  nop
    ctx->pc = 0x117c04u;
    // NOP
label_117c08:
    // 0x117c08: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x117c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117c0c:
    // 0x117c0c: 0xc62401f8  lwc1        $f4, 0x1F8($s1)
    ctx->pc = 0x117c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117c10:
    // 0x117c10: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x117c10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_117c14:
    // 0x117c14: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x117c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117c18:
    // 0x117c18: 0xc62301fc  lwc1        $f3, 0x1FC($s1)
    ctx->pc = 0x117c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117c1c:
    // 0x117c1c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x117c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117c20:
    // 0x117c20: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x117c20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_117c24:
    // 0x117c24: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x117c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_117c28:
    // 0x117c28: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x117c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_117c2c:
    // 0x117c2c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x117c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_117c30:
    // 0x117c30: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x117c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_117c34:
    // 0x117c34: 0xc093aa8  jal         func_24EAA0
label_117c38:
    if (ctx->pc == 0x117C38u) {
        ctx->pc = 0x117C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C34u;
        // 0x117c38: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C3Cu;
        goto label_117c3c;
    }
    ctx->pc = 0x117C34u;
    SET_GPR_U32(ctx, 31, 0x117C3Cu);
    ctx->pc = 0x117C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C34u;
    // 0x117c38: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x117C34u, 0x117C3Cu)) {
        return;
    }
    ctx->pc = 0x117C3Cu;
label_117c3c:
    // 0x117c3c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_117c40:
    // 0x117c40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_117c44:
    if (ctx->pc == 0x117C44u) {
        ctx->pc = 0x117C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C40u;
        // 0x117c44: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C48u;
        goto label_117c48;
    }
    ctx->pc = 0x117C40u;
    {
        const bool branch_taken_0x117c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C40u;
        // 0x117c44: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c40) {
            ctx->pc = 0x117C5Cu;
            goto label_117c5c;
        }
    }
    ctx->pc = 0x117C48u;
label_117c48:
    // 0x117c48: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x117c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117c4c:
    // 0x117c4c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x117c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117c50:
    // 0x117c50: 0x0  nop
    ctx->pc = 0x117c50u;
    // NOP
label_117c54:
    // 0x117c54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_117c58:
    if (ctx->pc == 0x117C58u) {
        ctx->pc = 0x117C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C54u;
        // 0x117c58: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C5Cu;
        goto label_117c5c;
    }
    ctx->pc = 0x117C54u;
    {
        const bool branch_taken_0x117c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117c54) {
            ctx->pc = 0x117C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C54u;
            // 0x117c58: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C5Cu;
            goto label_117c5c;
        }
    }
    ctx->pc = 0x117C5Cu;
label_117c5c:
    // 0x117c5c: 0xc621024c  lwc1        $f1, 0x24C($s1)
    ctx->pc = 0x117c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117c60:
    // 0x117c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_117c64:
    // 0x117c64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_117c68:
    // 0x117c68: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x117c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_117c6c:
    // 0x117c6c: 0xc6220248  lwc1        $f2, 0x248($s1)
    ctx->pc = 0x117c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117c70:
    // 0x117c70: 0xc62d0270  lwc1        $f13, 0x270($s1)
    ctx->pc = 0x117c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_117c74:
    // 0x117c74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x117c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_117c78:
    // 0x117c78: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x117c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_117c7c:
    // 0x117c7c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x117c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_117c80:
    // 0x117c80: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x117c80u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_117c84:
    // 0x117c84: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x117c84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_117c88:
    // 0x117c88: 0x46021302  mul.s       $f12, $f2, $f2
    ctx->pc = 0x117c88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_117c8c:
    // 0x117c8c: 0xc09b3ec  jal         func_26CFB0
label_117c90:
    if (ctx->pc == 0x117C90u) {
        ctx->pc = 0x117C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C8Cu;
        // 0x117c90: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C94u;
        goto label_117c94;
    }
    ctx->pc = 0x117C8Cu;
    SET_GPR_U32(ctx, 31, 0x117C94u);
    ctx->pc = 0x117C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C8Cu;
    // 0x117c90: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x117C8Cu, 0x117C94u)) {
        return;
    }
    ctx->pc = 0x117C94u;
label_117c94:
    // 0x117c94: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x117c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_117c98:
    // 0x117c98: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x117c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117c9c:
    // 0x117c9c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x117c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117ca0:
    // 0x117ca0: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x117ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_117ca4:
    // 0x117ca4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x117ca4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_117ca8:
    // 0x117ca8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x117ca8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_117cac:
    // 0x117cac: 0xc62201f4  lwc1        $f2, 0x1F4($s1)
    ctx->pc = 0x117cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117cb0:
    // 0x117cb0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x117cb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_117cb4:
    // 0x117cb4: 0xc62101fc  lwc1        $f1, 0x1FC($s1)
    ctx->pc = 0x117cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117cb8:
    // 0x117cb8: 0xc62001f8  lwc1        $f0, 0x1F8($s1)
    ctx->pc = 0x117cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117cbc:
    // 0x117cbc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x117cbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_117cc0:
    // 0x117cc0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x117cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_117cc4:
    // 0x117cc4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x117cc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_117cc8:
    // 0x117cc8: 0xe62201f4  swc1        $f2, 0x1F4($s1)
    ctx->pc = 0x117cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 500), bits); }
label_117ccc:
    // 0x117ccc: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x117cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
label_117cd0:
    // 0x117cd0: 0xe62101fc  swc1        $f1, 0x1FC($s1)
    ctx->pc = 0x117cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
label_117cd4:
    // 0x117cd4: 0xc62201d0  lwc1        $f2, 0x1D0($s1)
    ctx->pc = 0x117cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117cd8:
    // 0x117cd8: 0xc62001d4  lwc1        $f0, 0x1D4($s1)
    ctx->pc = 0x117cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117cdc:
    // 0x117cdc: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x117cdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
label_117ce0:
    // 0x117ce0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x117ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_117ce4:
    // 0x117ce4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x117ce4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
label_117ce8:
    // 0x117ce8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x117ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117cec:
    // 0x117cec: 0x0  nop
    ctx->pc = 0x117cecu;
    // NOP
label_117cf0:
    // 0x117cf0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_117cf4:
    if (ctx->pc == 0x117CF4u) {
        ctx->pc = 0x117CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CF0u;
        // 0x117cf4: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117CF8u;
        goto label_117cf8;
    }
    ctx->pc = 0x117CF0u;
    {
        const bool branch_taken_0x117cf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117cf0) {
            ctx->pc = 0x117CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117CF0u;
            // 0x117cf4: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CF8u;
            goto label_117cf8;
        }
    }
    ctx->pc = 0x117CF8u;
label_117cf8:
    // 0x117cf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x117cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117cfc:
    // 0x117cfc: 0x0  nop
    ctx->pc = 0x117cfcu;
    // NOP
label_117d00:
    // 0x117d00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x117d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117d04:
    // 0x117d04: 0x0  nop
    ctx->pc = 0x117d04u;
    // NOP
label_117d08:
    // 0x117d08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_117d0c:
    if (ctx->pc == 0x117D0Cu) {
        ctx->pc = 0x117D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D08u;
        // 0x117d0c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D10u;
        goto label_117d10;
    }
    ctx->pc = 0x117D08u;
    {
        const bool branch_taken_0x117d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117d08) {
            ctx->pc = 0x117D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117D08u;
            // 0x117d0c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117D10u;
            goto label_117d10;
        }
    }
    ctx->pc = 0x117D10u;
label_117d10:
    // 0x117d10: 0xc62001d8  lwc1        $f0, 0x1D8($s1)
    ctx->pc = 0x117d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117d14:
    // 0x117d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117d18:
    // 0x117d18: 0xc634021c  lwc1        $f20, 0x21C($s1)
    ctx->pc = 0x117d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_117d1c:
    // 0x117d1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x117d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_117d20:
    // 0x117d20: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x117d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_117d24:
    // 0x117d24: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x117d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_117d28:
    // 0x117d28: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_117d2c:
    if (ctx->pc == 0x117D2Cu) {
        ctx->pc = 0x117D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D28u;
        // 0x117d2c: 0xe620021c  swc1        $f0, 0x21C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 540), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D30u;
        goto label_117d30;
    }
    ctx->pc = 0x117D28u;
    {
        const bool branch_taken_0x117d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D28u;
        // 0x117d2c: 0xe620021c  swc1        $f0, 0x21C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d28) {
            ctx->pc = 0x117D70u;
            goto label_117d70;
        }
    }
    ctx->pc = 0x117D30u;
label_117d30:
    // 0x117d30: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x117d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_117d34:
    // 0x117d34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_117d38:
    if (ctx->pc == 0x117D38u) {
        ctx->pc = 0x117D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D34u;
        // 0x117d38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D3Cu;
        goto label_117d3c;
    }
    ctx->pc = 0x117D34u;
    {
        const bool branch_taken_0x117d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D34u;
        // 0x117d38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d34) {
            ctx->pc = 0x117D4Cu;
            goto label_117d4c;
        }
    }
    ctx->pc = 0x117D3Cu;
label_117d3c:
    // 0x117d3c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_117d40:
    if (ctx->pc == 0x117D40u) {
        ctx->pc = 0x117D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D3Cu;
        // 0x117d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D44u;
        goto label_117d44;
    }
    ctx->pc = 0x117D3Cu;
    {
        const bool branch_taken_0x117d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D3Cu;
        // 0x117d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d3c) {
            ctx->pc = 0x117D5Cu;
            goto label_117d5c;
        }
    }
    ctx->pc = 0x117D44u;
label_117d44:
    // 0x117d44: 0x10000014  b           . + 4 + (0x14 << 2)
label_117d48:
    if (ctx->pc == 0x117D48u) {
        ctx->pc = 0x117D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D44u;
        // 0x117d48: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D4Cu;
        goto label_117d4c;
    }
    ctx->pc = 0x117D44u;
    {
        const bool branch_taken_0x117d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D44u;
        // 0x117d48: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d44) {
            ctx->pc = 0x117D98u;
            goto label_117d98;
        }
    }
    ctx->pc = 0x117D4Cu;
label_117d4c:
    // 0x117d4c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_117d50:
    if (ctx->pc == 0x117D50u) {
        ctx->pc = 0x117D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D4Cu;
        // 0x117d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D54u;
        goto label_117d54;
    }
    ctx->pc = 0x117D4Cu;
    {
        const bool branch_taken_0x117d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D4Cu;
        // 0x117d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d4c) {
            ctx->pc = 0x117D88u;
            goto label_117d88;
        }
    }
    ctx->pc = 0x117D54u;
label_117d54:
    // 0x117d54: 0x10000010  b           . + 4 + (0x10 << 2)
label_117d58:
    if (ctx->pc == 0x117D58u) {
        ctx->pc = 0x117D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D54u;
        // 0x117d58: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D5Cu;
        goto label_117d5c;
    }
    ctx->pc = 0x117D54u;
    {
        const bool branch_taken_0x117d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D54u;
        // 0x117d58: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d54) {
            ctx->pc = 0x117D98u;
            goto label_117d98;
        }
    }
    ctx->pc = 0x117D5Cu;
label_117d5c:
    // 0x117d5c: 0x262500d4  addiu       $a1, $s1, 0xD4
    ctx->pc = 0x117d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_117d60:
    // 0x117d60: 0xc045634  jal         func_1158D0
label_117d64:
    if (ctx->pc == 0x117D64u) {
        ctx->pc = 0x117D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D60u;
        // 0x117d64: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D68u;
        goto label_117d68;
    }
    ctx->pc = 0x117D60u;
    SET_GPR_U32(ctx, 31, 0x117D68u);
    ctx->pc = 0x117D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D60u;
    // 0x117d64: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1158D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1158D0u, 0x117D60u, 0x117D68u)) {
        return;
    }
    ctx->pc = 0x117D68u;
label_117d68:
    // 0x117d68: 0x1000000b  b           . + 4 + (0xB << 2)
label_117d6c:
    if (ctx->pc == 0x117D6Cu) {
        ctx->pc = 0x117D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D68u;
        // 0x117d6c: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D70u;
        goto label_117d70;
    }
    ctx->pc = 0x117D68u;
    {
        const bool branch_taken_0x117d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D68u;
        // 0x117d6c: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d68) {
            ctx->pc = 0x117D98u;
            goto label_117d98;
        }
    }
    ctx->pc = 0x117D70u;
label_117d70:
    // 0x117d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117d74:
    // 0x117d74: 0x262500d4  addiu       $a1, $s1, 0xD4
    ctx->pc = 0x117d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_117d78:
    // 0x117d78: 0xc0458f6  jal         func_1163D8
label_117d7c:
    if (ctx->pc == 0x117D7Cu) {
        ctx->pc = 0x117D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D78u;
        // 0x117d7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D80u;
        goto label_117d80;
    }
    ctx->pc = 0x117D78u;
    SET_GPR_U32(ctx, 31, 0x117D80u);
    ctx->pc = 0x117D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D78u;
    // 0x117d7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1163D8u, 0x117D78u, 0x117D80u)) {
        return;
    }
    ctx->pc = 0x117D80u;
label_117d80:
    // 0x117d80: 0x10000005  b           . + 4 + (0x5 << 2)
label_117d84:
    if (ctx->pc == 0x117D84u) {
        ctx->pc = 0x117D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D80u;
        // 0x117d84: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D88u;
        goto label_117d88;
    }
    ctx->pc = 0x117D80u;
    {
        const bool branch_taken_0x117d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D80u;
        // 0x117d84: 0xc62300e0  lwc1        $f3, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d80) {
            ctx->pc = 0x117D98u;
            goto label_117d98;
        }
    }
    ctx->pc = 0x117D88u;
label_117d88:
    // 0x117d88: 0x262500d4  addiu       $a1, $s1, 0xD4
    ctx->pc = 0x117d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_117d8c:
    // 0x117d8c: 0xc045a84  jal         func_116A10
label_117d90:
    if (ctx->pc == 0x117D90u) {
        ctx->pc = 0x117D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D8Cu;
        // 0x117d90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D94u;
        goto label_117d94;
    }
    ctx->pc = 0x117D8Cu;
    SET_GPR_U32(ctx, 31, 0x117D94u);
    ctx->pc = 0x117D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D8Cu;
    // 0x117d90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x116A10u, 0x117D8Cu, 0x117D94u)) {
        return;
    }
    ctx->pc = 0x117D94u;
label_117d94:
    // 0x117d94: 0xc62300e0  lwc1        $f3, 0xE0($s1)
    ctx->pc = 0x117d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117d98:
    // 0x117d98: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x117d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117d9c:
    // 0x117d9c: 0xc62200d8  lwc1        $f2, 0xD8($s1)
    ctx->pc = 0x117d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117da0:
    // 0x117da0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x117da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_117da4:
    // 0x117da4: 0xc62400e4  lwc1        $f4, 0xE4($s1)
    ctx->pc = 0x117da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117da8:
    // 0x117da8: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x117da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117dac:
    // 0x117dac: 0xc62300e8  lwc1        $f3, 0xE8($s1)
    ctx->pc = 0x117dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117db0:
    // 0x117db0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x117db0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_117db4:
    // 0x117db4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x117db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_117db8:
    // 0x117db8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x117db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_117dbc:
    // 0x117dbc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x117dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_117dc0:
    // 0x117dc0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x117dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_117dc4:
    // 0x117dc4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_117dc8:
    // 0x117dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117dcc:
    // 0x117dcc: 0xc093aa8  jal         func_24EAA0
label_117dd0:
    if (ctx->pc == 0x117DD0u) {
        ctx->pc = 0x117DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DCCu;
        // 0x117dd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117DD4u;
        goto label_117dd4;
    }
    ctx->pc = 0x117DCCu;
    SET_GPR_U32(ctx, 31, 0x117DD4u);
    ctx->pc = 0x117DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DCCu;
    // 0x117dd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x117DCCu, 0x117DD4u)) {
        return;
    }
    ctx->pc = 0x117DD4u;
label_117dd4:
    // 0x117dd4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x117dd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_117dd8:
    // 0x117dd8: 0xc622021c  lwc1        $f2, 0x21C($s1)
    ctx->pc = 0x117dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117ddc:
    // 0x117ddc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x117ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_117de0:
    // 0x117de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117de4:
    // 0x117de4: 0xc6210270  lwc1        $f1, 0x270($s1)
    ctx->pc = 0x117de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117de8:
    // 0x117de8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x117de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117dec:
    // 0x117dec: 0xe634021c  swc1        $f20, 0x21C($s1)
    ctx->pc = 0x117decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 540), bits); }
label_117df0:
    // 0x117df0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_117df4:
    if (ctx->pc == 0x117DF4u) {
        ctx->pc = 0x117DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DF0u;
        // 0x117df4: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117DF8u;
        goto label_117df8;
    }
    ctx->pc = 0x117DF0u;
    {
        const bool branch_taken_0x117df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DF0u;
        // 0x117df4: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117df0) {
            ctx->pc = 0x117E00u;
            goto label_117e00;
        }
    }
    ctx->pc = 0x117DF8u;
label_117df8:
    // 0x117df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117dfc:
    // 0x117dfc: 0xae22020c  sw          $v0, 0x20C($s1)
    ctx->pc = 0x117dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 2));
label_117e00:
    // 0x117e00: 0x8e2202b8  lw          $v0, 0x2B8($s1)
    ctx->pc = 0x117e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_117e04:
    // 0x117e04: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_117e08:
    if (ctx->pc == 0x117E08u) {
        ctx->pc = 0x117E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E04u;
        // 0x117e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E0Cu;
        goto label_117e0c;
    }
    ctx->pc = 0x117E04u;
    {
        const bool branch_taken_0x117e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E04u;
        // 0x117e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e04) {
            ctx->pc = 0x117EA0u;
            goto label_117ea0;
        }
    }
    ctx->pc = 0x117E0Cu;
label_117e0c:
    // 0x117e0c: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_117e10:
    // 0x117e10: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_117e14:
    if (ctx->pc == 0x117E14u) {
        ctx->pc = 0x117E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E10u;
        // 0x117e14: 0x262200d4  addiu       $v0, $s1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E18u;
        goto label_117e18;
    }
    ctx->pc = 0x117E10u;
    {
        const bool branch_taken_0x117e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E10u;
        // 0x117e14: 0x262200d4  addiu       $v0, $s1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e10) {
            ctx->pc = 0x117EA0u;
            goto label_117ea0;
        }
    }
    ctx->pc = 0x117E18u;
label_117e18:
    // 0x117e18: 0x6a2401fb  ldl         $a0, 0x1FB($s1)
    ctx->pc = 0x117e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_117e1c:
    // 0x117e1c: 0x6e2401f4  ldr         $a0, 0x1F4($s1)
    ctx->pc = 0x117e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_117e20:
    // 0x117e20: 0x8e2501fc  lw          $a1, 0x1FC($s1)
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
label_117e24:
    // 0x117e24: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x117e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117e28:
    // 0x117e28: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x117e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117e2c:
    // 0x117e2c: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x117e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_117e30:
    // 0x117e30: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x117e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117e34:
    // 0x117e34: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x117e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117e38:
    // 0x117e38: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x117e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117e3c:
    // 0x117e3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x117e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_117e40:
    // 0x117e40: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x117e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117e44:
    // 0x117e44: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x117e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_117e48:
    // 0x117e48: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x117e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117e4c:
    // 0x117e4c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x117e4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_117e50:
    // 0x117e50: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x117e50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_117e54:
    // 0x117e54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x117e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117e58:
    // 0x117e58: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x117e58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_117e5c:
    // 0x117e5c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x117e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_117e60:
    // 0x117e60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x117e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_117e64:
    // 0x117e64: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x117e64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_117e68:
    // 0x117e68: 0xc62002bc  lwc1        $f0, 0x2BC($s1)
    ctx->pc = 0x117e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117e6c:
    // 0x117e6c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x117e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_117e70:
    // 0x117e70: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x117e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_117e74:
    // 0x117e74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x117e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_117e78:
    // 0x117e78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x117e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117e7c:
    // 0x117e7c: 0x0  nop
    ctx->pc = 0x117e7cu;
    // NOP
label_117e80:
    // 0x117e80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_117e84:
    if (ctx->pc == 0x117E84u) {
        ctx->pc = 0x117E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E80u;
        // 0x117e84: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E88u;
        goto label_117e88;
    }
    ctx->pc = 0x117E80u;
    {
        const bool branch_taken_0x117e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E80u;
        // 0x117e84: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e80) {
            ctx->pc = 0x117EA0u;
            goto label_117ea0;
        }
    }
    ctx->pc = 0x117E88u;
label_117e88:
    // 0x117e88: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x117e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_117e8c:
    // 0x117e8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117e90:
    // 0x117e90: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x117e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_117e94:
    // 0x117e94: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x117e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_117e98:
    // 0x117e98: 0x60f809  jalr        $v1
label_117e9c:
    if (ctx->pc == 0x117E9Cu) {
        ctx->pc = 0x117E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E98u;
        // 0x117e9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117EA0u;
        goto label_117ea0;
    }
    ctx->pc = 0x117E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x117EA0u);
        ctx->pc = 0x117E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E98u;
        // 0x117e9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E98u, 0x117EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117EA0u;
label_117ea0:
    // 0x117ea0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x117ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117ea4:
    // 0x117ea4: 0x0  nop
    ctx->pc = 0x117ea4u;
    // NOP
label_117ea8:
    // 0x117ea8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_117eac:
    if (ctx->pc == 0x117EACu) {
        ctx->pc = 0x117EB0u;
        goto label_117eb0;
    }
    ctx->pc = 0x117EA8u;
    {
        const bool branch_taken_0x117ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x117ea8) {
            ctx->pc = 0x117F08u;
            goto label_117f08;
        }
    }
    ctx->pc = 0x117EB0u;
label_117eb0:
    // 0x117eb0: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x117eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_117eb4:
    // 0x117eb4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_117eb8:
    if (ctx->pc == 0x117EB8u) {
        ctx->pc = 0x117EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EB4u;
        // 0x117eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117EBCu;
        goto label_117ebc;
    }
    ctx->pc = 0x117EB4u;
    {
        const bool branch_taken_0x117eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EB4u;
        // 0x117eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117eb4) {
            ctx->pc = 0x117F08u;
            goto label_117f08;
        }
    }
    ctx->pc = 0x117EBCu;
label_117ebc:
    // 0x117ebc: 0xc093a88  jal         func_24EA20
label_117ec0:
    if (ctx->pc == 0x117EC0u) {
        ctx->pc = 0x117EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EBCu;
        // 0x117ec0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117EC4u;
        goto label_117ec4;
    }
    ctx->pc = 0x117EBCu;
    SET_GPR_U32(ctx, 31, 0x117EC4u);
    ctx->pc = 0x117EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EBCu;
    // 0x117ec0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x117EBCu, 0x117EC4u)) {
        return;
    }
    ctx->pc = 0x117EC4u;
label_117ec4:
    // 0x117ec4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x117ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117ec8:
    // 0x117ec8: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x117ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_117ecc:
    // 0x117ecc: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x117eccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_117ed0:
    // 0x117ed0: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x117ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117ed4:
    // 0x117ed4: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x117ed4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_117ed8:
    // 0x117ed8: 0xc62200e0  lwc1        $f2, 0xE0($s1)
    ctx->pc = 0x117ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117edc:
    // 0x117edc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x117edcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_117ee0:
    // 0x117ee0: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x117ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117ee4:
    // 0x117ee4: 0xc62100e8  lwc1        $f1, 0xE8($s1)
    ctx->pc = 0x117ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117ee8:
    // 0x117ee8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x117ee8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_117eec:
    // 0x117eec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x117eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_117ef0:
    // 0x117ef0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x117ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_117ef4:
    // 0x117ef4: 0xe62200e0  swc1        $f2, 0xE0($s1)
    ctx->pc = 0x117ef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_117ef8:
    // 0x117ef8: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x117ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_117efc:
    // 0x117efc: 0x10000008  b           . + 4 + (0x8 << 2)
label_117f00:
    if (ctx->pc == 0x117F00u) {
        ctx->pc = 0x117F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EFCu;
        // 0x117f00: 0xe62100e8  swc1        $f1, 0xE8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F04u;
        goto label_117f04;
    }
    ctx->pc = 0x117EFCu;
    {
        const bool branch_taken_0x117efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EFCu;
        // 0x117f00: 0xe62100e8  swc1        $f1, 0xE8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117efc) {
            ctx->pc = 0x117F20u;
            goto label_117f20;
        }
    }
    ctx->pc = 0x117F04u;
label_117f04:
    // 0x117f04: 0x0  nop
    ctx->pc = 0x117f04u;
    // NOP
label_117f08:
    // 0x117f08: 0x6a2800db  ldl         $t0, 0xDB($s1)
    ctx->pc = 0x117f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_117f0c:
    // 0x117f0c: 0x6e2800d4  ldr         $t0, 0xD4($s1)
    ctx->pc = 0x117f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_117f10:
    // 0x117f10: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x117f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_117f14:
    // 0x117f14: 0xb22800e7  sdl         $t0, 0xE7($s1)
    ctx->pc = 0x117f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117f18:
    // 0x117f18: 0xb62800e0  sdr         $t0, 0xE0($s1)
    ctx->pc = 0x117f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117f1c:
    // 0x117f1c: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x117f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_117f20:
    // 0x117f20: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x117f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_117f24:
    // 0x117f24: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_117f28:
    if (ctx->pc == 0x117F28u) {
        ctx->pc = 0x117F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F24u;
        // 0x117f28: 0xc62300ec  lwc1        $f3, 0xEC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F2Cu;
        goto label_117f2c;
    }
    ctx->pc = 0x117F24u;
    {
        const bool branch_taken_0x117f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f24) {
            ctx->pc = 0x117F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117F24u;
            // 0x117f28: 0xc62300ec  lwc1        $f3, 0xEC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x117F4Cu;
            goto label_117f4c;
        }
    }
    ctx->pc = 0x117F2Cu;
label_117f2c:
    // 0x117f2c: 0x6a2500e7  ldl         $a1, 0xE7($s1)
    ctx->pc = 0x117f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_117f30:
    // 0x117f30: 0x6e2500e0  ldr         $a1, 0xE0($s1)
    ctx->pc = 0x117f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_117f34:
    // 0x117f34: 0x8e2600e8  lw          $a2, 0xE8($s1)
    ctx->pc = 0x117f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_117f38:
    // 0x117f38: 0xb22500f3  sdl         $a1, 0xF3($s1)
    ctx->pc = 0x117f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_117f3c:
    // 0x117f3c: 0xb62500ec  sdr         $a1, 0xEC($s1)
    ctx->pc = 0x117f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_117f40:
    // 0x117f40: 0xae2600f4  sw          $a2, 0xF4($s1)
    ctx->pc = 0x117f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 6));
label_117f44:
    // 0x117f44: 0x10000036  b           . + 4 + (0x36 << 2)
label_117f48:
    if (ctx->pc == 0x117F48u) {
        ctx->pc = 0x117F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F44u;
        // 0x117f48: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F4Cu;
        goto label_117f4c;
    }
    ctx->pc = 0x117F44u;
    {
        const bool branch_taken_0x117f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F44u;
        // 0x117f48: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f44) {
            ctx->pc = 0x118020u;
            goto label_118020;
        }
    }
    ctx->pc = 0x117F4Cu;
label_117f4c:
    // 0x117f4c: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x117f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_117f50:
    // 0x117f50: 0xc62200e4  lwc1        $f2, 0xE4($s1)
    ctx->pc = 0x117f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117f54:
    // 0x117f54: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x117f54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_117f58:
    // 0x117f58: 0xc62400f0  lwc1        $f4, 0xF0($s1)
    ctx->pc = 0x117f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117f5c:
    // 0x117f5c: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x117f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117f60:
    // 0x117f60: 0xc62300f4  lwc1        $f3, 0xF4($s1)
    ctx->pc = 0x117f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117f64:
    // 0x117f64: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x117f64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_117f68:
    // 0x117f68: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x117f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_117f6c:
    // 0x117f6c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x117f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_117f70:
    // 0x117f70: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x117f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_117f74:
    // 0x117f74: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x117f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_117f78:
    // 0x117f78: 0xc093aa8  jal         func_24EAA0
label_117f7c:
    if (ctx->pc == 0x117F7Cu) {
        ctx->pc = 0x117F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F78u;
        // 0x117f7c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F80u;
        goto label_117f80;
    }
    ctx->pc = 0x117F78u;
    SET_GPR_U32(ctx, 31, 0x117F80u);
    ctx->pc = 0x117F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F78u;
    // 0x117f7c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x117F78u, 0x117F80u)) {
        return;
    }
    ctx->pc = 0x117F80u;
label_117f80:
    // 0x117f80: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x117f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_117f84:
    // 0x117f84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x117f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_117f88:
    // 0x117f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_117f8c:
    // 0x117f8c: 0x0  nop
    ctx->pc = 0x117f8cu;
    // NOP
label_117f90:
    // 0x117f90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x117f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117f94:
    // 0x117f94: 0x0  nop
    ctx->pc = 0x117f94u;
    // NOP
label_117f98:
    // 0x117f98: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_117f9c:
    if (ctx->pc == 0x117F9Cu) {
        ctx->pc = 0x117F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F98u;
        // 0x117f9c: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FA0u;
        goto label_117fa0;
    }
    ctx->pc = 0x117F98u;
    {
        const bool branch_taken_0x117f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x117f98) {
            ctx->pc = 0x117F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117F98u;
            // 0x117f9c: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117FB0u;
            goto label_117fb0;
        }
    }
    ctx->pc = 0x117FA0u;
label_117fa0:
    // 0x117fa0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x117fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_117fa4:
    // 0x117fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117fa8:
    // 0x117fa8: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x117fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
label_117fac:
    // 0x117fac: 0x0  nop
    ctx->pc = 0x117facu;
    // NOP
label_117fb0:
    // 0x117fb0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x117fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_117fb4:
    // 0x117fb4: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x117fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_117fb8:
    // 0x117fb8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_117fbc:
    if (ctx->pc == 0x117FBCu) {
        ctx->pc = 0x117FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FB8u;
        // 0x117fbc: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FC0u;
        goto label_117fc0;
    }
    ctx->pc = 0x117FB8u;
    {
        const bool branch_taken_0x117fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117fb8) {
            ctx->pc = 0x117FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117FB8u;
            // 0x117fbc: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118024u;
            goto label_118024;
        }
    }
    ctx->pc = 0x117FC0u;
label_117fc0:
    // 0x117fc0: 0xc62c0244  lwc1        $f12, 0x244($s1)
    ctx->pc = 0x117fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_117fc4:
    // 0x117fc4: 0xc62d0270  lwc1        $f13, 0x270($s1)
    ctx->pc = 0x117fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_117fc8:
    // 0x117fc8: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x117fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_117fcc:
    // 0x117fcc: 0xc09b3ec  jal         func_26CFB0
label_117fd0:
    if (ctx->pc == 0x117FD0u) {
        ctx->pc = 0x117FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FCCu;
        // 0x117fd0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FD4u;
        goto label_117fd4;
    }
    ctx->pc = 0x117FCCu;
    SET_GPR_U32(ctx, 31, 0x117FD4u);
    ctx->pc = 0x117FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FCCu;
    // 0x117fd0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x117FCCu, 0x117FD4u)) {
        return;
    }
    ctx->pc = 0x117FD4u;
label_117fd4:
    // 0x117fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_117fd8:
    // 0x117fd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_117fdc:
    // 0x117fdc: 0x0  nop
    ctx->pc = 0x117fdcu;
    // NOP
label_117fe0:
    // 0x117fe0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x117fe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_117fe4:
    // 0x117fe4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x117fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117fe8:
    // 0x117fe8: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x117fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_117fec:
    // 0x117fec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x117fecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_117ff0:
    // 0x117ff0: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x117ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117ff4:
    // 0x117ff4: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x117ff4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_117ff8:
    // 0x117ff8: 0xc62200ec  lwc1        $f2, 0xEC($s1)
    ctx->pc = 0x117ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117ffc:
    // 0x117ffc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x117ffcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_118000:
    // 0x118000: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x118000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118004:
    // 0x118004: 0xc62100f4  lwc1        $f1, 0xF4($s1)
    ctx->pc = 0x118004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118008:
    // 0x118008: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x118008u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_11800c:
    // 0x11800c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11800cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_118010:
    // 0x118010: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x118010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_118014:
    // 0x118014: 0xe62200ec  swc1        $f2, 0xEC($s1)
    ctx->pc = 0x118014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_118018:
    // 0x118018: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x118018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_11801c:
    // 0x11801c: 0xe62100f4  swc1        $f1, 0xF4($s1)
    ctx->pc = 0x11801cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_118020:
    // 0x118020: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x118020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_118024:
    // 0x118024: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_118028:
    if (ctx->pc == 0x118028u) {
        ctx->pc = 0x118028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118024u;
        // 0x118028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11802Cu;
        goto label_11802c;
    }
    ctx->pc = 0x118024u;
    {
        const bool branch_taken_0x118024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118024u;
        // 0x118028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118024) {
            ctx->pc = 0x118260u;
            goto label_118260;
        }
    }
    ctx->pc = 0x11802Cu;
label_11802c:
    // 0x11802c: 0xc04588c  jal         func_116230
label_118030:
    if (ctx->pc == 0x118030u) {
        ctx->pc = 0x118030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11802Cu;
        // 0x118030: 0x262500d4  addiu       $a1, $s1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118034u;
        goto label_118034;
    }
    ctx->pc = 0x11802Cu;
    SET_GPR_U32(ctx, 31, 0x118034u);
    ctx->pc = 0x118030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11802Cu;
    // 0x118030: 0x262500d4  addiu       $a1, $s1, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x116230u, 0x11802Cu, 0x118034u)) {
        return;
    }
    ctx->pc = 0x118034u;
label_118034:
    // 0x118034: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_118038:
    if (ctx->pc == 0x118038u) {
        ctx->pc = 0x118038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118034u;
        // 0x118038: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11803Cu;
        goto label_11803c;
    }
    ctx->pc = 0x118034u;
    {
        const bool branch_taken_0x118034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118034) {
            ctx->pc = 0x118038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118034u;
            // 0x118038: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1180CCu;
            goto label_1180cc;
        }
    }
    ctx->pc = 0x11803Cu;
label_11803c:
    // 0x11803c: 0xc62300d4  lwc1        $f3, 0xD4($s1)
    ctx->pc = 0x11803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118040:
    // 0x118040: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x118040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118044:
    // 0x118044: 0xc6220214  lwc1        $f2, 0x214($s1)
    ctx->pc = 0x118044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118048:
    // 0x118048: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x118048u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_11804c:
    // 0x11804c: 0xc62400d8  lwc1        $f4, 0xD8($s1)
    ctx->pc = 0x11804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_118050:
    // 0x118050: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x118050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118054:
    // 0x118054: 0xc62300dc  lwc1        $f3, 0xDC($s1)
    ctx->pc = 0x118054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118058:
    // 0x118058: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x118058u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_11805c:
    // 0x11805c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x11805cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_118060:
    // 0x118060: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x118060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_118064:
    // 0x118064: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x118064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_118068:
    // 0x118068: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x118068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_11806c:
    // 0x11806c: 0xc093aa8  jal         func_24EAA0
label_118070:
    if (ctx->pc == 0x118070u) {
        ctx->pc = 0x118070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11806Cu;
        // 0x118070: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118074u;
        goto label_118074;
    }
    ctx->pc = 0x11806Cu;
    SET_GPR_U32(ctx, 31, 0x118074u);
    ctx->pc = 0x118070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11806Cu;
    // 0x118070: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x11806Cu, 0x118074u)) {
        return;
    }
    ctx->pc = 0x118074u;
label_118074:
    // 0x118074: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x118074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118078:
    // 0x118078: 0xc6220290  lwc1        $f2, 0x290($s1)
    ctx->pc = 0x118078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11807c:
    // 0x11807c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11807cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_118080:
    // 0x118080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x118080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_118084:
    // 0x118084: 0x0  nop
    ctx->pc = 0x118084u;
    // NOP
label_118088:
    // 0x118088: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_11808c:
    if (ctx->pc == 0x11808Cu) {
        ctx->pc = 0x11808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118088u;
        // 0x11808c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118090u;
        goto label_118090;
    }
    ctx->pc = 0x118088u;
    {
        const bool branch_taken_0x118088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118088u;
        // 0x11808c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118088) {
            ctx->pc = 0x1180C8u;
            goto label_1180c8;
        }
    }
    ctx->pc = 0x118090u;
label_118090:
    // 0x118090: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x118090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
label_118094:
    // 0x118094: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x118094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
label_118098:
    // 0x118098: 0x6a22027b  ldl         $v0, 0x27B($s1)
    ctx->pc = 0x118098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11809c:
    // 0x11809c: 0x6e220274  ldr         $v0, 0x274($s1)
    ctx->pc = 0x11809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1180a0:
    // 0x1180a0: 0x8e23027c  lw          $v1, 0x27C($s1)
    ctx->pc = 0x1180a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_1180a4:
    // 0x1180a4: 0xb22200e7  sdl         $v0, 0xE7($s1)
    ctx->pc = 0x1180a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1180a8:
    // 0x1180a8: 0xb62200e0  sdr         $v0, 0xE0($s1)
    ctx->pc = 0x1180a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1180ac:
    // 0x1180ac: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x1180acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
label_1180b0:
    // 0x1180b0: 0x6a2600e7  ldl         $a2, 0xE7($s1)
    ctx->pc = 0x1180b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1180b4:
    // 0x1180b4: 0x6e2600e0  ldr         $a2, 0xE0($s1)
    ctx->pc = 0x1180b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1180b8:
    // 0x1180b8: 0x8e2700e8  lw          $a3, 0xE8($s1)
    ctx->pc = 0x1180b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1180bc:
    // 0x1180bc: 0xb22600f3  sdl         $a2, 0xF3($s1)
    ctx->pc = 0x1180bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1180c0:
    // 0x1180c0: 0xb62600ec  sdr         $a2, 0xEC($s1)
    ctx->pc = 0x1180c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1180c4:
    // 0x1180c4: 0xae2700f4  sw          $a3, 0xF4($s1)
    ctx->pc = 0x1180c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 7));
label_1180c8:
    // 0x1180c8: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_1180cc:
    // 0x1180cc: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_1180d0:
    if (ctx->pc == 0x1180D0u) {
        ctx->pc = 0x1180D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180CCu;
        // 0x1180d0: 0x8e2202a4  lw          $v0, 0x2A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1180D4u;
        goto label_1180d4;
    }
    ctx->pc = 0x1180CCu;
    {
        const bool branch_taken_0x1180cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1180cc) {
            ctx->pc = 0x1180D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1180CCu;
            // 0x1180d0: 0x8e2202a4  lw          $v0, 0x2A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118174u;
            goto label_118174;
        }
    }
    ctx->pc = 0x1180D4u;
label_1180d4:
    // 0x1180d4: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x1180d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_1180d8:
    // 0x1180d8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1180dc:
    if (ctx->pc == 0x1180DCu) {
        ctx->pc = 0x1180E0u;
        goto label_1180e0;
    }
    ctx->pc = 0x1180D8u;
    {
        const bool branch_taken_0x1180d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1180d8) {
            ctx->pc = 0x118140u;
            goto label_118140;
        }
    }
    ctx->pc = 0x1180E0u;
label_1180e0:
    // 0x1180e0: 0xc6230130  lwc1        $f3, 0x130($s1)
    ctx->pc = 0x1180e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1180e4:
    // 0x1180e4: 0xc6240134  lwc1        $f4, 0x134($s1)
    ctx->pc = 0x1180e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1180e8:
    // 0x1180e8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1180e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1180ec:
    // 0x1180ec: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x1180ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1180f0:
    // 0x1180f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1180f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1180f4:
    // 0x1180f4: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1180f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1180f8:
    // 0x1180f8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1180f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1180fc:
    // 0x1180fc: 0xc6230138  lwc1        $f3, 0x138($s1)
    ctx->pc = 0x1180fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118100:
    // 0x118100: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_118104:
    // 0x118104: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x118104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_118108:
    // 0x118108: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_11810c:
    // 0x11810c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11810cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_118110:
    // 0x118110: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x118110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_118114:
    // 0x118114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x118114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_118118:
    // 0x118118: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x118118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11811c:
    // 0x11811c: 0x0  nop
    ctx->pc = 0x11811cu;
    // NOP
label_118120:
    // 0x118120: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_118124:
    if (ctx->pc == 0x118124u) {
        ctx->pc = 0x118124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118120u;
        // 0x118124: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x118128u;
        goto label_118128;
    }
    ctx->pc = 0x118120u;
    {
        const bool branch_taken_0x118120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118120u;
        // 0x118124: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118120) {
            ctx->pc = 0x118140u;
            goto label_118140;
        }
    }
    ctx->pc = 0x118128u;
label_118128:
    // 0x118128: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x118128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_11812c:
    // 0x11812c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11812cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_118130:
    // 0x118130: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x118130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_118134:
    // 0x118134: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x118134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_118138:
    // 0x118138: 0x60f809  jalr        $v1
label_11813c:
    if (ctx->pc == 0x11813Cu) {
        ctx->pc = 0x11813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118138u;
        // 0x11813c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118140u;
        goto label_118140;
    }
    ctx->pc = 0x118138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x118140u);
        ctx->pc = 0x11813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118138u;
        // 0x11813c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118138u, 0x118140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x118140u;
label_118140:
    // 0x118140: 0x6a23027b  ldl         $v1, 0x27B($s1)
    ctx->pc = 0x118140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_118144:
    // 0x118144: 0x6e230274  ldr         $v1, 0x274($s1)
    ctx->pc = 0x118144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_118148:
    // 0x118148: 0x8e24027c  lw          $a0, 0x27C($s1)
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_11814c:
    // 0x11814c: 0xb22300e7  sdl         $v1, 0xE7($s1)
    ctx->pc = 0x11814cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118150:
    // 0x118150: 0xb62300e0  sdr         $v1, 0xE0($s1)
    ctx->pc = 0x118150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118154:
    // 0x118154: 0xae2400e8  sw          $a0, 0xE8($s1)
    ctx->pc = 0x118154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 4));
label_118158:
    // 0x118158: 0x6a2700e7  ldl         $a3, 0xE7($s1)
    ctx->pc = 0x118158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11815c:
    // 0x11815c: 0x6e2700e0  ldr         $a3, 0xE0($s1)
    ctx->pc = 0x11815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_118160:
    // 0x118160: 0x8e2800e8  lw          $t0, 0xE8($s1)
    ctx->pc = 0x118160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_118164:
    // 0x118164: 0xb22700f3  sdl         $a3, 0xF3($s1)
    ctx->pc = 0x118164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118168:
    // 0x118168: 0xb62700ec  sdr         $a3, 0xEC($s1)
    ctx->pc = 0x118168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11816c:
    // 0x11816c: 0xae2800f4  sw          $t0, 0xF4($s1)
    ctx->pc = 0x11816cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 8));
label_118170:
    // 0x118170: 0x8e2202a4  lw          $v0, 0x2A4($s1)
    ctx->pc = 0x118170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_118174:
    // 0x118174: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_118178:
    if (ctx->pc == 0x118178u) {
        ctx->pc = 0x118178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118174u;
        // 0x118178: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11817Cu;
        goto label_11817c;
    }
    ctx->pc = 0x118174u;
    {
        const bool branch_taken_0x118174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118174) {
            ctx->pc = 0x118178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118174u;
            // 0x118178: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118264u;
            goto label_118264;
        }
    }
    ctx->pc = 0x11817Cu;
label_11817c:
    // 0x11817c: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x11817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_118180:
    // 0x118180: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_118184:
    if (ctx->pc == 0x118184u) {
        ctx->pc = 0x118184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118180u;
        // 0x118184: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118188u;
        goto label_118188;
    }
    ctx->pc = 0x118180u;
    {
        const bool branch_taken_0x118180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118180) {
            ctx->pc = 0x118184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118180u;
            // 0x118184: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118264u;
            goto label_118264;
        }
    }
    ctx->pc = 0x118188u;
label_118188:
    // 0x118188: 0xc6230274  lwc1        $f3, 0x274($s1)
    ctx->pc = 0x118188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11818c:
    // 0x11818c: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x11818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118190:
    // 0x118190: 0xc6220214  lwc1        $f2, 0x214($s1)
    ctx->pc = 0x118190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118194:
    // 0x118194: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x118194u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_118198:
    // 0x118198: 0xc6240278  lwc1        $f4, 0x278($s1)
    ctx->pc = 0x118198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11819c:
    // 0x11819c: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x11819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1181a0:
    // 0x1181a0: 0xc623027c  lwc1        $f3, 0x27C($s1)
    ctx->pc = 0x1181a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1181a4:
    // 0x1181a4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1181a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1181a8:
    // 0x1181a8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1181a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1181ac:
    // 0x1181ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1181acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1181b0:
    // 0x1181b0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1181b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1181b4:
    // 0x1181b4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1181b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1181b8:
    // 0x1181b8: 0xc093aa8  jal         func_24EAA0
label_1181bc:
    if (ctx->pc == 0x1181BCu) {
        ctx->pc = 0x1181BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181B8u;
        // 0x1181bc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1181C0u;
        goto label_1181c0;
    }
    ctx->pc = 0x1181B8u;
    SET_GPR_U32(ctx, 31, 0x1181C0u);
    ctx->pc = 0x1181BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181B8u;
    // 0x1181bc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x1181B8u, 0x1181C0u)) {
        return;
    }
    ctx->pc = 0x1181C0u;
label_1181c0:
    // 0x1181c0: 0xc621029c  lwc1        $f1, 0x29C($s1)
    ctx->pc = 0x1181c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1181c4:
    // 0x1181c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1181c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1181c8:
    // 0x1181c8: 0x0  nop
    ctx->pc = 0x1181c8u;
    // NOP
label_1181cc:
    // 0x1181cc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_1181d0:
    if (ctx->pc == 0x1181D0u) {
        ctx->pc = 0x1181D4u;
        goto label_1181d4;
    }
    ctx->pc = 0x1181CCu;
    {
        const bool branch_taken_0x1181cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1181cc) {
            ctx->pc = 0x118230u;
            goto label_118230;
        }
    }
    ctx->pc = 0x1181D4u;
label_1181d4:
    // 0x1181d4: 0x6a24027b  ldl         $a0, 0x27B($s1)
    ctx->pc = 0x1181d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1181d8:
    // 0x1181d8: 0x6e240274  ldr         $a0, 0x274($s1)
    ctx->pc = 0x1181d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1181dc:
    // 0x1181dc: 0x8e25027c  lw          $a1, 0x27C($s1)
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_1181e0:
    // 0x1181e0: 0xb22400db  sdl         $a0, 0xDB($s1)
    ctx->pc = 0x1181e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1181e4:
    // 0x1181e4: 0xb62400d4  sdr         $a0, 0xD4($s1)
    ctx->pc = 0x1181e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1181e8:
    // 0x1181e8: 0xae2500dc  sw          $a1, 0xDC($s1)
    ctx->pc = 0x1181e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 5));
label_1181ec:
    // 0x1181ec: 0xc6250130  lwc1        $f5, 0x130($s1)
    ctx->pc = 0x1181ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1181f0:
    // 0x1181f0: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x1181f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1181f4:
    // 0x1181f4: 0xc6230134  lwc1        $f3, 0x134($s1)
    ctx->pc = 0x1181f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1181f8:
    // 0x1181f8: 0xc6240138  lwc1        $f4, 0x138($s1)
    ctx->pc = 0x1181f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1181fc:
    // 0x1181fc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1181fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_118200:
    // 0x118200: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x118200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_118204:
    // 0x118204: 0xc62200d4  lwc1        $f2, 0xD4($s1)
    ctx->pc = 0x118204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118208:
    // 0x118208: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x118208u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_11820c:
    // 0x11820c: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x11820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118210:
    // 0x118210: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x118210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118214:
    // 0x118214: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x118214u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_118218:
    // 0x118218: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x118218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_11821c:
    // 0x11821c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11821cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_118220:
    // 0x118220: 0xe62200d4  swc1        $f2, 0xD4($s1)
    ctx->pc = 0x118220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_118224:
    // 0x118224: 0xe62100d8  swc1        $f1, 0xD8($s1)
    ctx->pc = 0x118224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_118228:
    // 0x118228: 0xe62000dc  swc1        $f0, 0xDC($s1)
    ctx->pc = 0x118228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
label_11822c:
    // 0x11822c: 0x0  nop
    ctx->pc = 0x11822cu;
    // NOP
label_118230:
    // 0x118230: 0x6a28027b  ldl         $t0, 0x27B($s1)
    ctx->pc = 0x118230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_118234:
    // 0x118234: 0x6e280274  ldr         $t0, 0x274($s1)
    ctx->pc = 0x118234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_118238:
    // 0x118238: 0x8e22027c  lw          $v0, 0x27C($s1)
    ctx->pc = 0x118238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_11823c:
    // 0x11823c: 0xb22800e7  sdl         $t0, 0xE7($s1)
    ctx->pc = 0x11823cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118240:
    // 0x118240: 0xb62800e0  sdr         $t0, 0xE0($s1)
    ctx->pc = 0x118240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118244:
    // 0x118244: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x118244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_118248:
    // 0x118248: 0x6a2500e7  ldl         $a1, 0xE7($s1)
    ctx->pc = 0x118248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_11824c:
    // 0x11824c: 0x6e2500e0  ldr         $a1, 0xE0($s1)
    ctx->pc = 0x11824cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_118250:
    // 0x118250: 0x8e2600e8  lw          $a2, 0xE8($s1)
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_118254:
    // 0x118254: 0xb22500f3  sdl         $a1, 0xF3($s1)
    ctx->pc = 0x118254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118258:
    // 0x118258: 0xb62500ec  sdr         $a1, 0xEC($s1)
    ctx->pc = 0x118258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11825c:
    // 0x11825c: 0xae2600f4  sw          $a2, 0xF4($s1)
    ctx->pc = 0x11825cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 6));
label_118260:
    // 0x118260: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x118260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_118264:
    // 0x118264: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x118264u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118268:
    // 0x118268: 0x6a2200f3  ldl         $v0, 0xF3($s1)
    ctx->pc = 0x118268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11826c:
    // 0x11826c: 0x6e2200ec  ldr         $v0, 0xEC($s1)
    ctx->pc = 0x11826cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_118270:
    // 0x118270: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x118270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_118274:
    // 0x118274: 0xb0620047  sdl         $v0, 0x47($v1)
    ctx->pc = 0x118274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118278:
    // 0x118278: 0xb4620040  sdr         $v0, 0x40($v1)
    ctx->pc = 0x118278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11827c:
    // 0x11827c: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x11827cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
label_118280:
    // 0x118280: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x118280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_118284:
    // 0x118284: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x118284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_118288:
    // 0x118288: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x118288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_11828c:
    // 0x11828c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_118290:
    if (ctx->pc == 0x118290u) {
        ctx->pc = 0x118290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11828Cu;
        // 0x118290: 0x8e34025c  lw          $s4, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118294u;
        goto label_118294;
    }
    ctx->pc = 0x11828Cu;
    {
        const bool branch_taken_0x11828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11828Cu;
        // 0x118290: 0x8e34025c  lw          $s4, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11828c) {
            ctx->pc = 0x118298u;
            goto label_118298;
        }
    }
    ctx->pc = 0x118294u;
label_118294:
    // 0x118294: 0x14b02a  slt         $s6, $zero, $s4
    ctx->pc = 0x118294u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_118298:
    // 0x118298: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
label_11829c:
    if (ctx->pc == 0x11829Cu) {
        ctx->pc = 0x11829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118298u;
        // 0x11829c: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1182A0u;
        goto label_1182a0;
    }
    ctx->pc = 0x118298u;
    {
        const bool branch_taken_0x118298 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118298u;
        // 0x11829c: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118298) {
            ctx->pc = 0x1182CCu;
            goto label_1182cc;
        }
    }
    ctx->pc = 0x1182A0u;
label_1182a0:
    // 0x1182a0: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x1182a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1182a4:
    // 0x1182a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1182a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1182a8:
    // 0x1182a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1182a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1182ac:
    // 0x1182ac: 0x0  nop
    ctx->pc = 0x1182acu;
    // NOP
label_1182b0:
    // 0x1182b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1182b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1182b4:
    // 0x1182b4: 0x0  nop
    ctx->pc = 0x1182b4u;
    // NOP
label_1182b8:
    // 0x1182b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1182bc:
    if (ctx->pc == 0x1182BCu) {
        ctx->pc = 0x1182C0u;
        goto label_1182c0;
    }
    ctx->pc = 0x1182B8u;
    {
        const bool branch_taken_0x1182b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1182b8) {
            ctx->pc = 0x1182CCu;
            goto label_1182cc;
        }
    }
    ctx->pc = 0x1182C0u;
label_1182c0:
    // 0x1182c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1182c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1182c4:
    // 0x1182c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1182c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1182c8:
    // 0x1182c8: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x1182c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1182cc:
    // 0x1182cc: 0x1040014a  beqz        $v0, . + 4 + (0x14A << 2)
label_1182d0:
    if (ctx->pc == 0x1182D0u) {
        ctx->pc = 0x1182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182CCu;
        // 0x1182d0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1182D4u;
        goto label_1182d4;
    }
    ctx->pc = 0x1182CCu;
    {
        const bool branch_taken_0x1182cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182CCu;
        // 0x1182d0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182cc) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x1182D4u;
label_1182d4:
    // 0x1182d4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1182d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1182d8:
    // 0x1182d8: 0x2442ac80  addiu       $v0, $v0, -0x5380
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
label_1182dc:
    // 0x1182dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1182dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1182e0:
    // 0x1182e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1182e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1182e4:
    // 0x1182e4: 0x800008  jr          $a0
label_1182e8:
    if (ctx->pc == 0x1182E8u) {
        ctx->pc = 0x1182ECu;
        goto label_1182ec;
    }
    ctx->pc = 0x1182E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1182ECu: goto label_1182ec;
            case 0x118300u: goto label_118300;
            case 0x118368u: goto label_118368;
            case 0x1184E4u: goto label_1184e4;
            case 0x118588u: goto label_118588;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1182E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1182ECu;
label_1182ec:
    // 0x1182ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1182ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1182f0:
    // 0x1182f0: 0xc045cac  jal         func_1172B0
label_1182f4:
    if (ctx->pc == 0x1182F4u) {
        ctx->pc = 0x1182F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182F0u;
        // 0x1182f4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1182F8u;
        goto label_1182f8;
    }
    ctx->pc = 0x1182F0u;
    SET_GPR_U32(ctx, 31, 0x1182F8u);
    ctx->pc = 0x1182F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182F0u;
    // 0x1182f4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1172B0u, 0x1182F0u, 0x1182F8u)) {
        return;
    }
    ctx->pc = 0x1182F8u;
label_1182f8:
    // 0x1182f8: 0x1000013f  b           . + 4 + (0x13F << 2)
label_1182fc:
    if (ctx->pc == 0x1182FCu) {
        ctx->pc = 0x118300u;
        goto label_118300;
    }
    ctx->pc = 0x1182F8u;
    {
        const bool branch_taken_0x1182f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182f8) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x118300u;
label_118300:
    // 0x118300: 0x6a270137  ldl         $a3, 0x137($s1)
    ctx->pc = 0x118300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_118304:
    // 0x118304: 0x6e270130  ldr         $a3, 0x130($s1)
    ctx->pc = 0x118304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_118308:
    // 0x118308: 0x8e280138  lw          $t0, 0x138($s1)
    ctx->pc = 0x118308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_11830c:
    // 0x11830c: 0xb2470027  sdl         $a3, 0x27($s2)
    ctx->pc = 0x11830cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118310:
    // 0x118310: 0xb6470020  sdr         $a3, 0x20($s2)
    ctx->pc = 0x118310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118314:
    // 0x118314: 0xae480028  sw          $t0, 0x28($s2)
    ctx->pc = 0x118314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 8));
label_118318:
    // 0x118318: 0x6a440027  ldl         $a0, 0x27($s2)
    ctx->pc = 0x118318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_11831c:
    // 0x11831c: 0x6e440020  ldr         $a0, 0x20($s2)
    ctx->pc = 0x11831cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_118320:
    // 0x118320: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x118320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_118324:
    // 0x118324: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x118324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118328:
    // 0x118328: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x118328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11832c:
    // 0x11832c: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x11832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_118330:
    // 0x118330: 0x6a280127  ldl         $t0, 0x127($s1)
    ctx->pc = 0x118330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_118334:
    // 0x118334: 0x6e280120  ldr         $t0, 0x120($s1)
    ctx->pc = 0x118334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_118338:
    // 0x118338: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x118338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_11833c:
    // 0x11833c: 0xb2480017  sdl         $t0, 0x17($s2)
    ctx->pc = 0x11833cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118340:
    // 0x118340: 0xb6480010  sdr         $t0, 0x10($s2)
    ctx->pc = 0x118340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118344:
    // 0x118344: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x118344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_118348:
    // 0x118348: 0x6a250117  ldl         $a1, 0x117($s1)
    ctx->pc = 0x118348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_11834c:
    // 0x11834c: 0x6e250110  ldr         $a1, 0x110($s1)
    ctx->pc = 0x11834cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_118350:
    // 0x118350: 0x8e260118  lw          $a2, 0x118($s1)
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_118354:
    // 0x118354: 0xb2450007  sdl         $a1, 0x7($s2)
    ctx->pc = 0x118354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118358:
    // 0x118358: 0xb6450000  sdr         $a1, 0x0($s2)
    ctx->pc = 0x118358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11835c:
    // 0x11835c: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x11835cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
label_118360:
    // 0x118360: 0x10000125  b           . + 4 + (0x125 << 2)
label_118364:
    if (ctx->pc == 0x118364u) {
        ctx->pc = 0x118368u;
        goto label_118368;
    }
    ctx->pc = 0x118360u;
    {
        const bool branch_taken_0x118360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118360) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x118368u;
label_118368:
    // 0x118368: 0xc62300ec  lwc1        $f3, 0xEC($s1)
    ctx->pc = 0x118368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11836c:
    // 0x11836c: 0xc62101f4  lwc1        $f1, 0x1F4($s1)
    ctx->pc = 0x11836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118370:
    // 0x118370: 0xc62201f8  lwc1        $f2, 0x1F8($s1)
    ctx->pc = 0x118370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118374:
    // 0x118374: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x118374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_118378:
    // 0x118378: 0xc62400f0  lwc1        $f4, 0xF0($s1)
    ctx->pc = 0x118378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11837c:
    // 0x11837c: 0xc62001fc  lwc1        $f0, 0x1FC($s1)
    ctx->pc = 0x11837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118380:
    // 0x118380: 0xc62300f4  lwc1        $f3, 0xF4($s1)
    ctx->pc = 0x118380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118384:
    // 0x118384: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x118384u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_118388:
    // 0x118388: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x118388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11838c:
    // 0x11838c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11838cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_118390:
    // 0x118390: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x118390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_118394:
    // 0x118394: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x118394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_118398:
    // 0x118398: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x118398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11839c:
    // 0x11839c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1183a0:
    // 0x1183a0: 0xc093a88  jal         func_24EA20
label_1183a4:
    if (ctx->pc == 0x1183A4u) {
        ctx->pc = 0x1183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183A0u;
        // 0x1183a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1183A8u;
        goto label_1183a8;
    }
    ctx->pc = 0x1183A0u;
    SET_GPR_U32(ctx, 31, 0x1183A8u);
    ctx->pc = 0x1183A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183A0u;
    // 0x1183a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1183A0u, 0x1183A8u)) {
        return;
    }
    ctx->pc = 0x1183A8u;
label_1183a8:
    // 0x1183a8: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x1183a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1183ac:
    // 0x1183ac: 0xc6240110  lwc1        $f4, 0x110($s1)
    ctx->pc = 0x1183acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1183b0:
    // 0x1183b0: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x1183b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1183b4:
    // 0x1183b4: 0xc6230114  lwc1        $f3, 0x114($s1)
    ctx->pc = 0x1183b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1183b8:
    // 0x1183b8: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x1183b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_1183bc:
    // 0x1183bc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1183bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1183c0:
    // 0x1183c0: 0x46032a02  mul.s       $f8, $f5, $f3
    ctx->pc = 0x1183c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_1183c4:
    // 0x1183c4: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x1183c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1183c8:
    // 0x1183c8: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x1183c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1183cc:
    // 0x1183cc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1183ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1183d0:
    // 0x1183d0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1183d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1183d4:
    // 0x1183d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1183d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1183d8:
    // 0x1183d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1183d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1183dc:
    // 0x1183dc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1183dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1183e0:
    // 0x1183e0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1183e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1183e4:
    // 0x1183e4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1183e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1183e8:
    // 0x1183e8: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1183e8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_1183ec:
    // 0x1183ec: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1183ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_1183f0:
    // 0x1183f0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1183f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1183f4:
    // 0x1183f4: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x1183f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1183f8:
    // 0x1183f8: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x1183f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1183fc:
    // 0x1183fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1183fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118400:
    // 0x118400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118404:
    // 0x118404: 0xc093a88  jal         func_24EA20
label_118408:
    if (ctx->pc == 0x118408u) {
        ctx->pc = 0x118408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118404u;
        // 0x118408: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11840Cu;
        goto label_11840c;
    }
    ctx->pc = 0x118404u;
    SET_GPR_U32(ctx, 31, 0x11840Cu);
    ctx->pc = 0x118408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118404u;
    // 0x118408: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x118404u, 0x11840Cu)) {
        return;
    }
    ctx->pc = 0x11840Cu;
label_11840c:
    // 0x11840c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118410:
    // 0x118410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118414:
    // 0x118414: 0xc093b0a  jal         func_24EC28
label_118418:
    if (ctx->pc == 0x118418u) {
        ctx->pc = 0x118418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118414u;
        // 0x118418: 0x26260150  addiu       $a2, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11841Cu;
        goto label_11841c;
    }
    ctx->pc = 0x118414u;
    SET_GPR_U32(ctx, 31, 0x11841Cu);
    ctx->pc = 0x118418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118414u;
    // 0x118418: 0x26260150  addiu       $a2, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x118414u, 0x11841Cu)) {
        return;
    }
    ctx->pc = 0x11841Cu;
label_11841c:
    // 0x11841c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x11841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_118420:
    // 0x118420: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x118420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_118424:
    // 0x118424: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x118424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_118428:
    // 0x118428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x118428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11842c:
    // 0x11842c: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x11842cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118430:
    // 0x118430: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x118430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118434:
    // 0x118434: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x118434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_118438:
    // 0x118438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11843c:
    // 0x11843c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x11843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_118440:
    // 0x118440: 0xc093a88  jal         func_24EA20
label_118444:
    if (ctx->pc == 0x118444u) {
        ctx->pc = 0x118444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118440u;
        // 0x118444: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118448u;
        goto label_118448;
    }
    ctx->pc = 0x118440u;
    SET_GPR_U32(ctx, 31, 0x118448u);
    ctx->pc = 0x118444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118440u;
    // 0x118444: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x118440u, 0x118448u)) {
        return;
    }
    ctx->pc = 0x118448u;
label_118448:
    // 0x118448: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x118448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11844c:
    // 0x11844c: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x11844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_118450:
    // 0x118450: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x118450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118454:
    // 0x118454: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x118454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118458:
    // 0x118458: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x118458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_11845c:
    // 0x11845c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x11845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118460:
    // 0x118460: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x118460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_118464:
    // 0x118464: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x118464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118468:
    // 0x118468: 0xc6240264  lwc1        $f4, 0x264($s1)
    ctx->pc = 0x118468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11846c:
    // 0x11846c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11846cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_118470:
    // 0x118470: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x118470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_118474:
    // 0x118474: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x118474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_118478:
    // 0x118478: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x118478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11847c:
    // 0x11847c: 0x0  nop
    ctx->pc = 0x11847cu;
    // NOP
label_118480:
    // 0x118480: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_118484:
    if (ctx->pc == 0x118484u) {
        ctx->pc = 0x118484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118480u;
        // 0x118484: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118488u;
        goto label_118488;
    }
    ctx->pc = 0x118480u;
    {
        const bool branch_taken_0x118480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118480u;
        // 0x118484: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118480) {
            ctx->pc = 0x1184D0u;
            goto label_1184d0;
        }
    }
    ctx->pc = 0x118488u;
label_118488:
    // 0x118488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x118488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11848c:
    // 0x11848c: 0x0  nop
    ctx->pc = 0x11848cu;
    // NOP
label_118490:
    // 0x118490: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x118490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_118494:
    // 0x118494: 0x0  nop
    ctx->pc = 0x118494u;
    // NOP
label_118498:
    // 0x118498: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_11849c:
    if (ctx->pc == 0x11849Cu) {
        ctx->pc = 0x1184A0u;
        goto label_1184a0;
    }
    ctx->pc = 0x118498u;
    {
        const bool branch_taken_0x118498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x118498) {
            ctx->pc = 0x1184B0u;
            goto label_1184b0;
        }
    }
    ctx->pc = 0x1184A0u;
label_1184a0:
    // 0x1184a0: 0xc09b1a0  jal         func_26C680
label_1184a4:
    if (ctx->pc == 0x1184A4u) {
        ctx->pc = 0x1184A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A0u;
        // 0x1184a4: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1184A8u;
        goto label_1184a8;
    }
    ctx->pc = 0x1184A0u;
    SET_GPR_U32(ctx, 31, 0x1184A8u);
    ctx->pc = 0x1184A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184A0u;
    // 0x1184a4: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1184A0u, 0x1184A8u)) {
        return;
    }
    ctx->pc = 0x1184A8u;
label_1184a8:
    // 0x1184a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1184ac:
    if (ctx->pc == 0x1184ACu) {
        ctx->pc = 0x1184ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A8u;
        // 0x1184ac: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1184B0u;
        goto label_1184b0;
    }
    ctx->pc = 0x1184A8u;
    {
        const bool branch_taken_0x1184a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A8u;
        // 0x1184ac: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184a8) {
            ctx->pc = 0x1184C0u;
            goto label_1184c0;
        }
    }
    ctx->pc = 0x1184B0u;
label_1184b0:
    // 0x1184b0: 0xc09b1a0  jal         func_26C680
label_1184b4:
    if (ctx->pc == 0x1184B4u) {
        ctx->pc = 0x1184B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184B0u;
        // 0x1184b4: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1184B8u;
        goto label_1184b8;
    }
    ctx->pc = 0x1184B0u;
    SET_GPR_U32(ctx, 31, 0x1184B8u);
    ctx->pc = 0x1184B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184B0u;
    // 0x1184b4: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1184B0u, 0x1184B8u)) {
        return;
    }
    ctx->pc = 0x1184B8u;
label_1184b8:
    // 0x1184b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1184b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1184bc:
    // 0x1184bc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1184bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1184c0:
    // 0x1184c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1184c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1184c4:
    // 0x1184c4: 0xc093a88  jal         func_24EA20
label_1184c8:
    if (ctx->pc == 0x1184C8u) {
        ctx->pc = 0x1184C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184C4u;
        // 0x1184c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1184CCu;
        goto label_1184cc;
    }
    ctx->pc = 0x1184C4u;
    SET_GPR_U32(ctx, 31, 0x1184CCu);
    ctx->pc = 0x1184C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184C4u;
    // 0x1184c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1184C4u, 0x1184CCu)) {
        return;
    }
    ctx->pc = 0x1184CCu;
label_1184cc:
    // 0x1184cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1184ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1184d0:
    // 0x1184d0: 0x26260110  addiu       $a2, $s1, 0x110
    ctx->pc = 0x1184d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1184d4:
    // 0x1184d4: 0xc093b0a  jal         func_24EC28
label_1184d8:
    if (ctx->pc == 0x1184D8u) {
        ctx->pc = 0x1184D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184D4u;
        // 0x1184d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1184DCu;
        goto label_1184dc;
    }
    ctx->pc = 0x1184D4u;
    SET_GPR_U32(ctx, 31, 0x1184DCu);
    ctx->pc = 0x1184D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184D4u;
    // 0x1184d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1184D4u, 0x1184DCu)) {
        return;
    }
    ctx->pc = 0x1184DCu;
label_1184dc:
    // 0x1184dc: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_1184e0:
    if (ctx->pc == 0x1184E0u) {
        ctx->pc = 0x1184E4u;
        goto label_1184e4;
    }
    ctx->pc = 0x1184DCu;
    {
        const bool branch_taken_0x1184dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1184dc) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x1184E4u;
label_1184e4:
    // 0x1184e4: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x1184e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1184e8:
    // 0x1184e8: 0xc62201f4  lwc1        $f2, 0x1F4($s1)
    ctx->pc = 0x1184e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1184ec:
    // 0x1184ec: 0xc62401f8  lwc1        $f4, 0x1F8($s1)
    ctx->pc = 0x1184ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1184f0:
    // 0x1184f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1184f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1184f4:
    // 0x1184f4: 0xc62300f0  lwc1        $f3, 0xF0($s1)
    ctx->pc = 0x1184f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1184f8:
    // 0x1184f8: 0xc62101fc  lwc1        $f1, 0x1FC($s1)
    ctx->pc = 0x1184f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1184fc:
    // 0x1184fc: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x1184fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118500:
    // 0x118500: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x118500u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_118504:
    // 0x118504: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x118504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_118508:
    // 0x118508: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x118508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11850c:
    // 0x11850c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x11850cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_118510:
    // 0x118510: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x118510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_118514:
    // 0x118514: 0xc62600f8  lwc1        $f6, 0xF8($s1)
    ctx->pc = 0x118514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_118518:
    // 0x118518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x118518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11851c:
    // 0x11851c: 0xc62500fc  lwc1        $f5, 0xFC($s1)
    ctx->pc = 0x11851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_118520:
    // 0x118520: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x118520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_118524:
    // 0x118524: 0xc6230100  lwc1        $f3, 0x100($s1)
    ctx->pc = 0x118524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118528:
    // 0x118528: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x118528u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_11852c:
    // 0x11852c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x11852cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_118530:
    // 0x118530: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x118530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_118534:
    // 0x118534: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x118534u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_118538:
    // 0x118538: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x118538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11853c:
    // 0x11853c: 0x0  nop
    ctx->pc = 0x11853cu;
    // NOP
label_118540:
    // 0x118540: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_118544:
    if (ctx->pc == 0x118544u) {
        ctx->pc = 0x118548u;
        goto label_118548;
    }
    ctx->pc = 0x118540u;
    {
        const bool branch_taken_0x118540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x118540) {
            ctx->pc = 0x118568u;
            goto label_118568;
        }
    }
    ctx->pc = 0x118548u;
label_118548:
    // 0x118548: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x118548u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
label_11854c:
    // 0x11854c: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x11854cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
label_118550:
    // 0x118550: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x118550u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
label_118554:
    // 0x118554: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x118554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_118558:
    // 0x118558: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x118558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_11855c:
    // 0x11855c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_118560:
    if (ctx->pc == 0x118560u) {
        ctx->pc = 0x118560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11855Cu;
        // 0x118560: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x118564u;
        goto label_118564;
    }
    ctx->pc = 0x11855Cu;
    {
        const bool branch_taken_0x11855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11855Cu;
        // 0x118560: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11855c) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x118564u;
label_118564:
    // 0x118564: 0x0  nop
    ctx->pc = 0x118564u;
    // NOP
label_118568:
    // 0x118568: 0x6a2700ff  ldl         $a3, 0xFF($s1)
    ctx->pc = 0x118568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11856c:
    // 0x11856c: 0x6e2700f8  ldr         $a3, 0xF8($s1)
    ctx->pc = 0x11856cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_118570:
    // 0x118570: 0x8e280100  lw          $t0, 0x100($s1)
    ctx->pc = 0x118570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_118574:
    // 0x118574: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x118574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118578:
    // 0x118578: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x118578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11857c:
    // 0x11857c: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x11857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
label_118580:
    // 0x118580: 0x1000009d  b           . + 4 + (0x9D << 2)
label_118584:
    if (ctx->pc == 0x118584u) {
        ctx->pc = 0x118588u;
        goto label_118588;
    }
    ctx->pc = 0x118580u;
    {
        const bool branch_taken_0x118580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118580) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x118588u;
label_118588:
    // 0x118588: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x118588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11858c:
    // 0x11858c: 0xc62201f4  lwc1        $f2, 0x1F4($s1)
    ctx->pc = 0x11858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118590:
    // 0x118590: 0xc62401f8  lwc1        $f4, 0x1F8($s1)
    ctx->pc = 0x118590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_118594:
    // 0x118594: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x118594u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_118598:
    // 0x118598: 0xc62300f0  lwc1        $f3, 0xF0($s1)
    ctx->pc = 0x118598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11859c:
    // 0x11859c: 0xc62101fc  lwc1        $f1, 0x1FC($s1)
    ctx->pc = 0x11859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1185a0:
    // 0x1185a0: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x1185a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1185a4:
    // 0x1185a4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1185a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1185a8:
    // 0x1185a8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1185a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1185ac:
    // 0x1185ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1185acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1185b0:
    // 0x1185b0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x1185b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1185b4:
    // 0x1185b4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1185b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1185b8:
    // 0x1185b8: 0xc62600f8  lwc1        $f6, 0xF8($s1)
    ctx->pc = 0x1185b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1185bc:
    // 0x1185bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1185bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1185c0:
    // 0x1185c0: 0xc62500fc  lwc1        $f5, 0xFC($s1)
    ctx->pc = 0x1185c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1185c4:
    // 0x1185c4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1185c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_1185c8:
    // 0x1185c8: 0xc6230100  lwc1        $f3, 0x100($s1)
    ctx->pc = 0x1185c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1185cc:
    // 0x1185cc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1185ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_1185d0:
    // 0x1185d0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1185d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1185d4:
    // 0x1185d4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1185d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1185d8:
    // 0x1185d8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1185d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1185dc:
    // 0x1185dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1185dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1185e0:
    // 0x1185e0: 0x0  nop
    ctx->pc = 0x1185e0u;
    // NOP
label_1185e4:
    // 0x1185e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1185e8:
    if (ctx->pc == 0x1185E8u) {
        ctx->pc = 0x1185ECu;
        goto label_1185ec;
    }
    ctx->pc = 0x1185E4u;
    {
        const bool branch_taken_0x1185e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1185e4) {
            ctx->pc = 0x118608u;
            goto label_118608;
        }
    }
    ctx->pc = 0x1185ECu;
label_1185ec:
    // 0x1185ec: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x1185ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
label_1185f0:
    // 0x1185f0: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x1185f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
label_1185f4:
    // 0x1185f4: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x1185f4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
label_1185f8:
    // 0x1185f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1185f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1185fc:
    // 0x1185fc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1185fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_118600:
    // 0x118600: 0x10000007  b           . + 4 + (0x7 << 2)
label_118604:
    if (ctx->pc == 0x118604u) {
        ctx->pc = 0x118604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118600u;
        // 0x118604: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x118608u;
        goto label_118608;
    }
    ctx->pc = 0x118600u;
    {
        const bool branch_taken_0x118600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118600u;
        // 0x118604: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118600) {
            ctx->pc = 0x118620u;
            goto label_118620;
        }
    }
    ctx->pc = 0x118608u;
label_118608:
    // 0x118608: 0x6a2400ff  ldl         $a0, 0xFF($s1)
    ctx->pc = 0x118608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_11860c:
    // 0x11860c: 0x6e2400f8  ldr         $a0, 0xF8($s1)
    ctx->pc = 0x11860cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_118610:
    // 0x118610: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x118610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_118614:
    // 0x118614: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x118614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118618:
    // 0x118618: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x118618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11861c:
    // 0x11861c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x11861cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_118620:
    // 0x118620: 0xc6220128  lwc1        $f2, 0x128($s1)
    ctx->pc = 0x118620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118624:
    // 0x118624: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x118624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118628:
    // 0x118628: 0xc6240124  lwc1        $f4, 0x124($s1)
    ctx->pc = 0x118628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11862c:
    // 0x11862c: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x11862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_118630:
    // 0x118630: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x118630u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_118634:
    // 0x118634: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x118634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_118638:
    // 0x118638: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x118638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11863c:
    // 0x11863c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11863cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_118640:
    // 0x118640: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x118640u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_118644:
    // 0x118644: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x118644u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_118648:
    // 0x118648: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x118648u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_11864c:
    // 0x11864c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x11864cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_118650:
    // 0x118650: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x118650u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_118654:
    // 0x118654: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x118654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_118658:
    // 0x118658: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x118658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11865c:
    // 0x11865c: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x11865cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_118660:
    // 0x118660: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x118660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_118664:
    // 0x118664: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x118664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_118668:
    // 0x118668: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x118668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11866c:
    // 0x11866c: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x11866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_118670:
    // 0x118670: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x118670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_118674:
    // 0x118674: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x118674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118678:
    // 0x118678: 0x460231c2  mul.s       $f7, $f6, $f2
    ctx->pc = 0x118678u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_11867c:
    // 0x11867c: 0x46011a02  mul.s       $f8, $f3, $f1
    ctx->pc = 0x11867cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_118680:
    // 0x118680: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x118680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_118684:
    // 0x118684: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x118684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_118688:
    // 0x118688: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x118688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11868c:
    // 0x11868c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11868cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_118690:
    // 0x118690: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x118690u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_118694:
    // 0x118694: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x118694u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_118698:
    // 0x118698: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x118698u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_11869c:
    // 0x11869c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x11869cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_1186a0:
    // 0x1186a0: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x1186a0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_1186a4:
    // 0x1186a4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1186a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1186a8:
    // 0x1186a8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x1186a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1186ac:
    // 0x1186ac: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x1186acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1186b0:
    // 0x1186b0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1186b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1186b4:
    // 0x1186b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1186b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1186b8:
    // 0x1186b8: 0xc093a88  jal         func_24EA20
label_1186bc:
    if (ctx->pc == 0x1186BCu) {
        ctx->pc = 0x1186BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186B8u;
        // 0x1186bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1186C0u;
        goto label_1186c0;
    }
    ctx->pc = 0x1186B8u;
    SET_GPR_U32(ctx, 31, 0x1186C0u);
    ctx->pc = 0x1186BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186B8u;
    // 0x1186bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1186B8u, 0x1186C0u)) {
        return;
    }
    ctx->pc = 0x1186C0u;
label_1186c0:
    // 0x1186c0: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x1186c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1186c4:
    // 0x1186c4: 0xc7a60054  lwc1        $f6, 0x54($sp)
    ctx->pc = 0x1186c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1186c8:
    // 0x1186c8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1186c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1186cc:
    // 0x1186cc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1186ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1186d0:
    // 0x1186d0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1186d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1186d4:
    // 0x1186d4: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x1186d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1186d8:
    // 0x1186d8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1186d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_1186dc:
    // 0x1186dc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1186dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1186e0:
    // 0x1186e0: 0xc6230264  lwc1        $f3, 0x264($s1)
    ctx->pc = 0x1186e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1186e4:
    // 0x1186e4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x1186e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_1186e8:
    // 0x1186e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1186e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1186ec:
    // 0x1186ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1186ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1186f0:
    // 0x1186f0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1186f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1186f4:
    // 0x1186f4: 0x0  nop
    ctx->pc = 0x1186f4u;
    // NOP
label_1186f8:
    // 0x1186f8: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_1186fc:
    if (ctx->pc == 0x1186FCu) {
        ctx->pc = 0x1186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186F8u;
        // 0x1186fc: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118700u;
        goto label_118700;
    }
    ctx->pc = 0x1186F8u;
    {
        const bool branch_taken_0x1186f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186F8u;
        // 0x1186fc: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186f8) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x118700u;
label_118700:
    // 0x118700: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x118700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118704:
    // 0x118704: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x118704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118708:
    // 0x118708: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x118708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11870c:
    // 0x11870c: 0x46012142  mul.s       $f5, $f4, $f1
    ctx->pc = 0x11870cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_118710:
    // 0x118710: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x118710u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_118714:
    // 0x118714: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x118714u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_118718:
    // 0x118718: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x118718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_11871c:
    // 0x11871c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11871cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_118720:
    // 0x118720: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x118720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_118724:
    // 0x118724: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x118724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_118728:
    // 0x118728: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x118728u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_11872c:
    // 0x11872c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11872cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_118730:
    // 0x118730: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x118730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_118734:
    // 0x118734: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x118734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_118738:
    // 0x118738: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x118738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11873c:
    // 0x11873c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_118740:
    // 0x118740: 0xc093a88  jal         func_24EA20
label_118744:
    if (ctx->pc == 0x118744u) {
        ctx->pc = 0x118744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118740u;
        // 0x118744: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118748u;
        goto label_118748;
    }
    ctx->pc = 0x118740u;
    SET_GPR_U32(ctx, 31, 0x118748u);
    ctx->pc = 0x118744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118740u;
    // 0x118744: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x118740u, 0x118748u)) {
        return;
    }
    ctx->pc = 0x118748u;
label_118748:
    // 0x118748: 0xc09b1a0  jal         func_26C680
label_11874c:
    if (ctx->pc == 0x11874Cu) {
        ctx->pc = 0x11874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118748u;
        // 0x11874c: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x118750u;
        goto label_118750;
    }
    ctx->pc = 0x118748u;
    SET_GPR_U32(ctx, 31, 0x118750u);
    ctx->pc = 0x11874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118748u;
    // 0x11874c: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x118748u, 0x118750u)) {
        return;
    }
    ctx->pc = 0x118750u;
label_118750:
    // 0x118750: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x118750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118754:
    // 0x118754: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x118754u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_118758:
    // 0x118758: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x118758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11875c:
    // 0x11875c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x11875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118760:
    // 0x118760: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x118760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118764:
    // 0x118764: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x118764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_118768:
    // 0x118768: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x118768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11876c:
    // 0x11876c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11876cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_118770:
    // 0x118770: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x118770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118774:
    // 0x118774: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x118774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_118778:
    // 0x118778: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x118778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_11877c:
    // 0x11877c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11877cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_118780:
    // 0x118780: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x118780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_118784:
    // 0x118784: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x118784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_118788:
    // 0x118788: 0x0  nop
    ctx->pc = 0x118788u;
    // NOP
label_11878c:
    // 0x11878c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_118790:
    if (ctx->pc == 0x118790u) {
        ctx->pc = 0x118790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11878Cu;
        // 0x118790: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x118794u;
        goto label_118794;
    }
    ctx->pc = 0x11878Cu;
    {
        const bool branch_taken_0x11878c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11878c) {
            ctx->pc = 0x118790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11878Cu;
            // 0x118790: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
            ctx->f[6] = FPU_NEG_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x118798u;
            goto label_118798;
        }
    }
    ctx->pc = 0x118794u;
label_118794:
    // 0x118794: 0x0  nop
    ctx->pc = 0x118794u;
    // NOP
label_118798:
    // 0x118798: 0x6ba80057  ldl         $t0, 0x57($sp)
    ctx->pc = 0x118798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_11879c:
    // 0x11879c: 0x6fa80050  ldr         $t0, 0x50($sp)
    ctx->pc = 0x11879cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1187a0:
    // 0x1187a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1187a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1187a4:
    // 0x1187a4: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x1187a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1187a8:
    // 0x1187a8: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x1187a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1187ac:
    // 0x1187ac: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1187acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1187b0:
    // 0x1187b0: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x1187b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1187b4:
    // 0x1187b4: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x1187b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1187b8:
    // 0x1187b8: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x1187b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_1187bc:
    // 0x1187bc: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1187bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1187c0:
    // 0x1187c0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1187c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_1187c4:
    // 0x1187c4: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1187c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1187c8:
    // 0x1187c8: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1187c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_1187cc:
    // 0x1187cc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1187ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1187d0:
    // 0x1187d0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1187d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1187d4:
    // 0x1187d4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1187d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1187d8:
    // 0x1187d8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1187d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1187dc:
    // 0x1187dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1187dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1187e0:
    // 0x1187e0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1187e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1187e4:
    // 0x1187e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1187e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1187e8:
    // 0x1187e8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1187e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1187ec:
    // 0x1187ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1187ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1187f0:
    // 0x1187f0: 0xc093a88  jal         func_24EA20
label_1187f4:
    if (ctx->pc == 0x1187F4u) {
        ctx->pc = 0x1187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187F0u;
        // 0x1187f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1187F8u;
        goto label_1187f8;
    }
    ctx->pc = 0x1187F0u;
    SET_GPR_U32(ctx, 31, 0x1187F8u);
    ctx->pc = 0x1187F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187F0u;
    // 0x1187f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1187F0u, 0x1187F8u)) {
        return;
    }
    ctx->pc = 0x1187F8u;
label_1187f8:
    // 0x1187f8: 0x12c0001f  beqz        $s6, . + 4 + (0x1F << 2)
label_1187fc:
    if (ctx->pc == 0x1187FCu) {
        ctx->pc = 0x1187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187F8u;
        // 0x1187fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118800u;
        goto label_118800;
    }
    ctx->pc = 0x1187F8u;
    {
        const bool branch_taken_0x1187f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187F8u;
        // 0x1187fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187f8) {
            ctx->pc = 0x118878u;
            goto label_118878;
        }
    }
    ctx->pc = 0x118800u;
label_118800:
    // 0x118800: 0xc045cac  jal         func_1172B0
label_118804:
    if (ctx->pc == 0x118804u) {
        ctx->pc = 0x118804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118800u;
        // 0x118804: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118808u;
        goto label_118808;
    }
    ctx->pc = 0x118800u;
    SET_GPR_U32(ctx, 31, 0x118808u);
    ctx->pc = 0x118804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118800u;
    // 0x118804: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1172B0u, 0x118800u, 0x118808u)) {
        return;
    }
    ctx->pc = 0x118808u;
label_118808:
    // 0x118808: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x118808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11880c:
    // 0x11880c: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x11880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_118810:
    // 0x118810: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x118810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118814:
    // 0x118814: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x118814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_118818:
    // 0x118818: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x118818u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_11881c:
    // 0x11881c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x11881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118820:
    // 0x118820: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x118820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_118824:
    // 0x118824: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x118824u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_118828:
    // 0x118828: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x118828u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11882c:
    // 0x11882c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11882cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_118830:
    // 0x118830: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x118830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_118834:
    // 0x118834: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x118834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_118838:
    // 0x118838: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x118838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11883c:
    // 0x11883c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11883cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_118840:
    // 0x118840: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x118840u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_118844:
    // 0x118844: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x118844u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_118848:
    // 0x118848: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x118848u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_11884c:
    // 0x11884c: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x11884cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_118850:
    // 0x118850: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x118850u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_118854:
    // 0x118854: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x118854u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_118858:
    // 0x118858: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x118858u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11885c:
    // 0x11885c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x11885cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_118860:
    // 0x118860: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x118860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_118864:
    // 0x118864: 0xc093a88  jal         func_24EA20
label_118868:
    if (ctx->pc == 0x118868u) {
        ctx->pc = 0x118868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118864u;
        // 0x118868: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11886Cu;
        goto label_11886c;
    }
    ctx->pc = 0x118864u;
    SET_GPR_U32(ctx, 31, 0x11886Cu);
    ctx->pc = 0x118868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118864u;
    // 0x118868: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x118864u, 0x11886Cu)) {
        return;
    }
    ctx->pc = 0x11886Cu;
label_11886c:
    // 0x11886c: 0x10000005  b           . + 4 + (0x5 << 2)
label_118870:
    if (ctx->pc == 0x118870u) {
        ctx->pc = 0x118874u;
        goto label_118874;
    }
    ctx->pc = 0x11886Cu;
    {
        const bool branch_taken_0x11886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11886c) {
            ctx->pc = 0x118884u;
            goto label_118884;
        }
    }
    ctx->pc = 0x118874u;
label_118874:
    // 0x118874: 0x0  nop
    ctx->pc = 0x118874u;
    // NOP
label_118878:
    // 0x118878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11887c:
    // 0x11887c: 0x12820034  beq         $s4, $v0, . + 4 + (0x34 << 2)
label_118880:
    if (ctx->pc == 0x118880u) {
        ctx->pc = 0x118884u;
        goto label_118884;
    }
    ctx->pc = 0x11887Cu;
    {
        const bool branch_taken_0x11887c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x11887c) {
            ctx->pc = 0x118950u;
            goto label_118950;
        }
    }
    ctx->pc = 0x118884u;
label_118884:
    // 0x118884: 0x6a250127  ldl         $a1, 0x127($s1)
    ctx->pc = 0x118884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_118888:
    // 0x118888: 0x6e250120  ldr         $a1, 0x120($s1)
    ctx->pc = 0x118888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_11888c:
    // 0x11888c: 0x8e260128  lw          $a2, 0x128($s1)
    ctx->pc = 0x11888cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_118890:
    // 0x118890: 0xb2450017  sdl         $a1, 0x17($s2)
    ctx->pc = 0x118890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118894:
    // 0x118894: 0xb6450010  sdr         $a1, 0x10($s2)
    ctx->pc = 0x118894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118898:
    // 0x118898: 0xae460018  sw          $a2, 0x18($s2)
    ctx->pc = 0x118898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
label_11889c:
    // 0x11889c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x11889cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1188a0:
    // 0x1188a0: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1188a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1188a4:
    // 0x1188a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1188a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1188a8:
    // 0x1188a8: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x1188a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1188ac:
    // 0x1188ac: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x1188acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1188b0:
    // 0x1188b0: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1188b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_1188b4:
    // 0x1188b4: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x1188b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1188b8:
    // 0x1188b8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x1188b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1188bc:
    // 0x1188bc: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x1188bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1188c0:
    // 0x1188c0: 0xc6470028  lwc1        $f7, 0x28($s2)
    ctx->pc = 0x1188c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1188c4:
    // 0x1188c4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1188c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1188c8:
    // 0x1188c8: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1188c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1188cc:
    // 0x1188cc: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x1188ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1188d0:
    // 0x1188d0: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x1188d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_1188d4:
    // 0x1188d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1188d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1188d8:
    // 0x1188d8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1188d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1188dc:
    // 0x1188dc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1188dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1188e0:
    // 0x1188e0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1188e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1188e4:
    // 0x1188e4: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1188e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_1188e8:
    // 0x1188e8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1188e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1188ec:
    // 0x1188ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1188ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1188f0:
    // 0x1188f0: 0xe6450000  swc1        $f5, 0x0($s2)
    ctx->pc = 0x1188f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1188f4:
    // 0x1188f4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1188f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1188f8:
    // 0x1188f8: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1188f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1188fc:
    // 0x1188fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1188fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_118900:
    // 0x118900: 0xc093a88  jal         func_24EA20
label_118904:
    if (ctx->pc == 0x118904u) {
        ctx->pc = 0x118904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118900u;
        // 0x118904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118908u;
        goto label_118908;
    }
    ctx->pc = 0x118900u;
    SET_GPR_U32(ctx, 31, 0x118908u);
    ctx->pc = 0x118904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118900u;
    // 0x118904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x118900u, 0x118908u)) {
        return;
    }
    ctx->pc = 0x118908u;
label_118908:
    // 0x118908: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x118908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11890c:
    // 0x11890c: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x11890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_118910:
    // 0x118910: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x118910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_118914:
    // 0x118914: 0xc6470008  lwc1        $f7, 0x8($s2)
    ctx->pc = 0x118914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_118918:
    // 0x118918: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x118918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11891c:
    // 0x11891c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x11891cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_118920:
    // 0x118920: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x118920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118924:
    // 0x118924: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x118924u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_118928:
    // 0x118928: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x118928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11892c:
    // 0x11892c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x11892cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_118930:
    // 0x118930: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x118930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_118934:
    // 0x118934: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x118934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_118938:
    // 0x118938: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x118938u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_11893c:
    // 0x11893c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11893cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_118940:
    // 0x118940: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x118940u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_118944:
    // 0x118944: 0xe6450010  swc1        $f5, 0x10($s2)
    ctx->pc = 0x118944u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_118948:
    // 0x118948: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x118948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_11894c:
    // 0x11894c: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x11894cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_118950:
    // 0x118950: 0xc092d94  jal         func_24B650
label_118954:
    if (ctx->pc == 0x118954u) {
        ctx->pc = 0x118954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118950u;
        // 0x118954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118958u;
        goto label_118958;
    }
    ctx->pc = 0x118950u;
    SET_GPR_U32(ctx, 31, 0x118958u);
    ctx->pc = 0x118954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118950u;
    // 0x118954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x118950u, 0x118958u)) {
        return;
    }
    ctx->pc = 0x118958u;
label_118958:
    // 0x118958: 0xc08992e  jal         func_2264B8
label_11895c:
    if (ctx->pc == 0x11895Cu) {
        ctx->pc = 0x11895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118958u;
        // 0x11895c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118960u;
        goto label_118960;
    }
    ctx->pc = 0x118958u;
    SET_GPR_U32(ctx, 31, 0x118960u);
    ctx->pc = 0x11895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118958u;
    // 0x11895c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x118958u, 0x118960u)) {
        return;
    }
    ctx->pc = 0x118960u;
label_118960:
    // 0x118960: 0xc0ad1d0  jal         func_2B4740
label_118964:
    if (ctx->pc == 0x118964u) {
        ctx->pc = 0x118964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118960u;
        // 0x118964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118968u;
        goto label_118968;
    }
    ctx->pc = 0x118960u;
    SET_GPR_U32(ctx, 31, 0x118968u);
    ctx->pc = 0x118964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118960u;
    // 0x118964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4740u, 0x118960u, 0x118968u)) {
        return;
    }
    ctx->pc = 0x118968u;
label_118968:
    // 0x118968: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_11896c:
    if (ctx->pc == 0x11896Cu) {
        ctx->pc = 0x118970u;
        goto label_118970;
    }
    ctx->pc = 0x118968u;
    {
        const bool branch_taken_0x118968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118968) {
            ctx->pc = 0x1189F0u;
            goto label_1189f0;
        }
    }
    ctx->pc = 0x118970u;
label_118970:
    // 0x118970: 0x6a260197  ldl         $a2, 0x197($s1)
    ctx->pc = 0x118970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_118974:
    // 0x118974: 0x6e260190  ldr         $a2, 0x190($s1)
    ctx->pc = 0x118974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_118978:
    // 0x118978: 0x6a27019f  ldl         $a3, 0x19F($s1)
    ctx->pc = 0x118978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11897c:
    // 0x11897c: 0x6e270198  ldr         $a3, 0x198($s1)
    ctx->pc = 0x11897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_118980:
    // 0x118980: 0x6a2801a7  ldl         $t0, 0x1A7($s1)
    ctx->pc = 0x118980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_118984:
    // 0x118984: 0x6e2801a0  ldr         $t0, 0x1A0($s1)
    ctx->pc = 0x118984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_118988:
    // 0x118988: 0x6a2201af  ldl         $v0, 0x1AF($s1)
    ctx->pc = 0x118988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11898c:
    // 0x11898c: 0x6e2201a8  ldr         $v0, 0x1A8($s1)
    ctx->pc = 0x11898cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_118990:
    // 0x118990: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x118990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118994:
    // 0x118994: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x118994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118998:
    // 0x118998: 0xb247000f  sdl         $a3, 0xF($s2)
    ctx->pc = 0x118998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11899c:
    // 0x11899c: 0xb6470008  sdr         $a3, 0x8($s2)
    ctx->pc = 0x11899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189a0:
    // 0x1189a0: 0xb2480017  sdl         $t0, 0x17($s2)
    ctx->pc = 0x1189a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189a4:
    // 0x1189a4: 0xb6480010  sdr         $t0, 0x10($s2)
    ctx->pc = 0x1189a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189a8:
    // 0x1189a8: 0xb242001f  sdl         $v0, 0x1F($s2)
    ctx->pc = 0x1189a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189ac:
    // 0x1189ac: 0xb6420018  sdr         $v0, 0x18($s2)
    ctx->pc = 0x1189acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189b0:
    // 0x1189b0: 0x6a2601b7  ldl         $a2, 0x1B7($s1)
    ctx->pc = 0x1189b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1189b4:
    // 0x1189b4: 0x6e2601b0  ldr         $a2, 0x1B0($s1)
    ctx->pc = 0x1189b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1189b8:
    // 0x1189b8: 0x6a2701bf  ldl         $a3, 0x1BF($s1)
    ctx->pc = 0x1189b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1189bc:
    // 0x1189bc: 0x6e2701b8  ldr         $a3, 0x1B8($s1)
    ctx->pc = 0x1189bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1189c0:
    // 0x1189c0: 0x6a2801c7  ldl         $t0, 0x1C7($s1)
    ctx->pc = 0x1189c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1189c4:
    // 0x1189c4: 0x6e2801c0  ldr         $t0, 0x1C0($s1)
    ctx->pc = 0x1189c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1189c8:
    // 0x1189c8: 0x6a2201cf  ldl         $v0, 0x1CF($s1)
    ctx->pc = 0x1189c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1189cc:
    // 0x1189cc: 0x6e2201c8  ldr         $v0, 0x1C8($s1)
    ctx->pc = 0x1189ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1189d0:
    // 0x1189d0: 0xb2460027  sdl         $a2, 0x27($s2)
    ctx->pc = 0x1189d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189d4:
    // 0x1189d4: 0xb6460020  sdr         $a2, 0x20($s2)
    ctx->pc = 0x1189d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189d8:
    // 0x1189d8: 0xb247002f  sdl         $a3, 0x2F($s2)
    ctx->pc = 0x1189d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189dc:
    // 0x1189dc: 0xb6470028  sdr         $a3, 0x28($s2)
    ctx->pc = 0x1189dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189e0:
    // 0x1189e0: 0xb2480037  sdl         $t0, 0x37($s2)
    ctx->pc = 0x1189e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189e4:
    // 0x1189e4: 0xb6480030  sdr         $t0, 0x30($s2)
    ctx->pc = 0x1189e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189e8:
    // 0x1189e8: 0xb242003f  sdl         $v0, 0x3F($s2)
    ctx->pc = 0x1189e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189ec:
    // 0x1189ec: 0xb6420038  sdr         $v0, 0x38($s2)
    ctx->pc = 0x1189ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1189f0:
    // 0x1189f0: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x1189f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1189f4:
    // 0x1189f4: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x1189f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1189f8:
    // 0x1189f8: 0x6a44000f  ldl         $a0, 0xF($s2)
    ctx->pc = 0x1189f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1189fc:
    // 0x1189fc: 0x6e440008  ldr         $a0, 0x8($s2)
    ctx->pc = 0x1189fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_118a00:
    // 0x118a00: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x118a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_118a04:
    // 0x118a04: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x118a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_118a08:
    // 0x118a08: 0x6a46001f  ldl         $a2, 0x1F($s2)
    ctx->pc = 0x118a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_118a0c:
    // 0x118a0c: 0x6e460018  ldr         $a2, 0x18($s2)
    ctx->pc = 0x118a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_118a10:
    // 0x118a10: 0xb2230197  sdl         $v1, 0x197($s1)
    ctx->pc = 0x118a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a14:
    // 0x118a14: 0xb6230190  sdr         $v1, 0x190($s1)
    ctx->pc = 0x118a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a18:
    // 0x118a18: 0xb224019f  sdl         $a0, 0x19F($s1)
    ctx->pc = 0x118a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a1c:
    // 0x118a1c: 0xb6240198  sdr         $a0, 0x198($s1)
    ctx->pc = 0x118a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a20:
    // 0x118a20: 0xb22501a7  sdl         $a1, 0x1A7($s1)
    ctx->pc = 0x118a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a24:
    // 0x118a24: 0xb62501a0  sdr         $a1, 0x1A0($s1)
    ctx->pc = 0x118a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a28:
    // 0x118a28: 0xb22601af  sdl         $a2, 0x1AF($s1)
    ctx->pc = 0x118a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a2c:
    // 0x118a2c: 0xb62601a8  sdr         $a2, 0x1A8($s1)
    ctx->pc = 0x118a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a30:
    // 0x118a30: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x118a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_118a34:
    // 0x118a34: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x118a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_118a38:
    // 0x118a38: 0x6a44002f  ldl         $a0, 0x2F($s2)
    ctx->pc = 0x118a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_118a3c:
    // 0x118a3c: 0x6e440028  ldr         $a0, 0x28($s2)
    ctx->pc = 0x118a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_118a40:
    // 0x118a40: 0x6a450037  ldl         $a1, 0x37($s2)
    ctx->pc = 0x118a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_118a44:
    // 0x118a44: 0x6e450030  ldr         $a1, 0x30($s2)
    ctx->pc = 0x118a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_118a48:
    // 0x118a48: 0x6a46003f  ldl         $a2, 0x3F($s2)
    ctx->pc = 0x118a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_118a4c:
    // 0x118a4c: 0x6e460038  ldr         $a2, 0x38($s2)
    ctx->pc = 0x118a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_118a50:
    // 0x118a50: 0xb22301b7  sdl         $v1, 0x1B7($s1)
    ctx->pc = 0x118a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a54:
    // 0x118a54: 0xb62301b0  sdr         $v1, 0x1B0($s1)
    ctx->pc = 0x118a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a58:
    // 0x118a58: 0xb22401bf  sdl         $a0, 0x1BF($s1)
    ctx->pc = 0x118a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a5c:
    // 0x118a5c: 0xb62401b8  sdr         $a0, 0x1B8($s1)
    ctx->pc = 0x118a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a60:
    // 0x118a60: 0xb22501c7  sdl         $a1, 0x1C7($s1)
    ctx->pc = 0x118a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a64:
    // 0x118a64: 0xb62501c0  sdr         $a1, 0x1C0($s1)
    ctx->pc = 0x118a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a68:
    // 0x118a68: 0xb22601cf  sdl         $a2, 0x1CF($s1)
    ctx->pc = 0x118a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a6c:
    // 0x118a6c: 0xb62601c8  sdr         $a2, 0x1C8($s1)
    ctx->pc = 0x118a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_118a70:
    // 0x118a70: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x118a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_118a74:
    // 0x118a74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_118a78:
    if (ctx->pc == 0x118A78u) {
        ctx->pc = 0x118A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A74u;
        // 0x118a78: 0xae20020c  sw          $zero, 0x20C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118A7Cu;
        goto label_118a7c;
    }
    ctx->pc = 0x118A74u;
    {
        const bool branch_taken_0x118a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118a74) {
            ctx->pc = 0x118A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118A74u;
            // 0x118a78: 0xae20020c  sw          $zero, 0x20C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118A7Cu;
            goto label_118a7c;
        }
    }
    ctx->pc = 0x118A7Cu;
label_118a7c:
    // 0x118a7c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x118a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_118a80:
    // 0x118a80: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x118a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_118a84:
    // 0x118a84: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x118a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_118a88:
    // 0x118a88: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x118a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_118a8c:
    // 0x118a8c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x118a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_118a90:
    // 0x118a90: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x118a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_118a94:
    // 0x118a94: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x118a94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_118a98:
    // 0x118a98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x118a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_118a9c:
    // 0x118a9c: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x118a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_118aa0:
    // 0x118aa0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x118aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_118aa4:
    // 0x118aa4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x118aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_118aa8:
    // 0x118aa8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x118aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_118aac:
    // 0x118aac: 0x3e00008  jr          $ra
label_118ab0:
    if (ctx->pc == 0x118AB0u) {
        ctx->pc = 0x118AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AACu;
        // 0x118ab0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118AB4u;
        goto label_118ab4;
    }
    ctx->pc = 0x118AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AACu;
        // 0x118ab0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118AB4u;
label_118ab4:
    // 0x118ab4: 0x0  nop
    ctx->pc = 0x118ab4u;
    // NOP
    ctx->pc = 0x118ab8u;
}
