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

// Function: sub_001C9B78
// Address: 0x1c9b78 - 0x1ca0a0
void sub_001C9B78_0x1c9b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9B78_0x1c9b78");
#endif

    switch (ctx->pc) {
        case 0x1c9b78u: goto label_1c9b78;
        case 0x1c9b7cu: goto label_1c9b7c;
        case 0x1c9b80u: goto label_1c9b80;
        case 0x1c9b84u: goto label_1c9b84;
        case 0x1c9b88u: goto label_1c9b88;
        case 0x1c9b8cu: goto label_1c9b8c;
        case 0x1c9b90u: goto label_1c9b90;
        case 0x1c9b94u: goto label_1c9b94;
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9b9cu: goto label_1c9b9c;
        case 0x1c9ba0u: goto label_1c9ba0;
        case 0x1c9ba4u: goto label_1c9ba4;
        case 0x1c9ba8u: goto label_1c9ba8;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bb0u: goto label_1c9bb0;
        case 0x1c9bb4u: goto label_1c9bb4;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bbcu: goto label_1c9bbc;
        case 0x1c9bc0u: goto label_1c9bc0;
        case 0x1c9bc4u: goto label_1c9bc4;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9bccu: goto label_1c9bcc;
        case 0x1c9bd0u: goto label_1c9bd0;
        case 0x1c9bd4u: goto label_1c9bd4;
        case 0x1c9bd8u: goto label_1c9bd8;
        case 0x1c9bdcu: goto label_1c9bdc;
        case 0x1c9be0u: goto label_1c9be0;
        case 0x1c9be4u: goto label_1c9be4;
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9becu: goto label_1c9bec;
        case 0x1c9bf0u: goto label_1c9bf0;
        case 0x1c9bf4u: goto label_1c9bf4;
        case 0x1c9bf8u: goto label_1c9bf8;
        case 0x1c9bfcu: goto label_1c9bfc;
        case 0x1c9c00u: goto label_1c9c00;
        case 0x1c9c04u: goto label_1c9c04;
        case 0x1c9c08u: goto label_1c9c08;
        case 0x1c9c0cu: goto label_1c9c0c;
        case 0x1c9c10u: goto label_1c9c10;
        case 0x1c9c14u: goto label_1c9c14;
        case 0x1c9c18u: goto label_1c9c18;
        case 0x1c9c1cu: goto label_1c9c1c;
        case 0x1c9c20u: goto label_1c9c20;
        case 0x1c9c24u: goto label_1c9c24;
        case 0x1c9c28u: goto label_1c9c28;
        case 0x1c9c2cu: goto label_1c9c2c;
        case 0x1c9c30u: goto label_1c9c30;
        case 0x1c9c34u: goto label_1c9c34;
        case 0x1c9c38u: goto label_1c9c38;
        case 0x1c9c3cu: goto label_1c9c3c;
        case 0x1c9c40u: goto label_1c9c40;
        case 0x1c9c44u: goto label_1c9c44;
        case 0x1c9c48u: goto label_1c9c48;
        case 0x1c9c4cu: goto label_1c9c4c;
        case 0x1c9c50u: goto label_1c9c50;
        case 0x1c9c54u: goto label_1c9c54;
        case 0x1c9c58u: goto label_1c9c58;
        case 0x1c9c5cu: goto label_1c9c5c;
        case 0x1c9c60u: goto label_1c9c60;
        case 0x1c9c64u: goto label_1c9c64;
        case 0x1c9c68u: goto label_1c9c68;
        case 0x1c9c6cu: goto label_1c9c6c;
        case 0x1c9c70u: goto label_1c9c70;
        case 0x1c9c74u: goto label_1c9c74;
        case 0x1c9c78u: goto label_1c9c78;
        case 0x1c9c7cu: goto label_1c9c7c;
        case 0x1c9c80u: goto label_1c9c80;
        case 0x1c9c84u: goto label_1c9c84;
        case 0x1c9c88u: goto label_1c9c88;
        case 0x1c9c8cu: goto label_1c9c8c;
        case 0x1c9c90u: goto label_1c9c90;
        case 0x1c9c94u: goto label_1c9c94;
        case 0x1c9c98u: goto label_1c9c98;
        case 0x1c9c9cu: goto label_1c9c9c;
        case 0x1c9ca0u: goto label_1c9ca0;
        case 0x1c9ca4u: goto label_1c9ca4;
        case 0x1c9ca8u: goto label_1c9ca8;
        case 0x1c9cacu: goto label_1c9cac;
        case 0x1c9cb0u: goto label_1c9cb0;
        case 0x1c9cb4u: goto label_1c9cb4;
        case 0x1c9cb8u: goto label_1c9cb8;
        case 0x1c9cbcu: goto label_1c9cbc;
        case 0x1c9cc0u: goto label_1c9cc0;
        case 0x1c9cc4u: goto label_1c9cc4;
        case 0x1c9cc8u: goto label_1c9cc8;
        case 0x1c9cccu: goto label_1c9ccc;
        case 0x1c9cd0u: goto label_1c9cd0;
        case 0x1c9cd4u: goto label_1c9cd4;
        case 0x1c9cd8u: goto label_1c9cd8;
        case 0x1c9cdcu: goto label_1c9cdc;
        case 0x1c9ce0u: goto label_1c9ce0;
        case 0x1c9ce4u: goto label_1c9ce4;
        case 0x1c9ce8u: goto label_1c9ce8;
        case 0x1c9cecu: goto label_1c9cec;
        case 0x1c9cf0u: goto label_1c9cf0;
        case 0x1c9cf4u: goto label_1c9cf4;
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9cfcu: goto label_1c9cfc;
        case 0x1c9d00u: goto label_1c9d00;
        case 0x1c9d04u: goto label_1c9d04;
        case 0x1c9d08u: goto label_1c9d08;
        case 0x1c9d0cu: goto label_1c9d0c;
        case 0x1c9d10u: goto label_1c9d10;
        case 0x1c9d14u: goto label_1c9d14;
        case 0x1c9d18u: goto label_1c9d18;
        case 0x1c9d1cu: goto label_1c9d1c;
        case 0x1c9d20u: goto label_1c9d20;
        case 0x1c9d24u: goto label_1c9d24;
        case 0x1c9d28u: goto label_1c9d28;
        case 0x1c9d2cu: goto label_1c9d2c;
        case 0x1c9d30u: goto label_1c9d30;
        case 0x1c9d34u: goto label_1c9d34;
        case 0x1c9d38u: goto label_1c9d38;
        case 0x1c9d3cu: goto label_1c9d3c;
        case 0x1c9d40u: goto label_1c9d40;
        case 0x1c9d44u: goto label_1c9d44;
        case 0x1c9d48u: goto label_1c9d48;
        case 0x1c9d4cu: goto label_1c9d4c;
        case 0x1c9d50u: goto label_1c9d50;
        case 0x1c9d54u: goto label_1c9d54;
        case 0x1c9d58u: goto label_1c9d58;
        case 0x1c9d5cu: goto label_1c9d5c;
        case 0x1c9d60u: goto label_1c9d60;
        case 0x1c9d64u: goto label_1c9d64;
        case 0x1c9d68u: goto label_1c9d68;
        case 0x1c9d6cu: goto label_1c9d6c;
        case 0x1c9d70u: goto label_1c9d70;
        case 0x1c9d74u: goto label_1c9d74;
        case 0x1c9d78u: goto label_1c9d78;
        case 0x1c9d7cu: goto label_1c9d7c;
        case 0x1c9d80u: goto label_1c9d80;
        case 0x1c9d84u: goto label_1c9d84;
        case 0x1c9d88u: goto label_1c9d88;
        case 0x1c9d8cu: goto label_1c9d8c;
        case 0x1c9d90u: goto label_1c9d90;
        case 0x1c9d94u: goto label_1c9d94;
        case 0x1c9d98u: goto label_1c9d98;
        case 0x1c9d9cu: goto label_1c9d9c;
        case 0x1c9da0u: goto label_1c9da0;
        case 0x1c9da4u: goto label_1c9da4;
        case 0x1c9da8u: goto label_1c9da8;
        case 0x1c9dacu: goto label_1c9dac;
        case 0x1c9db0u: goto label_1c9db0;
        case 0x1c9db4u: goto label_1c9db4;
        case 0x1c9db8u: goto label_1c9db8;
        case 0x1c9dbcu: goto label_1c9dbc;
        case 0x1c9dc0u: goto label_1c9dc0;
        case 0x1c9dc4u: goto label_1c9dc4;
        case 0x1c9dc8u: goto label_1c9dc8;
        case 0x1c9dccu: goto label_1c9dcc;
        case 0x1c9dd0u: goto label_1c9dd0;
        case 0x1c9dd4u: goto label_1c9dd4;
        case 0x1c9dd8u: goto label_1c9dd8;
        case 0x1c9ddcu: goto label_1c9ddc;
        case 0x1c9de0u: goto label_1c9de0;
        case 0x1c9de4u: goto label_1c9de4;
        case 0x1c9de8u: goto label_1c9de8;
        case 0x1c9decu: goto label_1c9dec;
        case 0x1c9df0u: goto label_1c9df0;
        case 0x1c9df4u: goto label_1c9df4;
        case 0x1c9df8u: goto label_1c9df8;
        case 0x1c9dfcu: goto label_1c9dfc;
        case 0x1c9e00u: goto label_1c9e00;
        case 0x1c9e04u: goto label_1c9e04;
        case 0x1c9e08u: goto label_1c9e08;
        case 0x1c9e0cu: goto label_1c9e0c;
        case 0x1c9e10u: goto label_1c9e10;
        case 0x1c9e14u: goto label_1c9e14;
        case 0x1c9e18u: goto label_1c9e18;
        case 0x1c9e1cu: goto label_1c9e1c;
        case 0x1c9e20u: goto label_1c9e20;
        case 0x1c9e24u: goto label_1c9e24;
        case 0x1c9e28u: goto label_1c9e28;
        case 0x1c9e2cu: goto label_1c9e2c;
        case 0x1c9e30u: goto label_1c9e30;
        case 0x1c9e34u: goto label_1c9e34;
        case 0x1c9e38u: goto label_1c9e38;
        case 0x1c9e3cu: goto label_1c9e3c;
        case 0x1c9e40u: goto label_1c9e40;
        case 0x1c9e44u: goto label_1c9e44;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9e4cu: goto label_1c9e4c;
        case 0x1c9e50u: goto label_1c9e50;
        case 0x1c9e54u: goto label_1c9e54;
        case 0x1c9e58u: goto label_1c9e58;
        case 0x1c9e5cu: goto label_1c9e5c;
        case 0x1c9e60u: goto label_1c9e60;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e68u: goto label_1c9e68;
        case 0x1c9e6cu: goto label_1c9e6c;
        case 0x1c9e70u: goto label_1c9e70;
        case 0x1c9e74u: goto label_1c9e74;
        case 0x1c9e78u: goto label_1c9e78;
        case 0x1c9e7cu: goto label_1c9e7c;
        case 0x1c9e80u: goto label_1c9e80;
        case 0x1c9e84u: goto label_1c9e84;
        case 0x1c9e88u: goto label_1c9e88;
        case 0x1c9e8cu: goto label_1c9e8c;
        case 0x1c9e90u: goto label_1c9e90;
        case 0x1c9e94u: goto label_1c9e94;
        case 0x1c9e98u: goto label_1c9e98;
        case 0x1c9e9cu: goto label_1c9e9c;
        case 0x1c9ea0u: goto label_1c9ea0;
        case 0x1c9ea4u: goto label_1c9ea4;
        case 0x1c9ea8u: goto label_1c9ea8;
        case 0x1c9eacu: goto label_1c9eac;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9eb4u: goto label_1c9eb4;
        case 0x1c9eb8u: goto label_1c9eb8;
        case 0x1c9ebcu: goto label_1c9ebc;
        case 0x1c9ec0u: goto label_1c9ec0;
        case 0x1c9ec4u: goto label_1c9ec4;
        case 0x1c9ec8u: goto label_1c9ec8;
        case 0x1c9eccu: goto label_1c9ecc;
        case 0x1c9ed0u: goto label_1c9ed0;
        case 0x1c9ed4u: goto label_1c9ed4;
        case 0x1c9ed8u: goto label_1c9ed8;
        case 0x1c9edcu: goto label_1c9edc;
        case 0x1c9ee0u: goto label_1c9ee0;
        case 0x1c9ee4u: goto label_1c9ee4;
        case 0x1c9ee8u: goto label_1c9ee8;
        case 0x1c9eecu: goto label_1c9eec;
        case 0x1c9ef0u: goto label_1c9ef0;
        case 0x1c9ef4u: goto label_1c9ef4;
        case 0x1c9ef8u: goto label_1c9ef8;
        case 0x1c9efcu: goto label_1c9efc;
        case 0x1c9f00u: goto label_1c9f00;
        case 0x1c9f04u: goto label_1c9f04;
        case 0x1c9f08u: goto label_1c9f08;
        case 0x1c9f0cu: goto label_1c9f0c;
        case 0x1c9f10u: goto label_1c9f10;
        case 0x1c9f14u: goto label_1c9f14;
        case 0x1c9f18u: goto label_1c9f18;
        case 0x1c9f1cu: goto label_1c9f1c;
        case 0x1c9f20u: goto label_1c9f20;
        case 0x1c9f24u: goto label_1c9f24;
        case 0x1c9f28u: goto label_1c9f28;
        case 0x1c9f2cu: goto label_1c9f2c;
        case 0x1c9f30u: goto label_1c9f30;
        case 0x1c9f34u: goto label_1c9f34;
        case 0x1c9f38u: goto label_1c9f38;
        case 0x1c9f3cu: goto label_1c9f3c;
        case 0x1c9f40u: goto label_1c9f40;
        case 0x1c9f44u: goto label_1c9f44;
        case 0x1c9f48u: goto label_1c9f48;
        case 0x1c9f4cu: goto label_1c9f4c;
        case 0x1c9f50u: goto label_1c9f50;
        case 0x1c9f54u: goto label_1c9f54;
        case 0x1c9f58u: goto label_1c9f58;
        case 0x1c9f5cu: goto label_1c9f5c;
        case 0x1c9f60u: goto label_1c9f60;
        case 0x1c9f64u: goto label_1c9f64;
        case 0x1c9f68u: goto label_1c9f68;
        case 0x1c9f6cu: goto label_1c9f6c;
        case 0x1c9f70u: goto label_1c9f70;
        case 0x1c9f74u: goto label_1c9f74;
        case 0x1c9f78u: goto label_1c9f78;
        case 0x1c9f7cu: goto label_1c9f7c;
        case 0x1c9f80u: goto label_1c9f80;
        case 0x1c9f84u: goto label_1c9f84;
        case 0x1c9f88u: goto label_1c9f88;
        case 0x1c9f8cu: goto label_1c9f8c;
        case 0x1c9f90u: goto label_1c9f90;
        case 0x1c9f94u: goto label_1c9f94;
        case 0x1c9f98u: goto label_1c9f98;
        case 0x1c9f9cu: goto label_1c9f9c;
        case 0x1c9fa0u: goto label_1c9fa0;
        case 0x1c9fa4u: goto label_1c9fa4;
        case 0x1c9fa8u: goto label_1c9fa8;
        case 0x1c9facu: goto label_1c9fac;
        case 0x1c9fb0u: goto label_1c9fb0;
        case 0x1c9fb4u: goto label_1c9fb4;
        case 0x1c9fb8u: goto label_1c9fb8;
        case 0x1c9fbcu: goto label_1c9fbc;
        case 0x1c9fc0u: goto label_1c9fc0;
        case 0x1c9fc4u: goto label_1c9fc4;
        case 0x1c9fc8u: goto label_1c9fc8;
        case 0x1c9fccu: goto label_1c9fcc;
        case 0x1c9fd0u: goto label_1c9fd0;
        case 0x1c9fd4u: goto label_1c9fd4;
        case 0x1c9fd8u: goto label_1c9fd8;
        case 0x1c9fdcu: goto label_1c9fdc;
        case 0x1c9fe0u: goto label_1c9fe0;
        case 0x1c9fe4u: goto label_1c9fe4;
        case 0x1c9fe8u: goto label_1c9fe8;
        case 0x1c9fecu: goto label_1c9fec;
        case 0x1c9ff0u: goto label_1c9ff0;
        case 0x1c9ff4u: goto label_1c9ff4;
        case 0x1c9ff8u: goto label_1c9ff8;
        case 0x1c9ffcu: goto label_1c9ffc;
        case 0x1ca000u: goto label_1ca000;
        case 0x1ca004u: goto label_1ca004;
        case 0x1ca008u: goto label_1ca008;
        case 0x1ca00cu: goto label_1ca00c;
        case 0x1ca010u: goto label_1ca010;
        case 0x1ca014u: goto label_1ca014;
        case 0x1ca018u: goto label_1ca018;
        case 0x1ca01cu: goto label_1ca01c;
        case 0x1ca020u: goto label_1ca020;
        case 0x1ca024u: goto label_1ca024;
        case 0x1ca028u: goto label_1ca028;
        case 0x1ca02cu: goto label_1ca02c;
        case 0x1ca030u: goto label_1ca030;
        case 0x1ca034u: goto label_1ca034;
        case 0x1ca038u: goto label_1ca038;
        case 0x1ca03cu: goto label_1ca03c;
        case 0x1ca040u: goto label_1ca040;
        case 0x1ca044u: goto label_1ca044;
        case 0x1ca048u: goto label_1ca048;
        case 0x1ca04cu: goto label_1ca04c;
        case 0x1ca050u: goto label_1ca050;
        case 0x1ca054u: goto label_1ca054;
        case 0x1ca058u: goto label_1ca058;
        case 0x1ca05cu: goto label_1ca05c;
        case 0x1ca060u: goto label_1ca060;
        case 0x1ca064u: goto label_1ca064;
        case 0x1ca068u: goto label_1ca068;
        case 0x1ca06cu: goto label_1ca06c;
        case 0x1ca070u: goto label_1ca070;
        case 0x1ca074u: goto label_1ca074;
        case 0x1ca078u: goto label_1ca078;
        case 0x1ca07cu: goto label_1ca07c;
        case 0x1ca080u: goto label_1ca080;
        case 0x1ca084u: goto label_1ca084;
        case 0x1ca088u: goto label_1ca088;
        case 0x1ca08cu: goto label_1ca08c;
        case 0x1ca090u: goto label_1ca090;
        case 0x1ca094u: goto label_1ca094;
        case 0x1ca098u: goto label_1ca098;
        case 0x1ca09cu: goto label_1ca09c;
        default: break;
    }

    ctx->pc = 0x1c9b78u;

label_1c9b78:
    // 0x1c9b78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1c9b7c:
    // 0x1c9b7c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c9b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1c9b80:
    // 0x1c9b80: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c9b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1c9b84:
    // 0x1c9b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b88:
    // 0x1c9b88: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1c9b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c9b8c:
    // 0x1c9b8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c9b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b90:
    // 0x1c9b90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1c9b94:
    // 0x1c9b94: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c9b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1c9b98:
    // 0x1c9b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c9b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c9b9c:
    // 0x1c9b9c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1c9b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1c9ba0:
    // 0x1c9ba0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1c9ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1c9ba4:
    // 0x1c9ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c9ba8:
    // 0x1c9ba8: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x1c9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_1c9bac:
    // 0x1c9bac: 0x14400131  bnez        $v0, . + 4 + (0x131 << 2)
label_1c9bb0:
    if (ctx->pc == 0x1C9BB0u) {
        ctx->pc = 0x1C9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BACu;
        // 0x1c9bb0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BB4u;
        goto label_1c9bb4;
    }
    ctx->pc = 0x1C9BACu;
    {
        const bool branch_taken_0x1c9bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BACu;
        // 0x1c9bb0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bac) {
            ctx->pc = 0x1CA074u;
            goto label_1ca074;
        }
    }
    ctx->pc = 0x1C9BB4u;
label_1c9bb4:
    // 0x1c9bb4: 0x8e220398  lw          $v0, 0x398($s1)
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
label_1c9bb8:
    // 0x1c9bb8: 0x5440011f  bnel        $v0, $zero, . + 4 + (0x11F << 2)
label_1c9bbc:
    if (ctx->pc == 0x1C9BBCu) {
        ctx->pc = 0x1C9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BB8u;
        // 0x1c9bbc: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BC0u;
        goto label_1c9bc0;
    }
    ctx->pc = 0x1C9BB8u;
    {
        const bool branch_taken_0x1c9bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bb8) {
            ctx->pc = 0x1C9BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9BB8u;
            // 0x1c9bbc: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9BC0u;
label_1c9bc0:
    // 0x1c9bc0: 0x8e2203b4  lw          $v0, 0x3B4($s1)
    ctx->pc = 0x1c9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
label_1c9bc4:
    // 0x1c9bc4: 0x5440011c  bnel        $v0, $zero, . + 4 + (0x11C << 2)
label_1c9bc8:
    if (ctx->pc == 0x1C9BC8u) {
        ctx->pc = 0x1C9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BC4u;
        // 0x1c9bc8: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BCCu;
        goto label_1c9bcc;
    }
    ctx->pc = 0x1C9BC4u;
    {
        const bool branch_taken_0x1c9bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bc4) {
            ctx->pc = 0x1C9BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9BC4u;
            // 0x1c9bc8: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9BCCu;
label_1c9bcc:
    // 0x1c9bcc: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_1c9bd0:
    // 0x1c9bd0: 0x10a0006e  beqz        $a1, . + 4 + (0x6E << 2)
label_1c9bd4:
    if (ctx->pc == 0x1C9BD4u) {
        ctx->pc = 0x1C9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BD0u;
        // 0x1c9bd4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BD8u;
        goto label_1c9bd8;
    }
    ctx->pc = 0x1C9BD0u;
    {
        const bool branch_taken_0x1c9bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BD0u;
        // 0x1c9bd4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bd0) {
            ctx->pc = 0x1C9D8Cu;
            goto label_1c9d8c;
        }
    }
    ctx->pc = 0x1C9BD8u;
label_1c9bd8:
    // 0x1c9bd8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1c9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1c9bdc:
    // 0x1c9bdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c9be0:
    if (ctx->pc == 0x1C9BE0u) {
        ctx->pc = 0x1C9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BDCu;
        // 0x1c9be0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BE4u;
        goto label_1c9be4;
    }
    ctx->pc = 0x1C9BDCu;
    {
        const bool branch_taken_0x1c9bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BDCu;
        // 0x1c9be0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bdc) {
            ctx->pc = 0x1C9C44u;
            goto label_1c9c44;
        }
    }
    ctx->pc = 0x1C9BE4u;
label_1c9be4:
    // 0x1c9be4: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_1c9be8:
    if (ctx->pc == 0x1C9BE8u) {
        ctx->pc = 0x1C9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BE4u;
        // 0x1c9be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BECu;
        goto label_1c9bec;
    }
    ctx->pc = 0x1C9BE4u;
    {
        const bool branch_taken_0x1c9be4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BE4u;
        // 0x1c9be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9be4) {
            ctx->pc = 0x1C9C08u;
            goto label_1c9c08;
        }
    }
    ctx->pc = 0x1C9BECu;
label_1c9bec:
    // 0x1c9bec: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1c9becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
label_1c9bf0:
    // 0x1c9bf0: 0xc07268a  jal         func_1C9A28
label_1c9bf4:
    if (ctx->pc == 0x1C9BF4u) {
        ctx->pc = 0x1C9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BF0u;
        // 0x1c9bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BF8u;
        goto label_1c9bf8;
    }
    ctx->pc = 0x1C9BF0u;
    SET_GPR_U32(ctx, 31, 0x1C9BF8u);
    ctx->pc = 0x1C9BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BF0u;
    // 0x1c9bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9A28u, 0x1C9BF0u, 0x1C9BF8u)) {
        return;
    }
    ctx->pc = 0x1C9BF8u;
label_1c9bf8:
    // 0x1c9bf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c9bfc:
    // 0x1c9bfc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9c00:
    // 0x1c9c00: 0x10000056  b           . + 4 + (0x56 << 2)
label_1c9c04:
    if (ctx->pc == 0x1C9C04u) {
        ctx->pc = 0x1C9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C00u;
        // 0x1c9c04: 0x8c4543b8  lw          $a1, 0x43B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C08u;
        goto label_1c9c08;
    }
    ctx->pc = 0x1C9C00u;
    {
        const bool branch_taken_0x1c9c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C00u;
        // 0x1c9c04: 0x8c4543b8  lw          $a1, 0x43B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c00) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9C08u;
label_1c9c08:
    // 0x1c9c08: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_1c9c0c:
    if (ctx->pc == 0x1C9C0Cu) {
        ctx->pc = 0x1C9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C08u;
        // 0x1c9c0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C10u;
        goto label_1c9c10;
    }
    ctx->pc = 0x1C9C08u;
    {
        const bool branch_taken_0x1c9c08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C08u;
        // 0x1c9c0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c08) {
            ctx->pc = 0x1C9C2Cu;
            goto label_1c9c2c;
        }
    }
    ctx->pc = 0x1C9C10u;
label_1c9c10:
    // 0x1c9c10: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1c9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
label_1c9c14:
    // 0x1c9c14: 0xc07268a  jal         func_1C9A28
label_1c9c18:
    if (ctx->pc == 0x1C9C18u) {
        ctx->pc = 0x1C9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C14u;
        // 0x1c9c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C1Cu;
        goto label_1c9c1c;
    }
    ctx->pc = 0x1C9C14u;
    SET_GPR_U32(ctx, 31, 0x1C9C1Cu);
    ctx->pc = 0x1C9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9C14u;
    // 0x1c9c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9A28u, 0x1C9C14u, 0x1C9C1Cu)) {
        return;
    }
    ctx->pc = 0x1C9C1Cu;
label_1c9c1c:
    // 0x1c9c1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c9c20:
    // 0x1c9c20: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9c24:
    // 0x1c9c24: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1c9c28:
    if (ctx->pc == 0x1C9C28u) {
        ctx->pc = 0x1C9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C24u;
        // 0x1c9c28: 0x8c4543b8  lw          $a1, 0x43B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C2Cu;
        goto label_1c9c2c;
    }
    ctx->pc = 0x1C9C24u;
    {
        const bool branch_taken_0x1c9c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C24u;
        // 0x1c9c28: 0x8c4543b8  lw          $a1, 0x43B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c24) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9C2Cu;
label_1c9c2c:
    // 0x1c9c2c: 0x12620048  beq         $s3, $v0, . + 4 + (0x48 << 2)
label_1c9c30:
    if (ctx->pc == 0x1C9C30u) {
        ctx->pc = 0x1C9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C2Cu;
        // 0x1c9c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C34u;
        goto label_1c9c34;
    }
    ctx->pc = 0x1C9C2Cu;
    {
        const bool branch_taken_0x1c9c2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C2Cu;
        // 0x1c9c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c2c) {
            ctx->pc = 0x1C9D50u;
            goto label_1c9d50;
        }
    }
    ctx->pc = 0x1C9C34u;
label_1c9c34:
    // 0x1c9c34: 0x56620100  bnel        $s3, $v0, . + 4 + (0x100 << 2)
label_1c9c38:
    if (ctx->pc == 0x1C9C38u) {
        ctx->pc = 0x1C9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C34u;
        // 0x1c9c38: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C3Cu;
        goto label_1c9c3c;
    }
    ctx->pc = 0x1C9C34u;
    {
        const bool branch_taken_0x1c9c34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9c34) {
            ctx->pc = 0x1C9C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9C34u;
            // 0x1c9c38: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9C3Cu;
label_1c9c3c:
    // 0x1c9c3c: 0x10000045  b           . + 4 + (0x45 << 2)
label_1c9c40:
    if (ctx->pc == 0x1C9C40u) {
        ctx->pc = 0x1C9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C3Cu;
        // 0x1c9c40: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C44u;
        goto label_1c9c44;
    }
    ctx->pc = 0x1C9C3Cu;
    {
        const bool branch_taken_0x1c9c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C3Cu;
        // 0x1c9c40: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c3c) {
            ctx->pc = 0x1C9D54u;
            goto label_1c9d54;
        }
    }
    ctx->pc = 0x1C9C44u;
label_1c9c44:
    // 0x1c9c44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9c48:
    // 0x1c9c48: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
label_1c9c4c:
    if (ctx->pc == 0x1C9C4Cu) {
        ctx->pc = 0x1C9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C48u;
        // 0x1c9c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C50u;
        goto label_1c9c50;
    }
    ctx->pc = 0x1C9C48u;
    {
        const bool branch_taken_0x1c9c48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C48u;
        // 0x1c9c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c48) {
            ctx->pc = 0x1C9C88u;
            goto label_1c9c88;
        }
    }
    ctx->pc = 0x1C9C50u;
label_1c9c50:
    // 0x1c9c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c54:
    // 0x1c9c54: 0xc07268a  jal         func_1C9A28
label_1c9c58:
    if (ctx->pc == 0x1C9C58u) {
        ctx->pc = 0x1C9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C54u;
        // 0x1c9c58: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C5Cu;
        goto label_1c9c5c;
    }
    ctx->pc = 0x1C9C54u;
    SET_GPR_U32(ctx, 31, 0x1C9C5Cu);
    ctx->pc = 0x1C9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9C54u;
    // 0x1c9c58: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9A28u, 0x1C9C54u, 0x1C9C5Cu)) {
        return;
    }
    ctx->pc = 0x1C9C5Cu;
label_1c9c5c:
    // 0x1c9c5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1c9c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1c9c60:
    // 0x1c9c60: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9c64:
    // 0x1c9c64: 0x8c6343b8  lw          $v1, 0x43B8($v1)
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17336)));
label_1c9c68:
    // 0x1c9c68: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c9c6c:
    // 0x1c9c6c: 0x506200f2  beql        $v1, $v0, . + 4 + (0xF2 << 2)
label_1c9c70:
    if (ctx->pc == 0x1C9C70u) {
        ctx->pc = 0x1C9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C6Cu;
        // 0x1c9c70: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C74u;
        goto label_1c9c74;
    }
    ctx->pc = 0x1C9C6Cu;
    {
        const bool branch_taken_0x1c9c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9c6c) {
            ctx->pc = 0x1C9C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9C6Cu;
            // 0x1c9c70: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9C74u;
label_1c9c74:
    // 0x1c9c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c9c78:
    // 0x1c9c78: 0x504000ef  beql        $v0, $zero, . + 4 + (0xEF << 2)
label_1c9c7c:
    if (ctx->pc == 0x1C9C7Cu) {
        ctx->pc = 0x1C9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C78u;
        // 0x1c9c7c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C80u;
        goto label_1c9c80;
    }
    ctx->pc = 0x1C9C78u;
    {
        const bool branch_taken_0x1c9c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c78) {
            ctx->pc = 0x1C9C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9C78u;
            // 0x1c9c7c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9C80u;
label_1c9c80:
    // 0x1c9c80: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1c9c84:
    if (ctx->pc == 0x1C9C84u) {
        ctx->pc = 0x1C9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C80u;
        // 0x1c9c84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C88u;
        goto label_1c9c88;
    }
    ctx->pc = 0x1C9C80u;
    {
        const bool branch_taken_0x1c9c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C80u;
        // 0x1c9c84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c80) {
            ctx->pc = 0x1C9D78u;
            goto label_1c9d78;
        }
    }
    ctx->pc = 0x1C9C88u;
label_1c9c88:
    // 0x1c9c88: 0x1660002e  bnez        $s3, . + 4 + (0x2E << 2)
label_1c9c8c:
    if (ctx->pc == 0x1C9C8Cu) {
        ctx->pc = 0x1C9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C88u;
        // 0x1c9c8c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C90u;
        goto label_1c9c90;
    }
    ctx->pc = 0x1C9C88u;
    {
        const bool branch_taken_0x1c9c88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C88u;
        // 0x1c9c8c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c88) {
            ctx->pc = 0x1C9D44u;
            goto label_1c9d44;
        }
    }
    ctx->pc = 0x1C9C90u;
label_1c9c90:
    // 0x1c9c90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c9c94:
    // 0x1c9c94: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9c98:
    // 0x1c9c98: 0x8c454358  lw          $a1, 0x4358($v0)
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17240)));
label_1c9c9c:
    // 0x1c9c9c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c9ca0:
    // 0x1c9ca0: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1c9ca4:
    if (ctx->pc == 0x1C9CA4u) {
        ctx->pc = 0x1C9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CA0u;
        // 0x1c9ca4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CA8u;
        goto label_1c9ca8;
    }
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CA0u;
        // 0x1c9ca4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CC4u;
            goto label_1c9cc4;
        }
    }
    ctx->pc = 0x1C9CA8u;
label_1c9ca8:
    // 0x1c9ca8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c9cac:
    // 0x1c9cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c9cb0:
    if (ctx->pc == 0x1C9CB0u) {
        ctx->pc = 0x1C9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CACu;
        // 0x1c9cb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CB4u;
        goto label_1c9cb4;
    }
    ctx->pc = 0x1C9CACu;
    {
        const bool branch_taken_0x1c9cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CACu;
        // 0x1c9cb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cac) {
            ctx->pc = 0x1C9CC0u;
            goto label_1c9cc0;
        }
    }
    ctx->pc = 0x1C9CB4u;
label_1c9cb4:
    // 0x1c9cb4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c9cb8:
    // 0x1c9cb8: 0xc07fd18  jal         func_1FF460
label_1c9cbc:
    if (ctx->pc == 0x1C9CBCu) {
        ctx->pc = 0x1C9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CB8u;
        // 0x1c9cbc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CC0u;
        goto label_1c9cc0;
    }
    ctx->pc = 0x1C9CB8u;
    SET_GPR_U32(ctx, 31, 0x1C9CC0u);
    ctx->pc = 0x1C9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CB8u;
    // 0x1c9cbc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C9CB8u, 0x1C9CC0u)) {
        return;
    }
    ctx->pc = 0x1C9CC0u;
label_1c9cc0:
    // 0x1c9cc0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c9cc4:
    // 0x1c9cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9cc8:
    // 0x1c9cc8: 0xc05ec94  jal         func_17B250
label_1c9ccc:
    if (ctx->pc == 0x1C9CCCu) {
        ctx->pc = 0x1C9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CC8u;
        // 0x1c9ccc: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CD0u;
        goto label_1c9cd0;
    }
    ctx->pc = 0x1C9CC8u;
    SET_GPR_U32(ctx, 31, 0x1C9CD0u);
    ctx->pc = 0x1C9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CC8u;
    // 0x1c9ccc: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B250u, 0x1C9CC8u, 0x1C9CD0u)) {
        return;
    }
    ctx->pc = 0x1C9CD0u;
label_1c9cd0:
    // 0x1c9cd0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c9cd4:
    // 0x1c9cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9cd8:
    // 0x1c9cd8: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x1c9cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
label_1c9cdc:
    // 0x1c9cdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9ce0:
    // 0x1c9ce0: 0xc043642  jal         func_10D908
label_1c9ce4:
    if (ctx->pc == 0x1C9CE4u) {
        ctx->pc = 0x1C9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CE0u;
        // 0x1c9ce4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CE8u;
        goto label_1c9ce8;
    }
    ctx->pc = 0x1C9CE0u;
    SET_GPR_U32(ctx, 31, 0x1C9CE8u);
    ctx->pc = 0x1C9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CE0u;
    // 0x1c9ce4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x1C9CE0u, 0x1C9CE8u)) {
        return;
    }
    ctx->pc = 0x1C9CE8u;
label_1c9ce8:
    // 0x1c9ce8: 0xc0603e4  jal         func_180F90
label_1c9cec:
    if (ctx->pc == 0x1C9CECu) {
        ctx->pc = 0x1C9CF0u;
        goto label_1c9cf0;
    }
    ctx->pc = 0x1C9CE8u;
    SET_GPR_U32(ctx, 31, 0x1C9CF0u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1C9CE8u, 0x1C9CF0u)) {
        return;
    }
    ctx->pc = 0x1C9CF0u;
label_1c9cf0:
    // 0x1c9cf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c9cf4:
    if (ctx->pc == 0x1C9CF4u) {
        ctx->pc = 0x1C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CF0u;
        // 0x1c9cf4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CF8u;
        goto label_1c9cf8;
    }
    ctx->pc = 0x1C9CF0u;
    {
        const bool branch_taken_0x1c9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CF0u;
        // 0x1c9cf4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cf0) {
            ctx->pc = 0x1C9D04u;
            goto label_1c9d04;
        }
    }
    ctx->pc = 0x1C9CF8u;
label_1c9cf8:
    // 0x1c9cf8: 0xc0603ce  jal         func_180F38
label_1c9cfc:
    if (ctx->pc == 0x1C9CFCu) {
        ctx->pc = 0x1C9D00u;
        goto label_1c9d00;
    }
    ctx->pc = 0x1C9CF8u;
    SET_GPR_U32(ctx, 31, 0x1C9D00u);
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x1C9CF8u, 0x1C9D00u)) {
        return;
    }
    ctx->pc = 0x1C9D00u;
label_1c9d00:
    // 0x1c9d00: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c9d04:
    // 0x1c9d04: 0x8c509168  lw          $s0, -0x6E98($v0)
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1c9d08:
    // 0x1c9d08: 0x120000ca  beqz        $s0, . + 4 + (0xCA << 2)
label_1c9d0c:
    if (ctx->pc == 0x1C9D0Cu) {
        ctx->pc = 0x1C9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D08u;
        // 0x1c9d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D10u;
        goto label_1c9d10;
    }
    ctx->pc = 0x1C9D08u;
    {
        const bool branch_taken_0x1c9d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D08u;
        // 0x1c9d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d08) {
            ctx->pc = 0x1CA034u;
            goto label_1ca034;
        }
    }
    ctx->pc = 0x1C9D10u;
label_1c9d10:
    // 0x1c9d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d14:
    // 0x1c9d14: 0xc06bede  jal         func_1AFB78
label_1c9d18:
    if (ctx->pc == 0x1C9D18u) {
        ctx->pc = 0x1C9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D14u;
        // 0x1c9d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D1Cu;
        goto label_1c9d1c;
    }
    ctx->pc = 0x1C9D14u;
    SET_GPR_U32(ctx, 31, 0x1C9D1Cu);
    ctx->pc = 0x1C9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D14u;
    // 0x1c9d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C9D14u, 0x1C9D1Cu)) {
        return;
    }
    ctx->pc = 0x1C9D1Cu;
label_1c9d1c:
    // 0x1c9d1c: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1c9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_1c9d20:
    // 0x1c9d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d24:
    // 0x1c9d24: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1c9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
label_1c9d28:
    // 0x1c9d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d2c:
    // 0x1c9d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d30:
    // 0x1c9d30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9d34:
    // 0x1c9d34: 0xc06c24c  jal         func_1B0930
label_1c9d38:
    if (ctx->pc == 0x1C9D38u) {
        ctx->pc = 0x1C9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D34u;
        // 0x1c9d38: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D3Cu;
        goto label_1c9d3c;
    }
    ctx->pc = 0x1C9D34u;
    SET_GPR_U32(ctx, 31, 0x1C9D3Cu);
    ctx->pc = 0x1C9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D34u;
    // 0x1c9d38: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x1C9D34u, 0x1C9D3Cu)) {
        return;
    }
    ctx->pc = 0x1C9D3Cu;
label_1c9d3c:
    // 0x1c9d3c: 0x100000be  b           . + 4 + (0xBE << 2)
label_1c9d40:
    if (ctx->pc == 0x1C9D40u) {
        ctx->pc = 0x1C9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D3Cu;
        // 0x1c9d40: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D44u;
        goto label_1c9d44;
    }
    ctx->pc = 0x1C9D3Cu;
    {
        const bool branch_taken_0x1c9d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D3Cu;
        // 0x1c9d40: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d3c) {
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9D44u;
label_1c9d44:
    // 0x1c9d44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c9d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c9d48:
    // 0x1c9d48: 0x504000bb  beql        $v0, $zero, . + 4 + (0xBB << 2)
label_1c9d4c:
    if (ctx->pc == 0x1C9D4Cu) {
        ctx->pc = 0x1C9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D48u;
        // 0x1c9d4c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D50u;
        goto label_1c9d50;
    }
    ctx->pc = 0x1C9D48u;
    {
        const bool branch_taken_0x1c9d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d48) {
            ctx->pc = 0x1C9D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D48u;
            // 0x1c9d4c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9D50u;
label_1c9d50:
    // 0x1c9d50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c9d54:
    // 0x1c9d54: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9d58:
    // 0x1c9d58: 0x8c4543c0  lw          $a1, 0x43C0($v0)
    ctx->pc = 0x1c9d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
label_1c9d5c:
    // 0x1c9d5c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c9d60:
    // 0x1c9d60: 0x50a300b5  beql        $a1, $v1, . + 4 + (0xB5 << 2)
label_1c9d64:
    if (ctx->pc == 0x1C9D64u) {
        ctx->pc = 0x1C9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D60u;
        // 0x1c9d64: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D68u;
        goto label_1c9d68;
    }
    ctx->pc = 0x1C9D60u;
    {
        const bool branch_taken_0x1c9d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9d60) {
            ctx->pc = 0x1C9D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D60u;
            // 0x1c9d64: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9D68u;
label_1c9d68:
    // 0x1c9d68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c9d6c:
    // 0x1c9d6c: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
label_1c9d70:
    if (ctx->pc == 0x1C9D70u) {
        ctx->pc = 0x1C9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D6Cu;
        // 0x1c9d70: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D74u;
        goto label_1c9d74;
    }
    ctx->pc = 0x1C9D6Cu;
    {
        const bool branch_taken_0x1c9d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d6c) {
            ctx->pc = 0x1C9D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D6Cu;
            // 0x1c9d70: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9D74u;
label_1c9d74:
    // 0x1c9d74: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c9d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c9d78:
    // 0x1c9d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d7c:
    // 0x1c9d7c: 0xc07fd18  jal         func_1FF460
label_1c9d80:
    if (ctx->pc == 0x1C9D80u) {
        ctx->pc = 0x1C9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D7Cu;
        // 0x1c9d80: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D84u;
        goto label_1c9d84;
    }
    ctx->pc = 0x1C9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D84u);
    ctx->pc = 0x1C9D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D7Cu;
    // 0x1c9d80: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C9D7Cu, 0x1C9D84u)) {
        return;
    }
    ctx->pc = 0x1C9D84u;
label_1c9d84:
    // 0x1c9d84: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1c9d88:
    if (ctx->pc == 0x1C9D88u) {
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D8Cu;
        goto label_1c9d8c;
    }
    ctx->pc = 0x1C9D84u;
    {
        const bool branch_taken_0x1c9d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d84) {
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1C9D8Cu;
label_1c9d8c:
    // 0x1c9d8c: 0x16620014  bne         $s3, $v0, . + 4 + (0x14 << 2)
label_1c9d90:
    if (ctx->pc == 0x1C9D90u) {
        ctx->pc = 0x1C9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D8Cu;
        // 0x1c9d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D94u;
        goto label_1c9d94;
    }
    ctx->pc = 0x1C9D8Cu;
    {
        const bool branch_taken_0x1c9d8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D8Cu;
        // 0x1c9d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d8c) {
            ctx->pc = 0x1C9DE0u;
            goto label_1c9de0;
        }
    }
    ctx->pc = 0x1C9D94u;
label_1c9d94:
    // 0x1c9d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9d98:
    // 0x1c9d98: 0xae220278  sw          $v0, 0x278($s1)
    ctx->pc = 0x1c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
label_1c9d9c:
    // 0x1c9d9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9da0:
    // 0x1c9da0: 0xc07268a  jal         func_1C9A28
label_1c9da4:
    if (ctx->pc == 0x1C9DA4u) {
        ctx->pc = 0x1C9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DA0u;
        // 0x1c9da4: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DA8u;
        goto label_1c9da8;
    }
    ctx->pc = 0x1C9DA0u;
    SET_GPR_U32(ctx, 31, 0x1C9DA8u);
    ctx->pc = 0x1C9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DA0u;
    // 0x1c9da4: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9A28u, 0x1C9DA0u, 0x1C9DA8u)) {
        return;
    }
    ctx->pc = 0x1C9DA8u;
label_1c9da8:
    // 0x1c9da8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1c9dac:
    // 0x1c9dac: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9db0:
    // 0x1c9db0: 0x8c6343b8  lw          $v1, 0x43B8($v1)
    ctx->pc = 0x1c9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17336)));
label_1c9db4:
    // 0x1c9db4: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c9db8:
    // 0x1c9db8: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
label_1c9dbc:
    if (ctx->pc == 0x1C9DBCu) {
        ctx->pc = 0x1C9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DB8u;
        // 0x1c9dbc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DC0u;
        goto label_1c9dc0;
    }
    ctx->pc = 0x1C9DB8u;
    {
        const bool branch_taken_0x1c9db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DB8u;
        // 0x1c9dbc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9db8) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1C9DC0u;
label_1c9dc0:
    // 0x1c9dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c9dc4:
    // 0x1c9dc4: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_1c9dc8:
    if (ctx->pc == 0x1C9DC8u) {
        ctx->pc = 0x1C9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC4u;
        // 0x1c9dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DCCu;
        goto label_1c9dcc;
    }
    ctx->pc = 0x1C9DC4u;
    {
        const bool branch_taken_0x1c9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC4u;
        // 0x1c9dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dc4) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1C9DCCu;
label_1c9dcc:
    // 0x1c9dcc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c9dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c9dd0:
    // 0x1c9dd0: 0xc07fd18  jal         func_1FF460
label_1c9dd4:
    if (ctx->pc == 0x1C9DD4u) {
        ctx->pc = 0x1C9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD0u;
        // 0x1c9dd4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DD8u;
        goto label_1c9dd8;
    }
    ctx->pc = 0x1C9DD0u;
    SET_GPR_U32(ctx, 31, 0x1C9DD8u);
    ctx->pc = 0x1C9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DD0u;
    // 0x1c9dd4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C9DD0u, 0x1C9DD8u)) {
        return;
    }
    ctx->pc = 0x1C9DD8u;
label_1c9dd8:
    // 0x1c9dd8: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1c9ddc:
    if (ctx->pc == 0x1C9DDCu) {
        ctx->pc = 0x1C9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD8u;
        // 0x1c9ddc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DE0u;
        goto label_1c9de0;
    }
    ctx->pc = 0x1C9DD8u;
    {
        const bool branch_taken_0x1c9dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD8u;
        // 0x1c9ddc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dd8) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1C9DE0u;
label_1c9de0:
    // 0x1c9de0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c9de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9de4:
    // 0x1c9de4: 0xc06ba6c  jal         func_1AE9B0
label_1c9de8:
    if (ctx->pc == 0x1C9DE8u) {
        ctx->pc = 0x1C9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DE4u;
        // 0x1c9de8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DECu;
        goto label_1c9dec;
    }
    ctx->pc = 0x1C9DE4u;
    SET_GPR_U32(ctx, 31, 0x1C9DECu);
    ctx->pc = 0x1C9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DE4u;
    // 0x1c9de8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C9DE4u, 0x1C9DECu)) {
        return;
    }
    ctx->pc = 0x1C9DECu;
label_1c9dec:
    // 0x1c9dec: 0x8e2303c4  lw          $v1, 0x3C4($s1)
    ctx->pc = 0x1c9decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 964)));
label_1c9df0:
    // 0x1c9df0: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
label_1c9df4:
    if (ctx->pc == 0x1C9DF4u) {
        ctx->pc = 0x1C9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DF0u;
        // 0x1c9df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DF8u;
        goto label_1c9df8;
    }
    ctx->pc = 0x1C9DF0u;
    {
        const bool branch_taken_0x1c9df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DF0u;
        // 0x1c9df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9df0) {
            ctx->pc = 0x1C9F78u;
            goto label_1c9f78;
        }
    }
    ctx->pc = 0x1C9DF8u;
label_1c9df8:
    // 0x1c9df8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c9dfc:
    // 0x1c9dfc: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_1c9e00:
    if (ctx->pc == 0x1C9E00u) {
        ctx->pc = 0x1C9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DFCu;
        // 0x1c9e00: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E04u;
        goto label_1c9e04;
    }
    ctx->pc = 0x1C9DFCu;
    {
        const bool branch_taken_0x1c9dfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DFCu;
        // 0x1c9e00: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dfc) {
            ctx->pc = 0x1C9E10u;
            goto label_1c9e10;
        }
    }
    ctx->pc = 0x1C9E04u;
label_1c9e04:
    // 0x1c9e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e08:
    // 0x1c9e08: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c9e0c:
    if (ctx->pc == 0x1C9E0Cu) {
        ctx->pc = 0x1C9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E08u;
        // 0x1c9e0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E10u;
        goto label_1c9e10;
    }
    ctx->pc = 0x1C9E08u;
    {
        const bool branch_taken_0x1c9e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E08u;
        // 0x1c9e0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e08) {
            ctx->pc = 0x1C9E1Cu;
            goto label_1c9e1c;
        }
    }
    ctx->pc = 0x1C9E10u;
label_1c9e10:
    // 0x1c9e10: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_1c9e14:
    if (ctx->pc == 0x1C9E14u) {
        ctx->pc = 0x1C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E10u;
        // 0x1c9e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E18u;
        goto label_1c9e18;
    }
    ctx->pc = 0x1C9E10u;
    {
        const bool branch_taken_0x1c9e10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E10u;
        // 0x1c9e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e10) {
            ctx->pc = 0x1C9E2Cu;
            goto label_1c9e2c;
        }
    }
    ctx->pc = 0x1C9E18u;
label_1c9e18:
    // 0x1c9e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e1c:
    // 0x1c9e1c: 0xc072a34  jal         func_1CA8D0
label_1c9e20:
    if (ctx->pc == 0x1C9E20u) {
        ctx->pc = 0x1C9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E1Cu;
        // 0x1c9e20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E24u;
        goto label_1c9e24;
    }
    ctx->pc = 0x1C9E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E24u);
    ctx->pc = 0x1C9E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E1Cu;
    // 0x1c9e20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA8D0u, 0x1C9E1Cu, 0x1C9E24u)) {
        return;
    }
    ctx->pc = 0x1C9E24u;
label_1c9e24:
    // 0x1c9e24: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1c9e28:
    if (ctx->pc == 0x1C9E28u) {
        ctx->pc = 0x1C9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E24u;
        // 0x1c9e28: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E2Cu;
        goto label_1c9e2c;
    }
    ctx->pc = 0x1C9E24u;
    {
        const bool branch_taken_0x1c9e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E24u;
        // 0x1c9e28: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e24) {
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9E2Cu;
label_1c9e2c:
    // 0x1c9e2c: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_1c9e30:
    if (ctx->pc == 0x1C9E30u) {
        ctx->pc = 0x1C9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E2Cu;
        // 0x1c9e30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E34u;
        goto label_1c9e34;
    }
    ctx->pc = 0x1C9E2Cu;
    {
        const bool branch_taken_0x1c9e2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E2Cu;
        // 0x1c9e30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e2c) {
            ctx->pc = 0x1C9E64u;
            goto label_1c9e64;
        }
    }
    ctx->pc = 0x1C9E34u;
label_1c9e34:
    // 0x1c9e34: 0x8e2203a8  lw          $v0, 0x3A8($s1)
    ctx->pc = 0x1c9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
label_1c9e38:
    // 0x1c9e38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c9e3c:
    // 0x1c9e3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c9e40:
    // 0x1c9e40: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x1c9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
label_1c9e44:
    // 0x1c9e44: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x1c9e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_1c9e48:
    // 0x1c9e48: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_1c9e4c:
    if (ctx->pc == 0x1C9E4Cu) {
        ctx->pc = 0x1C9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E48u;
        // 0x1c9e4c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E50u;
        goto label_1c9e50;
    }
    ctx->pc = 0x1C9E48u;
    {
        const bool branch_taken_0x1c9e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E48u;
        // 0x1c9e4c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e48) {
            ctx->pc = 0x1C9F44u;
            goto label_1c9f44;
        }
    }
    ctx->pc = 0x1C9E50u;
label_1c9e50:
    // 0x1c9e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e54:
    // 0x1c9e54: 0xc072828  jal         func_1CA0A0
label_1c9e58:
    if (ctx->pc == 0x1C9E58u) {
        ctx->pc = 0x1C9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E54u;
        // 0x1c9e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E5Cu;
        goto label_1c9e5c;
    }
    ctx->pc = 0x1C9E54u;
    SET_GPR_U32(ctx, 31, 0x1C9E5Cu);
    ctx->pc = 0x1C9E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E54u;
    // 0x1c9e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA0A0u, 0x1C9E54u, 0x1C9E5Cu)) {
        return;
    }
    ctx->pc = 0x1C9E5Cu;
label_1c9e5c:
    // 0x1c9e5c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1c9e60:
    if (ctx->pc == 0x1C9E60u) {
        ctx->pc = 0x1C9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E5Cu;
        // 0x1c9e60: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E64u;
        goto label_1c9e64;
    }
    ctx->pc = 0x1C9E5Cu;
    {
        const bool branch_taken_0x1c9e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E5Cu;
        // 0x1c9e60: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e5c) {
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9E64u;
label_1c9e64:
    // 0x1c9e64: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_1c9e68:
    if (ctx->pc == 0x1C9E68u) {
        ctx->pc = 0x1C9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E64u;
        // 0x1c9e68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E6Cu;
        goto label_1c9e6c;
    }
    ctx->pc = 0x1C9E64u;
    {
        const bool branch_taken_0x1c9e64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E64u;
        // 0x1c9e68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e64) {
            ctx->pc = 0x1C9E9Cu;
            goto label_1c9e9c;
        }
    }
    ctx->pc = 0x1C9E6Cu;
label_1c9e6c:
    // 0x1c9e6c: 0x8e2203a8  lw          $v0, 0x3A8($s1)
    ctx->pc = 0x1c9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
label_1c9e70:
    // 0x1c9e70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c9e74:
    // 0x1c9e74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c9e78:
    // 0x1c9e78: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x1c9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
label_1c9e7c:
    // 0x1c9e7c: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x1c9e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_1c9e80:
    // 0x1c9e80: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_1c9e84:
    if (ctx->pc == 0x1C9E84u) {
        ctx->pc = 0x1C9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E80u;
        // 0x1c9e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E88u;
        goto label_1c9e88;
    }
    ctx->pc = 0x1C9E80u;
    {
        const bool branch_taken_0x1c9e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E80u;
        // 0x1c9e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e80) {
            ctx->pc = 0x1CA010u;
            goto label_1ca010;
        }
    }
    ctx->pc = 0x1C9E88u;
label_1c9e88:
    // 0x1c9e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9e8c:
    // 0x1c9e8c: 0xc072a34  jal         func_1CA8D0
label_1c9e90:
    if (ctx->pc == 0x1C9E90u) {
        ctx->pc = 0x1C9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E8Cu;
        // 0x1c9e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E94u;
        goto label_1c9e94;
    }
    ctx->pc = 0x1C9E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E94u);
    ctx->pc = 0x1C9E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E8Cu;
    // 0x1c9e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA8D0u, 0x1C9E8Cu, 0x1C9E94u)) {
        return;
    }
    ctx->pc = 0x1C9E94u;
label_1c9e94:
    // 0x1c9e94: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1c9e98:
    if (ctx->pc == 0x1C9E98u) {
        ctx->pc = 0x1C9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E94u;
        // 0x1c9e98: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E9Cu;
        goto label_1c9e9c;
    }
    ctx->pc = 0x1C9E94u;
    {
        const bool branch_taken_0x1c9e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E94u;
        // 0x1c9e98: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e94) {
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9E9Cu;
label_1c9e9c:
    // 0x1c9e9c: 0x5662005d  bnel        $s3, $v0, . + 4 + (0x5D << 2)
label_1c9ea0:
    if (ctx->pc == 0x1C9EA0u) {
        ctx->pc = 0x1C9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E9Cu;
        // 0x1c9ea0: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EA4u;
        goto label_1c9ea4;
    }
    ctx->pc = 0x1C9E9Cu;
    {
        const bool branch_taken_0x1c9e9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9e9c) {
            ctx->pc = 0x1C9EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9E9Cu;
            // 0x1c9ea0: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9EA4u;
label_1c9ea4:
    // 0x1c9ea4: 0x8e2303a8  lw          $v1, 0x3A8($s1)
    ctx->pc = 0x1c9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
label_1c9ea8:
    // 0x1c9ea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c9eac:
    // 0x1c9eac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c9eb0:
    // 0x1c9eb0: 0x8c6203cc  lw          $v0, 0x3CC($v1)
    ctx->pc = 0x1c9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 972)));
label_1c9eb4:
    // 0x1c9eb4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1c9eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1c9eb8:
    // 0x1c9eb8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1c9ebc:
    if (ctx->pc == 0x1C9EBCu) {
        ctx->pc = 0x1C9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EB8u;
        // 0x1c9ebc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EC0u;
        goto label_1c9ec0;
    }
    ctx->pc = 0x1C9EB8u;
    {
        const bool branch_taken_0x1c9eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EB8u;
        // 0x1c9ebc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eb8) {
            ctx->pc = 0x1C9F40u;
            goto label_1c9f40;
        }
    }
    ctx->pc = 0x1C9EC0u;
label_1c9ec0:
    // 0x1c9ec0: 0x8e230268  lw          $v1, 0x268($s1)
    ctx->pc = 0x1c9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_1c9ec4:
    // 0x1c9ec4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9ec8:
    // 0x1c9ec8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c9ecc:
    // 0x1c9ecc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c9eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c9ed0:
    // 0x1c9ed0: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c9ed4:
    // 0x1c9ed4: 0xc0f809  jalr        $a2
label_1c9ed8:
    if (ctx->pc == 0x1C9ED8u) {
        ctx->pc = 0x1C9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ED4u;
        // 0x1c9ed8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EDCu;
        goto label_1c9edc;
    }
    ctx->pc = 0x1C9ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C9EDCu);
        ctx->pc = 0x1C9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ED4u;
        // 0x1c9ed8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9ED4u, 0x1C9EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9EDCu;
label_1c9edc:
    // 0x1c9edc: 0x8e2303a8  lw          $v1, 0x3A8($s1)
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
label_1c9ee0:
    // 0x1c9ee0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c9ee4:
    // 0x1c9ee4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c9ee8:
    // 0x1c9ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9eec:
    // 0x1c9eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c9ef0:
    // 0x1c9ef0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1c9ef4:
    // 0x1c9ef4: 0xac7003cc  sw          $s0, 0x3CC($v1)
    ctx->pc = 0x1c9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 16));
label_1c9ef8:
    // 0x1c9ef8: 0x8e2203c8  lw          $v0, 0x3C8($s1)
    ctx->pc = 0x1c9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 968)));
label_1c9efc:
    // 0x1c9efc: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1c9efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c9f00:
    // 0x1c9f00: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c9f04:
    // 0x1c9f04: 0xac4002d0  sw          $zero, 0x2D0($v0)
    ctx->pc = 0x1c9f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 0));
label_1c9f08:
    // 0x1c9f08: 0x8e2303c8  lw          $v1, 0x3C8($s1)
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 968)));
label_1c9f0c:
    // 0x1c9f0c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1c9f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c9f10:
    // 0x1c9f10: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1c9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c9f14:
    // 0x1c9f14: 0xac6502cc  sw          $a1, 0x2CC($v1)
    ctx->pc = 0x1c9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 716), GPR_U32(ctx, 5));
label_1c9f18:
    // 0x1c9f18: 0x8e2203c8  lw          $v0, 0x3C8($s1)
    ctx->pc = 0x1c9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 968)));
label_1c9f1c:
    // 0x1c9f1c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1c9f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c9f20:
    // 0x1c9f20: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1c9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c9f24:
    // 0x1c9f24: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x1c9f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
label_1c9f28:
    // 0x1c9f28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c9f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c9f2c:
    // 0x1c9f2c: 0xe48002e4  swc1        $f0, 0x2E4($a0)
    ctx->pc = 0x1c9f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 740), bits); }
label_1c9f30:
    // 0x1c9f30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c9f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c9f34:
    // 0x1c9f34: 0xe44002e0  swc1        $f0, 0x2E0($v0)
    ctx->pc = 0x1c9f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 736), bits); }
label_1c9f38:
    // 0x1c9f38: 0x10000035  b           . + 4 + (0x35 << 2)
label_1c9f3c:
    if (ctx->pc == 0x1C9F3Cu) {
        ctx->pc = 0x1C9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F38u;
        // 0x1c9f3c: 0xae3003c8  sw          $s0, 0x3C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 968), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F40u;
        goto label_1c9f40;
    }
    ctx->pc = 0x1C9F38u;
    {
        const bool branch_taken_0x1c9f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F38u;
        // 0x1c9f3c: 0xae3003c8  sw          $s0, 0x3C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 968), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f38) {
            ctx->pc = 0x1CA010u;
            goto label_1ca010;
        }
    }
    ctx->pc = 0x1C9F40u;
label_1c9f40:
    // 0x1c9f40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c9f44:
    // 0x1c9f44: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c9f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c9f48:
    // 0x1c9f48: 0x8c4543c0  lw          $a1, 0x43C0($v0)
    ctx->pc = 0x1c9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
label_1c9f4c:
    // 0x1c9f4c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c9f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c9f50:
    // 0x1c9f50: 0x50a30030  beql        $a1, $v1, . + 4 + (0x30 << 2)
label_1c9f54:
    if (ctx->pc == 0x1C9F54u) {
        ctx->pc = 0x1C9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F50u;
        // 0x1c9f54: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F58u;
        goto label_1c9f58;
    }
    ctx->pc = 0x1C9F50u;
    {
        const bool branch_taken_0x1c9f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9f50) {
            ctx->pc = 0x1C9F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9F50u;
            // 0x1c9f54: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9F58u;
label_1c9f58:
    // 0x1c9f58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c9f5c:
    // 0x1c9f5c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1c9f60:
    if (ctx->pc == 0x1C9F60u) {
        ctx->pc = 0x1C9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F5Cu;
        // 0x1c9f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F64u;
        goto label_1c9f64;
    }
    ctx->pc = 0x1C9F5Cu;
    {
        const bool branch_taken_0x1c9f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F5Cu;
        // 0x1c9f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f5c) {
            ctx->pc = 0x1CA010u;
            goto label_1ca010;
        }
    }
    ctx->pc = 0x1C9F64u;
label_1c9f64:
    // 0x1c9f64: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c9f68:
    // 0x1c9f68: 0xc07fd18  jal         func_1FF460
label_1c9f6c:
    if (ctx->pc == 0x1C9F6Cu) {
        ctx->pc = 0x1C9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F68u;
        // 0x1c9f6c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F70u;
        goto label_1c9f70;
    }
    ctx->pc = 0x1C9F68u;
    SET_GPR_U32(ctx, 31, 0x1C9F70u);
    ctx->pc = 0x1C9F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F68u;
    // 0x1c9f6c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C9F68u, 0x1C9F70u)) {
        return;
    }
    ctx->pc = 0x1C9F70u;
label_1c9f70:
    // 0x1c9f70: 0x10000028  b           . + 4 + (0x28 << 2)
label_1c9f74:
    if (ctx->pc == 0x1C9F74u) {
        ctx->pc = 0x1C9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F70u;
        // 0x1c9f74: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F78u;
        goto label_1c9f78;
    }
    ctx->pc = 0x1C9F70u;
    {
        const bool branch_taken_0x1c9f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F70u;
        // 0x1c9f74: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f70) {
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9F78u;
label_1c9f78:
    // 0x1c9f78: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
label_1c9f7c:
    if (ctx->pc == 0x1C9F7Cu) {
        ctx->pc = 0x1C9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F78u;
        // 0x1c9f7c: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F80u;
        goto label_1c9f80;
    }
    ctx->pc = 0x1C9F78u;
    {
        const bool branch_taken_0x1c9f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9f78) {
            ctx->pc = 0x1C9F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9F78u;
            // 0x1c9f7c: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9F80u;
label_1c9f80:
    // 0x1c9f80: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
label_1c9f84:
    if (ctx->pc == 0x1C9F84u) {
        ctx->pc = 0x1C9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F80u;
        // 0x1c9f84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F88u;
        goto label_1c9f88;
    }
    ctx->pc = 0x1C9F80u;
    {
        const bool branch_taken_0x1c9f80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F80u;
        // 0x1c9f84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f80) {
            ctx->pc = 0x1C9FFCu;
            goto label_1c9ffc;
        }
    }
    ctx->pc = 0x1C9F88u;
label_1c9f88:
    // 0x1c9f88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1c9f8c:
    // 0x1c9f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9f90:
    // 0x1c9f90: 0x2456fa00  addiu       $s6, $v0, -0x600
    ctx->pc = 0x1c9f90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
label_1c9f94:
    // 0x1c9f94: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c9f98:
    // 0x1c9f98: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c9f9c:
    if (ctx->pc == 0x1C9F9Cu) {
        ctx->pc = 0x1C9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F98u;
        // 0x1c9f9c: 0x263402d0  addiu       $s4, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FA0u;
        goto label_1c9fa0;
    }
    ctx->pc = 0x1C9F98u;
    {
        const bool branch_taken_0x1c9f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F98u;
        // 0x1c9f9c: 0x263402d0  addiu       $s4, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f98) {
            ctx->pc = 0x1C9FA4u;
            goto label_1c9fa4;
        }
    }
    ctx->pc = 0x1C9FA0u;
label_1c9fa0:
    // 0x1c9fa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c9fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c9fa4:
    // 0x1c9fa4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1c9fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c9fa8:
    // 0x1c9fa8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c9fac:
    if (ctx->pc == 0x1C9FACu) {
        ctx->pc = 0x1C9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FA8u;
        // 0x1c9fac: 0x24b00001  addiu       $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FB0u;
        goto label_1c9fb0;
    }
    ctx->pc = 0x1C9FA8u;
    {
        const bool branch_taken_0x1c9fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FA8u;
        // 0x1c9fac: 0x24b00001  addiu       $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fa8) {
            ctx->pc = 0x1CA010u;
            goto label_1ca010;
        }
    }
    ctx->pc = 0x1C9FB0u;
label_1c9fb0:
    // 0x1c9fb0: 0x2151818  mult        $v1, $s0, $s5
    ctx->pc = 0x1c9fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c9fb4:
    // 0x1c9fb4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1c9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1c9fb8:
    // 0x1c9fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9fbc:
    // 0x1c9fbc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1c9fc0:
    if (ctx->pc == 0x1C9FC0u) {
        ctx->pc = 0x1C9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FBCu;
        // 0x1c9fc0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FC4u;
        goto label_1c9fc4;
    }
    ctx->pc = 0x1C9FBCu;
    {
        const bool branch_taken_0x1c9fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FBCu;
        // 0x1c9fc0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fbc) {
            ctx->pc = 0x1C9FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9fa0;
        }
    }
    ctx->pc = 0x1C9FC4u;
label_1c9fc4:
    // 0x1c9fc4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c9fc8:
    // 0x1c9fc8: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1c9fcc:
    // 0x1c9fcc: 0xc06dc32  jal         func_1B70C8
label_1c9fd0:
    if (ctx->pc == 0x1C9FD0u) {
        ctx->pc = 0x1C9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FCCu;
        // 0x1c9fd0: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FD4u;
        goto label_1c9fd4;
    }
    ctx->pc = 0x1C9FCCu;
    SET_GPR_U32(ctx, 31, 0x1C9FD4u);
    ctx->pc = 0x1C9FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FCCu;
    // 0x1c9fd0: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C9FCCu, 0x1C9FD4u)) {
        return;
    }
    ctx->pc = 0x1C9FD4u;
label_1c9fd4:
    // 0x1c9fd4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_1c9fd8:
    if (ctx->pc == 0x1C9FD8u) {
        ctx->pc = 0x1C9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FD4u;
        // 0x1c9fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FDCu;
        goto label_1c9fdc;
    }
    ctx->pc = 0x1C9FD4u;
    {
        const bool branch_taken_0x1c9fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FD4u;
        // 0x1c9fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fd4) {
            ctx->pc = 0x1C9FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9fa0;
        }
    }
    ctx->pc = 0x1C9FDCu;
label_1c9fdc:
    // 0x1c9fdc: 0xc072a0e  jal         func_1CA838
label_1c9fe0:
    if (ctx->pc == 0x1C9FE0u) {
        ctx->pc = 0x1C9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FDCu;
        // 0x1c9fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FE4u;
        goto label_1c9fe4;
    }
    ctx->pc = 0x1C9FDCu;
    SET_GPR_U32(ctx, 31, 0x1C9FE4u);
    ctx->pc = 0x1C9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FDCu;
    // 0x1c9fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA838u, 0x1C9FDCu, 0x1C9FE4u)) {
        return;
    }
    ctx->pc = 0x1C9FE4u;
label_1c9fe4:
    // 0x1c9fe4: 0xae3003c8  sw          $s0, 0x3C8($s1)
    ctx->pc = 0x1c9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 968), GPR_U32(ctx, 16));
label_1c9fe8:
    // 0x1c9fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9fec:
    // 0x1c9fec: 0xc072828  jal         func_1CA0A0
label_1c9ff0:
    if (ctx->pc == 0x1C9FF0u) {
        ctx->pc = 0x1C9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FECu;
        // 0x1c9ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FF4u;
        goto label_1c9ff4;
    }
    ctx->pc = 0x1C9FECu;
    SET_GPR_U32(ctx, 31, 0x1C9FF4u);
    ctx->pc = 0x1C9FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FECu;
    // 0x1c9ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA0A0u, 0x1C9FECu, 0x1C9FF4u)) {
        return;
    }
    ctx->pc = 0x1C9FF4u;
label_1c9ff4:
    // 0x1c9ff4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c9ff8:
    if (ctx->pc == 0x1C9FF8u) {
        ctx->pc = 0x1C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FF4u;
        // 0x1c9ff8: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FFCu;
        goto label_1c9ffc;
    }
    ctx->pc = 0x1C9FF4u;
    {
        const bool branch_taken_0x1c9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FF4u;
        // 0x1c9ff8: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff4) {
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1C9FFCu;
label_1c9ffc:
    // 0x1c9ffc: 0x56620005  bnel        $s3, $v0, . + 4 + (0x5 << 2)
label_1ca000:
    if (ctx->pc == 0x1CA000u) {
        ctx->pc = 0x1CA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FFCu;
        // 0x1ca000: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA004u;
        goto label_1ca004;
    }
    ctx->pc = 0x1C9FFCu;
    {
        const bool branch_taken_0x1c9ffc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9ffc) {
            ctx->pc = 0x1CA000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9FFCu;
            // 0x1ca000: 0x8e240264  lw          $a0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA014u;
            goto label_1ca014;
        }
    }
    ctx->pc = 0x1CA004u;
label_1ca004:
    // 0x1ca004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ca008:
    // 0x1ca008: 0xc072828  jal         func_1CA0A0
label_1ca00c:
    if (ctx->pc == 0x1CA00Cu) {
        ctx->pc = 0x1CA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA008u;
        // 0x1ca00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA010u;
        goto label_1ca010;
    }
    ctx->pc = 0x1CA008u;
    SET_GPR_U32(ctx, 31, 0x1CA010u);
    ctx->pc = 0x1CA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA008u;
    // 0x1ca00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA0A0u, 0x1CA008u, 0x1CA010u)) {
        return;
    }
    ctx->pc = 0x1CA010u;
label_1ca010:
    // 0x1ca010: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1ca010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1ca014:
    // 0x1ca014: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1ca018:
    if (ctx->pc == 0x1CA018u) {
        ctx->pc = 0x1CA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA014u;
        // 0x1ca018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA01Cu;
        goto label_1ca01c;
    }
    ctx->pc = 0x1CA014u;
    {
        const bool branch_taken_0x1ca014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA014u;
        // 0x1ca018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca014) {
            ctx->pc = 0x1CA034u;
            goto label_1ca034;
        }
    }
    ctx->pc = 0x1CA01Cu;
label_1ca01c:
    // 0x1ca01c: 0x8e2303c4  lw          $v1, 0x3C4($s1)
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 964)));
label_1ca020:
    // 0x1ca020: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1ca024:
    if (ctx->pc == 0x1CA024u) {
        ctx->pc = 0x1CA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA020u;
        // 0x1ca024: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA028u;
        goto label_1ca028;
    }
    ctx->pc = 0x1CA020u;
    {
        const bool branch_taken_0x1ca020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca020) {
            ctx->pc = 0x1CA024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA020u;
            // 0x1ca024: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA038u;
            goto label_1ca038;
        }
    }
    ctx->pc = 0x1CA028u;
label_1ca028:
    // 0x1ca028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ca02c:
    // 0x1ca02c: 0xc06dbc8  jal         func_1B6F20
label_1ca030:
    if (ctx->pc == 0x1CA030u) {
        ctx->pc = 0x1CA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA02Cu;
        // 0x1ca030: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA034u;
        goto label_1ca034;
    }
    ctx->pc = 0x1CA02Cu;
    SET_GPR_U32(ctx, 31, 0x1CA034u);
    ctx->pc = 0x1CA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA02Cu;
    // 0x1ca030: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CA02Cu, 0x1CA034u)) {
        return;
    }
    ctx->pc = 0x1CA034u;
label_1ca034:
    // 0x1ca034: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x1ca034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_1ca038:
    // 0x1ca038: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1ca03c:
    if (ctx->pc == 0x1CA03Cu) {
        ctx->pc = 0x1CA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA038u;
        // 0x1ca03c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA040u;
        goto label_1ca040;
    }
    ctx->pc = 0x1CA038u;
    {
        const bool branch_taken_0x1ca038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA038u;
        // 0x1ca03c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca038) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1CA040u;
label_1ca040:
    // 0x1ca040: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x1ca040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_1ca044:
    // 0x1ca044: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1ca048:
    if (ctx->pc == 0x1CA048u) {
        ctx->pc = 0x1CA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA044u;
        // 0x1ca048: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA04Cu;
        goto label_1ca04c;
    }
    ctx->pc = 0x1CA044u;
    {
        const bool branch_taken_0x1ca044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca044) {
            ctx->pc = 0x1CA048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA044u;
            // 0x1ca048: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA07Cu;
            goto label_1ca07c;
        }
    }
    ctx->pc = 0x1CA04Cu;
label_1ca04c:
    // 0x1ca04c: 0x8e2203c4  lw          $v0, 0x3C4($s1)
    ctx->pc = 0x1ca04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 964)));
label_1ca050:
    // 0x1ca050: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ca050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ca054:
    // 0x1ca054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ca058:
    if (ctx->pc == 0x1CA058u) {
        ctx->pc = 0x1CA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA054u;
        // 0x1ca058: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA05Cu;
        goto label_1ca05c;
    }
    ctx->pc = 0x1CA054u;
    {
        const bool branch_taken_0x1ca054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA054u;
        // 0x1ca058: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca054) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1CA05Cu;
label_1ca05c:
    // 0x1ca05c: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_1ca060:
    if (ctx->pc == 0x1CA060u) {
        ctx->pc = 0x1CA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA05Cu;
        // 0x1ca060: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA064u;
        goto label_1ca064;
    }
    ctx->pc = 0x1CA05Cu;
    {
        const bool branch_taken_0x1ca05c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA05Cu;
        // 0x1ca060: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca05c) {
            ctx->pc = 0x1CA06Cu;
            goto label_1ca06c;
        }
    }
    ctx->pc = 0x1CA064u;
label_1ca064:
    // 0x1ca064: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ca068:
    if (ctx->pc == 0x1CA068u) {
        ctx->pc = 0x1CA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA064u;
        // 0x1ca068: 0xe6340390  swc1        $f20, 0x390($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA06Cu;
        goto label_1ca06c;
    }
    ctx->pc = 0x1CA064u;
    {
        const bool branch_taken_0x1ca064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA064u;
        // 0x1ca068: 0xe6340390  swc1        $f20, 0x390($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca064) {
            ctx->pc = 0x1CA078u;
            goto label_1ca078;
        }
    }
    ctx->pc = 0x1CA06Cu;
label_1ca06c:
    // 0x1ca06c: 0x52620001  beql        $s3, $v0, . + 4 + (0x1 << 2)
label_1ca070:
    if (ctx->pc == 0x1CA070u) {
        ctx->pc = 0x1CA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA06Cu;
        // 0x1ca070: 0xe6340394  swc1        $f20, 0x394($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA074u;
        goto label_1ca074;
    }
    ctx->pc = 0x1CA06Cu;
    {
        const bool branch_taken_0x1ca06c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca06c) {
            ctx->pc = 0x1CA070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA06Cu;
            // 0x1ca070: 0xe6340394  swc1        $f20, 0x394($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA074u;
            goto label_1ca074;
        }
    }
    ctx->pc = 0x1CA074u;
label_1ca074:
    // 0x1ca074: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ca074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ca078:
    // 0x1ca078: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ca078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ca07c:
    // 0x1ca07c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ca07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ca080:
    // 0x1ca080: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ca080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ca084:
    // 0x1ca084: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ca084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ca088:
    // 0x1ca088: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1ca088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ca08c:
    // 0x1ca08c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1ca08cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca090:
    // 0x1ca090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca094:
    // 0x1ca094: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ca094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ca098:
    // 0x1ca098: 0x3e00008  jr          $ra
label_1ca09c:
    if (ctx->pc == 0x1CA09Cu) {
        ctx->pc = 0x1CA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA098u;
        // 0x1ca09c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0A0u;
        goto label_fallthrough_0x1ca098;
    }
    ctx->pc = 0x1CA098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA098u;
        // 0x1ca09c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ca098:
    ctx->pc = 0x1CA0A0u;
}
