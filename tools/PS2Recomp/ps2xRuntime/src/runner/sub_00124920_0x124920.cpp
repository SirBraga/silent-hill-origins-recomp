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

// Function: sub_00124920
// Address: 0x124920 - 0x124ff0
void sub_00124920_0x124920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124920_0x124920");
#endif

    switch (ctx->pc) {
        case 0x124920u: goto label_124920;
        case 0x124924u: goto label_124924;
        case 0x124928u: goto label_124928;
        case 0x12492cu: goto label_12492c;
        case 0x124930u: goto label_124930;
        case 0x124934u: goto label_124934;
        case 0x124938u: goto label_124938;
        case 0x12493cu: goto label_12493c;
        case 0x124940u: goto label_124940;
        case 0x124944u: goto label_124944;
        case 0x124948u: goto label_124948;
        case 0x12494cu: goto label_12494c;
        case 0x124950u: goto label_124950;
        case 0x124954u: goto label_124954;
        case 0x124958u: goto label_124958;
        case 0x12495cu: goto label_12495c;
        case 0x124960u: goto label_124960;
        case 0x124964u: goto label_124964;
        case 0x124968u: goto label_124968;
        case 0x12496cu: goto label_12496c;
        case 0x124970u: goto label_124970;
        case 0x124974u: goto label_124974;
        case 0x124978u: goto label_124978;
        case 0x12497cu: goto label_12497c;
        case 0x124980u: goto label_124980;
        case 0x124984u: goto label_124984;
        case 0x124988u: goto label_124988;
        case 0x12498cu: goto label_12498c;
        case 0x124990u: goto label_124990;
        case 0x124994u: goto label_124994;
        case 0x124998u: goto label_124998;
        case 0x12499cu: goto label_12499c;
        case 0x1249a0u: goto label_1249a0;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249a8u: goto label_1249a8;
        case 0x1249acu: goto label_1249ac;
        case 0x1249b0u: goto label_1249b0;
        case 0x1249b4u: goto label_1249b4;
        case 0x1249b8u: goto label_1249b8;
        case 0x1249bcu: goto label_1249bc;
        case 0x1249c0u: goto label_1249c0;
        case 0x1249c4u: goto label_1249c4;
        case 0x1249c8u: goto label_1249c8;
        case 0x1249ccu: goto label_1249cc;
        case 0x1249d0u: goto label_1249d0;
        case 0x1249d4u: goto label_1249d4;
        case 0x1249d8u: goto label_1249d8;
        case 0x1249dcu: goto label_1249dc;
        case 0x1249e0u: goto label_1249e0;
        case 0x1249e4u: goto label_1249e4;
        case 0x1249e8u: goto label_1249e8;
        case 0x1249ecu: goto label_1249ec;
        case 0x1249f0u: goto label_1249f0;
        case 0x1249f4u: goto label_1249f4;
        case 0x1249f8u: goto label_1249f8;
        case 0x1249fcu: goto label_1249fc;
        case 0x124a00u: goto label_124a00;
        case 0x124a04u: goto label_124a04;
        case 0x124a08u: goto label_124a08;
        case 0x124a0cu: goto label_124a0c;
        case 0x124a10u: goto label_124a10;
        case 0x124a14u: goto label_124a14;
        case 0x124a18u: goto label_124a18;
        case 0x124a1cu: goto label_124a1c;
        case 0x124a20u: goto label_124a20;
        case 0x124a24u: goto label_124a24;
        case 0x124a28u: goto label_124a28;
        case 0x124a2cu: goto label_124a2c;
        case 0x124a30u: goto label_124a30;
        case 0x124a34u: goto label_124a34;
        case 0x124a38u: goto label_124a38;
        case 0x124a3cu: goto label_124a3c;
        case 0x124a40u: goto label_124a40;
        case 0x124a44u: goto label_124a44;
        case 0x124a48u: goto label_124a48;
        case 0x124a4cu: goto label_124a4c;
        case 0x124a50u: goto label_124a50;
        case 0x124a54u: goto label_124a54;
        case 0x124a58u: goto label_124a58;
        case 0x124a5cu: goto label_124a5c;
        case 0x124a60u: goto label_124a60;
        case 0x124a64u: goto label_124a64;
        case 0x124a68u: goto label_124a68;
        case 0x124a6cu: goto label_124a6c;
        case 0x124a70u: goto label_124a70;
        case 0x124a74u: goto label_124a74;
        case 0x124a78u: goto label_124a78;
        case 0x124a7cu: goto label_124a7c;
        case 0x124a80u: goto label_124a80;
        case 0x124a84u: goto label_124a84;
        case 0x124a88u: goto label_124a88;
        case 0x124a8cu: goto label_124a8c;
        case 0x124a90u: goto label_124a90;
        case 0x124a94u: goto label_124a94;
        case 0x124a98u: goto label_124a98;
        case 0x124a9cu: goto label_124a9c;
        case 0x124aa0u: goto label_124aa0;
        case 0x124aa4u: goto label_124aa4;
        case 0x124aa8u: goto label_124aa8;
        case 0x124aacu: goto label_124aac;
        case 0x124ab0u: goto label_124ab0;
        case 0x124ab4u: goto label_124ab4;
        case 0x124ab8u: goto label_124ab8;
        case 0x124abcu: goto label_124abc;
        case 0x124ac0u: goto label_124ac0;
        case 0x124ac4u: goto label_124ac4;
        case 0x124ac8u: goto label_124ac8;
        case 0x124accu: goto label_124acc;
        case 0x124ad0u: goto label_124ad0;
        case 0x124ad4u: goto label_124ad4;
        case 0x124ad8u: goto label_124ad8;
        case 0x124adcu: goto label_124adc;
        case 0x124ae0u: goto label_124ae0;
        case 0x124ae4u: goto label_124ae4;
        case 0x124ae8u: goto label_124ae8;
        case 0x124aecu: goto label_124aec;
        case 0x124af0u: goto label_124af0;
        case 0x124af4u: goto label_124af4;
        case 0x124af8u: goto label_124af8;
        case 0x124afcu: goto label_124afc;
        case 0x124b00u: goto label_124b00;
        case 0x124b04u: goto label_124b04;
        case 0x124b08u: goto label_124b08;
        case 0x124b0cu: goto label_124b0c;
        case 0x124b10u: goto label_124b10;
        case 0x124b14u: goto label_124b14;
        case 0x124b18u: goto label_124b18;
        case 0x124b1cu: goto label_124b1c;
        case 0x124b20u: goto label_124b20;
        case 0x124b24u: goto label_124b24;
        case 0x124b28u: goto label_124b28;
        case 0x124b2cu: goto label_124b2c;
        case 0x124b30u: goto label_124b30;
        case 0x124b34u: goto label_124b34;
        case 0x124b38u: goto label_124b38;
        case 0x124b3cu: goto label_124b3c;
        case 0x124b40u: goto label_124b40;
        case 0x124b44u: goto label_124b44;
        case 0x124b48u: goto label_124b48;
        case 0x124b4cu: goto label_124b4c;
        case 0x124b50u: goto label_124b50;
        case 0x124b54u: goto label_124b54;
        case 0x124b58u: goto label_124b58;
        case 0x124b5cu: goto label_124b5c;
        case 0x124b60u: goto label_124b60;
        case 0x124b64u: goto label_124b64;
        case 0x124b68u: goto label_124b68;
        case 0x124b6cu: goto label_124b6c;
        case 0x124b70u: goto label_124b70;
        case 0x124b74u: goto label_124b74;
        case 0x124b78u: goto label_124b78;
        case 0x124b7cu: goto label_124b7c;
        case 0x124b80u: goto label_124b80;
        case 0x124b84u: goto label_124b84;
        case 0x124b88u: goto label_124b88;
        case 0x124b8cu: goto label_124b8c;
        case 0x124b90u: goto label_124b90;
        case 0x124b94u: goto label_124b94;
        case 0x124b98u: goto label_124b98;
        case 0x124b9cu: goto label_124b9c;
        case 0x124ba0u: goto label_124ba0;
        case 0x124ba4u: goto label_124ba4;
        case 0x124ba8u: goto label_124ba8;
        case 0x124bacu: goto label_124bac;
        case 0x124bb0u: goto label_124bb0;
        case 0x124bb4u: goto label_124bb4;
        case 0x124bb8u: goto label_124bb8;
        case 0x124bbcu: goto label_124bbc;
        case 0x124bc0u: goto label_124bc0;
        case 0x124bc4u: goto label_124bc4;
        case 0x124bc8u: goto label_124bc8;
        case 0x124bccu: goto label_124bcc;
        case 0x124bd0u: goto label_124bd0;
        case 0x124bd4u: goto label_124bd4;
        case 0x124bd8u: goto label_124bd8;
        case 0x124bdcu: goto label_124bdc;
        case 0x124be0u: goto label_124be0;
        case 0x124be4u: goto label_124be4;
        case 0x124be8u: goto label_124be8;
        case 0x124becu: goto label_124bec;
        case 0x124bf0u: goto label_124bf0;
        case 0x124bf4u: goto label_124bf4;
        case 0x124bf8u: goto label_124bf8;
        case 0x124bfcu: goto label_124bfc;
        case 0x124c00u: goto label_124c00;
        case 0x124c04u: goto label_124c04;
        case 0x124c08u: goto label_124c08;
        case 0x124c0cu: goto label_124c0c;
        case 0x124c10u: goto label_124c10;
        case 0x124c14u: goto label_124c14;
        case 0x124c18u: goto label_124c18;
        case 0x124c1cu: goto label_124c1c;
        case 0x124c20u: goto label_124c20;
        case 0x124c24u: goto label_124c24;
        case 0x124c28u: goto label_124c28;
        case 0x124c2cu: goto label_124c2c;
        case 0x124c30u: goto label_124c30;
        case 0x124c34u: goto label_124c34;
        case 0x124c38u: goto label_124c38;
        case 0x124c3cu: goto label_124c3c;
        case 0x124c40u: goto label_124c40;
        case 0x124c44u: goto label_124c44;
        case 0x124c48u: goto label_124c48;
        case 0x124c4cu: goto label_124c4c;
        case 0x124c50u: goto label_124c50;
        case 0x124c54u: goto label_124c54;
        case 0x124c58u: goto label_124c58;
        case 0x124c5cu: goto label_124c5c;
        case 0x124c60u: goto label_124c60;
        case 0x124c64u: goto label_124c64;
        case 0x124c68u: goto label_124c68;
        case 0x124c6cu: goto label_124c6c;
        case 0x124c70u: goto label_124c70;
        case 0x124c74u: goto label_124c74;
        case 0x124c78u: goto label_124c78;
        case 0x124c7cu: goto label_124c7c;
        case 0x124c80u: goto label_124c80;
        case 0x124c84u: goto label_124c84;
        case 0x124c88u: goto label_124c88;
        case 0x124c8cu: goto label_124c8c;
        case 0x124c90u: goto label_124c90;
        case 0x124c94u: goto label_124c94;
        case 0x124c98u: goto label_124c98;
        case 0x124c9cu: goto label_124c9c;
        case 0x124ca0u: goto label_124ca0;
        case 0x124ca4u: goto label_124ca4;
        case 0x124ca8u: goto label_124ca8;
        case 0x124cacu: goto label_124cac;
        case 0x124cb0u: goto label_124cb0;
        case 0x124cb4u: goto label_124cb4;
        case 0x124cb8u: goto label_124cb8;
        case 0x124cbcu: goto label_124cbc;
        case 0x124cc0u: goto label_124cc0;
        case 0x124cc4u: goto label_124cc4;
        case 0x124cc8u: goto label_124cc8;
        case 0x124cccu: goto label_124ccc;
        case 0x124cd0u: goto label_124cd0;
        case 0x124cd4u: goto label_124cd4;
        case 0x124cd8u: goto label_124cd8;
        case 0x124cdcu: goto label_124cdc;
        case 0x124ce0u: goto label_124ce0;
        case 0x124ce4u: goto label_124ce4;
        case 0x124ce8u: goto label_124ce8;
        case 0x124cecu: goto label_124cec;
        case 0x124cf0u: goto label_124cf0;
        case 0x124cf4u: goto label_124cf4;
        case 0x124cf8u: goto label_124cf8;
        case 0x124cfcu: goto label_124cfc;
        case 0x124d00u: goto label_124d00;
        case 0x124d04u: goto label_124d04;
        case 0x124d08u: goto label_124d08;
        case 0x124d0cu: goto label_124d0c;
        case 0x124d10u: goto label_124d10;
        case 0x124d14u: goto label_124d14;
        case 0x124d18u: goto label_124d18;
        case 0x124d1cu: goto label_124d1c;
        case 0x124d20u: goto label_124d20;
        case 0x124d24u: goto label_124d24;
        case 0x124d28u: goto label_124d28;
        case 0x124d2cu: goto label_124d2c;
        case 0x124d30u: goto label_124d30;
        case 0x124d34u: goto label_124d34;
        case 0x124d38u: goto label_124d38;
        case 0x124d3cu: goto label_124d3c;
        case 0x124d40u: goto label_124d40;
        case 0x124d44u: goto label_124d44;
        case 0x124d48u: goto label_124d48;
        case 0x124d4cu: goto label_124d4c;
        case 0x124d50u: goto label_124d50;
        case 0x124d54u: goto label_124d54;
        case 0x124d58u: goto label_124d58;
        case 0x124d5cu: goto label_124d5c;
        case 0x124d60u: goto label_124d60;
        case 0x124d64u: goto label_124d64;
        case 0x124d68u: goto label_124d68;
        case 0x124d6cu: goto label_124d6c;
        case 0x124d70u: goto label_124d70;
        case 0x124d74u: goto label_124d74;
        case 0x124d78u: goto label_124d78;
        case 0x124d7cu: goto label_124d7c;
        case 0x124d80u: goto label_124d80;
        case 0x124d84u: goto label_124d84;
        case 0x124d88u: goto label_124d88;
        case 0x124d8cu: goto label_124d8c;
        case 0x124d90u: goto label_124d90;
        case 0x124d94u: goto label_124d94;
        case 0x124d98u: goto label_124d98;
        case 0x124d9cu: goto label_124d9c;
        case 0x124da0u: goto label_124da0;
        case 0x124da4u: goto label_124da4;
        case 0x124da8u: goto label_124da8;
        case 0x124dacu: goto label_124dac;
        case 0x124db0u: goto label_124db0;
        case 0x124db4u: goto label_124db4;
        case 0x124db8u: goto label_124db8;
        case 0x124dbcu: goto label_124dbc;
        case 0x124dc0u: goto label_124dc0;
        case 0x124dc4u: goto label_124dc4;
        case 0x124dc8u: goto label_124dc8;
        case 0x124dccu: goto label_124dcc;
        case 0x124dd0u: goto label_124dd0;
        case 0x124dd4u: goto label_124dd4;
        case 0x124dd8u: goto label_124dd8;
        case 0x124ddcu: goto label_124ddc;
        case 0x124de0u: goto label_124de0;
        case 0x124de4u: goto label_124de4;
        case 0x124de8u: goto label_124de8;
        case 0x124decu: goto label_124dec;
        case 0x124df0u: goto label_124df0;
        case 0x124df4u: goto label_124df4;
        case 0x124df8u: goto label_124df8;
        case 0x124dfcu: goto label_124dfc;
        case 0x124e00u: goto label_124e00;
        case 0x124e04u: goto label_124e04;
        case 0x124e08u: goto label_124e08;
        case 0x124e0cu: goto label_124e0c;
        case 0x124e10u: goto label_124e10;
        case 0x124e14u: goto label_124e14;
        case 0x124e18u: goto label_124e18;
        case 0x124e1cu: goto label_124e1c;
        case 0x124e20u: goto label_124e20;
        case 0x124e24u: goto label_124e24;
        case 0x124e28u: goto label_124e28;
        case 0x124e2cu: goto label_124e2c;
        case 0x124e30u: goto label_124e30;
        case 0x124e34u: goto label_124e34;
        case 0x124e38u: goto label_124e38;
        case 0x124e3cu: goto label_124e3c;
        case 0x124e40u: goto label_124e40;
        case 0x124e44u: goto label_124e44;
        case 0x124e48u: goto label_124e48;
        case 0x124e4cu: goto label_124e4c;
        case 0x124e50u: goto label_124e50;
        case 0x124e54u: goto label_124e54;
        case 0x124e58u: goto label_124e58;
        case 0x124e5cu: goto label_124e5c;
        case 0x124e60u: goto label_124e60;
        case 0x124e64u: goto label_124e64;
        case 0x124e68u: goto label_124e68;
        case 0x124e6cu: goto label_124e6c;
        case 0x124e70u: goto label_124e70;
        case 0x124e74u: goto label_124e74;
        case 0x124e78u: goto label_124e78;
        case 0x124e7cu: goto label_124e7c;
        case 0x124e80u: goto label_124e80;
        case 0x124e84u: goto label_124e84;
        case 0x124e88u: goto label_124e88;
        case 0x124e8cu: goto label_124e8c;
        case 0x124e90u: goto label_124e90;
        case 0x124e94u: goto label_124e94;
        case 0x124e98u: goto label_124e98;
        case 0x124e9cu: goto label_124e9c;
        case 0x124ea0u: goto label_124ea0;
        case 0x124ea4u: goto label_124ea4;
        case 0x124ea8u: goto label_124ea8;
        case 0x124eacu: goto label_124eac;
        case 0x124eb0u: goto label_124eb0;
        case 0x124eb4u: goto label_124eb4;
        case 0x124eb8u: goto label_124eb8;
        case 0x124ebcu: goto label_124ebc;
        case 0x124ec0u: goto label_124ec0;
        case 0x124ec4u: goto label_124ec4;
        case 0x124ec8u: goto label_124ec8;
        case 0x124eccu: goto label_124ecc;
        case 0x124ed0u: goto label_124ed0;
        case 0x124ed4u: goto label_124ed4;
        case 0x124ed8u: goto label_124ed8;
        case 0x124edcu: goto label_124edc;
        case 0x124ee0u: goto label_124ee0;
        case 0x124ee4u: goto label_124ee4;
        case 0x124ee8u: goto label_124ee8;
        case 0x124eecu: goto label_124eec;
        case 0x124ef0u: goto label_124ef0;
        case 0x124ef4u: goto label_124ef4;
        case 0x124ef8u: goto label_124ef8;
        case 0x124efcu: goto label_124efc;
        case 0x124f00u: goto label_124f00;
        case 0x124f04u: goto label_124f04;
        case 0x124f08u: goto label_124f08;
        case 0x124f0cu: goto label_124f0c;
        case 0x124f10u: goto label_124f10;
        case 0x124f14u: goto label_124f14;
        case 0x124f18u: goto label_124f18;
        case 0x124f1cu: goto label_124f1c;
        case 0x124f20u: goto label_124f20;
        case 0x124f24u: goto label_124f24;
        case 0x124f28u: goto label_124f28;
        case 0x124f2cu: goto label_124f2c;
        case 0x124f30u: goto label_124f30;
        case 0x124f34u: goto label_124f34;
        case 0x124f38u: goto label_124f38;
        case 0x124f3cu: goto label_124f3c;
        case 0x124f40u: goto label_124f40;
        case 0x124f44u: goto label_124f44;
        case 0x124f48u: goto label_124f48;
        case 0x124f4cu: goto label_124f4c;
        case 0x124f50u: goto label_124f50;
        case 0x124f54u: goto label_124f54;
        case 0x124f58u: goto label_124f58;
        case 0x124f5cu: goto label_124f5c;
        case 0x124f60u: goto label_124f60;
        case 0x124f64u: goto label_124f64;
        case 0x124f68u: goto label_124f68;
        case 0x124f6cu: goto label_124f6c;
        case 0x124f70u: goto label_124f70;
        case 0x124f74u: goto label_124f74;
        case 0x124f78u: goto label_124f78;
        case 0x124f7cu: goto label_124f7c;
        case 0x124f80u: goto label_124f80;
        case 0x124f84u: goto label_124f84;
        case 0x124f88u: goto label_124f88;
        case 0x124f8cu: goto label_124f8c;
        case 0x124f90u: goto label_124f90;
        case 0x124f94u: goto label_124f94;
        case 0x124f98u: goto label_124f98;
        case 0x124f9cu: goto label_124f9c;
        case 0x124fa0u: goto label_124fa0;
        case 0x124fa4u: goto label_124fa4;
        case 0x124fa8u: goto label_124fa8;
        case 0x124facu: goto label_124fac;
        case 0x124fb0u: goto label_124fb0;
        case 0x124fb4u: goto label_124fb4;
        case 0x124fb8u: goto label_124fb8;
        case 0x124fbcu: goto label_124fbc;
        case 0x124fc0u: goto label_124fc0;
        case 0x124fc4u: goto label_124fc4;
        case 0x124fc8u: goto label_124fc8;
        case 0x124fccu: goto label_124fcc;
        case 0x124fd0u: goto label_124fd0;
        case 0x124fd4u: goto label_124fd4;
        case 0x124fd8u: goto label_124fd8;
        case 0x124fdcu: goto label_124fdc;
        case 0x124fe0u: goto label_124fe0;
        case 0x124fe4u: goto label_124fe4;
        case 0x124fe8u: goto label_124fe8;
        case 0x124fecu: goto label_124fec;
        default: break;
    }

    ctx->pc = 0x124920u;

label_124920:
    // 0x124920: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x124920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_124924:
    // 0x124924: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x124924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_124928:
    // 0x124928: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12492c:
    // 0x12492c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_124930:
    // 0x124930: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x124930u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_124934:
    // 0x124934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124938:
    // 0x124938: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x124938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12493c:
    // 0x12493c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12493cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124940:
    // 0x124940: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x124940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_124944:
    // 0x124944: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x124944u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_124948:
    // 0x124948: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x124948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_12494c:
    // 0x12494c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12494cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_124950:
    // 0x124950: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x124950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_124954:
    // 0x124954: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x124954u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_124958:
    // 0x124958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_12495c:
    // 0x12495c: 0x24a5bed8  addiu       $a1, $a1, -0x4128
    ctx->pc = 0x12495cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950616));
label_124960:
    // 0x124960: 0xc065c58  jal         func_197160
label_124964:
    if (ctx->pc == 0x124964u) {
        ctx->pc = 0x124964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124960u;
        // 0x124964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124968u;
        goto label_124968;
    }
    ctx->pc = 0x124960u;
    SET_GPR_U32(ctx, 31, 0x124968u);
    ctx->pc = 0x124964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124960u;
    // 0x124964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124960u, 0x124968u)) {
        return;
    }
    ctx->pc = 0x124968u;
label_124968:
    // 0x124968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12496c:
    if (ctx->pc == 0x12496Cu) {
        ctx->pc = 0x12496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124968u;
        // 0x12496c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124970u;
        goto label_124970;
    }
    ctx->pc = 0x124968u;
    {
        const bool branch_taken_0x124968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124968u;
        // 0x12496c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124968) {
            ctx->pc = 0x124980u;
            goto label_124980;
        }
    }
    ctx->pc = 0x124970u;
label_124970:
    // 0x124970: 0xc075d62  jal         func_1D7588
label_124974:
    if (ctx->pc == 0x124974u) {
        ctx->pc = 0x124974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124970u;
        // 0x124974: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124978u;
        goto label_124978;
    }
    ctx->pc = 0x124970u;
    SET_GPR_U32(ctx, 31, 0x124978u);
    ctx->pc = 0x124974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124970u;
    // 0x124974: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x124970u, 0x124978u)) {
        return;
    }
    ctx->pc = 0x124978u;
label_124978:
    // 0x124978: 0x10000193  b           . + 4 + (0x193 << 2)
label_12497c:
    if (ctx->pc == 0x12497Cu) {
        ctx->pc = 0x12497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124978u;
        // 0x12497c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124980u;
        goto label_124980;
    }
    ctx->pc = 0x124978u;
    {
        const bool branch_taken_0x124978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124978u;
        // 0x12497c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124978) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124980u;
label_124980:
    // 0x124980: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124984:
    // 0x124984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124988:
    // 0x124988: 0xc065c58  jal         func_197160
label_12498c:
    if (ctx->pc == 0x12498Cu) {
        ctx->pc = 0x12498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124988u;
        // 0x12498c: 0x24a5bee8  addiu       $a1, $a1, -0x4118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124990u;
        goto label_124990;
    }
    ctx->pc = 0x124988u;
    SET_GPR_U32(ctx, 31, 0x124990u);
    ctx->pc = 0x12498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124988u;
    // 0x12498c: 0x24a5bee8  addiu       $a1, $a1, -0x4118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124988u, 0x124990u)) {
        return;
    }
    ctx->pc = 0x124990u;
label_124990:
    // 0x124990: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_124994:
    if (ctx->pc == 0x124994u) {
        ctx->pc = 0x124994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124990u;
        // 0x124994: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124998u;
        goto label_124998;
    }
    ctx->pc = 0x124990u;
    {
        const bool branch_taken_0x124990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124990u;
        // 0x124994: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124990) {
            ctx->pc = 0x1249D0u;
            goto label_1249d0;
        }
    }
    ctx->pc = 0x124998u;
label_124998:
    // 0x124998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12499c:
    // 0x12499c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x12499cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1249a0:
    // 0x1249a0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1249a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1249a4:
    // 0x1249a4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1249a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1249a8:
    // 0x1249a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1249ac:
    if (ctx->pc == 0x1249ACu) {
        ctx->pc = 0x1249ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249A8u;
        // 0x1249ac: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249B0u;
        goto label_1249b0;
    }
    ctx->pc = 0x1249A8u;
    {
        const bool branch_taken_0x1249a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1249ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249A8u;
        // 0x1249ac: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249a8) {
            ctx->pc = 0x1249C0u;
            goto label_1249c0;
        }
    }
    ctx->pc = 0x1249B0u;
label_1249b0:
    // 0x1249b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1249b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1249b4:
    // 0x1249b4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1249b8:
    // 0x1249b8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1249bc:
    if (ctx->pc == 0x1249BCu) {
        ctx->pc = 0x1249BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249B8u;
        // 0x1249bc: 0x8c4544d8  lw          $a1, 0x44D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249C0u;
        goto label_1249c0;
    }
    ctx->pc = 0x1249B8u;
    {
        const bool branch_taken_0x1249b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249B8u;
        // 0x1249bc: 0x8c4544d8  lw          $a1, 0x44D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249b8) {
            ctx->pc = 0x124B38u;
            goto label_124b38;
        }
    }
    ctx->pc = 0x1249C0u;
label_1249c0:
    // 0x1249c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1249c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1249c4:
    // 0x1249c4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1249c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1249c8:
    // 0x1249c8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1249cc:
    if (ctx->pc == 0x1249CCu) {
        ctx->pc = 0x1249CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249C8u;
        // 0x1249cc: 0x8c4544e0  lw          $a1, 0x44E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249D0u;
        goto label_1249d0;
    }
    ctx->pc = 0x1249C8u;
    {
        const bool branch_taken_0x1249c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249C8u;
        // 0x1249cc: 0x8c4544e0  lw          $a1, 0x44E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249c8) {
            ctx->pc = 0x124B38u;
            goto label_124b38;
        }
    }
    ctx->pc = 0x1249D0u;
label_1249d0:
    // 0x1249d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1249d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1249d4:
    // 0x1249d4: 0xc065c58  jal         func_197160
label_1249d8:
    if (ctx->pc == 0x1249D8u) {
        ctx->pc = 0x1249D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249D4u;
        // 0x1249d8: 0x24a5bef0  addiu       $a1, $a1, -0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249DCu;
        goto label_1249dc;
    }
    ctx->pc = 0x1249D4u;
    SET_GPR_U32(ctx, 31, 0x1249DCu);
    ctx->pc = 0x1249D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1249D4u;
    // 0x1249d8: 0x24a5bef0  addiu       $a1, $a1, -0x4110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1249D4u, 0x1249DCu)) {
        return;
    }
    ctx->pc = 0x1249DCu;
label_1249dc:
    // 0x1249dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1249e0:
    if (ctx->pc == 0x1249E0u) {
        ctx->pc = 0x1249E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249DCu;
        // 0x1249e0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249E4u;
        goto label_1249e4;
    }
    ctx->pc = 0x1249DCu;
    {
        const bool branch_taken_0x1249dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249DCu;
        // 0x1249e0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249dc) {
            ctx->pc = 0x124A20u;
            goto label_124a20;
        }
    }
    ctx->pc = 0x1249E4u;
label_1249e4:
    // 0x1249e4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1249e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1249e8:
    // 0x1249e8: 0x8c4244f0  lw          $v0, 0x44F0($v0)
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17648)));
label_1249ec:
    // 0x1249ec: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1249f0:
    // 0x1249f0: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1249f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1249f4:
    // 0x1249f4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1249f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1249f8:
    // 0x1249f8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1249f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1249fc:
    // 0x1249fc: 0x10440171  beq         $v0, $a0, . + 4 + (0x171 << 2)
label_124a00:
    if (ctx->pc == 0x124A00u) {
        ctx->pc = 0x124A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249FCu;
        // 0x124a00: 0xafbd0024  sw          $sp, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A04u;
        goto label_124a04;
    }
    ctx->pc = 0x1249FCu;
    {
        const bool branch_taken_0x1249fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x124A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249FCu;
        // 0x124a00: 0xafbd0024  sw          $sp, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249fc) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124A04u;
label_124a04:
    // 0x124a04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x124a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124a08:
    // 0x124a08: 0x1040016f  beqz        $v0, . + 4 + (0x16F << 2)
label_124a0c:
    if (ctx->pc == 0x124A0Cu) {
        ctx->pc = 0x124A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A08u;
        // 0x124a0c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A10u;
        goto label_124a10;
    }
    ctx->pc = 0x124A08u;
    {
        const bool branch_taken_0x124a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A08u;
        // 0x124a0c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a08) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124A10u;
label_124a10:
    // 0x124a10: 0xc07fd18  jal         func_1FF460
label_124a14:
    if (ctx->pc == 0x124A14u) {
        ctx->pc = 0x124A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A10u;
        // 0x124a14: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A18u;
        goto label_124a18;
    }
    ctx->pc = 0x124A10u;
    SET_GPR_U32(ctx, 31, 0x124A18u);
    ctx->pc = 0x124A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A10u;
    // 0x124a14: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124A10u, 0x124A18u)) {
        return;
    }
    ctx->pc = 0x124A18u;
label_124a18:
    // 0x124a18: 0x1000016b  b           . + 4 + (0x16B << 2)
label_124a1c:
    if (ctx->pc == 0x124A1Cu) {
        ctx->pc = 0x124A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A18u;
        // 0x124a1c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A20u;
        goto label_124a20;
    }
    ctx->pc = 0x124A18u;
    {
        const bool branch_taken_0x124a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A18u;
        // 0x124a1c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a18) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124A20u;
label_124a20:
    // 0x124a20: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124a24:
    // 0x124a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124a28:
    // 0x124a28: 0xc065c58  jal         func_197160
label_124a2c:
    if (ctx->pc == 0x124A2Cu) {
        ctx->pc = 0x124A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A28u;
        // 0x124a2c: 0x24a5bf00  addiu       $a1, $a1, -0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A30u;
        goto label_124a30;
    }
    ctx->pc = 0x124A28u;
    SET_GPR_U32(ctx, 31, 0x124A30u);
    ctx->pc = 0x124A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A28u;
    // 0x124a2c: 0x24a5bf00  addiu       $a1, $a1, -0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124A28u, 0x124A30u)) {
        return;
    }
    ctx->pc = 0x124A30u;
label_124a30:
    // 0x124a30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_124a34:
    if (ctx->pc == 0x124A34u) {
        ctx->pc = 0x124A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A30u;
        // 0x124a34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A38u;
        goto label_124a38;
    }
    ctx->pc = 0x124A30u;
    {
        const bool branch_taken_0x124a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A30u;
        // 0x124a34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a30) {
            ctx->pc = 0x124A44u;
            goto label_124a44;
        }
    }
    ctx->pc = 0x124A38u;
label_124a38:
    // 0x124a38: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x124a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_124a3c:
    // 0x124a3c: 0x10000009  b           . + 4 + (0x9 << 2)
label_124a40:
    if (ctx->pc == 0x124A40u) {
        ctx->pc = 0x124A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A3Cu;
        // 0x124a40: 0x8c4244f8  lw          $v0, 0x44F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A44u;
        goto label_124a44;
    }
    ctx->pc = 0x124A3Cu;
    {
        const bool branch_taken_0x124a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A3Cu;
        // 0x124a40: 0x8c4244f8  lw          $v0, 0x44F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a3c) {
            ctx->pc = 0x124A64u;
            goto label_124a64;
        }
    }
    ctx->pc = 0x124A44u;
label_124a44:
    // 0x124a44: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124a48:
    // 0x124a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124a4c:
    // 0x124a4c: 0xc065c58  jal         func_197160
label_124a50:
    if (ctx->pc == 0x124A50u) {
        ctx->pc = 0x124A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A4Cu;
        // 0x124a50: 0x24a5bf10  addiu       $a1, $a1, -0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A54u;
        goto label_124a54;
    }
    ctx->pc = 0x124A4Cu;
    SET_GPR_U32(ctx, 31, 0x124A54u);
    ctx->pc = 0x124A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A4Cu;
    // 0x124a50: 0x24a5bf10  addiu       $a1, $a1, -0x40F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124A4Cu, 0x124A54u)) {
        return;
    }
    ctx->pc = 0x124A54u;
label_124a54:
    // 0x124a54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_124a58:
    if (ctx->pc == 0x124A58u) {
        ctx->pc = 0x124A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A54u;
        // 0x124a58: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A5Cu;
        goto label_124a5c;
    }
    ctx->pc = 0x124A54u;
    {
        const bool branch_taken_0x124a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A54u;
        // 0x124a58: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a54) {
            ctx->pc = 0x124A98u;
            goto label_124a98;
        }
    }
    ctx->pc = 0x124A5Cu;
label_124a5c:
    // 0x124a5c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x124a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_124a60:
    // 0x124a60: 0x8c4244e8  lw          $v0, 0x44E8($v0)
    ctx->pc = 0x124a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17640)));
label_124a64:
    // 0x124a64: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x124a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_124a68:
    // 0x124a68: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x124a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_124a6c:
    // 0x124a6c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x124a6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_124a70:
    // 0x124a70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x124a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_124a74:
    // 0x124a74: 0x10440153  beq         $v0, $a0, . + 4 + (0x153 << 2)
label_124a78:
    if (ctx->pc == 0x124A78u) {
        ctx->pc = 0x124A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A74u;
        // 0x124a78: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A7Cu;
        goto label_124a7c;
    }
    ctx->pc = 0x124A74u;
    {
        const bool branch_taken_0x124a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x124A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A74u;
        // 0x124a78: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a74) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124A7Cu;
label_124a7c:
    // 0x124a7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x124a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124a80:
    // 0x124a80: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
label_124a84:
    if (ctx->pc == 0x124A84u) {
        ctx->pc = 0x124A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A80u;
        // 0x124a84: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A88u;
        goto label_124a88;
    }
    ctx->pc = 0x124A80u;
    {
        const bool branch_taken_0x124a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A80u;
        // 0x124a84: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a80) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124A88u;
label_124a88:
    // 0x124a88: 0xc07fd18  jal         func_1FF460
label_124a8c:
    if (ctx->pc == 0x124A8Cu) {
        ctx->pc = 0x124A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A88u;
        // 0x124a8c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A90u;
        goto label_124a90;
    }
    ctx->pc = 0x124A88u;
    SET_GPR_U32(ctx, 31, 0x124A90u);
    ctx->pc = 0x124A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A88u;
    // 0x124a8c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124A88u, 0x124A90u)) {
        return;
    }
    ctx->pc = 0x124A90u;
label_124a90:
    // 0x124a90: 0x1000014d  b           . + 4 + (0x14D << 2)
label_124a94:
    if (ctx->pc == 0x124A94u) {
        ctx->pc = 0x124A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A90u;
        // 0x124a94: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A98u;
        goto label_124a98;
    }
    ctx->pc = 0x124A90u;
    {
        const bool branch_taken_0x124a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A90u;
        // 0x124a94: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a90) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124A98u;
label_124a98:
    // 0x124a98: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124a9c:
    // 0x124a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124aa0:
    // 0x124aa0: 0xc065c58  jal         func_197160
label_124aa4:
    if (ctx->pc == 0x124AA4u) {
        ctx->pc = 0x124AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AA0u;
        // 0x124aa4: 0x24a5bf20  addiu       $a1, $a1, -0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124AA8u;
        goto label_124aa8;
    }
    ctx->pc = 0x124AA0u;
    SET_GPR_U32(ctx, 31, 0x124AA8u);
    ctx->pc = 0x124AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AA0u;
    // 0x124aa4: 0x24a5bf20  addiu       $a1, $a1, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124AA0u, 0x124AA8u)) {
        return;
    }
    ctx->pc = 0x124AA8u;
label_124aa8:
    // 0x124aa8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_124aac:
    if (ctx->pc == 0x124AACu) {
        ctx->pc = 0x124AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AA8u;
        // 0x124aac: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124AB0u;
        goto label_124ab0;
    }
    ctx->pc = 0x124AA8u;
    {
        const bool branch_taken_0x124aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AA8u;
        // 0x124aac: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124aa8) {
            ctx->pc = 0x124B68u;
            goto label_124b68;
        }
    }
    ctx->pc = 0x124AB0u;
label_124ab0:
    // 0x124ab0: 0xc07600c  jal         func_1D8030
label_124ab4:
    if (ctx->pc == 0x124AB4u) {
        ctx->pc = 0x124AB8u;
        goto label_124ab8;
    }
    ctx->pc = 0x124AB0u;
    SET_GPR_U32(ctx, 31, 0x124AB8u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x124AB0u, 0x124AB8u)) {
        return;
    }
    ctx->pc = 0x124AB8u;
label_124ab8:
    // 0x124ab8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x124ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_124abc:
    // 0x124abc: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x124abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_124ac0:
    // 0x124ac0: 0x84440298  lh          $a0, 0x298($v0)
    ctx->pc = 0x124ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 664)));
label_124ac4:
    // 0x124ac4: 0x8c43029c  lw          $v1, 0x29C($v0)
    ctx->pc = 0x124ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
label_124ac8:
    // 0x124ac8: 0x60f809  jalr        $v1
label_124acc:
    if (ctx->pc == 0x124ACCu) {
        ctx->pc = 0x124ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AC8u;
        // 0x124acc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124AD0u;
        goto label_124ad0;
    }
    ctx->pc = 0x124AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124AD0u);
        ctx->pc = 0x124ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AC8u;
        // 0x124acc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124AC8u, 0x124AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124AD0u;
label_124ad0:
    // 0x124ad0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x124ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_124ad4:
    // 0x124ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124ad8:
    // 0x124ad8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x124ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_124adc:
    // 0x124adc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x124adcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_124ae0:
    // 0x124ae0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x124ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124ae4:
    // 0x124ae4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x124ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_124ae8:
    // 0x124ae8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x124ae8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_124aec:
    // 0x124aec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_124af0:
    if (ctx->pc == 0x124AF0u) {
        ctx->pc = 0x124AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AECu;
        // 0x124af0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124AF4u;
        goto label_124af4;
    }
    ctx->pc = 0x124AECu;
    {
        const bool branch_taken_0x124aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AECu;
        // 0x124af0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124aec) {
            ctx->pc = 0x124B08u;
            goto label_124b08;
        }
    }
    ctx->pc = 0x124AF4u;
label_124af4:
    // 0x124af4: 0x3c014bf0  lui         $at, 0x4BF0
    ctx->pc = 0x124af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19440 << 16));
label_124af8:
    // 0x124af8: 0x342199c0  ori         $at, $at, 0x99C0
    ctx->pc = 0x124af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39360);
label_124afc:
    // 0x124afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124b00:
    // 0x124b00: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x124b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_124b04:
    // 0x124b04: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x124b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_124b08:
    // 0x124b08: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x124b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124b0c:
    // 0x124b0c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x124b0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124b10:
    // 0x124b10: 0x0  nop
    ctx->pc = 0x124b10u;
    // NOP
label_124b14:
    // 0x124b14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_124b18:
    if (ctx->pc == 0x124B18u) {
        ctx->pc = 0x124B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B14u;
        // 0x124b18: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B1Cu;
        goto label_124b1c;
    }
    ctx->pc = 0x124B14u;
    {
        const bool branch_taken_0x124b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B14u;
        // 0x124b18: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b14) {
            ctx->pc = 0x124B30u;
            goto label_124b30;
        }
    }
    ctx->pc = 0x124B1Cu;
label_124b1c:
    // 0x124b1c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x124b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_124b20:
    // 0x124b20: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x124b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_124b24:
    // 0x124b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124b28:
    // 0x124b28: 0x0  nop
    ctx->pc = 0x124b28u;
    // NOP
label_124b2c:
    // 0x124b2c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x124b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_124b30:
    // 0x124b30: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_124b34:
    // 0x124b34: 0x8c454510  lw          $a1, 0x4510($v0)
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17680)));
label_124b38:
    // 0x124b38: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_124b3c:
    // 0x124b3c: 0x10a30122  beq         $a1, $v1, . + 4 + (0x122 << 2)
label_124b40:
    if (ctx->pc == 0x124B40u) {
        ctx->pc = 0x124B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B3Cu;
        // 0x124b40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B44u;
        goto label_124b44;
    }
    ctx->pc = 0x124B3Cu;
    {
        const bool branch_taken_0x124b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x124B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B3Cu;
        // 0x124b40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b3c) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124B44u;
label_124b44:
    // 0x124b44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x124b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_124b48:
    // 0x124b48: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
label_124b4c:
    if (ctx->pc == 0x124B4Cu) {
        ctx->pc = 0x124B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B48u;
        // 0x124b4c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B50u;
        goto label_124b50;
    }
    ctx->pc = 0x124B48u;
    {
        const bool branch_taken_0x124b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B48u;
        // 0x124b4c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b48) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124B50u;
label_124b50:
    // 0x124b50: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x124b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_124b54:
    // 0x124b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124b58:
    // 0x124b58: 0xc07fd18  jal         func_1FF460
label_124b5c:
    if (ctx->pc == 0x124B5Cu) {
        ctx->pc = 0x124B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B58u;
        // 0x124b5c: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B60u;
        goto label_124b60;
    }
    ctx->pc = 0x124B58u;
    SET_GPR_U32(ctx, 31, 0x124B60u);
    ctx->pc = 0x124B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B58u;
    // 0x124b5c: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124B58u, 0x124B60u)) {
        return;
    }
    ctx->pc = 0x124B60u;
label_124b60:
    // 0x124b60: 0x10000119  b           . + 4 + (0x119 << 2)
label_124b64:
    if (ctx->pc == 0x124B64u) {
        ctx->pc = 0x124B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B60u;
        // 0x124b64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B68u;
        goto label_124b68;
    }
    ctx->pc = 0x124B60u;
    {
        const bool branch_taken_0x124b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B60u;
        // 0x124b64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b60) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124B68u;
label_124b68:
    // 0x124b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124b6c:
    // 0x124b6c: 0xc065c58  jal         func_197160
label_124b70:
    if (ctx->pc == 0x124B70u) {
        ctx->pc = 0x124B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B6Cu;
        // 0x124b70: 0x24a5bf30  addiu       $a1, $a1, -0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B74u;
        goto label_124b74;
    }
    ctx->pc = 0x124B6Cu;
    SET_GPR_U32(ctx, 31, 0x124B74u);
    ctx->pc = 0x124B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B6Cu;
    // 0x124b70: 0x24a5bf30  addiu       $a1, $a1, -0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124B6Cu, 0x124B74u)) {
        return;
    }
    ctx->pc = 0x124B74u;
label_124b74:
    // 0x124b74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124b78:
    if (ctx->pc == 0x124B78u) {
        ctx->pc = 0x124B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B74u;
        // 0x124b78: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B7Cu;
        goto label_124b7c;
    }
    ctx->pc = 0x124B74u;
    {
        const bool branch_taken_0x124b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B74u;
        // 0x124b78: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b74) {
            ctx->pc = 0x124B8Cu;
            goto label_124b8c;
        }
    }
    ctx->pc = 0x124B7Cu;
label_124b7c:
    // 0x124b7c: 0x8e420ddc  lw          $v0, 0xDDC($s2)
    ctx->pc = 0x124b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3548)));
label_124b80:
    // 0x124b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_124b84:
    // 0x124b84: 0x1000010f  b           . + 4 + (0x10F << 2)
label_124b88:
    if (ctx->pc == 0x124B88u) {
        ctx->pc = 0x124B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B84u;
        // 0x124b88: 0xae420ddc  sw          $v0, 0xDDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B8Cu;
        goto label_124b8c;
    }
    ctx->pc = 0x124B84u;
    {
        const bool branch_taken_0x124b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B84u;
        // 0x124b88: 0xae420ddc  sw          $v0, 0xDDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b84) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124B8Cu;
label_124b8c:
    // 0x124b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124b90:
    // 0x124b90: 0xc065c58  jal         func_197160
label_124b94:
    if (ctx->pc == 0x124B94u) {
        ctx->pc = 0x124B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B90u;
        // 0x124b94: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124B98u;
        goto label_124b98;
    }
    ctx->pc = 0x124B90u;
    SET_GPR_U32(ctx, 31, 0x124B98u);
    ctx->pc = 0x124B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B90u;
    // 0x124b94: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124B90u, 0x124B98u)) {
        return;
    }
    ctx->pc = 0x124B98u;
label_124b98:
    // 0x124b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_124b9c:
    if (ctx->pc == 0x124B9Cu) {
        ctx->pc = 0x124B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B98u;
        // 0x124b9c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BA0u;
        goto label_124ba0;
    }
    ctx->pc = 0x124B98u;
    {
        const bool branch_taken_0x124b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B98u;
        // 0x124b9c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b98) {
            ctx->pc = 0x124BA8u;
            goto label_124ba8;
        }
    }
    ctx->pc = 0x124BA0u;
label_124ba0:
    // 0x124ba0: 0x10000108  b           . + 4 + (0x108 << 2)
label_124ba4:
    if (ctx->pc == 0x124BA4u) {
        ctx->pc = 0x124BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BA0u;
        // 0x124ba4: 0xae400ddc  sw          $zero, 0xDDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BA8u;
        goto label_124ba8;
    }
    ctx->pc = 0x124BA0u;
    {
        const bool branch_taken_0x124ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BA0u;
        // 0x124ba4: 0xae400ddc  sw          $zero, 0xDDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ba0) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124BA8u;
label_124ba8:
    // 0x124ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124bac:
    // 0x124bac: 0xc065c58  jal         func_197160
label_124bb0:
    if (ctx->pc == 0x124BB0u) {
        ctx->pc = 0x124BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BACu;
        // 0x124bb0: 0x24a5bf50  addiu       $a1, $a1, -0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BB4u;
        goto label_124bb4;
    }
    ctx->pc = 0x124BACu;
    SET_GPR_U32(ctx, 31, 0x124BB4u);
    ctx->pc = 0x124BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BACu;
    // 0x124bb0: 0x24a5bf50  addiu       $a1, $a1, -0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124BACu, 0x124BB4u)) {
        return;
    }
    ctx->pc = 0x124BB4u;
label_124bb4:
    // 0x124bb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_124bb8:
    if (ctx->pc == 0x124BB8u) {
        ctx->pc = 0x124BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BB4u;
        // 0x124bb8: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BBCu;
        goto label_124bbc;
    }
    ctx->pc = 0x124BB4u;
    {
        const bool branch_taken_0x124bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BB4u;
        // 0x124bb8: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bb4) {
            ctx->pc = 0x124BD0u;
            goto label_124bd0;
        }
    }
    ctx->pc = 0x124BBCu;
label_124bbc:
    // 0x124bbc: 0xc049cb8  jal         func_1272E0
label_124bc0:
    if (ctx->pc == 0x124BC0u) {
        ctx->pc = 0x124BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BBCu;
        // 0x124bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BC4u;
        goto label_124bc4;
    }
    ctx->pc = 0x124BBCu;
    SET_GPR_U32(ctx, 31, 0x124BC4u);
    ctx->pc = 0x124BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BBCu;
    // 0x124bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1272E0u, 0x124BBCu, 0x124BC4u)) {
        return;
    }
    ctx->pc = 0x124BC4u;
label_124bc4:
    // 0x124bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124bc8:
    // 0x124bc8: 0x100000fe  b           . + 4 + (0xFE << 2)
label_124bcc:
    if (ctx->pc == 0x124BCCu) {
        ctx->pc = 0x124BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BC8u;
        // 0x124bcc: 0xae4214b4  sw          $v0, 0x14B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BD0u;
        goto label_124bd0;
    }
    ctx->pc = 0x124BC8u;
    {
        const bool branch_taken_0x124bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BC8u;
        // 0x124bcc: 0xae4214b4  sw          $v0, 0x14B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bc8) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124BD0u;
label_124bd0:
    // 0x124bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124bd4:
    // 0x124bd4: 0xc065c58  jal         func_197160
label_124bd8:
    if (ctx->pc == 0x124BD8u) {
        ctx->pc = 0x124BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BD4u;
        // 0x124bd8: 0x24a5bf68  addiu       $a1, $a1, -0x4098 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BDCu;
        goto label_124bdc;
    }
    ctx->pc = 0x124BD4u;
    SET_GPR_U32(ctx, 31, 0x124BDCu);
    ctx->pc = 0x124BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BD4u;
    // 0x124bd8: 0x24a5bf68  addiu       $a1, $a1, -0x4098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124BD4u, 0x124BDCu)) {
        return;
    }
    ctx->pc = 0x124BDCu;
label_124bdc:
    // 0x124bdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_124be0:
    if (ctx->pc == 0x124BE0u) {
        ctx->pc = 0x124BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BDCu;
        // 0x124be0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BE4u;
        goto label_124be4;
    }
    ctx->pc = 0x124BDCu;
    {
        const bool branch_taken_0x124bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BDCu;
        // 0x124be0: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bdc) {
            ctx->pc = 0x124BECu;
            goto label_124bec;
        }
    }
    ctx->pc = 0x124BE4u;
label_124be4:
    // 0x124be4: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_124be8:
    if (ctx->pc == 0x124BE8u) {
        ctx->pc = 0x124BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BE4u;
        // 0x124be8: 0xae400cd8  sw          $zero, 0xCD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BECu;
        goto label_124bec;
    }
    ctx->pc = 0x124BE4u;
    {
        const bool branch_taken_0x124be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BE4u;
        // 0x124be8: 0xae400cd8  sw          $zero, 0xCD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124be4) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124BECu;
label_124bec:
    // 0x124bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124bf0:
    // 0x124bf0: 0xc065c58  jal         func_197160
label_124bf4:
    if (ctx->pc == 0x124BF4u) {
        ctx->pc = 0x124BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BF0u;
        // 0x124bf4: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124BF8u;
        goto label_124bf8;
    }
    ctx->pc = 0x124BF0u;
    SET_GPR_U32(ctx, 31, 0x124BF8u);
    ctx->pc = 0x124BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BF0u;
    // 0x124bf4: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124BF0u, 0x124BF8u)) {
        return;
    }
    ctx->pc = 0x124BF8u;
label_124bf8:
    // 0x124bf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_124bfc:
    if (ctx->pc == 0x124BFCu) {
        ctx->pc = 0x124BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BF8u;
        // 0x124bfc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C00u;
        goto label_124c00;
    }
    ctx->pc = 0x124BF8u;
    {
        const bool branch_taken_0x124bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BF8u;
        // 0x124bfc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bf8) {
            ctx->pc = 0x124C34u;
            goto label_124c34;
        }
    }
    ctx->pc = 0x124C00u;
label_124c00:
    // 0x124c00: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_124c04:
    // 0x124c04: 0x8c454610  lw          $a1, 0x4610($v0)
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17936)));
label_124c08:
    // 0x124c08: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x124c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_124c0c:
    // 0x124c0c: 0x10a300ee  beq         $a1, $v1, . + 4 + (0xEE << 2)
label_124c10:
    if (ctx->pc == 0x124C10u) {
        ctx->pc = 0x124C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C0Cu;
        // 0x124c10: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C14u;
        goto label_124c14;
    }
    ctx->pc = 0x124C0Cu;
    {
        const bool branch_taken_0x124c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x124C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C0Cu;
        // 0x124c10: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c0c) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124C14u;
label_124c14:
    // 0x124c14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x124c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_124c18:
    // 0x124c18: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_124c1c:
    if (ctx->pc == 0x124C1Cu) {
        ctx->pc = 0x124C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C18u;
        // 0x124c1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C20u;
        goto label_124c20;
    }
    ctx->pc = 0x124C18u;
    {
        const bool branch_taken_0x124c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C18u;
        // 0x124c1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c18) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124C20u;
label_124c20:
    // 0x124c20: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x124c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_124c24:
    // 0x124c24: 0xc07fd18  jal         func_1FF460
label_124c28:
    if (ctx->pc == 0x124C28u) {
        ctx->pc = 0x124C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C24u;
        // 0x124c28: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C2Cu;
        goto label_124c2c;
    }
    ctx->pc = 0x124C24u;
    SET_GPR_U32(ctx, 31, 0x124C2Cu);
    ctx->pc = 0x124C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C24u;
    // 0x124c28: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124C24u, 0x124C2Cu)) {
        return;
    }
    ctx->pc = 0x124C2Cu;
label_124c2c:
    // 0x124c2c: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_124c30:
    if (ctx->pc == 0x124C30u) {
        ctx->pc = 0x124C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C2Cu;
        // 0x124c30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C34u;
        goto label_124c34;
    }
    ctx->pc = 0x124C2Cu;
    {
        const bool branch_taken_0x124c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C2Cu;
        // 0x124c30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c2c) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124C34u;
label_124c34:
    // 0x124c34: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124c38:
    // 0x124c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124c3c:
    // 0x124c3c: 0xc065c58  jal         func_197160
label_124c40:
    if (ctx->pc == 0x124C40u) {
        ctx->pc = 0x124C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C3Cu;
        // 0x124c40: 0x24a5bf90  addiu       $a1, $a1, -0x4070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C44u;
        goto label_124c44;
    }
    ctx->pc = 0x124C3Cu;
    SET_GPR_U32(ctx, 31, 0x124C44u);
    ctx->pc = 0x124C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C3Cu;
    // 0x124c40: 0x24a5bf90  addiu       $a1, $a1, -0x4070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124C3Cu, 0x124C44u)) {
        return;
    }
    ctx->pc = 0x124C44u;
label_124c44:
    // 0x124c44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_124c48:
    if (ctx->pc == 0x124C48u) {
        ctx->pc = 0x124C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C44u;
        // 0x124c48: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C4Cu;
        goto label_124c4c;
    }
    ctx->pc = 0x124C44u;
    {
        const bool branch_taken_0x124c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C44u;
        // 0x124c48: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c44) {
            ctx->pc = 0x124C60u;
            goto label_124c60;
        }
    }
    ctx->pc = 0x124C4Cu;
label_124c4c:
    // 0x124c4c: 0x8c444618  lw          $a0, 0x4618($v0)
    ctx->pc = 0x124c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
label_124c50:
    // 0x124c50: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x124c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_124c54:
    // 0x124c54: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x124c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_124c58:
    // 0x124c58: 0x10000010  b           . + 4 + (0x10 << 2)
label_124c5c:
    if (ctx->pc == 0x124C5Cu) {
        ctx->pc = 0x124C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C58u;
        // 0x124c5c: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C60u;
        goto label_124c60;
    }
    ctx->pc = 0x124C58u;
    {
        const bool branch_taken_0x124c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C58u;
        // 0x124c5c: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c58) {
            ctx->pc = 0x124C9Cu;
            goto label_124c9c;
        }
    }
    ctx->pc = 0x124C60u;
label_124c60:
    // 0x124c60: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124c64:
    // 0x124c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124c68:
    // 0x124c68: 0xc065c58  jal         func_197160
label_124c6c:
    if (ctx->pc == 0x124C6Cu) {
        ctx->pc = 0x124C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C68u;
        // 0x124c6c: 0x24a5bfa8  addiu       $a1, $a1, -0x4058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C70u;
        goto label_124c70;
    }
    ctx->pc = 0x124C68u;
    SET_GPR_U32(ctx, 31, 0x124C70u);
    ctx->pc = 0x124C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C68u;
    // 0x124c6c: 0x24a5bfa8  addiu       $a1, $a1, -0x4058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124C68u, 0x124C70u)) {
        return;
    }
    ctx->pc = 0x124C70u;
label_124c70:
    // 0x124c70: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_124c74:
    if (ctx->pc == 0x124C74u) {
        ctx->pc = 0x124C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C70u;
        // 0x124c74: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C78u;
        goto label_124c78;
    }
    ctx->pc = 0x124C70u;
    {
        const bool branch_taken_0x124c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C70u;
        // 0x124c74: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c70) {
            ctx->pc = 0x124CCCu;
            goto label_124ccc;
        }
    }
    ctx->pc = 0x124C78u;
label_124c78:
    // 0x124c78: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x124c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_124c7c:
    // 0x124c7c: 0x846401e0  lh          $a0, 0x1E0($v1)
    ctx->pc = 0x124c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 480)));
label_124c80:
    // 0x124c80: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x124c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
label_124c84:
    // 0x124c84: 0x40f809  jalr        $v0
label_124c88:
    if (ctx->pc == 0x124C88u) {
        ctx->pc = 0x124C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C84u;
        // 0x124c88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C8Cu;
        goto label_124c8c;
    }
    ctx->pc = 0x124C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124C8Cu);
        ctx->pc = 0x124C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C84u;
        // 0x124c88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124C84u, 0x124C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124C8Cu;
label_124c8c:
    // 0x124c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124c90:
    // 0x124c90: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x124c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_124c94:
    // 0x124c94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_124c98:
    // 0x124c98: 0x8c444500  lw          $a0, 0x4500($v0)
    ctx->pc = 0x124c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17664)));
label_124c9c:
    // 0x124c9c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x124c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_124ca0:
    // 0x124ca0: 0x108200c9  beq         $a0, $v0, . + 4 + (0xC9 << 2)
label_124ca4:
    if (ctx->pc == 0x124CA4u) {
        ctx->pc = 0x124CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CA0u;
        // 0x124ca4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CA8u;
        goto label_124ca8;
    }
    ctx->pc = 0x124CA0u;
    {
        const bool branch_taken_0x124ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x124CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CA0u;
        // 0x124ca4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ca0) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124CA8u;
label_124ca8:
    // 0x124ca8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x124ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_124cac:
    // 0x124cac: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
label_124cb0:
    if (ctx->pc == 0x124CB0u) {
        ctx->pc = 0x124CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CACu;
        // 0x124cb0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CB4u;
        goto label_124cb4;
    }
    ctx->pc = 0x124CACu;
    {
        const bool branch_taken_0x124cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CACu;
        // 0x124cb0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cac) {
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124CB4u;
label_124cb4:
    // 0x124cb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x124cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_124cb8:
    // 0x124cb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x124cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_124cbc:
    // 0x124cbc: 0xc07fd18  jal         func_1FF460
label_124cc0:
    if (ctx->pc == 0x124CC0u) {
        ctx->pc = 0x124CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CBCu;
        // 0x124cc0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CC4u;
        goto label_124cc4;
    }
    ctx->pc = 0x124CBCu;
    SET_GPR_U32(ctx, 31, 0x124CC4u);
    ctx->pc = 0x124CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CBCu;
    // 0x124cc0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124CBCu, 0x124CC4u)) {
        return;
    }
    ctx->pc = 0x124CC4u;
label_124cc4:
    // 0x124cc4: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_124cc8:
    if (ctx->pc == 0x124CC8u) {
        ctx->pc = 0x124CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CC4u;
        // 0x124cc8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CCCu;
        goto label_124ccc;
    }
    ctx->pc = 0x124CC4u;
    {
        const bool branch_taken_0x124cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CC4u;
        // 0x124cc8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cc4) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124CCCu;
label_124ccc:
    // 0x124ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124cd0:
    // 0x124cd0: 0xc065c58  jal         func_197160
label_124cd4:
    if (ctx->pc == 0x124CD4u) {
        ctx->pc = 0x124CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CD0u;
        // 0x124cd4: 0x24a5bfb8  addiu       $a1, $a1, -0x4048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CD8u;
        goto label_124cd8;
    }
    ctx->pc = 0x124CD0u;
    SET_GPR_U32(ctx, 31, 0x124CD8u);
    ctx->pc = 0x124CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CD0u;
    // 0x124cd4: 0x24a5bfb8  addiu       $a1, $a1, -0x4048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124CD0u, 0x124CD8u)) {
        return;
    }
    ctx->pc = 0x124CD8u;
label_124cd8:
    // 0x124cd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_124cdc:
    if (ctx->pc == 0x124CDCu) {
        ctx->pc = 0x124CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CD8u;
        // 0x124cdc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CE0u;
        goto label_124ce0;
    }
    ctx->pc = 0x124CD8u;
    {
        const bool branch_taken_0x124cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CD8u;
        // 0x124cdc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cd8) {
            ctx->pc = 0x124CECu;
            goto label_124cec;
        }
    }
    ctx->pc = 0x124CE0u;
label_124ce0:
    // 0x124ce0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_124ce4:
    // 0x124ce4: 0x10000009  b           . + 4 + (0x9 << 2)
label_124ce8:
    if (ctx->pc == 0x124CE8u) {
        ctx->pc = 0x124CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CE4u;
        // 0x124ce8: 0x8c454508  lw          $a1, 0x4508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CECu;
        goto label_124cec;
    }
    ctx->pc = 0x124CE4u;
    {
        const bool branch_taken_0x124ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CE4u;
        // 0x124ce8: 0x8c454508  lw          $a1, 0x4508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ce4) {
            ctx->pc = 0x124D0Cu;
            goto label_124d0c;
        }
    }
    ctx->pc = 0x124CECu;
label_124cec:
    // 0x124cec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124cf0:
    // 0x124cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124cf4:
    // 0x124cf4: 0xc065c58  jal         func_197160
label_124cf8:
    if (ctx->pc == 0x124CF8u) {
        ctx->pc = 0x124CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CF4u;
        // 0x124cf8: 0x24a5bfc8  addiu       $a1, $a1, -0x4038 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CFCu;
        goto label_124cfc;
    }
    ctx->pc = 0x124CF4u;
    SET_GPR_U32(ctx, 31, 0x124CFCu);
    ctx->pc = 0x124CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CF4u;
    // 0x124cf8: 0x24a5bfc8  addiu       $a1, $a1, -0x4038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124CF4u, 0x124CFCu)) {
        return;
    }
    ctx->pc = 0x124CFCu;
label_124cfc:
    // 0x124cfc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_124d00:
    if (ctx->pc == 0x124D00u) {
        ctx->pc = 0x124D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CFCu;
        // 0x124d00: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D04u;
        goto label_124d04;
    }
    ctx->pc = 0x124CFCu;
    {
        const bool branch_taken_0x124cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CFCu;
        // 0x124d00: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cfc) {
            ctx->pc = 0x124D38u;
            goto label_124d38;
        }
    }
    ctx->pc = 0x124D04u;
label_124d04:
    // 0x124d04: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_124d08:
    // 0x124d08: 0x8c454608  lw          $a1, 0x4608($v0)
    ctx->pc = 0x124d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17928)));
label_124d0c:
    // 0x124d0c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x124d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_124d10:
    // 0x124d10: 0x10a300ad  beq         $a1, $v1, . + 4 + (0xAD << 2)
label_124d14:
    if (ctx->pc == 0x124D14u) {
        ctx->pc = 0x124D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D10u;
        // 0x124d14: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D18u;
        goto label_124d18;
    }
    ctx->pc = 0x124D10u;
    {
        const bool branch_taken_0x124d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x124D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D10u;
        // 0x124d14: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d10) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124D18u;
label_124d18:
    // 0x124d18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_124d1c:
    // 0x124d1c: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_124d20:
    if (ctx->pc == 0x124D20u) {
        ctx->pc = 0x124D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D1Cu;
        // 0x124d20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D24u;
        goto label_124d24;
    }
    ctx->pc = 0x124D1Cu;
    {
        const bool branch_taken_0x124d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D1Cu;
        // 0x124d20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d1c) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124D24u;
label_124d24:
    // 0x124d24: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x124d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_124d28:
    // 0x124d28: 0xc07fd18  jal         func_1FF460
label_124d2c:
    if (ctx->pc == 0x124D2Cu) {
        ctx->pc = 0x124D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D28u;
        // 0x124d2c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D30u;
        goto label_124d30;
    }
    ctx->pc = 0x124D28u;
    SET_GPR_U32(ctx, 31, 0x124D30u);
    ctx->pc = 0x124D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D28u;
    // 0x124d2c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124D28u, 0x124D30u)) {
        return;
    }
    ctx->pc = 0x124D30u;
label_124d30:
    // 0x124d30: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_124d34:
    if (ctx->pc == 0x124D34u) {
        ctx->pc = 0x124D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D30u;
        // 0x124d34: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D38u;
        goto label_124d38;
    }
    ctx->pc = 0x124D30u;
    {
        const bool branch_taken_0x124d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D30u;
        // 0x124d34: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d30) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124D38u;
label_124d38:
    // 0x124d38: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124d3c:
    // 0x124d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124d40:
    // 0x124d40: 0xc065c58  jal         func_197160
label_124d44:
    if (ctx->pc == 0x124D44u) {
        ctx->pc = 0x124D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D40u;
        // 0x124d44: 0x24a5bfd0  addiu       $a1, $a1, -0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D48u;
        goto label_124d48;
    }
    ctx->pc = 0x124D40u;
    SET_GPR_U32(ctx, 31, 0x124D48u);
    ctx->pc = 0x124D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D40u;
    // 0x124d44: 0x24a5bfd0  addiu       $a1, $a1, -0x4030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124D40u, 0x124D48u)) {
        return;
    }
    ctx->pc = 0x124D48u;
label_124d48:
    // 0x124d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_124d4c:
    if (ctx->pc == 0x124D4Cu) {
        ctx->pc = 0x124D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D48u;
        // 0x124d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D50u;
        goto label_124d50;
    }
    ctx->pc = 0x124D48u;
    {
        const bool branch_taken_0x124d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D48u;
        // 0x124d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d48) {
            ctx->pc = 0x124D58u;
            goto label_124d58;
        }
    }
    ctx->pc = 0x124D50u;
label_124d50:
    // 0x124d50: 0x1000009c  b           . + 4 + (0x9C << 2)
label_124d54:
    if (ctx->pc == 0x124D54u) {
        ctx->pc = 0x124D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D50u;
        // 0x124d54: 0xae42029c  sw          $v0, 0x29C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D58u;
        goto label_124d58;
    }
    ctx->pc = 0x124D50u;
    {
        const bool branch_taken_0x124d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D50u;
        // 0x124d54: 0xae42029c  sw          $v0, 0x29C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d50) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124D58u;
label_124d58:
    // 0x124d58: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124d5c:
    // 0x124d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124d60:
    // 0x124d60: 0xc065c58  jal         func_197160
label_124d64:
    if (ctx->pc == 0x124D64u) {
        ctx->pc = 0x124D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D60u;
        // 0x124d64: 0x24a5bfe0  addiu       $a1, $a1, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D68u;
        goto label_124d68;
    }
    ctx->pc = 0x124D60u;
    SET_GPR_U32(ctx, 31, 0x124D68u);
    ctx->pc = 0x124D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D60u;
    // 0x124d64: 0x24a5bfe0  addiu       $a1, $a1, -0x4020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124D60u, 0x124D68u)) {
        return;
    }
    ctx->pc = 0x124D68u;
label_124d68:
    // 0x124d68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124d6c:
    if (ctx->pc == 0x124D6Cu) {
        ctx->pc = 0x124D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D68u;
        // 0x124d6c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D70u;
        goto label_124d70;
    }
    ctx->pc = 0x124D68u;
    {
        const bool branch_taken_0x124d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D68u;
        // 0x124d6c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d68) {
            ctx->pc = 0x124D80u;
            goto label_124d80;
        }
    }
    ctx->pc = 0x124D70u;
label_124d70:
    // 0x124d70: 0xc040db6  jal         func_1036D8
label_124d74:
    if (ctx->pc == 0x124D74u) {
        ctx->pc = 0x124D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D70u;
        // 0x124d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D78u;
        goto label_124d78;
    }
    ctx->pc = 0x124D70u;
    SET_GPR_U32(ctx, 31, 0x124D78u);
    ctx->pc = 0x124D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D70u;
    // 0x124d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1036D8u, 0x124D70u, 0x124D78u)) {
        return;
    }
    ctx->pc = 0x124D78u;
label_124d78:
    // 0x124d78: 0x10000093  b           . + 4 + (0x93 << 2)
label_124d7c:
    if (ctx->pc == 0x124D7Cu) {
        ctx->pc = 0x124D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D78u;
        // 0x124d7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D80u;
        goto label_124d80;
    }
    ctx->pc = 0x124D78u;
    {
        const bool branch_taken_0x124d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D78u;
        // 0x124d7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d78) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124D80u;
label_124d80:
    // 0x124d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124d84:
    // 0x124d84: 0xc065c58  jal         func_197160
label_124d88:
    if (ctx->pc == 0x124D88u) {
        ctx->pc = 0x124D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D84u;
        // 0x124d88: 0x24a5bff0  addiu       $a1, $a1, -0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D8Cu;
        goto label_124d8c;
    }
    ctx->pc = 0x124D84u;
    SET_GPR_U32(ctx, 31, 0x124D8Cu);
    ctx->pc = 0x124D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D84u;
    // 0x124d88: 0x24a5bff0  addiu       $a1, $a1, -0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124D84u, 0x124D8Cu)) {
        return;
    }
    ctx->pc = 0x124D8Cu;
label_124d8c:
    // 0x124d8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124d90:
    if (ctx->pc == 0x124D90u) {
        ctx->pc = 0x124D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D8Cu;
        // 0x124d90: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D94u;
        goto label_124d94;
    }
    ctx->pc = 0x124D8Cu;
    {
        const bool branch_taken_0x124d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D8Cu;
        // 0x124d90: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d8c) {
            ctx->pc = 0x124DA4u;
            goto label_124da4;
        }
    }
    ctx->pc = 0x124D94u;
label_124d94:
    // 0x124d94: 0xc040dd4  jal         func_103750
label_124d98:
    if (ctx->pc == 0x124D98u) {
        ctx->pc = 0x124D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D94u;
        // 0x124d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D9Cu;
        goto label_124d9c;
    }
    ctx->pc = 0x124D94u;
    SET_GPR_U32(ctx, 31, 0x124D9Cu);
    ctx->pc = 0x124D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D94u;
    // 0x124d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103750u, 0x124D94u, 0x124D9Cu)) {
        return;
    }
    ctx->pc = 0x124D9Cu;
label_124d9c:
    // 0x124d9c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_124da0:
    if (ctx->pc == 0x124DA0u) {
        ctx->pc = 0x124DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D9Cu;
        // 0x124da0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DA4u;
        goto label_124da4;
    }
    ctx->pc = 0x124D9Cu;
    {
        const bool branch_taken_0x124d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D9Cu;
        // 0x124da0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d9c) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124DA4u;
label_124da4:
    // 0x124da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124da8:
    // 0x124da8: 0xc065c58  jal         func_197160
label_124dac:
    if (ctx->pc == 0x124DACu) {
        ctx->pc = 0x124DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA8u;
        // 0x124dac: 0x24a5bff8  addiu       $a1, $a1, -0x4008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DB0u;
        goto label_124db0;
    }
    ctx->pc = 0x124DA8u;
    SET_GPR_U32(ctx, 31, 0x124DB0u);
    ctx->pc = 0x124DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DA8u;
    // 0x124dac: 0x24a5bff8  addiu       $a1, $a1, -0x4008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124DA8u, 0x124DB0u)) {
        return;
    }
    ctx->pc = 0x124DB0u;
label_124db0:
    // 0x124db0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_124db4:
    if (ctx->pc == 0x124DB4u) {
        ctx->pc = 0x124DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DB0u;
        // 0x124db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DB8u;
        goto label_124db8;
    }
    ctx->pc = 0x124DB0u;
    {
        const bool branch_taken_0x124db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DB0u;
        // 0x124db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124db0) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124DB8u;
label_124db8:
    // 0x124db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x124db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124dbc:
    // 0x124dbc: 0xae420f68  sw          $v0, 0xF68($s2)
    ctx->pc = 0x124dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3944), GPR_U32(ctx, 2));
label_124dc0:
    // 0x124dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124dc4:
    // 0x124dc4: 0xc04eef0  jal         func_13BBC0
label_124dc8:
    if (ctx->pc == 0x124DC8u) {
        ctx->pc = 0x124DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DC4u;
        // 0x124dc8: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DCCu;
        goto label_124dcc;
    }
    ctx->pc = 0x124DC4u;
    SET_GPR_U32(ctx, 31, 0x124DCCu);
    ctx->pc = 0x124DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DC4u;
    // 0x124dc8: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x124DC4u, 0x124DCCu)) {
        return;
    }
    ctx->pc = 0x124DCCu;
label_124dcc:
    // 0x124dcc: 0x1000007e  b           . + 4 + (0x7E << 2)
label_124dd0:
    if (ctx->pc == 0x124DD0u) {
        ctx->pc = 0x124DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DCCu;
        // 0x124dd0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DD4u;
        goto label_124dd4;
    }
    ctx->pc = 0x124DCCu;
    {
        const bool branch_taken_0x124dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DCCu;
        // 0x124dd0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dcc) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124DD4u;
label_124dd4:
    // 0x124dd4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124dd8:
    // 0x124dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ddc:
    // 0x124ddc: 0xc065c58  jal         func_197160
label_124de0:
    if (ctx->pc == 0x124DE0u) {
        ctx->pc = 0x124DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DDCu;
        // 0x124de0: 0x24a5c008  addiu       $a1, $a1, -0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DE4u;
        goto label_124de4;
    }
    ctx->pc = 0x124DDCu;
    SET_GPR_U32(ctx, 31, 0x124DE4u);
    ctx->pc = 0x124DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DDCu;
    // 0x124de0: 0x24a5c008  addiu       $a1, $a1, -0x3FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124DDCu, 0x124DE4u)) {
        return;
    }
    ctx->pc = 0x124DE4u;
label_124de4:
    // 0x124de4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_124de8:
    if (ctx->pc == 0x124DE8u) {
        ctx->pc = 0x124DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DE4u;
        // 0x124de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DECu;
        goto label_124dec;
    }
    ctx->pc = 0x124DE4u;
    {
        const bool branch_taken_0x124de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DE4u;
        // 0x124de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124de4) {
            ctx->pc = 0x124E00u;
            goto label_124e00;
        }
    }
    ctx->pc = 0x124DECu;
label_124dec:
    // 0x124dec: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x124decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_124df0:
    // 0x124df0: 0xc04eef0  jal         func_13BBC0
label_124df4:
    if (ctx->pc == 0x124DF4u) {
        ctx->pc = 0x124DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DF0u;
        // 0x124df4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DF8u;
        goto label_124df8;
    }
    ctx->pc = 0x124DF0u;
    SET_GPR_U32(ctx, 31, 0x124DF8u);
    ctx->pc = 0x124DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DF0u;
    // 0x124df4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x124DF0u, 0x124DF8u)) {
        return;
    }
    ctx->pc = 0x124DF8u;
label_124df8:
    // 0x124df8: 0x10000072  b           . + 4 + (0x72 << 2)
label_124dfc:
    if (ctx->pc == 0x124DFCu) {
        ctx->pc = 0x124DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DF8u;
        // 0x124dfc: 0xae400f68  sw          $zero, 0xF68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E00u;
        goto label_124e00;
    }
    ctx->pc = 0x124DF8u;
    {
        const bool branch_taken_0x124df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DF8u;
        // 0x124dfc: 0xae400f68  sw          $zero, 0xF68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124df8) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124E00u;
label_124e00:
    // 0x124e00: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124e04:
    // 0x124e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124e08:
    // 0x124e08: 0xc065c58  jal         func_197160
label_124e0c:
    if (ctx->pc == 0x124E0Cu) {
        ctx->pc = 0x124E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E08u;
        // 0x124e0c: 0x24a5c018  addiu       $a1, $a1, -0x3FE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E10u;
        goto label_124e10;
    }
    ctx->pc = 0x124E08u;
    SET_GPR_U32(ctx, 31, 0x124E10u);
    ctx->pc = 0x124E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E08u;
    // 0x124e0c: 0x24a5c018  addiu       $a1, $a1, -0x3FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x124E08u, 0x124E10u)) {
        return;
    }
    ctx->pc = 0x124E10u;
label_124e10:
    // 0x124e10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_124e14:
    if (ctx->pc == 0x124E14u) {
        ctx->pc = 0x124E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E10u;
        // 0x124e14: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E18u;
        goto label_124e18;
    }
    ctx->pc = 0x124E10u;
    {
        const bool branch_taken_0x124e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E10u;
        // 0x124e14: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e10) {
            ctx->pc = 0x124E20u;
            goto label_124e20;
        }
    }
    ctx->pc = 0x124E18u;
label_124e18:
    // 0x124e18: 0x1000006a  b           . + 4 + (0x6A << 2)
label_124e1c:
    if (ctx->pc == 0x124E1Cu) {
        ctx->pc = 0x124E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E18u;
        // 0x124e1c: 0xe6550d14  swc1        $f21, 0xD14($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3348), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E20u;
        goto label_124e20;
    }
    ctx->pc = 0x124E18u;
    {
        const bool branch_taken_0x124e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E18u;
        // 0x124e1c: 0xe6550d14  swc1        $f21, 0xD14($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e18) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124E20u;
label_124e20:
    // 0x124e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124e24:
    // 0x124e24: 0x24a5c028  addiu       $a1, $a1, -0x3FD8
    ctx->pc = 0x124e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950952));
label_124e28:
    // 0x124e28: 0xc065c7c  jal         func_1971F0
label_124e2c:
    if (ctx->pc == 0x124E2Cu) {
        ctx->pc = 0x124E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E28u;
        // 0x124e2c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E30u;
        goto label_124e30;
    }
    ctx->pc = 0x124E28u;
    SET_GPR_U32(ctx, 31, 0x124E30u);
    ctx->pc = 0x124E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E28u;
    // 0x124e2c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x124E28u, 0x124E30u)) {
        return;
    }
    ctx->pc = 0x124E30u;
label_124e30:
    // 0x124e30: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_124e34:
    if (ctx->pc == 0x124E34u) {
        ctx->pc = 0x124E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E30u;
        // 0x124e34: 0x26040009  addiu       $a0, $s0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E38u;
        goto label_124e38;
    }
    ctx->pc = 0x124E30u;
    {
        const bool branch_taken_0x124e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E30u;
        // 0x124e34: 0x26040009  addiu       $a0, $s0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e30) {
            ctx->pc = 0x124EECu;
            goto label_124eec;
        }
    }
    ctx->pc = 0x124E38u;
label_124e38:
    // 0x124e38: 0xc0654c4  jal         func_195310
label_124e3c:
    if (ctx->pc == 0x124E3Cu) {
        ctx->pc = 0x124E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E38u;
        // 0x124e3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E40u;
        goto label_124e40;
    }
    ctx->pc = 0x124E38u;
    SET_GPR_U32(ctx, 31, 0x124E40u);
    ctx->pc = 0x124E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E38u;
    // 0x124e3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x195310u, 0x124E38u, 0x124E40u)) {
        return;
    }
    ctx->pc = 0x124E40u;
label_124e40:
    // 0x124e40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124e44:
    // 0x124e44: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x124e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_124e48:
    // 0x124e48: 0xc0654b4  jal         func_1952D0
label_124e4c:
    if (ctx->pc == 0x124E4Cu) {
        ctx->pc = 0x124E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E48u;
        // 0x124e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E50u;
        goto label_124e50;
    }
    ctx->pc = 0x124E48u;
    SET_GPR_U32(ctx, 31, 0x124E50u);
    ctx->pc = 0x124E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E48u;
    // 0x124e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1952D0u, 0x124E48u, 0x124E50u)) {
        return;
    }
    ctx->pc = 0x124E50u;
label_124e50:
    // 0x124e50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124e54:
    // 0x124e54: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_124e58:
    if (ctx->pc == 0x124E58u) {
        ctx->pc = 0x124E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E54u;
        // 0x124e58: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E5Cu;
        goto label_124e5c;
    }
    ctx->pc = 0x124E54u;
    {
        const bool branch_taken_0x124e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x124e54) {
            ctx->pc = 0x124E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124E54u;
            // 0x124e58: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124E88u;
            goto label_124e88;
        }
    }
    ctx->pc = 0x124E5Cu;
label_124e5c:
    // 0x124e5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124e60:
    // 0x124e60: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_124e64:
    if (ctx->pc == 0x124E64u) {
        ctx->pc = 0x124E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E60u;
        // 0x124e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E68u;
        goto label_124e68;
    }
    ctx->pc = 0x124E60u;
    {
        const bool branch_taken_0x124e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E60u;
        // 0x124e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e60) {
            ctx->pc = 0x124E74u;
            goto label_124e74;
        }
    }
    ctx->pc = 0x124E68u;
label_124e68:
    // 0x124e68: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_124e6c:
    // 0x124e6c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x124e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_124e70:
    // 0x124e70: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124e74:
    // 0x124e74: 0xc0808b8  jal         func_2022E0
label_124e78:
    if (ctx->pc == 0x124E78u) {
        ctx->pc = 0x124E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E74u;
        // 0x124e78: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E7Cu;
        goto label_124e7c;
    }
    ctx->pc = 0x124E74u;
    SET_GPR_U32(ctx, 31, 0x124E7Cu);
    ctx->pc = 0x124E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E74u;
    // 0x124e78: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x124E74u, 0x124E7Cu)) {
        return;
    }
    ctx->pc = 0x124E7Cu;
label_124e7c:
    // 0x124e7c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_124e80:
    if (ctx->pc == 0x124E80u) {
        ctx->pc = 0x124E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E7Cu;
        // 0x124e80: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E84u;
        goto label_124e84;
    }
    ctx->pc = 0x124E7Cu;
    {
        const bool branch_taken_0x124e7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x124e7c) {
            ctx->pc = 0x124E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124E7Cu;
            // 0x124e80: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124e60;
        }
    }
    ctx->pc = 0x124E84u;
label_124e84:
    // 0x124e84: 0x8e440eac  lw          $a0, 0xEAC($s2)
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
label_124e88:
    // 0x124e88: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
label_124e8c:
    if (ctx->pc == 0x124E8Cu) {
        ctx->pc = 0x124E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E88u;
        // 0x124e8c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E90u;
        goto label_124e90;
    }
    ctx->pc = 0x124E88u;
    {
        const bool branch_taken_0x124e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E88u;
        // 0x124e8c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e88) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124E90u;
label_124e90:
    // 0x124e90: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_124e94:
    // 0x124e94: 0x5080004d  beql        $a0, $zero, . + 4 + (0x4D << 2)
label_124e98:
    if (ctx->pc == 0x124E98u) {
        ctx->pc = 0x124E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E94u;
        // 0x124e98: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E9Cu;
        goto label_124e9c;
    }
    ctx->pc = 0x124E94u;
    {
        const bool branch_taken_0x124e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124e94) {
            ctx->pc = 0x124E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124E94u;
            // 0x124e98: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124E9Cu;
label_124e9c:
    // 0x124e9c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_124ea0:
    // 0x124ea0: 0x5082004a  beql        $a0, $v0, . + 4 + (0x4A << 2)
label_124ea4:
    if (ctx->pc == 0x124EA4u) {
        ctx->pc = 0x124EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EA0u;
        // 0x124ea4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EA8u;
        goto label_124ea8;
    }
    ctx->pc = 0x124EA0u;
    {
        const bool branch_taken_0x124ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x124ea0) {
            ctx->pc = 0x124EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124EA0u;
            // 0x124ea4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124EA8u;
label_124ea8:
    // 0x124ea8: 0xc0654b4  jal         func_1952D0
label_124eac:
    if (ctx->pc == 0x124EACu) {
        ctx->pc = 0x124EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EA8u;
        // 0x124eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EB0u;
        goto label_124eb0;
    }
    ctx->pc = 0x124EA8u;
    SET_GPR_U32(ctx, 31, 0x124EB0u);
    ctx->pc = 0x124EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EA8u;
    // 0x124eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1952D0u, 0x124EA8u, 0x124EB0u)) {
        return;
    }
    ctx->pc = 0x124EB0u;
label_124eb0:
    // 0x124eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124eb4:
    // 0x124eb4: 0x52000044  beql        $s0, $zero, . + 4 + (0x44 << 2)
label_124eb8:
    if (ctx->pc == 0x124EB8u) {
        ctx->pc = 0x124EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EB4u;
        // 0x124eb8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EBCu;
        goto label_124ebc;
    }
    ctx->pc = 0x124EB4u;
    {
        const bool branch_taken_0x124eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x124eb4) {
            ctx->pc = 0x124EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124EB4u;
            // 0x124eb8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124EBCu;
label_124ebc:
    // 0x124ebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124ec0:
    // 0x124ec0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_124ec4:
    if (ctx->pc == 0x124EC4u) {
        ctx->pc = 0x124EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EC0u;
        // 0x124ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EC8u;
        goto label_124ec8;
    }
    ctx->pc = 0x124EC0u;
    {
        const bool branch_taken_0x124ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EC0u;
        // 0x124ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ec0) {
            ctx->pc = 0x124ED4u;
            goto label_124ed4;
        }
    }
    ctx->pc = 0x124EC8u;
label_124ec8:
    // 0x124ec8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_124ecc:
    // 0x124ecc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x124eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_124ed0:
    // 0x124ed0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124ed4:
    // 0x124ed4: 0xc0808b8  jal         func_2022E0
label_124ed8:
    if (ctx->pc == 0x124ED8u) {
        ctx->pc = 0x124ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ED4u;
        // 0x124ed8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EDCu;
        goto label_124edc;
    }
    ctx->pc = 0x124ED4u;
    SET_GPR_U32(ctx, 31, 0x124EDCu);
    ctx->pc = 0x124ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124ED4u;
    // 0x124ed8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x124ED4u, 0x124EDCu)) {
        return;
    }
    ctx->pc = 0x124EDCu;
label_124edc:
    // 0x124edc: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_124ee0:
    if (ctx->pc == 0x124EE0u) {
        ctx->pc = 0x124EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EDCu;
        // 0x124ee0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EE4u;
        goto label_124ee4;
    }
    ctx->pc = 0x124EDCu;
    {
        const bool branch_taken_0x124edc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x124edc) {
            ctx->pc = 0x124EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124EDCu;
            // 0x124ee0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124ec0;
        }
    }
    ctx->pc = 0x124EE4u;
label_124ee4:
    // 0x124ee4: 0x10000038  b           . + 4 + (0x38 << 2)
label_124ee8:
    if (ctx->pc == 0x124EE8u) {
        ctx->pc = 0x124EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EE4u;
        // 0x124ee8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EECu;
        goto label_124eec;
    }
    ctx->pc = 0x124EE4u;
    {
        const bool branch_taken_0x124ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EE4u;
        // 0x124ee8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ee4) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124EECu;
label_124eec:
    // 0x124eec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x124eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_124ef0:
    // 0x124ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ef4:
    // 0x124ef4: 0x24a5c038  addiu       $a1, $a1, -0x3FC8
    ctx->pc = 0x124ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950968));
label_124ef8:
    // 0x124ef8: 0xc065c7c  jal         func_1971F0
label_124efc:
    if (ctx->pc == 0x124EFCu) {
        ctx->pc = 0x124EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF8u;
        // 0x124efc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F00u;
        goto label_124f00;
    }
    ctx->pc = 0x124EF8u;
    SET_GPR_U32(ctx, 31, 0x124F00u);
    ctx->pc = 0x124EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EF8u;
    // 0x124efc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x124EF8u, 0x124F00u)) {
        return;
    }
    ctx->pc = 0x124F00u;
label_124f00:
    // 0x124f00: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_124f04:
    if (ctx->pc == 0x124F04u) {
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F00u;
        // 0x124f04: 0x2604000a  addiu       $a0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F08u;
        goto label_124f08;
    }
    ctx->pc = 0x124F00u;
    {
        const bool branch_taken_0x124f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F00u;
        // 0x124f04: 0x2604000a  addiu       $a0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f00) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124F08u;
label_124f08:
    // 0x124f08: 0xc0654c4  jal         func_195310
label_124f0c:
    if (ctx->pc == 0x124F0Cu) {
        ctx->pc = 0x124F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F08u;
        // 0x124f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F10u;
        goto label_124f10;
    }
    ctx->pc = 0x124F08u;
    SET_GPR_U32(ctx, 31, 0x124F10u);
    ctx->pc = 0x124F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F08u;
    // 0x124f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x195310u, 0x124F08u, 0x124F10u)) {
        return;
    }
    ctx->pc = 0x124F10u;
label_124f10:
    // 0x124f10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x124f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124f14:
    // 0x124f14: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_124f18:
    // 0x124f18: 0xc0654b4  jal         func_1952D0
label_124f1c:
    if (ctx->pc == 0x124F1Cu) {
        ctx->pc = 0x124F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F18u;
        // 0x124f1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F20u;
        goto label_124f20;
    }
    ctx->pc = 0x124F18u;
    SET_GPR_U32(ctx, 31, 0x124F20u);
    ctx->pc = 0x124F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F18u;
    // 0x124f1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1952D0u, 0x124F18u, 0x124F20u)) {
        return;
    }
    ctx->pc = 0x124F20u;
label_124f20:
    // 0x124f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124f24:
    // 0x124f24: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_124f28:
    if (ctx->pc == 0x124F28u) {
        ctx->pc = 0x124F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F24u;
        // 0x124f28: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F2Cu;
        goto label_124f2c;
    }
    ctx->pc = 0x124F24u;
    {
        const bool branch_taken_0x124f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f24) {
            ctx->pc = 0x124F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124F24u;
            // 0x124f28: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124F60u;
            goto label_124f60;
        }
    }
    ctx->pc = 0x124F2Cu;
label_124f2c:
    // 0x124f2c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x124f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_124f30:
    // 0x124f30: 0x3631fffb  ori         $s1, $s1, 0xFFFB
    ctx->pc = 0x124f30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65531);
label_124f34:
    // 0x124f34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124f38:
    // 0x124f38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_124f3c:
    if (ctx->pc == 0x124F3Cu) {
        ctx->pc = 0x124F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F38u;
        // 0x124f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F40u;
        goto label_124f40;
    }
    ctx->pc = 0x124F38u;
    {
        const bool branch_taken_0x124f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F38u;
        // 0x124f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f38) {
            ctx->pc = 0x124F4Cu;
            goto label_124f4c;
        }
    }
    ctx->pc = 0x124F40u;
label_124f40:
    // 0x124f40: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_124f44:
    // 0x124f44: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x124f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_124f48:
    // 0x124f48: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124f4c:
    // 0x124f4c: 0xc0808b8  jal         func_2022E0
label_124f50:
    if (ctx->pc == 0x124F50u) {
        ctx->pc = 0x124F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F4Cu;
        // 0x124f50: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F54u;
        goto label_124f54;
    }
    ctx->pc = 0x124F4Cu;
    SET_GPR_U32(ctx, 31, 0x124F54u);
    ctx->pc = 0x124F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F4Cu;
    // 0x124f50: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x124F4Cu, 0x124F54u)) {
        return;
    }
    ctx->pc = 0x124F54u;
label_124f54:
    // 0x124f54: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_124f58:
    if (ctx->pc == 0x124F58u) {
        ctx->pc = 0x124F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F54u;
        // 0x124f58: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F5Cu;
        goto label_124f5c;
    }
    ctx->pc = 0x124F54u;
    {
        const bool branch_taken_0x124f54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x124f54) {
            ctx->pc = 0x124F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124F54u;
            // 0x124f58: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124f38;
        }
    }
    ctx->pc = 0x124F5Cu;
label_124f5c:
    // 0x124f5c: 0x8e440eac  lw          $a0, 0xEAC($s2)
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
label_124f60:
    // 0x124f60: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_124f64:
    if (ctx->pc == 0x124F64u) {
        ctx->pc = 0x124F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F60u;
        // 0x124f64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F68u;
        goto label_124f68;
    }
    ctx->pc = 0x124F60u;
    {
        const bool branch_taken_0x124f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F60u;
        // 0x124f64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f60) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124F68u;
label_124f68:
    // 0x124f68: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_124f6c:
    // 0x124f6c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_124f70:
    if (ctx->pc == 0x124F70u) {
        ctx->pc = 0x124F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F6Cu;
        // 0x124f70: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F74u;
        goto label_124f74;
    }
    ctx->pc = 0x124F6Cu;
    {
        const bool branch_taken_0x124f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F6Cu;
        // 0x124f70: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f6c) {
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124F74u;
label_124f74:
    // 0x124f74: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x124f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_124f78:
    // 0x124f78: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_124f7c:
    if (ctx->pc == 0x124F7Cu) {
        ctx->pc = 0x124F80u;
        goto label_124f80;
    }
    ctx->pc = 0x124F78u;
    {
        const bool branch_taken_0x124f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x124f78) {
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124F80u;
label_124f80:
    // 0x124f80: 0xc0654b4  jal         func_1952D0
label_124f84:
    if (ctx->pc == 0x124F84u) {
        ctx->pc = 0x124F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F80u;
        // 0x124f84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F88u;
        goto label_124f88;
    }
    ctx->pc = 0x124F80u;
    SET_GPR_U32(ctx, 31, 0x124F88u);
    ctx->pc = 0x124F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F80u;
    // 0x124f84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1952D0u, 0x124F80u, 0x124F88u)) {
        return;
    }
    ctx->pc = 0x124F88u;
label_124f88:
    // 0x124f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124f8c:
    // 0x124f8c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_124f90:
    if (ctx->pc == 0x124F90u) {
        ctx->pc = 0x124F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F8Cu;
        // 0x124f90: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F94u;
        goto label_124f94;
    }
    ctx->pc = 0x124F8Cu;
    {
        const bool branch_taken_0x124f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f8c) {
            ctx->pc = 0x124F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124F8Cu;
            // 0x124f90: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124F94u;
label_124f94:
    // 0x124f94: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_124f98:
    // 0x124f98: 0x3631fffb  ori         $s1, $s1, 0xFFFB
    ctx->pc = 0x124f98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65531);
label_124f9c:
    // 0x124f9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124fa0:
    // 0x124fa0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_124fa4:
    if (ctx->pc == 0x124FA4u) {
        ctx->pc = 0x124FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FA0u;
        // 0x124fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FA8u;
        goto label_124fa8;
    }
    ctx->pc = 0x124FA0u;
    {
        const bool branch_taken_0x124fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FA0u;
        // 0x124fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fa0) {
            ctx->pc = 0x124FB4u;
            goto label_124fb4;
        }
    }
    ctx->pc = 0x124FA8u;
label_124fa8:
    // 0x124fa8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_124fac:
    // 0x124fac: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x124facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_124fb0:
    // 0x124fb0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124fb4:
    // 0x124fb4: 0xc0808b8  jal         func_2022E0
label_124fb8:
    if (ctx->pc == 0x124FB8u) {
        ctx->pc = 0x124FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FB4u;
        // 0x124fb8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FBCu;
        goto label_124fbc;
    }
    ctx->pc = 0x124FB4u;
    SET_GPR_U32(ctx, 31, 0x124FBCu);
    ctx->pc = 0x124FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FB4u;
    // 0x124fb8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x124FB4u, 0x124FBCu)) {
        return;
    }
    ctx->pc = 0x124FBCu;
label_124fbc:
    // 0x124fbc: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_124fc0:
    if (ctx->pc == 0x124FC0u) {
        ctx->pc = 0x124FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FBCu;
        // 0x124fc0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FC4u;
        goto label_124fc4;
    }
    ctx->pc = 0x124FBCu;
    {
        const bool branch_taken_0x124fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fbc) {
            ctx->pc = 0x124FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124FBCu;
            // 0x124fc0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124fa0;
        }
    }
    ctx->pc = 0x124FC4u;
label_124fc4:
    // 0x124fc4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x124fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_124fc8:
    // 0x124fc8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x124fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_124fcc:
    // 0x124fcc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x124fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_124fd0:
    // 0x124fd0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x124fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124fd4:
    // 0x124fd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_124fd8:
    // 0x124fd8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x124fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_124fdc:
    // 0x124fdc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x124fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_124fe0:
    // 0x124fe0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x124fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124fe4:
    // 0x124fe4: 0x3e00008  jr          $ra
label_124fe8:
    if (ctx->pc == 0x124FE8u) {
        ctx->pc = 0x124FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FE4u;
        // 0x124fe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FECu;
        goto label_124fec;
    }
    ctx->pc = 0x124FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FE4u;
        // 0x124fe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124FECu;
label_124fec:
    // 0x124fec: 0x0  nop
    ctx->pc = 0x124fecu;
    // NOP
    ctx->pc = 0x124ff0u;
}
