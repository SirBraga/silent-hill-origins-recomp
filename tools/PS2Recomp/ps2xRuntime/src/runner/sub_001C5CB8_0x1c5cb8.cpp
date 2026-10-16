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

// Function: sub_001C5CB8
// Address: 0x1c5cb8 - 0x1c61d0
void sub_001C5CB8_0x1c5cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5CB8_0x1c5cb8");
#endif

    switch (ctx->pc) {
        case 0x1c5cb8u: goto label_1c5cb8;
        case 0x1c5cbcu: goto label_1c5cbc;
        case 0x1c5cc0u: goto label_1c5cc0;
        case 0x1c5cc4u: goto label_1c5cc4;
        case 0x1c5cc8u: goto label_1c5cc8;
        case 0x1c5cccu: goto label_1c5ccc;
        case 0x1c5cd0u: goto label_1c5cd0;
        case 0x1c5cd4u: goto label_1c5cd4;
        case 0x1c5cd8u: goto label_1c5cd8;
        case 0x1c5cdcu: goto label_1c5cdc;
        case 0x1c5ce0u: goto label_1c5ce0;
        case 0x1c5ce4u: goto label_1c5ce4;
        case 0x1c5ce8u: goto label_1c5ce8;
        case 0x1c5cecu: goto label_1c5cec;
        case 0x1c5cf0u: goto label_1c5cf0;
        case 0x1c5cf4u: goto label_1c5cf4;
        case 0x1c5cf8u: goto label_1c5cf8;
        case 0x1c5cfcu: goto label_1c5cfc;
        case 0x1c5d00u: goto label_1c5d00;
        case 0x1c5d04u: goto label_1c5d04;
        case 0x1c5d08u: goto label_1c5d08;
        case 0x1c5d0cu: goto label_1c5d0c;
        case 0x1c5d10u: goto label_1c5d10;
        case 0x1c5d14u: goto label_1c5d14;
        case 0x1c5d18u: goto label_1c5d18;
        case 0x1c5d1cu: goto label_1c5d1c;
        case 0x1c5d20u: goto label_1c5d20;
        case 0x1c5d24u: goto label_1c5d24;
        case 0x1c5d28u: goto label_1c5d28;
        case 0x1c5d2cu: goto label_1c5d2c;
        case 0x1c5d30u: goto label_1c5d30;
        case 0x1c5d34u: goto label_1c5d34;
        case 0x1c5d38u: goto label_1c5d38;
        case 0x1c5d3cu: goto label_1c5d3c;
        case 0x1c5d40u: goto label_1c5d40;
        case 0x1c5d44u: goto label_1c5d44;
        case 0x1c5d48u: goto label_1c5d48;
        case 0x1c5d4cu: goto label_1c5d4c;
        case 0x1c5d50u: goto label_1c5d50;
        case 0x1c5d54u: goto label_1c5d54;
        case 0x1c5d58u: goto label_1c5d58;
        case 0x1c5d5cu: goto label_1c5d5c;
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d64u: goto label_1c5d64;
        case 0x1c5d68u: goto label_1c5d68;
        case 0x1c5d6cu: goto label_1c5d6c;
        case 0x1c5d70u: goto label_1c5d70;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5d78u: goto label_1c5d78;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d80u: goto label_1c5d80;
        case 0x1c5d84u: goto label_1c5d84;
        case 0x1c5d88u: goto label_1c5d88;
        case 0x1c5d8cu: goto label_1c5d8c;
        case 0x1c5d90u: goto label_1c5d90;
        case 0x1c5d94u: goto label_1c5d94;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5d9cu: goto label_1c5d9c;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5da4u: goto label_1c5da4;
        case 0x1c5da8u: goto label_1c5da8;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db0u: goto label_1c5db0;
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dbcu: goto label_1c5dbc;
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dc4u: goto label_1c5dc4;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5dd4u: goto label_1c5dd4;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de0u: goto label_1c5de0;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5decu: goto label_1c5dec;
        case 0x1c5df0u: goto label_1c5df0;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5dfcu: goto label_1c5dfc;
        case 0x1c5e00u: goto label_1c5e00;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e08u: goto label_1c5e08;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e14u: goto label_1c5e14;
        case 0x1c5e18u: goto label_1c5e18;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e20u: goto label_1c5e20;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e28u: goto label_1c5e28;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e34u: goto label_1c5e34;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e3cu: goto label_1c5e3c;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e48u: goto label_1c5e48;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e58u: goto label_1c5e58;
        case 0x1c5e5cu: goto label_1c5e5c;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e64u: goto label_1c5e64;
        case 0x1c5e68u: goto label_1c5e68;
        case 0x1c5e6cu: goto label_1c5e6c;
        case 0x1c5e70u: goto label_1c5e70;
        case 0x1c5e74u: goto label_1c5e74;
        case 0x1c5e78u: goto label_1c5e78;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e80u: goto label_1c5e80;
        case 0x1c5e84u: goto label_1c5e84;
        case 0x1c5e88u: goto label_1c5e88;
        case 0x1c5e8cu: goto label_1c5e8c;
        case 0x1c5e90u: goto label_1c5e90;
        case 0x1c5e94u: goto label_1c5e94;
        case 0x1c5e98u: goto label_1c5e98;
        case 0x1c5e9cu: goto label_1c5e9c;
        case 0x1c5ea0u: goto label_1c5ea0;
        case 0x1c5ea4u: goto label_1c5ea4;
        case 0x1c5ea8u: goto label_1c5ea8;
        case 0x1c5eacu: goto label_1c5eac;
        case 0x1c5eb0u: goto label_1c5eb0;
        case 0x1c5eb4u: goto label_1c5eb4;
        case 0x1c5eb8u: goto label_1c5eb8;
        case 0x1c5ebcu: goto label_1c5ebc;
        case 0x1c5ec0u: goto label_1c5ec0;
        case 0x1c5ec4u: goto label_1c5ec4;
        case 0x1c5ec8u: goto label_1c5ec8;
        case 0x1c5eccu: goto label_1c5ecc;
        case 0x1c5ed0u: goto label_1c5ed0;
        case 0x1c5ed4u: goto label_1c5ed4;
        case 0x1c5ed8u: goto label_1c5ed8;
        case 0x1c5edcu: goto label_1c5edc;
        case 0x1c5ee0u: goto label_1c5ee0;
        case 0x1c5ee4u: goto label_1c5ee4;
        case 0x1c5ee8u: goto label_1c5ee8;
        case 0x1c5eecu: goto label_1c5eec;
        case 0x1c5ef0u: goto label_1c5ef0;
        case 0x1c5ef4u: goto label_1c5ef4;
        case 0x1c5ef8u: goto label_1c5ef8;
        case 0x1c5efcu: goto label_1c5efc;
        case 0x1c5f00u: goto label_1c5f00;
        case 0x1c5f04u: goto label_1c5f04;
        case 0x1c5f08u: goto label_1c5f08;
        case 0x1c5f0cu: goto label_1c5f0c;
        case 0x1c5f10u: goto label_1c5f10;
        case 0x1c5f14u: goto label_1c5f14;
        case 0x1c5f18u: goto label_1c5f18;
        case 0x1c5f1cu: goto label_1c5f1c;
        case 0x1c5f20u: goto label_1c5f20;
        case 0x1c5f24u: goto label_1c5f24;
        case 0x1c5f28u: goto label_1c5f28;
        case 0x1c5f2cu: goto label_1c5f2c;
        case 0x1c5f30u: goto label_1c5f30;
        case 0x1c5f34u: goto label_1c5f34;
        case 0x1c5f38u: goto label_1c5f38;
        case 0x1c5f3cu: goto label_1c5f3c;
        case 0x1c5f40u: goto label_1c5f40;
        case 0x1c5f44u: goto label_1c5f44;
        case 0x1c5f48u: goto label_1c5f48;
        case 0x1c5f4cu: goto label_1c5f4c;
        case 0x1c5f50u: goto label_1c5f50;
        case 0x1c5f54u: goto label_1c5f54;
        case 0x1c5f58u: goto label_1c5f58;
        case 0x1c5f5cu: goto label_1c5f5c;
        case 0x1c5f60u: goto label_1c5f60;
        case 0x1c5f64u: goto label_1c5f64;
        case 0x1c5f68u: goto label_1c5f68;
        case 0x1c5f6cu: goto label_1c5f6c;
        case 0x1c5f70u: goto label_1c5f70;
        case 0x1c5f74u: goto label_1c5f74;
        case 0x1c5f78u: goto label_1c5f78;
        case 0x1c5f7cu: goto label_1c5f7c;
        case 0x1c5f80u: goto label_1c5f80;
        case 0x1c5f84u: goto label_1c5f84;
        case 0x1c5f88u: goto label_1c5f88;
        case 0x1c5f8cu: goto label_1c5f8c;
        case 0x1c5f90u: goto label_1c5f90;
        case 0x1c5f94u: goto label_1c5f94;
        case 0x1c5f98u: goto label_1c5f98;
        case 0x1c5f9cu: goto label_1c5f9c;
        case 0x1c5fa0u: goto label_1c5fa0;
        case 0x1c5fa4u: goto label_1c5fa4;
        case 0x1c5fa8u: goto label_1c5fa8;
        case 0x1c5facu: goto label_1c5fac;
        case 0x1c5fb0u: goto label_1c5fb0;
        case 0x1c5fb4u: goto label_1c5fb4;
        case 0x1c5fb8u: goto label_1c5fb8;
        case 0x1c5fbcu: goto label_1c5fbc;
        case 0x1c5fc0u: goto label_1c5fc0;
        case 0x1c5fc4u: goto label_1c5fc4;
        case 0x1c5fc8u: goto label_1c5fc8;
        case 0x1c5fccu: goto label_1c5fcc;
        case 0x1c5fd0u: goto label_1c5fd0;
        case 0x1c5fd4u: goto label_1c5fd4;
        case 0x1c5fd8u: goto label_1c5fd8;
        case 0x1c5fdcu: goto label_1c5fdc;
        case 0x1c5fe0u: goto label_1c5fe0;
        case 0x1c5fe4u: goto label_1c5fe4;
        case 0x1c5fe8u: goto label_1c5fe8;
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c5ff0u: goto label_1c5ff0;
        case 0x1c5ff4u: goto label_1c5ff4;
        case 0x1c5ff8u: goto label_1c5ff8;
        case 0x1c5ffcu: goto label_1c5ffc;
        case 0x1c6000u: goto label_1c6000;
        case 0x1c6004u: goto label_1c6004;
        case 0x1c6008u: goto label_1c6008;
        case 0x1c600cu: goto label_1c600c;
        case 0x1c6010u: goto label_1c6010;
        case 0x1c6014u: goto label_1c6014;
        case 0x1c6018u: goto label_1c6018;
        case 0x1c601cu: goto label_1c601c;
        case 0x1c6020u: goto label_1c6020;
        case 0x1c6024u: goto label_1c6024;
        case 0x1c6028u: goto label_1c6028;
        case 0x1c602cu: goto label_1c602c;
        case 0x1c6030u: goto label_1c6030;
        case 0x1c6034u: goto label_1c6034;
        case 0x1c6038u: goto label_1c6038;
        case 0x1c603cu: goto label_1c603c;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6044u: goto label_1c6044;
        case 0x1c6048u: goto label_1c6048;
        case 0x1c604cu: goto label_1c604c;
        case 0x1c6050u: goto label_1c6050;
        case 0x1c6054u: goto label_1c6054;
        case 0x1c6058u: goto label_1c6058;
        case 0x1c605cu: goto label_1c605c;
        case 0x1c6060u: goto label_1c6060;
        case 0x1c6064u: goto label_1c6064;
        case 0x1c6068u: goto label_1c6068;
        case 0x1c606cu: goto label_1c606c;
        case 0x1c6070u: goto label_1c6070;
        case 0x1c6074u: goto label_1c6074;
        case 0x1c6078u: goto label_1c6078;
        case 0x1c607cu: goto label_1c607c;
        case 0x1c6080u: goto label_1c6080;
        case 0x1c6084u: goto label_1c6084;
        case 0x1c6088u: goto label_1c6088;
        case 0x1c608cu: goto label_1c608c;
        case 0x1c6090u: goto label_1c6090;
        case 0x1c6094u: goto label_1c6094;
        case 0x1c6098u: goto label_1c6098;
        case 0x1c609cu: goto label_1c609c;
        case 0x1c60a0u: goto label_1c60a0;
        case 0x1c60a4u: goto label_1c60a4;
        case 0x1c60a8u: goto label_1c60a8;
        case 0x1c60acu: goto label_1c60ac;
        case 0x1c60b0u: goto label_1c60b0;
        case 0x1c60b4u: goto label_1c60b4;
        case 0x1c60b8u: goto label_1c60b8;
        case 0x1c60bcu: goto label_1c60bc;
        case 0x1c60c0u: goto label_1c60c0;
        case 0x1c60c4u: goto label_1c60c4;
        case 0x1c60c8u: goto label_1c60c8;
        case 0x1c60ccu: goto label_1c60cc;
        case 0x1c60d0u: goto label_1c60d0;
        case 0x1c60d4u: goto label_1c60d4;
        case 0x1c60d8u: goto label_1c60d8;
        case 0x1c60dcu: goto label_1c60dc;
        case 0x1c60e0u: goto label_1c60e0;
        case 0x1c60e4u: goto label_1c60e4;
        case 0x1c60e8u: goto label_1c60e8;
        case 0x1c60ecu: goto label_1c60ec;
        case 0x1c60f0u: goto label_1c60f0;
        case 0x1c60f4u: goto label_1c60f4;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c60fcu: goto label_1c60fc;
        case 0x1c6100u: goto label_1c6100;
        case 0x1c6104u: goto label_1c6104;
        case 0x1c6108u: goto label_1c6108;
        case 0x1c610cu: goto label_1c610c;
        case 0x1c6110u: goto label_1c6110;
        case 0x1c6114u: goto label_1c6114;
        case 0x1c6118u: goto label_1c6118;
        case 0x1c611cu: goto label_1c611c;
        case 0x1c6120u: goto label_1c6120;
        case 0x1c6124u: goto label_1c6124;
        case 0x1c6128u: goto label_1c6128;
        case 0x1c612cu: goto label_1c612c;
        case 0x1c6130u: goto label_1c6130;
        case 0x1c6134u: goto label_1c6134;
        case 0x1c6138u: goto label_1c6138;
        case 0x1c613cu: goto label_1c613c;
        case 0x1c6140u: goto label_1c6140;
        case 0x1c6144u: goto label_1c6144;
        case 0x1c6148u: goto label_1c6148;
        case 0x1c614cu: goto label_1c614c;
        case 0x1c6150u: goto label_1c6150;
        case 0x1c6154u: goto label_1c6154;
        case 0x1c6158u: goto label_1c6158;
        case 0x1c615cu: goto label_1c615c;
        case 0x1c6160u: goto label_1c6160;
        case 0x1c6164u: goto label_1c6164;
        case 0x1c6168u: goto label_1c6168;
        case 0x1c616cu: goto label_1c616c;
        case 0x1c6170u: goto label_1c6170;
        case 0x1c6174u: goto label_1c6174;
        case 0x1c6178u: goto label_1c6178;
        case 0x1c617cu: goto label_1c617c;
        case 0x1c6180u: goto label_1c6180;
        case 0x1c6184u: goto label_1c6184;
        case 0x1c6188u: goto label_1c6188;
        case 0x1c618cu: goto label_1c618c;
        case 0x1c6190u: goto label_1c6190;
        case 0x1c6194u: goto label_1c6194;
        case 0x1c6198u: goto label_1c6198;
        case 0x1c619cu: goto label_1c619c;
        case 0x1c61a0u: goto label_1c61a0;
        case 0x1c61a4u: goto label_1c61a4;
        case 0x1c61a8u: goto label_1c61a8;
        case 0x1c61acu: goto label_1c61ac;
        case 0x1c61b0u: goto label_1c61b0;
        case 0x1c61b4u: goto label_1c61b4;
        case 0x1c61b8u: goto label_1c61b8;
        case 0x1c61bcu: goto label_1c61bc;
        case 0x1c61c0u: goto label_1c61c0;
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61c8u: goto label_1c61c8;
        case 0x1c61ccu: goto label_1c61cc;
        default: break;
    }

    ctx->pc = 0x1c5cb8u;

label_1c5cb8:
    // 0x1c5cb8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c5cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1c5cbc:
    // 0x1c5cbc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c5cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1c5cc0:
    // 0x1c5cc0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c5cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1c5cc4:
    // 0x1c5cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c5cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5cc8:
    // 0x1c5cc8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c5cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1c5ccc:
    // 0x1c5ccc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c5cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c5cd0:
    // 0x1c5cd0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c5cd4:
    // 0x1c5cd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c5cd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c5cd8:
    // 0x1c5cd8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c5cdc:
    // 0x1c5cdc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c5cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1c5ce0:
    // 0x1c5ce0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c5ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c5ce4:
    // 0x1c5ce4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c5ce8:
    // 0x1c5ce8: 0x16c000ea  bnez        $s6, . + 4 + (0xEA << 2)
label_1c5cec:
    if (ctx->pc == 0x1C5CECu) {
        ctx->pc = 0x1C5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CE8u;
        // 0x1c5cec: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CF0u;
        goto label_1c5cf0;
    }
    ctx->pc = 0x1C5CE8u;
    {
        const bool branch_taken_0x1c5ce8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CE8u;
        // 0x1c5cec: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ce8) {
            ctx->pc = 0x1C6094u;
            goto label_1c6094;
        }
    }
    ctx->pc = 0x1C5CF0u;
label_1c5cf0:
    // 0x1c5cf0: 0x8e4203c0  lw          $v0, 0x3C0($s2)
    ctx->pc = 0x1c5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 960)));
label_1c5cf4:
    // 0x1c5cf4: 0x544000e8  bnel        $v0, $zero, . + 4 + (0xE8 << 2)
label_1c5cf8:
    if (ctx->pc == 0x1C5CF8u) {
        ctx->pc = 0x1C5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CF4u;
        // 0x1c5cf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CFCu;
        goto label_1c5cfc;
    }
    ctx->pc = 0x1C5CF4u;
    {
        const bool branch_taken_0x1c5cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cf4) {
            ctx->pc = 0x1C5CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CF4u;
            // 0x1c5cf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6098u;
            goto label_1c6098;
        }
    }
    ctx->pc = 0x1C5CFCu;
label_1c5cfc:
    // 0x1c5cfc: 0x8e4203c8  lw          $v0, 0x3C8($s2)
    ctx->pc = 0x1c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
label_1c5d00:
    // 0x1c5d00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c5d04:
    if (ctx->pc == 0x1C5D04u) {
        ctx->pc = 0x1C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D00u;
        // 0x1c5d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D08u;
        goto label_1c5d08;
    }
    ctx->pc = 0x1C5D00u;
    {
        const bool branch_taken_0x1c5d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D00u;
        // 0x1c5d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d00) {
            ctx->pc = 0x1C5D14u;
            goto label_1c5d14;
        }
    }
    ctx->pc = 0x1C5D08u;
label_1c5d08:
    // 0x1c5d08: 0xae4003c8  sw          $zero, 0x3C8($s2)
    ctx->pc = 0x1c5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 968), GPR_U32(ctx, 0));
label_1c5d0c:
    // 0x1c5d0c: 0x10000125  b           . + 4 + (0x125 << 2)
label_1c5d10:
    if (ctx->pc == 0x1C5D10u) {
        ctx->pc = 0x1C5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D0Cu;
        // 0x1c5d10: 0xae4203e4  sw          $v0, 0x3E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D14u;
        goto label_1c5d14;
    }
    ctx->pc = 0x1C5D0Cu;
    {
        const bool branch_taken_0x1c5d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D0Cu;
        // 0x1c5d10: 0xae4203e4  sw          $v0, 0x3E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d0c) {
            ctx->pc = 0x1C61A4u;
            goto label_1c61a4;
        }
    }
    ctx->pc = 0x1C5D14u;
label_1c5d14:
    // 0x1c5d14: 0x8e4203bc  lw          $v0, 0x3BC($s2)
    ctx->pc = 0x1c5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 956)));
label_1c5d18:
    // 0x1c5d18: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
label_1c5d1c:
    if (ctx->pc == 0x1C5D1Cu) {
        ctx->pc = 0x1C5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D18u;
        // 0x1c5d1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D20u;
        goto label_1c5d20;
    }
    ctx->pc = 0x1C5D18u;
    {
        const bool branch_taken_0x1c5d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D18u;
        // 0x1c5d1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d18) {
            ctx->pc = 0x1C5F08u;
            goto label_1c5f08;
        }
    }
    ctx->pc = 0x1C5D20u;
label_1c5d20:
    // 0x1c5d20: 0x2655028c  addiu       $s5, $s2, 0x28C
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 652));
label_1c5d24:
    // 0x1c5d24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c5d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d28:
    // 0x1c5d28: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1c5d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d2c:
    // 0x1c5d2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c5d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d30:
    // 0x1c5d30: 0x26510290  addiu       $s1, $s2, 0x290
    ctx->pc = 0x1c5d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
label_1c5d34:
    // 0x1c5d34: 0x0  nop
    ctx->pc = 0x1c5d34u;
    // NOP
label_1c5d38:
    // 0x1c5d38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c5d3c:
    // 0x1c5d3c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1c5d40:
    if (ctx->pc == 0x1C5D40u) {
        ctx->pc = 0x1C5D44u;
        goto label_1c5d44;
    }
    ctx->pc = 0x1C5D3Cu;
    {
        const bool branch_taken_0x1c5d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d3c) {
            ctx->pc = 0x1C5E0Cu;
            goto label_1c5e0c;
        }
    }
    ctx->pc = 0x1C5D44u;
label_1c5d44:
    // 0x1c5d44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c5d48:
    // 0x1c5d48: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_1c5d4c:
    if (ctx->pc == 0x1C5D4Cu) {
        ctx->pc = 0x1C5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D48u;
        // 0x1c5d4c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D50u;
        goto label_1c5d50;
    }
    ctx->pc = 0x1C5D48u;
    {
        const bool branch_taken_0x1c5d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d48) {
            ctx->pc = 0x1C5D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5D48u;
            // 0x1c5d4c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5E0Cu;
            goto label_1c5e0c;
        }
    }
    ctx->pc = 0x1C5D50u;
label_1c5d50:
    // 0x1c5d50: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1c5d54:
    // 0x1c5d54: 0x8c430298  lw          $v1, 0x298($v0)
    ctx->pc = 0x1c5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
label_1c5d58:
    // 0x1c5d58: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_1c5d5c:
    if (ctx->pc == 0x1C5D5Cu) {
        ctx->pc = 0x1C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D58u;
        // 0x1c5d5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D60u;
        goto label_1c5d60;
    }
    ctx->pc = 0x1C5D58u;
    {
        const bool branch_taken_0x1c5d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D58u;
        // 0x1c5d5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d58) {
            ctx->pc = 0x1C5E08u;
            goto label_1c5e08;
        }
    }
    ctx->pc = 0x1C5D60u;
label_1c5d60:
    // 0x1c5d60: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c5d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c5d64:
    // 0x1c5d64: 0xc0c493d  jal         func_3124F4
label_1c5d68:
    if (ctx->pc == 0x1C5D68u) {
        ctx->pc = 0x1C5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D64u;
        // 0x1c5d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D6Cu;
        goto label_1c5d6c;
    }
    ctx->pc = 0x1C5D64u;
    SET_GPR_U32(ctx, 31, 0x1C5D6Cu);
    ctx->pc = 0x1C5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D64u;
    // 0x1c5d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5D64u, 0x1C5D6Cu)) {
        return;
    }
    ctx->pc = 0x1C5D6Cu;
label_1c5d6c:
    // 0x1c5d6c: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1c5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1c5d70:
    // 0x1c5d70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d74:
    // 0x1c5d74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c5d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d78:
    // 0x1c5d78: 0xc4630264  lwc1        $f3, 0x264($v1)
    ctx->pc = 0x1c5d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c5d7c:
    // 0x1c5d7c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c5d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c5d80:
    // 0x1c5d80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c5d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d84:
    // 0x1c5d84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c5d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d88:
    // 0x1c5d88: 0xc4c2026c  lwc1        $f2, 0x26C($a2)
    ctx->pc = 0x1c5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5d8c:
    // 0x1c5d8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5d90:
    // 0x1c5d90: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1c5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c5d94:
    // 0x1c5d94: 0xc4e00270  lwc1        $f0, 0x270($a3)
    ctx->pc = 0x1c5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5d98:
    // 0x1c5d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5d9c:
    // 0x1c5d9c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1c5d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1c5da0:
    // 0x1c5da0: 0xc4410268  lwc1        $f1, 0x268($v0)
    ctx->pc = 0x1c5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5da4:
    // 0x1c5da4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c5da8:
    // 0x1c5da8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c5da8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1c5dac:
    // 0x1c5dac: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c5dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c5db0:
    // 0x1c5db0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1c5db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c5db4:
    // 0x1c5db4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c5db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1c5db8:
    // 0x1c5db8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1c5db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1c5dbc:
    // 0x1c5dbc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1c5dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1c5dc0:
    // 0x1c5dc0: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1c5dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1c5dc4:
    // 0x1c5dc4: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1c5dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1c5dc8:
    // 0x1c5dc8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1c5dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5dcc:
    // 0x1c5dcc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1c5dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5dd0:
    // 0x1c5dd0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1c5dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5dd4:
    // 0x1c5dd4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1c5dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5dd8:
    // 0x1c5dd8: 0xc06cda0  jal         func_1B3680
label_1c5ddc:
    if (ctx->pc == 0x1C5DDCu) {
        ctx->pc = 0x1C5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DD8u;
        // 0x1c5ddc: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DE0u;
        goto label_1c5de0;
    }
    ctx->pc = 0x1C5DD8u;
    SET_GPR_U32(ctx, 31, 0x1C5DE0u);
    ctx->pc = 0x1C5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DD8u;
    // 0x1c5ddc: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C5DD8u, 0x1C5DE0u)) {
        return;
    }
    ctx->pc = 0x1C5DE0u;
label_1c5de0:
    // 0x1c5de0: 0x8e4403b4  lw          $a0, 0x3B4($s2)
    ctx->pc = 0x1c5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1c5de4:
    // 0x1c5de4: 0xc06dc32  jal         func_1B70C8
label_1c5de8:
    if (ctx->pc == 0x1C5DE8u) {
        ctx->pc = 0x1C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DE4u;
        // 0x1c5de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DECu;
        goto label_1c5dec;
    }
    ctx->pc = 0x1C5DE4u;
    SET_GPR_U32(ctx, 31, 0x1C5DECu);
    ctx->pc = 0x1C5DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DE4u;
    // 0x1c5de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C5DE4u, 0x1C5DECu)) {
        return;
    }
    ctx->pc = 0x1C5DECu;
label_1c5dec:
    // 0x1c5dec: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1c5df0:
    if (ctx->pc == 0x1C5DF0u) {
        ctx->pc = 0x1C5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DECu;
        // 0x1c5df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DF4u;
        goto label_1c5df4;
    }
    ctx->pc = 0x1C5DECu;
    {
        const bool branch_taken_0x1c5dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DECu;
        // 0x1c5df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dec) {
            ctx->pc = 0x1C5EE4u;
            goto label_1c5ee4;
        }
    }
    ctx->pc = 0x1C5DF4u;
label_1c5df4:
    // 0x1c5df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5df8:
    // 0x1c5df8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c5dfc:
    // 0x1c5dfc: 0xae4203bc  sw          $v0, 0x3BC($s2)
    ctx->pc = 0x1c5dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 2));
label_1c5e00:
    // 0x1c5e00: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1c5e04:
    if (ctx->pc == 0x1C5E04u) {
        ctx->pc = 0x1C5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E00u;
        // 0x1c5e04: 0xae5403b8  sw          $s4, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E08u;
        goto label_1c5e08;
    }
    ctx->pc = 0x1C5E00u;
    {
        const bool branch_taken_0x1c5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E00u;
        // 0x1c5e04: 0xae5403b8  sw          $s4, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e00) {
            ctx->pc = 0x1C614Cu;
            goto label_1c614c;
        }
    }
    ctx->pc = 0x1C5E08u;
label_1c5e08:
    // 0x1c5e08: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c5e0c:
    // 0x1c5e0c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_1c5e10:
    if (ctx->pc == 0x1C5E10u) {
        ctx->pc = 0x1C5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E0Cu;
        // 0x1c5e10: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E14u;
        goto label_1c5e14;
    }
    ctx->pc = 0x1C5E0Cu;
    {
        const bool branch_taken_0x1c5e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e0c) {
            ctx->pc = 0x1C5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E0Cu;
            // 0x1c5e10: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EE8u;
            goto label_1c5ee8;
        }
    }
    ctx->pc = 0x1C5E14u;
label_1c5e14:
    // 0x1c5e14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c5e18:
    // 0x1c5e18: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_1c5e1c:
    if (ctx->pc == 0x1C5E1Cu) {
        ctx->pc = 0x1C5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E18u;
        // 0x1c5e1c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E20u;
        goto label_1c5e20;
    }
    ctx->pc = 0x1C5E18u;
    {
        const bool branch_taken_0x1c5e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e18) {
            ctx->pc = 0x1C5E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E18u;
            // 0x1c5e1c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EE8u;
            goto label_1c5ee8;
        }
    }
    ctx->pc = 0x1C5E20u;
label_1c5e20:
    // 0x1c5e20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c5e24:
    // 0x1c5e24: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c5e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c5e28:
    // 0x1c5e28: 0xc0c493d  jal         func_3124F4
label_1c5e2c:
    if (ctx->pc == 0x1C5E2Cu) {
        ctx->pc = 0x1C5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E28u;
        // 0x1c5e2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E30u;
        goto label_1c5e30;
    }
    ctx->pc = 0x1C5E28u;
    SET_GPR_U32(ctx, 31, 0x1C5E30u);
    ctx->pc = 0x1C5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E28u;
    // 0x1c5e2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5E28u, 0x1C5E30u)) {
        return;
    }
    ctx->pc = 0x1C5E30u;
label_1c5e30:
    // 0x1c5e30: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1c5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1c5e34:
    // 0x1c5e34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e38:
    // 0x1c5e38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c5e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e3c:
    // 0x1c5e3c: 0xc4630274  lwc1        $f3, 0x274($v1)
    ctx->pc = 0x1c5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c5e40:
    // 0x1c5e40: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c5e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c5e44:
    // 0x1c5e44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c5e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e48:
    // 0x1c5e48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c5e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e4c:
    // 0x1c5e4c: 0xc4c2027c  lwc1        $f2, 0x27C($a2)
    ctx->pc = 0x1c5e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5e50:
    // 0x1c5e50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5e54:
    // 0x1c5e54: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1c5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c5e58:
    // 0x1c5e58: 0xc4e00280  lwc1        $f0, 0x280($a3)
    ctx->pc = 0x1c5e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5e5c:
    // 0x1c5e5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5e60:
    // 0x1c5e60: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1c5e64:
    // 0x1c5e64: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1c5e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5e68:
    // 0x1c5e68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c5e6c:
    // 0x1c5e6c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c5e6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1c5e70:
    // 0x1c5e70: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c5e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c5e74:
    // 0x1c5e74: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1c5e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c5e78:
    // 0x1c5e78: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c5e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1c5e7c:
    // 0x1c5e7c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1c5e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1c5e80:
    // 0x1c5e80: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1c5e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1c5e84:
    // 0x1c5e84: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1c5e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1c5e88:
    // 0x1c5e88: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1c5e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1c5e8c:
    // 0x1c5e8c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1c5e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5e90:
    // 0x1c5e90: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1c5e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5e94:
    // 0x1c5e94: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1c5e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5e98:
    // 0x1c5e98: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1c5e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5e9c:
    // 0x1c5e9c: 0xc06cda0  jal         func_1B3680
label_1c5ea0:
    if (ctx->pc == 0x1C5EA0u) {
        ctx->pc = 0x1C5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E9Cu;
        // 0x1c5ea0: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EA4u;
        goto label_1c5ea4;
    }
    ctx->pc = 0x1C5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C5EA4u);
    ctx->pc = 0x1C5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E9Cu;
    // 0x1c5ea0: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C5E9Cu, 0x1C5EA4u)) {
        return;
    }
    ctx->pc = 0x1C5EA4u;
label_1c5ea4:
    // 0x1c5ea4: 0x8e4403b4  lw          $a0, 0x3B4($s2)
    ctx->pc = 0x1c5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1c5ea8:
    // 0x1c5ea8: 0xc06dc32  jal         func_1B70C8
label_1c5eac:
    if (ctx->pc == 0x1C5EACu) {
        ctx->pc = 0x1C5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EA8u;
        // 0x1c5eac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EB0u;
        goto label_1c5eb0;
    }
    ctx->pc = 0x1C5EA8u;
    SET_GPR_U32(ctx, 31, 0x1C5EB0u);
    ctx->pc = 0x1C5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EA8u;
    // 0x1c5eac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C5EA8u, 0x1C5EB0u)) {
        return;
    }
    ctx->pc = 0x1C5EB0u;
label_1c5eb0:
    // 0x1c5eb0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c5eb4:
    if (ctx->pc == 0x1C5EB4u) {
        ctx->pc = 0x1C5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EB0u;
        // 0x1c5eb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EB8u;
        goto label_1c5eb8;
    }
    ctx->pc = 0x1C5EB0u;
    {
        const bool branch_taken_0x1c5eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EB0u;
        // 0x1c5eb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5eb0) {
            ctx->pc = 0x1C5EE4u;
            goto label_1c5ee4;
        }
    }
    ctx->pc = 0x1C5EB8u;
label_1c5eb8:
    // 0x1c5eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c5ebc:
    // 0x1c5ebc: 0xc0718e6  jal         func_1C6398
label_1c5ec0:
    if (ctx->pc == 0x1C5EC0u) {
        ctx->pc = 0x1C5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EBCu;
        // 0x1c5ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EC4u;
        goto label_1c5ec4;
    }
    ctx->pc = 0x1C5EBCu;
    SET_GPR_U32(ctx, 31, 0x1C5EC4u);
    ctx->pc = 0x1C5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EBCu;
    // 0x1c5ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6398u, 0x1C5EBCu, 0x1C5EC4u)) {
        return;
    }
    ctx->pc = 0x1C5EC4u;
label_1c5ec4:
    // 0x1c5ec4: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
label_1c5ec8:
    if (ctx->pc == 0x1C5EC8u) {
        ctx->pc = 0x1C5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC4u;
        // 0x1c5ec8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ECCu;
        goto label_1c5ecc;
    }
    ctx->pc = 0x1C5EC4u;
    {
        const bool branch_taken_0x1c5ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC4u;
        // 0x1c5ec8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ec4) {
            ctx->pc = 0x1C6134u;
            goto label_1c6134;
        }
    }
    ctx->pc = 0x1C5ECCu;
label_1c5ecc:
    // 0x1c5ecc: 0x8e4603cc  lw          $a2, 0x3CC($s2)
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 972)));
label_1c5ed0:
    // 0x1c5ed0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c5ed4:
    // 0x1c5ed4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c5ed8:
    // 0x1c5ed8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c5edc:
    // 0x1c5edc: 0x60f809  jalr        $v1
label_1c5ee0:
    if (ctx->pc == 0x1C5EE0u) {
        ctx->pc = 0x1C5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EDCu;
        // 0x1c5ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EE4u;
        goto label_1c5ee4;
    }
    ctx->pc = 0x1C5EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C5EE4u);
        ctx->pc = 0x1C5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EDCu;
        // 0x1c5ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5EDCu, 0x1C5EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5EE4u;
label_1c5ee4:
    // 0x1c5ee4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c5ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c5ee8:
    // 0x1c5ee8: 0x26730044  addiu       $s3, $s3, 0x44
    ctx->pc = 0x1c5ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_1c5eec:
    // 0x1c5eec: 0x26b50044  addiu       $s5, $s5, 0x44
    ctx->pc = 0x1c5eecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
label_1c5ef0:
    // 0x1c5ef0: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1c5ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1c5ef4:
    // 0x1c5ef4: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1c5ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c5ef8:
    // 0x1c5ef8: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
label_1c5efc:
    if (ctx->pc == 0x1C5EFCu) {
        ctx->pc = 0x1C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF8u;
        // 0x1c5efc: 0x26310044  addiu       $s1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F00u;
        goto label_1c5f00;
    }
    ctx->pc = 0x1C5EF8u;
    {
        const bool branch_taken_0x1c5ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF8u;
        // 0x1c5efc: 0x26310044  addiu       $s1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef8) {
            ctx->pc = 0x1C5D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5d38;
        }
    }
    ctx->pc = 0x1C5F00u;
label_1c5f00:
    // 0x1c5f00: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1c5f04:
    if (ctx->pc == 0x1C5F04u) {
        ctx->pc = 0x1C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F00u;
        // 0x1c5f04: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F08u;
        goto label_1c5f08;
    }
    ctx->pc = 0x1C5F00u;
    {
        const bool branch_taken_0x1c5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F00u;
        // 0x1c5f04: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f00) {
            ctx->pc = 0x1C618Cu;
            goto label_1c618c;
        }
    }
    ctx->pc = 0x1C5F08u;
label_1c5f08:
    // 0x1c5f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f0c:
    // 0x1c5f0c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c5f10:
    // 0x1c5f10: 0xc0c493d  jal         func_3124F4
label_1c5f14:
    if (ctx->pc == 0x1C5F14u) {
        ctx->pc = 0x1C5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F10u;
        // 0x1c5f14: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F18u;
        goto label_1c5f18;
    }
    ctx->pc = 0x1C5F10u;
    SET_GPR_U32(ctx, 31, 0x1C5F18u);
    ctx->pc = 0x1C5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F10u;
    // 0x1c5f14: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5F10u, 0x1C5F18u)) {
        return;
    }
    ctx->pc = 0x1C5F18u;
label_1c5f18:
    // 0x1c5f18: 0x8e4303b8  lw          $v1, 0x3B8($s2)
    ctx->pc = 0x1c5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c5f1c:
    // 0x1c5f1c: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1c5f20:
    // 0x1c5f20: 0x2610ef88  addiu       $s0, $s0, -0x1078
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963080));
label_1c5f24:
    // 0x1c5f24: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1c5f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c5f28:
    // 0x1c5f28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1c5f2c:
    // 0x1c5f2c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1c5f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1c5f30:
    // 0x1c5f30: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1c5f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1c5f34:
    // 0x1c5f34: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1c5f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5f38:
    // 0x1c5f38: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1c5f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c5f3c:
    // 0x1c5f3c: 0x9fa40024  lwu         $a0, 0x24($sp)
    ctx->pc = 0x1c5f3cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1c5f40:
    // 0x1c5f40: 0x9fa20020  lwu         $v0, 0x20($sp)
    ctx->pc = 0x1c5f40u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5f44:
    // 0x1c5f44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c5f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1c5f48:
    // 0x1c5f48: 0xc06cdf0  jal         func_1B37C0
label_1c5f4c:
    if (ctx->pc == 0x1C5F4Cu) {
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F50u;
        goto label_1c5f50;
    }
    ctx->pc = 0x1C5F48u;
    SET_GPR_U32(ctx, 31, 0x1C5F50u);
    ctx->pc = 0x1C5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F48u;
    // 0x1c5f4c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1C5F48u, 0x1C5F50u)) {
        return;
    }
    ctx->pc = 0x1C5F50u;
label_1c5f50:
    // 0x1c5f50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c5f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1c5f54:
    // 0x1c5f54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c5f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1c5f58:
    // 0x1c5f58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1c5f5c:
    // 0x1c5f5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1c5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1c5f60:
    // 0x1c5f60: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1c5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1c5f64:
    // 0x1c5f64: 0x8e4203b4  lw          $v0, 0x3B4($s2)
    ctx->pc = 0x1c5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1c5f68:
    // 0x1c5f68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5f6c:
    // 0x1c5f6c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5f70:
    // 0x1c5f70: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1c5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5f74:
    // 0x1c5f74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c5f74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c5f78:
    // 0x1c5f78: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c5f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c5f7c:
    // 0x1c5f7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5f80:
    // 0x1c5f80: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c5f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1c5f84:
    // 0x1c5f84: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c5f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c5f88:
    // 0x1c5f88: 0xc093ab4  jal         func_24EAD0
label_1c5f8c:
    if (ctx->pc == 0x1C5F8Cu) {
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F90u;
        goto label_1c5f90;
    }
    ctx->pc = 0x1C5F88u;
    SET_GPR_U32(ctx, 31, 0x1C5F90u);
    ctx->pc = 0x1C5F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F88u;
    // 0x1c5f8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1C5F88u, 0x1C5F90u)) {
        return;
    }
    ctx->pc = 0x1C5F90u;
label_1c5f90:
    // 0x1c5f90: 0x8e4503b8  lw          $a1, 0x3B8($s2)
    ctx->pc = 0x1c5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c5f94:
    // 0x1c5f94: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x1c5f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c5f98:
    // 0x1c5f98: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c5f9c:
    // 0x1c5f9c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1c5f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5fa0:
    // 0x1c5fa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c5fa4:
    // 0x1c5fa4: 0x0  nop
    ctx->pc = 0x1c5fa4u;
    // NOP
label_1c5fa8:
    // 0x1c5fa8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1c5fac:
    if (ctx->pc == 0x1C5FACu) {
        ctx->pc = 0x1C5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FA8u;
        // 0x1c5fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FB0u;
        goto label_1c5fb0;
    }
    ctx->pc = 0x1C5FA8u;
    {
        const bool branch_taken_0x1c5fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FA8u;
        // 0x1c5fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fa8) {
            ctx->pc = 0x1C6010u;
            goto label_1c6010;
        }
    }
    ctx->pc = 0x1C5FB0u;
label_1c5fb0:
    // 0x1c5fb0: 0xc0718e6  jal         func_1C6398
label_1c5fb4:
    if (ctx->pc == 0x1C5FB4u) {
        ctx->pc = 0x1C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB0u;
        // 0x1c5fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FB8u;
        goto label_1c5fb8;
    }
    ctx->pc = 0x1C5FB0u;
    SET_GPR_U32(ctx, 31, 0x1C5FB8u);
    ctx->pc = 0x1C5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FB0u;
    // 0x1c5fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6398u, 0x1C5FB0u, 0x1C5FB8u)) {
        return;
    }
    ctx->pc = 0x1C5FB8u;
label_1c5fb8:
    // 0x1c5fb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1c5fbc:
    if (ctx->pc == 0x1C5FBCu) {
        ctx->pc = 0x1C5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB8u;
        // 0x1c5fbc: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FC0u;
        goto label_1c5fc0;
    }
    ctx->pc = 0x1C5FB8u;
    {
        const bool branch_taken_0x1c5fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB8u;
        // 0x1c5fbc: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fb8) {
            ctx->pc = 0x1C6010u;
            goto label_1c6010;
        }
    }
    ctx->pc = 0x1C5FC0u;
label_1c5fc0:
    // 0x1c5fc0: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c5fc4:
    // 0x1c5fc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5fc8:
    // 0x1c5fc8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c5fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c5fcc:
    // 0x1c5fcc: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1c5fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1c5fd0:
    // 0x1c5fd0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1c5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1c5fd4:
    // 0x1c5fd4: 0xac400290  sw          $zero, 0x290($v0)
    ctx->pc = 0x1c5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 0));
label_1c5fd8:
    // 0x1c5fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c5fdc:
    // 0x1c5fdc: 0xae4003bc  sw          $zero, 0x3BC($s2)
    ctx->pc = 0x1c5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 0));
label_1c5fe0:
    // 0x1c5fe0: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c5fe4:
    // 0x1c5fe4: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x1c5fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1c5fe8:
    // 0x1c5fe8: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x1c5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_1c5fec:
    // 0x1c5fec: 0xac45028c  sw          $a1, 0x28C($v0)
    ctx->pc = 0x1c5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 652), GPR_U32(ctx, 5));
label_1c5ff0:
    // 0x1c5ff0: 0xc071906  jal         func_1C6418
label_1c5ff4:
    if (ctx->pc == 0x1C5FF4u) {
        ctx->pc = 0x1C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF0u;
        // 0x1c5ff4: 0xae4603b8  sw          $a2, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FF8u;
        goto label_1c5ff8;
    }
    ctx->pc = 0x1C5FF0u;
    SET_GPR_U32(ctx, 31, 0x1C5FF8u);
    ctx->pc = 0x1C5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FF0u;
    // 0x1c5ff4: 0xae4603b8  sw          $a2, 0x3B8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6418u, 0x1C5FF0u, 0x1C5FF8u)) {
        return;
    }
    ctx->pc = 0x1C5FF8u;
label_1c5ff8:
    // 0x1c5ff8: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
label_1c5ffc:
    if (ctx->pc == 0x1C5FFCu) {
        ctx->pc = 0x1C5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF8u;
        // 0x1c5ffc: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6000u;
        goto label_1c6000;
    }
    ctx->pc = 0x1C5FF8u;
    {
        const bool branch_taken_0x1c5ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ff8) {
            ctx->pc = 0x1C5FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5FF8u;
            // 0x1c5ffc: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C618Cu;
            goto label_1c618c;
        }
    }
    ctx->pc = 0x1C6000u;
label_1c6000:
    // 0x1c6000: 0x8e4603cc  lw          $a2, 0x3CC($s2)
    ctx->pc = 0x1c6000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 972)));
label_1c6004:
    // 0x1c6004: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1c6008:
    if (ctx->pc == 0x1C6008u) {
        ctx->pc = 0x1C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6004u;
        // 0x1c6008: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C600Cu;
        goto label_1c600c;
    }
    ctx->pc = 0x1C6004u;
    {
        const bool branch_taken_0x1c6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6004u;
        // 0x1c6008: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6004) {
            ctx->pc = 0x1C6078u;
            goto label_1c6078;
        }
    }
    ctx->pc = 0x1C600Cu;
label_1c600c:
    // 0x1c600c: 0x0  nop
    ctx->pc = 0x1c600cu;
    // NOP
label_1c6010:
    // 0x1c6010: 0x8e4203b4  lw          $v0, 0x3B4($s2)
    ctx->pc = 0x1c6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1c6014:
    // 0x1c6014: 0x3c014343  lui         $at, 0x4343
    ctx->pc = 0x1c6014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17219 << 16));
label_1c6018:
    // 0x1c6018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c601c:
    // 0x1c601c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6020:
    // 0x1c6020: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6024:
    // 0x1c6024: 0x0  nop
    ctx->pc = 0x1c6024u;
    // NOP
label_1c6028:
    // 0x1c6028: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1c602c:
    if (ctx->pc == 0x1C602Cu) {
        ctx->pc = 0x1C602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6028u;
        // 0x1c602c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6030u;
        goto label_1c6030;
    }
    ctx->pc = 0x1C6028u;
    {
        const bool branch_taken_0x1c6028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6028u;
        // 0x1c602c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6028) {
            ctx->pc = 0x1C6070u;
            goto label_1c6070;
        }
    }
    ctx->pc = 0x1C6030u;
label_1c6030:
    // 0x1c6030: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c6030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c6034:
    // 0x1c6034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6038:
    // 0x1c6038: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1c6038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c603c:
    // 0x1c603c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1c603cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c6040:
    // 0x1c6040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6044:
    // 0x1c6044: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1c6048:
    // 0x1c6048: 0xac60028c  sw          $zero, 0x28C($v1)
    ctx->pc = 0x1c6048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 652), GPR_U32(ctx, 0));
label_1c604c:
    // 0x1c604c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c604cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c6050:
    // 0x1c6050: 0xac400290  sw          $zero, 0x290($v0)
    ctx->pc = 0x1c6050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 0));
label_1c6054:
    // 0x1c6054: 0xae4003bc  sw          $zero, 0x3BC($s2)
    ctx->pc = 0x1c6054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 0));
label_1c6058:
    // 0x1c6058: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c605c:
    // 0x1c605c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1c605cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c6060:
    // 0x1c6060: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c6064:
    // 0x1c6064: 0xac460298  sw          $a2, 0x298($v0)
    ctx->pc = 0x1c6064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 6));
label_1c6068:
    // 0x1c6068: 0x10000038  b           . + 4 + (0x38 << 2)
label_1c606c:
    if (ctx->pc == 0x1C606Cu) {
        ctx->pc = 0x1C606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6068u;
        // 0x1c606c: 0xae4703b8  sw          $a3, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6070u;
        goto label_1c6070;
    }
    ctx->pc = 0x1C6068u;
    {
        const bool branch_taken_0x1c6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6068u;
        // 0x1c606c: 0xae4703b8  sw          $a3, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6068) {
            ctx->pc = 0x1C614Cu;
            goto label_1c614c;
        }
    }
    ctx->pc = 0x1C6070u;
label_1c6070:
    // 0x1c6070: 0x8e4603cc  lw          $a2, 0x3CC($s2)
    ctx->pc = 0x1c6070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 972)));
label_1c6074:
    // 0x1c6074: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c6078:
    // 0x1c6078: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c607c:
    // 0x1c607c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c607cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c6080:
    // 0x1c6080: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c6084:
    // 0x1c6084: 0x60f809  jalr        $v1
label_1c6088:
    if (ctx->pc == 0x1C6088u) {
        ctx->pc = 0x1C6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6084u;
        // 0x1c6088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C608Cu;
        goto label_1c608c;
    }
    ctx->pc = 0x1C6084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C608Cu);
        ctx->pc = 0x1C6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6084u;
        // 0x1c6088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6084u, 0x1C608Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C608Cu;
label_1c608c:
    // 0x1c608c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1c6090:
    if (ctx->pc == 0x1C6090u) {
        ctx->pc = 0x1C6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C608Cu;
        // 0x1c6090: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6094u;
        goto label_1c6094;
    }
    ctx->pc = 0x1C608Cu;
    {
        const bool branch_taken_0x1c608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C608Cu;
        // 0x1c6090: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c608c) {
            ctx->pc = 0x1C618Cu;
            goto label_1c618c;
        }
    }
    ctx->pc = 0x1C6094u;
label_1c6094:
    // 0x1c6094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6098:
    // 0x1c6098: 0x12c40004  beq         $s6, $a0, . + 4 + (0x4 << 2)
label_1c609c:
    if (ctx->pc == 0x1C609Cu) {
        ctx->pc = 0x1C609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6098u;
        // 0x1c609c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C60A0u;
        goto label_1c60a0;
    }
    ctx->pc = 0x1C6098u;
    {
        const bool branch_taken_0x1c6098 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6098u;
        // 0x1c609c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6098) {
            ctx->pc = 0x1C60ACu;
            goto label_1c60ac;
        }
    }
    ctx->pc = 0x1C60A0u;
label_1c60a0:
    // 0x1c60a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c60a4:
    // 0x1c60a4: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
label_1c60a8:
    if (ctx->pc == 0x1C60A8u) {
        ctx->pc = 0x1C60ACu;
        goto label_1c60ac;
    }
    ctx->pc = 0x1C60A4u;
    {
        const bool branch_taken_0x1c60a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c60a4) {
            ctx->pc = 0x1C60C8u;
            goto label_1c60c8;
        }
    }
    ctx->pc = 0x1C60ACu;
label_1c60ac:
    // 0x1c60ac: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c60acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c60b0:
    // 0x1c60b0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1c60b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1c60b4:
    // 0x1c60b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c60b8:
    if (ctx->pc == 0x1C60B8u) {
        ctx->pc = 0x1C60BCu;
        goto label_1c60bc;
    }
    ctx->pc = 0x1C60B4u;
    {
        const bool branch_taken_0x1c60b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c60b4) {
            ctx->pc = 0x1C60C8u;
            goto label_1c60c8;
        }
    }
    ctx->pc = 0x1C60BCu;
label_1c60bc:
    // 0x1c60bc: 0x8e4203c8  lw          $v0, 0x3C8($s2)
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
label_1c60c0:
    // 0x1c60c0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c60c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c60c4:
    // 0x1c60c4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1c60c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_1c60c8:
    // 0x1c60c8: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_1c60cc:
    if (ctx->pc == 0x1C60CCu) {
        ctx->pc = 0x1C60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60C8u;
        // 0x1c60cc: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C60D0u;
        goto label_1c60d0;
    }
    ctx->pc = 0x1C60C8u;
    {
        const bool branch_taken_0x1c60c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60C8u;
        // 0x1c60cc: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60c8) {
            ctx->pc = 0x1C616Cu;
            goto label_1c616c;
        }
    }
    ctx->pc = 0x1C60D0u;
label_1c60d0:
    // 0x1c60d0: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c60d4:
    // 0x1c60d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c60d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c60d8:
    // 0x1c60d8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1c60d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c60dc:
    // 0x1c60dc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1c60dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c60e0:
    // 0x1c60e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c60e4:
    // 0x1c60e4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1c60e8:
    // 0x1c60e8: 0xac60028c  sw          $zero, 0x28C($v1)
    ctx->pc = 0x1c60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 652), GPR_U32(ctx, 0));
label_1c60ec:
    // 0x1c60ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c60ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c60f0:
    // 0x1c60f0: 0xac400290  sw          $zero, 0x290($v0)
    ctx->pc = 0x1c60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 0));
label_1c60f4:
    // 0x1c60f4: 0xae4003bc  sw          $zero, 0x3BC($s2)
    ctx->pc = 0x1c60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 0));
label_1c60f8:
    // 0x1c60f8: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1c60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
label_1c60fc:
    // 0x1c60fc: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1c60fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c6100:
    // 0x1c6100: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1c6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c6104:
    // 0x1c6104: 0xac500298  sw          $s0, 0x298($v0)
    ctx->pc = 0x1c6104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 16));
label_1c6108:
    // 0x1c6108: 0xae4703b8  sw          $a3, 0x3B8($s2)
    ctx->pc = 0x1c6108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 7));
label_1c610c:
    // 0x1c610c: 0x8e4603cc  lw          $a2, 0x3CC($s2)
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 972)));
label_1c6110:
    // 0x1c6110: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c6110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c6114:
    // 0x1c6114: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c6114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c6118:
    // 0x1c6118: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c611c:
    // 0x1c611c: 0x60f809  jalr        $v1
label_1c6120:
    if (ctx->pc == 0x1C6120u) {
        ctx->pc = 0x1C6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C611Cu;
        // 0x1c6120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6124u;
        goto label_1c6124;
    }
    ctx->pc = 0x1C611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6124u);
        ctx->pc = 0x1C6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C611Cu;
        // 0x1c6120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C611Cu, 0x1C6124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6124u;
label_1c6124:
    // 0x1c6124: 0x12d00020  beq         $s6, $s0, . + 4 + (0x20 << 2)
label_1c6128:
    if (ctx->pc == 0x1C6128u) {
        ctx->pc = 0x1C6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6124u;
        // 0x1c6128: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C612Cu;
        goto label_1c612c;
    }
    ctx->pc = 0x1C6124u;
    {
        const bool branch_taken_0x1c6124 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6124u;
        // 0x1c6128: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6124) {
            ctx->pc = 0x1C61A8u;
            goto label_1c61a8;
        }
    }
    ctx->pc = 0x1C612Cu;
label_1c612c:
    // 0x1c612c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1c6130:
    if (ctx->pc == 0x1C6130u) {
        ctx->pc = 0x1C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C612Cu;
        // 0x1c6130: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6134u;
        goto label_1c6134;
    }
    ctx->pc = 0x1C612Cu;
    {
        const bool branch_taken_0x1c612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C612Cu;
        // 0x1c6130: 0x8e4203c8  lw          $v0, 0x3C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c612c) {
            ctx->pc = 0x1C618Cu;
            goto label_1c618c;
        }
    }
    ctx->pc = 0x1C6134u;
label_1c6134:
    // 0x1c6134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6138:
    // 0x1c6138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c613c:
    // 0x1c613c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c613cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c6140:
    // 0x1c6140: 0xae4203bc  sw          $v0, 0x3BC($s2)
    ctx->pc = 0x1c6140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 2));
label_1c6144:
    // 0x1c6144: 0xae5403b8  sw          $s4, 0x3B8($s2)
    ctx->pc = 0x1c6144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 20));
label_1c6148:
    // 0x1c6148: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1c6148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1c614c:
    // 0x1c614c: 0x8e4603cc  lw          $a2, 0x3CC($s2)
    ctx->pc = 0x1c614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 972)));
label_1c6150:
    // 0x1c6150: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c6150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c6154:
    // 0x1c6154: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c6154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c6158:
    // 0x1c6158: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c6158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c615c:
    // 0x1c615c: 0x60f809  jalr        $v1
label_1c6160:
    if (ctx->pc == 0x1C6160u) {
        ctx->pc = 0x1C6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C615Cu;
        // 0x1c6160: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6164u;
        goto label_1c6164;
    }
    ctx->pc = 0x1C615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6164u);
        ctx->pc = 0x1C6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C615Cu;
        // 0x1c6160: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C615Cu, 0x1C6164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6164u;
label_1c6164:
    // 0x1c6164: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c6168:
    if (ctx->pc == 0x1C6168u) {
        ctx->pc = 0x1C6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6164u;
        // 0x1c6168: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C616Cu;
        goto label_1c616c;
    }
    ctx->pc = 0x1C6164u;
    {
        const bool branch_taken_0x1c6164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6164u;
        // 0x1c6168: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6164) {
            ctx->pc = 0x1C61A8u;
            goto label_1c61a8;
        }
    }
    ctx->pc = 0x1C616Cu;
label_1c616c:
    // 0x1c616c: 0x8e4203c8  lw          $v0, 0x3C8($s2)
    ctx->pc = 0x1c616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
label_1c6170:
    // 0x1c6170: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1c6174:
    if (ctx->pc == 0x1C6174u) {
        ctx->pc = 0x1C6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6170u;
        // 0x1c6174: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6178u;
        goto label_1c6178;
    }
    ctx->pc = 0x1C6170u;
    {
        const bool branch_taken_0x1c6170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6170u;
        // 0x1c6174: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6170) {
            ctx->pc = 0x1C61A8u;
            goto label_1c61a8;
        }
    }
    ctx->pc = 0x1C6178u;
label_1c6178:
    // 0x1c6178: 0x8e4403b4  lw          $a0, 0x3B4($s2)
    ctx->pc = 0x1c6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1c617c:
    // 0x1c617c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c617cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c6180:
    // 0x1c6180: 0xc06dbc8  jal         func_1B6F20
label_1c6184:
    if (ctx->pc == 0x1C6184u) {
        ctx->pc = 0x1C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6180u;
        // 0x1c6184: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6188u;
        goto label_1c6188;
    }
    ctx->pc = 0x1C6180u;
    SET_GPR_U32(ctx, 31, 0x1C6188u);
    ctx->pc = 0x1C6184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6180u;
    // 0x1c6184: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1C6180u, 0x1C6188u)) {
        return;
    }
    ctx->pc = 0x1C6188u;
label_1c6188:
    // 0x1c6188: 0x8e4203c8  lw          $v0, 0x3C8($s2)
    ctx->pc = 0x1c6188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
label_1c618c:
    // 0x1c618c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1c6190:
    if (ctx->pc == 0x1C6190u) {
        ctx->pc = 0x1C6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618Cu;
        // 0x1c6190: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6194u;
        goto label_1c6194;
    }
    ctx->pc = 0x1C618Cu;
    {
        const bool branch_taken_0x1c618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618Cu;
        // 0x1c6190: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c618c) {
            ctx->pc = 0x1C61A8u;
            goto label_1c61a8;
        }
    }
    ctx->pc = 0x1C6194u;
label_1c6194:
    // 0x1c6194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c6198:
    // 0x1c6198: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c6198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c619c:
    // 0x1c619c: 0xc06ba6c  jal         func_1AE9B0
label_1c61a0:
    if (ctx->pc == 0x1C61A0u) {
        ctx->pc = 0x1C61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C619Cu;
        // 0x1c61a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61A4u;
        goto label_1c61a4;
    }
    ctx->pc = 0x1C619Cu;
    SET_GPR_U32(ctx, 31, 0x1C61A4u);
    ctx->pc = 0x1C61A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C619Cu;
    // 0x1c61a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C619Cu, 0x1C61A4u)) {
        return;
    }
    ctx->pc = 0x1C61A4u;
label_1c61a4:
    // 0x1c61a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c61a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c61a8:
    // 0x1c61a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c61a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c61ac:
    // 0x1c61ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c61acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c61b0:
    // 0x1c61b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c61b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c61b4:
    // 0x1c61b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c61b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c61b8:
    // 0x1c61b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c61b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c61bc:
    // 0x1c61bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c61bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c61c0:
    // 0x1c61c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c61c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c61c4:
    // 0x1c61c4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c61c8:
    // 0x1c61c8: 0x3e00008  jr          $ra
label_1c61cc:
    if (ctx->pc == 0x1C61CCu) {
        ctx->pc = 0x1C61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61C8u;
        // 0x1c61cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61D0u;
        goto label_fallthrough_0x1c61c8;
    }
    ctx->pc = 0x1C61C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61C8u;
        // 0x1c61cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c61c8:
    ctx->pc = 0x1C61D0u;
}
