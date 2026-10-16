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

// Function: sub_002B4B68
// Address: 0x2b4b68 - 0x2b51c8
void sub_002B4B68_0x2b4b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4B68_0x2b4b68");
#endif

    switch (ctx->pc) {
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b6cu: goto label_2b4b6c;
        case 0x2b4b70u: goto label_2b4b70;
        case 0x2b4b74u: goto label_2b4b74;
        case 0x2b4b78u: goto label_2b4b78;
        case 0x2b4b7cu: goto label_2b4b7c;
        case 0x2b4b80u: goto label_2b4b80;
        case 0x2b4b84u: goto label_2b4b84;
        case 0x2b4b88u: goto label_2b4b88;
        case 0x2b4b8cu: goto label_2b4b8c;
        case 0x2b4b90u: goto label_2b4b90;
        case 0x2b4b94u: goto label_2b4b94;
        case 0x2b4b98u: goto label_2b4b98;
        case 0x2b4b9cu: goto label_2b4b9c;
        case 0x2b4ba0u: goto label_2b4ba0;
        case 0x2b4ba4u: goto label_2b4ba4;
        case 0x2b4ba8u: goto label_2b4ba8;
        case 0x2b4bacu: goto label_2b4bac;
        case 0x2b4bb0u: goto label_2b4bb0;
        case 0x2b4bb4u: goto label_2b4bb4;
        case 0x2b4bb8u: goto label_2b4bb8;
        case 0x2b4bbcu: goto label_2b4bbc;
        case 0x2b4bc0u: goto label_2b4bc0;
        case 0x2b4bc4u: goto label_2b4bc4;
        case 0x2b4bc8u: goto label_2b4bc8;
        case 0x2b4bccu: goto label_2b4bcc;
        case 0x2b4bd0u: goto label_2b4bd0;
        case 0x2b4bd4u: goto label_2b4bd4;
        case 0x2b4bd8u: goto label_2b4bd8;
        case 0x2b4bdcu: goto label_2b4bdc;
        case 0x2b4be0u: goto label_2b4be0;
        case 0x2b4be4u: goto label_2b4be4;
        case 0x2b4be8u: goto label_2b4be8;
        case 0x2b4becu: goto label_2b4bec;
        case 0x2b4bf0u: goto label_2b4bf0;
        case 0x2b4bf4u: goto label_2b4bf4;
        case 0x2b4bf8u: goto label_2b4bf8;
        case 0x2b4bfcu: goto label_2b4bfc;
        case 0x2b4c00u: goto label_2b4c00;
        case 0x2b4c04u: goto label_2b4c04;
        case 0x2b4c08u: goto label_2b4c08;
        case 0x2b4c0cu: goto label_2b4c0c;
        case 0x2b4c10u: goto label_2b4c10;
        case 0x2b4c14u: goto label_2b4c14;
        case 0x2b4c18u: goto label_2b4c18;
        case 0x2b4c1cu: goto label_2b4c1c;
        case 0x2b4c20u: goto label_2b4c20;
        case 0x2b4c24u: goto label_2b4c24;
        case 0x2b4c28u: goto label_2b4c28;
        case 0x2b4c2cu: goto label_2b4c2c;
        case 0x2b4c30u: goto label_2b4c30;
        case 0x2b4c34u: goto label_2b4c34;
        case 0x2b4c38u: goto label_2b4c38;
        case 0x2b4c3cu: goto label_2b4c3c;
        case 0x2b4c40u: goto label_2b4c40;
        case 0x2b4c44u: goto label_2b4c44;
        case 0x2b4c48u: goto label_2b4c48;
        case 0x2b4c4cu: goto label_2b4c4c;
        case 0x2b4c50u: goto label_2b4c50;
        case 0x2b4c54u: goto label_2b4c54;
        case 0x2b4c58u: goto label_2b4c58;
        case 0x2b4c5cu: goto label_2b4c5c;
        case 0x2b4c60u: goto label_2b4c60;
        case 0x2b4c64u: goto label_2b4c64;
        case 0x2b4c68u: goto label_2b4c68;
        case 0x2b4c6cu: goto label_2b4c6c;
        case 0x2b4c70u: goto label_2b4c70;
        case 0x2b4c74u: goto label_2b4c74;
        case 0x2b4c78u: goto label_2b4c78;
        case 0x2b4c7cu: goto label_2b4c7c;
        case 0x2b4c80u: goto label_2b4c80;
        case 0x2b4c84u: goto label_2b4c84;
        case 0x2b4c88u: goto label_2b4c88;
        case 0x2b4c8cu: goto label_2b4c8c;
        case 0x2b4c90u: goto label_2b4c90;
        case 0x2b4c94u: goto label_2b4c94;
        case 0x2b4c98u: goto label_2b4c98;
        case 0x2b4c9cu: goto label_2b4c9c;
        case 0x2b4ca0u: goto label_2b4ca0;
        case 0x2b4ca4u: goto label_2b4ca4;
        case 0x2b4ca8u: goto label_2b4ca8;
        case 0x2b4cacu: goto label_2b4cac;
        case 0x2b4cb0u: goto label_2b4cb0;
        case 0x2b4cb4u: goto label_2b4cb4;
        case 0x2b4cb8u: goto label_2b4cb8;
        case 0x2b4cbcu: goto label_2b4cbc;
        case 0x2b4cc0u: goto label_2b4cc0;
        case 0x2b4cc4u: goto label_2b4cc4;
        case 0x2b4cc8u: goto label_2b4cc8;
        case 0x2b4cccu: goto label_2b4ccc;
        case 0x2b4cd0u: goto label_2b4cd0;
        case 0x2b4cd4u: goto label_2b4cd4;
        case 0x2b4cd8u: goto label_2b4cd8;
        case 0x2b4cdcu: goto label_2b4cdc;
        case 0x2b4ce0u: goto label_2b4ce0;
        case 0x2b4ce4u: goto label_2b4ce4;
        case 0x2b4ce8u: goto label_2b4ce8;
        case 0x2b4cecu: goto label_2b4cec;
        case 0x2b4cf0u: goto label_2b4cf0;
        case 0x2b4cf4u: goto label_2b4cf4;
        case 0x2b4cf8u: goto label_2b4cf8;
        case 0x2b4cfcu: goto label_2b4cfc;
        case 0x2b4d00u: goto label_2b4d00;
        case 0x2b4d04u: goto label_2b4d04;
        case 0x2b4d08u: goto label_2b4d08;
        case 0x2b4d0cu: goto label_2b4d0c;
        case 0x2b4d10u: goto label_2b4d10;
        case 0x2b4d14u: goto label_2b4d14;
        case 0x2b4d18u: goto label_2b4d18;
        case 0x2b4d1cu: goto label_2b4d1c;
        case 0x2b4d20u: goto label_2b4d20;
        case 0x2b4d24u: goto label_2b4d24;
        case 0x2b4d28u: goto label_2b4d28;
        case 0x2b4d2cu: goto label_2b4d2c;
        case 0x2b4d30u: goto label_2b4d30;
        case 0x2b4d34u: goto label_2b4d34;
        case 0x2b4d38u: goto label_2b4d38;
        case 0x2b4d3cu: goto label_2b4d3c;
        case 0x2b4d40u: goto label_2b4d40;
        case 0x2b4d44u: goto label_2b4d44;
        case 0x2b4d48u: goto label_2b4d48;
        case 0x2b4d4cu: goto label_2b4d4c;
        case 0x2b4d50u: goto label_2b4d50;
        case 0x2b4d54u: goto label_2b4d54;
        case 0x2b4d58u: goto label_2b4d58;
        case 0x2b4d5cu: goto label_2b4d5c;
        case 0x2b4d60u: goto label_2b4d60;
        case 0x2b4d64u: goto label_2b4d64;
        case 0x2b4d68u: goto label_2b4d68;
        case 0x2b4d6cu: goto label_2b4d6c;
        case 0x2b4d70u: goto label_2b4d70;
        case 0x2b4d74u: goto label_2b4d74;
        case 0x2b4d78u: goto label_2b4d78;
        case 0x2b4d7cu: goto label_2b4d7c;
        case 0x2b4d80u: goto label_2b4d80;
        case 0x2b4d84u: goto label_2b4d84;
        case 0x2b4d88u: goto label_2b4d88;
        case 0x2b4d8cu: goto label_2b4d8c;
        case 0x2b4d90u: goto label_2b4d90;
        case 0x2b4d94u: goto label_2b4d94;
        case 0x2b4d98u: goto label_2b4d98;
        case 0x2b4d9cu: goto label_2b4d9c;
        case 0x2b4da0u: goto label_2b4da0;
        case 0x2b4da4u: goto label_2b4da4;
        case 0x2b4da8u: goto label_2b4da8;
        case 0x2b4dacu: goto label_2b4dac;
        case 0x2b4db0u: goto label_2b4db0;
        case 0x2b4db4u: goto label_2b4db4;
        case 0x2b4db8u: goto label_2b4db8;
        case 0x2b4dbcu: goto label_2b4dbc;
        case 0x2b4dc0u: goto label_2b4dc0;
        case 0x2b4dc4u: goto label_2b4dc4;
        case 0x2b4dc8u: goto label_2b4dc8;
        case 0x2b4dccu: goto label_2b4dcc;
        case 0x2b4dd0u: goto label_2b4dd0;
        case 0x2b4dd4u: goto label_2b4dd4;
        case 0x2b4dd8u: goto label_2b4dd8;
        case 0x2b4ddcu: goto label_2b4ddc;
        case 0x2b4de0u: goto label_2b4de0;
        case 0x2b4de4u: goto label_2b4de4;
        case 0x2b4de8u: goto label_2b4de8;
        case 0x2b4decu: goto label_2b4dec;
        case 0x2b4df0u: goto label_2b4df0;
        case 0x2b4df4u: goto label_2b4df4;
        case 0x2b4df8u: goto label_2b4df8;
        case 0x2b4dfcu: goto label_2b4dfc;
        case 0x2b4e00u: goto label_2b4e00;
        case 0x2b4e04u: goto label_2b4e04;
        case 0x2b4e08u: goto label_2b4e08;
        case 0x2b4e0cu: goto label_2b4e0c;
        case 0x2b4e10u: goto label_2b4e10;
        case 0x2b4e14u: goto label_2b4e14;
        case 0x2b4e18u: goto label_2b4e18;
        case 0x2b4e1cu: goto label_2b4e1c;
        case 0x2b4e20u: goto label_2b4e20;
        case 0x2b4e24u: goto label_2b4e24;
        case 0x2b4e28u: goto label_2b4e28;
        case 0x2b4e2cu: goto label_2b4e2c;
        case 0x2b4e30u: goto label_2b4e30;
        case 0x2b4e34u: goto label_2b4e34;
        case 0x2b4e38u: goto label_2b4e38;
        case 0x2b4e3cu: goto label_2b4e3c;
        case 0x2b4e40u: goto label_2b4e40;
        case 0x2b4e44u: goto label_2b4e44;
        case 0x2b4e48u: goto label_2b4e48;
        case 0x2b4e4cu: goto label_2b4e4c;
        case 0x2b4e50u: goto label_2b4e50;
        case 0x2b4e54u: goto label_2b4e54;
        case 0x2b4e58u: goto label_2b4e58;
        case 0x2b4e5cu: goto label_2b4e5c;
        case 0x2b4e60u: goto label_2b4e60;
        case 0x2b4e64u: goto label_2b4e64;
        case 0x2b4e68u: goto label_2b4e68;
        case 0x2b4e6cu: goto label_2b4e6c;
        case 0x2b4e70u: goto label_2b4e70;
        case 0x2b4e74u: goto label_2b4e74;
        case 0x2b4e78u: goto label_2b4e78;
        case 0x2b4e7cu: goto label_2b4e7c;
        case 0x2b4e80u: goto label_2b4e80;
        case 0x2b4e84u: goto label_2b4e84;
        case 0x2b4e88u: goto label_2b4e88;
        case 0x2b4e8cu: goto label_2b4e8c;
        case 0x2b4e90u: goto label_2b4e90;
        case 0x2b4e94u: goto label_2b4e94;
        case 0x2b4e98u: goto label_2b4e98;
        case 0x2b4e9cu: goto label_2b4e9c;
        case 0x2b4ea0u: goto label_2b4ea0;
        case 0x2b4ea4u: goto label_2b4ea4;
        case 0x2b4ea8u: goto label_2b4ea8;
        case 0x2b4eacu: goto label_2b4eac;
        case 0x2b4eb0u: goto label_2b4eb0;
        case 0x2b4eb4u: goto label_2b4eb4;
        case 0x2b4eb8u: goto label_2b4eb8;
        case 0x2b4ebcu: goto label_2b4ebc;
        case 0x2b4ec0u: goto label_2b4ec0;
        case 0x2b4ec4u: goto label_2b4ec4;
        case 0x2b4ec8u: goto label_2b4ec8;
        case 0x2b4eccu: goto label_2b4ecc;
        case 0x2b4ed0u: goto label_2b4ed0;
        case 0x2b4ed4u: goto label_2b4ed4;
        case 0x2b4ed8u: goto label_2b4ed8;
        case 0x2b4edcu: goto label_2b4edc;
        case 0x2b4ee0u: goto label_2b4ee0;
        case 0x2b4ee4u: goto label_2b4ee4;
        case 0x2b4ee8u: goto label_2b4ee8;
        case 0x2b4eecu: goto label_2b4eec;
        case 0x2b4ef0u: goto label_2b4ef0;
        case 0x2b4ef4u: goto label_2b4ef4;
        case 0x2b4ef8u: goto label_2b4ef8;
        case 0x2b4efcu: goto label_2b4efc;
        case 0x2b4f00u: goto label_2b4f00;
        case 0x2b4f04u: goto label_2b4f04;
        case 0x2b4f08u: goto label_2b4f08;
        case 0x2b4f0cu: goto label_2b4f0c;
        case 0x2b4f10u: goto label_2b4f10;
        case 0x2b4f14u: goto label_2b4f14;
        case 0x2b4f18u: goto label_2b4f18;
        case 0x2b4f1cu: goto label_2b4f1c;
        case 0x2b4f20u: goto label_2b4f20;
        case 0x2b4f24u: goto label_2b4f24;
        case 0x2b4f28u: goto label_2b4f28;
        case 0x2b4f2cu: goto label_2b4f2c;
        case 0x2b4f30u: goto label_2b4f30;
        case 0x2b4f34u: goto label_2b4f34;
        case 0x2b4f38u: goto label_2b4f38;
        case 0x2b4f3cu: goto label_2b4f3c;
        case 0x2b4f40u: goto label_2b4f40;
        case 0x2b4f44u: goto label_2b4f44;
        case 0x2b4f48u: goto label_2b4f48;
        case 0x2b4f4cu: goto label_2b4f4c;
        case 0x2b4f50u: goto label_2b4f50;
        case 0x2b4f54u: goto label_2b4f54;
        case 0x2b4f58u: goto label_2b4f58;
        case 0x2b4f5cu: goto label_2b4f5c;
        case 0x2b4f60u: goto label_2b4f60;
        case 0x2b4f64u: goto label_2b4f64;
        case 0x2b4f68u: goto label_2b4f68;
        case 0x2b4f6cu: goto label_2b4f6c;
        case 0x2b4f70u: goto label_2b4f70;
        case 0x2b4f74u: goto label_2b4f74;
        case 0x2b4f78u: goto label_2b4f78;
        case 0x2b4f7cu: goto label_2b4f7c;
        case 0x2b4f80u: goto label_2b4f80;
        case 0x2b4f84u: goto label_2b4f84;
        case 0x2b4f88u: goto label_2b4f88;
        case 0x2b4f8cu: goto label_2b4f8c;
        case 0x2b4f90u: goto label_2b4f90;
        case 0x2b4f94u: goto label_2b4f94;
        case 0x2b4f98u: goto label_2b4f98;
        case 0x2b4f9cu: goto label_2b4f9c;
        case 0x2b4fa0u: goto label_2b4fa0;
        case 0x2b4fa4u: goto label_2b4fa4;
        case 0x2b4fa8u: goto label_2b4fa8;
        case 0x2b4facu: goto label_2b4fac;
        case 0x2b4fb0u: goto label_2b4fb0;
        case 0x2b4fb4u: goto label_2b4fb4;
        case 0x2b4fb8u: goto label_2b4fb8;
        case 0x2b4fbcu: goto label_2b4fbc;
        case 0x2b4fc0u: goto label_2b4fc0;
        case 0x2b4fc4u: goto label_2b4fc4;
        case 0x2b4fc8u: goto label_2b4fc8;
        case 0x2b4fccu: goto label_2b4fcc;
        case 0x2b4fd0u: goto label_2b4fd0;
        case 0x2b4fd4u: goto label_2b4fd4;
        case 0x2b4fd8u: goto label_2b4fd8;
        case 0x2b4fdcu: goto label_2b4fdc;
        case 0x2b4fe0u: goto label_2b4fe0;
        case 0x2b4fe4u: goto label_2b4fe4;
        case 0x2b4fe8u: goto label_2b4fe8;
        case 0x2b4fecu: goto label_2b4fec;
        case 0x2b4ff0u: goto label_2b4ff0;
        case 0x2b4ff4u: goto label_2b4ff4;
        case 0x2b4ff8u: goto label_2b4ff8;
        case 0x2b4ffcu: goto label_2b4ffc;
        case 0x2b5000u: goto label_2b5000;
        case 0x2b5004u: goto label_2b5004;
        case 0x2b5008u: goto label_2b5008;
        case 0x2b500cu: goto label_2b500c;
        case 0x2b5010u: goto label_2b5010;
        case 0x2b5014u: goto label_2b5014;
        case 0x2b5018u: goto label_2b5018;
        case 0x2b501cu: goto label_2b501c;
        case 0x2b5020u: goto label_2b5020;
        case 0x2b5024u: goto label_2b5024;
        case 0x2b5028u: goto label_2b5028;
        case 0x2b502cu: goto label_2b502c;
        case 0x2b5030u: goto label_2b5030;
        case 0x2b5034u: goto label_2b5034;
        case 0x2b5038u: goto label_2b5038;
        case 0x2b503cu: goto label_2b503c;
        case 0x2b5040u: goto label_2b5040;
        case 0x2b5044u: goto label_2b5044;
        case 0x2b5048u: goto label_2b5048;
        case 0x2b504cu: goto label_2b504c;
        case 0x2b5050u: goto label_2b5050;
        case 0x2b5054u: goto label_2b5054;
        case 0x2b5058u: goto label_2b5058;
        case 0x2b505cu: goto label_2b505c;
        case 0x2b5060u: goto label_2b5060;
        case 0x2b5064u: goto label_2b5064;
        case 0x2b5068u: goto label_2b5068;
        case 0x2b506cu: goto label_2b506c;
        case 0x2b5070u: goto label_2b5070;
        case 0x2b5074u: goto label_2b5074;
        case 0x2b5078u: goto label_2b5078;
        case 0x2b507cu: goto label_2b507c;
        case 0x2b5080u: goto label_2b5080;
        case 0x2b5084u: goto label_2b5084;
        case 0x2b5088u: goto label_2b5088;
        case 0x2b508cu: goto label_2b508c;
        case 0x2b5090u: goto label_2b5090;
        case 0x2b5094u: goto label_2b5094;
        case 0x2b5098u: goto label_2b5098;
        case 0x2b509cu: goto label_2b509c;
        case 0x2b50a0u: goto label_2b50a0;
        case 0x2b50a4u: goto label_2b50a4;
        case 0x2b50a8u: goto label_2b50a8;
        case 0x2b50acu: goto label_2b50ac;
        case 0x2b50b0u: goto label_2b50b0;
        case 0x2b50b4u: goto label_2b50b4;
        case 0x2b50b8u: goto label_2b50b8;
        case 0x2b50bcu: goto label_2b50bc;
        case 0x2b50c0u: goto label_2b50c0;
        case 0x2b50c4u: goto label_2b50c4;
        case 0x2b50c8u: goto label_2b50c8;
        case 0x2b50ccu: goto label_2b50cc;
        case 0x2b50d0u: goto label_2b50d0;
        case 0x2b50d4u: goto label_2b50d4;
        case 0x2b50d8u: goto label_2b50d8;
        case 0x2b50dcu: goto label_2b50dc;
        case 0x2b50e0u: goto label_2b50e0;
        case 0x2b50e4u: goto label_2b50e4;
        case 0x2b50e8u: goto label_2b50e8;
        case 0x2b50ecu: goto label_2b50ec;
        case 0x2b50f0u: goto label_2b50f0;
        case 0x2b50f4u: goto label_2b50f4;
        case 0x2b50f8u: goto label_2b50f8;
        case 0x2b50fcu: goto label_2b50fc;
        case 0x2b5100u: goto label_2b5100;
        case 0x2b5104u: goto label_2b5104;
        case 0x2b5108u: goto label_2b5108;
        case 0x2b510cu: goto label_2b510c;
        case 0x2b5110u: goto label_2b5110;
        case 0x2b5114u: goto label_2b5114;
        case 0x2b5118u: goto label_2b5118;
        case 0x2b511cu: goto label_2b511c;
        case 0x2b5120u: goto label_2b5120;
        case 0x2b5124u: goto label_2b5124;
        case 0x2b5128u: goto label_2b5128;
        case 0x2b512cu: goto label_2b512c;
        case 0x2b5130u: goto label_2b5130;
        case 0x2b5134u: goto label_2b5134;
        case 0x2b5138u: goto label_2b5138;
        case 0x2b513cu: goto label_2b513c;
        case 0x2b5140u: goto label_2b5140;
        case 0x2b5144u: goto label_2b5144;
        case 0x2b5148u: goto label_2b5148;
        case 0x2b514cu: goto label_2b514c;
        case 0x2b5150u: goto label_2b5150;
        case 0x2b5154u: goto label_2b5154;
        case 0x2b5158u: goto label_2b5158;
        case 0x2b515cu: goto label_2b515c;
        case 0x2b5160u: goto label_2b5160;
        case 0x2b5164u: goto label_2b5164;
        case 0x2b5168u: goto label_2b5168;
        case 0x2b516cu: goto label_2b516c;
        case 0x2b5170u: goto label_2b5170;
        case 0x2b5174u: goto label_2b5174;
        case 0x2b5178u: goto label_2b5178;
        case 0x2b517cu: goto label_2b517c;
        case 0x2b5180u: goto label_2b5180;
        case 0x2b5184u: goto label_2b5184;
        case 0x2b5188u: goto label_2b5188;
        case 0x2b518cu: goto label_2b518c;
        case 0x2b5190u: goto label_2b5190;
        case 0x2b5194u: goto label_2b5194;
        case 0x2b5198u: goto label_2b5198;
        case 0x2b519cu: goto label_2b519c;
        case 0x2b51a0u: goto label_2b51a0;
        case 0x2b51a4u: goto label_2b51a4;
        case 0x2b51a8u: goto label_2b51a8;
        case 0x2b51acu: goto label_2b51ac;
        case 0x2b51b0u: goto label_2b51b0;
        case 0x2b51b4u: goto label_2b51b4;
        case 0x2b51b8u: goto label_2b51b8;
        case 0x2b51bcu: goto label_2b51bc;
        case 0x2b51c0u: goto label_2b51c0;
        case 0x2b51c4u: goto label_2b51c4;
        default: break;
    }

    ctx->pc = 0x2b4b68u;

label_2b4b68:
    // 0x2b4b68: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x2b4b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_2b4b6c:
    // 0x2b4b6c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2b4b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b70:
    // 0x2b4b70: 0x7fbe02a0  sq          $fp, 0x2A0($sp)
    ctx->pc = 0x2b4b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 30));
label_2b4b74:
    // 0x2b4b74: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x2b4b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
label_2b4b78:
    // 0x2b4b78: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x2b4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
label_2b4b7c:
    // 0x2b4b7c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2b4b7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b80:
    // 0x2b4b80: 0x7fb402e0  sq          $s4, 0x2E0($sp)
    ctx->pc = 0x2b4b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 20));
label_2b4b84:
    // 0x2b4b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b4b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b88:
    // 0x2b4b88: 0x7fb702b0  sq          $s7, 0x2B0($sp)
    ctx->pc = 0x2b4b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 23));
label_2b4b8c:
    // 0x2b4b8c: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x2b4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
label_2b4b90:
    // 0x2b4b90: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2b4b90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b94:
    // 0x2b4b94: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x2b4b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
label_2b4b98:
    // 0x2b4b98: 0x7fb20300  sq          $s2, 0x300($sp)
    ctx->pc = 0x2b4b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 18));
label_2b4b9c:
    // 0x2b4b9c: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x2b4b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
label_2b4ba0:
    // 0x2b4ba0: 0x7fb502d0  sq          $s5, 0x2D0($sp)
    ctx->pc = 0x2b4ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 21));
label_2b4ba4:
    // 0x2b4ba4: 0x7fb602c0  sq          $s6, 0x2C0($sp)
    ctx->pc = 0x2b4ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 22));
label_2b4ba8:
    // 0x2b4ba8: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x2b4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
label_2b4bac:
    // 0x2b4bac: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x2b4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2b4bb0:
    // 0x2b4bb0: 0x8fac0338  lw          $t4, 0x338($sp)
    ctx->pc = 0x2b4bb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_2b4bb4:
    // 0x2b4bb4: 0x8fb40340  lw          $s4, 0x340($sp)
    ctx->pc = 0x2b4bb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_2b4bb8:
    // 0x2b4bb8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2b4bbc:
    if (ctx->pc == 0x2B4BBCu) {
        ctx->pc = 0x2B4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BB8u;
        // 0x2b4bbc: 0x8fb00348  lw          $s0, 0x348($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BC0u;
        goto label_2b4bc0;
    }
    ctx->pc = 0x2B4BB8u;
    {
        const bool branch_taken_0x2b4bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BB8u;
        // 0x2b4bbc: 0x8fb00348  lw          $s0, 0x348($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bb8) {
            ctx->pc = 0x2B4C38u;
            goto label_2b4c38;
        }
    }
    ctx->pc = 0x2B4BC0u;
label_2b4bc0:
    // 0x2b4bc0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2b4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b4bc4:
    // 0x2b4bc4: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x2b4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_2b4bc8:
    // 0x2b4bc8: 0xafa50274  sw          $a1, 0x274($sp)
    ctx->pc = 0x2b4bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 5));
label_2b4bcc:
    // 0x2b4bcc: 0x27ad00a0  addiu       $t5, $sp, 0xA0
    ctx->pc = 0x2b4bccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2b4bd0:
    // 0x2b4bd0: 0x27ae00b0  addiu       $t6, $sp, 0xB0
    ctx->pc = 0x2b4bd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2b4bd4:
    // 0x2b4bd4: 0x27af00c0  addiu       $t7, $sp, 0xC0
    ctx->pc = 0x2b4bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b4bd8:
    // 0x2b4bd8: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2b4bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b4bdc:
    // 0x2b4bdc: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x2b4bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2b4be0:
    // 0x2b4be0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2b4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2b4be4:
    // 0x2b4be4: 0x68710007  ldl         $s1, 0x7($v1)
    ctx->pc = 0x2b4be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
label_2b4be8:
    // 0x2b4be8: 0x6c710000  ldr         $s1, 0x0($v1)
    ctx->pc = 0x2b4be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
label_2b4bec:
    // 0x2b4bec: 0x6872000f  ldl         $s2, 0xF($v1)
    ctx->pc = 0x2b4becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2b4bf0:
    // 0x2b4bf0: 0x6c720008  ldr         $s2, 0x8($v1)
    ctx->pc = 0x2b4bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2b4bf4:
    // 0x2b4bf4: 0x68730017  ldl         $s3, 0x17($v1)
    ctx->pc = 0x2b4bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2b4bf8:
    // 0x2b4bf8: 0x6c730010  ldr         $s3, 0x10($v1)
    ctx->pc = 0x2b4bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2b4bfc:
    // 0x2b4bfc: 0x6876001f  ldl         $s6, 0x1F($v1)
    ctx->pc = 0x2b4bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_2b4c00:
    // 0x2b4c00: 0x6c760018  ldr         $s6, 0x18($v1)
    ctx->pc = 0x2b4c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
label_2b4c04:
    // 0x2b4c04: 0xb0910007  sdl         $s1, 0x7($a0)
    ctx->pc = 0x2b4c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c08:
    // 0x2b4c08: 0xb4910000  sdr         $s1, 0x0($a0)
    ctx->pc = 0x2b4c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c0c:
    // 0x2b4c0c: 0xb092000f  sdl         $s2, 0xF($a0)
    ctx->pc = 0x2b4c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c10:
    // 0x2b4c10: 0xb4920008  sdr         $s2, 0x8($a0)
    ctx->pc = 0x2b4c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c14:
    // 0x2b4c14: 0xb0930017  sdl         $s3, 0x17($a0)
    ctx->pc = 0x2b4c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c18:
    // 0x2b4c18: 0xb4930010  sdr         $s3, 0x10($a0)
    ctx->pc = 0x2b4c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c1c:
    // 0x2b4c1c: 0xb096001f  sdl         $s6, 0x1F($a0)
    ctx->pc = 0x2b4c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c20:
    // 0x2b4c20: 0xb4960018  sdr         $s6, 0x18($a0)
    ctx->pc = 0x2b4c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c24:
    // 0x2b4c24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2b4c28:
    // 0x2b4c28: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_2b4c2c:
    if (ctx->pc == 0x2B4C2Cu) {
        ctx->pc = 0x2B4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C28u;
        // 0x2b4c2c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C30u;
        goto label_2b4c30;
    }
    ctx->pc = 0x2B4C28u;
    {
        const bool branch_taken_0x2b4c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C28u;
        // 0x2b4c2c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c28) {
            ctx->pc = 0x2B4BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4be4;
        }
    }
    ctx->pc = 0x2B4C30u;
label_2b4c30:
    // 0x2b4c30: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b4c34:
    if (ctx->pc == 0x2B4C34u) {
        ctx->pc = 0x2B4C38u;
        goto label_2b4c38;
    }
    ctx->pc = 0x2B4C30u;
    {
        const bool branch_taken_0x2b4c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c30) {
            ctx->pc = 0x2B4C88u;
            goto label_2b4c88;
        }
    }
    ctx->pc = 0x2B4C38u;
label_2b4c38:
    // 0x2b4c38: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2b4c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b4c3c:
    // 0x2b4c3c: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_2b4c40:
    // 0x2b4c40: 0xafa50274  sw          $a1, 0x274($sp)
    ctx->pc = 0x2b4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 5));
label_2b4c44:
    // 0x2b4c44: 0x27ad00a0  addiu       $t5, $sp, 0xA0
    ctx->pc = 0x2b4c44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2b4c48:
    // 0x2b4c48: 0x27ae00b0  addiu       $t6, $sp, 0xB0
    ctx->pc = 0x2b4c48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2b4c4c:
    // 0x2b4c4c: 0x27af00c0  addiu       $t7, $sp, 0xC0
    ctx->pc = 0x2b4c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b4c50:
    // 0x2b4c50: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2b4c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b4c54:
    // 0x2b4c54: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x2b4c54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2b4c58:
    // 0x2b4c58: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2b4c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2b4c5c:
    // 0x2b4c5c: 0xdc710000  ld          $s1, 0x0($v1)
    ctx->pc = 0x2b4c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4c60:
    // 0x2b4c60: 0xdc720008  ld          $s2, 0x8($v1)
    ctx->pc = 0x2b4c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_2b4c64:
    // 0x2b4c64: 0xdc730010  ld          $s3, 0x10($v1)
    ctx->pc = 0x2b4c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2b4c68:
    // 0x2b4c68: 0xdc760018  ld          $s6, 0x18($v1)
    ctx->pc = 0x2b4c68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_2b4c6c:
    // 0x2b4c6c: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x2b4c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
label_2b4c70:
    // 0x2b4c70: 0xfc920008  sd          $s2, 0x8($a0)
    ctx->pc = 0x2b4c70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 18));
label_2b4c74:
    // 0x2b4c74: 0xfc930010  sd          $s3, 0x10($a0)
    ctx->pc = 0x2b4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 19));
label_2b4c78:
    // 0x2b4c78: 0xfc960018  sd          $s6, 0x18($a0)
    ctx->pc = 0x2b4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 22));
label_2b4c7c:
    // 0x2b4c7c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2b4c80:
    // 0x2b4c80: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_2b4c84:
    if (ctx->pc == 0x2B4C84u) {
        ctx->pc = 0x2B4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C80u;
        // 0x2b4c84: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4C88u;
        goto label_2b4c88;
    }
    ctx->pc = 0x2B4C80u;
    {
        const bool branch_taken_0x2b4c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C80u;
        // 0x2b4c84: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c80) {
            ctx->pc = 0x2B4C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4c5c;
        }
    }
    ctx->pc = 0x2B4C88u;
label_2b4c88:
    // 0x2b4c88: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2b4c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2b4c8c:
    // 0x2b4c8c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2b4c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2b4c90:
    // 0x2b4c90: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2b4c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c94:
    // 0x2b4c94: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2b4c94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b4c98:
    // 0x2b4c98: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2b4c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4c9c:
    // 0x2b4c9c: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2b4c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2b4ca0:
    // 0x2b4ca0: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2b4ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2b4ca4:
    // 0x2b4ca4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2b4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_2b4ca8:
    // 0x2b4ca8: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x2b4ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4cac:
    // 0x2b4cac: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x2b4cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4cb0:
    // 0x2b4cb0: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x2b4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_2b4cb4:
    // 0x2b4cb4: 0x8fa30274  lw          $v1, 0x274($sp)
    ctx->pc = 0x2b4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_2b4cb8:
    // 0x2b4cb8: 0x69520007  ldl         $s2, 0x7($t2)
    ctx->pc = 0x2b4cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2b4cbc:
    // 0x2b4cbc: 0x6d520000  ldr         $s2, 0x0($t2)
    ctx->pc = 0x2b4cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2b4cc0:
    // 0x2b4cc0: 0x8d530008  lw          $s3, 0x8($t2)
    ctx->pc = 0x2b4cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2b4cc4:
    // 0x2b4cc4: 0xb3b200a7  sdl         $s2, 0xA7($sp)
    ctx->pc = 0x2b4cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4cc8:
    // 0x2b4cc8: 0xb7b200a0  sdr         $s2, 0xA0($sp)
    ctx->pc = 0x2b4cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ccc:
    // 0x2b4ccc: 0xafb300a8  sw          $s3, 0xA8($sp)
    ctx->pc = 0x2b4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 19));
label_2b4cd0:
    // 0x2b4cd0: 0x69690007  ldl         $t1, 0x7($t3)
    ctx->pc = 0x2b4cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2b4cd4:
    // 0x2b4cd4: 0x6d690000  ldr         $t1, 0x0($t3)
    ctx->pc = 0x2b4cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2b4cd8:
    // 0x2b4cd8: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x2b4cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_2b4cdc:
    // 0x2b4cdc: 0xb3a900b7  sdl         $t1, 0xB7($sp)
    ctx->pc = 0x2b4cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ce0:
    // 0x2b4ce0: 0xb7a900b0  sdr         $t1, 0xB0($sp)
    ctx->pc = 0x2b4ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ce4:
    // 0x2b4ce4: 0xafaa00b8  sw          $t2, 0xB8($sp)
    ctx->pc = 0x2b4ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 10));
label_2b4ce8:
    // 0x2b4ce8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2b4ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b4cec:
    // 0x2b4cec: 0x68d30007  ldl         $s3, 0x7($a2)
    ctx->pc = 0x2b4cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2b4cf0:
    // 0x2b4cf0: 0x6cd30000  ldr         $s3, 0x0($a2)
    ctx->pc = 0x2b4cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2b4cf4:
    // 0x2b4cf4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2b4cf8:
    // 0x2b4cf8: 0xb3b300c7  sdl         $s3, 0xC7($sp)
    ctx->pc = 0x2b4cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4cfc:
    // 0x2b4cfc: 0xb7b300c0  sdr         $s3, 0xC0($sp)
    ctx->pc = 0x2b4cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d00:
    // 0x2b4d00: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2b4d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_2b4d04:
    // 0x2b4d04: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x2b4d04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b4d08:
    // 0x2b4d08: 0x698d0007  ldl         $t5, 0x7($t4)
    ctx->pc = 0x2b4d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2b4d0c:
    // 0x2b4d0c: 0x6d8d0000  ldr         $t5, 0x0($t4)
    ctx->pc = 0x2b4d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2b4d10:
    // 0x2b4d10: 0x8d910008  lw          $s1, 0x8($t4)
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_2b4d14:
    // 0x2b4d14: 0xb3ad00d7  sdl         $t5, 0xD7($sp)
    ctx->pc = 0x2b4d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d18:
    // 0x2b4d18: 0xb7ad00d0  sdr         $t5, 0xD0($sp)
    ctx->pc = 0x2b4d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d1c:
    // 0x2b4d1c: 0xafb100d8  sw          $s1, 0xD8($sp)
    ctx->pc = 0x2b4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 17));
label_2b4d20:
    // 0x2b4d20: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x2b4d20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2b4d24:
    // 0x2b4d24: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x2b4d24u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b4d28:
    // 0x2b4d28: 0x8e930104  lw          $s3, 0x104($s4)
    ctx->pc = 0x2b4d28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2b4d2c:
    // 0x2b4d2c: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x2b4d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b4d30:
    // 0x2b4d30: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x2b4d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b4d34:
    // 0x2b4d34: 0x6a08000f  ldl         $t0, 0xF($s0)
    ctx->pc = 0x2b4d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b4d38:
    // 0x2b4d38: 0x6e080008  ldr         $t0, 0x8($s0)
    ctx->pc = 0x2b4d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b4d3c:
    // 0x2b4d3c: 0x6a090017  ldl         $t1, 0x17($s0)
    ctx->pc = 0x2b4d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2b4d40:
    // 0x2b4d40: 0x6e090010  ldr         $t1, 0x10($s0)
    ctx->pc = 0x2b4d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2b4d44:
    // 0x2b4d44: 0x6a0d001f  ldl         $t5, 0x1F($s0)
    ctx->pc = 0x2b4d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2b4d48:
    // 0x2b4d48: 0x6e0d0018  ldr         $t5, 0x18($s0)
    ctx->pc = 0x2b4d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2b4d4c:
    // 0x2b4d4c: 0xb3a400e7  sdl         $a0, 0xE7($sp)
    ctx->pc = 0x2b4d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d50:
    // 0x2b4d50: 0xb7a400e0  sdr         $a0, 0xE0($sp)
    ctx->pc = 0x2b4d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d54:
    // 0x2b4d54: 0xb3a800ef  sdl         $t0, 0xEF($sp)
    ctx->pc = 0x2b4d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d58:
    // 0x2b4d58: 0xb7a800e8  sdr         $t0, 0xE8($sp)
    ctx->pc = 0x2b4d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d5c:
    // 0x2b4d5c: 0xb3a900f7  sdl         $t1, 0xF7($sp)
    ctx->pc = 0x2b4d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d60:
    // 0x2b4d60: 0xb7a900f0  sdr         $t1, 0xF0($sp)
    ctx->pc = 0x2b4d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d64:
    // 0x2b4d64: 0xb3ad00ff  sdl         $t5, 0xFF($sp)
    ctx->pc = 0x2b4d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d68:
    // 0x2b4d68: 0xb7ad00f8  sdr         $t5, 0xF8($sp)
    ctx->pc = 0x2b4d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d6c:
    // 0x2b4d6c: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x2b4d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b4d70:
    // 0x2b4d70: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x2b4d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b4d74:
    // 0x2b4d74: 0x6a08002f  ldl         $t0, 0x2F($s0)
    ctx->pc = 0x2b4d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b4d78:
    // 0x2b4d78: 0x6e080028  ldr         $t0, 0x28($s0)
    ctx->pc = 0x2b4d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b4d7c:
    // 0x2b4d7c: 0x6a090037  ldl         $t1, 0x37($s0)
    ctx->pc = 0x2b4d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2b4d80:
    // 0x2b4d80: 0x6e090030  ldr         $t1, 0x30($s0)
    ctx->pc = 0x2b4d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2b4d84:
    // 0x2b4d84: 0xb3a40107  sdl         $a0, 0x107($sp)
    ctx->pc = 0x2b4d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d88:
    // 0x2b4d88: 0xb7a40100  sdr         $a0, 0x100($sp)
    ctx->pc = 0x2b4d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d8c:
    // 0x2b4d8c: 0xb3a8010f  sdl         $t0, 0x10F($sp)
    ctx->pc = 0x2b4d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d90:
    // 0x2b4d90: 0xb7a80108  sdr         $t0, 0x108($sp)
    ctx->pc = 0x2b4d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d94:
    // 0x2b4d94: 0xb3a90117  sdl         $t1, 0x117($sp)
    ctx->pc = 0x2b4d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d98:
    // 0x2b4d98: 0xb7a90110  sdr         $t1, 0x110($sp)
    ctx->pc = 0x2b4d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4d9c:
    // 0x2b4d9c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x2b4d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b4da0:
    // 0x2b4da0: 0xdc490000  ld          $t1, 0x0($v0)
    ctx->pc = 0x2b4da0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2b4da4:
    // 0x2b4da4: 0xdc4d0008  ld          $t5, 0x8($v0)
    ctx->pc = 0x2b4da4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2b4da8:
    // 0x2b4da8: 0xdc510010  ld          $s1, 0x10($v0)
    ctx->pc = 0x2b4da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2b4dac:
    // 0x2b4dac: 0xdc520018  ld          $s2, 0x18($v0)
    ctx->pc = 0x2b4dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_2b4db0:
    // 0x2b4db0: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x2b4db0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
label_2b4db4:
    // 0x2b4db4: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x2b4db4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
label_2b4db8:
    // 0x2b4db8: 0xfc710010  sd          $s1, 0x10($v1)
    ctx->pc = 0x2b4db8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 17));
label_2b4dbc:
    // 0x2b4dbc: 0xfc720018  sd          $s2, 0x18($v1)
    ctx->pc = 0x2b4dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 18));
label_2b4dc0:
    // 0x2b4dc0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2b4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2b4dc4:
    // 0x2b4dc4: 0x1445fff6  bne         $v0, $a1, . + 4 + (-0xA << 2)
label_2b4dc8:
    if (ctx->pc == 0x2B4DC8u) {
        ctx->pc = 0x2B4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DC4u;
        // 0x2b4dc8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4DCCu;
        goto label_2b4dcc;
    }
    ctx->pc = 0x2B4DC4u;
    {
        const bool branch_taken_0x2b4dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2B4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DC4u;
        // 0x2b4dc8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dc4) {
            ctx->pc = 0x2B4DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4da0;
        }
    }
    ctx->pc = 0x2B4DCCu;
label_2b4dcc:
    // 0x2b4dcc: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2b4dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b4dd0:
    // 0x2b4dd0: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2b4dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b4dd4:
    // 0x2b4dd4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2b4dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4dd8:
    // 0x2b4dd8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2b4dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ddc:
    // 0x2b4ddc: 0x694d0007  ldl         $t5, 0x7($t2)
    ctx->pc = 0x2b4ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2b4de0:
    // 0x2b4de0: 0x6d4d0000  ldr         $t5, 0x0($t2)
    ctx->pc = 0x2b4de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2b4de4:
    // 0x2b4de4: 0x8d510008  lw          $s1, 0x8($t2)
    ctx->pc = 0x2b4de4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2b4de8:
    // 0x2b4de8: 0xb3ad01ef  sdl         $t5, 0x1EF($sp)
    ctx->pc = 0x2b4de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4dec:
    // 0x2b4dec: 0xb7ad01e8  sdr         $t5, 0x1E8($sp)
    ctx->pc = 0x2b4decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4df0:
    // 0x2b4df0: 0xafb101f0  sw          $s1, 0x1F0($sp)
    ctx->pc = 0x2b4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 17));
label_2b4df4:
    // 0x2b4df4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b4df8:
    // 0x2b4df8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b4df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b4dfc:
    // 0x2b4dfc: 0x8e8500fc  lw          $a1, 0xFC($s4)
    ctx->pc = 0x2b4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_2b4e00:
    // 0x2b4e00: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x2b4e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b4e04:
    // 0x2b4e04: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x2b4e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b4e08:
    // 0x2b4e08: 0x8d640008  lw          $a0, 0x8($t3)
    ctx->pc = 0x2b4e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_2b4e0c:
    // 0x2b4e0c: 0xb3a301fb  sdl         $v1, 0x1FB($sp)
    ctx->pc = 0x2b4e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e10:
    // 0x2b4e10: 0xb7a301f4  sdr         $v1, 0x1F4($sp)
    ctx->pc = 0x2b4e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e14:
    // 0x2b4e14: 0xafa401fc  sw          $a0, 0x1FC($sp)
    ctx->pc = 0x2b4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 4));
label_2b4e18:
    // 0x2b4e18: 0x6a8a006b  ldl         $t2, 0x6B($s4)
    ctx->pc = 0x2b4e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2b4e1c:
    // 0x2b4e1c: 0x6e8a0064  ldr         $t2, 0x64($s4)
    ctx->pc = 0x2b4e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2b4e20:
    // 0x2b4e20: 0x8e8b006c  lw          $t3, 0x6C($s4)
    ctx->pc = 0x2b4e20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_2b4e24:
    // 0x2b4e24: 0xb3aa0207  sdl         $t2, 0x207($sp)
    ctx->pc = 0x2b4e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e28:
    // 0x2b4e28: 0xb7aa0200  sdr         $t2, 0x200($sp)
    ctx->pc = 0x2b4e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e2c:
    // 0x2b4e2c: 0xafab0208  sw          $t3, 0x208($sp)
    ctx->pc = 0x2b4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 11));
label_2b4e30:
    // 0x2b4e30: 0x68d20007  ldl         $s2, 0x7($a2)
    ctx->pc = 0x2b4e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2b4e34:
    // 0x2b4e34: 0x6cd20000  ldr         $s2, 0x0($a2)
    ctx->pc = 0x2b4e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2b4e38:
    // 0x2b4e38: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2b4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2b4e3c:
    // 0x2b4e3c: 0xb3b20213  sdl         $s2, 0x213($sp)
    ctx->pc = 0x2b4e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e40:
    // 0x2b4e40: 0xb7b2020c  sdr         $s2, 0x20C($sp)
    ctx->pc = 0x2b4e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e44:
    // 0x2b4e44: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2b4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_2b4e48:
    // 0x2b4e48: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2b4e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4e4c:
    // 0x2b4e4c: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x2b4e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_2b4e50:
    // 0x2b4e50: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2b4e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4e54:
    // 0x2b4e54: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2b4e54u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
label_2b4e58:
    // 0x2b4e58: 0xe7a20258  swc1        $f2, 0x258($sp)
    ctx->pc = 0x2b4e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_2b4e5c:
    // 0x2b4e5c: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x2b4e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4e60:
    // 0x2b4e60: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x2b4e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_2b4e64:
    // 0x2b4e64: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x2b4e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4e68:
    // 0x2b4e68: 0xe7a10260  swc1        $f1, 0x260($sp)
    ctx->pc = 0x2b4e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_2b4e6c:
    // 0x2b4e6c: 0x69860007  ldl         $a2, 0x7($t4)
    ctx->pc = 0x2b4e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b4e70:
    // 0x2b4e70: 0x6d860000  ldr         $a2, 0x0($t4)
    ctx->pc = 0x2b4e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b4e74:
    // 0x2b4e74: 0x8d880008  lw          $t0, 0x8($t4)
    ctx->pc = 0x2b4e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_2b4e78:
    // 0x2b4e78: 0xb3a6021f  sdl         $a2, 0x21F($sp)
    ctx->pc = 0x2b4e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e7c:
    // 0x2b4e7c: 0xb7a60218  sdr         $a2, 0x218($sp)
    ctx->pc = 0x2b4e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e80:
    // 0x2b4e80: 0xafa80220  sw          $t0, 0x220($sp)
    ctx->pc = 0x2b4e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 8));
label_2b4e84:
    // 0x2b4e84: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x2b4e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2b4e88:
    // 0x2b4e88: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x2b4e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2b4e8c:
    // 0x2b4e8c: 0x8ced0008  lw          $t5, 0x8($a3)
    ctx->pc = 0x2b4e8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2b4e90:
    // 0x2b4e90: 0xb3ab0147  sdl         $t3, 0x147($sp)
    ctx->pc = 0x2b4e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e94:
    // 0x2b4e94: 0xb7ab0140  sdr         $t3, 0x140($sp)
    ctx->pc = 0x2b4e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4e98:
    // 0x2b4e98: 0xafad0148  sw          $t5, 0x148($sp)
    ctx->pc = 0x2b4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 13));
label_2b4e9c:
    // 0x2b4e9c: 0x68e20013  ldl         $v0, 0x13($a3)
    ctx->pc = 0x2b4e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2b4ea0:
    // 0x2b4ea0: 0x6ce2000c  ldr         $v0, 0xC($a3)
    ctx->pc = 0x2b4ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2b4ea4:
    // 0x2b4ea4: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2b4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2b4ea8:
    // 0x2b4ea8: 0xb3a20153  sdl         $v0, 0x153($sp)
    ctx->pc = 0x2b4ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 339); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4eac:
    // 0x2b4eac: 0xb7a2014c  sdr         $v0, 0x14C($sp)
    ctx->pc = 0x2b4eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 332); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4eb0:
    // 0x2b4eb0: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x2b4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
label_2b4eb4:
    // 0x2b4eb4: 0x6bc80007  ldl         $t0, 0x7($fp)
    ctx->pc = 0x2b4eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b4eb8:
    // 0x2b4eb8: 0x6fc80000  ldr         $t0, 0x0($fp)
    ctx->pc = 0x2b4eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b4ebc:
    // 0x2b4ebc: 0x8fc90008  lw          $t1, 0x8($fp)
    ctx->pc = 0x2b4ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2b4ec0:
    // 0x2b4ec0: 0xb3a80127  sdl         $t0, 0x127($sp)
    ctx->pc = 0x2b4ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ec4:
    // 0x2b4ec4: 0xb7a80120  sdr         $t0, 0x120($sp)
    ctx->pc = 0x2b4ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ec8:
    // 0x2b4ec8: 0xafa90128  sw          $t1, 0x128($sp)
    ctx->pc = 0x2b4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 9));
label_2b4ecc:
    // 0x2b4ecc: 0x6aed0007  ldl         $t5, 0x7($s7)
    ctx->pc = 0x2b4eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2b4ed0:
    // 0x2b4ed0: 0x6eed0000  ldr         $t5, 0x0($s7)
    ctx->pc = 0x2b4ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2b4ed4:
    // 0x2b4ed4: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x2b4ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2b4ed8:
    // 0x2b4ed8: 0xb3ad0133  sdl         $t5, 0x133($sp)
    ctx->pc = 0x2b4ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4edc:
    // 0x2b4edc: 0xb7ad012c  sdr         $t5, 0x12C($sp)
    ctx->pc = 0x2b4edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4ee0:
    // 0x2b4ee0: 0xafb10134  sw          $s1, 0x134($sp)
    ctx->pc = 0x2b4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 17));
label_2b4ee4:
    // 0x2b4ee4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_2b4ee8:
    if (ctx->pc == 0x2B4EE8u) {
        ctx->pc = 0x2B4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EE4u;
        // 0x2b4ee8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4EECu;
        goto label_2b4eec;
    }
    ctx->pc = 0x2B4EE4u;
    {
        const bool branch_taken_0x2b4ee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ee4) {
            ctx->pc = 0x2B4EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4EE4u;
            // 0x2b4ee8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4EECu;
            goto label_2b4eec;
        }
    }
    ctx->pc = 0x2B4EECu;
label_2b4eec:
    // 0x2b4eec: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x2b4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2b4ef0:
    // 0x2b4ef0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2b4ef0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2b4ef4:
    // 0x2b4ef4: 0x2012  mflo        $a0
    ctx->pc = 0x2b4ef4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b4ef8:
    // 0x2b4ef8: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2b4ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2b4efc:
    // 0x2b4efc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b4f00:
    if (ctx->pc == 0x2B4F00u) {
        ctx->pc = 0x2B4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EFCu;
        // 0x2b4f00: 0x2c51018  mult        $v0, $s6, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F04u;
        goto label_2b4f04;
    }
    ctx->pc = 0x2B4EFCu;
    {
        const bool branch_taken_0x2b4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EFCu;
        // 0x2b4f00: 0x2c51018  mult        $v0, $s6, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4efc) {
            ctx->pc = 0x2B4F14u;
            goto label_2b4f14;
        }
    }
    ctx->pc = 0x2B4F04u;
label_2b4f04:
    // 0x2b4f04: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_2b4f08:
    if (ctx->pc == 0x2B4F08u) {
        ctx->pc = 0x2B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F04u;
        // 0x2b4f08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F0Cu;
        goto label_2b4f0c;
    }
    ctx->pc = 0x2B4F04u;
    {
        const bool branch_taken_0x2b4f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f04) {
            ctx->pc = 0x2B4F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F04u;
            // 0x2b4f08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F0Cu;
            goto label_2b4f0c;
        }
    }
    ctx->pc = 0x2B4F0Cu;
label_2b4f0c:
    // 0x2b4f0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b4f0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f10:
    // 0x2b4f10: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x2b4f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2b4f14:
    // 0x2b4f14: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2b4f14u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f18:
    // 0x2b4f18: 0x10a0009b  beqz        $a1, . + 4 + (0x9B << 2)
label_2b4f1c:
    if (ctx->pc == 0x2B4F1Cu) {
        ctx->pc = 0x2B4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F18u;
        // 0x2b4f1c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F20u;
        goto label_2b4f20;
    }
    ctx->pc = 0x2B4F18u;
    {
        const bool branch_taken_0x2b4f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F18u;
        // 0x2b4f1c: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f18) {
            ctx->pc = 0x2B5188u;
            goto label_2b5188;
        }
    }
    ctx->pc = 0x2B4F20u;
label_2b4f20:
    // 0x2b4f20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f24:
    // 0x2b4f24: 0x0  nop
    ctx->pc = 0x2b4f24u;
    // NOP
label_2b4f28:
    // 0x2b4f28: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2b4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2b4f2c:
    // 0x2b4f2c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2b4f30:
    if (ctx->pc == 0x2B4F30u) {
        ctx->pc = 0x2B4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F2Cu;
        // 0x2b4f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F34u;
        goto label_2b4f34;
    }
    ctx->pc = 0x2B4F2Cu;
    {
        const bool branch_taken_0x2b4f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f2c) {
            ctx->pc = 0x2B4F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F2Cu;
            // 0x2b4f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F7Cu;
            goto label_2b4f7c;
        }
    }
    ctx->pc = 0x2B4F34u;
label_2b4f34:
    // 0x2b4f34: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x2b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_2b4f38:
    // 0x2b4f38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b4f3c:
    if (ctx->pc == 0x2B4F3Cu) {
        ctx->pc = 0x2B4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F38u;
        // 0x2b4f3c: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F40u;
        goto label_2b4f40;
    }
    ctx->pc = 0x2B4F38u;
    {
        const bool branch_taken_0x2b4f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F38u;
        // 0x2b4f3c: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f38) {
            ctx->pc = 0x2B4F74u;
            goto label_2b4f74;
        }
    }
    ctx->pc = 0x2B4F40u;
label_2b4f40:
    // 0x2b4f40: 0x52600012  beql        $s3, $zero, . + 4 + (0x12 << 2)
label_2b4f44:
    if (ctx->pc == 0x2B4F44u) {
        ctx->pc = 0x2B4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F40u;
        // 0x2b4f44: 0xafb10264  sw          $s1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F48u;
        goto label_2b4f48;
    }
    ctx->pc = 0x2B4F40u;
    {
        const bool branch_taken_0x2b4f40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f40) {
            ctx->pc = 0x2B4F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F40u;
            // 0x2b4f44: 0xafb10264  sw          $s1, 0x264($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F8Cu;
            goto label_2b4f8c;
        }
    }
    ctx->pc = 0x2B4F48u;
label_2b4f48:
    // 0x2b4f48: 0x8e8400d0  lw          $a0, 0xD0($s4)
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_2b4f4c:
    // 0x2b4f4c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_2b4f50:
    if (ctx->pc == 0x2B4F50u) {
        ctx->pc = 0x2B4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F4Cu;
        // 0x2b4f50: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F54u;
        goto label_2b4f54;
    }
    ctx->pc = 0x2B4F4Cu;
    {
        const bool branch_taken_0x2b4f4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f4c) {
            ctx->pc = 0x2B4F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F4Cu;
            // 0x2b4f50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F54u;
            goto label_2b4f54;
        }
    }
    ctx->pc = 0x2B4F54u;
label_2b4f54:
    // 0x2b4f54: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x2b4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_2b4f58:
    // 0x2b4f58: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2b4f5c:
    // 0x2b4f5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b4f60:
    // 0x2b4f60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2b4f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2b4f64:
    // 0x2b4f64: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x2b4f64u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2b4f68:
    // 0x2b4f68: 0x1012  mflo        $v0
    ctx->pc = 0x2b4f68u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2b4f6c:
    // 0x2b4f6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b4f70:
    if (ctx->pc == 0x2B4F70u) {
        ctx->pc = 0x2B4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F6Cu;
        // 0x2b4f70: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F74u;
        goto label_2b4f74;
    }
    ctx->pc = 0x2B4F6Cu;
    {
        const bool branch_taken_0x2b4f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F6Cu;
        // 0x2b4f70: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f6c) {
            ctx->pc = 0x2B4F88u;
            goto label_2b4f88;
        }
    }
    ctx->pc = 0x2B4F74u;
label_2b4f74:
    // 0x2b4f74: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b4f78:
    if (ctx->pc == 0x2B4F78u) {
        ctx->pc = 0x2B4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F74u;
        // 0x2b4f78: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F7Cu;
        goto label_2b4f7c;
    }
    ctx->pc = 0x2B4F74u;
    {
        const bool branch_taken_0x2b4f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F74u;
        // 0x2b4f78: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f74) {
            ctx->pc = 0x2B4F8Cu;
            goto label_2b4f8c;
        }
    }
    ctx->pc = 0x2B4F7Cu;
label_2b4f7c:
    // 0x2b4f7c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2b4f80:
    if (ctx->pc == 0x2B4F80u) {
        ctx->pc = 0x2B4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F7Cu;
        // 0x2b4f80: 0x8e8800dc  lw          $t0, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4F84u;
        goto label_2b4f84;
    }
    ctx->pc = 0x2B4F7Cu;
    {
        const bool branch_taken_0x2b4f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b4f7c) {
            ctx->pc = 0x2B4F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F7Cu;
            // 0x2b4f80: 0x8e8800dc  lw          $t0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F90u;
            goto label_2b4f90;
        }
    }
    ctx->pc = 0x2B4F84u;
label_2b4f84:
    // 0x2b4f84: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2b4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2b4f88:
    // 0x2b4f88: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2b4f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2b4f8c:
    // 0x2b4f8c: 0x8e8800dc  lw          $t0, 0xDC($s4)
    ctx->pc = 0x2b4f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_2b4f90:
    // 0x2b4f90: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x2b4f90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_2b4f94:
    // 0x2b4f94: 0x8e8900e8  lw          $t1, 0xE8($s4)
    ctx->pc = 0x2b4f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_2b4f98:
    // 0x2b4f98: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2b4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2b4f9c:
    // 0x2b4f9c: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x2b4f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_2b4fa0:
    // 0x2b4fa0: 0x8fa701ac  lw          $a3, 0x1AC($sp)
    ctx->pc = 0x2b4fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2b4fa4:
    // 0x2b4fa4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b4fa8:
    // 0x2b4fa8: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x2b4fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_2b4fac:
    // 0x2b4fac: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x2b4facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_2b4fb0:
    // 0x2b4fb0: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x2b4fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_2b4fb4:
    // 0x2b4fb4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2b4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2b4fb8:
    // 0x2b4fb8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2b4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2b4fbc:
    // 0x2b4fbc: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x2b4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_2b4fc0:
    // 0x2b4fc0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b4fc4:
    // 0x2b4fc4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b4fc8:
    // 0x2b4fc8: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x2b4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_2b4fcc:
    // 0x2b4fcc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b4fd0:
    // 0x2b4fd0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2b4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2b4fd4:
    // 0x2b4fd4: 0xafa30204  sw          $v1, 0x204($sp)
    ctx->pc = 0x2b4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 3));
label_2b4fd8:
    // 0x2b4fd8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b4fdc:
    // 0x2b4fdc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b4fe0:
    // 0x2b4fe0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x2b4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_2b4fe4:
    // 0x2b4fe4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b4fe8:
    // 0x2b4fe8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2b4fec:
    // 0x2b4fec: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x2b4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
label_2b4ff0:
    // 0x2b4ff0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2b4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2b4ff4:
    // 0x2b4ff4: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_2b4ff8:
    // 0x2b4ff8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b4ffc:
    // 0x2b4ffc: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x2b4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_2b5000:
    // 0x2b5000: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b5004:
    // 0x2b5004: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b5004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b5008:
    // 0x2b5008: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x2b5008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_2b500c:
    // 0x2b500c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b5010:
    // 0x2b5010: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x2b5010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
label_2b5014:
    // 0x2b5014: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x2b5014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2b5018:
    // 0x2b5018: 0xafa70168  sw          $a3, 0x168($sp)
    ctx->pc = 0x2b5018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 7));
label_2b501c:
    // 0x2b501c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b5020:
    // 0x2b5020: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b5024:
    // 0x2b5024: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x2b5024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_2b5028:
    // 0x2b5028: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b5028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b502c:
    // 0x2b502c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2b5030:
    // 0x2b5030: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x2b5030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_2b5034:
    // 0x2b5034: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b5034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b5038:
    // 0x2b5038: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b5038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b503c:
    // 0x2b503c: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2b503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_2b5040:
    // 0x2b5040: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b5040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b5044:
    // 0x2b5044: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2b5048:
    // 0x2b5048: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x2b5048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_2b504c:
    // 0x2b504c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b5050:
    // 0x2b5050: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x2b5050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_2b5054:
    // 0x2b5054: 0x8fa80350  lw          $t0, 0x350($sp)
    ctx->pc = 0x2b5054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_2b5058:
    // 0x2b5058: 0x100f809  jalr        $t0
label_2b505c:
    if (ctx->pc == 0x2B505Cu) {
        ctx->pc = 0x2B505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5058u;
        // 0x2b505c: 0x7fb90280  sq          $t9, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5060u;
        goto label_2b5060;
    }
    ctx->pc = 0x2B5058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x2B5060u);
        ctx->pc = 0x2B505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5058u;
        // 0x2b505c: 0x7fb90280  sq          $t9, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5058u, 0x2B5060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5060u;
label_2b5060:
    // 0x2b5060: 0x8e8800dc  lw          $t0, 0xDC($s4)
    ctx->pc = 0x2b5060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_2b5064:
    // 0x2b5064: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2b5068:
    // 0x2b5068: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x2b5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2b506c:
    // 0x2b506c: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x2b506cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_2b5070:
    // 0x2b5070: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x2b5070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_2b5074:
    // 0x2b5074: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2b5074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b5078:
    // 0x2b5078: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2b5078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2b507c:
    // 0x2b507c: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x2b507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_2b5080:
    // 0x2b5080: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2b5080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2b5084:
    // 0x2b5084: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x2b5084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2b5088:
    // 0x2b5088: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x2b5088u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_2b508c:
    // 0x2b508c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2b508cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5090:
    // 0x2b5090: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b5090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2b5094:
    // 0x2b5094: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x2b5094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b5098:
    // 0x2b5098: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b5098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b509c:
    // 0x2b509c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b509cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b50a0:
    // 0x2b50a0: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x2b50a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2b50a4:
    // 0x2b50a4: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x2b50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_2b50a8:
    // 0x2b50a8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2b50a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2b50ac:
    // 0x2b50ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b50acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b50b0:
    // 0x2b50b0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2b50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2b50b4:
    // 0x2b50b4: 0x8faf0160  lw          $t7, 0x160($sp)
    ctx->pc = 0x2b50b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2b50b8:
    // 0x2b50b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b50b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b50bc:
    // 0x2b50bc: 0x8fad017c  lw          $t5, 0x17C($sp)
    ctx->pc = 0x2b50bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_2b50c0:
    // 0x2b50c0: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x2b50c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2b50c4:
    // 0x2b50c4: 0x8faa0164  lw          $t2, 0x164($sp)
    ctx->pc = 0x2b50c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2b50c8:
    // 0x2b50c8: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x2b50c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_2b50cc:
    // 0x2b50cc: 0x8d0c0000  lw          $t4, 0x0($t0)
    ctx->pc = 0x2b50ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2b50d0:
    // 0x2b50d0: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x2b50d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_2b50d4:
    // 0x2b50d4: 0x8fae01d0  lw          $t6, 0x1D0($sp)
    ctx->pc = 0x2b50d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2b50d8:
    // 0x2b50d8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2b50d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_2b50dc:
    // 0x2b50dc: 0x8fab01c4  lw          $t3, 0x1C4($sp)
    ctx->pc = 0x2b50dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2b50e0:
    // 0x2b50e0: 0xc6082  srl         $t4, $t4, 2
    ctx->pc = 0x2b50e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 2));
label_2b50e4:
    // 0x2b50e4: 0x8fa901e8  lw          $t1, 0x1E8($sp)
    ctx->pc = 0x2b50e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2b50e8:
    // 0x2b50e8: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x2b50e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_2b50ec:
    // 0x2b50ec: 0x8fa801f4  lw          $t0, 0x1F4($sp)
    ctx->pc = 0x2b50ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_2b50f0:
    // 0x2b50f0: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x2b50f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_2b50f4:
    // 0x2b50f4: 0x8fa70200  lw          $a3, 0x200($sp)
    ctx->pc = 0x2b50f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2b50f8:
    // 0x2b50f8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2b50f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2b50fc:
    // 0x2b50fc: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x2b50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2b5100:
    // 0x2b5100: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2b5100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2b5104:
    // 0x2b5104: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x2b5104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2b5108:
    // 0x2b5108: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2b5108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2b510c:
    // 0x2b510c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2b510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2b5110:
    // 0x2b5110: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2b5110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b5114:
    // 0x2b5114: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x2b5114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2b5118:
    // 0x2b5118: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b5118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b511c:
    // 0x2b511c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5120:
    // 0x2b5120: 0xafab01c4  sw          $t3, 0x1C4($sp)
    ctx->pc = 0x2b5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 11));
label_2b5124:
    // 0x2b5124: 0xafaa0164  sw          $t2, 0x164($sp)
    ctx->pc = 0x2b5124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 10));
label_2b5128:
    // 0x2b5128: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2b5128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_2b512c:
    // 0x2b512c: 0xafa40218  sw          $a0, 0x218($sp)
    ctx->pc = 0x2b512cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 4));
label_2b5130:
    // 0x2b5130: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2b5130u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5134:
    // 0x2b5134: 0xafaf0160  sw          $t7, 0x160($sp)
    ctx->pc = 0x2b5134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 15));
label_2b5138:
    // 0x2b5138: 0xafad017c  sw          $t5, 0x17C($sp)
    ctx->pc = 0x2b5138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 13));
label_2b513c:
    // 0x2b513c: 0xafae01d0  sw          $t6, 0x1D0($sp)
    ctx->pc = 0x2b513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 14));
label_2b5140:
    // 0x2b5140: 0xafa901e8  sw          $t1, 0x1E8($sp)
    ctx->pc = 0x2b5140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 9));
label_2b5144:
    // 0x2b5144: 0xafa801f4  sw          $t0, 0x1F4($sp)
    ctx->pc = 0x2b5144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 8));
label_2b5148:
    // 0x2b5148: 0xafa70200  sw          $a3, 0x200($sp)
    ctx->pc = 0x2b5148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 7));
label_2b514c:
    // 0x2b514c: 0xafa6020c  sw          $a2, 0x20C($sp)
    ctx->pc = 0x2b514cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 6));
label_2b5150:
    // 0x2b5150: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x2b5150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_2b5154:
    // 0x2b5154: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2b5154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2b5158:
    // 0x2b5158: 0xaee50004  sw          $a1, 0x4($s7)
    ctx->pc = 0x2b5158u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 5));
label_2b515c:
    // 0x2b515c: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x2b515cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2b5160:
    // 0x2b5160: 0x8faa0270  lw          $t2, 0x270($sp)
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2b5164:
    // 0x2b5164: 0x171182a  slt         $v1, $t3, $s1
    ctx->pc = 0x2b5164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2b5168:
    // 0x2b5168: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x2b5168u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
label_2b516c:
    // 0x2b516c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2b516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2b5170:
    // 0x2b5170: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2b5174:
    // 0x2b5174: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b5174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2b5178:
    // 0x2b5178: 0x8e8200fc  lw          $v0, 0xFC($s4)
    ctx->pc = 0x2b5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_2b517c:
    // 0x2b517c: 0x7bb90280  lq          $t9, 0x280($sp)
    ctx->pc = 0x2b517cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2b5180:
    // 0x2b5180: 0x1722ff69  bne         $t9, $v0, . + 4 + (-0x97 << 2)
label_2b5184:
    if (ctx->pc == 0x2B5184u) {
        ctx->pc = 0x2B5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5180u;
        // 0x2b5184: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5188u;
        goto label_2b5188;
    }
    ctx->pc = 0x2B5180u;
    {
        const bool branch_taken_0x2b5180 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5180u;
        // 0x2b5184: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5180) {
            ctx->pc = 0x2B4F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4f28;
        }
    }
    ctx->pc = 0x2B5188u;
label_2b5188:
    // 0x2b5188: 0x8e8200fc  lw          $v0, 0xFC($s4)
    ctx->pc = 0x2b5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_2b518c:
    // 0x2b518c: 0x8fad0270  lw          $t5, 0x270($sp)
    ctx->pc = 0x2b518cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2b5190:
    // 0x2b5190: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x2b5190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_2b5194:
    // 0x2b5194: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x2b5194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_2b5198:
    // 0x2b5198: 0x7bb20300  lq          $s2, 0x300($sp)
    ctx->pc = 0x2b5198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_2b519c:
    // 0x2b519c: 0x7bb302f0  lq          $s3, 0x2F0($sp)
    ctx->pc = 0x2b519cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_2b51a0:
    // 0x2b51a0: 0x7bb402e0  lq          $s4, 0x2E0($sp)
    ctx->pc = 0x2b51a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_2b51a4:
    // 0x2b51a4: 0x7bb502d0  lq          $s5, 0x2D0($sp)
    ctx->pc = 0x2b51a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_2b51a8:
    // 0x2b51a8: 0x7bb602c0  lq          $s6, 0x2C0($sp)
    ctx->pc = 0x2b51a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_2b51ac:
    // 0x2b51ac: 0x7bb702b0  lq          $s7, 0x2B0($sp)
    ctx->pc = 0x2b51acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_2b51b0:
    // 0x2b51b0: 0x7bbe02a0  lq          $fp, 0x2A0($sp)
    ctx->pc = 0x2b51b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_2b51b4:
    // 0x2b51b4: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x2b51b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_2b51b8:
    // 0x2b51b8: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x2b51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
label_2b51bc:
    // 0x2b51bc: 0x3e00008  jr          $ra
label_2b51c0:
    if (ctx->pc == 0x2B51C0u) {
        ctx->pc = 0x2B51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51BCu;
        // 0x2b51c0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51C4u;
        goto label_2b51c4;
    }
    ctx->pc = 0x2B51BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51BCu;
        // 0x2b51c0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B51BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B51C4u;
label_2b51c4:
    // 0x2b51c4: 0x0  nop
    ctx->pc = 0x2b51c4u;
    // NOP
    ctx->pc = 0x2b51c8u;
}
