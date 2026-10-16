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

// Function: sub_002C5C88
// Address: 0x2c5c88 - 0x2c6138
void sub_002C5C88_0x2c5c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5C88_0x2c5c88");
#endif

    switch (ctx->pc) {
        case 0x2c5c88u: goto label_2c5c88;
        case 0x2c5c8cu: goto label_2c5c8c;
        case 0x2c5c90u: goto label_2c5c90;
        case 0x2c5c94u: goto label_2c5c94;
        case 0x2c5c98u: goto label_2c5c98;
        case 0x2c5c9cu: goto label_2c5c9c;
        case 0x2c5ca0u: goto label_2c5ca0;
        case 0x2c5ca4u: goto label_2c5ca4;
        case 0x2c5ca8u: goto label_2c5ca8;
        case 0x2c5cacu: goto label_2c5cac;
        case 0x2c5cb0u: goto label_2c5cb0;
        case 0x2c5cb4u: goto label_2c5cb4;
        case 0x2c5cb8u: goto label_2c5cb8;
        case 0x2c5cbcu: goto label_2c5cbc;
        case 0x2c5cc0u: goto label_2c5cc0;
        case 0x2c5cc4u: goto label_2c5cc4;
        case 0x2c5cc8u: goto label_2c5cc8;
        case 0x2c5cccu: goto label_2c5ccc;
        case 0x2c5cd0u: goto label_2c5cd0;
        case 0x2c5cd4u: goto label_2c5cd4;
        case 0x2c5cd8u: goto label_2c5cd8;
        case 0x2c5cdcu: goto label_2c5cdc;
        case 0x2c5ce0u: goto label_2c5ce0;
        case 0x2c5ce4u: goto label_2c5ce4;
        case 0x2c5ce8u: goto label_2c5ce8;
        case 0x2c5cecu: goto label_2c5cec;
        case 0x2c5cf0u: goto label_2c5cf0;
        case 0x2c5cf4u: goto label_2c5cf4;
        case 0x2c5cf8u: goto label_2c5cf8;
        case 0x2c5cfcu: goto label_2c5cfc;
        case 0x2c5d00u: goto label_2c5d00;
        case 0x2c5d04u: goto label_2c5d04;
        case 0x2c5d08u: goto label_2c5d08;
        case 0x2c5d0cu: goto label_2c5d0c;
        case 0x2c5d10u: goto label_2c5d10;
        case 0x2c5d14u: goto label_2c5d14;
        case 0x2c5d18u: goto label_2c5d18;
        case 0x2c5d1cu: goto label_2c5d1c;
        case 0x2c5d20u: goto label_2c5d20;
        case 0x2c5d24u: goto label_2c5d24;
        case 0x2c5d28u: goto label_2c5d28;
        case 0x2c5d2cu: goto label_2c5d2c;
        case 0x2c5d30u: goto label_2c5d30;
        case 0x2c5d34u: goto label_2c5d34;
        case 0x2c5d38u: goto label_2c5d38;
        case 0x2c5d3cu: goto label_2c5d3c;
        case 0x2c5d40u: goto label_2c5d40;
        case 0x2c5d44u: goto label_2c5d44;
        case 0x2c5d48u: goto label_2c5d48;
        case 0x2c5d4cu: goto label_2c5d4c;
        case 0x2c5d50u: goto label_2c5d50;
        case 0x2c5d54u: goto label_2c5d54;
        case 0x2c5d58u: goto label_2c5d58;
        case 0x2c5d5cu: goto label_2c5d5c;
        case 0x2c5d60u: goto label_2c5d60;
        case 0x2c5d64u: goto label_2c5d64;
        case 0x2c5d68u: goto label_2c5d68;
        case 0x2c5d6cu: goto label_2c5d6c;
        case 0x2c5d70u: goto label_2c5d70;
        case 0x2c5d74u: goto label_2c5d74;
        case 0x2c5d78u: goto label_2c5d78;
        case 0x2c5d7cu: goto label_2c5d7c;
        case 0x2c5d80u: goto label_2c5d80;
        case 0x2c5d84u: goto label_2c5d84;
        case 0x2c5d88u: goto label_2c5d88;
        case 0x2c5d8cu: goto label_2c5d8c;
        case 0x2c5d90u: goto label_2c5d90;
        case 0x2c5d94u: goto label_2c5d94;
        case 0x2c5d98u: goto label_2c5d98;
        case 0x2c5d9cu: goto label_2c5d9c;
        case 0x2c5da0u: goto label_2c5da0;
        case 0x2c5da4u: goto label_2c5da4;
        case 0x2c5da8u: goto label_2c5da8;
        case 0x2c5dacu: goto label_2c5dac;
        case 0x2c5db0u: goto label_2c5db0;
        case 0x2c5db4u: goto label_2c5db4;
        case 0x2c5db8u: goto label_2c5db8;
        case 0x2c5dbcu: goto label_2c5dbc;
        case 0x2c5dc0u: goto label_2c5dc0;
        case 0x2c5dc4u: goto label_2c5dc4;
        case 0x2c5dc8u: goto label_2c5dc8;
        case 0x2c5dccu: goto label_2c5dcc;
        case 0x2c5dd0u: goto label_2c5dd0;
        case 0x2c5dd4u: goto label_2c5dd4;
        case 0x2c5dd8u: goto label_2c5dd8;
        case 0x2c5ddcu: goto label_2c5ddc;
        case 0x2c5de0u: goto label_2c5de0;
        case 0x2c5de4u: goto label_2c5de4;
        case 0x2c5de8u: goto label_2c5de8;
        case 0x2c5decu: goto label_2c5dec;
        case 0x2c5df0u: goto label_2c5df0;
        case 0x2c5df4u: goto label_2c5df4;
        case 0x2c5df8u: goto label_2c5df8;
        case 0x2c5dfcu: goto label_2c5dfc;
        case 0x2c5e00u: goto label_2c5e00;
        case 0x2c5e04u: goto label_2c5e04;
        case 0x2c5e08u: goto label_2c5e08;
        case 0x2c5e0cu: goto label_2c5e0c;
        case 0x2c5e10u: goto label_2c5e10;
        case 0x2c5e14u: goto label_2c5e14;
        case 0x2c5e18u: goto label_2c5e18;
        case 0x2c5e1cu: goto label_2c5e1c;
        case 0x2c5e20u: goto label_2c5e20;
        case 0x2c5e24u: goto label_2c5e24;
        case 0x2c5e28u: goto label_2c5e28;
        case 0x2c5e2cu: goto label_2c5e2c;
        case 0x2c5e30u: goto label_2c5e30;
        case 0x2c5e34u: goto label_2c5e34;
        case 0x2c5e38u: goto label_2c5e38;
        case 0x2c5e3cu: goto label_2c5e3c;
        case 0x2c5e40u: goto label_2c5e40;
        case 0x2c5e44u: goto label_2c5e44;
        case 0x2c5e48u: goto label_2c5e48;
        case 0x2c5e4cu: goto label_2c5e4c;
        case 0x2c5e50u: goto label_2c5e50;
        case 0x2c5e54u: goto label_2c5e54;
        case 0x2c5e58u: goto label_2c5e58;
        case 0x2c5e5cu: goto label_2c5e5c;
        case 0x2c5e60u: goto label_2c5e60;
        case 0x2c5e64u: goto label_2c5e64;
        case 0x2c5e68u: goto label_2c5e68;
        case 0x2c5e6cu: goto label_2c5e6c;
        case 0x2c5e70u: goto label_2c5e70;
        case 0x2c5e74u: goto label_2c5e74;
        case 0x2c5e78u: goto label_2c5e78;
        case 0x2c5e7cu: goto label_2c5e7c;
        case 0x2c5e80u: goto label_2c5e80;
        case 0x2c5e84u: goto label_2c5e84;
        case 0x2c5e88u: goto label_2c5e88;
        case 0x2c5e8cu: goto label_2c5e8c;
        case 0x2c5e90u: goto label_2c5e90;
        case 0x2c5e94u: goto label_2c5e94;
        case 0x2c5e98u: goto label_2c5e98;
        case 0x2c5e9cu: goto label_2c5e9c;
        case 0x2c5ea0u: goto label_2c5ea0;
        case 0x2c5ea4u: goto label_2c5ea4;
        case 0x2c5ea8u: goto label_2c5ea8;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5eb0u: goto label_2c5eb0;
        case 0x2c5eb4u: goto label_2c5eb4;
        case 0x2c5eb8u: goto label_2c5eb8;
        case 0x2c5ebcu: goto label_2c5ebc;
        case 0x2c5ec0u: goto label_2c5ec0;
        case 0x2c5ec4u: goto label_2c5ec4;
        case 0x2c5ec8u: goto label_2c5ec8;
        case 0x2c5eccu: goto label_2c5ecc;
        case 0x2c5ed0u: goto label_2c5ed0;
        case 0x2c5ed4u: goto label_2c5ed4;
        case 0x2c5ed8u: goto label_2c5ed8;
        case 0x2c5edcu: goto label_2c5edc;
        case 0x2c5ee0u: goto label_2c5ee0;
        case 0x2c5ee4u: goto label_2c5ee4;
        case 0x2c5ee8u: goto label_2c5ee8;
        case 0x2c5eecu: goto label_2c5eec;
        case 0x2c5ef0u: goto label_2c5ef0;
        case 0x2c5ef4u: goto label_2c5ef4;
        case 0x2c5ef8u: goto label_2c5ef8;
        case 0x2c5efcu: goto label_2c5efc;
        case 0x2c5f00u: goto label_2c5f00;
        case 0x2c5f04u: goto label_2c5f04;
        case 0x2c5f08u: goto label_2c5f08;
        case 0x2c5f0cu: goto label_2c5f0c;
        case 0x2c5f10u: goto label_2c5f10;
        case 0x2c5f14u: goto label_2c5f14;
        case 0x2c5f18u: goto label_2c5f18;
        case 0x2c5f1cu: goto label_2c5f1c;
        case 0x2c5f20u: goto label_2c5f20;
        case 0x2c5f24u: goto label_2c5f24;
        case 0x2c5f28u: goto label_2c5f28;
        case 0x2c5f2cu: goto label_2c5f2c;
        case 0x2c5f30u: goto label_2c5f30;
        case 0x2c5f34u: goto label_2c5f34;
        case 0x2c5f38u: goto label_2c5f38;
        case 0x2c5f3cu: goto label_2c5f3c;
        case 0x2c5f40u: goto label_2c5f40;
        case 0x2c5f44u: goto label_2c5f44;
        case 0x2c5f48u: goto label_2c5f48;
        case 0x2c5f4cu: goto label_2c5f4c;
        case 0x2c5f50u: goto label_2c5f50;
        case 0x2c5f54u: goto label_2c5f54;
        case 0x2c5f58u: goto label_2c5f58;
        case 0x2c5f5cu: goto label_2c5f5c;
        case 0x2c5f60u: goto label_2c5f60;
        case 0x2c5f64u: goto label_2c5f64;
        case 0x2c5f68u: goto label_2c5f68;
        case 0x2c5f6cu: goto label_2c5f6c;
        case 0x2c5f70u: goto label_2c5f70;
        case 0x2c5f74u: goto label_2c5f74;
        case 0x2c5f78u: goto label_2c5f78;
        case 0x2c5f7cu: goto label_2c5f7c;
        case 0x2c5f80u: goto label_2c5f80;
        case 0x2c5f84u: goto label_2c5f84;
        case 0x2c5f88u: goto label_2c5f88;
        case 0x2c5f8cu: goto label_2c5f8c;
        case 0x2c5f90u: goto label_2c5f90;
        case 0x2c5f94u: goto label_2c5f94;
        case 0x2c5f98u: goto label_2c5f98;
        case 0x2c5f9cu: goto label_2c5f9c;
        case 0x2c5fa0u: goto label_2c5fa0;
        case 0x2c5fa4u: goto label_2c5fa4;
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5facu: goto label_2c5fac;
        case 0x2c5fb0u: goto label_2c5fb0;
        case 0x2c5fb4u: goto label_2c5fb4;
        case 0x2c5fb8u: goto label_2c5fb8;
        case 0x2c5fbcu: goto label_2c5fbc;
        case 0x2c5fc0u: goto label_2c5fc0;
        case 0x2c5fc4u: goto label_2c5fc4;
        case 0x2c5fc8u: goto label_2c5fc8;
        case 0x2c5fccu: goto label_2c5fcc;
        case 0x2c5fd0u: goto label_2c5fd0;
        case 0x2c5fd4u: goto label_2c5fd4;
        case 0x2c5fd8u: goto label_2c5fd8;
        case 0x2c5fdcu: goto label_2c5fdc;
        case 0x2c5fe0u: goto label_2c5fe0;
        case 0x2c5fe4u: goto label_2c5fe4;
        case 0x2c5fe8u: goto label_2c5fe8;
        case 0x2c5fecu: goto label_2c5fec;
        case 0x2c5ff0u: goto label_2c5ff0;
        case 0x2c5ff4u: goto label_2c5ff4;
        case 0x2c5ff8u: goto label_2c5ff8;
        case 0x2c5ffcu: goto label_2c5ffc;
        case 0x2c6000u: goto label_2c6000;
        case 0x2c6004u: goto label_2c6004;
        case 0x2c6008u: goto label_2c6008;
        case 0x2c600cu: goto label_2c600c;
        case 0x2c6010u: goto label_2c6010;
        case 0x2c6014u: goto label_2c6014;
        case 0x2c6018u: goto label_2c6018;
        case 0x2c601cu: goto label_2c601c;
        case 0x2c6020u: goto label_2c6020;
        case 0x2c6024u: goto label_2c6024;
        case 0x2c6028u: goto label_2c6028;
        case 0x2c602cu: goto label_2c602c;
        case 0x2c6030u: goto label_2c6030;
        case 0x2c6034u: goto label_2c6034;
        case 0x2c6038u: goto label_2c6038;
        case 0x2c603cu: goto label_2c603c;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c6044u: goto label_2c6044;
        case 0x2c6048u: goto label_2c6048;
        case 0x2c604cu: goto label_2c604c;
        case 0x2c6050u: goto label_2c6050;
        case 0x2c6054u: goto label_2c6054;
        case 0x2c6058u: goto label_2c6058;
        case 0x2c605cu: goto label_2c605c;
        case 0x2c6060u: goto label_2c6060;
        case 0x2c6064u: goto label_2c6064;
        case 0x2c6068u: goto label_2c6068;
        case 0x2c606cu: goto label_2c606c;
        case 0x2c6070u: goto label_2c6070;
        case 0x2c6074u: goto label_2c6074;
        case 0x2c6078u: goto label_2c6078;
        case 0x2c607cu: goto label_2c607c;
        case 0x2c6080u: goto label_2c6080;
        case 0x2c6084u: goto label_2c6084;
        case 0x2c6088u: goto label_2c6088;
        case 0x2c608cu: goto label_2c608c;
        case 0x2c6090u: goto label_2c6090;
        case 0x2c6094u: goto label_2c6094;
        case 0x2c6098u: goto label_2c6098;
        case 0x2c609cu: goto label_2c609c;
        case 0x2c60a0u: goto label_2c60a0;
        case 0x2c60a4u: goto label_2c60a4;
        case 0x2c60a8u: goto label_2c60a8;
        case 0x2c60acu: goto label_2c60ac;
        case 0x2c60b0u: goto label_2c60b0;
        case 0x2c60b4u: goto label_2c60b4;
        case 0x2c60b8u: goto label_2c60b8;
        case 0x2c60bcu: goto label_2c60bc;
        case 0x2c60c0u: goto label_2c60c0;
        case 0x2c60c4u: goto label_2c60c4;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60ccu: goto label_2c60cc;
        case 0x2c60d0u: goto label_2c60d0;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c60d8u: goto label_2c60d8;
        case 0x2c60dcu: goto label_2c60dc;
        case 0x2c60e0u: goto label_2c60e0;
        case 0x2c60e4u: goto label_2c60e4;
        case 0x2c60e8u: goto label_2c60e8;
        case 0x2c60ecu: goto label_2c60ec;
        case 0x2c60f0u: goto label_2c60f0;
        case 0x2c60f4u: goto label_2c60f4;
        case 0x2c60f8u: goto label_2c60f8;
        case 0x2c60fcu: goto label_2c60fc;
        case 0x2c6100u: goto label_2c6100;
        case 0x2c6104u: goto label_2c6104;
        case 0x2c6108u: goto label_2c6108;
        case 0x2c610cu: goto label_2c610c;
        case 0x2c6110u: goto label_2c6110;
        case 0x2c6114u: goto label_2c6114;
        case 0x2c6118u: goto label_2c6118;
        case 0x2c611cu: goto label_2c611c;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c6124u: goto label_2c6124;
        case 0x2c6128u: goto label_2c6128;
        case 0x2c612cu: goto label_2c612c;
        case 0x2c6130u: goto label_2c6130;
        case 0x2c6134u: goto label_2c6134;
        default: break;
    }

    ctx->pc = 0x2c5c88u;

label_2c5c88:
    // 0x2c5c88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2c5c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2c5c8c:
    // 0x2c5c8c: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x2c5c8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c5c90:
    // 0x2c5c90: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2c5c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2c5c94:
    // 0x2c5c94: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x2c5c94u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c98:
    // 0x2c5c98: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2c5c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2c5c9c:
    // 0x2c5c9c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2c5c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2c5ca0:
    // 0x2c5ca0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2c5ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2c5ca4:
    // 0x2c5ca4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2c5ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2c5ca8:
    // 0x2c5ca8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c5ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5cac:
    // 0x2c5cac: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2c5cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2c5cb0:
    // 0x2c5cb0: 0x1c0a82d  daddu       $s5, $t6, $zero
    ctx->pc = 0x2c5cb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2c5cb4:
    // 0x2c5cb4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2c5cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2c5cb8:
    // 0x2c5cb8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c5cb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c5cbc:
    // 0x2c5cbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c5cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c5cc0:
    // 0x2c5cc0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2c5cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2c5cc4:
    // 0x2c5cc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c5cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c5cc8:
    // 0x2c5cc8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c5cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2c5ccc:
    // 0x2c5ccc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2c5cd0:
    // 0x2c5cd0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2c5cd4:
    // 0x2c5cd4: 0x4c6818  mult        $t5, $v0, $t4
    ctx->pc = 0x2c5cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c5cd8:
    // 0x2c5cd8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2c5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2c5cdc:
    // 0x2c5cdc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5ce0:
    // 0x2c5ce0: 0x8e8a000c  lw          $t2, 0xC($s4)
    ctx->pc = 0x2c5ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2c5ce4:
    // 0x2c5ce4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2c5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2c5ce8:
    // 0x2c5ce8: 0x35940  sll         $t3, $v1, 5
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c5cec:
    // 0x2c5cec: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x2c5cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2c5cf0:
    // 0x2c5cf0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2c5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2c5cf4:
    // 0x2c5cf4: 0x1400013  mtlo        $t2
    ctx->pc = 0x2c5cf4u;
    ctx->lo = GPR_U64(ctx, 10);
label_2c5cf8:
    // 0x2c5cf8: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x2c5cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_2c5cfc:
    // 0x2c5cfc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2c5d00:
    // 0x2c5d00: 0xc6940070  lwc1        $f20, 0x70($s4)
    ctx->pc = 0x2c5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c5d04:
    // 0x2c5d04: 0x706c0000  madd        $zero, $v1, $t4
    ctx->pc = 0x2c5d04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2c5d08:
    // 0x2c5d08: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x2c5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_2c5d0c:
    // 0x2c5d0c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2c5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_2c5d10:
    // 0x2c5d10: 0x14d9821  addu        $s3, $t2, $t5
    ctx->pc = 0x2c5d10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_2c5d14:
    // 0x2c5d14: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x2c5d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2c5d18:
    // 0x2c5d18: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x2c5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2c5d1c:
    // 0x2c5d1c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2c5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2c5d20:
    // 0x2c5d20: 0x1012  mflo        $v0
    ctx->pc = 0x2c5d20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2c5d24:
    // 0x2c5d24: 0x8b8821  addu        $s1, $a0, $t3
    ctx->pc = 0x2c5d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_2c5d28:
    // 0x2c5d28: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2c5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_2c5d2c:
    // 0x2c5d2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c5d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2c5d30:
    // 0x2c5d30: 0x96e70004  lhu         $a3, 0x4($s7)
    ctx->pc = 0x2c5d30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
label_2c5d34:
    // 0x2c5d34: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2c5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_2c5d38:
    // 0x2c5d38: 0x14e2003e  bne         $a3, $v0, . + 4 + (0x3E << 2)
label_2c5d3c:
    if (ctx->pc == 0x2C5D3Cu) {
        ctx->pc = 0x2C5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D38u;
        // 0x2c5d3c: 0xafa90018  sw          $t1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D40u;
        goto label_2c5d40;
    }
    ctx->pc = 0x2C5D38u;
    {
        const bool branch_taken_0x2c5d38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D38u;
        // 0x2c5d3c: 0xafa90018  sw          $t1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d38) {
            ctx->pc = 0x2C5E34u;
            goto label_2c5e34;
        }
    }
    ctx->pc = 0x2C5D40u;
label_2c5d40:
    // 0x2c5d40: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2c5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c5d44:
    // 0x2c5d44: 0x8c96005c  lw          $s6, 0x5C($a0)
    ctx->pc = 0x2c5d44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2c5d48:
    // 0x2c5d48: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x2c5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_2c5d4c:
    // 0x2c5d4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c5d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2c5d50:
    // 0x2c5d50: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_2c5d54:
    if (ctx->pc == 0x2C5D54u) {
        ctx->pc = 0x2C5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D50u;
        // 0x2c5d54: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D58u;
        goto label_2c5d58;
    }
    ctx->pc = 0x2C5D50u;
    {
        const bool branch_taken_0x2c5d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d50) {
            ctx->pc = 0x2C5D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5D50u;
            // 0x2c5d54: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DB0u;
            goto label_2c5db0;
        }
    }
    ctx->pc = 0x2C5D58u;
label_2c5d58:
    // 0x2c5d58: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c5d5c:
    // 0x2c5d5c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2c5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2c5d60:
    // 0x2c5d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c5d64:
    // 0x2c5d64: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2c5d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_2c5d68:
    // 0x2c5d68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c5d6c:
    // 0x2c5d6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c5d70:
    // 0x2c5d70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c5d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c5d74:
    // 0x2c5d74: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2c5d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2c5d78:
    // 0x2c5d78: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2c5d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2c5d7c:
    // 0x2c5d7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2c5d80:
    // 0x2c5d80: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x2c5d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2c5d84:
    // 0x2c5d84: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2c5d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2c5d88:
    // 0x2c5d88: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2c5d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2c5d8c:
    // 0x2c5d8c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c5d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2c5d90:
    // 0x2c5d90: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c5d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2c5d94:
    // 0x2c5d94: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2c5d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_2c5d98:
    // 0x2c5d98: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2c5d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2c5d9c:
    // 0x2c5d9c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2c5d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2c5da0:
    // 0x2c5da0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2c5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2c5da4:
    // 0x2c5da4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2c5da8:
    if (ctx->pc == 0x2C5DA8u) {
        ctx->pc = 0x2C5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DA4u;
        // 0x2c5da8: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5DACu;
        goto label_2c5dac;
    }
    ctx->pc = 0x2C5DA4u;
    {
        const bool branch_taken_0x2c5da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DA4u;
        // 0x2c5da8: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5da4) {
            ctx->pc = 0x2C5DCCu;
            goto label_2c5dcc;
        }
    }
    ctx->pc = 0x2C5DACu;
label_2c5dac:
    // 0x2c5dac: 0x0  nop
    ctx->pc = 0x2c5dacu;
    // NOP
label_2c5db0:
    // 0x2c5db0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5db0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5db4:
    // 0x2c5db4: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2c5db4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2c5db8:
    // 0x2c5db8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c5db8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c5dbc:
    // 0x2c5dbc: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2c5dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2c5dc0:
    // 0x2c5dc0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5dc4:
    // 0x2c5dc4: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x2c5dc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_2c5dc8:
    // 0x2c5dc8: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x2c5dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
label_2c5dcc:
    // 0x2c5dcc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5dd0:
    // 0x2c5dd0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c5dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5dd4:
    // 0x2c5dd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5dd8:
    // 0x2c5dd8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2c5dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c5ddc:
    // 0x2c5ddc: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x2c5ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2c5de0:
    // 0x2c5de0: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x2c5de0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2c5de4:
    // 0x2c5de4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2c5de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2c5de8:
    // 0x2c5de8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2c5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c5dec:
    // 0x2c5dec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c5decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c5df0:
    // 0x2c5df0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c5df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c5df4:
    // 0x2c5df4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2c5df4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2c5df8:
    // 0x2c5df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c5dfc:
    // 0x2c5dfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c5dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e00:
    // 0x2c5e00: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2c5e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_2c5e04:
    // 0x2c5e04: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2c5e04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_2c5e08:
    // 0x2c5e08: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2c5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2c5e0c:
    // 0x2c5e0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2c5e10:
    // 0x2c5e10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2c5e14:
    // 0x2c5e14: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2c5e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2c5e18:
    // 0x2c5e18: 0x96e60004  lhu         $a2, 0x4($s7)
    ctx->pc = 0x2c5e18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
label_2c5e1c:
    // 0x2c5e1c: 0xc0b1570  jal         func_2C55C0
label_2c5e20:
    if (ctx->pc == 0x2C5E20u) {
        ctx->pc = 0x2C5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E1Cu;
        // 0x2c5e20: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E24u;
        goto label_2c5e24;
    }
    ctx->pc = 0x2C5E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5E24u);
    ctx->pc = 0x2C5E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E1Cu;
    // 0x2c5e20: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C55C0u, 0x2C5E1Cu, 0x2C5E24u)) {
        return;
    }
    ctx->pc = 0x2C5E24u;
label_2c5e24:
    // 0x2c5e24: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2c5e28:
    // 0x2c5e28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c5e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5e2c:
    // 0x2c5e2c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2c5e30:
    if (ctx->pc == 0x2C5E30u) {
        ctx->pc = 0x2C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E2Cu;
        // 0x2c5e30: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E34u;
        goto label_2c5e34;
    }
    ctx->pc = 0x2C5E2Cu;
    {
        const bool branch_taken_0x2c5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E2Cu;
        // 0x2c5e30: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e2c) {
            ctx->pc = 0x2C6100u;
            goto label_2c6100;
        }
    }
    ctx->pc = 0x2C5E34u;
label_2c5e34:
    // 0x2c5e34: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2c5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c5e38:
    // 0x2c5e38: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c5e38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e3c:
    // 0x2c5e3c: 0x9465000c  lhu         $a1, 0xC($v1)
    ctx->pc = 0x2c5e3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2c5e40:
    // 0x2c5e40: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x2c5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
label_2c5e44:
    // 0x2c5e44: 0x10000095  b           . + 4 + (0x95 << 2)
label_2c5e48:
    if (ctx->pc == 0x2C5E48u) {
        ctx->pc = 0x2C5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E44u;
        // 0x2c5e48: 0x8c720010  lw          $s2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E4Cu;
        goto label_2c5e4c;
    }
    ctx->pc = 0x2C5E44u;
    {
        const bool branch_taken_0x2c5e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E44u;
        // 0x2c5e48: 0x8c720010  lw          $s2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e44) {
            ctx->pc = 0x2C609Cu;
            goto label_2c609c;
        }
    }
    ctx->pc = 0x2C5E4Cu;
label_2c5e4c:
    // 0x2c5e4c: 0x0  nop
    ctx->pc = 0x2c5e4cu;
    // NOP
label_2c5e50:
    // 0x2c5e50: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2c5e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2c5e54:
    // 0x2c5e54: 0x8c96005c  lw          $s6, 0x5C($a0)
    ctx->pc = 0x2c5e54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2c5e58:
    // 0x2c5e58: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x2c5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_2c5e5c:
    // 0x2c5e5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c5e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2c5e60:
    // 0x2c5e60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c5e64:
    if (ctx->pc == 0x2C5E64u) {
        ctx->pc = 0x2C5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E60u;
        // 0x2c5e64: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E68u;
        goto label_2c5e68;
    }
    ctx->pc = 0x2C5E60u;
    {
        const bool branch_taken_0x2c5e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E60u;
        // 0x2c5e64: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e60) {
            ctx->pc = 0x2C5E8Cu;
            goto label_2c5e8c;
        }
    }
    ctx->pc = 0x2C5E68u;
label_2c5e68:
    // 0x2c5e68: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2c5e68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2c5e6c:
    // 0x2c5e6c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5e70:
    // 0x2c5e70: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2c5e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2c5e74:
    // 0x2c5e74: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c5e78:
    // 0x2c5e78: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2c5e78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_2c5e7c:
    // 0x2c5e7c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5e80:
    // 0x2c5e80: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2c5e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2c5e84:
    // 0x2c5e84: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2c5e88:
    if (ctx->pc == 0x2C5E88u) {
        ctx->pc = 0x2C5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E84u;
        // 0x2c5e88: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E8Cu;
        goto label_2c5e8c;
    }
    ctx->pc = 0x2C5E84u;
    {
        const bool branch_taken_0x2c5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E84u;
        // 0x2c5e88: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e84) {
            ctx->pc = 0x2C5F00u;
            goto label_2c5f00;
        }
    }
    ctx->pc = 0x2C5E8Cu;
label_2c5e8c:
    // 0x2c5e8c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_2c5e90:
    if (ctx->pc == 0x2C5E90u) {
        ctx->pc = 0x2C5E94u;
        goto label_2c5e94;
    }
    ctx->pc = 0x2C5E8Cu;
    {
        const bool branch_taken_0x2c5e8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e8c) {
            ctx->pc = 0x2C5EB8u;
            goto label_2c5eb8;
        }
    }
    ctx->pc = 0x2C5E94u;
label_2c5e94:
    // 0x2c5e94: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2c5e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5e98:
    // 0x2c5e98: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5e98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5e9c:
    // 0x2c5e9c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2c5e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2c5ea0:
    // 0x2c5ea0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c5ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c5ea4:
    // 0x2c5ea4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2c5ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2c5ea8:
    // 0x2c5ea8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5eac:
    // 0x2c5eac: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x2c5eacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_2c5eb0:
    // 0x2c5eb0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c5eb4:
    if (ctx->pc == 0x2C5EB4u) {
        ctx->pc = 0x2C5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EB0u;
        // 0x2c5eb4: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5EB8u;
        goto label_2c5eb8;
    }
    ctx->pc = 0x2C5EB0u;
    {
        const bool branch_taken_0x2c5eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EB0u;
        // 0x2c5eb4: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5eb0) {
            ctx->pc = 0x2C5F00u;
            goto label_2c5f00;
        }
    }
    ctx->pc = 0x2C5EB8u;
label_2c5eb8:
    // 0x2c5eb8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c5eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5ebc:
    // 0x2c5ebc: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x2c5ebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2c5ec0:
    // 0x2c5ec0: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x2c5ec0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_2c5ec4:
    // 0x2c5ec4: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2c5ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_2c5ec8:
    // 0x2c5ec8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2c5ec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2c5ecc:
    // 0x2c5ecc: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x2c5eccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2c5ed0:
    // 0x2c5ed0: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x2c5ed0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_2c5ed4:
    // 0x2c5ed4: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x2c5ed4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2c5ed8:
    // 0x2c5ed8: 0x4a007378  vcallms     0xE68
    ctx->pc = 0x2c5ed8u;
    {     ctx->vu0_tpc = 0xE68;     runtime->executeVU0Microprogram(rdram, ctx, 0xE68); }
label_2c5edc:
    // 0x2c5edc: 0x9c68000c  lwu         $t0, 0xC($v1)
    ctx->pc = 0x2c5edcu;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c5ee0:
    // 0x2c5ee0: 0x9ca9000c  lwu         $t1, 0xC($a1)
    ctx->pc = 0x2c5ee0u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2c5ee4:
    // 0x2c5ee4: 0x1095024  and         $t2, $t0, $t1
    ctx->pc = 0x2c5ee4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_2c5ee8:
    // 0x2c5ee8: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x2c5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
label_2c5eec:
    // 0x2c5eec: 0x4a0002ff  vnop
    ctx->pc = 0x2c5eecu;
    // NOP operation, no action needed for VU0
label_2c5ef0:
    // 0x2c5ef0: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x2c5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_2c5ef4:
    // 0x2c5ef4: 0xfa0a0010  sqc2        $vf10, 0x10($s0)
    ctx->pc = 0x2c5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[10]));
label_2c5ef8:
    // 0x2c5ef8: 0xfa0b0020  sqc2        $vf11, 0x20($s0)
    ctx->pc = 0x2c5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[11]));
label_2c5efc:
    // 0x2c5efc: 0xfa0c0030  sqc2        $vf12, 0x30($s0)
    ctx->pc = 0x2c5efcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[12]));
label_2c5f00:
    // 0x2c5f00: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2c5f04:
    if (ctx->pc == 0x2C5F04u) {
        ctx->pc = 0x2C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F00u;
        // 0x2c5f04: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F08u;
        goto label_2c5f08;
    }
    ctx->pc = 0x2C5F00u;
    {
        const bool branch_taken_0x2c5f00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F00u;
        // 0x2c5f04: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f00) {
            ctx->pc = 0x2C5F1Cu;
            goto label_2c5f1c;
        }
    }
    ctx->pc = 0x2C5F08u;
label_2c5f08:
    // 0x2c5f08: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2c5f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2c5f0c:
    // 0x2c5f0c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2c5f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_2c5f10:
    // 0x2c5f10: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x2c5f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_2c5f14:
    // 0x2c5f14: 0x10000024  b           . + 4 + (0x24 << 2)
label_2c5f18:
    if (ctx->pc == 0x2C5F18u) {
        ctx->pc = 0x2C5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F14u;
        // 0x2c5f18: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F1Cu;
        goto label_2c5f1c;
    }
    ctx->pc = 0x2C5F14u;
    {
        const bool branch_taken_0x2c5f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F14u;
        // 0x2c5f18: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f14) {
            ctx->pc = 0x2C5FA8u;
            goto label_2c5fa8;
        }
    }
    ctx->pc = 0x2C5F1Cu;
label_2c5f1c:
    // 0x2c5f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5f20:
    // 0x2c5f20: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
label_2c5f24:
    if (ctx->pc == 0x2C5F24u) {
        ctx->pc = 0x2C5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F20u;
        // 0x2c5f24: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F28u;
        goto label_2c5f28;
    }
    ctx->pc = 0x2C5F20u;
    {
        const bool branch_taken_0x2c5f20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F20u;
        // 0x2c5f24: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f20) {
            ctx->pc = 0x2C5F44u;
            goto label_2c5f44;
        }
    }
    ctx->pc = 0x2C5F28u;
label_2c5f28:
    // 0x2c5f28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5f2c:
    // 0x2c5f2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c5f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5f30:
    // 0x2c5f30: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2c5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_2c5f34:
    // 0x2c5f34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5f38:
    // 0x2c5f38: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2c5f38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2c5f3c:
    // 0x2c5f3c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2c5f40:
    if (ctx->pc == 0x2C5F40u) {
        ctx->pc = 0x2C5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F3Cu;
        // 0x2c5f40: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F44u;
        goto label_2c5f44;
    }
    ctx->pc = 0x2C5F3Cu;
    {
        const bool branch_taken_0x2c5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F3Cu;
        // 0x2c5f40: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f3c) {
            ctx->pc = 0x2C5FA8u;
            goto label_2c5fa8;
        }
    }
    ctx->pc = 0x2C5F44u;
label_2c5f44:
    // 0x2c5f44: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2c5f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_2c5f48:
    // 0x2c5f48: 0x8ca23034  lw          $v0, 0x3034($a1)
    ctx->pc = 0x2c5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12340)));
label_2c5f4c:
    // 0x2c5f4c: 0x24c672f0  addiu       $a2, $a2, 0x72F0
    ctx->pc = 0x2c5f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29424));
label_2c5f50:
    // 0x2c5f50: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2c5f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_2c5f54:
    // 0x2c5f54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c5f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c5f58:
    // 0x2c5f58: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_2c5f5c:
    if (ctx->pc == 0x2C5F5Cu) {
        ctx->pc = 0x2C5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F58u;
        // 0x2c5f5c: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F60u;
        goto label_2c5f60;
    }
    ctx->pc = 0x2C5F58u;
    {
        const bool branch_taken_0x2c5f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5f58) {
            ctx->pc = 0x2C5F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5F58u;
            // 0x2c5f5c: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F94u;
            goto label_2c5f94;
        }
    }
    ctx->pc = 0x2C5F60u;
label_2c5f60:
    // 0x2c5f60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c5f64:
    // 0x2c5f64: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2c5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2c5f68:
    // 0x2c5f68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c5f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5f6c:
    // 0x2c5f6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c5f70:
    // 0x2c5f70: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c5f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2c5f74:
    // 0x2c5f74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c5f78:
    if (ctx->pc == 0x2C5F78u) {
        ctx->pc = 0x2C5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F74u;
        // 0x2c5f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F7Cu;
        goto label_2c5f7c;
    }
    ctx->pc = 0x2C5F74u;
    {
        const bool branch_taken_0x2c5f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F74u;
        // 0x2c5f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f74) {
            ctx->pc = 0x2C5F90u;
            goto label_2c5f90;
        }
    }
    ctx->pc = 0x2C5F7Cu;
label_2c5f7c:
    // 0x2c5f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f80:
    // 0x2c5f80: 0xc0b529c  jal         func_2D4A70
label_2c5f84:
    if (ctx->pc == 0x2C5F84u) {
        ctx->pc = 0x2C5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F80u;
        // 0x2c5f84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F88u;
        goto label_2c5f88;
    }
    ctx->pc = 0x2C5F80u;
    SET_GPR_U32(ctx, 31, 0x2C5F88u);
    ctx->pc = 0x2C5F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F80u;
    // 0x2c5f84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4A70u, 0x2C5F80u, 0x2C5F88u)) {
        return;
    }
    ctx->pc = 0x2C5F88u;
label_2c5f88:
    // 0x2c5f88: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c5f8c:
    if (ctx->pc == 0x2C5F8Cu) {
        ctx->pc = 0x2C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F88u;
        // 0x2c5f8c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F90u;
        goto label_2c5f90;
    }
    ctx->pc = 0x2C5F88u;
    {
        const bool branch_taken_0x2c5f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F88u;
        // 0x2c5f8c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f88) {
            ctx->pc = 0x2C5FACu;
            goto label_2c5fac;
        }
    }
    ctx->pc = 0x2C5F90u;
label_2c5f90:
    // 0x2c5f90: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2c5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2c5f94:
    // 0x2c5f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f98:
    // 0x2c5f98: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c5f9c:
    // 0x2c5f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5fa0:
    // 0x2c5fa0: 0x40f809  jalr        $v0
label_2c5fa4:
    if (ctx->pc == 0x2C5FA4u) {
        ctx->pc = 0x2C5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FA0u;
        // 0x2c5fa4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FA8u;
        goto label_2c5fa8;
    }
    ctx->pc = 0x2C5FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5FA8u);
        ctx->pc = 0x2C5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FA0u;
        // 0x2c5fa4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5FA0u, 0x2C5FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5FA8u;
label_2c5fa8:
    // 0x2c5fa8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2c5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2c5fac:
    // 0x2c5fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5fb0:
    // 0x2c5fb0: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_2c5fb4:
    if (ctx->pc == 0x2C5FB4u) {
        ctx->pc = 0x2C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FB0u;
        // 0x2c5fb4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FB8u;
        goto label_2c5fb8;
    }
    ctx->pc = 0x2C5FB0u;
    {
        const bool branch_taken_0x2c5fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FB0u;
        // 0x2c5fb4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fb0) {
            ctx->pc = 0x2C5FE8u;
            goto label_2c5fe8;
        }
    }
    ctx->pc = 0x2C5FB8u;
label_2c5fb8:
    // 0x2c5fb8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2c5fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2c5fbc:
    // 0x2c5fbc: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x2c5fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2c5fc0:
    // 0x2c5fc0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c5fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5fc4:
    // 0x2c5fc4: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x2c5fc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2c5fc8:
    // 0x2c5fc8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2c5fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2c5fcc:
    // 0x2c5fcc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2c5fccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2c5fd0:
    // 0x2c5fd0: 0x4a006fb8  vcallms     0xDF0
    ctx->pc = 0x2c5fd0u;
    {     ctx->vu0_tpc = 0xDF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDF0); }
label_2c5fd4:
    // 0x2c5fd4: 0x4a0002ff  vnop
    ctx->pc = 0x2c5fd4u;
    // NOP operation, no action needed for VU0
label_2c5fd8:
    // 0x2c5fd8: 0x48420801  cfc2.i      $v0, $vi1
    ctx->pc = 0x2c5fd8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[1]));
label_2c5fdc:
    // 0x2c5fdc: 0x0  nop
    ctx->pc = 0x2c5fdcu;
    // NOP
label_2c5fe0:
    // 0x2c5fe0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2c5fe4:
    if (ctx->pc == 0x2C5FE4u) {
        ctx->pc = 0x2C5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FE0u;
        // 0x2c5fe4: 0x26a20020  addiu       $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FE8u;
        goto label_2c5fe8;
    }
    ctx->pc = 0x2C5FE0u;
    {
        const bool branch_taken_0x2c5fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FE0u;
        // 0x2c5fe4: 0x26a20020  addiu       $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fe0) {
            ctx->pc = 0x2C6090u;
            goto label_2c6090;
        }
    }
    ctx->pc = 0x2C5FE8u;
label_2c5fe8:
    // 0x2c5fe8: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x2c5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_2c5fec:
    // 0x2c5fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c5ff0:
    // 0x2c5ff0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2c5ff4:
    if (ctx->pc == 0x2C5FF4u) {
        ctx->pc = 0x2C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FF0u;
        // 0x2c5ff4: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FF8u;
        goto label_2c5ff8;
    }
    ctx->pc = 0x2C5FF0u;
    {
        const bool branch_taken_0x2c5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FF0u;
        // 0x2c5ff4: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ff0) {
            ctx->pc = 0x2C605Cu;
            goto label_2c605c;
        }
    }
    ctx->pc = 0x2C5FF8u;
label_2c5ff8:
    // 0x2c5ff8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c5ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5ffc:
    // 0x2c5ffc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2c5ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6000:
    // 0x2c6000: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2c6000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c6004:
    // 0x2c6004: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2c6004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2c6008:
    // 0x2c6008: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c6008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c600c:
    // 0x2c600c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2c600cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_2c6010:
    // 0x2c6010: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c6010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c6014:
    // 0x2c6014: 0x33c6ffff  andi        $a2, $fp, 0xFFFF
    ctx->pc = 0x2c6014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_2c6018:
    // 0x2c6018: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c6018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c601c:
    // 0x2c601c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2c601cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c6020:
    // 0x2c6020: 0xc0b1570  jal         func_2C55C0
label_2c6024:
    if (ctx->pc == 0x2C6024u) {
        ctx->pc = 0x2C6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6020u;
        // 0x2c6024: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6028u;
        goto label_2c6028;
    }
    ctx->pc = 0x2C6020u;
    SET_GPR_U32(ctx, 31, 0x2C6028u);
    ctx->pc = 0x2C6024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6020u;
    // 0x2c6024: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C55C0u, 0x2C6020u, 0x2C6028u)) {
        return;
    }
    ctx->pc = 0x2C6028u;
label_2c6028:
    // 0x2c6028: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2c6028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2c602c:
    // 0x2c602c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c6030:
    // 0x2c6030: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x2c6030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_2c6034:
    // 0x2c6034: 0x643818  mult        $a3, $v1, $a0
    ctx->pc = 0x2c6034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2c6038:
    // 0x2c6038: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x2c6038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2c603c:
    // 0x2c603c: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x2c603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2c6040:
    // 0x2c6040: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2c6044:
    // 0x2c6044: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x2c6044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2c6048:
    // 0x2c6048: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c6048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c604c:
    // 0x2c604c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2c604cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c6050:
    // 0x2c6050: 0xc79821  addu        $s3, $a2, $a3
    ctx->pc = 0x2c6050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2c6054:
    // 0x2c6054: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c6058:
    if (ctx->pc == 0x2C6058u) {
        ctx->pc = 0x2C6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6054u;
        // 0x2c6058: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C605Cu;
        goto label_2c605c;
    }
    ctx->pc = 0x2C6054u;
    {
        const bool branch_taken_0x2c6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6054u;
        // 0x2c6058: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6054) {
            ctx->pc = 0x2C608Cu;
            goto label_2c608c;
        }
    }
    ctx->pc = 0x2C605Cu;
label_2c605c:
    // 0x2c605c: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x2c605cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_2c6060:
    // 0x2c6060: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2c6064:
    // 0x2c6064: 0x6ae50007  ldl         $a1, 0x7($s7)
    ctx->pc = 0x2c6064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2c6068:
    // 0x2c6068: 0x6ee50000  ldr         $a1, 0x0($s7)
    ctx->pc = 0x2c6068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c606c:
    // 0x2c606c: 0xb2650007  sdl         $a1, 0x7($s3)
    ctx->pc = 0x2c606cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c6070:
    // 0x2c6070: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2c6070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2c6074:
    // 0x2c6074: 0xb6650000  sdr         $a1, 0x0($s3)
    ctx->pc = 0x2c6074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c6078:
    // 0x2c6078: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c607c:
    // 0x2c607c: 0xa67e0004  sh          $fp, 0x4($s3)
    ctx->pc = 0x2c607cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 30));
label_2c6080:
    // 0x2c6080: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2c6080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_2c6084:
    // 0x2c6084: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2c6084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2c6088:
    // 0x2c6088: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x2c6088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2c608c:
    // 0x2c608c: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x2c608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2c6090:
    // 0x2c6090: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2c6090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2c6094:
    // 0x2c6094: 0x55a80b  movn        $s5, $v0, $s5
    ctx->pc = 0x2c6094u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
label_2c6098:
    // 0x2c6098: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c6098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2c609c:
    // 0x2c609c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2c609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2c60a0:
    // 0x2c60a0: 0x3c4102b  sltu        $v0, $fp, $a0
    ctx->pc = 0x2c60a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c60a4:
    // 0x2c60a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c60a8:
    if (ctx->pc == 0x2C60A8u) {
        ctx->pc = 0x2C60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60A4u;
        // 0x2c60a8: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C60ACu;
        goto label_2c60ac;
    }
    ctx->pc = 0x2C60A4u;
    {
        const bool branch_taken_0x2c60a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60A4u;
        // 0x2c60a8: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60a4) {
            ctx->pc = 0x2C60CCu;
            goto label_2c60cc;
        }
    }
    ctx->pc = 0x2C60ACu;
label_2c60ac:
    // 0x2c60ac: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x2c60acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c60b0:
    // 0x2c60b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c60b4:
    if (ctx->pc == 0x2C60B4u) {
        ctx->pc = 0x2C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60B0u;
        // 0x2c60b4: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C60B8u;
        goto label_2c60b8;
    }
    ctx->pc = 0x2C60B0u;
    {
        const bool branch_taken_0x2c60b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60B0u;
        // 0x2c60b4: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60b0) {
            ctx->pc = 0x2C60C4u;
            goto label_2c60c4;
        }
    }
    ctx->pc = 0x2C60B8u;
label_2c60b8:
    // 0x2c60b8: 0x266102b  sltu        $v0, $s3, $a2
    ctx->pc = 0x2c60b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2c60bc:
    // 0x2c60bc: 0x5440ff64  bnel        $v0, $zero, . + 4 + (-0x9C << 2)
label_2c60c0:
    if (ctx->pc == 0x2C60C0u) {
        ctx->pc = 0x2C60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60BCu;
        // 0x2c60c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C60C4u;
        goto label_2c60c4;
    }
    ctx->pc = 0x2C60BCu;
    {
        const bool branch_taken_0x2c60bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c60bc) {
            ctx->pc = 0x2C60C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C60BCu;
            // 0x2c60c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5e50;
        }
    }
    ctx->pc = 0x2C60C4u;
label_2c60c4:
    // 0x2c60c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c60c8:
    // 0x2c60c8: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x2c60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_2c60cc:
    // 0x2c60cc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2c60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2c60d0:
    // 0x2c60d0: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x2c60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
label_2c60d4:
    // 0x2c60d4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x2c60d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_2c60d8:
    // 0x2c60d8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2c60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2c60dc:
    // 0x2c60dc: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2c60e0:
    // 0x2c60e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c60e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c60e4:
    // 0x2c60e4: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2c60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2c60e8:
    // 0x2c60e8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x2c60e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_2c60ec:
    // 0x2c60ec: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x2c60ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
label_2c60f0:
    // 0x2c60f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2c60f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2c60f4:
    // 0x2c60f4: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2c60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_2c60f8:
    // 0x2c60f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2c60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2c60fc:
    // 0x2c60fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c6100:
    // 0x2c6100: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2c6100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c6104:
    // 0x2c6104: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2c6104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c6108:
    // 0x2c6108: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2c6108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c610c:
    // 0x2c610c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2c610cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c6110:
    // 0x2c6110: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2c6110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c6114:
    // 0x2c6114: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2c6114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c6118:
    // 0x2c6118: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c6118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c611c:
    // 0x2c611c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2c611cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c6120:
    // 0x2c6120: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2c6120u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6124:
    // 0x2c6124: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6128:
    // 0x2c6128: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c6128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c612c:
    // 0x2c612c: 0x3e00008  jr          $ra
label_2c6130:
    if (ctx->pc == 0x2C6130u) {
        ctx->pc = 0x2C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C612Cu;
        // 0x2c6130: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6134u;
        goto label_2c6134;
    }
    ctx->pc = 0x2C612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C612Cu;
        // 0x2c6130: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6134u;
label_2c6134:
    // 0x2c6134: 0x0  nop
    ctx->pc = 0x2c6134u;
    // NOP
    ctx->pc = 0x2c6138u;
}
