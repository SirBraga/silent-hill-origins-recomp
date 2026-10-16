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

// Function: sub_002D5A30
// Address: 0x2d5a30 - 0x2d6060
void sub_002D5A30_0x2d5a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5A30_0x2d5a30");
#endif

    switch (ctx->pc) {
        case 0x2d5a30u: goto label_2d5a30;
        case 0x2d5a34u: goto label_2d5a34;
        case 0x2d5a38u: goto label_2d5a38;
        case 0x2d5a3cu: goto label_2d5a3c;
        case 0x2d5a40u: goto label_2d5a40;
        case 0x2d5a44u: goto label_2d5a44;
        case 0x2d5a48u: goto label_2d5a48;
        case 0x2d5a4cu: goto label_2d5a4c;
        case 0x2d5a50u: goto label_2d5a50;
        case 0x2d5a54u: goto label_2d5a54;
        case 0x2d5a58u: goto label_2d5a58;
        case 0x2d5a5cu: goto label_2d5a5c;
        case 0x2d5a60u: goto label_2d5a60;
        case 0x2d5a64u: goto label_2d5a64;
        case 0x2d5a68u: goto label_2d5a68;
        case 0x2d5a6cu: goto label_2d5a6c;
        case 0x2d5a70u: goto label_2d5a70;
        case 0x2d5a74u: goto label_2d5a74;
        case 0x2d5a78u: goto label_2d5a78;
        case 0x2d5a7cu: goto label_2d5a7c;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5a84u: goto label_2d5a84;
        case 0x2d5a88u: goto label_2d5a88;
        case 0x2d5a8cu: goto label_2d5a8c;
        case 0x2d5a90u: goto label_2d5a90;
        case 0x2d5a94u: goto label_2d5a94;
        case 0x2d5a98u: goto label_2d5a98;
        case 0x2d5a9cu: goto label_2d5a9c;
        case 0x2d5aa0u: goto label_2d5aa0;
        case 0x2d5aa4u: goto label_2d5aa4;
        case 0x2d5aa8u: goto label_2d5aa8;
        case 0x2d5aacu: goto label_2d5aac;
        case 0x2d5ab0u: goto label_2d5ab0;
        case 0x2d5ab4u: goto label_2d5ab4;
        case 0x2d5ab8u: goto label_2d5ab8;
        case 0x2d5abcu: goto label_2d5abc;
        case 0x2d5ac0u: goto label_2d5ac0;
        case 0x2d5ac4u: goto label_2d5ac4;
        case 0x2d5ac8u: goto label_2d5ac8;
        case 0x2d5accu: goto label_2d5acc;
        case 0x2d5ad0u: goto label_2d5ad0;
        case 0x2d5ad4u: goto label_2d5ad4;
        case 0x2d5ad8u: goto label_2d5ad8;
        case 0x2d5adcu: goto label_2d5adc;
        case 0x2d5ae0u: goto label_2d5ae0;
        case 0x2d5ae4u: goto label_2d5ae4;
        case 0x2d5ae8u: goto label_2d5ae8;
        case 0x2d5aecu: goto label_2d5aec;
        case 0x2d5af0u: goto label_2d5af0;
        case 0x2d5af4u: goto label_2d5af4;
        case 0x2d5af8u: goto label_2d5af8;
        case 0x2d5afcu: goto label_2d5afc;
        case 0x2d5b00u: goto label_2d5b00;
        case 0x2d5b04u: goto label_2d5b04;
        case 0x2d5b08u: goto label_2d5b08;
        case 0x2d5b0cu: goto label_2d5b0c;
        case 0x2d5b10u: goto label_2d5b10;
        case 0x2d5b14u: goto label_2d5b14;
        case 0x2d5b18u: goto label_2d5b18;
        case 0x2d5b1cu: goto label_2d5b1c;
        case 0x2d5b20u: goto label_2d5b20;
        case 0x2d5b24u: goto label_2d5b24;
        case 0x2d5b28u: goto label_2d5b28;
        case 0x2d5b2cu: goto label_2d5b2c;
        case 0x2d5b30u: goto label_2d5b30;
        case 0x2d5b34u: goto label_2d5b34;
        case 0x2d5b38u: goto label_2d5b38;
        case 0x2d5b3cu: goto label_2d5b3c;
        case 0x2d5b40u: goto label_2d5b40;
        case 0x2d5b44u: goto label_2d5b44;
        case 0x2d5b48u: goto label_2d5b48;
        case 0x2d5b4cu: goto label_2d5b4c;
        case 0x2d5b50u: goto label_2d5b50;
        case 0x2d5b54u: goto label_2d5b54;
        case 0x2d5b58u: goto label_2d5b58;
        case 0x2d5b5cu: goto label_2d5b5c;
        case 0x2d5b60u: goto label_2d5b60;
        case 0x2d5b64u: goto label_2d5b64;
        case 0x2d5b68u: goto label_2d5b68;
        case 0x2d5b6cu: goto label_2d5b6c;
        case 0x2d5b70u: goto label_2d5b70;
        case 0x2d5b74u: goto label_2d5b74;
        case 0x2d5b78u: goto label_2d5b78;
        case 0x2d5b7cu: goto label_2d5b7c;
        case 0x2d5b80u: goto label_2d5b80;
        case 0x2d5b84u: goto label_2d5b84;
        case 0x2d5b88u: goto label_2d5b88;
        case 0x2d5b8cu: goto label_2d5b8c;
        case 0x2d5b90u: goto label_2d5b90;
        case 0x2d5b94u: goto label_2d5b94;
        case 0x2d5b98u: goto label_2d5b98;
        case 0x2d5b9cu: goto label_2d5b9c;
        case 0x2d5ba0u: goto label_2d5ba0;
        case 0x2d5ba4u: goto label_2d5ba4;
        case 0x2d5ba8u: goto label_2d5ba8;
        case 0x2d5bacu: goto label_2d5bac;
        case 0x2d5bb0u: goto label_2d5bb0;
        case 0x2d5bb4u: goto label_2d5bb4;
        case 0x2d5bb8u: goto label_2d5bb8;
        case 0x2d5bbcu: goto label_2d5bbc;
        case 0x2d5bc0u: goto label_2d5bc0;
        case 0x2d5bc4u: goto label_2d5bc4;
        case 0x2d5bc8u: goto label_2d5bc8;
        case 0x2d5bccu: goto label_2d5bcc;
        case 0x2d5bd0u: goto label_2d5bd0;
        case 0x2d5bd4u: goto label_2d5bd4;
        case 0x2d5bd8u: goto label_2d5bd8;
        case 0x2d5bdcu: goto label_2d5bdc;
        case 0x2d5be0u: goto label_2d5be0;
        case 0x2d5be4u: goto label_2d5be4;
        case 0x2d5be8u: goto label_2d5be8;
        case 0x2d5becu: goto label_2d5bec;
        case 0x2d5bf0u: goto label_2d5bf0;
        case 0x2d5bf4u: goto label_2d5bf4;
        case 0x2d5bf8u: goto label_2d5bf8;
        case 0x2d5bfcu: goto label_2d5bfc;
        case 0x2d5c00u: goto label_2d5c00;
        case 0x2d5c04u: goto label_2d5c04;
        case 0x2d5c08u: goto label_2d5c08;
        case 0x2d5c0cu: goto label_2d5c0c;
        case 0x2d5c10u: goto label_2d5c10;
        case 0x2d5c14u: goto label_2d5c14;
        case 0x2d5c18u: goto label_2d5c18;
        case 0x2d5c1cu: goto label_2d5c1c;
        case 0x2d5c20u: goto label_2d5c20;
        case 0x2d5c24u: goto label_2d5c24;
        case 0x2d5c28u: goto label_2d5c28;
        case 0x2d5c2cu: goto label_2d5c2c;
        case 0x2d5c30u: goto label_2d5c30;
        case 0x2d5c34u: goto label_2d5c34;
        case 0x2d5c38u: goto label_2d5c38;
        case 0x2d5c3cu: goto label_2d5c3c;
        case 0x2d5c40u: goto label_2d5c40;
        case 0x2d5c44u: goto label_2d5c44;
        case 0x2d5c48u: goto label_2d5c48;
        case 0x2d5c4cu: goto label_2d5c4c;
        case 0x2d5c50u: goto label_2d5c50;
        case 0x2d5c54u: goto label_2d5c54;
        case 0x2d5c58u: goto label_2d5c58;
        case 0x2d5c5cu: goto label_2d5c5c;
        case 0x2d5c60u: goto label_2d5c60;
        case 0x2d5c64u: goto label_2d5c64;
        case 0x2d5c68u: goto label_2d5c68;
        case 0x2d5c6cu: goto label_2d5c6c;
        case 0x2d5c70u: goto label_2d5c70;
        case 0x2d5c74u: goto label_2d5c74;
        case 0x2d5c78u: goto label_2d5c78;
        case 0x2d5c7cu: goto label_2d5c7c;
        case 0x2d5c80u: goto label_2d5c80;
        case 0x2d5c84u: goto label_2d5c84;
        case 0x2d5c88u: goto label_2d5c88;
        case 0x2d5c8cu: goto label_2d5c8c;
        case 0x2d5c90u: goto label_2d5c90;
        case 0x2d5c94u: goto label_2d5c94;
        case 0x2d5c98u: goto label_2d5c98;
        case 0x2d5c9cu: goto label_2d5c9c;
        case 0x2d5ca0u: goto label_2d5ca0;
        case 0x2d5ca4u: goto label_2d5ca4;
        case 0x2d5ca8u: goto label_2d5ca8;
        case 0x2d5cacu: goto label_2d5cac;
        case 0x2d5cb0u: goto label_2d5cb0;
        case 0x2d5cb4u: goto label_2d5cb4;
        case 0x2d5cb8u: goto label_2d5cb8;
        case 0x2d5cbcu: goto label_2d5cbc;
        case 0x2d5cc0u: goto label_2d5cc0;
        case 0x2d5cc4u: goto label_2d5cc4;
        case 0x2d5cc8u: goto label_2d5cc8;
        case 0x2d5cccu: goto label_2d5ccc;
        case 0x2d5cd0u: goto label_2d5cd0;
        case 0x2d5cd4u: goto label_2d5cd4;
        case 0x2d5cd8u: goto label_2d5cd8;
        case 0x2d5cdcu: goto label_2d5cdc;
        case 0x2d5ce0u: goto label_2d5ce0;
        case 0x2d5ce4u: goto label_2d5ce4;
        case 0x2d5ce8u: goto label_2d5ce8;
        case 0x2d5cecu: goto label_2d5cec;
        case 0x2d5cf0u: goto label_2d5cf0;
        case 0x2d5cf4u: goto label_2d5cf4;
        case 0x2d5cf8u: goto label_2d5cf8;
        case 0x2d5cfcu: goto label_2d5cfc;
        case 0x2d5d00u: goto label_2d5d00;
        case 0x2d5d04u: goto label_2d5d04;
        case 0x2d5d08u: goto label_2d5d08;
        case 0x2d5d0cu: goto label_2d5d0c;
        case 0x2d5d10u: goto label_2d5d10;
        case 0x2d5d14u: goto label_2d5d14;
        case 0x2d5d18u: goto label_2d5d18;
        case 0x2d5d1cu: goto label_2d5d1c;
        case 0x2d5d20u: goto label_2d5d20;
        case 0x2d5d24u: goto label_2d5d24;
        case 0x2d5d28u: goto label_2d5d28;
        case 0x2d5d2cu: goto label_2d5d2c;
        case 0x2d5d30u: goto label_2d5d30;
        case 0x2d5d34u: goto label_2d5d34;
        case 0x2d5d38u: goto label_2d5d38;
        case 0x2d5d3cu: goto label_2d5d3c;
        case 0x2d5d40u: goto label_2d5d40;
        case 0x2d5d44u: goto label_2d5d44;
        case 0x2d5d48u: goto label_2d5d48;
        case 0x2d5d4cu: goto label_2d5d4c;
        case 0x2d5d50u: goto label_2d5d50;
        case 0x2d5d54u: goto label_2d5d54;
        case 0x2d5d58u: goto label_2d5d58;
        case 0x2d5d5cu: goto label_2d5d5c;
        case 0x2d5d60u: goto label_2d5d60;
        case 0x2d5d64u: goto label_2d5d64;
        case 0x2d5d68u: goto label_2d5d68;
        case 0x2d5d6cu: goto label_2d5d6c;
        case 0x2d5d70u: goto label_2d5d70;
        case 0x2d5d74u: goto label_2d5d74;
        case 0x2d5d78u: goto label_2d5d78;
        case 0x2d5d7cu: goto label_2d5d7c;
        case 0x2d5d80u: goto label_2d5d80;
        case 0x2d5d84u: goto label_2d5d84;
        case 0x2d5d88u: goto label_2d5d88;
        case 0x2d5d8cu: goto label_2d5d8c;
        case 0x2d5d90u: goto label_2d5d90;
        case 0x2d5d94u: goto label_2d5d94;
        case 0x2d5d98u: goto label_2d5d98;
        case 0x2d5d9cu: goto label_2d5d9c;
        case 0x2d5da0u: goto label_2d5da0;
        case 0x2d5da4u: goto label_2d5da4;
        case 0x2d5da8u: goto label_2d5da8;
        case 0x2d5dacu: goto label_2d5dac;
        case 0x2d5db0u: goto label_2d5db0;
        case 0x2d5db4u: goto label_2d5db4;
        case 0x2d5db8u: goto label_2d5db8;
        case 0x2d5dbcu: goto label_2d5dbc;
        case 0x2d5dc0u: goto label_2d5dc0;
        case 0x2d5dc4u: goto label_2d5dc4;
        case 0x2d5dc8u: goto label_2d5dc8;
        case 0x2d5dccu: goto label_2d5dcc;
        case 0x2d5dd0u: goto label_2d5dd0;
        case 0x2d5dd4u: goto label_2d5dd4;
        case 0x2d5dd8u: goto label_2d5dd8;
        case 0x2d5ddcu: goto label_2d5ddc;
        case 0x2d5de0u: goto label_2d5de0;
        case 0x2d5de4u: goto label_2d5de4;
        case 0x2d5de8u: goto label_2d5de8;
        case 0x2d5decu: goto label_2d5dec;
        case 0x2d5df0u: goto label_2d5df0;
        case 0x2d5df4u: goto label_2d5df4;
        case 0x2d5df8u: goto label_2d5df8;
        case 0x2d5dfcu: goto label_2d5dfc;
        case 0x2d5e00u: goto label_2d5e00;
        case 0x2d5e04u: goto label_2d5e04;
        case 0x2d5e08u: goto label_2d5e08;
        case 0x2d5e0cu: goto label_2d5e0c;
        case 0x2d5e10u: goto label_2d5e10;
        case 0x2d5e14u: goto label_2d5e14;
        case 0x2d5e18u: goto label_2d5e18;
        case 0x2d5e1cu: goto label_2d5e1c;
        case 0x2d5e20u: goto label_2d5e20;
        case 0x2d5e24u: goto label_2d5e24;
        case 0x2d5e28u: goto label_2d5e28;
        case 0x2d5e2cu: goto label_2d5e2c;
        case 0x2d5e30u: goto label_2d5e30;
        case 0x2d5e34u: goto label_2d5e34;
        case 0x2d5e38u: goto label_2d5e38;
        case 0x2d5e3cu: goto label_2d5e3c;
        case 0x2d5e40u: goto label_2d5e40;
        case 0x2d5e44u: goto label_2d5e44;
        case 0x2d5e48u: goto label_2d5e48;
        case 0x2d5e4cu: goto label_2d5e4c;
        case 0x2d5e50u: goto label_2d5e50;
        case 0x2d5e54u: goto label_2d5e54;
        case 0x2d5e58u: goto label_2d5e58;
        case 0x2d5e5cu: goto label_2d5e5c;
        case 0x2d5e60u: goto label_2d5e60;
        case 0x2d5e64u: goto label_2d5e64;
        case 0x2d5e68u: goto label_2d5e68;
        case 0x2d5e6cu: goto label_2d5e6c;
        case 0x2d5e70u: goto label_2d5e70;
        case 0x2d5e74u: goto label_2d5e74;
        case 0x2d5e78u: goto label_2d5e78;
        case 0x2d5e7cu: goto label_2d5e7c;
        case 0x2d5e80u: goto label_2d5e80;
        case 0x2d5e84u: goto label_2d5e84;
        case 0x2d5e88u: goto label_2d5e88;
        case 0x2d5e8cu: goto label_2d5e8c;
        case 0x2d5e90u: goto label_2d5e90;
        case 0x2d5e94u: goto label_2d5e94;
        case 0x2d5e98u: goto label_2d5e98;
        case 0x2d5e9cu: goto label_2d5e9c;
        case 0x2d5ea0u: goto label_2d5ea0;
        case 0x2d5ea4u: goto label_2d5ea4;
        case 0x2d5ea8u: goto label_2d5ea8;
        case 0x2d5eacu: goto label_2d5eac;
        case 0x2d5eb0u: goto label_2d5eb0;
        case 0x2d5eb4u: goto label_2d5eb4;
        case 0x2d5eb8u: goto label_2d5eb8;
        case 0x2d5ebcu: goto label_2d5ebc;
        case 0x2d5ec0u: goto label_2d5ec0;
        case 0x2d5ec4u: goto label_2d5ec4;
        case 0x2d5ec8u: goto label_2d5ec8;
        case 0x2d5eccu: goto label_2d5ecc;
        case 0x2d5ed0u: goto label_2d5ed0;
        case 0x2d5ed4u: goto label_2d5ed4;
        case 0x2d5ed8u: goto label_2d5ed8;
        case 0x2d5edcu: goto label_2d5edc;
        case 0x2d5ee0u: goto label_2d5ee0;
        case 0x2d5ee4u: goto label_2d5ee4;
        case 0x2d5ee8u: goto label_2d5ee8;
        case 0x2d5eecu: goto label_2d5eec;
        case 0x2d5ef0u: goto label_2d5ef0;
        case 0x2d5ef4u: goto label_2d5ef4;
        case 0x2d5ef8u: goto label_2d5ef8;
        case 0x2d5efcu: goto label_2d5efc;
        case 0x2d5f00u: goto label_2d5f00;
        case 0x2d5f04u: goto label_2d5f04;
        case 0x2d5f08u: goto label_2d5f08;
        case 0x2d5f0cu: goto label_2d5f0c;
        case 0x2d5f10u: goto label_2d5f10;
        case 0x2d5f14u: goto label_2d5f14;
        case 0x2d5f18u: goto label_2d5f18;
        case 0x2d5f1cu: goto label_2d5f1c;
        case 0x2d5f20u: goto label_2d5f20;
        case 0x2d5f24u: goto label_2d5f24;
        case 0x2d5f28u: goto label_2d5f28;
        case 0x2d5f2cu: goto label_2d5f2c;
        case 0x2d5f30u: goto label_2d5f30;
        case 0x2d5f34u: goto label_2d5f34;
        case 0x2d5f38u: goto label_2d5f38;
        case 0x2d5f3cu: goto label_2d5f3c;
        case 0x2d5f40u: goto label_2d5f40;
        case 0x2d5f44u: goto label_2d5f44;
        case 0x2d5f48u: goto label_2d5f48;
        case 0x2d5f4cu: goto label_2d5f4c;
        case 0x2d5f50u: goto label_2d5f50;
        case 0x2d5f54u: goto label_2d5f54;
        case 0x2d5f58u: goto label_2d5f58;
        case 0x2d5f5cu: goto label_2d5f5c;
        case 0x2d5f60u: goto label_2d5f60;
        case 0x2d5f64u: goto label_2d5f64;
        case 0x2d5f68u: goto label_2d5f68;
        case 0x2d5f6cu: goto label_2d5f6c;
        case 0x2d5f70u: goto label_2d5f70;
        case 0x2d5f74u: goto label_2d5f74;
        case 0x2d5f78u: goto label_2d5f78;
        case 0x2d5f7cu: goto label_2d5f7c;
        case 0x2d5f80u: goto label_2d5f80;
        case 0x2d5f84u: goto label_2d5f84;
        case 0x2d5f88u: goto label_2d5f88;
        case 0x2d5f8cu: goto label_2d5f8c;
        case 0x2d5f90u: goto label_2d5f90;
        case 0x2d5f94u: goto label_2d5f94;
        case 0x2d5f98u: goto label_2d5f98;
        case 0x2d5f9cu: goto label_2d5f9c;
        case 0x2d5fa0u: goto label_2d5fa0;
        case 0x2d5fa4u: goto label_2d5fa4;
        case 0x2d5fa8u: goto label_2d5fa8;
        case 0x2d5facu: goto label_2d5fac;
        case 0x2d5fb0u: goto label_2d5fb0;
        case 0x2d5fb4u: goto label_2d5fb4;
        case 0x2d5fb8u: goto label_2d5fb8;
        case 0x2d5fbcu: goto label_2d5fbc;
        case 0x2d5fc0u: goto label_2d5fc0;
        case 0x2d5fc4u: goto label_2d5fc4;
        case 0x2d5fc8u: goto label_2d5fc8;
        case 0x2d5fccu: goto label_2d5fcc;
        case 0x2d5fd0u: goto label_2d5fd0;
        case 0x2d5fd4u: goto label_2d5fd4;
        case 0x2d5fd8u: goto label_2d5fd8;
        case 0x2d5fdcu: goto label_2d5fdc;
        case 0x2d5fe0u: goto label_2d5fe0;
        case 0x2d5fe4u: goto label_2d5fe4;
        case 0x2d5fe8u: goto label_2d5fe8;
        case 0x2d5fecu: goto label_2d5fec;
        case 0x2d5ff0u: goto label_2d5ff0;
        case 0x2d5ff4u: goto label_2d5ff4;
        case 0x2d5ff8u: goto label_2d5ff8;
        case 0x2d5ffcu: goto label_2d5ffc;
        case 0x2d6000u: goto label_2d6000;
        case 0x2d6004u: goto label_2d6004;
        case 0x2d6008u: goto label_2d6008;
        case 0x2d600cu: goto label_2d600c;
        case 0x2d6010u: goto label_2d6010;
        case 0x2d6014u: goto label_2d6014;
        case 0x2d6018u: goto label_2d6018;
        case 0x2d601cu: goto label_2d601c;
        case 0x2d6020u: goto label_2d6020;
        case 0x2d6024u: goto label_2d6024;
        case 0x2d6028u: goto label_2d6028;
        case 0x2d602cu: goto label_2d602c;
        case 0x2d6030u: goto label_2d6030;
        case 0x2d6034u: goto label_2d6034;
        case 0x2d6038u: goto label_2d6038;
        case 0x2d603cu: goto label_2d603c;
        case 0x2d6040u: goto label_2d6040;
        case 0x2d6044u: goto label_2d6044;
        case 0x2d6048u: goto label_2d6048;
        case 0x2d604cu: goto label_2d604c;
        case 0x2d6050u: goto label_2d6050;
        case 0x2d6054u: goto label_2d6054;
        case 0x2d6058u: goto label_2d6058;
        case 0x2d605cu: goto label_2d605c;
        default: break;
    }

    ctx->pc = 0x2d5a30u;

label_2d5a30:
    // 0x2d5a30: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_2d5a34:
    // 0x2d5a34: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x2d5a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_2d5a38:
    // 0x2d5a38: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2d5a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2d5a3c:
    // 0x2d5a3c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d5a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d5a40:
    // 0x2d5a40: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x2d5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
label_2d5a44:
    // 0x2d5a44: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x2d5a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_2d5a48:
    // 0x2d5a48: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x2d5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_2d5a4c:
    // 0x2d5a4c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2d5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_2d5a50:
    // 0x2d5a50: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2d5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_2d5a54:
    // 0x2d5a54: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2d5a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_2d5a58:
    // 0x2d5a58: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2d5a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_2d5a5c:
    // 0x2d5a5c: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2d5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_2d5a60:
    // 0x2d5a60: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x2d5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_2d5a64:
    // 0x2d5a64: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2d5a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_2d5a68:
    // 0x2d5a68: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2d5a68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2d5a6c:
    // 0x2d5a6c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2d5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_2d5a70:
    // 0x2d5a70: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x2d5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
label_2d5a74:
    // 0x2d5a74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d5a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d5a78:
    // 0x2d5a78: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
label_2d5a7c:
    if (ctx->pc == 0x2D5A7Cu) {
        ctx->pc = 0x2D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A78u;
        // 0x2d5a7c: 0xafa600d8  sw          $a2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A80u;
        goto label_2d5a80;
    }
    ctx->pc = 0x2D5A78u;
    {
        const bool branch_taken_0x2d5a78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A78u;
        // 0x2d5a7c: 0xafa600d8  sw          $a2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a78) {
            ctx->pc = 0x2D5A8Cu;
            goto label_2d5a8c;
        }
    }
    ctx->pc = 0x2D5A80u;
label_2d5a80:
    // 0x2d5a80: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x2d5a80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d5a84:
    // 0x2d5a84: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2d5a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d5a88:
    // 0x2d5a88: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x2d5a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d5a8c:
    // 0x2d5a8c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x2d5a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2d5a90:
    // 0x2d5a90: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2d5a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2d5a94:
    // 0x2d5a94: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d5a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d5a98:
    // 0x2d5a98: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2d5a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2d5a9c:
    // 0x2d5a9c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2d5a9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2d5aa0:
    // 0x2d5aa0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x2d5aa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2d5aa4:
    // 0x2d5aa4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d5aa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2d5aa8:
    // 0x2d5aa8: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x2d5aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2d5aac:
    // 0x2d5aac: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2d5aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2d5ab0:
    // 0x2d5ab0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d5ab4:
    // 0x2d5ab4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5ab8:
    // 0x2d5ab8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2d5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2d5abc:
    // 0x2d5abc: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x2d5abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2d5ac0:
    // 0x2d5ac0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d5ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2d5ac4:
    // 0x2d5ac4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2d5ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d5ac8:
    // 0x2d5ac8: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d5ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d5acc:
    // 0x2d5acc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2d5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d5ad0:
    // 0x2d5ad0: 0x2012  mflo        $a0
    ctx->pc = 0x2d5ad0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2d5ad4:
    // 0x2d5ad4: 0x40f809  jalr        $v0
label_2d5ad8:
    if (ctx->pc == 0x2D5AD8u) {
        ctx->pc = 0x2D5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AD4u;
        // 0x2d5ad8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5ADCu;
        goto label_2d5adc;
    }
    ctx->pc = 0x2D5AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5ADCu);
        ctx->pc = 0x2D5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AD4u;
        // 0x2d5ad8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5AD4u, 0x2D5ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5ADCu;
label_2d5adc:
    // 0x2d5adc: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2d5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5ae0:
    // 0x2d5ae0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d5ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2d5ae4:
    // 0x2d5ae4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2d5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2d5ae8:
    // 0x2d5ae8: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d5ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d5aec:
    // 0x2d5aec: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2d5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d5af0:
    // 0x2d5af0: 0x40f809  jalr        $v0
label_2d5af4:
    if (ctx->pc == 0x2D5AF4u) {
        ctx->pc = 0x2D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AF0u;
        // 0x2d5af4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5AF8u;
        goto label_2d5af8;
    }
    ctx->pc = 0x2D5AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5AF8u);
        ctx->pc = 0x2D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AF0u;
        // 0x2d5af4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5AF0u, 0x2D5AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5AF8u;
label_2d5af8:
    // 0x2d5af8: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_2d5afc:
    // 0x2d5afc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2d5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2d5b00:
    // 0x2d5b00: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2d5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5b04:
    // 0x2d5b04: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d5b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2d5b08:
    // 0x2d5b08: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2d5b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d5b0c:
    // 0x2d5b0c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d5b10:
    // 0x2d5b10: 0x2012  mflo        $a0
    ctx->pc = 0x2d5b10u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2d5b14:
    // 0x2d5b14: 0x40f809  jalr        $v0
label_2d5b18:
    if (ctx->pc == 0x2D5B18u) {
        ctx->pc = 0x2D5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B14u;
        // 0x2d5b18: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B1Cu;
        goto label_2d5b1c;
    }
    ctx->pc = 0x2D5B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5B1Cu);
        ctx->pc = 0x2D5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B14u;
        // 0x2d5b18: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B14u, 0x2D5B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5B1Cu;
label_2d5b1c:
    // 0x2d5b1c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2d5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5b20:
    // 0x2d5b20: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_2d5b24:
    if (ctx->pc == 0x2D5B24u) {
        ctx->pc = 0x2D5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B20u;
        // 0x2d5b24: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B28u;
        goto label_2d5b28;
    }
    ctx->pc = 0x2D5B20u;
    {
        const bool branch_taken_0x2d5b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B20u;
        // 0x2d5b24: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b20) {
            ctx->pc = 0x2D5D04u;
            goto label_2d5d04;
        }
    }
    ctx->pc = 0x2D5B28u;
label_2d5b28:
    // 0x2d5b28: 0x8fb500e0  lw          $s5, 0xE0($sp)
    ctx->pc = 0x2d5b28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2d5b2c:
    // 0x2d5b2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d5b2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5b30:
    // 0x2d5b30: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5b34:
    // 0x2d5b34: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x2d5b34u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2d5b38:
    // 0x2d5b38: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2d5b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d5b3c:
    // 0x2d5b3c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2d5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2d5b40:
    // 0x2d5b40: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_2d5b44:
    if (ctx->pc == 0x2D5B44u) {
        ctx->pc = 0x2D5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B40u;
        // 0x2d5b44: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B48u;
        goto label_2d5b48;
    }
    ctx->pc = 0x2D5B40u;
    {
        const bool branch_taken_0x2d5b40 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2D5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B40u;
        // 0x2d5b44: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b40) {
            ctx->pc = 0x2D5B50u;
            goto label_2d5b50;
        }
    }
    ctx->pc = 0x2D5B48u;
label_2d5b48:
    // 0x2d5b48: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2d5b4c:
    if (ctx->pc == 0x2D5B4Cu) {
        ctx->pc = 0x2D5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B48u;
        // 0x2d5b4c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B50u;
        goto label_2d5b50;
    }
    ctx->pc = 0x2D5B48u;
    {
        const bool branch_taken_0x2d5b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B48u;
        // 0x2d5b4c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b48) {
            ctx->pc = 0x2D5BF8u;
            goto label_2d5bf8;
        }
    }
    ctx->pc = 0x2D5B50u;
label_2d5b50:
    // 0x2d5b50: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2d5b54:
    // 0x2d5b54: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2d5b58:
    // 0x2d5b58: 0xc0aa4e0  jal         func_2A9380
label_2d5b5c:
    if (ctx->pc == 0x2D5B5Cu) {
        ctx->pc = 0x2D5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B58u;
        // 0x2d5b5c: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B60u;
        goto label_2d5b60;
    }
    ctx->pc = 0x2D5B58u;
    SET_GPR_U32(ctx, 31, 0x2D5B60u);
    ctx->pc = 0x2D5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B58u;
    // 0x2d5b5c: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9380u, 0x2D5B58u, 0x2D5B60u)) {
        return;
    }
    ctx->pc = 0x2D5B60u;
label_2d5b60:
    // 0x2d5b60: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2d5b64:
    // 0x2d5b64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d5b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2d5b68:
    // 0x2d5b68: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2d5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2d5b6c:
    // 0x2d5b6c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_2d5b70:
    if (ctx->pc == 0x2D5B70u) {
        ctx->pc = 0x2D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B6Cu;
        // 0x2d5b70: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B74u;
        goto label_2d5b74;
    }
    ctx->pc = 0x2D5B6Cu;
    {
        const bool branch_taken_0x2d5b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B6Cu;
        // 0x2d5b70: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b6c) {
            ctx->pc = 0x2D5BC0u;
            goto label_2d5bc0;
        }
    }
    ctx->pc = 0x2D5B74u;
label_2d5b74:
    // 0x2d5b74: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d5b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2d5b78:
    // 0x2d5b78: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5b7c:
    // 0x2d5b7c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2d5b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5b80:
    // 0x2d5b80: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5b84:
    // 0x2d5b84: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2d5b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2d5b88:
    // 0x2d5b88: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2d5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5b8c:
    // 0x2d5b8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d5b90:
    // 0x2d5b90: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2d5b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d5b94:
    // 0x2d5b94: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d5b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5b98:
    // 0x2d5b98: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d5b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5b9c:
    // 0x2d5b9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5ba0:
    // 0x2d5ba0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5ba0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5ba4:
    // 0x2d5ba4: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d5ba8:
    // 0x2d5ba8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d5ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5bac:
    // 0x2d5bac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5bb0:
    // 0x2d5bb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5bb4:
    // 0x2d5bb4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5bb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5bb8:
    // 0x2d5bb8: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2d5bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d5bbc:
    // 0x2d5bbc: 0x0  nop
    ctx->pc = 0x2d5bbcu;
    // NOP
label_2d5bc0:
    // 0x2d5bc0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2d5bc4:
    // 0x2d5bc4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2d5bc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5bc8:
    // 0x2d5bc8: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2d5bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2d5bcc:
    // 0x2d5bcc: 0x2455000c  addiu       $s5, $v0, 0xC
    ctx->pc = 0x2d5bccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2d5bd0:
    // 0x2d5bd0: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2d5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2d5bd4:
    // 0x2d5bd4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2d5bd8:
    // 0x2d5bd8: 0x24b7001c  addiu       $s7, $a1, 0x1C
    ctx->pc = 0x2d5bd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_2d5bdc:
    // 0x2d5bdc: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2d5bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5be0:
    // 0x2d5be0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2d5be4:
    // 0x2d5be4: 0x24560060  addiu       $s6, $v0, 0x60
    ctx->pc = 0x2d5be4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2d5be8:
    // 0x2d5be8: 0x3c5102b  sltu        $v0, $fp, $a1
    ctx->pc = 0x2d5be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2d5bec:
    // 0x2d5bec: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2d5bf0:
    if (ctx->pc == 0x2D5BF0u) {
        ctx->pc = 0x2D5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BECu;
        // 0x2d5bf0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5BF4u;
        goto label_2d5bf4;
    }
    ctx->pc = 0x2D5BECu;
    {
        const bool branch_taken_0x2d5bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BECu;
        // 0x2d5bf0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bec) {
            ctx->pc = 0x2D5D04u;
            goto label_2d5d04;
        }
    }
    ctx->pc = 0x2D5BF4u;
label_2d5bf4:
    // 0x2d5bf4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2d5bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d5bf8:
    // 0x2d5bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5bfc:
    // 0x2d5bfc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2d5bfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c00:
    // 0x2d5c00: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2d5c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c04:
    // 0x2d5c04: 0x0  nop
    ctx->pc = 0x2d5c04u;
    // NOP
label_2d5c08:
    // 0x2d5c08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c0c:
    // 0x2d5c0c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d5c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c10:
    // 0x2d5c10: 0xc0aa4e0  jal         func_2A9380
label_2d5c14:
    if (ctx->pc == 0x2D5C14u) {
        ctx->pc = 0x2D5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C10u;
        // 0x2d5c14: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5C18u;
        goto label_2d5c18;
    }
    ctx->pc = 0x2D5C10u;
    SET_GPR_U32(ctx, 31, 0x2D5C18u);
    ctx->pc = 0x2D5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C10u;
    // 0x2d5c14: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9380u, 0x2D5C10u, 0x2D5C18u)) {
        return;
    }
    ctx->pc = 0x2D5C18u;
label_2d5c18:
    // 0x2d5c18: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2d5c18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2d5c1c:
    // 0x2d5c1c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2d5c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2d5c20:
    // 0x2d5c20: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2d5c24:
    // 0x2d5c24: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2d5c28:
    if (ctx->pc == 0x2D5C28u) {
        ctx->pc = 0x2D5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C24u;
        // 0x2d5c28: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5C2Cu;
        goto label_2d5c2c;
    }
    ctx->pc = 0x2D5C24u;
    {
        const bool branch_taken_0x2d5c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C24u;
        // 0x2d5c28: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c24) {
            ctx->pc = 0x2D5C70u;
            goto label_2d5c70;
        }
    }
    ctx->pc = 0x2D5C2Cu;
label_2d5c2c:
    // 0x2d5c2c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2d5c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5c30:
    // 0x2d5c30: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5c34:
    // 0x2d5c34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d5c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2d5c38:
    // 0x2d5c38: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2d5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5c3c:
    // 0x2d5c3c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5c40:
    // 0x2d5c40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d5c44:
    // 0x2d5c44: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2d5c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d5c48:
    // 0x2d5c48: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2d5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5c4c:
    // 0x2d5c4c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2d5c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5c50:
    // 0x2d5c50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5c54:
    // 0x2d5c54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5c54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5c58:
    // 0x2d5c58: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d5c5c:
    // 0x2d5c5c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2d5c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5c60:
    // 0x2d5c60: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2d5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5c64:
    // 0x2d5c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5c68:
    // 0x2d5c68: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5c68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5c6c:
    // 0x2d5c6c: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2d5c6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d5c70:
    // 0x2d5c70: 0x26c40060  addiu       $a0, $s6, 0x60
    ctx->pc = 0x2d5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_2d5c74:
    // 0x2d5c74: 0x26e5001c  addiu       $a1, $s7, 0x1C
    ctx->pc = 0x2d5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
label_2d5c78:
    // 0x2d5c78: 0xc0aa4e0  jal         func_2A9380
label_2d5c7c:
    if (ctx->pc == 0x2D5C7Cu) {
        ctx->pc = 0x2D5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C78u;
        // 0x2d5c7c: 0x26a6000c  addiu       $a2, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5C80u;
        goto label_2d5c80;
    }
    ctx->pc = 0x2D5C78u;
    SET_GPR_U32(ctx, 31, 0x2D5C80u);
    ctx->pc = 0x2D5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C78u;
    // 0x2d5c7c: 0x26a6000c  addiu       $a2, $s5, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9380u, 0x2D5C78u, 0x2D5C80u)) {
        return;
    }
    ctx->pc = 0x2D5C80u;
label_2d5c80:
    // 0x2d5c80: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2d5c80u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2d5c84:
    // 0x2d5c84: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2d5c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2d5c88:
    // 0x2d5c88: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2d5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2d5c8c:
    // 0x2d5c8c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2d5c90:
    if (ctx->pc == 0x2D5C90u) {
        ctx->pc = 0x2D5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C8Cu;
        // 0x2d5c90: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5C94u;
        goto label_2d5c94;
    }
    ctx->pc = 0x2D5C8Cu;
    {
        const bool branch_taken_0x2d5c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C8Cu;
        // 0x2d5c90: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c8c) {
            ctx->pc = 0x2D5CD8u;
            goto label_2d5cd8;
        }
    }
    ctx->pc = 0x2D5C94u;
label_2d5c94:
    // 0x2d5c94: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2d5c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5c98:
    // 0x2d5c98: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5c9c:
    // 0x2d5c9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d5c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2d5ca0:
    // 0x2d5ca0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2d5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5ca4:
    // 0x2d5ca4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5ca8:
    // 0x2d5ca8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d5cac:
    // 0x2d5cac: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2d5cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d5cb0:
    // 0x2d5cb0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5cb4:
    // 0x2d5cb4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x2d5cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5cb8:
    // 0x2d5cb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5cbc:
    // 0x2d5cbc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5cbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5cc0:
    // 0x2d5cc0: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d5cc4:
    // 0x2d5cc4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2d5cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5cc8:
    // 0x2d5cc8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5ccc:
    // 0x2d5ccc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5cd0:
    // 0x2d5cd0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5cd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5cd4:
    // 0x2d5cd4: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2d5cd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d5cd8:
    // 0x2d5cd8: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2d5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5cdc:
    // 0x2d5cdc: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x2d5cdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
label_2d5ce0:
    // 0x2d5ce0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2d5ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2d5ce4:
    // 0x2d5ce4: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2d5ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2d5ce8:
    // 0x2d5ce8: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x2d5ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_2d5cec:
    // 0x2d5cec: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2d5cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_2d5cf0:
    // 0x2d5cf0: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x2d5cf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_2d5cf4:
    // 0x2d5cf4: 0x26f70038  addiu       $s7, $s7, 0x38
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 56));
label_2d5cf8:
    // 0x2d5cf8: 0x3c5102b  sltu        $v0, $fp, $a1
    ctx->pc = 0x2d5cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2d5cfc:
    // 0x2d5cfc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_2d5d00:
    if (ctx->pc == 0x2D5D00u) {
        ctx->pc = 0x2D5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CFCu;
        // 0x2d5d00: 0x26d600c0  addiu       $s6, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D04u;
        goto label_2d5d04;
    }
    ctx->pc = 0x2D5CFCu;
    {
        const bool branch_taken_0x2d5cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CFCu;
        // 0x2d5d00: 0x26d600c0  addiu       $s6, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cfc) {
            ctx->pc = 0x2D5C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5c08;
        }
    }
    ctx->pc = 0x2D5D04u;
label_2d5d04:
    // 0x2d5d04: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2d5d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_2d5d08:
    // 0x2d5d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d5d0c:
    // 0x2d5d0c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2d5d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d5d10:
    // 0x2d5d10: 0x0  nop
    ctx->pc = 0x2d5d10u;
    // NOP
label_2d5d14:
    // 0x2d5d14: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2d5d18:
    if (ctx->pc == 0x2D5D18u) {
        ctx->pc = 0x2D5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D14u;
        // 0x2d5d18: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D1Cu;
        goto label_2d5d1c;
    }
    ctx->pc = 0x2D5D14u;
    {
        const bool branch_taken_0x2d5d14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D14u;
        // 0x2d5d18: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d14) {
            ctx->pc = 0x2D5D48u;
            goto label_2d5d48;
        }
    }
    ctx->pc = 0x2D5D1Cu;
label_2d5d1c:
    // 0x2d5d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d5d20:
    // 0x2d5d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d5d24:
    // 0x2d5d24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d5d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2d5d28:
    // 0x2d5d28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2d5d2c:
    // 0x2d5d2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2d5d30:
    // 0x2d5d30: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2d5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2d5d34:
    // 0x2d5d34: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2d5d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2d5d38:
    // 0x2d5d38: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2d5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2d5d3c:
    // 0x2d5d3c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2d5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2d5d40:
    // 0x2d5d40: 0x100000ac  b           . + 4 + (0xAC << 2)
label_2d5d44:
    if (ctx->pc == 0x2D5D44u) {
        ctx->pc = 0x2D5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D40u;
        // 0x2d5d44: 0xc454000c  lwc1        $f20, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D48u;
        goto label_2d5d48;
    }
    ctx->pc = 0x2D5D40u;
    {
        const bool branch_taken_0x2d5d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D40u;
        // 0x2d5d44: 0xc454000c  lwc1        $f20, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d40) {
            ctx->pc = 0x2D5FF4u;
            goto label_2d5ff4;
        }
    }
    ctx->pc = 0x2D5D48u;
label_2d5d48:
    // 0x2d5d48: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2d5d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2d5d4c:
    // 0x2d5d4c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_2d5d50:
    if (ctx->pc == 0x2D5D50u) {
        ctx->pc = 0x2D5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D4Cu;
        // 0x2d5d50: 0x8fa500d4  lw          $a1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D54u;
        goto label_2d5d54;
    }
    ctx->pc = 0x2D5D4Cu;
    {
        const bool branch_taken_0x2d5d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D4Cu;
        // 0x2d5d50: 0x8fa500d4  lw          $a1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d4c) {
            ctx->pc = 0x2D5D88u;
            goto label_2d5d88;
        }
    }
    ctx->pc = 0x2D5D54u;
label_2d5d54:
    // 0x2d5d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d5d58:
    // 0x2d5d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d5d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d5d5c:
    // 0x2d5d5c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2d5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5d60:
    // 0x2d5d60: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2d5d60u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
label_2d5d64:
    // 0x2d5d64: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5d68:
    // 0x2d5d68: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2d5d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5d6c:
    // 0x2d5d6c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2d5d6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2d5d70:
    // 0x2d5d70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2d5d74:
    // 0x2d5d74: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2d5d74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2d5d78:
    // 0x2d5d78: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x2d5d78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d5d7c:
    // 0x2d5d7c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d5d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d5d80:
    // 0x2d5d80: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d5d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d5d84:
    // 0x2d5d84: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2d5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5d88:
    // 0x2d5d88: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
label_2d5d8c:
    if (ctx->pc == 0x2D5D8Cu) {
        ctx->pc = 0x2D5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D88u;
        // 0x2d5d8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D90u;
        goto label_2d5d90;
    }
    ctx->pc = 0x2D5D88u;
    {
        const bool branch_taken_0x2d5d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D88u;
        // 0x2d5d8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d88) {
            ctx->pc = 0x2D5FE8u;
            goto label_2d5fe8;
        }
    }
    ctx->pc = 0x2D5D90u;
label_2d5d90:
    // 0x2d5d90: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2d5d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2d5d94:
    // 0x2d5d94: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x2d5d94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d5d98:
    // 0x2d5d98: 0x8fb500d0  lw          $s5, 0xD0($sp)
    ctx->pc = 0x2d5d98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2d5d9c:
    // 0x2d5d9c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2d5d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d5da0:
    // 0x2d5da0: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x2d5da0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2d5da4:
    // 0x2d5da4: 0x8fb300e4  lw          $s3, 0xE4($sp)
    ctx->pc = 0x2d5da4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2d5da8:
    // 0x2d5da8: 0x8fb200e0  lw          $s2, 0xE0($sp)
    ctx->pc = 0x2d5da8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2d5dac:
    // 0x2d5dac: 0x0  nop
    ctx->pc = 0x2d5dacu;
    // NOP
label_2d5db0:
    // 0x2d5db0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2d5db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5db4:
    // 0x2d5db4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d5db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d5db8:
    // 0x2d5db8: 0x0  nop
    ctx->pc = 0x2d5db8u;
    // NOP
label_2d5dbc:
    // 0x2d5dbc: 0x45000082  bc1f        . + 4 + (0x82 << 2)
label_2d5dc0:
    if (ctx->pc == 0x2D5DC0u) {
        ctx->pc = 0x2D5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DBCu;
        // 0x2d5dc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DC4u;
        goto label_2d5dc4;
    }
    ctx->pc = 0x2D5DBCu;
    {
        const bool branch_taken_0x2d5dbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DBCu;
        // 0x2d5dc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dbc) {
            ctx->pc = 0x2D5FC8u;
            goto label_2d5fc8;
        }
    }
    ctx->pc = 0x2D5DC4u;
label_2d5dc4:
    // 0x2d5dc4: 0xc0acc08  jal         func_2B3020
label_2d5dc8:
    if (ctx->pc == 0x2D5DC8u) {
        ctx->pc = 0x2D5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DC4u;
        // 0x2d5dc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DCCu;
        goto label_2d5dcc;
    }
    ctx->pc = 0x2D5DC4u;
    SET_GPR_U32(ctx, 31, 0x2D5DCCu);
    ctx->pc = 0x2D5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5DC4u;
    // 0x2d5dc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3020u, 0x2D5DC4u, 0x2D5DCCu)) {
        return;
    }
    ctx->pc = 0x2D5DCCu;
label_2d5dcc:
    // 0x2d5dcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2d5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d5dd0:
    // 0x2d5dd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d5dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d5dd4:
    // 0x2d5dd4: 0xc0b55e4  jal         func_2D5790
label_2d5dd8:
    if (ctx->pc == 0x2D5DD8u) {
        ctx->pc = 0x2D5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DD4u;
        // 0x2d5dd8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DDCu;
        goto label_2d5ddc;
    }
    ctx->pc = 0x2D5DD4u;
    SET_GPR_U32(ctx, 31, 0x2D5DDCu);
    ctx->pc = 0x2D5DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5DD4u;
    // 0x2d5dd8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5790u, 0x2D5DD4u, 0x2D5DDCu)) {
        return;
    }
    ctx->pc = 0x2D5DDCu;
label_2d5ddc:
    // 0x2d5ddc: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x2d5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2d5de0:
    // 0x2d5de0: 0x46143183  div.s       $f6, $f6, $f20
    ctx->pc = 0x2d5de0u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[20]);
label_2d5de4:
    // 0x2d5de4: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x2d5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2d5de8:
    // 0x2d5de8: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x2d5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2d5dec:
    // 0x2d5dec: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2d5decu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_2d5df0:
    // 0x2d5df0: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2d5df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5df4:
    // 0x2d5df4: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2d5df4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_2d5df8:
    // 0x2d5df8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d5df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5dfc:
    // 0x2d5dfc: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2d5dfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_2d5e00:
    // 0x2d5e00: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e04:
    // 0x2d5e04: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5e08:
    // 0x2d5e08: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d5e08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_2d5e0c:
    // 0x2d5e0c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2d5e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_2d5e10:
    // 0x2d5e10: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d5e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2d5e14:
    // 0x2d5e14: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2d5e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d5e18:
    // 0x2d5e18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d5e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2d5e1c:
    // 0x2d5e1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d5e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2d5e20:
    // 0x2d5e20: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2d5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e24:
    // 0x2d5e24: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d5e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2d5e28:
    // 0x2d5e28: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5e2c:
    // 0x2d5e2c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2d5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5e30:
    // 0x2d5e30: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x2d5e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5e34:
    // 0x2d5e34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5e34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d5e38:
    // 0x2d5e38: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2d5e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2d5e3c:
    // 0x2d5e3c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2d5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e40:
    // 0x2d5e40: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d5e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2d5e44:
    // 0x2d5e44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5e44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5e48:
    // 0x2d5e48: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2d5e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2d5e4c:
    // 0x2d5e4c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2d5e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e50:
    // 0x2d5e50: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d5e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2d5e54:
    // 0x2d5e54: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5e54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5e58:
    // 0x2d5e58: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x2d5e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2d5e5c:
    // 0x2d5e5c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2d5e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e60:
    // 0x2d5e60: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d5e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2d5e64:
    // 0x2d5e64: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2d5e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5e68:
    // 0x2d5e68: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x2d5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5e6c:
    // 0x2d5e6c: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x2d5e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5e70:
    // 0x2d5e70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d5e74:
    // 0x2d5e74: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2d5e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2d5e78:
    // 0x2d5e78: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d5e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e7c:
    // 0x2d5e7c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d5e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2d5e80:
    // 0x2d5e80: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5e80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5e84:
    // 0x2d5e84: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2d5e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2d5e88:
    // 0x2d5e88: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d5e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5e8c:
    // 0x2d5e8c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d5e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2d5e90:
    // 0x2d5e90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5e90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5e94:
    // 0x2d5e94: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x2d5e94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2d5e98:
    // 0x2d5e98: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x2d5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2d5e9c:
    // 0x2d5e9c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d5e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5ea0:
    // 0x2d5ea0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2d5ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5ea4:
    // 0x2d5ea4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2d5ea4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2d5ea8:
    // 0x2d5ea8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2d5ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5eac:
    // 0x2d5eac: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x2d5eacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2d5eb0:
    // 0x2d5eb0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2d5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5eb4:
    // 0x2d5eb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d5eb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d5eb8:
    // 0x2d5eb8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2d5eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2d5ebc:
    // 0x2d5ebc: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2d5ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5ec0:
    // 0x2d5ec0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2d5ec0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2d5ec4:
    // 0x2d5ec4: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x2d5ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2d5ec8:
    // 0x2d5ec8: 0x46000187  neg.s       $f6, $f0
    ctx->pc = 0x2d5ec8u;
    ctx->f[6] = FPU_NEG_S(ctx->f[0]);
label_2d5ecc:
    // 0x2d5ecc: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x2d5eccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
label_2d5ed0:
    // 0x2d5ed0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2d5ed0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2d5ed4:
    // 0x2d5ed4: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2d5ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_2d5ed8:
    // 0x2d5ed8: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x2d5ed8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2d5edc:
    // 0x2d5edc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2d5edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2d5ee0:
    // 0x2d5ee0: 0x460301c2  mul.s       $f7, $f0, $f3
    ctx->pc = 0x2d5ee0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2d5ee4:
    // 0x2d5ee4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2d5ee4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2d5ee8:
    // 0x2d5ee8: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2d5ee8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_2d5eec:
    // 0x2d5eec: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2d5eecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_2d5ef0:
    // 0x2d5ef0: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x2d5ef0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2d5ef4:
    // 0x2d5ef4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2d5ef4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2d5ef8:
    // 0x2d5ef8: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x2d5ef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2d5efc:
    // 0x2d5efc: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x2d5efcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_2d5f00:
    // 0x2d5f00: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x2d5f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2d5f04:
    // 0x2d5f04: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2d5f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2d5f08:
    // 0x2d5f08: 0xe7a4009c  swc1        $f4, 0x9C($sp)
    ctx->pc = 0x2d5f08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2d5f0c:
    // 0x2d5f0c: 0xe7a60090  swc1        $f6, 0x90($sp)
    ctx->pc = 0x2d5f0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2d5f10:
    // 0x2d5f10: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x2d5f10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2d5f14:
    // 0x2d5f14: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x2d5f14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2d5f18:
    // 0x2d5f18: 0xe7a700ac  swc1        $f7, 0xAC($sp)
    ctx->pc = 0x2d5f18u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2d5f1c:
    // 0x2d5f1c: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2d5f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2d5f20:
    // 0x2d5f20: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x2d5f20u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_2d5f24:
    // 0x2d5f24: 0x46142943  div.s       $f5, $f5, $f20
    ctx->pc = 0x2d5f24u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[20]);
label_2d5f28:
    // 0x2d5f28: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x2d5f28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2d5f2c:
    // 0x2d5f2c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2d5f2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_2d5f30:
    // 0x2d5f30: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d5f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5f34:
    // 0x2d5f34: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2d5f34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2d5f38:
    // 0x2d5f38: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d5f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5f3c:
    // 0x2d5f3c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2d5f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5f40:
    // 0x2d5f40: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2d5f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_2d5f44:
    // 0x2d5f44: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d5f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2d5f48:
    // 0x2d5f48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d5f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2d5f4c:
    // 0x2d5f4c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d5f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d5f50:
    // 0x2d5f50: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d5f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2d5f54:
    // 0x2d5f54: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d5f54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2d5f58:
    // 0x2d5f58: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d5f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5f5c:
    // 0x2d5f5c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d5f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2d5f60:
    // 0x2d5f60: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2d5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5f64:
    // 0x2d5f64: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x2d5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5f68:
    // 0x2d5f68: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2d5f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2d5f6c:
    // 0x2d5f6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5f70:
    // 0x2d5f70: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2d5f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2d5f74:
    // 0x2d5f74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5f74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5f78:
    // 0x2d5f78: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2d5f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2d5f7c:
    // 0x2d5f7c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5f80:
    // 0x2d5f80: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2d5f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2d5f84:
    // 0x2d5f84: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5f84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5f88:
    // 0x2d5f88: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x2d5f88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2d5f8c:
    // 0x2d5f8c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5f90:
    // 0x2d5f90: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2d5f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2d5f94:
    // 0x2d5f94: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2d5f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5f98:
    // 0x2d5f98: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x2d5f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5f9c:
    // 0x2d5f9c: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x2d5f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d5fa0:
    // 0x2d5fa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d5fa4:
    // 0x2d5fa4: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2d5fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2d5fa8:
    // 0x2d5fa8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2d5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5fac:
    // 0x2d5fac: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2d5facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2d5fb0:
    // 0x2d5fb0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d5fb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2d5fb4:
    // 0x2d5fb4: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2d5fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2d5fb8:
    // 0x2d5fb8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d5fbc:
    // 0x2d5fbc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2d5fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2d5fc0:
    // 0x2d5fc0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5fc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2d5fc4:
    // 0x2d5fc4: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x2d5fc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2d5fc8:
    // 0x2d5fc8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2d5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2d5fcc:
    // 0x2d5fcc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2d5fccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2d5fd0:
    // 0x2d5fd0: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2d5fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2d5fd4:
    // 0x2d5fd4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x2d5fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2d5fd8:
    // 0x2d5fd8: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x2d5fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_2d5fdc:
    // 0x2d5fdc: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x2d5fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d5fe0:
    // 0x2d5fe0: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
label_2d5fe4:
    if (ctx->pc == 0x2D5FE4u) {
        ctx->pc = 0x2D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FE0u;
        // 0x2d5fe4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FE8u;
        goto label_2d5fe8;
    }
    ctx->pc = 0x2D5FE0u;
    {
        const bool branch_taken_0x2d5fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FE0u;
        // 0x2d5fe4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fe0) {
            ctx->pc = 0x2D5DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5db0;
        }
    }
    ctx->pc = 0x2D5FE8u;
label_2d5fe8:
    // 0x2d5fe8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2d5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2d5fec:
    // 0x2d5fec: 0xc0ad00c  jal         func_2B4030
label_2d5ff0:
    if (ctx->pc == 0x2D5FF0u) {
        ctx->pc = 0x2D5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FECu;
        // 0x2d5ff0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FF4u;
        goto label_2d5ff4;
    }
    ctx->pc = 0x2D5FECu;
    SET_GPR_U32(ctx, 31, 0x2D5FF4u);
    ctx->pc = 0x2D5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5FECu;
    // 0x2d5ff0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4030u, 0x2D5FECu, 0x2D5FF4u)) {
        return;
    }
    ctx->pc = 0x2D5FF4u;
label_2d5ff4:
    // 0x2d5ff4: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x2d5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_2d5ff8:
    // 0x2d5ff8: 0x24b00fc8  addiu       $s0, $a1, 0xFC8
    ctx->pc = 0x2d5ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_2d5ffc:
    // 0x2d5ffc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2d5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d6000:
    // 0x2d6000: 0x40f809  jalr        $v0
label_2d6004:
    if (ctx->pc == 0x2D6004u) {
        ctx->pc = 0x2D6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6000u;
        // 0x2d6004: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6008u;
        goto label_2d6008;
    }
    ctx->pc = 0x2D6000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6008u);
        ctx->pc = 0x2D6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6000u;
        // 0x2d6004: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6000u, 0x2D6008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6008u;
label_2d6008:
    // 0x2d6008: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2d6008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d600c:
    // 0x2d600c: 0x60f809  jalr        $v1
label_2d6010:
    if (ctx->pc == 0x2D6010u) {
        ctx->pc = 0x2D6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D600Cu;
        // 0x2d6010: 0x8fa400e4  lw          $a0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6014u;
        goto label_2d6014;
    }
    ctx->pc = 0x2D600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D6014u);
        ctx->pc = 0x2D6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D600Cu;
        // 0x2d6010: 0x8fa400e4  lw          $a0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D600Cu, 0x2D6014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6014u;
label_2d6014:
    // 0x2d6014: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2d6014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d6018:
    // 0x2d6018: 0x40f809  jalr        $v0
label_2d601c:
    if (ctx->pc == 0x2D601Cu) {
        ctx->pc = 0x2D601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6018u;
        // 0x2d601c: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6020u;
        goto label_2d6020;
    }
    ctx->pc = 0x2D6018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6020u);
        ctx->pc = 0x2D601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6018u;
        // 0x2d601c: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6018u, 0x2D6020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6020u;
label_2d6020:
    // 0x2d6020: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2d6020u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2d6024:
    // 0x2d6024: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2d6024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2d6028:
    // 0x2d6028: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2d6028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2d602c:
    // 0x2d602c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2d602cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2d6030:
    // 0x2d6030: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2d6030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2d6034:
    // 0x2d6034: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2d6034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2d6038:
    // 0x2d6038: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2d6038u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2d603c:
    // 0x2d603c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2d603cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2d6040:
    // 0x2d6040: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2d6040u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2d6044:
    // 0x2d6044: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2d6044u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2d6048:
    // 0x2d6048: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2d6048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2d604c:
    // 0x2d604c: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2d604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2d6050:
    // 0x2d6050: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2d6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d6054:
    // 0x2d6054: 0x3e00008  jr          $ra
label_2d6058:
    if (ctx->pc == 0x2D6058u) {
        ctx->pc = 0x2D6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6054u;
        // 0x2d6058: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D605Cu;
        goto label_2d605c;
    }
    ctx->pc = 0x2D6054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6054u;
        // 0x2d6058: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D605Cu;
label_2d605c:
    // 0x2d605c: 0x0  nop
    ctx->pc = 0x2d605cu;
    // NOP
    ctx->pc = 0x2d6060u;
}
