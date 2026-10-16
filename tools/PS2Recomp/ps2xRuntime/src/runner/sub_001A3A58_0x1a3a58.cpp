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

// Function: sub_001A3A58
// Address: 0x1a3a58 - 0x1a3fc0
void sub_001A3A58_0x1a3a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3A58_0x1a3a58");
#endif

    switch (ctx->pc) {
        case 0x1a3a58u: goto label_1a3a58;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a60u: goto label_1a3a60;
        case 0x1a3a64u: goto label_1a3a64;
        case 0x1a3a68u: goto label_1a3a68;
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a74u: goto label_1a3a74;
        case 0x1a3a78u: goto label_1a3a78;
        case 0x1a3a7cu: goto label_1a3a7c;
        case 0x1a3a80u: goto label_1a3a80;
        case 0x1a3a84u: goto label_1a3a84;
        case 0x1a3a88u: goto label_1a3a88;
        case 0x1a3a8cu: goto label_1a3a8c;
        case 0x1a3a90u: goto label_1a3a90;
        case 0x1a3a94u: goto label_1a3a94;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3a9cu: goto label_1a3a9c;
        case 0x1a3aa0u: goto label_1a3aa0;
        case 0x1a3aa4u: goto label_1a3aa4;
        case 0x1a3aa8u: goto label_1a3aa8;
        case 0x1a3aacu: goto label_1a3aac;
        case 0x1a3ab0u: goto label_1a3ab0;
        case 0x1a3ab4u: goto label_1a3ab4;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ac4u: goto label_1a3ac4;
        case 0x1a3ac8u: goto label_1a3ac8;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3ad4u: goto label_1a3ad4;
        case 0x1a3ad8u: goto label_1a3ad8;
        case 0x1a3adcu: goto label_1a3adc;
        case 0x1a3ae0u: goto label_1a3ae0;
        case 0x1a3ae4u: goto label_1a3ae4;
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        case 0x1a3ef4u: goto label_1a3ef4;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        default: break;
    }

    ctx->pc = 0x1a3a58u;

label_1a3a58:
    // 0x1a3a58: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1a3a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1a3a5c:
    // 0x1a3a5c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1a3a60:
    // 0x1a3a60: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1a3a64:
    // 0x1a3a64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a3a64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a68:
    // 0x1a3a68: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1a3a6c:
    // 0x1a3a6c: 0x26b31510  addiu       $s3, $s5, 0x1510
    ctx->pc = 0x1a3a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 5392));
label_1a3a70:
    // 0x1a3a70: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a3a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1a3a74:
    // 0x1a3a74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a3a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a78:
    // 0x1a3a78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a3a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1a3a7c:
    // 0x1a3a7c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1a3a7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a80:
    // 0x1a3a80: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1a3a80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1a3a84:
    // 0x1a3a84: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1a3a84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a88:
    // 0x1a3a88: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a3a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1a3a8c:
    // 0x1a3a8c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1a3a8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1a3a90:
    // 0x1a3a90: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a3a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1a3a94:
    // 0x1a3a94: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a3a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1a3a98:
    // 0x1a3a98: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a3a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1a3a9c:
    // 0x1a3a9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a3a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a3aa0:
    // 0x1a3aa0: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1a3aa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1a3aa4:
    // 0x1a3aa4: 0x12800113  beqz        $s4, . + 4 + (0x113 << 2)
label_1a3aa8:
    if (ctx->pc == 0x1A3AA8u) {
        ctx->pc = 0x1A3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AA4u;
        // 0x1a3aa8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AACu;
        goto label_1a3aac;
    }
    ctx->pc = 0x1A3AA4u;
    {
        const bool branch_taken_0x1a3aa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AA4u;
        // 0x1a3aa8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3aa4) {
            ctx->pc = 0x1A3EF4u;
            goto label_1a3ef4;
        }
    }
    ctx->pc = 0x1A3AACu;
label_1a3aac:
    // 0x1a3aac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a3aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ab0:
    // 0x1a3ab0: 0xc04f0cc  jal         func_13C330
label_1a3ab4:
    if (ctx->pc == 0x1A3AB4u) {
        ctx->pc = 0x1A3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AB0u;
        // 0x1a3ab4: 0x26b00040  addiu       $s0, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AB8u;
        goto label_1a3ab8;
    }
    ctx->pc = 0x1A3AB0u;
    SET_GPR_U32(ctx, 31, 0x1A3AB8u);
    ctx->pc = 0x1A3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AB0u;
    // 0x1a3ab4: 0x26b00040  addiu       $s0, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3AB0u, 0x1A3AB8u)) {
        return;
    }
    ctx->pc = 0x1A3AB8u;
label_1a3ab8:
    // 0x1a3ab8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a3ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a3abc:
    // 0x1a3abc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a3abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3ac0:
    // 0x1a3ac0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a3ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a3ac4:
    // 0x1a3ac4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a3ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3ac8:
    // 0x1a3ac8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1a3ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3acc:
    // 0x1a3acc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1a3accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3ad0:
    // 0x1a3ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ad4:
    // 0x1a3ad4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_1a3ad8:
    // 0x1a3ad8: 0xc04f0cc  jal         func_13C330
label_1a3adc:
    if (ctx->pc == 0x1A3ADCu) {
        ctx->pc = 0x1A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AD8u;
        // 0x1a3adc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AE0u;
        goto label_1a3ae0;
    }
    ctx->pc = 0x1A3AD8u;
    SET_GPR_U32(ctx, 31, 0x1A3AE0u);
    ctx->pc = 0x1A3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AD8u;
    // 0x1a3adc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3AD8u, 0x1A3AE0u)) {
        return;
    }
    ctx->pc = 0x1A3AE0u;
label_1a3ae0:
    // 0x1a3ae0: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1a3ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a3ae4:
    // 0x1a3ae4: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1a3ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a3ae8:
    // 0x1a3ae8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3aec:
    // 0x1a3aec: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x1a3aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3af0:
    // 0x1a3af0: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1a3af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3af4:
    // 0x1a3af4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a3af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a3af8:
    // 0x1a3af8: 0xc04f0f0  jal         func_13C3C0
label_1a3afc:
    if (ctx->pc == 0x1A3AFCu) {
        ctx->pc = 0x1A3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF8u;
        // 0x1a3afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B00u;
        goto label_1a3b00;
    }
    ctx->pc = 0x1A3AF8u;
    SET_GPR_U32(ctx, 31, 0x1A3B00u);
    ctx->pc = 0x1A3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AF8u;
    // 0x1a3afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A3AF8u, 0x1A3B00u)) {
        return;
    }
    ctx->pc = 0x1A3B00u;
label_1a3b00:
    // 0x1a3b00: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1a3b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a3b04:
    // 0x1a3b04: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1a3b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a3b08:
    // 0x1a3b08: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1a3b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3b0c:
    // 0x1a3b0c: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1a3b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3b10:
    // 0x1a3b10: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1a3b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3b14:
    // 0x1a3b14: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x1a3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_1a3b18:
    // 0x1a3b18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a3b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b1c:
    // 0x1a3b1c: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1a3b1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a3b20:
    // 0x1a3b20: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x1a3b20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a3b24:
    // 0x1a3b24: 0xc04f0cc  jal         func_13C330
label_1a3b28:
    if (ctx->pc == 0x1A3B28u) {
        ctx->pc = 0x1A3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B24u;
        // 0x1a3b28: 0xe7b50048  swc1        $f21, 0x48($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B2Cu;
        goto label_1a3b2c;
    }
    ctx->pc = 0x1A3B24u;
    SET_GPR_U32(ctx, 31, 0x1A3B2Cu);
    ctx->pc = 0x1A3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B24u;
    // 0x1a3b28: 0xe7b50048  swc1        $f21, 0x48($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3B24u, 0x1A3B2Cu)) {
        return;
    }
    ctx->pc = 0x1A3B2Cu;
label_1a3b2c:
    // 0x1a3b2c: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x1a3b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3b30:
    // 0x1a3b30: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a3b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a3b34:
    // 0x1a3b34: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a3b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a3b38:
    // 0x1a3b38: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3b3c:
    // 0x1a3b3c: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x1a3b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3b40:
    // 0x1a3b40: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x1a3b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3b44:
    // 0x1a3b44: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1a3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
label_1a3b48:
    // 0x1a3b48: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_1a3b4c:
    if (ctx->pc == 0x1A3B4Cu) {
        ctx->pc = 0x1A3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B48u;
        // 0x1a3b4c: 0x8e631390  lw          $v1, 0x1390($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B50u;
        goto label_1a3b50;
    }
    ctx->pc = 0x1A3B48u;
    {
        const bool branch_taken_0x1a3b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3b48) {
            ctx->pc = 0x1A3B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3B48u;
            // 0x1a3b4c: 0x8e631390  lw          $v1, 0x1390($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3C20u;
            goto label_1a3c20;
        }
    }
    ctx->pc = 0x1A3B50u;
label_1a3b50:
    // 0x1a3b50: 0xc6941500  lwc1        $f20, 0x1500($s4)
    ctx->pc = 0x1a3b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3b54:
    // 0x1a3b54: 0xc04f0f0  jal         func_13C3C0
label_1a3b58:
    if (ctx->pc == 0x1A3B58u) {
        ctx->pc = 0x1A3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B54u;
        // 0x1a3b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B5Cu;
        goto label_1a3b5c;
    }
    ctx->pc = 0x1A3B54u;
    SET_GPR_U32(ctx, 31, 0x1A3B5Cu);
    ctx->pc = 0x1A3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B54u;
    // 0x1a3b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A3B54u, 0x1A3B5Cu)) {
        return;
    }
    ctx->pc = 0x1A3B5Cu;
label_1a3b5c:
    // 0x1a3b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3b60:
    // 0x1a3b60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3b64:
    // 0x1a3b64: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a3b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3b68:
    // 0x1a3b68: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a3b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a3b6c:
    // 0x1a3b6c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1a3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3b70:
    // 0x1a3b70: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1a3b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3b74:
    // 0x1a3b74: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1a3b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3b78:
    // 0x1a3b78: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1a3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_1a3b7c:
    // 0x1a3b7c: 0x0  nop
    ctx->pc = 0x1a3b7cu;
    // NOP
label_1a3b80:
    // 0x1a3b80: 0x0  nop
    ctx->pc = 0x1a3b80u;
    // NOP
label_1a3b84:
    // 0x1a3b84: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x1a3b84u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[22]);
label_1a3b88:
    // 0x1a3b88: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1a3b88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a3b8c:
    // 0x1a3b8c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a3b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3b90:
    // 0x1a3b90: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1a3b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3b94:
    // 0x1a3b94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a3b98:
    // 0x1a3b98: 0x4615a0c2  mul.s       $f3, $f20, $f21
    ctx->pc = 0x1a3b98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_1a3b9c:
    // 0x1a3b9c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a3b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a3ba0:
    // 0x1a3ba0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a3ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a3ba4:
    // 0x1a3ba4: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1a3ba4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a3ba8:
    // 0x1a3ba8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1a3ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1a3bac:
    // 0x1a3bac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a3bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a3bb0:
    // 0x1a3bb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a3bb4:
    // 0x1a3bb4: 0x0  nop
    ctx->pc = 0x1a3bb4u;
    // NOP
label_1a3bb8:
    // 0x1a3bb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a3bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a3bbc:
    // 0x1a3bbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a3bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a3bc0:
    // 0x1a3bc0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a3bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a3bc4:
    // 0x1a3bc4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1a3bc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1a3bc8:
    // 0x1a3bc8: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1a3bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1a3bcc:
    // 0x1a3bcc: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1a3bccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1a3bd0:
    // 0x1a3bd0: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x1a3bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a3bd4:
    // 0x1a3bd4: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x1a3bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a3bd8:
    // 0x1a3bd8: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x1a3bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1a3bdc:
    // 0x1a3bdc: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x1a3bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3be0:
    // 0x1a3be0: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x1a3be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3be4:
    // 0x1a3be4: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x1a3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
label_1a3be8:
    // 0x1a3be8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a3bec:
    // 0x1a3bec: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1a3becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3bf0:
    // 0x1a3bf0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a3bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3bf4:
    // 0x1a3bf4: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1a3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3bf8:
    // 0x1a3bf8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a3bfc:
    // 0x1a3bfc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a3bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a3c00:
    // 0x1a3c00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a3c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3c04:
    // 0x1a3c04: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1a3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3c08:
    // 0x1a3c08: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a3c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a3c0c:
    // 0x1a3c0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a3c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a3c10:
    // 0x1a3c10: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1a3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3c14:
    // 0x1a3c14: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1a3c14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a3c18:
    // 0x1a3c18: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1a3c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a3c1c:
    // 0x1a3c1c: 0x8e631390  lw          $v1, 0x1390($s3)
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
label_1a3c20:
    // 0x1a3c20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3c24:
    // 0x1a3c24: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x1a3c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a3c28:
    // 0x1a3c28: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x1a3c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a3c2c:
    // 0x1a3c2c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1a3c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a3c30:
    // 0x1a3c30: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1a3c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3c34:
    // 0x1a3c34: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1a3c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3c38:
    // 0x1a3c38: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1a3c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_1a3c3c:
    // 0x1a3c3c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
label_1a3c40:
    if (ctx->pc == 0x1A3C40u) {
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C44u;
        goto label_1a3c44;
    }
    ctx->pc = 0x1A3C3Cu;
    {
        const bool branch_taken_0x1a3c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3c3c) {
            ctx->pc = 0x1A3C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3C3Cu;
            // 0x1a3c40: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3CB8u;
            goto label_1a3cb8;
        }
    }
    ctx->pc = 0x1A3C44u;
label_1a3c44:
    // 0x1a3c44: 0xc660134c  lwc1        $f0, 0x134C($s3)
    ctx->pc = 0x1a3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3c48:
    // 0x1a3c48: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a3c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3c4c:
    // 0x1a3c4c: 0x0  nop
    ctx->pc = 0x1a3c4cu;
    // NOP
label_1a3c50:
    // 0x1a3c50: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a3c54:
    if (ctx->pc == 0x1A3C54u) {
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C58u;
        goto label_1a3c58;
    }
    ctx->pc = 0x1A3C50u;
    {
        const bool branch_taken_0x1a3c50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c50) {
            ctx->pc = 0x1A3C5Cu;
            goto label_1a3c5c;
        }
    }
    ctx->pc = 0x1A3C58u;
label_1a3c58:
    // 0x1a3c58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c5c:
    // 0x1a3c5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1a3c60:
    if (ctx->pc == 0x1A3C60u) {
        ctx->pc = 0x1A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C5Cu;
        // 0x1a3c60: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C64u;
        goto label_1a3c64;
    }
    ctx->pc = 0x1A3C5Cu;
    {
        const bool branch_taken_0x1a3c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C5Cu;
        // 0x1a3c60: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c5c) {
            ctx->pc = 0x1A3CB8u;
            goto label_1a3cb8;
        }
    }
    ctx->pc = 0x1A3C64u;
label_1a3c64:
    // 0x1a3c64: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_1a3c68:
    // 0x1a3c68: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3c6c:
    // 0x1a3c6c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a3c70:
    // 0x1a3c70: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3c74:
    // 0x1a3c74: 0x84640178  lh          $a0, 0x178($v1)
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 376)));
label_1a3c78:
    // 0x1a3c78: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_1a3c7c:
    // 0x1a3c7c: 0x40f809  jalr        $v0
label_1a3c80:
    if (ctx->pc == 0x1A3C80u) {
        ctx->pc = 0x1A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C7Cu;
        // 0x1a3c80: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C84u;
        goto label_1a3c84;
    }
    ctx->pc = 0x1A3C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3C84u);
        ctx->pc = 0x1A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C7Cu;
        // 0x1a3c80: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C7Cu, 0x1A3C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3C84u;
label_1a3c84:
    // 0x1a3c84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c88:
    // 0x1a3c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c8c:
    // 0x1a3c8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c90:
    // 0x1a3c90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c94:
    // 0x1a3c94: 0xc068626  jal         func_1A1898
label_1a3c98:
    if (ctx->pc == 0x1A3C98u) {
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C94u;
        // 0x1a3c98: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C9Cu;
        goto label_1a3c9c;
    }
    ctx->pc = 0x1A3C94u;
    SET_GPR_U32(ctx, 31, 0x1A3C9Cu);
    ctx->pc = 0x1A3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C94u;
    // 0x1a3c98: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1898u, 0x1A3C94u, 0x1A3C9Cu)) {
        return;
    }
    ctx->pc = 0x1A3C9Cu;
label_1a3c9c:
    // 0x1a3c9c: 0x8e631390  lw          $v1, 0x1390($s3)
    ctx->pc = 0x1a3c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
label_1a3ca0:
    // 0x1a3ca0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1a3ca4:
    // 0x1a3ca4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1a3ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1a3ca8:
    // 0x1a3ca8: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x1a3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1a3cac:
    // 0x1a3cac: 0xc46027f0  lwc1        $f0, 0x27F0($v1)
    ctx->pc = 0x1a3cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3cb0:
    // 0x1a3cb0: 0xe66013a0  swc1        $f0, 0x13A0($s3)
    ctx->pc = 0x1a3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5024), bits); }
label_1a3cb4:
    // 0x1a3cb4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1a3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1a3cb8:
    // 0x1a3cb8: 0x8c62909c  lw          $v0, -0x6F64($v1)
    ctx->pc = 0x1a3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938780)));
label_1a3cbc:
    // 0x1a3cbc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1a3cc0:
    if (ctx->pc == 0x1A3CC0u) {
        ctx->pc = 0x1A3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CBCu;
        // 0x1a3cc0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CC4u;
        goto label_1a3cc4;
    }
    ctx->pc = 0x1A3CBCu;
    {
        const bool branch_taken_0x1a3cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CBCu;
        // 0x1a3cc0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cbc) {
            ctx->pc = 0x1A3D80u;
            goto label_1a3d80;
        }
    }
    ctx->pc = 0x1A3CC4u;
label_1a3cc4:
    // 0x1a3cc4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3cc8:
    // 0x1a3cc8: 0x8e651390  lw          $a1, 0x1390($s3)
    ctx->pc = 0x1a3cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
label_1a3ccc:
    // 0x1a3ccc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a3cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cd0:
    // 0x1a3cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cd4:
    // 0x1a3cd4: 0xc0689f6  jal         func_1A27D8
label_1a3cd8:
    if (ctx->pc == 0x1A3CD8u) {
        ctx->pc = 0x1A3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CD4u;
        // 0x1a3cd8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CDCu;
        goto label_1a3cdc;
    }
    ctx->pc = 0x1A3CD4u;
    SET_GPR_U32(ctx, 31, 0x1A3CDCu);
    ctx->pc = 0x1A3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CD4u;
    // 0x1a3cd8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A27D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A27D8u, 0x1A3CD4u, 0x1A3CDCu)) {
        return;
    }
    ctx->pc = 0x1A3CDCu;
label_1a3cdc:
    // 0x1a3cdc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1a3ce0:
    if (ctx->pc == 0x1A3CE0u) {
        ctx->pc = 0x1A3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CDCu;
        // 0x1a3ce0: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CE4u;
        goto label_1a3ce4;
    }
    ctx->pc = 0x1A3CDCu;
    {
        const bool branch_taken_0x1a3cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CDCu;
        // 0x1a3ce0: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cdc) {
            ctx->pc = 0x1A3D88u;
            goto label_1a3d88;
        }
    }
    ctx->pc = 0x1A3CE4u;
label_1a3ce4:
    // 0x1a3ce4: 0x8ea22d84  lw          $v0, 0x2D84($s5)
    ctx->pc = 0x1a3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11652)));
label_1a3ce8:
    // 0x1a3ce8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1a3cec:
    if (ctx->pc == 0x1A3CECu) {
        ctx->pc = 0x1A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CE8u;
        // 0x1a3cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CF0u;
        goto label_1a3cf0;
    }
    ctx->pc = 0x1A3CE8u;
    {
        const bool branch_taken_0x1a3ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CE8u;
        // 0x1a3cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ce8) {
            ctx->pc = 0x1A3D44u;
            goto label_1a3d44;
        }
    }
    ctx->pc = 0x1A3CF0u;
label_1a3cf0:
    // 0x1a3cf0: 0xc04f0cc  jal         func_13C330
label_1a3cf4:
    if (ctx->pc == 0x1A3CF4u) {
        ctx->pc = 0x1A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF0u;
        // 0x1a3cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CF8u;
        goto label_1a3cf8;
    }
    ctx->pc = 0x1A3CF0u;
    SET_GPR_U32(ctx, 31, 0x1A3CF8u);
    ctx->pc = 0x1A3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CF0u;
    // 0x1a3cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3CF0u, 0x1A3CF8u)) {
        return;
    }
    ctx->pc = 0x1A3CF8u;
label_1a3cf8:
    // 0x1a3cf8: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a3cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a3cfc:
    // 0x1a3cfc: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a3cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a3d00:
    // 0x1a3d00: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3d04:
    // 0x1a3d04: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x1a3d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3d08:
    // 0x1a3d08: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x1a3d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3d0c:
    // 0x1a3d0c: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1a3d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
label_1a3d10:
    // 0x1a3d10: 0xc04f0cc  jal         func_13C330
label_1a3d14:
    if (ctx->pc == 0x1A3D14u) {
        ctx->pc = 0x1A3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D10u;
        // 0x1a3d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D18u;
        goto label_1a3d18;
    }
    ctx->pc = 0x1A3D10u;
    SET_GPR_U32(ctx, 31, 0x1A3D18u);
    ctx->pc = 0x1A3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D10u;
    // 0x1a3d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3D10u, 0x1A3D18u)) {
        return;
    }
    ctx->pc = 0x1A3D18u;
label_1a3d18:
    // 0x1a3d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3d1c:
    // 0x1a3d1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3d20:
    // 0x1a3d20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a3d24:
    // 0x1a3d24: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a3d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3d28:
    // 0x1a3d28: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a3d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a3d2c:
    // 0x1a3d2c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a3d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a3d30:
    // 0x1a3d30: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1a3d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3d34:
    // 0x1a3d34: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1a3d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3d38:
    // 0x1a3d38: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x1a3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_1a3d3c:
    // 0x1a3d3c: 0xc0693da  jal         func_1A4F68
label_1a3d40:
    if (ctx->pc == 0x1A3D40u) {
        ctx->pc = 0x1A3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D3Cu;
        // 0x1a3d40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D44u;
        goto label_1a3d44;
    }
    ctx->pc = 0x1A3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D44u);
    ctx->pc = 0x1A3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D3Cu;
    // 0x1a3d40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4F68u, 0x1A3D3Cu, 0x1A3D44u)) {
        return;
    }
    ctx->pc = 0x1A3D44u;
label_1a3d44:
    // 0x1a3d44: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1a3d48:
    if (ctx->pc == 0x1A3D48u) {
        ctx->pc = 0x1A3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D44u;
        // 0x1a3d48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D4Cu;
        goto label_1a3d4c;
    }
    ctx->pc = 0x1A3D44u;
    {
        const bool branch_taken_0x1a3d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D44u;
        // 0x1a3d48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d44) {
            ctx->pc = 0x1A3D80u;
            goto label_1a3d80;
        }
    }
    ctx->pc = 0x1A3D4Cu;
label_1a3d4c:
    // 0x1a3d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d50:
    // 0x1a3d50: 0xc0685da  jal         func_1A1768
label_1a3d54:
    if (ctx->pc == 0x1A3D54u) {
        ctx->pc = 0x1A3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D50u;
        // 0x1a3d54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D58u;
        goto label_1a3d58;
    }
    ctx->pc = 0x1A3D50u;
    SET_GPR_U32(ctx, 31, 0x1A3D58u);
    ctx->pc = 0x1A3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D50u;
    // 0x1a3d54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A3D50u, 0x1A3D58u)) {
        return;
    }
    ctx->pc = 0x1A3D58u;
label_1a3d58:
    // 0x1a3d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3d5c:
    // 0x1a3d5c: 0xae621394  sw          $v0, 0x1394($s3)
    ctx->pc = 0x1a3d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5012), GPR_U32(ctx, 2));
label_1a3d60:
    // 0x1a3d60: 0x10000068  b           . + 4 + (0x68 << 2)
label_1a3d64:
    if (ctx->pc == 0x1A3D64u) {
        ctx->pc = 0x1A3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D60u;
        // 0x1a3d64: 0xae22909c  sw          $v0, -0x6F64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D68u;
        goto label_1a3d68;
    }
    ctx->pc = 0x1A3D60u;
    {
        const bool branch_taken_0x1a3d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D60u;
        // 0x1a3d64: 0xae22909c  sw          $v0, -0x6F64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d60) {
            ctx->pc = 0x1A3F04u;
            goto label_1a3f04;
        }
    }
    ctx->pc = 0x1A3D68u;
label_1a3d68:
    // 0x1a3d68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3d6c:
    // 0x1a3d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3d70:
    // 0x1a3d70: 0x0  nop
    ctx->pc = 0x1a3d70u;
    // NOP
label_1a3d74:
    // 0x1a3d74: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1a3d74u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1a3d78:
    // 0x1a3d78: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1a3d7c:
    if (ctx->pc == 0x1A3D7Cu) {
        ctx->pc = 0x1A3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D78u;
        // 0x1a3d7c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D80u;
        goto label_1a3d80;
    }
    ctx->pc = 0x1A3D78u;
    {
        const bool branch_taken_0x1a3d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D78u;
        // 0x1a3d7c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d78) {
            ctx->pc = 0x1A3E68u;
            goto label_1a3e68;
        }
    }
    ctx->pc = 0x1A3D80u;
label_1a3d80:
    // 0x1a3d80: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1a3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3d84:
    // 0x1a3d84: 0x0  nop
    ctx->pc = 0x1a3d84u;
    // NOP
label_1a3d88:
    // 0x1a3d88: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3d8c:
    // 0x1a3d8c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a3d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3d90:
    // 0x1a3d90: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a3d90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a3d94:
    // 0x1a3d94: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1a3d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a3d98:
    // 0x1a3d98: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a3d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3d9c:
    // 0x1a3d9c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1a3d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3da0:
    // 0x1a3da0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a3da0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1a3da4:
    // 0x1a3da4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1a3da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a3da8:
    // 0x1a3da8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a3da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a3dac:
    // 0x1a3dac: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1a3dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a3db0:
    // 0x1a3db0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1a3db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1a3db4:
    // 0x1a3db4: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1a3db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a3db8:
    // 0x1a3db8: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1a3db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a3dbc:
    // 0x1a3dbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a3dc0:
    // 0x1a3dc0: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x1a3dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3dc4:
    // 0x1a3dc4: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x1a3dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3dc8:
    // 0x1a3dc8: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a3dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_1a3dcc:
    // 0x1a3dcc: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x1a3dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3dd0:
    // 0x1a3dd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dd4:
    // 0x1a3dd4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1a3dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3dd8:
    // 0x1a3dd8: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x1a3dd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_1a3ddc:
    // 0x1a3ddc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1a3ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3de0:
    // 0x1a3de0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a3de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a3de4:
    // 0x1a3de4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a3de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a3de8:
    // 0x1a3de8: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1a3de8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_1a3dec:
    // 0x1a3dec: 0xc04975a  jal         func_125D68
label_1a3df0:
    if (ctx->pc == 0x1A3DF0u) {
        ctx->pc = 0x1A3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DECu;
        // 0x1a3df0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DF4u;
        goto label_1a3df4;
    }
    ctx->pc = 0x1A3DECu;
    SET_GPR_U32(ctx, 31, 0x1A3DF4u);
    ctx->pc = 0x1A3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DECu;
    // 0x1a3df0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D68u, 0x1A3DECu, 0x1A3DF4u)) {
        return;
    }
    ctx->pc = 0x1A3DF4u;
label_1a3df4:
    // 0x1a3df4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a3df4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a3df8:
    // 0x1a3df8: 0xc04975a  jal         func_125D68
label_1a3dfc:
    if (ctx->pc == 0x1A3DFCu) {
        ctx->pc = 0x1A3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DF8u;
        // 0x1a3dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E00u;
        goto label_1a3e00;
    }
    ctx->pc = 0x1A3DF8u;
    SET_GPR_U32(ctx, 31, 0x1A3E00u);
    ctx->pc = 0x1A3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DF8u;
    // 0x1a3dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D68u, 0x1A3DF8u, 0x1A3E00u)) {
        return;
    }
    ctx->pc = 0x1A3E00u;
label_1a3e00:
    // 0x1a3e00: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a3e00u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a3e04:
    // 0x1a3e04: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1a3e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1a3e08:
    // 0x1a3e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3e0c:
    // 0x1a3e0c: 0x0  nop
    ctx->pc = 0x1a3e0cu;
    // NOP
label_1a3e10:
    // 0x1a3e10: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a3e10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a3e14:
    // 0x1a3e14: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x1a3e14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1a3e18:
    // 0x1a3e18: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1a3e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3e1c:
    // 0x1a3e1c: 0x0  nop
    ctx->pc = 0x1a3e1cu;
    // NOP
label_1a3e20:
    // 0x1a3e20: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1a3e24:
    if (ctx->pc == 0x1A3E24u) {
        ctx->pc = 0x1A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E20u;
        // 0x1a3e24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E28u;
        goto label_1a3e28;
    }
    ctx->pc = 0x1A3E20u;
    {
        const bool branch_taken_0x1a3e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E20u;
        // 0x1a3e24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e20) {
            ctx->pc = 0x1A3EA8u;
            goto label_1a3ea8;
        }
    }
    ctx->pc = 0x1A3E28u;
label_1a3e28:
    // 0x1a3e28: 0xc0689a6  jal         func_1A2698
label_1a3e2c:
    if (ctx->pc == 0x1A3E2Cu) {
        ctx->pc = 0x1A3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E28u;
        // 0x1a3e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E30u;
        goto label_1a3e30;
    }
    ctx->pc = 0x1A3E28u;
    SET_GPR_U32(ctx, 31, 0x1A3E30u);
    ctx->pc = 0x1A3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E28u;
    // 0x1a3e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2698u, 0x1A3E28u, 0x1A3E30u)) {
        return;
    }
    ctx->pc = 0x1A3E30u;
label_1a3e30:
    // 0x1a3e30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a3e34:
    // 0x1a3e34: 0xc04642c  jal         func_1190B0
label_1a3e38:
    if (ctx->pc == 0x1A3E38u) {
        ctx->pc = 0x1A3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E34u;
        // 0x1a3e38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E3Cu;
        goto label_1a3e3c;
    }
    ctx->pc = 0x1A3E34u;
    SET_GPR_U32(ctx, 31, 0x1A3E3Cu);
    ctx->pc = 0x1A3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E34u;
    // 0x1a3e38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A3E34u, 0x1A3E3Cu)) {
        return;
    }
    ctx->pc = 0x1A3E3Cu;
label_1a3e3c:
    // 0x1a3e3c: 0x0  nop
    ctx->pc = 0x1a3e3cu;
    // NOP
label_1a3e40:
    // 0x1a3e40: 0x0  nop
    ctx->pc = 0x1a3e40u;
    // NOP
label_1a3e44:
    // 0x1a3e44: 0x46000044  c1          0x44
    ctx->pc = 0x1a3e44u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1a3e48:
    // 0x1a3e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3e4c:
    // 0x1a3e4c: 0x0  nop
    ctx->pc = 0x1a3e4cu;
    // NOP
label_1a3e50:
    // 0x1a3e50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a3e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3e54:
    // 0x1a3e54: 0x0  nop
    ctx->pc = 0x1a3e54u;
    // NOP
label_1a3e58:
    // 0x1a3e58: 0x4501ffc3  bc1t        . + 4 + (-0x3D << 2)
label_1a3e5c:
    if (ctx->pc == 0x1A3E5Cu) {
        ctx->pc = 0x1A3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E58u;
        // 0x1a3e5c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E60u;
        goto label_1a3e60;
    }
    ctx->pc = 0x1A3E58u;
    {
        const bool branch_taken_0x1a3e58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E58u;
        // 0x1a3e5c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e58) {
            ctx->pc = 0x1A3D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3d68;
        }
    }
    ctx->pc = 0x1A3E60u;
label_1a3e60:
    // 0x1a3e60: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a3e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3e64:
    // 0x1a3e64: 0x0  nop
    ctx->pc = 0x1a3e64u;
    // NOP
label_1a3e68:
    // 0x1a3e68: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1a3e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3e6c:
    // 0x1a3e6c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1a3e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3e70:
    // 0x1a3e70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a3e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a3e74:
    // 0x1a3e74: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a3e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a3e78:
    // 0x1a3e78: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a3e78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a3e7c:
    // 0x1a3e7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a3e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a3e80:
    // 0x1a3e80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a3e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a3e84:
    // 0x1a3e84: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1a3e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a3e88:
    // 0x1a3e88: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1a3e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a3e8c:
    // 0x1a3e8c: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1a3e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a3e90:
    // 0x1a3e90: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1a3e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a3e94:
    // 0x1a3e94: 0xb2e60007  sdl         $a2, 0x7($s7)
    ctx->pc = 0x1a3e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3e98:
    // 0x1a3e98: 0xb6e60000  sdr         $a2, 0x0($s7)
    ctx->pc = 0x1a3e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3e9c:
    // 0x1a3e9c: 0xaee70008  sw          $a3, 0x8($s7)
    ctx->pc = 0x1a3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 7));
label_1a3ea0:
    // 0x1a3ea0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a3ea4:
    if (ctx->pc == 0x1A3EA4u) {
        ctx->pc = 0x1A3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EA0u;
        // 0x1a3ea4: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EA8u;
        goto label_1a3ea8;
    }
    ctx->pc = 0x1A3EA0u;
    {
        const bool branch_taken_0x1a3ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EA0u;
        // 0x1a3ea4: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ea0) {
            ctx->pc = 0x1A3F04u;
            goto label_1a3f04;
        }
    }
    ctx->pc = 0x1A3EA8u;
label_1a3ea8:
    // 0x1a3ea8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1a3ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3eac:
    // 0x1a3eac: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1a3eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a3eb0:
    // 0x1a3eb0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3eb4:
    // 0x1a3eb4: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1a3eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3eb8:
    // 0x1a3eb8: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1a3eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3ebc:
    // 0x1a3ebc: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x1a3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_1a3ec0:
    // 0x1a3ec0: 0xc06896a  jal         func_1A25A8
label_1a3ec4:
    if (ctx->pc == 0x1A3EC4u) {
        ctx->pc = 0x1A3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EC0u;
        // 0x1a3ec4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EC8u;
        goto label_1a3ec8;
    }
    ctx->pc = 0x1A3EC0u;
    SET_GPR_U32(ctx, 31, 0x1A3EC8u);
    ctx->pc = 0x1A3EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EC0u;
    // 0x1a3ec4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A25A8u, 0x1A3EC0u, 0x1A3EC8u)) {
        return;
    }
    ctx->pc = 0x1A3EC8u;
label_1a3ec8:
    // 0x1a3ec8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a3ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ecc:
    // 0x1a3ecc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a3eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1a3ed0:
    // 0x1a3ed0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a3ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ed4:
    // 0x1a3ed4: 0xc06877e  jal         func_1A1DF8
label_1a3ed8:
    if (ctx->pc == 0x1A3ED8u) {
        ctx->pc = 0x1A3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3ED4u;
        // 0x1a3ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EDCu;
        goto label_1a3edc;
    }
    ctx->pc = 0x1A3ED4u;
    SET_GPR_U32(ctx, 31, 0x1A3EDCu);
    ctx->pc = 0x1A3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3ED4u;
    // 0x1a3ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1DF8u, 0x1A3ED4u, 0x1A3EDCu)) {
        return;
    }
    ctx->pc = 0x1A3EDCu;
label_1a3edc:
    // 0x1a3edc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1a3ee0:
    if (ctx->pc == 0x1A3EE0u) {
        ctx->pc = 0x1A3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EDCu;
        // 0x1a3ee0: 0x8e651390  lw          $a1, 0x1390($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EE4u;
        goto label_1a3ee4;
    }
    ctx->pc = 0x1A3EDCu;
    {
        const bool branch_taken_0x1a3edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3edc) {
            ctx->pc = 0x1A3EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3EDCu;
            // 0x1a3ee0: 0x8e651390  lw          $a1, 0x1390($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3F08u;
            goto label_1a3f08;
        }
    }
    ctx->pc = 0x1A3EE4u;
label_1a3ee4:
    // 0x1a3ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3ee8:
    // 0x1a3ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3eec:
    // 0x1a3eec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a3ef0:
    if (ctx->pc == 0x1A3EF0u) {
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EF4u;
        goto label_1a3ef4;
    }
    ctx->pc = 0x1A3EECu;
    {
        const bool branch_taken_0x1a3eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3eec) {
            ctx->pc = 0x1A3F04u;
            goto label_1a3f04;
        }
    }
    ctx->pc = 0x1A3EF4u;
label_1a3ef4:
    // 0x1a3ef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ef8:
    // 0x1a3ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3efc:
    // 0x1a3efc: 0xc0685da  jal         func_1A1768
label_1a3f00:
    if (ctx->pc == 0x1A3F00u) {
        ctx->pc = 0x1A3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EFCu;
        // 0x1a3f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F04u;
        goto label_1a3f04;
    }
    ctx->pc = 0x1A3EFCu;
    SET_GPR_U32(ctx, 31, 0x1A3F04u);
    ctx->pc = 0x1A3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EFCu;
    // 0x1a3f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A3EFCu, 0x1A3F04u)) {
        return;
    }
    ctx->pc = 0x1A3F04u;
label_1a3f04:
    // 0x1a3f04: 0x8e651390  lw          $a1, 0x1390($s3)
    ctx->pc = 0x1a3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5008)));
label_1a3f08:
    // 0x1a3f08: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x1a3f08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_1a3f0c:
    // 0x1a3f0c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1a3f10:
    if (ctx->pc == 0x1A3F10u) {
        ctx->pc = 0x1A3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F0Cu;
        // 0x1a3f10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F14u;
        goto label_1a3f14;
    }
    ctx->pc = 0x1A3F0Cu;
    {
        const bool branch_taken_0x1a3f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F0Cu;
        // 0x1a3f10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f0c) {
            ctx->pc = 0x1A3F84u;
            goto label_1a3f84;
        }
    }
    ctx->pc = 0x1A3F14u;
label_1a3f14:
    // 0x1a3f14: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1a3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1a3f18:
    // 0x1a3f18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a3f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3f1c:
    // 0x1a3f1c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1a3f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1a3f20:
    // 0x1a3f20: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1a3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1a3f24:
    // 0x1a3f24: 0xc44012e0  lwc1        $f0, 0x12E0($v0)
    ctx->pc = 0x1a3f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f28:
    // 0x1a3f28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3f2c:
    // 0x1a3f2c: 0x0  nop
    ctx->pc = 0x1a3f2cu;
    // NOP
label_1a3f30:
    // 0x1a3f30: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1a3f34:
    if (ctx->pc == 0x1A3F34u) {
        ctx->pc = 0x1A3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F30u;
        // 0x1a3f34: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F38u;
        goto label_1a3f38;
    }
    ctx->pc = 0x1A3F30u;
    {
        const bool branch_taken_0x1a3f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F30u;
        // 0x1a3f34: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f30) {
            ctx->pc = 0x1A3F88u;
            goto label_1a3f88;
        }
    }
    ctx->pc = 0x1A3F38u;
label_1a3f38:
    // 0x1a3f38: 0xc66013a0  lwc1        $f0, 0x13A0($s3)
    ctx->pc = 0x1a3f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f3c:
    // 0x1a3f3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3f40:
    // 0x1a3f40: 0x0  nop
    ctx->pc = 0x1a3f40u;
    // NOP
label_1a3f44:
    // 0x1a3f44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a3f48:
    if (ctx->pc == 0x1A3F48u) {
        ctx->pc = 0x1A3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F44u;
        // 0x1a3f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F4Cu;
        goto label_1a3f4c;
    }
    ctx->pc = 0x1A3F44u;
    {
        const bool branch_taken_0x1a3f44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F44u;
        // 0x1a3f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f44) {
            ctx->pc = 0x1A3F50u;
            goto label_1a3f50;
        }
    }
    ctx->pc = 0x1A3F4Cu;
label_1a3f4c:
    // 0x1a3f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f50:
    // 0x1a3f50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1a3f54:
    if (ctx->pc == 0x1A3F54u) {
        ctx->pc = 0x1A3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F50u;
        // 0x1a3f54: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F58u;
        goto label_1a3f58;
    }
    ctx->pc = 0x1A3F50u;
    {
        const bool branch_taken_0x1a3f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F50u;
        // 0x1a3f54: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f50) {
            ctx->pc = 0x1A3F88u;
            goto label_1a3f88;
        }
    }
    ctx->pc = 0x1A3F58u;
label_1a3f58:
    // 0x1a3f58: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1a3f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1a3f5c:
    // 0x1a3f5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a3f60:
    if (ctx->pc == 0x1A3F60u) {
        ctx->pc = 0x1A3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F5Cu;
        // 0x1a3f60: 0x2641821  addu        $v1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F64u;
        goto label_1a3f64;
    }
    ctx->pc = 0x1A3F5Cu;
    {
        const bool branch_taken_0x1a3f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F5Cu;
        // 0x1a3f60: 0x2641821  addu        $v1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f5c) {
            ctx->pc = 0x1A3F78u;
            goto label_1a3f78;
        }
    }
    ctx->pc = 0x1A3F64u;
label_1a3f64:
    // 0x1a3f64: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a3f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f68:
    // 0x1a3f68: 0xc46d12dc  lwc1        $f13, 0x12DC($v1)
    ctx->pc = 0x1a3f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a3f6c:
    // 0x1a3f6c: 0xc44c12d8  lwc1        $f12, 0x12D8($v0)
    ctx->pc = 0x1a3f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3f70:
    // 0x1a3f70: 0xc0688dc  jal         func_1A2370
label_1a3f74:
    if (ctx->pc == 0x1A3F74u) {
        ctx->pc = 0x1A3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F70u;
        // 0x1a3f74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F78u;
        goto label_1a3f78;
    }
    ctx->pc = 0x1A3F70u;
    SET_GPR_U32(ctx, 31, 0x1A3F78u);
    ctx->pc = 0x1A3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F70u;
    // 0x1a3f74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2370u, 0x1A3F70u, 0x1A3F78u)) {
        return;
    }
    ctx->pc = 0x1A3F78u;
label_1a3f78:
    // 0x1a3f78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3f7c:
    // 0x1a3f7c: 0xae601394  sw          $zero, 0x1394($s3)
    ctx->pc = 0x1a3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5012), GPR_U32(ctx, 0));
label_1a3f80:
    // 0x1a3f80: 0xae621390  sw          $v0, 0x1390($s3)
    ctx->pc = 0x1a3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5008), GPR_U32(ctx, 2));
label_1a3f84:
    // 0x1a3f84: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a3f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a3f88:
    // 0x1a3f88: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a3f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a3f8c:
    // 0x1a3f8c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a3f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a3f90:
    // 0x1a3f90: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a3f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a3f94:
    // 0x1a3f94: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a3f94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a3f98:
    // 0x1a3f98: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a3f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a3f9c:
    // 0x1a3f9c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a3f9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a3fa0:
    // 0x1a3fa0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a3fa0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a3fa4:
    // 0x1a3fa4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a3fa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a3fa8:
    // 0x1a3fa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a3fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a3fac:
    // 0x1a3fac: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x1a3facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a3fb0:
    // 0x1a3fb0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1a3fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3fb4:
    // 0x1a3fb4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1a3fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3fb8:
    // 0x1a3fb8: 0x3e00008  jr          $ra
label_1a3fbc:
    if (ctx->pc == 0x1A3FBCu) {
        ctx->pc = 0x1A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FB8u;
        // 0x1a3fbc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FC0u;
        goto label_fallthrough_0x1a3fb8;
    }
    ctx->pc = 0x1A3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FB8u;
        // 0x1a3fbc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3fb8:
    ctx->pc = 0x1A3FC0u;
}
