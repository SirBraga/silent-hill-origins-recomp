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

// Function: sub_001D1AC8
// Address: 0x1d1ac8 - 0x1d2018
void sub_001D1AC8_0x1d1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1AC8_0x1d1ac8");
#endif

    switch (ctx->pc) {
        case 0x1d1ac8u: goto label_1d1ac8;
        case 0x1d1accu: goto label_1d1acc;
        case 0x1d1ad0u: goto label_1d1ad0;
        case 0x1d1ad4u: goto label_1d1ad4;
        case 0x1d1ad8u: goto label_1d1ad8;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1ae8u: goto label_1d1ae8;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1af0u: goto label_1d1af0;
        case 0x1d1af4u: goto label_1d1af4;
        case 0x1d1af8u: goto label_1d1af8;
        case 0x1d1afcu: goto label_1d1afc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b04u: goto label_1d1b04;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b0cu: goto label_1d1b0c;
        case 0x1d1b10u: goto label_1d1b10;
        case 0x1d1b14u: goto label_1d1b14;
        case 0x1d1b18u: goto label_1d1b18;
        case 0x1d1b1cu: goto label_1d1b1c;
        case 0x1d1b20u: goto label_1d1b20;
        case 0x1d1b24u: goto label_1d1b24;
        case 0x1d1b28u: goto label_1d1b28;
        case 0x1d1b2cu: goto label_1d1b2c;
        case 0x1d1b30u: goto label_1d1b30;
        case 0x1d1b34u: goto label_1d1b34;
        case 0x1d1b38u: goto label_1d1b38;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b44u: goto label_1d1b44;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1b4cu: goto label_1d1b4c;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1b54u: goto label_1d1b54;
        case 0x1d1b58u: goto label_1d1b58;
        case 0x1d1b5cu: goto label_1d1b5c;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b64u: goto label_1d1b64;
        case 0x1d1b68u: goto label_1d1b68;
        case 0x1d1b6cu: goto label_1d1b6c;
        case 0x1d1b70u: goto label_1d1b70;
        case 0x1d1b74u: goto label_1d1b74;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b7cu: goto label_1d1b7c;
        case 0x1d1b80u: goto label_1d1b80;
        case 0x1d1b84u: goto label_1d1b84;
        case 0x1d1b88u: goto label_1d1b88;
        case 0x1d1b8cu: goto label_1d1b8c;
        case 0x1d1b90u: goto label_1d1b90;
        case 0x1d1b94u: goto label_1d1b94;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1ba4u: goto label_1d1ba4;
        case 0x1d1ba8u: goto label_1d1ba8;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bb0u: goto label_1d1bb0;
        case 0x1d1bb4u: goto label_1d1bb4;
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1bbcu: goto label_1d1bbc;
        case 0x1d1bc0u: goto label_1d1bc0;
        case 0x1d1bc4u: goto label_1d1bc4;
        case 0x1d1bc8u: goto label_1d1bc8;
        case 0x1d1bccu: goto label_1d1bcc;
        case 0x1d1bd0u: goto label_1d1bd0;
        case 0x1d1bd4u: goto label_1d1bd4;
        case 0x1d1bd8u: goto label_1d1bd8;
        case 0x1d1bdcu: goto label_1d1bdc;
        case 0x1d1be0u: goto label_1d1be0;
        case 0x1d1be4u: goto label_1d1be4;
        case 0x1d1be8u: goto label_1d1be8;
        case 0x1d1becu: goto label_1d1bec;
        case 0x1d1bf0u: goto label_1d1bf0;
        case 0x1d1bf4u: goto label_1d1bf4;
        case 0x1d1bf8u: goto label_1d1bf8;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c00u: goto label_1d1c00;
        case 0x1d1c04u: goto label_1d1c04;
        case 0x1d1c08u: goto label_1d1c08;
        case 0x1d1c0cu: goto label_1d1c0c;
        case 0x1d1c10u: goto label_1d1c10;
        case 0x1d1c14u: goto label_1d1c14;
        case 0x1d1c18u: goto label_1d1c18;
        case 0x1d1c1cu: goto label_1d1c1c;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1c24u: goto label_1d1c24;
        case 0x1d1c28u: goto label_1d1c28;
        case 0x1d1c2cu: goto label_1d1c2c;
        case 0x1d1c30u: goto label_1d1c30;
        case 0x1d1c34u: goto label_1d1c34;
        case 0x1d1c38u: goto label_1d1c38;
        case 0x1d1c3cu: goto label_1d1c3c;
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c44u: goto label_1d1c44;
        case 0x1d1c48u: goto label_1d1c48;
        case 0x1d1c4cu: goto label_1d1c4c;
        case 0x1d1c50u: goto label_1d1c50;
        case 0x1d1c54u: goto label_1d1c54;
        case 0x1d1c58u: goto label_1d1c58;
        case 0x1d1c5cu: goto label_1d1c5c;
        case 0x1d1c60u: goto label_1d1c60;
        case 0x1d1c64u: goto label_1d1c64;
        case 0x1d1c68u: goto label_1d1c68;
        case 0x1d1c6cu: goto label_1d1c6c;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1c74u: goto label_1d1c74;
        case 0x1d1c78u: goto label_1d1c78;
        case 0x1d1c7cu: goto label_1d1c7c;
        case 0x1d1c80u: goto label_1d1c80;
        case 0x1d1c84u: goto label_1d1c84;
        case 0x1d1c88u: goto label_1d1c88;
        case 0x1d1c8cu: goto label_1d1c8c;
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1c94u: goto label_1d1c94;
        case 0x1d1c98u: goto label_1d1c98;
        case 0x1d1c9cu: goto label_1d1c9c;
        case 0x1d1ca0u: goto label_1d1ca0;
        case 0x1d1ca4u: goto label_1d1ca4;
        case 0x1d1ca8u: goto label_1d1ca8;
        case 0x1d1cacu: goto label_1d1cac;
        case 0x1d1cb0u: goto label_1d1cb0;
        case 0x1d1cb4u: goto label_1d1cb4;
        case 0x1d1cb8u: goto label_1d1cb8;
        case 0x1d1cbcu: goto label_1d1cbc;
        case 0x1d1cc0u: goto label_1d1cc0;
        case 0x1d1cc4u: goto label_1d1cc4;
        case 0x1d1cc8u: goto label_1d1cc8;
        case 0x1d1cccu: goto label_1d1ccc;
        case 0x1d1cd0u: goto label_1d1cd0;
        case 0x1d1cd4u: goto label_1d1cd4;
        case 0x1d1cd8u: goto label_1d1cd8;
        case 0x1d1cdcu: goto label_1d1cdc;
        case 0x1d1ce0u: goto label_1d1ce0;
        case 0x1d1ce4u: goto label_1d1ce4;
        case 0x1d1ce8u: goto label_1d1ce8;
        case 0x1d1cecu: goto label_1d1cec;
        case 0x1d1cf0u: goto label_1d1cf0;
        case 0x1d1cf4u: goto label_1d1cf4;
        case 0x1d1cf8u: goto label_1d1cf8;
        case 0x1d1cfcu: goto label_1d1cfc;
        case 0x1d1d00u: goto label_1d1d00;
        case 0x1d1d04u: goto label_1d1d04;
        case 0x1d1d08u: goto label_1d1d08;
        case 0x1d1d0cu: goto label_1d1d0c;
        case 0x1d1d10u: goto label_1d1d10;
        case 0x1d1d14u: goto label_1d1d14;
        case 0x1d1d18u: goto label_1d1d18;
        case 0x1d1d1cu: goto label_1d1d1c;
        case 0x1d1d20u: goto label_1d1d20;
        case 0x1d1d24u: goto label_1d1d24;
        case 0x1d1d28u: goto label_1d1d28;
        case 0x1d1d2cu: goto label_1d1d2c;
        case 0x1d1d30u: goto label_1d1d30;
        case 0x1d1d34u: goto label_1d1d34;
        case 0x1d1d38u: goto label_1d1d38;
        case 0x1d1d3cu: goto label_1d1d3c;
        case 0x1d1d40u: goto label_1d1d40;
        case 0x1d1d44u: goto label_1d1d44;
        case 0x1d1d48u: goto label_1d1d48;
        case 0x1d1d4cu: goto label_1d1d4c;
        case 0x1d1d50u: goto label_1d1d50;
        case 0x1d1d54u: goto label_1d1d54;
        case 0x1d1d58u: goto label_1d1d58;
        case 0x1d1d5cu: goto label_1d1d5c;
        case 0x1d1d60u: goto label_1d1d60;
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d68u: goto label_1d1d68;
        case 0x1d1d6cu: goto label_1d1d6c;
        case 0x1d1d70u: goto label_1d1d70;
        case 0x1d1d74u: goto label_1d1d74;
        case 0x1d1d78u: goto label_1d1d78;
        case 0x1d1d7cu: goto label_1d1d7c;
        case 0x1d1d80u: goto label_1d1d80;
        case 0x1d1d84u: goto label_1d1d84;
        case 0x1d1d88u: goto label_1d1d88;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d90u: goto label_1d1d90;
        case 0x1d1d94u: goto label_1d1d94;
        case 0x1d1d98u: goto label_1d1d98;
        case 0x1d1d9cu: goto label_1d1d9c;
        case 0x1d1da0u: goto label_1d1da0;
        case 0x1d1da4u: goto label_1d1da4;
        case 0x1d1da8u: goto label_1d1da8;
        case 0x1d1dacu: goto label_1d1dac;
        case 0x1d1db0u: goto label_1d1db0;
        case 0x1d1db4u: goto label_1d1db4;
        case 0x1d1db8u: goto label_1d1db8;
        case 0x1d1dbcu: goto label_1d1dbc;
        case 0x1d1dc0u: goto label_1d1dc0;
        case 0x1d1dc4u: goto label_1d1dc4;
        case 0x1d1dc8u: goto label_1d1dc8;
        case 0x1d1dccu: goto label_1d1dcc;
        case 0x1d1dd0u: goto label_1d1dd0;
        case 0x1d1dd4u: goto label_1d1dd4;
        case 0x1d1dd8u: goto label_1d1dd8;
        case 0x1d1ddcu: goto label_1d1ddc;
        case 0x1d1de0u: goto label_1d1de0;
        case 0x1d1de4u: goto label_1d1de4;
        case 0x1d1de8u: goto label_1d1de8;
        case 0x1d1decu: goto label_1d1dec;
        case 0x1d1df0u: goto label_1d1df0;
        case 0x1d1df4u: goto label_1d1df4;
        case 0x1d1df8u: goto label_1d1df8;
        case 0x1d1dfcu: goto label_1d1dfc;
        case 0x1d1e00u: goto label_1d1e00;
        case 0x1d1e04u: goto label_1d1e04;
        case 0x1d1e08u: goto label_1d1e08;
        case 0x1d1e0cu: goto label_1d1e0c;
        case 0x1d1e10u: goto label_1d1e10;
        case 0x1d1e14u: goto label_1d1e14;
        case 0x1d1e18u: goto label_1d1e18;
        case 0x1d1e1cu: goto label_1d1e1c;
        case 0x1d1e20u: goto label_1d1e20;
        case 0x1d1e24u: goto label_1d1e24;
        case 0x1d1e28u: goto label_1d1e28;
        case 0x1d1e2cu: goto label_1d1e2c;
        case 0x1d1e30u: goto label_1d1e30;
        case 0x1d1e34u: goto label_1d1e34;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e3cu: goto label_1d1e3c;
        case 0x1d1e40u: goto label_1d1e40;
        case 0x1d1e44u: goto label_1d1e44;
        case 0x1d1e48u: goto label_1d1e48;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e50u: goto label_1d1e50;
        case 0x1d1e54u: goto label_1d1e54;
        case 0x1d1e58u: goto label_1d1e58;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e6cu: goto label_1d1e6c;
        case 0x1d1e70u: goto label_1d1e70;
        case 0x1d1e74u: goto label_1d1e74;
        case 0x1d1e78u: goto label_1d1e78;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e80u: goto label_1d1e80;
        case 0x1d1e84u: goto label_1d1e84;
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1e8cu: goto label_1d1e8c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1e94u: goto label_1d1e94;
        case 0x1d1e98u: goto label_1d1e98;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ea4u: goto label_1d1ea4;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1eacu: goto label_1d1eac;
        case 0x1d1eb0u: goto label_1d1eb0;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1eb8u: goto label_1d1eb8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1ec4u: goto label_1d1ec4;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ed0u: goto label_1d1ed0;
        case 0x1d1ed4u: goto label_1d1ed4;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1edcu: goto label_1d1edc;
        case 0x1d1ee0u: goto label_1d1ee0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1ee8u: goto label_1d1ee8;
        case 0x1d1eecu: goto label_1d1eec;
        case 0x1d1ef0u: goto label_1d1ef0;
        case 0x1d1ef4u: goto label_1d1ef4;
        case 0x1d1ef8u: goto label_1d1ef8;
        case 0x1d1efcu: goto label_1d1efc;
        case 0x1d1f00u: goto label_1d1f00;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f10u: goto label_1d1f10;
        case 0x1d1f14u: goto label_1d1f14;
        case 0x1d1f18u: goto label_1d1f18;
        case 0x1d1f1cu: goto label_1d1f1c;
        case 0x1d1f20u: goto label_1d1f20;
        case 0x1d1f24u: goto label_1d1f24;
        case 0x1d1f28u: goto label_1d1f28;
        case 0x1d1f2cu: goto label_1d1f2c;
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f44u: goto label_1d1f44;
        case 0x1d1f48u: goto label_1d1f48;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f50u: goto label_1d1f50;
        case 0x1d1f54u: goto label_1d1f54;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f5cu: goto label_1d1f5c;
        case 0x1d1f60u: goto label_1d1f60;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f68u: goto label_1d1f68;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1f70u: goto label_1d1f70;
        case 0x1d1f74u: goto label_1d1f74;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f7cu: goto label_1d1f7c;
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f84u: goto label_1d1f84;
        case 0x1d1f88u: goto label_1d1f88;
        case 0x1d1f8cu: goto label_1d1f8c;
        case 0x1d1f90u: goto label_1d1f90;
        case 0x1d1f94u: goto label_1d1f94;
        case 0x1d1f98u: goto label_1d1f98;
        case 0x1d1f9cu: goto label_1d1f9c;
        case 0x1d1fa0u: goto label_1d1fa0;
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d1fa8u: goto label_1d1fa8;
        case 0x1d1facu: goto label_1d1fac;
        case 0x1d1fb0u: goto label_1d1fb0;
        case 0x1d1fb4u: goto label_1d1fb4;
        case 0x1d1fb8u: goto label_1d1fb8;
        case 0x1d1fbcu: goto label_1d1fbc;
        case 0x1d1fc0u: goto label_1d1fc0;
        case 0x1d1fc4u: goto label_1d1fc4;
        case 0x1d1fc8u: goto label_1d1fc8;
        case 0x1d1fccu: goto label_1d1fcc;
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fd4u: goto label_1d1fd4;
        case 0x1d1fd8u: goto label_1d1fd8;
        case 0x1d1fdcu: goto label_1d1fdc;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d1fe4u: goto label_1d1fe4;
        case 0x1d1fe8u: goto label_1d1fe8;
        case 0x1d1fecu: goto label_1d1fec;
        case 0x1d1ff0u: goto label_1d1ff0;
        case 0x1d1ff4u: goto label_1d1ff4;
        case 0x1d1ff8u: goto label_1d1ff8;
        case 0x1d1ffcu: goto label_1d1ffc;
        case 0x1d2000u: goto label_1d2000;
        case 0x1d2004u: goto label_1d2004;
        case 0x1d2008u: goto label_1d2008;
        case 0x1d200cu: goto label_1d200c;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2014u: goto label_1d2014;
        default: break;
    }

    ctx->pc = 0x1d1ac8u;

label_1d1ac8:
    // 0x1d1ac8: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1d1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_1d1acc:
    // 0x1d1acc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1ad0:
    // 0x1d1ad0: 0x7fb203f0  sq          $s2, 0x3F0($sp)
    ctx->pc = 0x1d1ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 18));
label_1d1ad4:
    // 0x1d1ad4: 0x7fbe0390  sq          $fp, 0x390($sp)
    ctx->pc = 0x1d1ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 30));
label_1d1ad8:
    // 0x1d1ad8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1adc:
    // 0x1d1adc: 0x8c629b18  lw          $v0, -0x64E8($v1)
    ctx->pc = 0x1d1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941464)));
label_1d1ae0:
    // 0x1d1ae0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ae4:
    // 0x1d1ae4: 0x7fb00410  sq          $s0, 0x410($sp)
    ctx->pc = 0x1d1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 16));
label_1d1ae8:
    // 0x1d1ae8: 0x7fb10400  sq          $s1, 0x400($sp)
    ctx->pc = 0x1d1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 17));
label_1d1aec:
    // 0x1d1aec: 0x7fb303e0  sq          $s3, 0x3E0($sp)
    ctx->pc = 0x1d1aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 19));
label_1d1af0:
    // 0x1d1af0: 0x7fb403d0  sq          $s4, 0x3D0($sp)
    ctx->pc = 0x1d1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 20));
label_1d1af4:
    // 0x1d1af4: 0x7fb503c0  sq          $s5, 0x3C0($sp)
    ctx->pc = 0x1d1af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 21));
label_1d1af8:
    // 0x1d1af8: 0x7fb603b0  sq          $s6, 0x3B0($sp)
    ctx->pc = 0x1d1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 22));
label_1d1afc:
    // 0x1d1afc: 0x7fb703a0  sq          $s7, 0x3A0($sp)
    ctx->pc = 0x1d1afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 23));
label_1d1b00:
    // 0x1d1b00: 0xffbf0380  sd          $ra, 0x380($sp)
    ctx->pc = 0x1d1b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 31));
label_1d1b04:
    // 0x1d1b04: 0xe7b50428  swc1        $f21, 0x428($sp)
    ctx->pc = 0x1d1b04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
label_1d1b08:
    // 0x1d1b08: 0x10400130  beqz        $v0, . + 4 + (0x130 << 2)
label_1d1b0c:
    if (ctx->pc == 0x1D1B0Cu) {
        ctx->pc = 0x1D1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B08u;
        // 0x1d1b0c: 0xe7b40420  swc1        $f20, 0x420($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B10u;
        goto label_1d1b10;
    }
    ctx->pc = 0x1D1B08u;
    {
        const bool branch_taken_0x1d1b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B08u;
        // 0x1d1b0c: 0xe7b40420  swc1        $f20, 0x420($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b08) {
            ctx->pc = 0x1D1FCCu;
            goto label_1d1fcc;
        }
    }
    ctx->pc = 0x1D1B10u;
label_1d1b10:
    // 0x1d1b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b14:
    // 0x1d1b14: 0xc085ba8  jal         func_216EA0
label_1d1b18:
    if (ctx->pc == 0x1D1B18u) {
        ctx->pc = 0x1D1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B14u;
        // 0x1d1b18: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B1Cu;
        goto label_1d1b1c;
    }
    ctx->pc = 0x1D1B14u;
    SET_GPR_U32(ctx, 31, 0x1D1B1Cu);
    ctx->pc = 0x1D1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B14u;
    // 0x1d1b18: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1D1B14u, 0x1D1B1Cu)) {
        return;
    }
    ctx->pc = 0x1D1B1Cu;
label_1d1b1c:
    // 0x1d1b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d1b20:
    // 0x1d1b20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d1b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d1b24:
    // 0x1d1b24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d1b24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b28:
    // 0x1d1b28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d1b2c:
    // 0x1d1b2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d1b30:
    // 0x1d1b30: 0xc6239a60  lwc1        $f3, -0x65A0($s1)
    ctx->pc = 0x1d1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294941280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d1b34:
    // 0x1d1b34: 0x24470d60  addiu       $a3, $v0, 0xD60
    ctx->pc = 0x1d1b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
label_1d1b38:
    // 0x1d1b38: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1d1b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_1d1b3c:
    // 0x1d1b3c: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1d1b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_1d1b40:
    // 0x1d1b40: 0xaba40113  swl         $a0, 0x113($sp)
    ctx->pc = 0x1d1b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1d1b44:
    // 0x1d1b44: 0xbba40110  swr         $a0, 0x110($sp)
    ctx->pc = 0x1d1b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1d1b48:
    // 0x1d1b48: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1d1b4c:
    // 0x1d1b4c: 0x24650d68  addiu       $a1, $v1, 0xD68
    ctx->pc = 0x1d1b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3432));
label_1d1b50:
    // 0x1d1b50: 0x88a80003  lwl         $t0, 0x3($a1)
    ctx->pc = 0x1d1b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_1d1b54:
    // 0x1d1b54: 0x98a80000  lwr         $t0, 0x0($a1)
    ctx->pc = 0x1d1b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_1d1b58:
    // 0x1d1b58: 0xaba80123  swl         $t0, 0x123($sp)
    ctx->pc = 0x1d1b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1d1b5c:
    // 0x1d1b5c: 0xbba80120  swr         $t0, 0x120($sp)
    ctx->pc = 0x1d1b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1d1b60:
    // 0x1d1b60: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1d1b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1d1b64:
    // 0x1d1b64: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1d1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1d1b68:
    // 0x1d1b68: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_1d1b6c:
    // 0x1d1b6c: 0x93a30113  lbu         $v1, 0x113($sp)
    ctx->pc = 0x1d1b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 275)));
label_1d1b70:
    // 0x1d1b70: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d1b70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b74:
    // 0x1d1b74: 0x93a40123  lbu         $a0, 0x123($sp)
    ctx->pc = 0x1d1b74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 291)));
label_1d1b78:
    // 0x1d1b78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d1b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1b7c:
    // 0x1d1b7c: 0x0  nop
    ctx->pc = 0x1d1b7cu;
    // NOP
label_1d1b80:
    // 0x1d1b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d1b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d1b84:
    // 0x1d1b84: 0xc6420080  lwc1        $f2, 0x80($s2)
    ctx->pc = 0x1d1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1b88:
    // 0x1d1b88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d1b88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1b8c:
    // 0x1d1b8c: 0x0  nop
    ctx->pc = 0x1d1b8cu;
    // NOP
label_1d1b90:
    // 0x1d1b90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1b94:
    // 0x1d1b94: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1b98:
    // 0x1d1b98: 0x0  nop
    ctx->pc = 0x1d1b98u;
    // NOP
label_1d1b9c:
    // 0x1d1b9c: 0x0  nop
    ctx->pc = 0x1d1b9cu;
    // NOP
label_1d1ba0:
    // 0x1d1ba0: 0x4602a543  div.s       $f21, $f20, $f2
    ctx->pc = 0x1d1ba0u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[2]);
label_1d1ba4:
    // 0x1d1ba4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d1ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d1ba8:
    // 0x1d1ba8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1d1ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1d1bac:
    // 0x1d1bac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1d1bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1d1bb0:
    // 0x1d1bb0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1bb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1d1bb4:
    // 0x1d1bb4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1d1bb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d1bb8:
    // 0x1d1bb8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d1bbc:
    // 0x1d1bbc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1d1bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1d1bc0:
    // 0x1d1bc0: 0xa3a30113  sb          $v1, 0x113($sp)
    ctx->pc = 0x1d1bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 3));
label_1d1bc4:
    // 0x1d1bc4: 0x40f809  jalr        $v0
label_1d1bc8:
    if (ctx->pc == 0x1D1BC8u) {
        ctx->pc = 0x1D1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC4u;
        // 0x1d1bc8: 0xa3a60123  sb          $a2, 0x123($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 291), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BCCu;
        goto label_1d1bcc;
    }
    ctx->pc = 0x1D1BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1BCCu);
        ctx->pc = 0x1D1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC4u;
        // 0x1d1bc8: 0xa3a60123  sb          $a2, 0x123($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 291), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BC4u, 0x1D1BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BCCu;
label_1d1bcc:
    // 0x1d1bcc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1bd0:
    // 0x1d1bd0: 0x27a50364  addiu       $a1, $sp, 0x364
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 868));
label_1d1bd4:
    // 0x1d1bd4: 0x40f809  jalr        $v0
label_1d1bd8:
    if (ctx->pc == 0x1D1BD8u) {
        ctx->pc = 0x1D1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BD4u;
        // 0x1d1bd8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BDCu;
        goto label_1d1bdc;
    }
    ctx->pc = 0x1D1BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1BDCu);
        ctx->pc = 0x1D1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BD4u;
        // 0x1d1bd8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BD4u, 0x1D1BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BDCu;
label_1d1bdc:
    // 0x1d1bdc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1be0:
    // 0x1d1be0: 0x27a50368  addiu       $a1, $sp, 0x368
    ctx->pc = 0x1d1be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_1d1be4:
    // 0x1d1be4: 0x40f809  jalr        $v0
label_1d1be8:
    if (ctx->pc == 0x1D1BE8u) {
        ctx->pc = 0x1D1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BE4u;
        // 0x1d1be8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BECu;
        goto label_1d1bec;
    }
    ctx->pc = 0x1D1BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1BECu);
        ctx->pc = 0x1D1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BE4u;
        // 0x1d1be8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BE4u, 0x1D1BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BECu;
label_1d1bec:
    // 0x1d1bec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1bf0:
    // 0x1d1bf0: 0x27a5036c  addiu       $a1, $sp, 0x36C
    ctx->pc = 0x1d1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 876));
label_1d1bf4:
    // 0x1d1bf4: 0x40f809  jalr        $v0
label_1d1bf8:
    if (ctx->pc == 0x1D1BF8u) {
        ctx->pc = 0x1D1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF4u;
        // 0x1d1bf8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BFCu;
        goto label_1d1bfc;
    }
    ctx->pc = 0x1D1BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1BFCu);
        ctx->pc = 0x1D1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF4u;
        // 0x1d1bf8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BF4u, 0x1D1BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1c00:
    // 0x1d1c00: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x1d1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_1d1c04:
    // 0x1d1c04: 0x40f809  jalr        $v0
label_1d1c08:
    if (ctx->pc == 0x1D1C08u) {
        ctx->pc = 0x1D1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C04u;
        // 0x1d1c08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C0Cu;
        goto label_1d1c0c;
    }
    ctx->pc = 0x1D1C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C0Cu);
        ctx->pc = 0x1D1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C04u;
        // 0x1d1c08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C04u, 0x1D1C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C0Cu;
label_1d1c0c:
    // 0x1d1c0c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1c10:
    // 0x1d1c10: 0x27a50374  addiu       $a1, $sp, 0x374
    ctx->pc = 0x1d1c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 884));
label_1d1c14:
    // 0x1d1c14: 0x40f809  jalr        $v0
label_1d1c18:
    if (ctx->pc == 0x1D1C18u) {
        ctx->pc = 0x1D1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C14u;
        // 0x1d1c18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C1Cu;
        goto label_1d1c1c;
    }
    ctx->pc = 0x1D1C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C1Cu);
        ctx->pc = 0x1D1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C14u;
        // 0x1d1c18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C14u, 0x1D1C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C1Cu;
label_1d1c1c:
    // 0x1d1c1c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1c20:
    // 0x1d1c20: 0x27a50378  addiu       $a1, $sp, 0x378
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_1d1c24:
    // 0x1d1c24: 0x40f809  jalr        $v0
label_1d1c28:
    if (ctx->pc == 0x1D1C28u) {
        ctx->pc = 0x1D1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C24u;
        // 0x1d1c28: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C2Cu;
        goto label_1d1c2c;
    }
    ctx->pc = 0x1D1C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C2Cu);
        ctx->pc = 0x1D1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C24u;
        // 0x1d1c28: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C24u, 0x1D1C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C2Cu;
label_1d1c2c:
    // 0x1d1c2c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d1c30:
    // 0x1d1c30: 0x27a5037c  addiu       $a1, $sp, 0x37C
    ctx->pc = 0x1d1c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
label_1d1c34:
    // 0x1d1c34: 0x40f809  jalr        $v0
label_1d1c38:
    if (ctx->pc == 0x1D1C38u) {
        ctx->pc = 0x1D1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C34u;
        // 0x1d1c38: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C3Cu;
        goto label_1d1c3c;
    }
    ctx->pc = 0x1D1C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C3Cu);
        ctx->pc = 0x1D1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C34u;
        // 0x1d1c38: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C34u, 0x1D1C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C3Cu;
label_1d1c3c:
    // 0x1d1c3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1c40:
    // 0x1d1c40: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d1c44:
    // 0x1d1c44: 0x40f809  jalr        $v0
label_1d1c48:
    if (ctx->pc == 0x1D1C48u) {
        ctx->pc = 0x1D1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C44u;
        // 0x1d1c48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C4Cu;
        goto label_1d1c4c;
    }
    ctx->pc = 0x1D1C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C4Cu);
        ctx->pc = 0x1D1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C44u;
        // 0x1d1c48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C44u, 0x1D1C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C4Cu;
label_1d1c4c:
    // 0x1d1c4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1c50:
    // 0x1d1c50: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d1c54:
    // 0x1d1c54: 0x40f809  jalr        $v0
label_1d1c58:
    if (ctx->pc == 0x1D1C58u) {
        ctx->pc = 0x1D1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C54u;
        // 0x1d1c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C5Cu;
        goto label_1d1c5c;
    }
    ctx->pc = 0x1D1C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C5Cu);
        ctx->pc = 0x1D1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C54u;
        // 0x1d1c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C54u, 0x1D1C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C5Cu;
label_1d1c5c:
    // 0x1d1c5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1c60:
    // 0x1d1c60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d1c64:
    // 0x1d1c64: 0x40f809  jalr        $v0
label_1d1c68:
    if (ctx->pc == 0x1D1C68u) {
        ctx->pc = 0x1D1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C64u;
        // 0x1d1c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C6Cu;
        goto label_1d1c6c;
    }
    ctx->pc = 0x1D1C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C6Cu);
        ctx->pc = 0x1D1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C64u;
        // 0x1d1c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C64u, 0x1D1C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C6Cu;
label_1d1c6c:
    // 0x1d1c6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1c70:
    // 0x1d1c70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d1c74:
    // 0x1d1c74: 0x40f809  jalr        $v0
label_1d1c78:
    if (ctx->pc == 0x1D1C78u) {
        ctx->pc = 0x1D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C74u;
        // 0x1d1c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C7Cu;
        goto label_1d1c7c;
    }
    ctx->pc = 0x1D1C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C7Cu);
        ctx->pc = 0x1D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C74u;
        // 0x1d1c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C74u, 0x1D1C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C7Cu;
label_1d1c7c:
    // 0x1d1c7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1c80:
    // 0x1d1c80: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d1c84:
    // 0x1d1c84: 0x40f809  jalr        $v0
label_1d1c88:
    if (ctx->pc == 0x1D1C88u) {
        ctx->pc = 0x1D1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C84u;
        // 0x1d1c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C8Cu;
        goto label_1d1c8c;
    }
    ctx->pc = 0x1D1C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C8Cu);
        ctx->pc = 0x1D1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C84u;
        // 0x1d1c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C84u, 0x1D1C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C8Cu;
label_1d1c8c:
    // 0x1d1c8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1c90:
    // 0x1d1c90: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1c94:
    // 0x1d1c94: 0x40f809  jalr        $v0
label_1d1c98:
    if (ctx->pc == 0x1D1C98u) {
        ctx->pc = 0x1D1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C94u;
        // 0x1d1c98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C9Cu;
        goto label_1d1c9c;
    }
    ctx->pc = 0x1D1C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1C9Cu);
        ctx->pc = 0x1D1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C94u;
        // 0x1d1c98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C94u, 0x1D1C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C9Cu;
label_1d1c9c:
    // 0x1d1c9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1ca0:
    // 0x1d1ca0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d1ca4:
    // 0x1d1ca4: 0x40f809  jalr        $v0
label_1d1ca8:
    if (ctx->pc == 0x1D1CA8u) {
        ctx->pc = 0x1D1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CA4u;
        // 0x1d1ca8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CACu;
        goto label_1d1cac;
    }
    ctx->pc = 0x1D1CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1CACu);
        ctx->pc = 0x1D1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CA4u;
        // 0x1d1ca8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1CA4u, 0x1D1CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1CACu;
label_1d1cac:
    // 0x1d1cac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1d1cb0:
    // 0x1d1cb0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d1cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1cb4:
    // 0x1d1cb4: 0xc0c493d  jal         func_3124F4
label_1d1cb8:
    if (ctx->pc == 0x1D1CB8u) {
        ctx->pc = 0x1D1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CB4u;
        // 0x1d1cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CBCu;
        goto label_1d1cbc;
    }
    ctx->pc = 0x1D1CB4u;
    SET_GPR_U32(ctx, 31, 0x1D1CBCu);
    ctx->pc = 0x1D1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CB4u;
    // 0x1d1cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D1CB4u, 0x1D1CBCu)) {
        return;
    }
    ctx->pc = 0x1D1CBCu;
label_1d1cbc:
    // 0x1d1cbc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1d1cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1d1cc0:
    // 0x1d1cc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d1cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1cc4:
    // 0x1d1cc4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d1cc8:
    // 0x1d1cc8: 0xc6209a60  lwc1        $f0, -0x65A0($s1)
    ctx->pc = 0x1d1cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294941280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ccc:
    // 0x1d1ccc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1cd0:
    // 0x1d1cd0: 0xa3a20142  sb          $v0, 0x142($sp)
    ctx->pc = 0x1d1cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 322), (uint8_t)GPR_U32(ctx, 2));
label_1d1cd4:
    // 0x1d1cd4: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1d1cd8:
    // 0x1d1cd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1cdc:
    // 0x1d1cdc: 0xa3a20140  sb          $v0, 0x140($sp)
    ctx->pc = 0x1d1cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 2));
label_1d1ce0:
    // 0x1d1ce0: 0xa3a20141  sb          $v0, 0x141($sp)
    ctx->pc = 0x1d1ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 321), (uint8_t)GPR_U32(ctx, 2));
label_1d1ce4:
    // 0x1d1ce4: 0x8c659b10  lw          $a1, -0x64F0($v1)
    ctx->pc = 0x1d1ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941456)));
label_1d1ce8:
    // 0x1d1ce8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d1cec:
    // 0x1d1cec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d1cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d1cf0:
    // 0x1d1cf0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1cf4:
    // 0x1d1cf4: 0xa3a30143  sb          $v1, 0x143($sp)
    ctx->pc = 0x1d1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 3));
label_1d1cf8:
    // 0x1d1cf8: 0x8ba30143  lwl         $v1, 0x143($sp)
    ctx->pc = 0x1d1cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 323); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1d1cfc:
    // 0x1d1cfc: 0x9ba30140  lwr         $v1, 0x140($sp)
    ctx->pc = 0x1d1cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1d1d00:
    // 0x1d1d00: 0xaba30133  swl         $v1, 0x133($sp)
    ctx->pc = 0x1d1d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 307); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1d1d04:
    // 0x1d1d04: 0xbba30130  swr         $v1, 0x130($sp)
    ctx->pc = 0x1d1d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1d1d08:
    // 0x1d1d08: 0x40f809  jalr        $v0
label_1d1d0c:
    if (ctx->pc == 0x1D1D0Cu) {
        ctx->pc = 0x1D1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D08u;
        // 0x1d1d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D10u;
        goto label_1d1d10;
    }
    ctx->pc = 0x1D1D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1D10u);
        ctx->pc = 0x1D1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D08u;
        // 0x1d1d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D08u, 0x1D1D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1D10u;
label_1d1d10:
    // 0x1d1d10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1d14:
    // 0x1d1d14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1d18:
    // 0x1d1d18: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1d1d1c:
    // 0x1d1d1c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1d1d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1d1d20:
    // 0x1d1d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d1d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d24:
    // 0x1d1d24: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x1d1d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1d1d28:
    // 0x1d1d28: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x1d1d28u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
label_1d1d2c:
    // 0x1d1d2c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1d1d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d1d30:
    // 0x1d1d30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d1d30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d1d34:
    // 0x1d1d34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d1d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d1d38:
    // 0x1d1d38: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1d1d38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1d1d3c:
    // 0x1d1d3c: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x1d1d3cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_1d1d40:
    // 0x1d1d40: 0x460064c6  mov.s       $f19, $f12
    ctx->pc = 0x1d1d40u;
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
label_1d1d44:
    // 0x1d1d44: 0xc06ce2a  jal         func_1B38A8
label_1d1d48:
    if (ctx->pc == 0x1D1D48u) {
        ctx->pc = 0x1D1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D44u;
        // 0x1d1d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D4Cu;
        goto label_1d1d4c;
    }
    ctx->pc = 0x1D1D44u;
    SET_GPR_U32(ctx, 31, 0x1D1D4Cu);
    ctx->pc = 0x1D1D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D44u;
    // 0x1d1d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1D1D44u, 0x1D1D4Cu)) {
        return;
    }
    ctx->pc = 0x1D1D4Cu;
label_1d1d4c:
    // 0x1d1d4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1d50:
    // 0x1d1d50: 0xc06cff8  jal         func_1B3FE0
label_1d1d54:
    if (ctx->pc == 0x1D1D54u) {
        ctx->pc = 0x1D1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D50u;
        // 0x1d1d54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D58u;
        goto label_1d1d58;
    }
    ctx->pc = 0x1D1D50u;
    SET_GPR_U32(ctx, 31, 0x1D1D58u);
    ctx->pc = 0x1D1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D50u;
    // 0x1d1d54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1D1D50u, 0x1D1D58u)) {
        return;
    }
    ctx->pc = 0x1D1D58u;
label_1d1d58:
    // 0x1d1d58: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1d5c:
    // 0x1d1d5c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1d60:
    // 0x1d1d60: 0x8c44830c  lw          $a0, -0x7CF4($v0)
    ctx->pc = 0x1d1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_1d1d64:
    // 0x1d1d64: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_1d1d68:
    // 0x1d1d68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d1d6c:
    if (ctx->pc == 0x1D1D6Cu) {
        ctx->pc = 0x1D1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D68u;
        // 0x1d1d6c: 0x24719a70  addiu       $s1, $v1, -0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D70u;
        goto label_1d1d70;
    }
    ctx->pc = 0x1D1D68u;
    {
        const bool branch_taken_0x1d1d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D68u;
        // 0x1d1d6c: 0x24719a70  addiu       $s1, $v1, -0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d68) {
            ctx->pc = 0x1D1D78u;
            goto label_1d1d78;
        }
    }
    ctx->pc = 0x1D1D70u;
label_1d1d70:
    // 0x1d1d70: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1d74:
    // 0x1d1d74: 0x24519ac0  addiu       $s1, $v0, -0x6540
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941376));
label_1d1d78:
    // 0x1d1d78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1d7c:
    // 0x1d1d7c: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d1d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1d1d80:
    // 0x1d1d80: 0x8c449b28  lw          $a0, -0x64D8($v0)
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941480)));
label_1d1d84:
    // 0x1d1d84: 0x27b40150  addiu       $s4, $sp, 0x150
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1d1d88:
    // 0x1d1d88: 0x26100d58  addiu       $s0, $s0, 0xD58
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3416));
label_1d1d8c:
    // 0x1d1d8c: 0xc07cd92  jal         func_1F3648
label_1d1d90:
    if (ctx->pc == 0x1D1D90u) {
        ctx->pc = 0x1D1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D8Cu;
        // 0x1d1d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D94u;
        goto label_1d1d94;
    }
    ctx->pc = 0x1D1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D94u);
    ctx->pc = 0x1D1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D8Cu;
    // 0x1d1d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D1D8Cu, 0x1D1D94u)) {
        return;
    }
    ctx->pc = 0x1D1D94u;
label_1d1d94:
    // 0x1d1d94: 0x2412012c  addiu       $s2, $zero, 0x12C
    ctx->pc = 0x1d1d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1d1d98:
    // 0x1d1d98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d9c:
    // 0x1d1d9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1da0:
    // 0x1d1da0: 0xc0c5380  jal         func_314E00
label_1d1da4:
    if (ctx->pc == 0x1D1DA4u) {
        ctx->pc = 0x1D1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA0u;
        // 0x1d1da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DA8u;
        goto label_1d1da8;
    }
    ctx->pc = 0x1D1DA0u;
    SET_GPR_U32(ctx, 31, 0x1D1DA8u);
    ctx->pc = 0x1D1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DA0u;
    // 0x1d1da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D1DA0u, 0x1D1DA8u)) {
        return;
    }
    ctx->pc = 0x1D1DA8u;
label_1d1da8:
    // 0x1d1da8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1dac:
    // 0x1d1dac: 0x27b30250  addiu       $s3, $sp, 0x250
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d1db0:
    // 0x1d1db0: 0x8c449b2c  lw          $a0, -0x64D4($v0)
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941484)));
label_1d1db4:
    // 0x1d1db4: 0xc07cd92  jal         func_1F3648
label_1d1db8:
    if (ctx->pc == 0x1D1DB8u) {
        ctx->pc = 0x1D1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DB4u;
        // 0x1d1db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DBCu;
        goto label_1d1dbc;
    }
    ctx->pc = 0x1D1DB4u;
    SET_GPR_U32(ctx, 31, 0x1D1DBCu);
    ctx->pc = 0x1D1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DB4u;
    // 0x1d1db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D1DB4u, 0x1D1DBCu)) {
        return;
    }
    ctx->pc = 0x1D1DBCu;
label_1d1dbc:
    // 0x1d1dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1dc0:
    // 0x1d1dc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1dc4:
    // 0x1d1dc4: 0xc0c5380  jal         func_314E00
label_1d1dc8:
    if (ctx->pc == 0x1D1DC8u) {
        ctx->pc = 0x1D1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DC4u;
        // 0x1d1dc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DCCu;
        goto label_1d1dcc;
    }
    ctx->pc = 0x1D1DC4u;
    SET_GPR_U32(ctx, 31, 0x1D1DCCu);
    ctx->pc = 0x1D1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DC4u;
    // 0x1d1dc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D1DC4u, 0x1D1DCCu)) {
        return;
    }
    ctx->pc = 0x1D1DCCu;
label_1d1dcc:
    // 0x1d1dcc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1dd0:
    // 0x1d1dd0: 0x8fc49b18  lw          $a0, -0x64E8($fp)
    ctx->pc = 0x1d1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941464)));
label_1d1dd4:
    // 0x1d1dd4: 0x8c629b34  lw          $v0, -0x64CC($v1)
    ctx->pc = 0x1d1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941492)));
label_1d1dd8:
    // 0x1d1dd8: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1d1dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d1ddc:
    // 0x1d1ddc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d1de0:
    // 0x1d1de0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1d1de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1d1de4:
    // 0x1d1de4: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1d1de8:
    if (ctx->pc == 0x1D1DE8u) {
        ctx->pc = 0x1D1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DE4u;
        // 0x1d1de8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DECu;
        goto label_1d1dec;
    }
    ctx->pc = 0x1D1DE4u;
    {
        const bool branch_taken_0x1d1de4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DE4u;
        // 0x1d1de8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1de4) {
            ctx->pc = 0x1D1E40u;
            goto label_1d1e40;
        }
    }
    ctx->pc = 0x1D1DECu;
label_1d1dec:
    // 0x1d1dec: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
label_1d1df0:
    // 0x1d1df0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d1df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1df4:
    // 0x1d1df4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1df8:
    // 0x1d1df8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1d1dfc:
    // 0x1d1dfc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d1dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e00:
    // 0x1d1e00: 0xc085cec  jal         func_2173B0
label_1d1e04:
    if (ctx->pc == 0x1D1E04u) {
        ctx->pc = 0x1D1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E00u;
        // 0x1d1e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E08u;
        goto label_1d1e08;
    }
    ctx->pc = 0x1D1E00u;
    SET_GPR_U32(ctx, 31, 0x1D1E08u);
    ctx->pc = 0x1D1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E00u;
    // 0x1d1e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1D1E00u, 0x1D1E08u)) {
        return;
    }
    ctx->pc = 0x1D1E08u;
label_1d1e08:
    // 0x1d1e08: 0x8ec39b34  lw          $v1, -0x64CC($s6)
    ctx->pc = 0x1d1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941492)));
label_1d1e0c:
    // 0x1d1e0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e10:
    // 0x1d1e10: 0x8fc59b18  lw          $a1, -0x64E8($fp)
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941464)));
label_1d1e14:
    // 0x1d1e14: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x1d1e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d1e18:
    // 0x1d1e18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d1e1c:
    // 0x1d1e1c: 0xc0c5d8c  jal         func_317630
label_1d1e20:
    if (ctx->pc == 0x1D1E20u) {
        ctx->pc = 0x1D1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E1Cu;
        // 0x1d1e20: 0x24a500a4  addiu       $a1, $a1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E24u;
        goto label_1d1e24;
    }
    ctx->pc = 0x1D1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E24u);
    ctx->pc = 0x1D1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E1Cu;
    // 0x1d1e20: 0x24a500a4  addiu       $a1, $a1, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317630u, 0x1D1E1Cu, 0x1D1E24u)) {
        return;
    }
    ctx->pc = 0x1D1E24u;
label_1d1e24:
    // 0x1d1e24: 0x8ec39b34  lw          $v1, -0x64CC($s6)
    ctx->pc = 0x1d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941492)));
label_1d1e28:
    // 0x1d1e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e2c:
    // 0x1d1e2c: 0x8fc59b18  lw          $a1, -0x64E8($fp)
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941464)));
label_1d1e30:
    // 0x1d1e30: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x1d1e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d1e34:
    // 0x1d1e34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d1e38:
    // 0x1d1e38: 0xc0c5d8c  jal         func_317630
label_1d1e3c:
    if (ctx->pc == 0x1D1E3Cu) {
        ctx->pc = 0x1D1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E38u;
        // 0x1d1e3c: 0x24a500e4  addiu       $a1, $a1, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E40u;
        goto label_1d1e40;
    }
    ctx->pc = 0x1D1E38u;
    SET_GPR_U32(ctx, 31, 0x1D1E40u);
    ctx->pc = 0x1D1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E38u;
    // 0x1d1e3c: 0x24a500e4  addiu       $a1, $a1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317630u, 0x1D1E38u, 0x1D1E40u)) {
        return;
    }
    ctx->pc = 0x1D1E40u;
label_1d1e40:
    // 0x1d1e40: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1e44:
    // 0x1d1e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e48:
    // 0x1d1e48: 0x8c449b14  lw          $a0, -0x64EC($v0)
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941460)));
label_1d1e4c:
    // 0x1d1e4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e50:
    // 0x1d1e50: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
label_1d1e54:
    // 0x1d1e54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d1e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d1e58:
    // 0x1d1e58: 0xc07cd92  jal         func_1F3648
label_1d1e5c:
    if (ctx->pc == 0x1D1E5Cu) {
        ctx->pc = 0x1D1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E58u;
        // 0x1d1e5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E60u;
        goto label_1d1e60;
    }
    ctx->pc = 0x1D1E58u;
    SET_GPR_U32(ctx, 31, 0x1D1E60u);
    ctx->pc = 0x1D1E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E58u;
    // 0x1d1e5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D1E58u, 0x1D1E60u)) {
        return;
    }
    ctx->pc = 0x1D1E60u;
label_1d1e60:
    // 0x1d1e60: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_1d1e64:
    // 0x1d1e64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d1e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1e68:
    // 0x1d1e68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d1e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e6c:
    // 0x1d1e6c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d1e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e70:
    // 0x1d1e70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e74:
    // 0x1d1e74: 0xc085cac  jal         func_2172B0
label_1d1e78:
    if (ctx->pc == 0x1D1E78u) {
        ctx->pc = 0x1D1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E74u;
        // 0x1d1e78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E7Cu;
        goto label_1d1e7c;
    }
    ctx->pc = 0x1D1E74u;
    SET_GPR_U32(ctx, 31, 0x1D1E7Cu);
    ctx->pc = 0x1D1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E74u;
    // 0x1d1e78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1D1E74u, 0x1D1E7Cu)) {
        return;
    }
    ctx->pc = 0x1D1E7Cu;
label_1d1e7c:
    // 0x1d1e7c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1e80:
    // 0x1d1e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e84:
    // 0x1d1e84: 0xc07cd92  jal         func_1F3648
label_1d1e88:
    if (ctx->pc == 0x1D1E88u) {
        ctx->pc = 0x1D1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E84u;
        // 0x1d1e88: 0x8c649b24  lw          $a0, -0x64DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E8Cu;
        goto label_1d1e8c;
    }
    ctx->pc = 0x1D1E84u;
    SET_GPR_U32(ctx, 31, 0x1D1E8Cu);
    ctx->pc = 0x1D1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E84u;
    // 0x1d1e88: 0x8c649b24  lw          $a0, -0x64DC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D1E84u, 0x1D1E8Cu)) {
        return;
    }
    ctx->pc = 0x1D1E8Cu;
label_1d1e8c:
    // 0x1d1e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e90:
    // 0x1d1e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e94:
    // 0x1d1e94: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1d1e98:
    // 0x1d1e98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d1e98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d1e9c:
    // 0x1d1e9c: 0xc085cac  jal         func_2172B0
label_1d1ea0:
    if (ctx->pc == 0x1D1EA0u) {
        ctx->pc = 0x1D1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E9Cu;
        // 0x1d1ea0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1EA4u;
        goto label_1d1ea4;
    }
    ctx->pc = 0x1D1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1EA4u);
    ctx->pc = 0x1D1EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E9Cu;
    // 0x1d1ea0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1D1E9Cu, 0x1D1EA4u)) {
        return;
    }
    ctx->pc = 0x1D1EA4u;
label_1d1ea4:
    // 0x1d1ea4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d1ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ea8:
    // 0x1d1ea8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1eac:
    // 0x1d1eac: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1d1eb0:
    // 0x1d1eb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d1eb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d1eb4:
    // 0x1d1eb4: 0xc085cac  jal         func_2172B0
label_1d1eb8:
    if (ctx->pc == 0x1D1EB8u) {
        ctx->pc = 0x1D1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EB4u;
        // 0x1d1eb8: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1EBCu;
        goto label_1d1ebc;
    }
    ctx->pc = 0x1D1EB4u;
    SET_GPR_U32(ctx, 31, 0x1D1EBCu);
    ctx->pc = 0x1D1EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EB4u;
    // 0x1d1eb8: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1D1EB4u, 0x1D1EBCu)) {
        return;
    }
    ctx->pc = 0x1D1EBCu;
label_1d1ebc:
    // 0x1d1ebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d1ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ec0:
    // 0x1d1ec0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ec4:
    // 0x1d1ec4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d1ec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d1ec8:
    // 0x1d1ec8: 0x26260038  addiu       $a2, $s1, 0x38
    ctx->pc = 0x1d1ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1d1ecc:
    // 0x1d1ecc: 0xc085cac  jal         func_2172B0
label_1d1ed0:
    if (ctx->pc == 0x1D1ED0u) {
        ctx->pc = 0x1D1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ECCu;
        // 0x1d1ed0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1ED4u;
        goto label_1d1ed4;
    }
    ctx->pc = 0x1D1ECCu;
    SET_GPR_U32(ctx, 31, 0x1D1ED4u);
    ctx->pc = 0x1D1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ECCu;
    // 0x1d1ed0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1D1ECCu, 0x1D1ED4u)) {
        return;
    }
    ctx->pc = 0x1D1ED4u;
label_1d1ed4:
    // 0x1d1ed4: 0x6a22000f  ldl         $v0, 0xF($s1)
    ctx->pc = 0x1d1ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1d1ed8:
    // 0x1d1ed8: 0x6e220008  ldr         $v0, 0x8($s1)
    ctx->pc = 0x1d1ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1d1edc:
    // 0x1d1edc: 0x6a230017  ldl         $v1, 0x17($s1)
    ctx->pc = 0x1d1edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1d1ee0:
    // 0x1d1ee0: 0x6e230010  ldr         $v1, 0x10($s1)
    ctx->pc = 0x1d1ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1d1ee4:
    // 0x1d1ee4: 0xb3a20357  sdl         $v0, 0x357($sp)
    ctx->pc = 0x1d1ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 855); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d1ee8:
    // 0x1d1ee8: 0xb7a20350  sdr         $v0, 0x350($sp)
    ctx->pc = 0x1d1ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d1eec:
    // 0x1d1eec: 0xb3a3035f  sdl         $v1, 0x35F($sp)
    ctx->pc = 0x1d1eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d1ef0:
    // 0x1d1ef0: 0xb7a30358  sdr         $v1, 0x358($sp)
    ctx->pc = 0x1d1ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 856); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d1ef4:
    // 0x1d1ef4: 0x27b30350  addiu       $s3, $sp, 0x350
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_1d1ef8:
    // 0x1d1ef8: 0x8fc39b18  lw          $v1, -0x64E8($fp)
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941464)));
label_1d1efc:
    // 0x1d1efc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f00:
    // 0x1d1f00: 0x8ec29b34  lw          $v0, -0x64CC($s6)
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941492)));
label_1d1f04:
    // 0x1d1f04: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_1d1f08:
    if (ctx->pc == 0x1D1F08u) {
        ctx->pc = 0x1D1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F04u;
        // 0x1d1f08: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F0Cu;
        goto label_1d1f0c;
    }
    ctx->pc = 0x1D1F04u;
    {
        const bool branch_taken_0x1d1f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F04u;
        // 0x1d1f08: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f04) {
            ctx->pc = 0x1D1F18u;
            goto label_1d1f18;
        }
    }
    ctx->pc = 0x1D1F0Cu;
label_1d1f0c:
    // 0x1d1f0c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d1f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1d1f10:
    // 0x1d1f10: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x1d1f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1d1f14:
    // 0x1d1f14: 0x8cc59b20  lw          $a1, -0x64E0($a2)
    ctx->pc = 0x1d1f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941472)));
label_1d1f18:
    // 0x1d1f18: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1d1f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_1d1f1c:
    // 0x1d1f1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d1f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1f20:
    // 0x1d1f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f24:
    // 0x1d1f24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d1f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f28:
    // 0x1d1f28: 0xc085cec  jal         func_2173B0
label_1d1f2c:
    if (ctx->pc == 0x1D1F2Cu) {
        ctx->pc = 0x1D1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F28u;
        // 0x1d1f2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F30u;
        goto label_1d1f30;
    }
    ctx->pc = 0x1D1F28u;
    SET_GPR_U32(ctx, 31, 0x1D1F30u);
    ctx->pc = 0x1D1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F28u;
    // 0x1d1f2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1D1F28u, 0x1D1F30u)) {
        return;
    }
    ctx->pc = 0x1D1F30u;
label_1d1f30:
    // 0x1d1f30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1f34:
    // 0x1d1f34: 0xc7a00354  lwc1        $f0, 0x354($sp)
    ctx->pc = 0x1d1f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1f38:
    // 0x1d1f38: 0x2652012c  addiu       $s2, $s2, 0x12C
    ctx->pc = 0x1d1f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
label_1d1f3c:
    // 0x1d1f3c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d1f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1f40:
    // 0x1d1f40: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1d1f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_1d1f44:
    // 0x1d1f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d1f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d1f48:
    // 0x1d1f48: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1d1f4c:
    if (ctx->pc == 0x1D1F4Cu) {
        ctx->pc = 0x1D1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F48u;
        // 0x1d1f4c: 0xe7a00354  swc1        $f0, 0x354($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F50u;
        goto label_1d1f50;
    }
    ctx->pc = 0x1D1F48u;
    {
        const bool branch_taken_0x1d1f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F48u;
        // 0x1d1f4c: 0xe7a00354  swc1        $f0, 0x354($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f48) {
            ctx->pc = 0x1D1EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ef8;
        }
    }
    ctx->pc = 0x1D1F50u;
label_1d1f50:
    // 0x1d1f50: 0x8ec29b34  lw          $v0, -0x64CC($s6)
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941492)));
label_1d1f54:
    // 0x1d1f54: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1d1f58:
    // 0x1d1f58: 0x8fc49b18  lw          $a0, -0x64E8($fp)
    ctx->pc = 0x1d1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941464)));
label_1d1f5c:
    // 0x1d1f5c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d1f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d1f60:
    // 0x1d1f60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d1f64:
    // 0x1d1f64: 0x8c450128  lw          $a1, 0x128($v0)
    ctx->pc = 0x1d1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1d1f68:
    // 0x1d1f68: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_1d1f6c:
    if (ctx->pc == 0x1D1F6Cu) {
        ctx->pc = 0x1D1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F68u;
        // 0x1d1f6c: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F70u;
        goto label_1d1f70;
    }
    ctx->pc = 0x1D1F68u;
    {
        const bool branch_taken_0x1d1f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F68u;
        // 0x1d1f6c: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f68) {
            ctx->pc = 0x1D1FCCu;
            goto label_1d1fcc;
        }
    }
    ctx->pc = 0x1D1F70u;
label_1d1f70:
    // 0x1d1f70: 0x24f00fd8  addiu       $s0, $a3, 0xFD8
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4056));
label_1d1f74:
    // 0x1d1f74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d1f78:
    // 0x1d1f78: 0x40f809  jalr        $v0
label_1d1f7c:
    if (ctx->pc == 0x1D1F7Cu) {
        ctx->pc = 0x1D1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F78u;
        // 0x1d1f7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F80u;
        goto label_1d1f80;
    }
    ctx->pc = 0x1D1F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1F80u);
        ctx->pc = 0x1D1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F78u;
        // 0x1d1f7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F78u, 0x1D1F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1F80u;
label_1d1f80:
    // 0x1d1f80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d1f84:
    // 0x1d1f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f88:
    // 0x1d1f88: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1d1f8c:
    // 0x1d1f8c: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1d1f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1d1f90:
    // 0x1d1f90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1f94:
    // 0x1d1f94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d1f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d1f98:
    // 0x1d1f98: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x1d1f98u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
label_1d1f9c:
    // 0x1d1f9c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d1f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d1fa0:
    // 0x1d1fa0: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1d1fa0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
label_1d1fa4:
    // 0x1d1fa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fa8:
    // 0x1d1fa8: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x1d1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1d1fac:
    // 0x1d1fac: 0xc62f004c  lwc1        $f15, 0x4C($s1)
    ctx->pc = 0x1d1facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1d1fb0:
    // 0x1d1fb0: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x1d1fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1fb4:
    // 0x1d1fb4: 0xc62d0044  lwc1        $f13, 0x44($s1)
    ctx->pc = 0x1d1fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d1fb8:
    // 0x1d1fb8: 0xc06ce2a  jal         func_1B38A8
label_1d1fbc:
    if (ctx->pc == 0x1D1FBCu) {
        ctx->pc = 0x1D1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FB8u;
        // 0x1d1fbc: 0xc62e0048  lwc1        $f14, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FC0u;
        goto label_1d1fc0;
    }
    ctx->pc = 0x1D1FB8u;
    SET_GPR_U32(ctx, 31, 0x1D1FC0u);
    ctx->pc = 0x1D1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FB8u;
    // 0x1d1fbc: 0xc62e0048  lwc1        $f14, 0x48($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1D1FB8u, 0x1D1FC0u)) {
        return;
    }
    ctx->pc = 0x1D1FC0u;
label_1d1fc0:
    // 0x1d1fc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1fc4:
    // 0x1d1fc4: 0xc06cff8  jal         func_1B3FE0
label_1d1fc8:
    if (ctx->pc == 0x1D1FC8u) {
        ctx->pc = 0x1D1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FC4u;
        // 0x1d1fc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FCCu;
        goto label_1d1fcc;
    }
    ctx->pc = 0x1D1FC4u;
    SET_GPR_U32(ctx, 31, 0x1D1FCCu);
    ctx->pc = 0x1D1FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FC4u;
    // 0x1d1fc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1D1FC4u, 0x1D1FCCu)) {
        return;
    }
    ctx->pc = 0x1D1FCCu;
label_1d1fcc:
    // 0x1d1fcc: 0x7bb00410  lq          $s0, 0x410($sp)
    ctx->pc = 0x1d1fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_1d1fd0:
    // 0x1d1fd0: 0x7bb10400  lq          $s1, 0x400($sp)
    ctx->pc = 0x1d1fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
label_1d1fd4:
    // 0x1d1fd4: 0x7bb203f0  lq          $s2, 0x3F0($sp)
    ctx->pc = 0x1d1fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_1d1fd8:
    // 0x1d1fd8: 0x7bb303e0  lq          $s3, 0x3E0($sp)
    ctx->pc = 0x1d1fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_1d1fdc:
    // 0x1d1fdc: 0x7bb403d0  lq          $s4, 0x3D0($sp)
    ctx->pc = 0x1d1fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_1d1fe0:
    // 0x1d1fe0: 0x7bb503c0  lq          $s5, 0x3C0($sp)
    ctx->pc = 0x1d1fe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_1d1fe4:
    // 0x1d1fe4: 0x7bb603b0  lq          $s6, 0x3B0($sp)
    ctx->pc = 0x1d1fe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_1d1fe8:
    // 0x1d1fe8: 0x7bb703a0  lq          $s7, 0x3A0($sp)
    ctx->pc = 0x1d1fe8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_1d1fec:
    // 0x1d1fec: 0x7bbe0390  lq          $fp, 0x390($sp)
    ctx->pc = 0x1d1fecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_1d1ff0:
    // 0x1d1ff0: 0xdfbf0380  ld          $ra, 0x380($sp)
    ctx->pc = 0x1d1ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 896)));
label_1d1ff4:
    // 0x1d1ff4: 0xc7b50428  lwc1        $f21, 0x428($sp)
    ctx->pc = 0x1d1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1ff8:
    // 0x1d1ff8: 0xc7b40420  lwc1        $f20, 0x420($sp)
    ctx->pc = 0x1d1ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d1ffc:
    // 0x1d1ffc: 0x3e00008  jr          $ra
label_1d2000:
    if (ctx->pc == 0x1D2000u) {
        ctx->pc = 0x1D2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FFCu;
        // 0x1d2000: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2004u;
        goto label_1d2004;
    }
    ctx->pc = 0x1D1FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FFCu;
        // 0x1d2000: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2004u;
label_1d2004:
    // 0x1d2004: 0x0  nop
    ctx->pc = 0x1d2004u;
    // NOP
label_1d2008:
    // 0x1d2008: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d2008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d200c:
    // 0x1d200c: 0x0  nop
    ctx->pc = 0x1d200cu;
    // NOP
label_1d2010:
    // 0x1d2010: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d2010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d2014:
    // 0x1d2014: 0x0  nop
    ctx->pc = 0x1d2014u;
    // NOP
    ctx->pc = 0x1d2018u;
}
