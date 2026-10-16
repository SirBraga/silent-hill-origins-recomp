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

// Function: sub_00209C68
// Address: 0x209c68 - 0x20a1d8
void sub_00209C68_0x209c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209C68_0x209c68");
#endif

    switch (ctx->pc) {
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        case 0x209cb4u: goto label_209cb4;
        case 0x209cb8u: goto label_209cb8;
        case 0x209cbcu: goto label_209cbc;
        case 0x209cc0u: goto label_209cc0;
        case 0x209cc4u: goto label_209cc4;
        case 0x209cc8u: goto label_209cc8;
        case 0x209cccu: goto label_209ccc;
        case 0x209cd0u: goto label_209cd0;
        case 0x209cd4u: goto label_209cd4;
        case 0x209cd8u: goto label_209cd8;
        case 0x209cdcu: goto label_209cdc;
        case 0x209ce0u: goto label_209ce0;
        case 0x209ce4u: goto label_209ce4;
        case 0x209ce8u: goto label_209ce8;
        case 0x209cecu: goto label_209cec;
        case 0x209cf0u: goto label_209cf0;
        case 0x209cf4u: goto label_209cf4;
        case 0x209cf8u: goto label_209cf8;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d00u: goto label_209d00;
        case 0x209d04u: goto label_209d04;
        case 0x209d08u: goto label_209d08;
        case 0x209d0cu: goto label_209d0c;
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        case 0x209da8u: goto label_209da8;
        case 0x209dacu: goto label_209dac;
        case 0x209db0u: goto label_209db0;
        case 0x209db4u: goto label_209db4;
        case 0x209db8u: goto label_209db8;
        case 0x209dbcu: goto label_209dbc;
        case 0x209dc0u: goto label_209dc0;
        case 0x209dc4u: goto label_209dc4;
        case 0x209dc8u: goto label_209dc8;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd0u: goto label_209dd0;
        case 0x209dd4u: goto label_209dd4;
        case 0x209dd8u: goto label_209dd8;
        case 0x209ddcu: goto label_209ddc;
        case 0x209de0u: goto label_209de0;
        case 0x209de4u: goto label_209de4;
        case 0x209de8u: goto label_209de8;
        case 0x209decu: goto label_209dec;
        case 0x209df0u: goto label_209df0;
        case 0x209df4u: goto label_209df4;
        case 0x209df8u: goto label_209df8;
        case 0x209dfcu: goto label_209dfc;
        case 0x209e00u: goto label_209e00;
        case 0x209e04u: goto label_209e04;
        case 0x209e08u: goto label_209e08;
        case 0x209e0cu: goto label_209e0c;
        case 0x209e10u: goto label_209e10;
        case 0x209e14u: goto label_209e14;
        case 0x209e18u: goto label_209e18;
        case 0x209e1cu: goto label_209e1c;
        case 0x209e20u: goto label_209e20;
        case 0x209e24u: goto label_209e24;
        case 0x209e28u: goto label_209e28;
        case 0x209e2cu: goto label_209e2c;
        case 0x209e30u: goto label_209e30;
        case 0x209e34u: goto label_209e34;
        case 0x209e38u: goto label_209e38;
        case 0x209e3cu: goto label_209e3c;
        case 0x209e40u: goto label_209e40;
        case 0x209e44u: goto label_209e44;
        case 0x209e48u: goto label_209e48;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e50u: goto label_209e50;
        case 0x209e54u: goto label_209e54;
        case 0x209e58u: goto label_209e58;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e60u: goto label_209e60;
        case 0x209e64u: goto label_209e64;
        case 0x209e68u: goto label_209e68;
        case 0x209e6cu: goto label_209e6c;
        case 0x209e70u: goto label_209e70;
        case 0x209e74u: goto label_209e74;
        case 0x209e78u: goto label_209e78;
        case 0x209e7cu: goto label_209e7c;
        case 0x209e80u: goto label_209e80;
        case 0x209e84u: goto label_209e84;
        case 0x209e88u: goto label_209e88;
        case 0x209e8cu: goto label_209e8c;
        case 0x209e90u: goto label_209e90;
        case 0x209e94u: goto label_209e94;
        case 0x209e98u: goto label_209e98;
        case 0x209e9cu: goto label_209e9c;
        case 0x209ea0u: goto label_209ea0;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eacu: goto label_209eac;
        case 0x209eb0u: goto label_209eb0;
        case 0x209eb4u: goto label_209eb4;
        case 0x209eb8u: goto label_209eb8;
        case 0x209ebcu: goto label_209ebc;
        case 0x209ec0u: goto label_209ec0;
        case 0x209ec4u: goto label_209ec4;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eccu: goto label_209ecc;
        case 0x209ed0u: goto label_209ed0;
        case 0x209ed4u: goto label_209ed4;
        case 0x209ed8u: goto label_209ed8;
        case 0x209edcu: goto label_209edc;
        case 0x209ee0u: goto label_209ee0;
        case 0x209ee4u: goto label_209ee4;
        case 0x209ee8u: goto label_209ee8;
        case 0x209eecu: goto label_209eec;
        case 0x209ef0u: goto label_209ef0;
        case 0x209ef4u: goto label_209ef4;
        case 0x209ef8u: goto label_209ef8;
        case 0x209efcu: goto label_209efc;
        case 0x209f00u: goto label_209f00;
        case 0x209f04u: goto label_209f04;
        case 0x209f08u: goto label_209f08;
        case 0x209f0cu: goto label_209f0c;
        case 0x209f10u: goto label_209f10;
        case 0x209f14u: goto label_209f14;
        case 0x209f18u: goto label_209f18;
        case 0x209f1cu: goto label_209f1c;
        case 0x209f20u: goto label_209f20;
        case 0x209f24u: goto label_209f24;
        case 0x209f28u: goto label_209f28;
        case 0x209f2cu: goto label_209f2c;
        case 0x209f30u: goto label_209f30;
        case 0x209f34u: goto label_209f34;
        case 0x209f38u: goto label_209f38;
        case 0x209f3cu: goto label_209f3c;
        case 0x209f40u: goto label_209f40;
        case 0x209f44u: goto label_209f44;
        case 0x209f48u: goto label_209f48;
        case 0x209f4cu: goto label_209f4c;
        case 0x209f50u: goto label_209f50;
        case 0x209f54u: goto label_209f54;
        case 0x209f58u: goto label_209f58;
        case 0x209f5cu: goto label_209f5c;
        case 0x209f60u: goto label_209f60;
        case 0x209f64u: goto label_209f64;
        case 0x209f68u: goto label_209f68;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f70u: goto label_209f70;
        case 0x209f74u: goto label_209f74;
        case 0x209f78u: goto label_209f78;
        case 0x209f7cu: goto label_209f7c;
        case 0x209f80u: goto label_209f80;
        case 0x209f84u: goto label_209f84;
        case 0x209f88u: goto label_209f88;
        case 0x209f8cu: goto label_209f8c;
        case 0x209f90u: goto label_209f90;
        case 0x209f94u: goto label_209f94;
        case 0x209f98u: goto label_209f98;
        case 0x209f9cu: goto label_209f9c;
        case 0x209fa0u: goto label_209fa0;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fa8u: goto label_209fa8;
        case 0x209facu: goto label_209fac;
        case 0x209fb0u: goto label_209fb0;
        case 0x209fb4u: goto label_209fb4;
        case 0x209fb8u: goto label_209fb8;
        case 0x209fbcu: goto label_209fbc;
        case 0x209fc0u: goto label_209fc0;
        case 0x209fc4u: goto label_209fc4;
        case 0x209fc8u: goto label_209fc8;
        case 0x209fccu: goto label_209fcc;
        case 0x209fd0u: goto label_209fd0;
        case 0x209fd4u: goto label_209fd4;
        case 0x209fd8u: goto label_209fd8;
        case 0x209fdcu: goto label_209fdc;
        case 0x209fe0u: goto label_209fe0;
        case 0x209fe4u: goto label_209fe4;
        case 0x209fe8u: goto label_209fe8;
        case 0x209fecu: goto label_209fec;
        case 0x209ff0u: goto label_209ff0;
        case 0x209ff4u: goto label_209ff4;
        case 0x209ff8u: goto label_209ff8;
        case 0x209ffcu: goto label_209ffc;
        case 0x20a000u: goto label_20a000;
        case 0x20a004u: goto label_20a004;
        case 0x20a008u: goto label_20a008;
        case 0x20a00cu: goto label_20a00c;
        case 0x20a010u: goto label_20a010;
        case 0x20a014u: goto label_20a014;
        case 0x20a018u: goto label_20a018;
        case 0x20a01cu: goto label_20a01c;
        case 0x20a020u: goto label_20a020;
        case 0x20a024u: goto label_20a024;
        case 0x20a028u: goto label_20a028;
        case 0x20a02cu: goto label_20a02c;
        case 0x20a030u: goto label_20a030;
        case 0x20a034u: goto label_20a034;
        case 0x20a038u: goto label_20a038;
        case 0x20a03cu: goto label_20a03c;
        case 0x20a040u: goto label_20a040;
        case 0x20a044u: goto label_20a044;
        case 0x20a048u: goto label_20a048;
        case 0x20a04cu: goto label_20a04c;
        case 0x20a050u: goto label_20a050;
        case 0x20a054u: goto label_20a054;
        case 0x20a058u: goto label_20a058;
        case 0x20a05cu: goto label_20a05c;
        case 0x20a060u: goto label_20a060;
        case 0x20a064u: goto label_20a064;
        case 0x20a068u: goto label_20a068;
        case 0x20a06cu: goto label_20a06c;
        case 0x20a070u: goto label_20a070;
        case 0x20a074u: goto label_20a074;
        case 0x20a078u: goto label_20a078;
        case 0x20a07cu: goto label_20a07c;
        case 0x20a080u: goto label_20a080;
        case 0x20a084u: goto label_20a084;
        case 0x20a088u: goto label_20a088;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a090u: goto label_20a090;
        case 0x20a094u: goto label_20a094;
        case 0x20a098u: goto label_20a098;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0a0u: goto label_20a0a0;
        case 0x20a0a4u: goto label_20a0a4;
        case 0x20a0a8u: goto label_20a0a8;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b0u: goto label_20a0b0;
        case 0x20a0b4u: goto label_20a0b4;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0bcu: goto label_20a0bc;
        case 0x20a0c0u: goto label_20a0c0;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0c8u: goto label_20a0c8;
        case 0x20a0ccu: goto label_20a0cc;
        case 0x20a0d0u: goto label_20a0d0;
        case 0x20a0d4u: goto label_20a0d4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0dcu: goto label_20a0dc;
        case 0x20a0e0u: goto label_20a0e0;
        case 0x20a0e4u: goto label_20a0e4;
        case 0x20a0e8u: goto label_20a0e8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0f0u: goto label_20a0f0;
        case 0x20a0f4u: goto label_20a0f4;
        case 0x20a0f8u: goto label_20a0f8;
        case 0x20a0fcu: goto label_20a0fc;
        case 0x20a100u: goto label_20a100;
        case 0x20a104u: goto label_20a104;
        case 0x20a108u: goto label_20a108;
        case 0x20a10cu: goto label_20a10c;
        case 0x20a110u: goto label_20a110;
        case 0x20a114u: goto label_20a114;
        case 0x20a118u: goto label_20a118;
        case 0x20a11cu: goto label_20a11c;
        case 0x20a120u: goto label_20a120;
        case 0x20a124u: goto label_20a124;
        case 0x20a128u: goto label_20a128;
        case 0x20a12cu: goto label_20a12c;
        case 0x20a130u: goto label_20a130;
        case 0x20a134u: goto label_20a134;
        case 0x20a138u: goto label_20a138;
        case 0x20a13cu: goto label_20a13c;
        case 0x20a140u: goto label_20a140;
        case 0x20a144u: goto label_20a144;
        case 0x20a148u: goto label_20a148;
        case 0x20a14cu: goto label_20a14c;
        case 0x20a150u: goto label_20a150;
        case 0x20a154u: goto label_20a154;
        case 0x20a158u: goto label_20a158;
        case 0x20a15cu: goto label_20a15c;
        case 0x20a160u: goto label_20a160;
        case 0x20a164u: goto label_20a164;
        case 0x20a168u: goto label_20a168;
        case 0x20a16cu: goto label_20a16c;
        case 0x20a170u: goto label_20a170;
        case 0x20a174u: goto label_20a174;
        case 0x20a178u: goto label_20a178;
        case 0x20a17cu: goto label_20a17c;
        case 0x20a180u: goto label_20a180;
        case 0x20a184u: goto label_20a184;
        case 0x20a188u: goto label_20a188;
        case 0x20a18cu: goto label_20a18c;
        case 0x20a190u: goto label_20a190;
        case 0x20a194u: goto label_20a194;
        case 0x20a198u: goto label_20a198;
        case 0x20a19cu: goto label_20a19c;
        case 0x20a1a0u: goto label_20a1a0;
        case 0x20a1a4u: goto label_20a1a4;
        case 0x20a1a8u: goto label_20a1a8;
        case 0x20a1acu: goto label_20a1ac;
        case 0x20a1b0u: goto label_20a1b0;
        case 0x20a1b4u: goto label_20a1b4;
        case 0x20a1b8u: goto label_20a1b8;
        case 0x20a1bcu: goto label_20a1bc;
        case 0x20a1c0u: goto label_20a1c0;
        case 0x20a1c4u: goto label_20a1c4;
        case 0x20a1c8u: goto label_20a1c8;
        case 0x20a1ccu: goto label_20a1cc;
        case 0x20a1d0u: goto label_20a1d0;
        case 0x20a1d4u: goto label_20a1d4;
        default: break;
    }

    ctx->pc = 0x209c68u;

label_209c68:
    // 0x209c68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x209c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_209c6c:
    // 0x209c6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x209c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_209c70:
    // 0x209c70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x209c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_209c74:
    // 0x209c74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209c78:
    // 0x209c78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x209c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_209c7c:
    // 0x209c7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x209c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_209c80:
    // 0x209c80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x209c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_209c84:
    // 0x209c84: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x209c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_209c88:
    // 0x209c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209c8c:
    // 0x209c8c: 0x0  nop
    ctx->pc = 0x209c8cu;
    // NOP
label_209c90:
    // 0x209c90: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_209c94:
    // 0x209c94: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_209c98:
    if (ctx->pc == 0x209C98u) {
        ctx->pc = 0x209C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C94u;
        // 0x209c98: 0x8e2301a0  lw          $v1, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C9Cu;
        goto label_209c9c;
    }
    ctx->pc = 0x209C94u;
    {
        const bool branch_taken_0x209c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209c94) {
            ctx->pc = 0x209C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209C94u;
            // 0x209c98: 0x8e2301a0  lw          $v1, 0x1A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209D7Cu;
            goto label_209d7c;
        }
    }
    ctx->pc = 0x209C9Cu;
label_209c9c:
    // 0x209c9c: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x209c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_209ca0:
    // 0x209ca0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_209ca4:
    // 0x209ca4: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_209ca8:
    if (ctx->pc == 0x209CA8u) {
        ctx->pc = 0x209CACu;
        goto label_209cac;
    }
    ctx->pc = 0x209CA4u;
    {
        const bool branch_taken_0x209ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209ca4) {
            ctx->pc = 0x209D68u;
            goto label_209d68;
        }
    }
    ctx->pc = 0x209CACu;
label_209cac:
    // 0x209cac: 0x8e330018  lw          $s3, 0x18($s1)
    ctx->pc = 0x209cacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_209cb0:
    // 0x209cb0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x209cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_209cb4:
    // 0x209cb4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_209cb8:
    if (ctx->pc == 0x209CB8u) {
        ctx->pc = 0x209CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CB4u;
        // 0x209cb8: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CBCu;
        goto label_209cbc;
    }
    ctx->pc = 0x209CB4u;
    {
        const bool branch_taken_0x209cb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CB4u;
        // 0x209cb8: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cb4) {
            ctx->pc = 0x209CD8u;
            goto label_209cd8;
        }
    }
    ctx->pc = 0x209CBCu;
label_209cbc:
    // 0x209cbc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x209cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_209cc0:
    // 0x209cc0: 0x40f809  jalr        $v0
label_209cc4:
    if (ctx->pc == 0x209CC4u) {
        ctx->pc = 0x209CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC0u;
        // 0x209cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CC8u;
        goto label_209cc8;
    }
    ctx->pc = 0x209CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209CC8u);
        ctx->pc = 0x209CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC0u;
        // 0x209cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CC0u, 0x209CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209CC8u;
label_209cc8:
    // 0x209cc8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_209ccc:
    if (ctx->pc == 0x209CCCu) {
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC8u;
        // 0x209ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CD0u;
        goto label_209cd0;
    }
    ctx->pc = 0x209CC8u;
    {
        const bool branch_taken_0x209cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC8u;
        // 0x209ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cc8) {
            ctx->pc = 0x209D70u;
            goto label_209d70;
        }
    }
    ctx->pc = 0x209CD0u;
label_209cd0:
    // 0x209cd0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x209cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209cd4:
    // 0x209cd4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x209cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_209cd8:
    // 0x209cd8: 0x92550000  lbu         $s5, 0x0($s2)
    ctx->pc = 0x209cd8u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_209cdc:
    // 0x209cdc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_209ce0:
    // 0x209ce0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_209ce4:
    if (ctx->pc == 0x209CE4u) {
        ctx->pc = 0x209CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE0u;
        // 0x209ce4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CE8u;
        goto label_209ce8;
    }
    ctx->pc = 0x209CE0u;
    {
        const bool branch_taken_0x209ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE0u;
        // 0x209ce4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ce0) {
            ctx->pc = 0x209D08u;
            goto label_209d08;
        }
    }
    ctx->pc = 0x209CE8u;
label_209ce8:
    // 0x209ce8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x209ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_209cec:
    // 0x209cec: 0x40f809  jalr        $v0
label_209cf0:
    if (ctx->pc == 0x209CF0u) {
        ctx->pc = 0x209CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CECu;
        // 0x209cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CF4u;
        goto label_209cf4;
    }
    ctx->pc = 0x209CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209CF4u);
        ctx->pc = 0x209CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CECu;
        // 0x209cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CECu, 0x209CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209CF4u;
label_209cf4:
    // 0x209cf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_209cf8:
    if (ctx->pc == 0x209CF8u) {
        ctx->pc = 0x209CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CF4u;
        // 0x209cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CFCu;
        goto label_209cfc;
    }
    ctx->pc = 0x209CF4u;
    {
        const bool branch_taken_0x209cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CF4u;
        // 0x209cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cf4) {
            ctx->pc = 0x209D70u;
            goto label_209d70;
        }
    }
    ctx->pc = 0x209CFCu;
label_209cfc:
    // 0x209cfc: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x209cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209d00:
    // 0x209d00: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x209d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_209d04:
    // 0x209d04: 0x0  nop
    ctx->pc = 0x209d04u;
    // NOP
label_209d08:
    // 0x209d08: 0x92540000  lbu         $s4, 0x0($s2)
    ctx->pc = 0x209d08u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_209d0c:
    // 0x209d0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_209d10:
    // 0x209d10: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_209d14:
    // 0x209d14: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
label_209d18:
    if (ctx->pc == 0x209D18u) {
        ctx->pc = 0x209D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D14u;
        // 0x209d18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D1Cu;
        goto label_209d1c;
    }
    ctx->pc = 0x209D14u;
    {
        const bool branch_taken_0x209d14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x209D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D14u;
        // 0x209d18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d14) {
            ctx->pc = 0x209D28u;
            goto label_209d28;
        }
    }
    ctx->pc = 0x209D1Cu;
label_209d1c:
    // 0x209d1c: 0x240200d8  addiu       $v0, $zero, 0xD8
    ctx->pc = 0x209d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_209d20:
    // 0x209d20: 0x5282000d  beql        $s4, $v0, . + 4 + (0xD << 2)
label_209d24:
    if (ctx->pc == 0x209D24u) {
        ctx->pc = 0x209D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D20u;
        // 0x209d24: 0xae3401a0  sw          $s4, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D28u;
        goto label_209d28;
    }
    ctx->pc = 0x209D20u;
    {
        const bool branch_taken_0x209d20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x209d20) {
            ctx->pc = 0x209D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209D20u;
            // 0x209d24: 0xae3401a0  sw          $s4, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209D58u;
            goto label_209d58;
        }
    }
    ctx->pc = 0x209D28u;
label_209d28:
    // 0x209d28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x209d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209d2c:
    // 0x209d2c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x209d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_209d30:
    // 0x209d30: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x209d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_209d34:
    // 0x209d34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x209d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209d38:
    // 0x209d38: 0xac550018  sw          $s5, 0x18($v0)
    ctx->pc = 0x209d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 21));
label_209d3c:
    // 0x209d3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209d40:
    // 0x209d40: 0xac74001c  sw          $s4, 0x1C($v1)
    ctx->pc = 0x209d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 20));
label_209d44:
    // 0x209d44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209d48:
    // 0x209d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209d4c:
    // 0x209d4c: 0x60f809  jalr        $v1
label_209d50:
    if (ctx->pc == 0x209D50u) {
        ctx->pc = 0x209D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D4Cu;
        // 0x209d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D54u;
        goto label_209d54;
    }
    ctx->pc = 0x209D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209D54u);
        ctx->pc = 0x209D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D4Cu;
        // 0x209d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209D4Cu, 0x209D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209D54u;
label_209d54:
    // 0x209d54: 0xae3401a0  sw          $s4, 0x1A0($s1)
    ctx->pc = 0x209d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 20));
label_209d58:
    // 0x209d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209d5c:
    // 0x209d5c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x209d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_209d60:
    // 0x209d60: 0x10000003  b           . + 4 + (0x3 << 2)
label_209d64:
    if (ctx->pc == 0x209D64u) {
        ctx->pc = 0x209D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D60u;
        // 0x209d64: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D68u;
        goto label_209d68;
    }
    ctx->pc = 0x209D60u;
    {
        const bool branch_taken_0x209d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D60u;
        // 0x209d64: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d60) {
            ctx->pc = 0x209D70u;
            goto label_209d70;
        }
    }
    ctx->pc = 0x209D68u;
label_209d68:
    // 0x209d68: 0xc0826b4  jal         func_209AD0
label_209d6c:
    if (ctx->pc == 0x209D6Cu) {
        ctx->pc = 0x209D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D68u;
        // 0x209d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D70u;
        goto label_209d70;
    }
    ctx->pc = 0x209D68u;
    SET_GPR_U32(ctx, 31, 0x209D70u);
    ctx->pc = 0x209D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D68u;
    // 0x209d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x209AD0u, 0x209D68u, 0x209D70u)) {
        return;
    }
    ctx->pc = 0x209D70u;
label_209d70:
    // 0x209d70: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
label_209d74:
    if (ctx->pc == 0x209D74u) {
        ctx->pc = 0x209D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D70u;
        // 0x209d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D78u;
        goto label_209d78;
    }
    ctx->pc = 0x209D70u;
    {
        const bool branch_taken_0x209d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D70u;
        // 0x209d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d70) {
            ctx->pc = 0x20A1B0u;
            goto label_20a1b0;
        }
    }
    ctx->pc = 0x209D78u;
label_209d78:
    // 0x209d78: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x209d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_209d7c:
    // 0x209d7c: 0x286200d0  slti        $v0, $v1, 0xD0
    ctx->pc = 0x209d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)208) ? 1 : 0);
label_209d80:
    // 0x209d80: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_209d84:
    if (ctx->pc == 0x209D84u) {
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D80u;
        // 0x209d84: 0x286200cd  slti        $v0, $v1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D88u;
        goto label_209d88;
    }
    ctx->pc = 0x209D80u;
    {
        const bool branch_taken_0x209d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D80u;
        // 0x209d84: 0x286200cd  slti        $v0, $v1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d80) {
            ctx->pc = 0x209E0Cu;
            goto label_209e0c;
        }
    }
    ctx->pc = 0x209D88u;
label_209d88:
    // 0x209d88: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_209d8c:
    if (ctx->pc == 0x209D8Cu) {
        ctx->pc = 0x209D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D88u;
        // 0x209d8c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D90u;
        goto label_209d90;
    }
    ctx->pc = 0x209D88u;
    {
        const bool branch_taken_0x209d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D88u;
        // 0x209d8c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d88) {
            ctx->pc = 0x209F94u;
            goto label_209f94;
        }
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
label_209d94:
    if (ctx->pc == 0x209D94u) {
        ctx->pc = 0x209D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D90u;
        // 0x209d94: 0x286200c5  slti        $v0, $v1, 0xC5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)197) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D98u;
        goto label_209d98;
    }
    ctx->pc = 0x209D90u;
    {
        const bool branch_taken_0x209d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D90u;
        // 0x209d94: 0x286200c5  slti        $v0, $v1, 0xC5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)197) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d90) {
            ctx->pc = 0x20A008u;
            goto label_20a008;
        }
    }
    ctx->pc = 0x209D98u;
label_209d98:
    // 0x209d98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_209d9c:
    if (ctx->pc == 0x209D9Cu) {
        ctx->pc = 0x209D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D98u;
        // 0x209d9c: 0x286200c2  slti        $v0, $v1, 0xC2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)194) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DA0u;
        goto label_209da0;
    }
    ctx->pc = 0x209D98u;
    {
        const bool branch_taken_0x209d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D98u;
        // 0x209d9c: 0x286200c2  slti        $v0, $v1, 0xC2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)194) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d98) {
            ctx->pc = 0x209DDCu;
            goto label_209ddc;
        }
    }
    ctx->pc = 0x209DA0u;
label_209da0:
    // 0x209da0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_209da4:
    if (ctx->pc == 0x209DA4u) {
        ctx->pc = 0x209DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DA0u;
        // 0x209da4: 0x286200c0  slti        $v0, $v1, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DA8u;
        goto label_209da8;
    }
    ctx->pc = 0x209DA0u;
    {
        const bool branch_taken_0x209da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DA0u;
        // 0x209da4: 0x286200c0  slti        $v0, $v1, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209da0) {
            ctx->pc = 0x209DC0u;
            goto label_209dc0;
        }
    }
    ctx->pc = 0x209DA8u;
label_209da8:
    // 0x209da8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_209dac:
    if (ctx->pc == 0x209DACu) {
        ctx->pc = 0x209DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DA8u;
        // 0x209dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DB0u;
        goto label_209db0;
    }
    ctx->pc = 0x209DA8u;
    {
        const bool branch_taken_0x209da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DA8u;
        // 0x209dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209da8) {
            ctx->pc = 0x209F58u;
            goto label_209f58;
        }
    }
    ctx->pc = 0x209DB0u;
label_209db0:
    // 0x209db0: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
label_209db4:
    if (ctx->pc == 0x209DB4u) {
        ctx->pc = 0x209DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DB0u;
        // 0x209db4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DB8u;
        goto label_209db8;
    }
    ctx->pc = 0x209DB0u;
    {
        const bool branch_taken_0x209db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DB0u;
        // 0x209db4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209db0) {
            ctx->pc = 0x20A070u;
            goto label_20a070;
        }
    }
    ctx->pc = 0x209DB8u;
label_209db8:
    // 0x209db8: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_209dbc:
    if (ctx->pc == 0x209DBCu) {
        ctx->pc = 0x209DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DB8u;
        // 0x209dbc: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DC0u;
        goto label_209dc0;
    }
    ctx->pc = 0x209DB8u;
    {
        const bool branch_taken_0x209db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DB8u;
        // 0x209dbc: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209db8) {
            ctx->pc = 0x20A188u;
            goto label_20a188;
        }
    }
    ctx->pc = 0x209DC0u;
label_209dc0:
    // 0x209dc0: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x209dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_209dc4:
    // 0x209dc4: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
label_209dc8:
    if (ctx->pc == 0x209DC8u) {
        ctx->pc = 0x209DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DC4u;
        // 0x209dc8: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DCCu;
        goto label_209dcc;
    }
    ctx->pc = 0x209DC4u;
    {
        const bool branch_taken_0x209dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DC4u;
        // 0x209dc8: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dc4) {
            ctx->pc = 0x209F70u;
            goto label_209f70;
        }
    }
    ctx->pc = 0x209DCCu;
label_209dcc:
    // 0x209dcc: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
label_209dd0:
    if (ctx->pc == 0x209DD0u) {
        ctx->pc = 0x209DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DCCu;
        // 0x209dd0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DD4u;
        goto label_209dd4;
    }
    ctx->pc = 0x209DCCu;
    {
        const bool branch_taken_0x209dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DCCu;
        // 0x209dd0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dcc) {
            ctx->pc = 0x209F98u;
            goto label_209f98;
        }
    }
    ctx->pc = 0x209DD4u;
label_209dd4:
    // 0x209dd4: 0x100000ec  b           . + 4 + (0xEC << 2)
label_209dd8:
    if (ctx->pc == 0x209DD8u) {
        ctx->pc = 0x209DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DD4u;
        // 0x209dd8: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DDCu;
        goto label_209ddc;
    }
    ctx->pc = 0x209DD4u;
    {
        const bool branch_taken_0x209dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DD4u;
        // 0x209dd8: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dd4) {
            ctx->pc = 0x20A188u;
            goto label_20a188;
        }
    }
    ctx->pc = 0x209DDCu;
label_209ddc:
    // 0x209ddc: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_209de0:
    // 0x209de0: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
label_209de4:
    if (ctx->pc == 0x209DE4u) {
        ctx->pc = 0x209DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DE0u;
        // 0x209de4: 0x286200c9  slti        $v0, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DE8u;
        goto label_209de8;
    }
    ctx->pc = 0x209DE0u;
    {
        const bool branch_taken_0x209de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DE0u;
        // 0x209de4: 0x286200c9  slti        $v0, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209de0) {
            ctx->pc = 0x209F7Cu;
            goto label_209f7c;
        }
    }
    ctx->pc = 0x209DE8u;
label_209de8:
    // 0x209de8: 0x5440006b  bnel        $v0, $zero, . + 4 + (0x6B << 2)
label_209dec:
    if (ctx->pc == 0x209DECu) {
        ctx->pc = 0x209DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DE8u;
        // 0x209dec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DF0u;
        goto label_209df0;
    }
    ctx->pc = 0x209DE8u;
    {
        const bool branch_taken_0x209de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209de8) {
            ctx->pc = 0x209DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209DE8u;
            // 0x209dec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F98u;
            goto label_209f98;
        }
    }
    ctx->pc = 0x209DF0u;
label_209df0:
    // 0x209df0: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_209df4:
    // 0x209df4: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
label_209df8:
    if (ctx->pc == 0x209DF8u) {
        ctx->pc = 0x209DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF4u;
        // 0x209df8: 0x286200cc  slti        $v0, $v1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DFCu;
        goto label_209dfc;
    }
    ctx->pc = 0x209DF4u;
    {
        const bool branch_taken_0x209df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF4u;
        // 0x209df8: 0x286200cc  slti        $v0, $v1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209df4) {
            ctx->pc = 0x209F94u;
            goto label_209f94;
        }
    }
    ctx->pc = 0x209DFCu;
label_209dfc:
    // 0x209dfc: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_209e00:
    if (ctx->pc == 0x209E00u) {
        ctx->pc = 0x209E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DFCu;
        // 0x209e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E04u;
        goto label_209e04;
    }
    ctx->pc = 0x209DFCu;
    {
        const bool branch_taken_0x209dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DFCu;
        // 0x209e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dfc) {
            ctx->pc = 0x20A0A0u;
            goto label_20a0a0;
        }
    }
    ctx->pc = 0x209E04u;
label_209e04:
    // 0x209e04: 0x1000005f  b           . + 4 + (0x5F << 2)
label_209e08:
    if (ctx->pc == 0x209E08u) {
        ctx->pc = 0x209E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E04u;
        // 0x209e08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E0Cu;
        goto label_209e0c;
    }
    ctx->pc = 0x209E04u;
    {
        const bool branch_taken_0x209e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E04u;
        // 0x209e08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e04) {
            ctx->pc = 0x209F84u;
            goto label_209f84;
        }
    }
    ctx->pc = 0x209E0Cu;
label_209e0c:
    // 0x209e0c: 0x240200db  addiu       $v0, $zero, 0xDB
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
label_209e10:
    // 0x209e10: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
label_209e14:
    if (ctx->pc == 0x209E14u) {
        ctx->pc = 0x209E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E10u;
        // 0x209e14: 0x286200dc  slti        $v0, $v1, 0xDC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)220) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E18u;
        goto label_209e18;
    }
    ctx->pc = 0x209E10u;
    {
        const bool branch_taken_0x209e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E10u;
        // 0x209e14: 0x286200dc  slti        $v0, $v1, 0xDC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)220) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e10) {
            ctx->pc = 0x20A018u;
            goto label_20a018;
        }
    }
    ctx->pc = 0x209E18u;
label_209e18:
    // 0x209e18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_209e1c:
    if (ctx->pc == 0x209E1Cu) {
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x240200d8  addiu       $v0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E20u;
        goto label_209e20;
    }
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x240200d8  addiu       $v0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E50u;
            goto label_209e50;
        }
    }
    ctx->pc = 0x209E20u;
label_209e20:
    // 0x209e20: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_209e24:
    if (ctx->pc == 0x209E24u) {
        ctx->pc = 0x209E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E20u;
        // 0x209e24: 0x286200d8  slti        $v0, $v1, 0xD8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)216) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E28u;
        goto label_209e28;
    }
    ctx->pc = 0x209E20u;
    {
        const bool branch_taken_0x209e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E20u;
        // 0x209e24: 0x286200d8  slti        $v0, $v1, 0xD8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)216) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e20) {
            ctx->pc = 0x209E90u;
            goto label_209e90;
        }
    }
    ctx->pc = 0x209E28u;
label_209e28:
    // 0x209e28: 0x54400091  bnel        $v0, $zero, . + 4 + (0x91 << 2)
label_209e2c:
    if (ctx->pc == 0x209E2Cu) {
        ctx->pc = 0x209E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E28u;
        // 0x209e2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E30u;
        goto label_209e30;
    }
    ctx->pc = 0x209E28u;
    {
        const bool branch_taken_0x209e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e28) {
            ctx->pc = 0x209E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E28u;
            // 0x209e2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A070u;
            goto label_20a070;
        }
    }
    ctx->pc = 0x209E30u;
label_209e30:
    // 0x209e30: 0x240200d9  addiu       $v0, $zero, 0xD9
    ctx->pc = 0x209e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_209e34:
    // 0x209e34: 0x50620069  beql        $v1, $v0, . + 4 + (0x69 << 2)
label_209e38:
    if (ctx->pc == 0x209E38u) {
        ctx->pc = 0x209E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E34u;
        // 0x209e38: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E3Cu;
        goto label_209e3c;
    }
    ctx->pc = 0x209E34u;
    {
        const bool branch_taken_0x209e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209e34) {
            ctx->pc = 0x209E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E34u;
            // 0x209e38: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209FDCu;
            goto label_209fdc;
        }
    }
    ctx->pc = 0x209E3Cu;
label_209e3c:
    // 0x209e3c: 0x240200da  addiu       $v0, $zero, 0xDA
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
label_209e40:
    // 0x209e40: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
label_209e44:
    if (ctx->pc == 0x209E44u) {
        ctx->pc = 0x209E48u;
        goto label_209e48;
    }
    ctx->pc = 0x209E40u;
    {
        const bool branch_taken_0x209e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209e40) {
            ctx->pc = 0x209FC4u;
            goto label_209fc4;
        }
    }
    ctx->pc = 0x209E48u;
label_209e48:
    // 0x209e48: 0x100000ce  b           . + 4 + (0xCE << 2)
label_209e4c:
    if (ctx->pc == 0x209E4Cu) {
        ctx->pc = 0x209E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E48u;
        // 0x209e4c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E50u;
        goto label_209e50;
    }
    ctx->pc = 0x209E48u;
    {
        const bool branch_taken_0x209e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E48u;
        // 0x209e4c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e48) {
            ctx->pc = 0x20A184u;
            goto label_20a184;
        }
    }
    ctx->pc = 0x209E50u;
label_209e50:
    // 0x209e50: 0x286200f0  slti        $v0, $v1, 0xF0
    ctx->pc = 0x209e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
label_209e54:
    // 0x209e54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_209e58:
    if (ctx->pc == 0x209E58u) {
        ctx->pc = 0x209E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E54u;
        // 0x209e58: 0x286200e0  slti        $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E5Cu;
        goto label_209e5c;
    }
    ctx->pc = 0x209E54u;
    {
        const bool branch_taken_0x209e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E54u;
        // 0x209e58: 0x286200e0  slti        $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e54) {
            ctx->pc = 0x209E7Cu;
            goto label_209e7c;
        }
    }
    ctx->pc = 0x209E5Cu;
label_209e5c:
    // 0x209e5c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_209e60:
    if (ctx->pc == 0x209E60u) {
        ctx->pc = 0x209E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E5Cu;
        // 0x209e60: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E64u;
        goto label_209e64;
    }
    ctx->pc = 0x209E5Cu;
    {
        const bool branch_taken_0x209e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E5Cu;
        // 0x209e60: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e5c) {
            ctx->pc = 0x20A038u;
            goto label_20a038;
        }
    }
    ctx->pc = 0x209E64u;
label_209e64:
    // 0x209e64: 0x1062008e  beq         $v1, $v0, . + 4 + (0x8E << 2)
label_209e68:
    if (ctx->pc == 0x209E68u) {
        ctx->pc = 0x209E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E64u;
        // 0x209e68: 0x240200dd  addiu       $v0, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E6Cu;
        goto label_209e6c;
    }
    ctx->pc = 0x209E64u;
    {
        const bool branch_taken_0x209e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E64u;
        // 0x209e68: 0x240200dd  addiu       $v0, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e64) {
            ctx->pc = 0x20A0A0u;
            goto label_20a0a0;
        }
    }
    ctx->pc = 0x209E6Cu;
label_209e6c:
    // 0x209e6c: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
label_209e70:
    if (ctx->pc == 0x209E70u) {
        ctx->pc = 0x209E74u;
        goto label_209e74;
    }
    ctx->pc = 0x209E6Cu;
    {
        const bool branch_taken_0x209e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209e6c) {
            ctx->pc = 0x20A028u;
            goto label_20a028;
        }
    }
    ctx->pc = 0x209E74u;
label_209e74:
    // 0x209e74: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_209e78:
    if (ctx->pc == 0x209E78u) {
        ctx->pc = 0x209E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E74u;
        // 0x209e78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E7Cu;
        goto label_209e7c;
    }
    ctx->pc = 0x209E74u;
    {
        const bool branch_taken_0x209e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E74u;
        // 0x209e78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e74) {
            ctx->pc = 0x20A184u;
            goto label_20a184;
        }
    }
    ctx->pc = 0x209E7Cu;
label_209e7c:
    // 0x209e7c: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_209e80:
    // 0x209e80: 0x50620076  beql        $v1, $v0, . + 4 + (0x76 << 2)
label_209e84:
    if (ctx->pc == 0x209E84u) {
        ctx->pc = 0x209E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E80u;
        // 0x209e84: 0x8e2301b8  lw          $v1, 0x1B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E88u;
        goto label_209e88;
    }
    ctx->pc = 0x209E80u;
    {
        const bool branch_taken_0x209e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209e80) {
            ctx->pc = 0x209E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E80u;
            // 0x209e84: 0x8e2301b8  lw          $v1, 0x1B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A05Cu;
            goto label_20a05c;
        }
    }
    ctx->pc = 0x209E88u;
label_209e88:
    // 0x209e88: 0x100000be  b           . + 4 + (0xBE << 2)
label_209e8c:
    if (ctx->pc == 0x209E8Cu) {
        ctx->pc = 0x209E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E88u;
        // 0x209e8c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E90u;
        goto label_209e90;
    }
    ctx->pc = 0x209E88u;
    {
        const bool branch_taken_0x209e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E88u;
        // 0x209e8c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e88) {
            ctx->pc = 0x20A184u;
            goto label_20a184;
        }
    }
    ctx->pc = 0x209E90u;
label_209e90:
    // 0x209e90: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209e94:
    // 0x209e94: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_209e98:
    // 0x209e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209e9c:
    // 0x209e9c: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x209e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_209ea0:
    // 0x209ea0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x209ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209ea4:
    // 0x209ea4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x209ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_209ea8:
    // 0x209ea8: 0x60f809  jalr        $v1
label_209eac:
    if (ctx->pc == 0x209EACu) {
        ctx->pc = 0x209EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EA8u;
        // 0x209eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EB0u;
        goto label_209eb0;
    }
    ctx->pc = 0x209EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209EB0u);
        ctx->pc = 0x209EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EA8u;
        // 0x209eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209EA8u, 0x209EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209EB0u;
label_209eb0:
    // 0x209eb0: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_209eb4:
    // 0x209eb4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x209eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_209eb8:
    // 0x209eb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_209ebc:
    if (ctx->pc == 0x209EBCu) {
        ctx->pc = 0x209EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EB8u;
        // 0x209ebc: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EC0u;
        goto label_209ec0;
    }
    ctx->pc = 0x209EB8u;
    {
        const bool branch_taken_0x209eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EB8u;
        // 0x209ebc: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209eb8) {
            ctx->pc = 0x209ED8u;
            goto label_209ed8;
        }
    }
    ctx->pc = 0x209EC0u;
label_209ec0:
    // 0x209ec0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209ec4:
    // 0x209ec4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x209ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_209ec8:
    // 0x209ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x209ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209ecc:
    // 0x209ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x209eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209ed0:
    // 0x209ed0: 0x60f809  jalr        $v1
label_209ed4:
    if (ctx->pc == 0x209ED4u) {
        ctx->pc = 0x209ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209ED0u;
        // 0x209ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209ED8u;
        goto label_209ed8;
    }
    ctx->pc = 0x209ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209ED8u);
        ctx->pc = 0x209ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209ED0u;
        // 0x209ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209ED0u, 0x209ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209ED8u;
label_209ed8:
    // 0x209ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209edc:
    // 0x209edc: 0x262800e4  addiu       $t0, $s1, 0xE4
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
label_209ee0:
    // 0x209ee0: 0x262700f4  addiu       $a3, $s1, 0xF4
    ctx->pc = 0x209ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
label_209ee4:
    // 0x209ee4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ee8:
    // 0x209ee8: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x209ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
label_209eec:
    // 0x209eec: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x209eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209ef0:
    // 0x209ef0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_209ef4:
    // 0x209ef4: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x209ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_209ef8:
    // 0x209ef8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x209ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_209efc:
    // 0x209efc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x209efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_209f00:
    // 0x209f00: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x209f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
label_209f04:
    // 0x209f04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_209f08:
    // 0x209f08: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x209f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_209f0c:
    // 0x209f0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_209f10:
    if (ctx->pc == 0x209F10u) {
        ctx->pc = 0x209F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F0Cu;
        // 0x209f10: 0xa0890000  sb          $t1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F14u;
        goto label_209f14;
    }
    ctx->pc = 0x209F0Cu;
    {
        const bool branch_taken_0x209f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F0Cu;
        // 0x209f10: 0xa0890000  sb          $t1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f0c) {
            ctx->pc = 0x209EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209ef0;
        }
    }
    ctx->pc = 0x209F14u;
label_209f14:
    // 0x209f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f18:
    // 0x209f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f1c:
    // 0x209f1c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_209f20:
    // 0x209f20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f24:
    // 0x209f24: 0xa222011d  sb          $v0, 0x11D($s1)
    ctx->pc = 0x209f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 285), (uint8_t)GPR_U32(ctx, 2));
label_209f28:
    // 0x209f28: 0xa6230122  sh          $v1, 0x122($s1)
    ctx->pc = 0x209f28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 290), (uint16_t)GPR_U32(ctx, 3));
label_209f2c:
    // 0x209f2c: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x209f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
label_209f30:
    // 0x209f30: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x209f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_209f34:
    // 0x209f34: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x209f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_209f38:
    // 0x209f38: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x209f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_209f3c:
    // 0x209f3c: 0xa222011c  sb          $v0, 0x11C($s1)
    ctx->pc = 0x209f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 2));
label_209f40:
    // 0x209f40: 0xa220011e  sb          $zero, 0x11E($s1)
    ctx->pc = 0x209f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 286), (uint8_t)GPR_U32(ctx, 0));
label_209f44:
    // 0x209f44: 0xa6230120  sh          $v1, 0x120($s1)
    ctx->pc = 0x209f44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 3));
label_209f48:
    // 0x209f48: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x209f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_209f4c:
    // 0x209f4c: 0xa2200128  sb          $zero, 0x128($s1)
    ctx->pc = 0x209f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 0));
label_209f50:
    // 0x209f50: 0x10000095  b           . + 4 + (0x95 << 2)
label_209f54:
    if (ctx->pc == 0x209F54u) {
        ctx->pc = 0x209F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F50u;
        // 0x209f54: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F58u;
        goto label_209f58;
    }
    ctx->pc = 0x209F50u;
    {
        const bool branch_taken_0x209f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F50u;
        // 0x209f54: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f50) {
            ctx->pc = 0x20A1A8u;
            goto label_20a1a8;
        }
    }
    ctx->pc = 0x209F58u;
label_209f58:
    // 0x209f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209f5c:
    // 0x209f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f60:
    // 0x209f60: 0xc0820e0  jal         func_208380
label_209f64:
    if (ctx->pc == 0x209F64u) {
        ctx->pc = 0x209F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F60u;
        // 0x209f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F68u;
        goto label_209f68;
    }
    ctx->pc = 0x209F60u;
    SET_GPR_U32(ctx, 31, 0x209F68u);
    ctx->pc = 0x209F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F60u;
    // 0x209f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x208380u, 0x209F60u, 0x209F68u)) {
        return;
    }
    ctx->pc = 0x209F68u;
label_209f68:
    // 0x209f68: 0x10000082  b           . + 4 + (0x82 << 2)
label_209f6c:
    if (ctx->pc == 0x209F6Cu) {
        ctx->pc = 0x209F70u;
        goto label_209f70;
    }
    ctx->pc = 0x209F68u;
    {
        const bool branch_taken_0x209f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f68) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x209F70u;
label_209f70:
    // 0x209f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209f74:
    // 0x209f74: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_209f78:
    if (ctx->pc == 0x209F78u) {
        ctx->pc = 0x209F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F74u;
        // 0x209f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F7Cu;
        goto label_209f7c;
    }
    ctx->pc = 0x209F74u;
    {
        const bool branch_taken_0x209f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F74u;
        // 0x209f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f74) {
            ctx->pc = 0x209F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209f60;
        }
    }
    ctx->pc = 0x209F7Cu;
label_209f7c:
    // 0x209f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209f80:
    // 0x209f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f84:
    // 0x209f84: 0xc0820e0  jal         func_208380
label_209f88:
    if (ctx->pc == 0x209F88u) {
        ctx->pc = 0x209F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F84u;
        // 0x209f88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F8Cu;
        goto label_209f8c;
    }
    ctx->pc = 0x209F84u;
    SET_GPR_U32(ctx, 31, 0x209F8Cu);
    ctx->pc = 0x209F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F84u;
    // 0x209f88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x208380u, 0x209F84u, 0x209F8Cu)) {
        return;
    }
    ctx->pc = 0x209F8Cu;
label_209f8c:
    // 0x209f8c: 0x10000079  b           . + 4 + (0x79 << 2)
label_209f90:
    if (ctx->pc == 0x209F90u) {
        ctx->pc = 0x209F94u;
        goto label_209f94;
    }
    ctx->pc = 0x209F8Cu;
    {
        const bool branch_taken_0x209f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f8c) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x209F94u;
label_209f94:
    // 0x209f94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209f98:
    // 0x209f98: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x209f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_209f9c:
    // 0x209f9c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209fa0:
    // 0x209fa0: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x209fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_209fa4:
    // 0x209fa4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x209fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209fa8:
    // 0x209fa8: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x209fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_209fac:
    // 0x209fac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209fb0:
    // 0x209fb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_209fb4:
    // 0x209fb4: 0x40f809  jalr        $v0
label_209fb8:
    if (ctx->pc == 0x209FB8u) {
        ctx->pc = 0x209FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB4u;
        // 0x209fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FBCu;
        goto label_209fbc;
    }
    ctx->pc = 0x209FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209FBCu);
        ctx->pc = 0x209FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB4u;
        // 0x209fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FB4u, 0x209FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209FBCu;
label_209fbc:
    // 0x209fbc: 0x1000ff34  b           . + 4 + (-0xCC << 2)
label_209fc0:
    if (ctx->pc == 0x209FC0u) {
        ctx->pc = 0x209FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FBCu;
        // 0x209fc0: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FC4u;
        goto label_209fc4;
    }
    ctx->pc = 0x209FBCu;
    {
        const bool branch_taken_0x209fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FBCu;
        // 0x209fc0: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fbc) {
            ctx->pc = 0x209C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c90;
        }
    }
    ctx->pc = 0x209FC4u;
label_209fc4:
    // 0x209fc4: 0xc0821f2  jal         func_2087C8
label_209fc8:
    if (ctx->pc == 0x209FC8u) {
        ctx->pc = 0x209FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FC4u;
        // 0x209fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FCCu;
        goto label_209fcc;
    }
    ctx->pc = 0x209FC4u;
    SET_GPR_U32(ctx, 31, 0x209FCCu);
    ctx->pc = 0x209FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FC4u;
    // 0x209fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2087C8u, 0x209FC4u, 0x209FCCu)) {
        return;
    }
    ctx->pc = 0x209FCCu;
label_209fcc:
    // 0x209fcc: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_209fd0:
    if (ctx->pc == 0x209FD0u) {
        ctx->pc = 0x209FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FCCu;
        // 0x209fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FD4u;
        goto label_209fd4;
    }
    ctx->pc = 0x209FCCu;
    {
        const bool branch_taken_0x209fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FCCu;
        // 0x209fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fcc) {
            ctx->pc = 0x20A17Cu;
            goto label_20a17c;
        }
    }
    ctx->pc = 0x209FD4u;
label_209fd4:
    // 0x209fd4: 0x10000076  b           . + 4 + (0x76 << 2)
label_209fd8:
    if (ctx->pc == 0x209FD8u) {
        ctx->pc = 0x209FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FD4u;
        // 0x209fd8: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FDCu;
        goto label_209fdc;
    }
    ctx->pc = 0x209FD4u;
    {
        const bool branch_taken_0x209fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FD4u;
        // 0x209fd8: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fd4) {
            ctx->pc = 0x20A1B0u;
            goto label_20a1b0;
        }
    }
    ctx->pc = 0x209FDCu;
label_209fdc:
    // 0x209fdc: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x209fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_209fe0:
    // 0x209fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209fe4:
    // 0x209fe4: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x209fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_209fe8:
    // 0x209fe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x209fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209fec:
    // 0x209fec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x209fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_209ff0:
    // 0x209ff0: 0x60f809  jalr        $v1
label_209ff4:
    if (ctx->pc == 0x209FF4u) {
        ctx->pc = 0x209FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FF0u;
        // 0x209ff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FF8u;
        goto label_209ff8;
    }
    ctx->pc = 0x209FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209FF8u);
        ctx->pc = 0x209FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FF0u;
        // 0x209ff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FF0u, 0x209FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209FF8u;
label_209ff8:
    // 0x209ff8: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x209ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
label_209ffc:
    // 0x209ffc: 0x1000006c  b           . + 4 + (0x6C << 2)
label_20a000:
    if (ctx->pc == 0x20A000u) {
        ctx->pc = 0x20A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FFCu;
        // 0x20a000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A004u;
        goto label_20a004;
    }
    ctx->pc = 0x209FFCu;
    {
        const bool branch_taken_0x209ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FFCu;
        // 0x20a000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ffc) {
            ctx->pc = 0x20A1B0u;
            goto label_20a1b0;
        }
    }
    ctx->pc = 0x20A004u;
label_20a004:
    // 0x20a004: 0x0  nop
    ctx->pc = 0x20a004u;
    // NOP
label_20a008:
    // 0x20a008: 0xc0822ec  jal         func_208BB0
label_20a00c:
    if (ctx->pc == 0x20A00Cu) {
        ctx->pc = 0x20A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A008u;
        // 0x20a00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A010u;
        goto label_20a010;
    }
    ctx->pc = 0x20A008u;
    SET_GPR_U32(ctx, 31, 0x20A010u);
    ctx->pc = 0x20A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A008u;
    // 0x20a00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x208BB0u, 0x20A008u, 0x20A010u)) {
        return;
    }
    ctx->pc = 0x20A010u;
label_20a010:
    // 0x20a010: 0x10000058  b           . + 4 + (0x58 << 2)
label_20a014:
    if (ctx->pc == 0x20A014u) {
        ctx->pc = 0x20A018u;
        goto label_20a018;
    }
    ctx->pc = 0x20A010u;
    {
        const bool branch_taken_0x20a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a010) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A018u;
label_20a018:
    // 0x20a018: 0xc082406  jal         func_209018
label_20a01c:
    if (ctx->pc == 0x20A01Cu) {
        ctx->pc = 0x20A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A018u;
        // 0x20a01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A020u;
        goto label_20a020;
    }
    ctx->pc = 0x20A018u;
    SET_GPR_U32(ctx, 31, 0x20A020u);
    ctx->pc = 0x20A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A018u;
    // 0x20a01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x209018u, 0x20A018u, 0x20A020u)) {
        return;
    }
    ctx->pc = 0x20A020u;
label_20a020:
    // 0x20a020: 0x10000054  b           . + 4 + (0x54 << 2)
label_20a024:
    if (ctx->pc == 0x20A024u) {
        ctx->pc = 0x20A028u;
        goto label_20a028;
    }
    ctx->pc = 0x20A020u;
    {
        const bool branch_taken_0x20a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a020) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A028u;
label_20a028:
    // 0x20a028: 0xc0824da  jal         func_209368
label_20a02c:
    if (ctx->pc == 0x20A02Cu) {
        ctx->pc = 0x20A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A028u;
        // 0x20a02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A030u;
        goto label_20a030;
    }
    ctx->pc = 0x20A028u;
    SET_GPR_U32(ctx, 31, 0x20A030u);
    ctx->pc = 0x20A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A028u;
    // 0x20a02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x209368u, 0x20A028u, 0x20A030u)) {
        return;
    }
    ctx->pc = 0x20A030u;
label_20a030:
    // 0x20a030: 0x10000050  b           . + 4 + (0x50 << 2)
label_20a034:
    if (ctx->pc == 0x20A034u) {
        ctx->pc = 0x20A038u;
        goto label_20a038;
    }
    ctx->pc = 0x20A030u;
    {
        const bool branch_taken_0x20a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a030) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A038u;
label_20a038:
    // 0x20a038: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x20a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
label_20a03c:
    // 0x20a03c: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_20a040:
    // 0x20a040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20a044:
    // 0x20a044: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20a048:
    // 0x20a048: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20a04c:
    // 0x20a04c: 0x40f809  jalr        $v0
label_20a050:
    if (ctx->pc == 0x20A050u) {
        ctx->pc = 0x20A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A04Cu;
        // 0x20a050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A054u;
        goto label_20a054;
    }
    ctx->pc = 0x20A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A054u);
        ctx->pc = 0x20A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A04Cu;
        // 0x20a050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A04Cu, 0x20A054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A054u;
label_20a054:
    // 0x20a054: 0x10000047  b           . + 4 + (0x47 << 2)
label_20a058:
    if (ctx->pc == 0x20A058u) {
        ctx->pc = 0x20A05Cu;
        goto label_20a05c;
    }
    ctx->pc = 0x20A054u;
    {
        const bool branch_taken_0x20a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a054) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A05Cu;
label_20a05c:
    // 0x20a05c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20a060:
    // 0x20a060: 0x40f809  jalr        $v0
label_20a064:
    if (ctx->pc == 0x20A064u) {
        ctx->pc = 0x20A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A060u;
        // 0x20a064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A068u;
        goto label_20a068;
    }
    ctx->pc = 0x20A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A068u);
        ctx->pc = 0x20A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A060u;
        // 0x20a064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A060u, 0x20A068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A068u;
label_20a068:
    // 0x20a068: 0x10000042  b           . + 4 + (0x42 << 2)
label_20a06c:
    if (ctx->pc == 0x20A06Cu) {
        ctx->pc = 0x20A070u;
        goto label_20a070;
    }
    ctx->pc = 0x20A068u;
    {
        const bool branch_taken_0x20a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a068) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A070u;
label_20a070:
    // 0x20a070: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_20a074:
    // 0x20a074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a078:
    // 0x20a078: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20a078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20a07c:
    // 0x20a07c: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_20a080:
    // 0x20a080: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a084:
    // 0x20a084: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x20a084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_20a088:
    // 0x20a088: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a08c:
    // 0x20a08c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20a090:
    // 0x20a090: 0x40f809  jalr        $v0
label_20a094:
    if (ctx->pc == 0x20A094u) {
        ctx->pc = 0x20A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A090u;
        // 0x20a094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A098u;
        goto label_20a098;
    }
    ctx->pc = 0x20A090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A098u);
        ctx->pc = 0x20A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A090u;
        // 0x20a094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A090u, 0x20A098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A098u;
label_20a098:
    // 0x20a098: 0x1000fefd  b           . + 4 + (-0x103 << 2)
label_20a09c:
    if (ctx->pc == 0x20A09Cu) {
        ctx->pc = 0x20A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A098u;
        // 0x20a09c: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0A0u;
        goto label_20a0a0;
    }
    ctx->pc = 0x20A098u;
    {
        const bool branch_taken_0x20a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A098u;
        // 0x20a09c: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a098) {
            ctx->pc = 0x209C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c90;
        }
    }
    ctx->pc = 0x20A0A0u;
label_20a0a0:
    // 0x20a0a0: 0x8e330018  lw          $s3, 0x18($s1)
    ctx->pc = 0x20a0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20a0a4:
    // 0x20a0a4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x20a0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20a0a8:
    // 0x20a0a8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_20a0ac:
    if (ctx->pc == 0x20A0ACu) {
        ctx->pc = 0x20A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A8u;
        // 0x20a0ac: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0B0u;
        goto label_20a0b0;
    }
    ctx->pc = 0x20A0A8u;
    {
        const bool branch_taken_0x20a0a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A8u;
        // 0x20a0ac: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0a8) {
            ctx->pc = 0x20A0D0u;
            goto label_20a0d0;
        }
    }
    ctx->pc = 0x20A0B0u;
label_20a0b0:
    // 0x20a0b0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20a0b4:
    // 0x20a0b4: 0x40f809  jalr        $v0
label_20a0b8:
    if (ctx->pc == 0x20A0B8u) {
        ctx->pc = 0x20A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0B4u;
        // 0x20a0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0BCu;
        goto label_20a0bc;
    }
    ctx->pc = 0x20A0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A0BCu);
        ctx->pc = 0x20A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0B4u;
        // 0x20a0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0B4u, 0x20A0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A0BCu;
label_20a0bc:
    // 0x20a0bc: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_20a0c0:
    if (ctx->pc == 0x20A0C0u) {
        ctx->pc = 0x20A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0BCu;
        // 0x20a0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0C4u;
        goto label_20a0c4;
    }
    ctx->pc = 0x20A0BCu;
    {
        const bool branch_taken_0x20a0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0BCu;
        // 0x20a0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0bc) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A0C4u;
label_20a0c4:
    // 0x20a0c4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x20a0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20a0c8:
    // 0x20a0c8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x20a0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20a0cc:
    // 0x20a0cc: 0x0  nop
    ctx->pc = 0x20a0ccu;
    // NOP
label_20a0d0:
    // 0x20a0d0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x20a0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_20a0d4:
    // 0x20a0d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20a0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20a0d8:
    // 0x20a0d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20a0dc:
    // 0x20a0dc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_20a0e0:
    if (ctx->pc == 0x20A0E0u) {
        ctx->pc = 0x20A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0DCu;
        // 0x20a0e0: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0E4u;
        goto label_20a0e4;
    }
    ctx->pc = 0x20A0DCu;
    {
        const bool branch_taken_0x20a0dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0DCu;
        // 0x20a0e0: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0dc) {
            ctx->pc = 0x20A100u;
            goto label_20a100;
        }
    }
    ctx->pc = 0x20A0E4u;
label_20a0e4:
    // 0x20a0e4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x20a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20a0e8:
    // 0x20a0e8: 0x40f809  jalr        $v0
label_20a0ec:
    if (ctx->pc == 0x20A0ECu) {
        ctx->pc = 0x20A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E8u;
        // 0x20a0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0F0u;
        goto label_20a0f0;
    }
    ctx->pc = 0x20A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A0F0u);
        ctx->pc = 0x20A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E8u;
        // 0x20a0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0E8u, 0x20A0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A0F0u;
label_20a0f0:
    // 0x20a0f0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_20a0f4:
    if (ctx->pc == 0x20A0F4u) {
        ctx->pc = 0x20A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0F0u;
        // 0x20a0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0F8u;
        goto label_20a0f8;
    }
    ctx->pc = 0x20A0F0u;
    {
        const bool branch_taken_0x20a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0F0u;
        // 0x20a0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0f0) {
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A0F8u;
label_20a0f8:
    // 0x20a0f8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20a0fc:
    // 0x20a0fc: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x20a0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20a100:
    // 0x20a100: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x20a100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_20a104:
    // 0x20a104: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20a104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20a108:
    // 0x20a108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20a10c:
    // 0x20a10c: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x20a10cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_20a110:
    // 0x20a110: 0x6694fffe  daddiu      $s4, $s4, -0x2
    ctx->pc = 0x20a110u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294967294);
label_20a114:
    // 0x20a114: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a118:
    // 0x20a118: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x20a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_20a11c:
    // 0x20a11c: 0x14383c  dsll32      $a3, $s4, 0
    ctx->pc = 0x20a11cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) << (32 + 0));
label_20a120:
    // 0x20a120: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x20a120u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_20a124:
    // 0x20a124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a128:
    // 0x20a128: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20a128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20a12c:
    // 0x20a12c: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x20a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_20a130:
    // 0x20a130: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20a130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a134:
    // 0x20a134: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x20a134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_20a138:
    // 0x20a138: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a13c:
    // 0x20a13c: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x20a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
label_20a140:
    // 0x20a140: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a144:
    // 0x20a144: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20a148:
    // 0x20a148: 0x60f809  jalr        $v1
label_20a14c:
    if (ctx->pc == 0x20A14Cu) {
        ctx->pc = 0x20A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A148u;
        // 0x20a14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A150u;
        goto label_20a150;
    }
    ctx->pc = 0x20A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A150u);
        ctx->pc = 0x20A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A148u;
        // 0x20a14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A148u, 0x20A150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A150u;
label_20a150:
    // 0x20a150: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x20a150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_20a154:
    // 0x20a154: 0x1a800006  blez        $s4, . + 4 + (0x6 << 2)
label_20a158:
    if (ctx->pc == 0x20A158u) {
        ctx->pc = 0x20A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A154u;
        // 0x20a158: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A15Cu;
        goto label_20a15c;
    }
    ctx->pc = 0x20A154u;
    {
        const bool branch_taken_0x20a154 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x20A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A154u;
        // 0x20a158: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a154) {
            ctx->pc = 0x20A170u;
            goto label_20a170;
        }
    }
    ctx->pc = 0x20A15Cu;
label_20a15c:
    // 0x20a15c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x20a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20a160:
    // 0x20a160: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a164:
    // 0x20a164: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x20a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_20a168:
    // 0x20a168: 0x40f809  jalr        $v0
label_20a16c:
    if (ctx->pc == 0x20A16Cu) {
        ctx->pc = 0x20A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A168u;
        // 0x20a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A170u;
        goto label_20a170;
    }
    ctx->pc = 0x20A168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A170u);
        ctx->pc = 0x20A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A168u;
        // 0x20a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A168u, 0x20A170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A170u;
label_20a170:
    // 0x20a170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a174:
    // 0x20a174: 0x5440fec6  bnel        $v0, $zero, . + 4 + (-0x13A << 2)
label_20a178:
    if (ctx->pc == 0x20A178u) {
        ctx->pc = 0x20A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A174u;
        // 0x20a178: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A17Cu;
        goto label_20a17c;
    }
    ctx->pc = 0x20A174u;
    {
        const bool branch_taken_0x20a174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a174) {
            ctx->pc = 0x20A178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A174u;
            // 0x20a178: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c90;
        }
    }
    ctx->pc = 0x20A17Cu;
label_20a17c:
    // 0x20a17c: 0x1000000c  b           . + 4 + (0xC << 2)
label_20a180:
    if (ctx->pc == 0x20A180u) {
        ctx->pc = 0x20A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A17Cu;
        // 0x20a180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A184u;
        goto label_20a184;
    }
    ctx->pc = 0x20A17Cu;
    {
        const bool branch_taken_0x20a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A17Cu;
        // 0x20a180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a17c) {
            ctx->pc = 0x20A1B0u;
            goto label_20a1b0;
        }
    }
    ctx->pc = 0x20A184u;
label_20a184:
    // 0x20a184: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_20a188:
    // 0x20a188: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20a188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20a18c:
    // 0x20a18c: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x20a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_20a190:
    // 0x20a190: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20a190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a194:
    // 0x20a194: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x20a194u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_20a198:
    // 0x20a198: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a19c:
    // 0x20a19c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20a1a0:
    // 0x20a1a0: 0x40f809  jalr        $v0
label_20a1a4:
    if (ctx->pc == 0x20A1A4u) {
        ctx->pc = 0x20A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1A0u;
        // 0x20a1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1A8u;
        goto label_20a1a8;
    }
    ctx->pc = 0x20A1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A1A8u);
        ctx->pc = 0x20A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1A0u;
        // 0x20a1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1A0u, 0x20A1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A1A8u;
label_20a1a8:
    // 0x20a1a8: 0x1000feb9  b           . + 4 + (-0x147 << 2)
label_20a1ac:
    if (ctx->pc == 0x20A1ACu) {
        ctx->pc = 0x20A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1A8u;
        // 0x20a1ac: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1B0u;
        goto label_20a1b0;
    }
    ctx->pc = 0x20A1A8u;
    {
        const bool branch_taken_0x20a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1A8u;
        // 0x20a1ac: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1a8) {
            ctx->pc = 0x209C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c90;
        }
    }
    ctx->pc = 0x20A1B0u;
label_20a1b0:
    // 0x20a1b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20a1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20a1b4:
    // 0x20a1b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20a1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20a1b8:
    // 0x20a1b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20a1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20a1bc:
    // 0x20a1bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20a1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a1c0:
    // 0x20a1c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x20a1c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a1c4:
    // 0x20a1c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x20a1c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a1c8:
    // 0x20a1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a1cc:
    // 0x20a1cc: 0x3e00008  jr          $ra
label_20a1d0:
    if (ctx->pc == 0x20A1D0u) {
        ctx->pc = 0x20A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1CCu;
        // 0x20a1d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1D4u;
        goto label_20a1d4;
    }
    ctx->pc = 0x20A1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1CCu;
        // 0x20a1d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A1D4u;
label_20a1d4:
    // 0x20a1d4: 0x0  nop
    ctx->pc = 0x20a1d4u;
    // NOP
    ctx->pc = 0x20a1d8u;
}
