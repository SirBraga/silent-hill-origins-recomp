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

// Function: sub_001A2A18
// Address: 0x1a2a18 - 0x1a30a0
void sub_001A2A18_0x1a2a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2A18_0x1a2a18");
#endif

    switch (ctx->pc) {
        case 0x1a2a18u: goto label_1a2a18;
        case 0x1a2a1cu: goto label_1a2a1c;
        case 0x1a2a20u: goto label_1a2a20;
        case 0x1a2a24u: goto label_1a2a24;
        case 0x1a2a28u: goto label_1a2a28;
        case 0x1a2a2cu: goto label_1a2a2c;
        case 0x1a2a30u: goto label_1a2a30;
        case 0x1a2a34u: goto label_1a2a34;
        case 0x1a2a38u: goto label_1a2a38;
        case 0x1a2a3cu: goto label_1a2a3c;
        case 0x1a2a40u: goto label_1a2a40;
        case 0x1a2a44u: goto label_1a2a44;
        case 0x1a2a48u: goto label_1a2a48;
        case 0x1a2a4cu: goto label_1a2a4c;
        case 0x1a2a50u: goto label_1a2a50;
        case 0x1a2a54u: goto label_1a2a54;
        case 0x1a2a58u: goto label_1a2a58;
        case 0x1a2a5cu: goto label_1a2a5c;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a64u: goto label_1a2a64;
        case 0x1a2a68u: goto label_1a2a68;
        case 0x1a2a6cu: goto label_1a2a6c;
        case 0x1a2a70u: goto label_1a2a70;
        case 0x1a2a74u: goto label_1a2a74;
        case 0x1a2a78u: goto label_1a2a78;
        case 0x1a2a7cu: goto label_1a2a7c;
        case 0x1a2a80u: goto label_1a2a80;
        case 0x1a2a84u: goto label_1a2a84;
        case 0x1a2a88u: goto label_1a2a88;
        case 0x1a2a8cu: goto label_1a2a8c;
        case 0x1a2a90u: goto label_1a2a90;
        case 0x1a2a94u: goto label_1a2a94;
        case 0x1a2a98u: goto label_1a2a98;
        case 0x1a2a9cu: goto label_1a2a9c;
        case 0x1a2aa0u: goto label_1a2aa0;
        case 0x1a2aa4u: goto label_1a2aa4;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2ab0u: goto label_1a2ab0;
        case 0x1a2ab4u: goto label_1a2ab4;
        case 0x1a2ab8u: goto label_1a2ab8;
        case 0x1a2abcu: goto label_1a2abc;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac4u: goto label_1a2ac4;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2accu: goto label_1a2acc;
        case 0x1a2ad0u: goto label_1a2ad0;
        case 0x1a2ad4u: goto label_1a2ad4;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2adcu: goto label_1a2adc;
        case 0x1a2ae0u: goto label_1a2ae0;
        case 0x1a2ae4u: goto label_1a2ae4;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2aecu: goto label_1a2aec;
        case 0x1a2af0u: goto label_1a2af0;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2af8u: goto label_1a2af8;
        case 0x1a2afcu: goto label_1a2afc;
        case 0x1a2b00u: goto label_1a2b00;
        case 0x1a2b04u: goto label_1a2b04;
        case 0x1a2b08u: goto label_1a2b08;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b10u: goto label_1a2b10;
        case 0x1a2b14u: goto label_1a2b14;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b1cu: goto label_1a2b1c;
        case 0x1a2b20u: goto label_1a2b20;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b2cu: goto label_1a2b2c;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2b34u: goto label_1a2b34;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b3cu: goto label_1a2b3c;
        case 0x1a2b40u: goto label_1a2b40;
        case 0x1a2b44u: goto label_1a2b44;
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        case 0x1a2ca0u: goto label_1a2ca0;
        case 0x1a2ca4u: goto label_1a2ca4;
        case 0x1a2ca8u: goto label_1a2ca8;
        case 0x1a2cacu: goto label_1a2cac;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cb4u: goto label_1a2cb4;
        case 0x1a2cb8u: goto label_1a2cb8;
        case 0x1a2cbcu: goto label_1a2cbc;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d30u: goto label_1a2d30;
        case 0x1a2d34u: goto label_1a2d34;
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d40u: goto label_1a2d40;
        case 0x1a2d44u: goto label_1a2d44;
        case 0x1a2d48u: goto label_1a2d48;
        case 0x1a2d4cu: goto label_1a2d4c;
        case 0x1a2d50u: goto label_1a2d50;
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d58u: goto label_1a2d58;
        case 0x1a2d5cu: goto label_1a2d5c;
        case 0x1a2d60u: goto label_1a2d60;
        case 0x1a2d64u: goto label_1a2d64;
        case 0x1a2d68u: goto label_1a2d68;
        case 0x1a2d6cu: goto label_1a2d6c;
        case 0x1a2d70u: goto label_1a2d70;
        case 0x1a2d74u: goto label_1a2d74;
        case 0x1a2d78u: goto label_1a2d78;
        case 0x1a2d7cu: goto label_1a2d7c;
        case 0x1a2d80u: goto label_1a2d80;
        case 0x1a2d84u: goto label_1a2d84;
        case 0x1a2d88u: goto label_1a2d88;
        case 0x1a2d8cu: goto label_1a2d8c;
        case 0x1a2d90u: goto label_1a2d90;
        case 0x1a2d94u: goto label_1a2d94;
        case 0x1a2d98u: goto label_1a2d98;
        case 0x1a2d9cu: goto label_1a2d9c;
        case 0x1a2da0u: goto label_1a2da0;
        case 0x1a2da4u: goto label_1a2da4;
        case 0x1a2da8u: goto label_1a2da8;
        case 0x1a2dacu: goto label_1a2dac;
        case 0x1a2db0u: goto label_1a2db0;
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2db8u: goto label_1a2db8;
        case 0x1a2dbcu: goto label_1a2dbc;
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2dc4u: goto label_1a2dc4;
        case 0x1a2dc8u: goto label_1a2dc8;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2dd0u: goto label_1a2dd0;
        case 0x1a2dd4u: goto label_1a2dd4;
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2ddcu: goto label_1a2ddc;
        case 0x1a2de0u: goto label_1a2de0;
        case 0x1a2de4u: goto label_1a2de4;
        case 0x1a2de8u: goto label_1a2de8;
        case 0x1a2decu: goto label_1a2dec;
        case 0x1a2df0u: goto label_1a2df0;
        case 0x1a2df4u: goto label_1a2df4;
        case 0x1a2df8u: goto label_1a2df8;
        case 0x1a2dfcu: goto label_1a2dfc;
        case 0x1a2e00u: goto label_1a2e00;
        case 0x1a2e04u: goto label_1a2e04;
        case 0x1a2e08u: goto label_1a2e08;
        case 0x1a2e0cu: goto label_1a2e0c;
        case 0x1a2e10u: goto label_1a2e10;
        case 0x1a2e14u: goto label_1a2e14;
        case 0x1a2e18u: goto label_1a2e18;
        case 0x1a2e1cu: goto label_1a2e1c;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e24u: goto label_1a2e24;
        case 0x1a2e28u: goto label_1a2e28;
        case 0x1a2e2cu: goto label_1a2e2c;
        case 0x1a2e30u: goto label_1a2e30;
        case 0x1a2e34u: goto label_1a2e34;
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e3cu: goto label_1a2e3c;
        case 0x1a2e40u: goto label_1a2e40;
        case 0x1a2e44u: goto label_1a2e44;
        case 0x1a2e48u: goto label_1a2e48;
        case 0x1a2e4cu: goto label_1a2e4c;
        case 0x1a2e50u: goto label_1a2e50;
        case 0x1a2e54u: goto label_1a2e54;
        case 0x1a2e58u: goto label_1a2e58;
        case 0x1a2e5cu: goto label_1a2e5c;
        case 0x1a2e60u: goto label_1a2e60;
        case 0x1a2e64u: goto label_1a2e64;
        case 0x1a2e68u: goto label_1a2e68;
        case 0x1a2e6cu: goto label_1a2e6c;
        case 0x1a2e70u: goto label_1a2e70;
        case 0x1a2e74u: goto label_1a2e74;
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e7cu: goto label_1a2e7c;
        case 0x1a2e80u: goto label_1a2e80;
        case 0x1a2e84u: goto label_1a2e84;
        case 0x1a2e88u: goto label_1a2e88;
        case 0x1a2e8cu: goto label_1a2e8c;
        case 0x1a2e90u: goto label_1a2e90;
        case 0x1a2e94u: goto label_1a2e94;
        case 0x1a2e98u: goto label_1a2e98;
        case 0x1a2e9cu: goto label_1a2e9c;
        case 0x1a2ea0u: goto label_1a2ea0;
        case 0x1a2ea4u: goto label_1a2ea4;
        case 0x1a2ea8u: goto label_1a2ea8;
        case 0x1a2eacu: goto label_1a2eac;
        case 0x1a2eb0u: goto label_1a2eb0;
        case 0x1a2eb4u: goto label_1a2eb4;
        case 0x1a2eb8u: goto label_1a2eb8;
        case 0x1a2ebcu: goto label_1a2ebc;
        case 0x1a2ec0u: goto label_1a2ec0;
        case 0x1a2ec4u: goto label_1a2ec4;
        case 0x1a2ec8u: goto label_1a2ec8;
        case 0x1a2eccu: goto label_1a2ecc;
        case 0x1a2ed0u: goto label_1a2ed0;
        case 0x1a2ed4u: goto label_1a2ed4;
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2edcu: goto label_1a2edc;
        case 0x1a2ee0u: goto label_1a2ee0;
        case 0x1a2ee4u: goto label_1a2ee4;
        case 0x1a2ee8u: goto label_1a2ee8;
        case 0x1a2eecu: goto label_1a2eec;
        case 0x1a2ef0u: goto label_1a2ef0;
        case 0x1a2ef4u: goto label_1a2ef4;
        case 0x1a2ef8u: goto label_1a2ef8;
        case 0x1a2efcu: goto label_1a2efc;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f04u: goto label_1a2f04;
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f0cu: goto label_1a2f0c;
        case 0x1a2f10u: goto label_1a2f10;
        case 0x1a2f14u: goto label_1a2f14;
        case 0x1a2f18u: goto label_1a2f18;
        case 0x1a2f1cu: goto label_1a2f1c;
        case 0x1a2f20u: goto label_1a2f20;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f28u: goto label_1a2f28;
        case 0x1a2f2cu: goto label_1a2f2c;
        case 0x1a2f30u: goto label_1a2f30;
        case 0x1a2f34u: goto label_1a2f34;
        case 0x1a2f38u: goto label_1a2f38;
        case 0x1a2f3cu: goto label_1a2f3c;
        case 0x1a2f40u: goto label_1a2f40;
        case 0x1a2f44u: goto label_1a2f44;
        case 0x1a2f48u: goto label_1a2f48;
        case 0x1a2f4cu: goto label_1a2f4c;
        case 0x1a2f50u: goto label_1a2f50;
        case 0x1a2f54u: goto label_1a2f54;
        case 0x1a2f58u: goto label_1a2f58;
        case 0x1a2f5cu: goto label_1a2f5c;
        case 0x1a2f60u: goto label_1a2f60;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f68u: goto label_1a2f68;
        case 0x1a2f6cu: goto label_1a2f6c;
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a2f74u: goto label_1a2f74;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f7cu: goto label_1a2f7c;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2f84u: goto label_1a2f84;
        case 0x1a2f88u: goto label_1a2f88;
        case 0x1a2f8cu: goto label_1a2f8c;
        case 0x1a2f90u: goto label_1a2f90;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2f98u: goto label_1a2f98;
        case 0x1a2f9cu: goto label_1a2f9c;
        case 0x1a2fa0u: goto label_1a2fa0;
        case 0x1a2fa4u: goto label_1a2fa4;
        case 0x1a2fa8u: goto label_1a2fa8;
        case 0x1a2facu: goto label_1a2fac;
        case 0x1a2fb0u: goto label_1a2fb0;
        case 0x1a2fb4u: goto label_1a2fb4;
        case 0x1a2fb8u: goto label_1a2fb8;
        case 0x1a2fbcu: goto label_1a2fbc;
        case 0x1a2fc0u: goto label_1a2fc0;
        case 0x1a2fc4u: goto label_1a2fc4;
        case 0x1a2fc8u: goto label_1a2fc8;
        case 0x1a2fccu: goto label_1a2fcc;
        case 0x1a2fd0u: goto label_1a2fd0;
        case 0x1a2fd4u: goto label_1a2fd4;
        case 0x1a2fd8u: goto label_1a2fd8;
        case 0x1a2fdcu: goto label_1a2fdc;
        case 0x1a2fe0u: goto label_1a2fe0;
        case 0x1a2fe4u: goto label_1a2fe4;
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2fecu: goto label_1a2fec;
        case 0x1a2ff0u: goto label_1a2ff0;
        case 0x1a2ff4u: goto label_1a2ff4;
        case 0x1a2ff8u: goto label_1a2ff8;
        case 0x1a2ffcu: goto label_1a2ffc;
        case 0x1a3000u: goto label_1a3000;
        case 0x1a3004u: goto label_1a3004;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3014u: goto label_1a3014;
        case 0x1a3018u: goto label_1a3018;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3020u: goto label_1a3020;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3028u: goto label_1a3028;
        case 0x1a302cu: goto label_1a302c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a3034u: goto label_1a3034;
        case 0x1a3038u: goto label_1a3038;
        case 0x1a303cu: goto label_1a303c;
        case 0x1a3040u: goto label_1a3040;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a3048u: goto label_1a3048;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a3050u: goto label_1a3050;
        case 0x1a3054u: goto label_1a3054;
        case 0x1a3058u: goto label_1a3058;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3060u: goto label_1a3060;
        case 0x1a3064u: goto label_1a3064;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a306cu: goto label_1a306c;
        case 0x1a3070u: goto label_1a3070;
        case 0x1a3074u: goto label_1a3074;
        case 0x1a3078u: goto label_1a3078;
        case 0x1a307cu: goto label_1a307c;
        case 0x1a3080u: goto label_1a3080;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a3088u: goto label_1a3088;
        case 0x1a308cu: goto label_1a308c;
        case 0x1a3090u: goto label_1a3090;
        case 0x1a3094u: goto label_1a3094;
        case 0x1a3098u: goto label_1a3098;
        case 0x1a309cu: goto label_1a309c;
        default: break;
    }

    ctx->pc = 0x1a2a18u;

label_1a2a18:
    // 0x1a2a18: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a2a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1a2a1c:
    // 0x1a2a1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1a2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1a2a20:
    // 0x1a2a20: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1a2a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_1a2a24:
    // 0x1a2a24: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1a2a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1a2a28:
    // 0x1a2a28: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1a2a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_1a2a2c:
    // 0x1a2a2c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1a2a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_1a2a30:
    // 0x1a2a30: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1a2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_1a2a34:
    // 0x1a2a34: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1a2a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_1a2a38:
    // 0x1a2a38: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1a2a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_1a2a3c:
    // 0x1a2a3c: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1a2a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_1a2a40:
    // 0x1a2a40: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1a2a44:
    // 0x1a2a44: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1a2a44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1a2a48:
    // 0x1a2a48: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1a2a48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1a2a4c:
    // 0x1a2a4c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1a2a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1a2a50:
    // 0x1a2a50: 0x8c62f880  lw          $v0, -0x780($v1)
    ctx->pc = 0x1a2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965376)));
label_1a2a54:
    // 0x1a2a54: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1a2a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2a58:
    // 0x1a2a58: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
label_1a2a5c:
    if (ctx->pc == 0x1A2A5Cu) {
        ctx->pc = 0x1A2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A58u;
        // 0x1a2a5c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A60u;
        goto label_1a2a60;
    }
    ctx->pc = 0x1A2A58u;
    {
        const bool branch_taken_0x1a2a58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A58u;
        // 0x1a2a5c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a58) {
            ctx->pc = 0x1A2A70u;
            goto label_1a2a70;
        }
    }
    ctx->pc = 0x1A2A60u;
label_1a2a60:
    // 0x1a2a60: 0xae800470  sw          $zero, 0x470($s4)
    ctx->pc = 0x1a2a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1136), GPR_U32(ctx, 0));
label_1a2a64:
    // 0x1a2a64: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1a2a68:
    // 0x1a2a68: 0x1000017f  b           . + 4 + (0x17F << 2)
label_1a2a6c:
    if (ctx->pc == 0x1A2A6Cu) {
        ctx->pc = 0x1A2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A68u;
        // 0x1a2a6c: 0xac40909c  sw          $zero, -0x6F64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A70u;
        goto label_1a2a70;
    }
    ctx->pc = 0x1A2A68u;
    {
        const bool branch_taken_0x1a2a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A68u;
        // 0x1a2a6c: 0xac40909c  sw          $zero, -0x6F64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a68) {
            ctx->pc = 0x1A3068u;
            goto label_1a3068;
        }
    }
    ctx->pc = 0x1A2A70u;
label_1a2a70:
    // 0x1a2a70: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1a2a74:
    // 0x1a2a74: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1a2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_1a2a78:
    // 0x1a2a78: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
label_1a2a7c:
    if (ctx->pc == 0x1A2A7Cu) {
        ctx->pc = 0x1A2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A78u;
        // 0x1a2a7c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A80u;
        goto label_1a2a80;
    }
    ctx->pc = 0x1A2A78u;
    {
        const bool branch_taken_0x1a2a78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A78u;
        // 0x1a2a7c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a78) {
            ctx->pc = 0x1A2AB0u;
            goto label_1a2ab0;
        }
    }
    ctx->pc = 0x1A2A80u;
label_1a2a80:
    // 0x1a2a80: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x1a2a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a2a84:
    // 0x1a2a84: 0xc06a7c4  jal         func_1A9F10
label_1a2a88:
    if (ctx->pc == 0x1A2A88u) {
        ctx->pc = 0x1A2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A84u;
        // 0x1a2a88: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A8Cu;
        goto label_1a2a8c;
    }
    ctx->pc = 0x1A2A84u;
    SET_GPR_U32(ctx, 31, 0x1A2A8Cu);
    ctx->pc = 0x1A2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A84u;
    // 0x1a2a88: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1A2A84u, 0x1A2A8Cu)) {
        return;
    }
    ctx->pc = 0x1A2A8Cu;
label_1a2a8c:
    // 0x1a2a8c: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x1a2a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a2a90:
    // 0x1a2a90: 0xc06a8ae  jal         func_1AA2B8
label_1a2a94:
    if (ctx->pc == 0x1A2A94u) {
        ctx->pc = 0x1A2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A90u;
        // 0x1a2a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A98u;
        goto label_1a2a98;
    }
    ctx->pc = 0x1A2A90u;
    SET_GPR_U32(ctx, 31, 0x1A2A98u);
    ctx->pc = 0x1A2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A90u;
    // 0x1a2a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA2B8u, 0x1A2A90u, 0x1A2A98u)) {
        return;
    }
    ctx->pc = 0x1A2A98u;
label_1a2a98:
    // 0x1a2a98: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x1a2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a2a9c:
    // 0x1a2a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a2a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a2aa0:
    // 0x1a2aa0: 0xc068c28  jal         func_1A30A0
label_1a2aa4:
    if (ctx->pc == 0x1A2AA4u) {
        ctx->pc = 0x1A2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AA0u;
        // 0x1a2aa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AA8u;
        goto label_1a2aa8;
    }
    ctx->pc = 0x1A2AA0u;
    SET_GPR_U32(ctx, 31, 0x1A2AA8u);
    ctx->pc = 0x1A2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AA0u;
    // 0x1a2aa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A30A0u, 0x1A2AA0u, 0x1A2AA8u)) {
        return;
    }
    ctx->pc = 0x1A2AA8u;
label_1a2aa8:
    // 0x1a2aa8: 0x10000170  b           . + 4 + (0x170 << 2)
label_1a2aac:
    if (ctx->pc == 0x1A2AACu) {
        ctx->pc = 0x1A2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AA8u;
        // 0x1a2aac: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AB0u;
        goto label_1a2ab0;
    }
    ctx->pc = 0x1A2AA8u;
    {
        const bool branch_taken_0x1a2aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AA8u;
        // 0x1a2aac: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2aa8) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2AB0u;
label_1a2ab0:
    // 0x1a2ab0: 0x8c434668  lw          $v1, 0x4668($v0)
    ctx->pc = 0x1a2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18024)));
label_1a2ab4:
    // 0x1a2ab4: 0x14c30051  bne         $a2, $v1, . + 4 + (0x51 << 2)
label_1a2ab8:
    if (ctx->pc == 0x1A2AB8u) {
        ctx->pc = 0x1A2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB4u;
        // 0x1a2ab8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2ABCu;
        goto label_1a2abc;
    }
    ctx->pc = 0x1A2AB4u;
    {
        const bool branch_taken_0x1a2ab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB4u;
        // 0x1a2ab8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ab4) {
            ctx->pc = 0x1A2BFCu;
            goto label_1a2bfc;
        }
    }
    ctx->pc = 0x1A2ABCu;
label_1a2abc:
    // 0x1a2abc: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a2ac0:
    // 0x1a2ac0: 0x5200016a  beql        $s0, $zero, . + 4 + (0x16A << 2)
label_1a2ac4:
    if (ctx->pc == 0x1A2AC4u) {
        ctx->pc = 0x1A2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AC0u;
        // 0x1a2ac4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AC8u;
        goto label_1a2ac8;
    }
    ctx->pc = 0x1A2AC0u;
    {
        const bool branch_taken_0x1a2ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ac0) {
            ctx->pc = 0x1A2AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2AC0u;
            // 0x1a2ac4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2AC8u;
label_1a2ac8:
    // 0x1a2ac8: 0xc07600c  jal         func_1D8030
label_1a2acc:
    if (ctx->pc == 0x1A2ACCu) {
        ctx->pc = 0x1A2AD0u;
        goto label_1a2ad0;
    }
    ctx->pc = 0x1A2AC8u;
    SET_GPR_U32(ctx, 31, 0x1A2AD0u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1A2AC8u, 0x1A2AD0u)) {
        return;
    }
    ctx->pc = 0x1A2AD0u;
label_1a2ad0:
    // 0x1a2ad0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a2ad4:
    if (ctx->pc == 0x1A2AD4u) {
        ctx->pc = 0x1A2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AD0u;
        // 0x1a2ad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AD8u;
        goto label_1a2ad8;
    }
    ctx->pc = 0x1A2AD0u;
    {
        const bool branch_taken_0x1a2ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AD0u;
        // 0x1a2ad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ad0) {
            ctx->pc = 0x1A2ADCu;
            goto label_1a2adc;
        }
    }
    ctx->pc = 0x1A2AD8u;
label_1a2ad8:
    // 0x1a2ad8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a2adc:
    // 0x1a2adc: 0x10600162  beqz        $v1, . + 4 + (0x162 << 2)
label_1a2ae0:
    if (ctx->pc == 0x1A2AE0u) {
        ctx->pc = 0x1A2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ADCu;
        // 0x1a2ae0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AE4u;
        goto label_1a2ae4;
    }
    ctx->pc = 0x1A2ADCu;
    {
        const bool branch_taken_0x1a2adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ADCu;
        // 0x1a2ae0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2adc) {
            ctx->pc = 0x1A3068u;
            goto label_1a3068;
        }
    }
    ctx->pc = 0x1A2AE4u;
label_1a2ae4:
    // 0x1a2ae4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a2ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2ae8:
    // 0x1a2ae8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a2aec:
    // 0x1a2aec: 0x1040015e  beqz        $v0, . + 4 + (0x15E << 2)
label_1a2af0:
    if (ctx->pc == 0x1A2AF0u) {
        ctx->pc = 0x1A2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AECu;
        // 0x1a2af0: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AF4u;
        goto label_1a2af4;
    }
    ctx->pc = 0x1A2AECu;
    {
        const bool branch_taken_0x1a2aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AECu;
        // 0x1a2af0: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2aec) {
            ctx->pc = 0x1A3068u;
            goto label_1a3068;
        }
    }
    ctx->pc = 0x1A2AF4u;
label_1a2af4:
    // 0x1a2af4: 0x2692000c  addiu       $s2, $s4, 0xC
    ctx->pc = 0x1a2af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1a2af8:
    // 0x1a2af8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a2afc:
    // 0x1a2afc: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_1a2b00:
    if (ctx->pc == 0x1A2B00u) {
        ctx->pc = 0x1A2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AFCu;
        // 0x1a2b00: 0x24911510  addiu       $s1, $a0, 0x1510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 5392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B04u;
        goto label_1a2b04;
    }
    ctx->pc = 0x1A2AFCu;
    {
        const bool branch_taken_0x1a2afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AFCu;
        // 0x1a2b00: 0x24911510  addiu       $s1, $a0, 0x1510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 5392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2afc) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B04u;
label_1a2b04:
    // 0x1a2b04: 0x8e221340  lw          $v0, 0x1340($s1)
    ctx->pc = 0x1a2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4928)));
label_1a2b08:
    // 0x1a2b08: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a2b0c:
    // 0x1a2b0c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a2b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a2b10:
    // 0x1a2b10: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_1a2b14:
    if (ctx->pc == 0x1A2B14u) {
        ctx->pc = 0x1A2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B10u;
        // 0x1a2b14: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B18u;
        goto label_1a2b18;
    }
    ctx->pc = 0x1A2B10u;
    {
        const bool branch_taken_0x1a2b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b10) {
            ctx->pc = 0x1A2B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2B10u;
            // 0x1a2b14: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BE4u;
            goto label_1a2be4;
        }
    }
    ctx->pc = 0x1A2B18u;
label_1a2b18:
    // 0x1a2b18: 0xc04f0cc  jal         func_13C330
label_1a2b1c:
    if (ctx->pc == 0x1A2B1Cu) {
        ctx->pc = 0x1A2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B18u;
        // 0x1a2b1c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B20u;
        goto label_1a2b20;
    }
    ctx->pc = 0x1A2B18u;
    SET_GPR_U32(ctx, 31, 0x1A2B20u);
    ctx->pc = 0x1A2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B18u;
    // 0x1a2b1c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A2B18u, 0x1A2B20u)) {
        return;
    }
    ctx->pc = 0x1A2B20u;
label_1a2b20:
    // 0x1a2b20: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a2b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a2b24:
    // 0x1a2b24: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a2b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a2b28:
    // 0x1a2b28: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1a2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a2b2c:
    // 0x1a2b2c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1a2b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b30:
    // 0x1a2b30: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1a2b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b34:
    // 0x1a2b34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1a2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_1a2b38:
    // 0x1a2b38: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2b3c:
    // 0x1a2b3c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2b40:
    // 0x1a2b40: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2b44:
    // 0x1a2b44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a2b44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a2b48:
    // 0x1a2b48: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1a2b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a2b4c:
    // 0x1a2b4c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1a2b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a2b50:
    // 0x1a2b50: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2b54:
    // 0x1a2b54: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a2b54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1a2b58:
    // 0x1a2b58: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1a2b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a2b5c:
    // 0x1a2b5c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2b60:
    // 0x1a2b60: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1a2b60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1a2b64:
    // 0x1a2b64: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1a2b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a2b68:
    // 0x1a2b68: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x1a2b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a2b6c:
    // 0x1a2b6c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x1a2b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a2b70:
    // 0x1a2b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a2b74:
    // 0x1a2b74: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1a2b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b78:
    // 0x1a2b78: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1a2b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2b7c:
    // 0x1a2b7c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1a2b80:
    // 0x1a2b80: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2b84:
    // 0x1a2b84: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1a2b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2b88:
    // 0x1a2b88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a2b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a2b8c:
    // 0x1a2b8c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2b90:
    // 0x1a2b90: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a2b90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1a2b94:
    // 0x1a2b94: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a2b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a2b98:
    // 0x1a2b98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a2b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a2b9c:
    // 0x1a2b9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a2ba0:
    // 0x1a2ba0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1a2ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2ba4:
    // 0x1a2ba4: 0x0  nop
    ctx->pc = 0x1a2ba4u;
    // NOP
label_1a2ba8:
    // 0x1a2ba8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1a2bac:
    if (ctx->pc == 0x1A2BACu) {
        ctx->pc = 0x1A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA8u;
        // 0x1a2bac: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BB0u;
        goto label_1a2bb0;
    }
    ctx->pc = 0x1A2BA8u;
    {
        const bool branch_taken_0x1a2ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2ba8) {
            ctx->pc = 0x1A2BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BA8u;
            // 0x1a2bac: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BE4u;
            goto label_1a2be4;
        }
    }
    ctx->pc = 0x1A2BB0u;
label_1a2bb0:
    // 0x1a2bb0: 0xc07600c  jal         func_1D8030
label_1a2bb4:
    if (ctx->pc == 0x1A2BB4u) {
        ctx->pc = 0x1A2BB8u;
        goto label_1a2bb8;
    }
    ctx->pc = 0x1A2BB0u;
    SET_GPR_U32(ctx, 31, 0x1A2BB8u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1A2BB0u, 0x1A2BB8u)) {
        return;
    }
    ctx->pc = 0x1A2BB8u;
label_1a2bb8:
    // 0x1a2bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a2bbc:
    if (ctx->pc == 0x1A2BBCu) {
        ctx->pc = 0x1A2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BB8u;
        // 0x1a2bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BC0u;
        goto label_1a2bc0;
    }
    ctx->pc = 0x1A2BB8u;
    {
        const bool branch_taken_0x1a2bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BB8u;
        // 0x1a2bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bb8) {
            ctx->pc = 0x1A2BC8u;
            goto label_1a2bc8;
        }
    }
    ctx->pc = 0x1A2BC0u;
label_1a2bc0:
    // 0x1a2bc0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1a2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a2bc4:
    // 0x1a2bc4: 0x0  nop
    ctx->pc = 0x1a2bc4u;
    // NOP
label_1a2bc8:
    // 0x1a2bc8: 0xc04f0cc  jal         func_13C330
label_1a2bcc:
    if (ctx->pc == 0x1A2BCCu) {
        ctx->pc = 0x1A2BD0u;
        goto label_1a2bd0;
    }
    ctx->pc = 0x1A2BC8u;
    SET_GPR_U32(ctx, 31, 0x1A2BD0u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A2BC8u, 0x1A2BD0u)) {
        return;
    }
    ctx->pc = 0x1A2BD0u;
label_1a2bd0:
    // 0x1a2bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2bd4:
    // 0x1a2bd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a2bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2bd8:
    // 0x1a2bd8: 0xc0685da  jal         func_1A1768
label_1a2bdc:
    if (ctx->pc == 0x1A2BDCu) {
        ctx->pc = 0x1A2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BD8u;
        // 0x1a2bdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BE0u;
        goto label_1a2be0;
    }
    ctx->pc = 0x1A2BD8u;
    SET_GPR_U32(ctx, 31, 0x1A2BE0u);
    ctx->pc = 0x1A2BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BD8u;
    // 0x1a2bdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A2BD8u, 0x1A2BE0u)) {
        return;
    }
    ctx->pc = 0x1A2BE0u;
label_1a2be0:
    // 0x1a2be0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a2be4:
    // 0x1a2be4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a2be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a2be8:
    // 0x1a2be8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1a2be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a2bec:
    // 0x1a2bec: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_1a2bf0:
    if (ctx->pc == 0x1A2BF0u) {
        ctx->pc = 0x1A2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BECu;
        // 0x1a2bf0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BF4u;
        goto label_1a2bf4;
    }
    ctx->pc = 0x1A2BECu;
    {
        const bool branch_taken_0x1a2bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BECu;
        // 0x1a2bf0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bec) {
            ctx->pc = 0x1A2AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2af8;
        }
    }
    ctx->pc = 0x1A2BF4u;
label_1a2bf4:
    // 0x1a2bf4: 0x1000011d  b           . + 4 + (0x11D << 2)
label_1a2bf8:
    if (ctx->pc == 0x1A2BF8u) {
        ctx->pc = 0x1A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF4u;
        // 0x1a2bf8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BFCu;
        goto label_1a2bfc;
    }
    ctx->pc = 0x1A2BF4u;
    {
        const bool branch_taken_0x1a2bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF4u;
        // 0x1a2bf8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bf4) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2BFCu;
label_1a2bfc:
    // 0x1a2bfc: 0x8c434608  lw          $v1, 0x4608($v0)
    ctx->pc = 0x1a2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17928)));
label_1a2c00:
    // 0x1a2c00: 0x14c30049  bne         $a2, $v1, . + 4 + (0x49 << 2)
label_1a2c04:
    if (ctx->pc == 0x1A2C04u) {
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C08u;
        goto label_1a2c08;
    }
    ctx->pc = 0x1A2C00u;
    {
        const bool branch_taken_0x1a2c00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c00) {
            ctx->pc = 0x1A2D28u;
            goto label_1a2d28;
        }
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a2c0c:
    // 0x1a2c0c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1a2c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2c10:
    // 0x1a2c10: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1a2c14:
    // 0x1a2c14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a2c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a2c18:
    // 0x1a2c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c1c:
    // 0x1a2c1c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a2c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a2c20:
    // 0x1a2c20: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a2c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2c24:
    // 0x1a2c24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1a2c28:
    if (ctx->pc == 0x1A2C28u) {
        ctx->pc = 0x1A2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C24u;
        // 0x1a2c28: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C2Cu;
        goto label_1a2c2c;
    }
    ctx->pc = 0x1A2C24u;
    {
        const bool branch_taken_0x1a2c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C24u;
        // 0x1a2c28: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c24) {
            ctx->pc = 0x1A2C74u;
            goto label_1a2c74;
        }
    }
    ctx->pc = 0x1A2C2Cu;
label_1a2c2c:
    // 0x1a2c2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1a2c30:
    // 0x1a2c30: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1a2c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c34:
    // 0x1a2c34: 0x24494238  addiu       $t1, $v0, 0x4238
    ctx->pc = 0x1a2c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16952));
label_1a2c38:
    // 0x1a2c38: 0x2686000c  addiu       $a2, $s4, 0xC
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1a2c3c:
    // 0x1a2c3c: 0x0  nop
    ctx->pc = 0x1a2c3cu;
    // NOP
label_1a2c40:
    // 0x1a2c40: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1a2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a2c44:
    // 0x1a2c44: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a2c48:
    if (ctx->pc == 0x1A2C48u) {
        ctx->pc = 0x1A2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C44u;
        // 0x1a2c48: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C4Cu;
        goto label_1a2c4c;
    }
    ctx->pc = 0x1A2C44u;
    {
        const bool branch_taken_0x1a2c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C44u;
        // 0x1a2c48: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c44) {
            ctx->pc = 0x1A2C64u;
            goto label_1a2c64;
        }
    }
    ctx->pc = 0x1A2C4Cu;
label_1a2c4c:
    // 0x1a2c4c: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x1a2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_1a2c50:
    // 0x1a2c50: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1a2c54:
    if (ctx->pc == 0x1A2C54u) {
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C58u;
        goto label_1a2c58;
    }
    ctx->pc = 0x1A2C50u;
    {
        const bool branch_taken_0x1a2c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2c50) {
            ctx->pc = 0x1A2C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C50u;
            // 0x1a2c54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C68u;
            goto label_1a2c68;
        }
    }
    ctx->pc = 0x1A2C58u;
label_1a2c58:
    // 0x1a2c58: 0xc4952824  lwc1        $f21, 0x2824($a0)
    ctx->pc = 0x1a2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a2c5c:
    // 0x1a2c5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a2c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c60:
    // 0x1a2c60: 0xc4942820  lwc1        $f20, 0x2820($a0)
    ctx->pc = 0x1a2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2c64:
    // 0x1a2c64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a2c68:
    // 0x1a2c68: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1a2c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1a2c6c:
    // 0x1a2c6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1a2c70:
    if (ctx->pc == 0x1A2C70u) {
        ctx->pc = 0x1A2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C6Cu;
        // 0x1a2c70: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C74u;
        goto label_1a2c74;
    }
    ctx->pc = 0x1A2C6Cu;
    {
        const bool branch_taken_0x1a2c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C6Cu;
        // 0x1a2c70: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c6c) {
            ctx->pc = 0x1A2C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2c40;
        }
    }
    ctx->pc = 0x1A2C74u;
label_1a2c74:
    // 0x1a2c74: 0x110000fc  beqz        $t0, . + 4 + (0xFC << 2)
label_1a2c78:
    if (ctx->pc == 0x1A2C78u) {
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C7Cu;
        goto label_1a2c7c;
    }
    ctx->pc = 0x1A2C74u;
    {
        const bool branch_taken_0x1a2c74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c74) {
            ctx->pc = 0x1A3068u;
            goto label_1a3068;
        }
    }
    ctx->pc = 0x1A2C7Cu;
label_1a2c7c:
    // 0x1a2c7c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1a2c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
label_1a2c80:
    // 0x1a2c80: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a2c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a2c84:
    // 0x1a2c84: 0x2692000c  addiu       $s2, $s4, 0xC
    ctx->pc = 0x1a2c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1a2c88:
    // 0x1a2c88: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1a2c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a2c8c:
    // 0x1a2c8c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_1a2c90:
    if (ctx->pc == 0x1A2C90u) {
        ctx->pc = 0x1A2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C8Cu;
        // 0x1a2c90: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C94u;
        goto label_1a2c94;
    }
    ctx->pc = 0x1A2C8Cu;
    {
        const bool branch_taken_0x1a2c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c8c) {
            ctx->pc = 0x1A2C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C8Cu;
            // 0x1a2c90: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2D10u;
            goto label_1a2d10;
        }
    }
    ctx->pc = 0x1A2C94u;
label_1a2c94:
    // 0x1a2c94: 0x5235001e  beql        $s1, $s5, . + 4 + (0x1E << 2)
label_1a2c98:
    if (ctx->pc == 0x1A2C98u) {
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C9Cu;
        goto label_1a2c9c;
    }
    ctx->pc = 0x1A2C94u;
    {
        const bool branch_taken_0x1a2c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x1a2c94) {
            ctx->pc = 0x1A2C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C94u;
            // 0x1a2c98: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2D10u;
            goto label_1a2d10;
        }
    }
    ctx->pc = 0x1A2C9Cu;
label_1a2c9c:
    // 0x1a2c9c: 0xc0c580c  jal         func_316030
label_1a2ca0:
    if (ctx->pc == 0x1A2CA0u) {
        ctx->pc = 0x1A2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C9Cu;
        // 0x1a2ca0: 0x26131510  addiu       $s3, $s0, 0x1510 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CA4u;
        goto label_1a2ca4;
    }
    ctx->pc = 0x1A2C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A2CA4u);
    ctx->pc = 0x1A2CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C9Cu;
    // 0x1a2ca0: 0x26131510  addiu       $s3, $s0, 0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A2C9Cu, 0x1A2CA4u)) {
        return;
    }
    ctx->pc = 0x1A2CA4u;
label_1a2ca4:
    // 0x1a2ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2ca8:
    // 0x1a2ca8: 0x0  nop
    ctx->pc = 0x1a2ca8u;
    // NOP
label_1a2cac:
    // 0x1a2cac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2cb0:
    // 0x1a2cb0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1a2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1a2cb4:
    // 0x1a2cb4: 0x4614a881  sub.s       $f2, $f21, $f20
    ctx->pc = 0x1a2cb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1a2cb8:
    // 0x1a2cb8: 0x27a300c4  addiu       $v1, $sp, 0xC4
    ctx->pc = 0x1a2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1a2cbc:
    // 0x1a2cbc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a2cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2cc0:
    // 0x1a2cc0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a2cc4:
    // 0x1a2cc4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1a2cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1a2cc8:
    // 0x1a2cc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a2cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a2ccc:
    // 0x1a2ccc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1a2cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a2cd0:
    // 0x1a2cd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2cd4:
    // 0x1a2cd4: 0x0  nop
    ctx->pc = 0x1a2cd4u;
    // NOP
label_1a2cd8:
    // 0x1a2cd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a2cdc:
    if (ctx->pc == 0x1A2CDCu) {
        ctx->pc = 0x1A2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD8u;
        // 0x1a2cdc: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CE0u;
        goto label_1a2ce0;
    }
    ctx->pc = 0x1A2CD8u;
    {
        const bool branch_taken_0x1a2cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD8u;
        // 0x1a2cdc: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cd8) {
            ctx->pc = 0x1A2CE4u;
            goto label_1a2ce4;
        }
    }
    ctx->pc = 0x1A2CE0u;
label_1a2ce0:
    // 0x1a2ce0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a2ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ce4:
    // 0x1a2ce4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2ce8:
    // 0x1a2ce8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1a2ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1a2cec:
    // 0x1a2cec: 0xc600285c  lwc1        $f0, 0x285C($s0)
    ctx->pc = 0x1a2cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2cf0:
    // 0x1a2cf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2cf4:
    // 0x1a2cf4: 0x0  nop
    ctx->pc = 0x1a2cf4u;
    // NOP
label_1a2cf8:
    // 0x1a2cf8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a2cfc:
    if (ctx->pc == 0x1A2CFCu) {
        ctx->pc = 0x1A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CF8u;
        // 0x1a2cfc: 0x2602285c  addiu       $v0, $s0, 0x285C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D00u;
        goto label_1a2d00;
    }
    ctx->pc = 0x1A2CF8u;
    {
        const bool branch_taken_0x1a2cf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CF8u;
        // 0x1a2cfc: 0x2602285c  addiu       $v0, $s0, 0x285C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cf8) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2D00u;
label_1a2d00:
    // 0x1a2d00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a2d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d04:
    // 0x1a2d04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a2d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2d08:
    // 0x1a2d08: 0xe660134c  swc1        $f0, 0x134C($s3)
    ctx->pc = 0x1a2d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4940), bits); }
label_1a2d0c:
    // 0x1a2d0c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a2d10:
    // 0x1a2d10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a2d14:
    // 0x1a2d14: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a2d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a2d18:
    // 0x1a2d18: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_1a2d1c:
    if (ctx->pc == 0x1A2D1Cu) {
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D20u;
        goto label_1a2d20;
    }
    ctx->pc = 0x1A2D18u;
    {
        const bool branch_taken_0x1a2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d18) {
            ctx->pc = 0x1A2C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2D20u;
label_1a2d20:
    // 0x1a2d20: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1a2d24:
    if (ctx->pc == 0x1A2D24u) {
        ctx->pc = 0x1A2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D20u;
        // 0x1a2d24: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D28u;
        goto label_1a2d28;
    }
    ctx->pc = 0x1A2D20u;
    {
        const bool branch_taken_0x1a2d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D20u;
        // 0x1a2d24: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d20) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2D28u;
label_1a2d28:
    // 0x1a2d28: 0x8c438180  lw          $v1, -0x7E80($v0)
    ctx->pc = 0x1a2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934912)));
label_1a2d2c:
    // 0x1a2d2c: 0x14c300cf  bne         $a2, $v1, . + 4 + (0xCF << 2)
label_1a2d30:
    if (ctx->pc == 0x1A2D30u) {
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D34u;
        goto label_1a2d34;
    }
    ctx->pc = 0x1A2D2Cu;
    {
        const bool branch_taken_0x1a2d2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d2c) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2D34u;
label_1a2d34:
    // 0x1a2d34: 0xc07600c  jal         func_1D8030
label_1a2d38:
    if (ctx->pc == 0x1A2D38u) {
        ctx->pc = 0x1A2D3Cu;
        goto label_1a2d3c;
    }
    ctx->pc = 0x1A2D34u;
    SET_GPR_U32(ctx, 31, 0x1A2D3Cu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1A2D34u, 0x1A2D3Cu)) {
        return;
    }
    ctx->pc = 0x1A2D3Cu;
label_1a2d3c:
    // 0x1a2d3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a2d40:
    if (ctx->pc == 0x1A2D40u) {
        ctx->pc = 0x1A2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D3Cu;
        // 0x1a2d40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D44u;
        goto label_1a2d44;
    }
    ctx->pc = 0x1A2D3Cu;
    {
        const bool branch_taken_0x1a2d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D3Cu;
        // 0x1a2d40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d3c) {
            ctx->pc = 0x1A2D48u;
            goto label_1a2d48;
        }
    }
    ctx->pc = 0x1A2D44u;
label_1a2d44:
    // 0x1a2d44: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a2d48:
    // 0x1a2d48: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
label_1a2d4c:
    if (ctx->pc == 0x1A2D4Cu) {
        ctx->pc = 0x1A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D48u;
        // 0x1a2d4c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D50u;
        goto label_1a2d50;
    }
    ctx->pc = 0x1A2D48u;
    {
        const bool branch_taken_0x1a2d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D48u;
        // 0x1a2d4c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d48) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2D50u;
label_1a2d50:
    // 0x1a2d50: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a2d54:
    // 0x1a2d54: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
label_1a2d58:
    if (ctx->pc == 0x1A2D58u) {
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D5Cu;
        goto label_1a2d5c;
    }
    ctx->pc = 0x1A2D54u;
    {
        const bool branch_taken_0x1a2d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d54) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A2D5Cu;
label_1a2d5c:
    // 0x1a2d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2d60:
    // 0x1a2d60: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a2d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a2d64:
    // 0x1a2d64: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1a2d64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a2d68:
    // 0x1a2d68: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x1a2d68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a2d6c:
    // 0x1a2d6c: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x1a2d6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1a2d70:
    // 0x1a2d70: 0x2691000c  addiu       $s1, $s4, 0xC
    ctx->pc = 0x1a2d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1a2d74:
    // 0x1a2d74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a2d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d78:
    // 0x1a2d78: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x1a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1a2d7c:
    // 0x1a2d7c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a2d80:
    // 0x1a2d80: 0x506000b4  beql        $v1, $zero, . + 4 + (0xB4 << 2)
label_1a2d84:
    if (ctx->pc == 0x1A2D84u) {
        ctx->pc = 0x1A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D80u;
        // 0x1a2d84: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D88u;
        goto label_1a2d88;
    }
    ctx->pc = 0x1A2D80u;
    {
        const bool branch_taken_0x1a2d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d80) {
            ctx->pc = 0x1A2D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2D80u;
            // 0x1a2d84: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A2D88u;
label_1a2d88:
    // 0x1a2d88: 0xc07600c  jal         func_1D8030
label_1a2d8c:
    if (ctx->pc == 0x1A2D8Cu) {
        ctx->pc = 0x1A2D90u;
        goto label_1a2d90;
    }
    ctx->pc = 0x1A2D88u;
    SET_GPR_U32(ctx, 31, 0x1A2D90u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1A2D88u, 0x1A2D90u)) {
        return;
    }
    ctx->pc = 0x1A2D90u;
label_1a2d90:
    // 0x1a2d90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a2d94:
    if (ctx->pc == 0x1A2D94u) {
        ctx->pc = 0x1A2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D90u;
        // 0x1a2d94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D98u;
        goto label_1a2d98;
    }
    ctx->pc = 0x1A2D90u;
    {
        const bool branch_taken_0x1a2d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D90u;
        // 0x1a2d94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d90) {
            ctx->pc = 0x1A2D9Cu;
            goto label_1a2d9c;
        }
    }
    ctx->pc = 0x1A2D98u;
label_1a2d98:
    // 0x1a2d98: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1a2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a2d9c:
    // 0x1a2d9c: 0xc04f0cc  jal         func_13C330
label_1a2da0:
    if (ctx->pc == 0x1A2DA0u) {
        ctx->pc = 0x1A2DA4u;
        goto label_1a2da4;
    }
    ctx->pc = 0x1A2D9Cu;
    SET_GPR_U32(ctx, 31, 0x1A2DA4u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A2D9Cu, 0x1A2DA4u)) {
        return;
    }
    ctx->pc = 0x1A2DA4u;
label_1a2da4:
    // 0x1a2da4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a2da8:
    // 0x1a2da8: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a2da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a2dac:
    // 0x1a2dac: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a2dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a2db0:
    // 0x1a2db0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a2db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a2db4:
    // 0x1a2db4: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1a2db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2db8:
    // 0x1a2db8: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1a2db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2dbc:
    // 0x1a2dbc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1a2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_1a2dc0:
    // 0x1a2dc0: 0xc04f0cc  jal         func_13C330
label_1a2dc4:
    if (ctx->pc == 0x1A2DC4u) {
        ctx->pc = 0x1A2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DC0u;
        // 0x1a2dc4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DC8u;
        goto label_1a2dc8;
    }
    ctx->pc = 0x1A2DC0u;
    SET_GPR_U32(ctx, 31, 0x1A2DC8u);
    ctx->pc = 0x1A2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DC0u;
    // 0x1a2dc4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A2DC0u, 0x1A2DC8u)) {
        return;
    }
    ctx->pc = 0x1A2DC8u;
label_1a2dc8:
    // 0x1a2dc8: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x1a2dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a2dcc:
    // 0x1a2dcc: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x1a2dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a2dd0:
    // 0x1a2dd0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a2dd4:
    // 0x1a2dd4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1a2dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2dd8:
    // 0x1a2dd8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1a2dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2ddc:
    // 0x1a2ddc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1a2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_1a2de0:
    // 0x1a2de0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1a2de4:
    // 0x1a2de4: 0xe6f60004  swc1        $f22, 0x4($s7)
    ctx->pc = 0x1a2de4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1a2de8:
    // 0x1a2de8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1a2dec:
    // 0x1a2dec: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1a2df0:
    // 0x1a2df0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1a2df4:
    // 0x1a2df4: 0xe6d60008  swc1        $f22, 0x8($s6)
    ctx->pc = 0x1a2df4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_1a2df8:
    // 0x1a2df8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1a2df8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a2dfc:
    // 0x1a2dfc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1a2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1a2e00:
    // 0x1a2e00: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1a2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1a2e04:
    // 0x1a2e04: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a2e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2e08:
    // 0x1a2e08: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1a2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a2e0c:
    // 0x1a2e0c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a2e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2e10:
    // 0x1a2e10: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a2e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a2e14:
    // 0x1a2e14: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1a2e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a2e18:
    // 0x1a2e18: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2e1c:
    // 0x1a2e1c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1a2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a2e20:
    // 0x1a2e20: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a2e20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1a2e24:
    // 0x1a2e24: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1a2e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a2e28:
    // 0x1a2e28: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a2e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a2e2c:
    // 0x1a2e2c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1a2e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1a2e30:
    // 0x1a2e30: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1a2e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1a2e34:
    // 0x1a2e34: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x1a2e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a2e38:
    // 0x1a2e38: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x1a2e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a2e3c:
    // 0x1a2e3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1a2e40:
    // 0x1a2e40: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1a2e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2e44:
    // 0x1a2e44: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1a2e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2e48:
    // 0x1a2e48: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1a2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1a2e4c:
    // 0x1a2e4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2e50:
    // 0x1a2e50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a2e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2e54:
    // 0x1a2e54: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1a2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_1a2e58:
    // 0x1a2e58: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1a2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1a2e5c:
    // 0x1a2e5c: 0xe6b50008  swc1        $f21, 0x8($s5)
    ctx->pc = 0x1a2e5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1a2e60:
    // 0x1a2e60: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1a2e64:
    // 0x1a2e64: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a2e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2e68:
    // 0x1a2e68: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x1a2e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2e6c:
    // 0x1a2e6c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a2e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a2e70:
    // 0x1a2e70: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1a2e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2e74:
    // 0x1a2e74: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a2e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a2e78:
    // 0x1a2e78: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a2e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a2e7c:
    // 0x1a2e7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a2e80:
    // 0x1a2e80: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a2e80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2e84:
    // 0x1a2e84: 0x0  nop
    ctx->pc = 0x1a2e84u;
    // NOP
label_1a2e88:
    // 0x1a2e88: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1a2e8c:
    if (ctx->pc == 0x1A2E8Cu) {
        ctx->pc = 0x1A2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E88u;
        // 0x1a2e8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E90u;
        goto label_1a2e90;
    }
    ctx->pc = 0x1A2E88u;
    {
        const bool branch_taken_0x1a2e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2e88) {
            ctx->pc = 0x1A2E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2E88u;
            // 0x1a2e8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2EC4u;
            goto label_1a2ec4;
        }
    }
    ctx->pc = 0x1A2E90u;
label_1a2e90:
    // 0x1a2e90: 0x6ba60077  ldl         $a2, 0x77($sp)
    ctx->pc = 0x1a2e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a2e94:
    // 0x1a2e94: 0x6fa60070  ldr         $a2, 0x70($sp)
    ctx->pc = 0x1a2e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a2e98:
    // 0x1a2e98: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1a2e9c:
    // 0x1a2e9c: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x1a2e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2ea0:
    // 0x1a2ea0: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x1a2ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2ea4:
    // 0x1a2ea4: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x1a2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
label_1a2ea8:
    // 0x1a2ea8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a2eac:
    if (ctx->pc == 0x1A2EACu) {
        ctx->pc = 0x1A2EB0u;
        goto label_1a2eb0;
    }
    ctx->pc = 0x1A2EA8u;
    {
        const bool branch_taken_0x1a2ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ea8) {
            ctx->pc = 0x1A2F10u;
            goto label_1a2f10;
        }
    }
    ctx->pc = 0x1A2EB0u;
label_1a2eb0:
    // 0x1a2eb0: 0x0  nop
    ctx->pc = 0x1a2eb0u;
    // NOP
label_1a2eb4:
    // 0x1a2eb4: 0x0  nop
    ctx->pc = 0x1a2eb4u;
    // NOP
label_1a2eb8:
    // 0x1a2eb8: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x1a2eb8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
label_1a2ebc:
    // 0x1a2ebc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a2ec0:
    if (ctx->pc == 0x1A2EC0u) {
        ctx->pc = 0x1A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EBCu;
        // 0x1a2ec0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EC4u;
        goto label_1a2ec4;
    }
    ctx->pc = 0x1A2EBCu;
    {
        const bool branch_taken_0x1a2ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EBCu;
        // 0x1a2ec0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ebc) {
            ctx->pc = 0x1A2EF0u;
            goto label_1a2ef0;
        }
    }
    ctx->pc = 0x1A2EC4u;
label_1a2ec4:
    // 0x1a2ec4: 0xc04642c  jal         func_1190B0
label_1a2ec8:
    if (ctx->pc == 0x1A2EC8u) {
        ctx->pc = 0x1A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EC4u;
        // 0x1a2ec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2ECCu;
        goto label_1a2ecc;
    }
    ctx->pc = 0x1A2EC4u;
    SET_GPR_U32(ctx, 31, 0x1A2ECCu);
    ctx->pc = 0x1A2EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EC4u;
    // 0x1a2ec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A2EC4u, 0x1A2ECCu)) {
        return;
    }
    ctx->pc = 0x1A2ECCu;
label_1a2ecc:
    // 0x1a2ecc: 0x0  nop
    ctx->pc = 0x1a2eccu;
    // NOP
label_1a2ed0:
    // 0x1a2ed0: 0x0  nop
    ctx->pc = 0x1a2ed0u;
    // NOP
label_1a2ed4:
    // 0x1a2ed4: 0x46000004  c1          0x4
    ctx->pc = 0x1a2ed4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1a2ed8:
    // 0x1a2ed8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a2ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2edc:
    // 0x1a2edc: 0x0  nop
    ctx->pc = 0x1a2edcu;
    // NOP
label_1a2ee0:
    // 0x1a2ee0: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
label_1a2ee4:
    if (ctx->pc == 0x1A2EE4u) {
        ctx->pc = 0x1A2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EE0u;
        // 0x1a2ee4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EE8u;
        goto label_1a2ee8;
    }
    ctx->pc = 0x1A2EE0u;
    {
        const bool branch_taken_0x1a2ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EE0u;
        // 0x1a2ee4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ee0) {
            ctx->pc = 0x1A2EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2EE8u;
label_1a2ee8:
    // 0x1a2ee8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2eec:
    // 0x1a2eec: 0x0  nop
    ctx->pc = 0x1a2eecu;
    // NOP
label_1a2ef0:
    // 0x1a2ef0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2ef4:
    // 0x1a2ef4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1a2ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2ef8:
    // 0x1a2ef8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a2ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a2efc:
    // 0x1a2efc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a2efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1a2f00:
    // 0x1a2f00: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a2f00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a2f04:
    // 0x1a2f04: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a2f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a2f08:
    // 0x1a2f08: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1a2f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a2f0c:
    // 0x1a2f0c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1a2f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a2f10:
    // 0x1a2f10: 0x6ba40067  ldl         $a0, 0x67($sp)
    ctx->pc = 0x1a2f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a2f14:
    // 0x1a2f14: 0x6fa40060  ldr         $a0, 0x60($sp)
    ctx->pc = 0x1a2f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a2f18:
    // 0x1a2f18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1a2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a2f1c:
    // 0x1a2f1c: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x1a2f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2f20:
    // 0x1a2f20: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x1a2f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2f24:
    // 0x1a2f24: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x1a2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_1a2f28:
    // 0x1a2f28: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1a2f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a2f2c:
    // 0x1a2f2c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1a2f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a2f30:
    // 0x1a2f30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a2f34:
    // 0x1a2f34: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1a2f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2f38:
    // 0x1a2f38: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1a2f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2f3c:
    // 0x1a2f3c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1a2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_1a2f40:
    // 0x1a2f40: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1a2f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a2f44:
    // 0x1a2f44: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1a2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2f48:
    // 0x1a2f48: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1a2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2f4c:
    // 0x1a2f4c: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x1a2f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1a2f50:
    // 0x1a2f50: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a2f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2f54:
    // 0x1a2f54: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x1a2f54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2f58:
    // 0x1a2f58: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1a2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a2f5c:
    // 0x1a2f5c: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x1a2f5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_1a2f60:
    // 0x1a2f60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a2f64:
    // 0x1a2f64: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1a2f64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1a2f68:
    // 0x1a2f68: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a2f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a2f6c:
    // 0x1a2f6c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1a2f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_1a2f70:
    // 0x1a2f70: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x1a2f70u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_1a2f74:
    // 0x1a2f74: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a2f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1a2f78:
    // 0x1a2f78: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a2f78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a2f7c:
    // 0x1a2f7c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x1a2f7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a2f80:
    // 0x1a2f80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a2f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a2f84:
    // 0x1a2f84: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1a2f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a2f88:
    // 0x1a2f88: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1a2f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a2f8c:
    // 0x1a2f8c: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1a2f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a2f90:
    // 0x1a2f90: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a2f94:
    // 0x1a2f94: 0xb3a60097  sdl         $a2, 0x97($sp)
    ctx->pc = 0x1a2f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2f98:
    // 0x1a2f98: 0xb7a60090  sdr         $a2, 0x90($sp)
    ctx->pc = 0x1a2f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2f9c:
    // 0x1a2f9c: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x1a2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
label_1a2fa0:
    // 0x1a2fa0: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1a2fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a2fa4:
    // 0x1a2fa4: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1a2fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a2fa8:
    // 0x1a2fa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a2fac:
    // 0x1a2fac: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x1a2facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2fb0:
    // 0x1a2fb0: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x1a2fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2fb4:
    // 0x1a2fb4: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1a2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1a2fb8:
    // 0x1a2fb8: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1a2fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a2fbc:
    // 0x1a2fbc: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1a2fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a2fc0:
    // 0x1a2fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a2fc4:
    // 0x1a2fc4: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x1a2fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2fc8:
    // 0x1a2fc8: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x1a2fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2fcc:
    // 0x1a2fcc: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x1a2fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_1a2fd0:
    // 0x1a2fd0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a2fd4:
    // 0x1a2fd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a2fd8:
    // 0x1a2fd8: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x1a2fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a2fdc:
    // 0x1a2fdc: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x1a2fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a2fe0:
    // 0x1a2fe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a2fe4:
    // 0x1a2fe4: 0xb3a700b7  sdl         $a3, 0xB7($sp)
    ctx->pc = 0x1a2fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2fe8:
    // 0x1a2fe8: 0xb7a700b0  sdr         $a3, 0xB0($sp)
    ctx->pc = 0x1a2fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2fec:
    // 0x1a2fec: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1a2fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1a2ff0:
    // 0x1a2ff0: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x1a2ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1a2ff4:
    // 0x1a2ff4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1a2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1a2ff8:
    // 0x1a2ff8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1a2ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1a2ffc:
    // 0x1a2ffc: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1a2ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1a3000:
    // 0x1a3000: 0xc0f809  jalr        $a2
label_1a3004:
    if (ctx->pc == 0x1A3004u) {
        ctx->pc = 0x1A3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3000u;
        // 0x1a3004: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3008u;
        goto label_1a3008;
    }
    ctx->pc = 0x1A3000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A3008u);
        ctx->pc = 0x1A3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3000u;
        // 0x1a3004: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3000u, 0x1A3008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3008u;
label_1a3008:
    // 0x1a3008: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a3008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a300c:
    // 0x1a300c: 0x24701510  addiu       $s0, $v1, 0x1510
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5392));
label_1a3010:
    // 0x1a3010: 0x8e021340  lw          $v0, 0x1340($s0)
    ctx->pc = 0x1a3010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1a3014:
    // 0x1a3014: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a3018:
    // 0x1a3018: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a3018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a301c:
    // 0x1a301c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1a3020:
    if (ctx->pc == 0x1A3020u) {
        ctx->pc = 0x1A3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A301Cu;
        // 0x1a3020: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3024u;
        goto label_1a3024;
    }
    ctx->pc = 0x1A301Cu;
    {
        const bool branch_taken_0x1a301c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a301c) {
            ctx->pc = 0x1A3020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A301Cu;
            // 0x1a3020: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A3024u;
label_1a3024:
    // 0x1a3024: 0xc07600c  jal         func_1D8030
label_1a3028:
    if (ctx->pc == 0x1A3028u) {
        ctx->pc = 0x1A302Cu;
        goto label_1a302c;
    }
    ctx->pc = 0x1A3024u;
    SET_GPR_U32(ctx, 31, 0x1A302Cu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1A3024u, 0x1A302Cu)) {
        return;
    }
    ctx->pc = 0x1A302Cu;
label_1a302c:
    // 0x1a302c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a3030:
    if (ctx->pc == 0x1A3030u) {
        ctx->pc = 0x1A3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A302Cu;
        // 0x1a3030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3034u;
        goto label_1a3034;
    }
    ctx->pc = 0x1A302Cu;
    {
        const bool branch_taken_0x1a302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A302Cu;
        // 0x1a3030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a302c) {
            ctx->pc = 0x1A3038u;
            goto label_1a3038;
        }
    }
    ctx->pc = 0x1A3034u;
label_1a3034:
    // 0x1a3034: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1a3034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a3038:
    // 0x1a3038: 0xc04f0cc  jal         func_13C330
label_1a303c:
    if (ctx->pc == 0x1A303Cu) {
        ctx->pc = 0x1A3040u;
        goto label_1a3040;
    }
    ctx->pc = 0x1A3038u;
    SET_GPR_U32(ctx, 31, 0x1A3040u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3038u, 0x1A3040u)) {
        return;
    }
    ctx->pc = 0x1A3040u;
label_1a3040:
    // 0x1a3040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3044:
    // 0x1a3044: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a3044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3048:
    // 0x1a3048: 0xc0685da  jal         func_1A1768
label_1a304c:
    if (ctx->pc == 0x1A304Cu) {
        ctx->pc = 0x1A304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3048u;
        // 0x1a304c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3050u;
        goto label_1a3050;
    }
    ctx->pc = 0x1A3048u;
    SET_GPR_U32(ctx, 31, 0x1A3050u);
    ctx->pc = 0x1A304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3048u;
    // 0x1a304c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A3048u, 0x1A3050u)) {
        return;
    }
    ctx->pc = 0x1A3050u;
label_1a3050:
    // 0x1a3050: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a3050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a3054:
    // 0x1a3054: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a3054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a3058:
    // 0x1a3058: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1a305c:
    // 0x1a305c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1a305cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a3060:
    // 0x1a3060: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
label_1a3064:
    if (ctx->pc == 0x1A3064u) {
        ctx->pc = 0x1A3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3060u;
        // 0x1a3064: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3068u;
        goto label_1a3068;
    }
    ctx->pc = 0x1A3060u;
    {
        const bool branch_taken_0x1a3060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3060u;
        // 0x1a3064: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3060) {
            ctx->pc = 0x1A2D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2d78;
        }
    }
    ctx->pc = 0x1A3068u;
label_1a3068:
    // 0x1a3068: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1a3068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1a306c:
    // 0x1a306c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1a306cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1a3070:
    // 0x1a3070: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1a3070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1a3074:
    // 0x1a3074: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1a3074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1a3078:
    // 0x1a3078: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1a3078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a307c:
    // 0x1a307c: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1a307cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a3080:
    // 0x1a3080: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1a3080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a3084:
    // 0x1a3084: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x1a3084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a3088:
    // 0x1a3088: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a3088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a308c:
    // 0x1a308c: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1a308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a3090:
    // 0x1a3090: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1a3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3094:
    // 0x1a3094: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1a3094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3098:
    // 0x1a3098: 0x3e00008  jr          $ra
label_1a309c:
    if (ctx->pc == 0x1A309Cu) {
        ctx->pc = 0x1A309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3098u;
        // 0x1a309c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30A0u;
        goto label_fallthrough_0x1a3098;
    }
    ctx->pc = 0x1A3098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3098u;
        // 0x1a309c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3098:
    ctx->pc = 0x1A30A0u;
}
