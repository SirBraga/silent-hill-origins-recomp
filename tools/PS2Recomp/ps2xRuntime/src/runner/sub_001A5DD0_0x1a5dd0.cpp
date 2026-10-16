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

// Function: sub_001A5DD0
// Address: 0x1a5dd0 - 0x1a6148
void sub_001A5DD0_0x1a5dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5DD0_0x1a5dd0");
#endif

    switch (ctx->pc) {
        case 0x1a5dd0u: goto label_1a5dd0;
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5ddcu: goto label_1a5ddc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5de4u: goto label_1a5de4;
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5decu: goto label_1a5dec;
        case 0x1a5df0u: goto label_1a5df0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5df8u: goto label_1a5df8;
        case 0x1a5dfcu: goto label_1a5dfc;
        case 0x1a5e00u: goto label_1a5e00;
        case 0x1a5e04u: goto label_1a5e04;
        case 0x1a5e08u: goto label_1a5e08;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5e14u: goto label_1a5e14;
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e1cu: goto label_1a5e1c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e2cu: goto label_1a5e2c;
        case 0x1a5e30u: goto label_1a5e30;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e38u: goto label_1a5e38;
        case 0x1a5e3cu: goto label_1a5e3c;
        case 0x1a5e40u: goto label_1a5e40;
        case 0x1a5e44u: goto label_1a5e44;
        case 0x1a5e48u: goto label_1a5e48;
        case 0x1a5e4cu: goto label_1a5e4c;
        case 0x1a5e50u: goto label_1a5e50;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e58u: goto label_1a5e58;
        case 0x1a5e5cu: goto label_1a5e5c;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e68u: goto label_1a5e68;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e70u: goto label_1a5e70;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e78u: goto label_1a5e78;
        case 0x1a5e7cu: goto label_1a5e7c;
        case 0x1a5e80u: goto label_1a5e80;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e88u: goto label_1a5e88;
        case 0x1a5e8cu: goto label_1a5e8c;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5e98u: goto label_1a5e98;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5ea0u: goto label_1a5ea0;
        case 0x1a5ea4u: goto label_1a5ea4;
        case 0x1a5ea8u: goto label_1a5ea8;
        case 0x1a5eacu: goto label_1a5eac;
        case 0x1a5eb0u: goto label_1a5eb0;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eb8u: goto label_1a5eb8;
        case 0x1a5ebcu: goto label_1a5ebc;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5ec4u: goto label_1a5ec4;
        case 0x1a5ec8u: goto label_1a5ec8;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ed0u: goto label_1a5ed0;
        case 0x1a5ed4u: goto label_1a5ed4;
        case 0x1a5ed8u: goto label_1a5ed8;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5ee0u: goto label_1a5ee0;
        case 0x1a5ee4u: goto label_1a5ee4;
        case 0x1a5ee8u: goto label_1a5ee8;
        case 0x1a5eecu: goto label_1a5eec;
        case 0x1a5ef0u: goto label_1a5ef0;
        case 0x1a5ef4u: goto label_1a5ef4;
        case 0x1a5ef8u: goto label_1a5ef8;
        case 0x1a5efcu: goto label_1a5efc;
        case 0x1a5f00u: goto label_1a5f00;
        case 0x1a5f04u: goto label_1a5f04;
        case 0x1a5f08u: goto label_1a5f08;
        case 0x1a5f0cu: goto label_1a5f0c;
        case 0x1a5f10u: goto label_1a5f10;
        case 0x1a5f14u: goto label_1a5f14;
        case 0x1a5f18u: goto label_1a5f18;
        case 0x1a5f1cu: goto label_1a5f1c;
        case 0x1a5f20u: goto label_1a5f20;
        case 0x1a5f24u: goto label_1a5f24;
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f2cu: goto label_1a5f2c;
        case 0x1a5f30u: goto label_1a5f30;
        case 0x1a5f34u: goto label_1a5f34;
        case 0x1a5f38u: goto label_1a5f38;
        case 0x1a5f3cu: goto label_1a5f3c;
        case 0x1a5f40u: goto label_1a5f40;
        case 0x1a5f44u: goto label_1a5f44;
        case 0x1a5f48u: goto label_1a5f48;
        case 0x1a5f4cu: goto label_1a5f4c;
        case 0x1a5f50u: goto label_1a5f50;
        case 0x1a5f54u: goto label_1a5f54;
        case 0x1a5f58u: goto label_1a5f58;
        case 0x1a5f5cu: goto label_1a5f5c;
        case 0x1a5f60u: goto label_1a5f60;
        case 0x1a5f64u: goto label_1a5f64;
        case 0x1a5f68u: goto label_1a5f68;
        case 0x1a5f6cu: goto label_1a5f6c;
        case 0x1a5f70u: goto label_1a5f70;
        case 0x1a5f74u: goto label_1a5f74;
        case 0x1a5f78u: goto label_1a5f78;
        case 0x1a5f7cu: goto label_1a5f7c;
        case 0x1a5f80u: goto label_1a5f80;
        case 0x1a5f84u: goto label_1a5f84;
        case 0x1a5f88u: goto label_1a5f88;
        case 0x1a5f8cu: goto label_1a5f8c;
        case 0x1a5f90u: goto label_1a5f90;
        case 0x1a5f94u: goto label_1a5f94;
        case 0x1a5f98u: goto label_1a5f98;
        case 0x1a5f9cu: goto label_1a5f9c;
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a5fa4u: goto label_1a5fa4;
        case 0x1a5fa8u: goto label_1a5fa8;
        case 0x1a5facu: goto label_1a5fac;
        case 0x1a5fb0u: goto label_1a5fb0;
        case 0x1a5fb4u: goto label_1a5fb4;
        case 0x1a5fb8u: goto label_1a5fb8;
        case 0x1a5fbcu: goto label_1a5fbc;
        case 0x1a5fc0u: goto label_1a5fc0;
        case 0x1a5fc4u: goto label_1a5fc4;
        case 0x1a5fc8u: goto label_1a5fc8;
        case 0x1a5fccu: goto label_1a5fcc;
        case 0x1a5fd0u: goto label_1a5fd0;
        case 0x1a5fd4u: goto label_1a5fd4;
        case 0x1a5fd8u: goto label_1a5fd8;
        case 0x1a5fdcu: goto label_1a5fdc;
        case 0x1a5fe0u: goto label_1a5fe0;
        case 0x1a5fe4u: goto label_1a5fe4;
        case 0x1a5fe8u: goto label_1a5fe8;
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a5ff0u: goto label_1a5ff0;
        case 0x1a5ff4u: goto label_1a5ff4;
        case 0x1a5ff8u: goto label_1a5ff8;
        case 0x1a5ffcu: goto label_1a5ffc;
        case 0x1a6000u: goto label_1a6000;
        case 0x1a6004u: goto label_1a6004;
        case 0x1a6008u: goto label_1a6008;
        case 0x1a600cu: goto label_1a600c;
        case 0x1a6010u: goto label_1a6010;
        case 0x1a6014u: goto label_1a6014;
        case 0x1a6018u: goto label_1a6018;
        case 0x1a601cu: goto label_1a601c;
        case 0x1a6020u: goto label_1a6020;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a6028u: goto label_1a6028;
        case 0x1a602cu: goto label_1a602c;
        case 0x1a6030u: goto label_1a6030;
        case 0x1a6034u: goto label_1a6034;
        case 0x1a6038u: goto label_1a6038;
        case 0x1a603cu: goto label_1a603c;
        case 0x1a6040u: goto label_1a6040;
        case 0x1a6044u: goto label_1a6044;
        case 0x1a6048u: goto label_1a6048;
        case 0x1a604cu: goto label_1a604c;
        case 0x1a6050u: goto label_1a6050;
        case 0x1a6054u: goto label_1a6054;
        case 0x1a6058u: goto label_1a6058;
        case 0x1a605cu: goto label_1a605c;
        case 0x1a6060u: goto label_1a6060;
        case 0x1a6064u: goto label_1a6064;
        case 0x1a6068u: goto label_1a6068;
        case 0x1a606cu: goto label_1a606c;
        case 0x1a6070u: goto label_1a6070;
        case 0x1a6074u: goto label_1a6074;
        case 0x1a6078u: goto label_1a6078;
        case 0x1a607cu: goto label_1a607c;
        case 0x1a6080u: goto label_1a6080;
        case 0x1a6084u: goto label_1a6084;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a608cu: goto label_1a608c;
        case 0x1a6090u: goto label_1a6090;
        case 0x1a6094u: goto label_1a6094;
        case 0x1a6098u: goto label_1a6098;
        case 0x1a609cu: goto label_1a609c;
        case 0x1a60a0u: goto label_1a60a0;
        case 0x1a60a4u: goto label_1a60a4;
        case 0x1a60a8u: goto label_1a60a8;
        case 0x1a60acu: goto label_1a60ac;
        case 0x1a60b0u: goto label_1a60b0;
        case 0x1a60b4u: goto label_1a60b4;
        case 0x1a60b8u: goto label_1a60b8;
        case 0x1a60bcu: goto label_1a60bc;
        case 0x1a60c0u: goto label_1a60c0;
        case 0x1a60c4u: goto label_1a60c4;
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a60d0u: goto label_1a60d0;
        case 0x1a60d4u: goto label_1a60d4;
        case 0x1a60d8u: goto label_1a60d8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a60e0u: goto label_1a60e0;
        case 0x1a60e4u: goto label_1a60e4;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60ecu: goto label_1a60ec;
        case 0x1a60f0u: goto label_1a60f0;
        case 0x1a60f4u: goto label_1a60f4;
        case 0x1a60f8u: goto label_1a60f8;
        case 0x1a60fcu: goto label_1a60fc;
        case 0x1a6100u: goto label_1a6100;
        case 0x1a6104u: goto label_1a6104;
        case 0x1a6108u: goto label_1a6108;
        case 0x1a610cu: goto label_1a610c;
        case 0x1a6110u: goto label_1a6110;
        case 0x1a6114u: goto label_1a6114;
        case 0x1a6118u: goto label_1a6118;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6124u: goto label_1a6124;
        case 0x1a6128u: goto label_1a6128;
        case 0x1a612cu: goto label_1a612c;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6134u: goto label_1a6134;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a613cu: goto label_1a613c;
        case 0x1a6140u: goto label_1a6140;
        case 0x1a6144u: goto label_1a6144;
        default: break;
    }

    ctx->pc = 0x1a5dd0u;

label_1a5dd0:
    // 0x1a5dd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1a5dd4:
    // 0x1a5dd4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1a5dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1a5dd8:
    // 0x1a5dd8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1a5dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1a5ddc:
    // 0x1a5ddc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a5ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a5de0:
    // 0x1a5de0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a5de0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5de4:
    // 0x1a5de4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1a5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1a5de8:
    // 0x1a5de8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a5de8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5dec:
    // 0x1a5dec: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1a5decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1a5df0:
    // 0x1a5df0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1a5df0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5df4:
    // 0x1a5df4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1a5df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1a5df8:
    // 0x1a5df8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1a5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1a5dfc:
    // 0x1a5dfc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1a5dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1a5e00:
    // 0x1a5e00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a5e04:
    // 0x1a5e04: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1a5e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1a5e08:
    // 0x1a5e08: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1a5e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1a5e0c:
    // 0x1a5e0c: 0xc06a928  jal         func_1AA4A0
label_1a5e10:
    if (ctx->pc == 0x1A5E10u) {
        ctx->pc = 0x1A5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E0Cu;
        // 0x1a5e10: 0x8ed30014  lw          $s3, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E14u;
        goto label_1a5e14;
    }
    ctx->pc = 0x1A5E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E14u);
    ctx->pc = 0x1A5E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E0Cu;
    // 0x1a5e10: 0x8ed30014  lw          $s3, 0x14($s6) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1A5E0Cu, 0x1A5E14u)) {
        return;
    }
    ctx->pc = 0x1A5E14u;
label_1a5e14:
    // 0x1a5e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e18:
    // 0x1a5e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e1c:
    // 0x1a5e1c: 0xc06a8e4  jal         func_1AA390
label_1a5e20:
    if (ctx->pc == 0x1A5E20u) {
        ctx->pc = 0x1A5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E1Cu;
        // 0x1a5e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E24u;
        goto label_1a5e24;
    }
    ctx->pc = 0x1A5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E24u);
    ctx->pc = 0x1A5E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E1Cu;
    // 0x1a5e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA390u, 0x1A5E1Cu, 0x1A5E24u)) {
        return;
    }
    ctx->pc = 0x1A5E24u;
label_1a5e24:
    // 0x1a5e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e28:
    // 0x1a5e28: 0x124000b9  beqz        $s2, . + 4 + (0xB9 << 2)
label_1a5e2c:
    if (ctx->pc == 0x1A5E2Cu) {
        ctx->pc = 0x1A5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E28u;
        // 0x1a5e2c: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E30u;
        goto label_1a5e30;
    }
    ctx->pc = 0x1A5E28u;
    {
        const bool branch_taken_0x1a5e28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E28u;
        // 0x1a5e2c: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e28) {
            ctx->pc = 0x1A6110u;
            goto label_1a6110;
        }
    }
    ctx->pc = 0x1A5E30u;
label_1a5e30:
    // 0x1a5e30: 0x96c20080  lhu         $v0, 0x80($s6)
    ctx->pc = 0x1a5e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
label_1a5e34:
    // 0x1a5e34: 0x122000b3  beqz        $s1, . + 4 + (0xB3 << 2)
label_1a5e38:
    if (ctx->pc == 0x1A5E38u) {
        ctx->pc = 0x1A5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E34u;
        // 0x1a5e38: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E3Cu;
        goto label_1a5e3c;
    }
    ctx->pc = 0x1A5E34u;
    {
        const bool branch_taken_0x1a5e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E34u;
        // 0x1a5e38: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e34) {
            ctx->pc = 0x1A6104u;
            goto label_1a6104;
        }
    }
    ctx->pc = 0x1A5E3Cu;
label_1a5e3c:
    // 0x1a5e3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a5e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a5e40:
    // 0x1a5e40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a5e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a5e44:
    // 0x1a5e44: 0x24140030  addiu       $s4, $zero, 0x30
    ctx->pc = 0x1a5e44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a5e48:
    // 0x1a5e48: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a5e4c:
    // 0x1a5e4c: 0x0  nop
    ctx->pc = 0x1a5e4cu;
    // NOP
label_1a5e50:
    // 0x1a5e50: 0xc06a928  jal         func_1AA4A0
label_1a5e54:
    if (ctx->pc == 0x1A5E54u) {
        ctx->pc = 0x1A5E58u;
        goto label_1a5e58;
    }
    ctx->pc = 0x1A5E50u;
    SET_GPR_U32(ctx, 31, 0x1A5E58u);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1A5E50u, 0x1A5E58u)) {
        return;
    }
    ctx->pc = 0x1A5E58u;
label_1a5e58:
    // 0x1a5e58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e5c:
    // 0x1a5e5c: 0xc06a9dc  jal         func_1AA770
label_1a5e60:
    if (ctx->pc == 0x1A5E60u) {
        ctx->pc = 0x1A5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E5Cu;
        // 0x1a5e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E64u;
        goto label_1a5e64;
    }
    ctx->pc = 0x1A5E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E64u);
    ctx->pc = 0x1A5E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E5Cu;
    // 0x1a5e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA770u, 0x1A5E5Cu, 0x1A5E64u)) {
        return;
    }
    ctx->pc = 0x1A5E64u;
label_1a5e64:
    // 0x1a5e64: 0x163e0023  bne         $s1, $fp, . + 4 + (0x23 << 2)
label_1a5e68:
    if (ctx->pc == 0x1A5E68u) {
        ctx->pc = 0x1A5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E64u;
        // 0x1a5e68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E6Cu;
        goto label_1a5e6c;
    }
    ctx->pc = 0x1A5E64u;
    {
        const bool branch_taken_0x1a5e64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        ctx->pc = 0x1A5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E64u;
        // 0x1a5e68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e64) {
            ctx->pc = 0x1A5EF4u;
            goto label_1a5ef4;
        }
    }
    ctx->pc = 0x1A5E6Cu;
label_1a5e6c:
    // 0x1a5e6c: 0x6ac20077  ldl         $v0, 0x77($s6)
    ctx->pc = 0x1a5e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5e70:
    // 0x1a5e70: 0x6ec20070  ldr         $v0, 0x70($s6)
    ctx->pc = 0x1a5e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5e74:
    // 0x1a5e74: 0x8ec30078  lw          $v1, 0x78($s6)
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
label_1a5e78:
    // 0x1a5e78: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x1a5e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5e7c:
    // 0x1a5e7c: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x1a5e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5e80:
    // 0x1a5e80: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1a5e84:
    // 0x1a5e84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5e88:
    // 0x1a5e88: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_1a5e8c:
    if (ctx->pc == 0x1A5E8Cu) {
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E88u;
        // 0x1a5e8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E90u;
        goto label_1a5e90;
    }
    ctx->pc = 0x1A5E88u;
    {
        const bool branch_taken_0x1a5e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e88) {
            ctx->pc = 0x1A5E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5E88u;
            // 0x1a5e8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5EC8u;
            goto label_1a5ec8;
        }
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a5e94:
    // 0x1a5e94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a5e98:
    if (ctx->pc == 0x1A5E98u) {
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E9Cu;
        goto label_1a5e9c;
    }
    ctx->pc = 0x1A5E94u;
    {
        const bool branch_taken_0x1a5e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e94) {
            ctx->pc = 0x1A5EC4u;
            goto label_1a5ec4;
        }
    }
    ctx->pc = 0x1A5E9Cu;
label_1a5e9c:
    // 0x1a5e9c: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_1a5ea0:
    if (ctx->pc == 0x1A5EA0u) {
        ctx->pc = 0x1A5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E9Cu;
        // 0x1a5ea0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EA4u;
        goto label_1a5ea4;
    }
    ctx->pc = 0x1A5E9Cu;
    {
        const bool branch_taken_0x1a5e9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e9c) {
            ctx->pc = 0x1A5EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5E9Cu;
            // 0x1a5ea0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5EA4u;
            goto label_1a5ea4;
        }
    }
    ctx->pc = 0x1A5EA4u;
label_1a5ea4:
    // 0x1a5ea4: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x1a5ea4u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a5ea8:
    // 0x1a5ea8: 0x1812  mflo        $v1
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1a5eac:
    // 0x1a5eac: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
label_1a5eb0:
    if (ctx->pc == 0x1A5EB0u) {
        ctx->pc = 0x1A5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EACu;
        // 0x1a5eb0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EB4u;
        goto label_1a5eb4;
    }
    ctx->pc = 0x1A5EACu;
    {
        const bool branch_taken_0x1a5eac = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x1a5eac) {
            ctx->pc = 0x1A5EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5EACu;
            // 0x1a5eb0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5EC8u;
            goto label_1a5ec8;
        }
    }
    ctx->pc = 0x1A5EB4u;
label_1a5eb4:
    // 0x1a5eb4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a5eb8:
    // 0x1a5eb8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a5eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a5ebc:
    // 0x1a5ebc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a5ec0:
    if (ctx->pc == 0x1A5EC0u) {
        ctx->pc = 0x1A5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EBCu;
        // 0x1a5ec0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EC4u;
        goto label_1a5ec4;
    }
    ctx->pc = 0x1A5EBCu;
    {
        const bool branch_taken_0x1a5ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EBCu;
        // 0x1a5ec0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ebc) {
            ctx->pc = 0x1A5ECCu;
            goto label_1a5ecc;
        }
    }
    ctx->pc = 0x1A5EC4u;
label_1a5ec4:
    // 0x1a5ec4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a5ec8:
    // 0x1a5ec8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a5ecc:
    // 0x1a5ecc: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x1a5eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
label_1a5ed0:
    // 0x1a5ed0: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x1a5ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
label_1a5ed4:
    // 0x1a5ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ed8:
    // 0x1a5ed8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1a5edc:
    // 0x1a5edc: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a5ee0:
    // 0x1a5ee0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a5ee4:
    // 0x1a5ee4: 0x60f809  jalr        $v1
label_1a5ee8:
    if (ctx->pc == 0x1A5EE8u) {
        ctx->pc = 0x1A5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EE4u;
        // 0x1a5ee8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EECu;
        goto label_1a5eec;
    }
    ctx->pc = 0x1A5EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5EECu);
        ctx->pc = 0x1A5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EE4u;
        // 0x1a5ee8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5EE4u, 0x1A5EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5EECu;
label_1a5eec:
    // 0x1a5eec: 0x10000083  b           . + 4 + (0x83 << 2)
label_1a5ef0:
    if (ctx->pc == 0x1A5EF0u) {
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EF4u;
        goto label_1a5ef4;
    }
    ctx->pc = 0x1A5EECu;
    {
        const bool branch_taken_0x1a5eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5eec) {
            ctx->pc = 0x1A60FCu;
            goto label_1a60fc;
        }
    }
    ctx->pc = 0x1A5EF4u;
label_1a5ef4:
    // 0x1a5ef4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a5ef8:
    // 0x1a5ef8: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a5efc:
    // 0x1a5efc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a5f00:
    // 0x1a5f00: 0x10c20067  beq         $a2, $v0, . + 4 + (0x67 << 2)
label_1a5f04:
    if (ctx->pc == 0x1A5F04u) {
        ctx->pc = 0x1A5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F00u;
        // 0x1a5f04: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F08u;
        goto label_1a5f08;
    }
    ctx->pc = 0x1A5F00u;
    {
        const bool branch_taken_0x1a5f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F00u;
        // 0x1a5f04: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f00) {
            ctx->pc = 0x1A60A0u;
            goto label_1a60a0;
        }
    }
    ctx->pc = 0x1A5F08u;
label_1a5f08:
    // 0x1a5f08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5f0c:
    // 0x1a5f0c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1a5f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a5f10:
    // 0x1a5f10: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a5f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a5f14:
    // 0x1a5f14: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1a5f14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_1a5f18:
    // 0x1a5f18: 0xc71818  mult        $v1, $a2, $a3
    ctx->pc = 0x1a5f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a5f1c:
    // 0x1a5f1c: 0x871018  mult        $v0, $a0, $a3
    ctx->pc = 0x1a5f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a5f20:
    // 0x1a5f20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5f24:
    // 0x1a5f24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a5f28:
    // 0x1a5f28: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1a5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5f2c:
    // 0x1a5f2c: 0x6865000b  ldl         $a1, 0xB($v1)
    ctx->pc = 0x1a5f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a5f30:
    // 0x1a5f30: 0x6c650004  ldr         $a1, 0x4($v1)
    ctx->pc = 0x1a5f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a5f34:
    // 0x1a5f34: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x1a5f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a5f38:
    // 0x1a5f38: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1a5f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5f3c:
    // 0x1a5f3c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1a5f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5f40:
    // 0x1a5f40: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1a5f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1a5f44:
    // 0x1a5f44: 0x6883000b  ldl         $v1, 0xB($a0)
    ctx->pc = 0x1a5f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a5f48:
    // 0x1a5f48: 0x6c830004  ldr         $v1, 0x4($a0)
    ctx->pc = 0x1a5f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a5f4c:
    // 0x1a5f4c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1a5f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a5f50:
    // 0x1a5f50: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1a5f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5f54:
    // 0x1a5f54: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1a5f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5f58:
    // 0x1a5f58: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1a5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_1a5f5c:
    // 0x1a5f5c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5f60:
    // 0x1a5f60: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5f64:
    // 0x1a5f64: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5f68:
    // 0x1a5f68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5f6c:
    // 0x1a5f6c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a5f70:
    // 0x1a5f70: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a5f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a5f74:
    // 0x1a5f74: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1a5f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5f78:
    // 0x1a5f78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a5f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a5f7c:
    // 0x1a5f7c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1a5f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a5f80:
    // 0x1a5f80: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1a5f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5f84:
    // 0x1a5f84: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a5f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a5f88:
    // 0x1a5f88: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1a5f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a5f8c:
    // 0x1a5f8c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1a5f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5f90:
    // 0x1a5f90: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1a5f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5f94:
    // 0x1a5f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a5f98:
    // 0x1a5f98: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1a5f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5f9c:
    // 0x1a5f9c: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1a5f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5fa0:
    // 0x1a5fa0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1a5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_1a5fa4:
    // 0x1a5fa4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1a5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5fa8:
    // 0x1a5fa8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1a5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5fac:
    // 0x1a5fac: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a5facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a5fb0:
    // 0x1a5fb0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1a5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5fb4:
    // 0x1a5fb4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1a5fb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1a5fb8:
    // 0x1a5fb8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a5fbc:
    // 0x1a5fbc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a5fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a5fc0:
    // 0x1a5fc0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1a5fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a5fc4:
    // 0x1a5fc4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a5fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a5fc8:
    // 0x1a5fc8: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x1a5fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a5fcc:
    // 0x1a5fcc: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x1a5fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a5fd0:
    // 0x1a5fd0: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1a5fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a5fd4:
    // 0x1a5fd4: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x1a5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5fd8:
    // 0x1a5fd8: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x1a5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5fdc:
    // 0x1a5fdc: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1a5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1a5fe0:
    // 0x1a5fe0: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1a5fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a5fe4:
    // 0x1a5fe4: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1a5fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a5fe8:
    // 0x1a5fe8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5fec:
    // 0x1a5fec: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x1a5fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5ff0:
    // 0x1a5ff0: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x1a5ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5ff4:
    // 0x1a5ff4: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1a5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_1a5ff8:
    // 0x1a5ff8: 0xa6060022  sh          $a2, 0x22($s0)
    ctx->pc = 0x1a5ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 6));
label_1a5ffc:
    // 0x1a5ffc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a6000:
    // 0x1a6000: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1a6004:
    if (ctx->pc == 0x1A6004u) {
        ctx->pc = 0x1A6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6000u;
        // 0x1a6004: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6008u;
        goto label_1a6008;
    }
    ctx->pc = 0x1A6000u;
    {
        const bool branch_taken_0x1a6000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6000u;
        // 0x1a6004: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6000) {
            ctx->pc = 0x1A6044u;
            goto label_1a6044;
        }
    }
    ctx->pc = 0x1A6008u;
label_1a6008:
    // 0x1a6008: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a600c:
    // 0x1a600c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a6010:
    if (ctx->pc == 0x1A6010u) {
        ctx->pc = 0x1A6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A600Cu;
        // 0x1a6010: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6014u;
        goto label_1a6014;
    }
    ctx->pc = 0x1A600Cu;
    {
        const bool branch_taken_0x1a600c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A600Cu;
        // 0x1a6010: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a600c) {
            ctx->pc = 0x1A6040u;
            goto label_1a6040;
        }
    }
    ctx->pc = 0x1A6014u;
label_1a6014:
    // 0x1a6014: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_1a6018:
    if (ctx->pc == 0x1A6018u) {
        ctx->pc = 0x1A6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6014u;
        // 0x1a6018: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A601Cu;
        goto label_1a601c;
    }
    ctx->pc = 0x1A6014u;
    {
        const bool branch_taken_0x1a6014 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6014) {
            ctx->pc = 0x1A6018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6014u;
            // 0x1a6018: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A601Cu;
            goto label_1a601c;
        }
    }
    ctx->pc = 0x1A601Cu;
label_1a601c:
    // 0x1a601c: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x1a601cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a6020:
    // 0x1a6020: 0x1812  mflo        $v1
    ctx->pc = 0x1a6020u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1a6024:
    // 0x1a6024: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_1a6028:
    if (ctx->pc == 0x1A6028u) {
        ctx->pc = 0x1A6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6024u;
        // 0x1a6028: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A602Cu;
        goto label_1a602c;
    }
    ctx->pc = 0x1A6024u;
    {
        const bool branch_taken_0x1a6024 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1A6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6024u;
        // 0x1a6028: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6024) {
            ctx->pc = 0x1A6044u;
            goto label_1a6044;
        }
    }
    ctx->pc = 0x1A602Cu;
label_1a602c:
    // 0x1a602c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1a602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a6030:
    // 0x1a6030: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a6034:
    // 0x1a6034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a6038:
    if (ctx->pc == 0x1A6038u) {
        ctx->pc = 0x1A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6034u;
        // 0x1a6038: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A603Cu;
        goto label_1a603c;
    }
    ctx->pc = 0x1A6034u;
    {
        const bool branch_taken_0x1a6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6034u;
        // 0x1a6038: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6034) {
            ctx->pc = 0x1A6044u;
            goto label_1a6044;
        }
    }
    ctx->pc = 0x1A603Cu;
label_1a603c:
    // 0x1a603c: 0x0  nop
    ctx->pc = 0x1a603cu;
    // NOP
label_1a6040:
    // 0x1a6040: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a6040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a6044:
    // 0x1a6044: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x1a6044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
label_1a6048:
    // 0x1a6048: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a604c:
    // 0x1a604c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a6050:
    if (ctx->pc == 0x1A6050u) {
        ctx->pc = 0x1A6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A604Cu;
        // 0x1a6050: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6054u;
        goto label_1a6054;
    }
    ctx->pc = 0x1A604Cu;
    {
        const bool branch_taken_0x1a604c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A604Cu;
        // 0x1a6050: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a604c) {
            ctx->pc = 0x1A6064u;
            goto label_1a6064;
        }
    }
    ctx->pc = 0x1A6054u;
label_1a6054:
    // 0x1a6054: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1a6054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a6058:
    // 0x1a6058: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a6058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a605c:
    // 0x1a605c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a6060:
    if (ctx->pc == 0x1A6060u) {
        ctx->pc = 0x1A6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A605Cu;
        // 0x1a6060: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6064u;
        goto label_1a6064;
    }
    ctx->pc = 0x1A605Cu;
    {
        const bool branch_taken_0x1a605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A605Cu;
        // 0x1a6060: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a605c) {
            ctx->pc = 0x1A606Cu;
            goto label_1a606c;
        }
    }
    ctx->pc = 0x1A6064u;
label_1a6064:
    // 0x1a6064: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6068:
    if (ctx->pc == 0x1A6068u) {
        ctx->pc = 0x1A6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6064u;
        // 0x1a6068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A606Cu;
        goto label_1a606c;
    }
    ctx->pc = 0x1A6064u;
    {
        const bool branch_taken_0x1a6064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6064u;
        // 0x1a6068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6064) {
            ctx->pc = 0x1A6070u;
            goto label_1a6070;
        }
    }
    ctx->pc = 0x1A606Cu;
label_1a606c:
    // 0x1a606c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a6070:
    // 0x1a6070: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1a6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6074:
    // 0x1a6074: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a6074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6078:
    // 0x1a6078: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a6078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a607c:
    // 0x1a607c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a607cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a6080:
    // 0x1a6080: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1a6080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6084:
    // 0x1a6084: 0xc069f90  jal         func_1A7E40
label_1a6088:
    if (ctx->pc == 0x1A6088u) {
        ctx->pc = 0x1A6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6084u;
        // 0x1a6088: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A608Cu;
        goto label_1a608c;
    }
    ctx->pc = 0x1A6084u;
    SET_GPR_U32(ctx, 31, 0x1A608Cu);
    ctx->pc = 0x1A6088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6084u;
    // 0x1a6088: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7E40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7E40u, 0x1A6084u, 0x1A608Cu)) {
        return;
    }
    ctx->pc = 0x1A608Cu;
label_1a608c:
    // 0x1a608c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6090:
    // 0x1a6090: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1a6090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1a6094:
    // 0x1a6094: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a6094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6098:
    // 0x1a6098: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a609c:
    if (ctx->pc == 0x1A609Cu) {
        ctx->pc = 0x1A609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6098u;
        // 0x1a609c: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60A0u;
        goto label_1a60a0;
    }
    ctx->pc = 0x1A6098u;
    {
        const bool branch_taken_0x1a6098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6098u;
        // 0x1a609c: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6098) {
            ctx->pc = 0x1A60A4u;
            goto label_1a60a4;
        }
    }
    ctx->pc = 0x1A60A0u;
label_1a60a0:
    // 0x1a60a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1a60a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a60a4:
    // 0x1a60a4: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
label_1a60a8:
    if (ctx->pc == 0x1A60A8u) {
        ctx->pc = 0x1A60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60A4u;
        // 0x1a60a8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60ACu;
        goto label_1a60ac;
    }
    ctx->pc = 0x1A60A4u;
    {
        const bool branch_taken_0x1a60a4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60A4u;
        // 0x1a60a8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60a4) {
            ctx->pc = 0x1A60C8u;
            goto label_1a60c8;
        }
    }
    ctx->pc = 0x1A60ACu;
label_1a60ac:
    // 0x1a60ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a60acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a60b0:
    // 0x1a60b0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a60b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a60b4:
    // 0x1a60b4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a60b8:
    // 0x1a60b8: 0x60f809  jalr        $v1
label_1a60bc:
    if (ctx->pc == 0x1A60BCu) {
        ctx->pc = 0x1A60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60B8u;
        // 0x1a60bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60C0u;
        goto label_1a60c0;
    }
    ctx->pc = 0x1A60B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A60C0u);
        ctx->pc = 0x1A60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60B8u;
        // 0x1a60bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60B8u, 0x1A60C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A60C0u;
label_1a60c0:
    // 0x1a60c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a60c4:
    if (ctx->pc == 0x1A60C4u) {
        ctx->pc = 0x1A60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C0u;
        // 0x1a60c4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60C8u;
        goto label_1a60c8;
    }
    ctx->pc = 0x1A60C0u;
    {
        const bool branch_taken_0x1a60c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C0u;
        // 0x1a60c4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c0) {
            ctx->pc = 0x1A60F8u;
            goto label_1a60f8;
        }
    }
    ctx->pc = 0x1A60C8u;
label_1a60c8:
    // 0x1a60c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a60c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a60cc:
    // 0x1a60cc: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a60d0:
    // 0x1a60d0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a60d4:
    // 0x1a60d4: 0x60f809  jalr        $v1
label_1a60d8:
    if (ctx->pc == 0x1A60D8u) {
        ctx->pc = 0x1A60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60D4u;
        // 0x1a60d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60DCu;
        goto label_1a60dc;
    }
    ctx->pc = 0x1A60D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A60DCu);
        ctx->pc = 0x1A60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60D4u;
        // 0x1a60d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60D4u, 0x1A60DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A60DCu;
label_1a60dc:
    // 0x1a60dc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1a60e0:
    // 0x1a60e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a60e4:
    // 0x1a60e4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1a60e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1a60e8:
    // 0x1a60e8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1a60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a60ec:
    // 0x1a60ec: 0x60f809  jalr        $v1
label_1a60f0:
    if (ctx->pc == 0x1A60F0u) {
        ctx->pc = 0x1A60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60ECu;
        // 0x1a60f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60F4u;
        goto label_1a60f4;
    }
    ctx->pc = 0x1A60ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A60F4u);
        ctx->pc = 0x1A60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60ECu;
        // 0x1a60f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60ECu, 0x1A60F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A60F4u;
label_1a60f4:
    // 0x1a60f4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1a60f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a60f8:
    // 0x1a60f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a60f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a60fc:
    // 0x1a60fc: 0x1620ff54  bnez        $s1, . + 4 + (-0xAC << 2)
label_1a6100:
    if (ctx->pc == 0x1A6100u) {
        ctx->pc = 0x1A6104u;
        goto label_1a6104;
    }
    ctx->pc = 0x1A60FCu;
    {
        const bool branch_taken_0x1a60fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a60fc) {
            ctx->pc = 0x1A5E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e50;
        }
    }
    ctx->pc = 0x1A6104u;
label_1a6104:
    // 0x1a6104: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a6104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a6108:
    // 0x1a6108: 0xc069a06  jal         func_1A6818
label_1a610c:
    if (ctx->pc == 0x1A610Cu) {
        ctx->pc = 0x1A610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6108u;
        // 0x1a610c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6110u;
        goto label_1a6110;
    }
    ctx->pc = 0x1A6108u;
    SET_GPR_U32(ctx, 31, 0x1A6110u);
    ctx->pc = 0x1A610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6108u;
    // 0x1a610c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A6818u, 0x1A6108u, 0x1A6110u)) {
        return;
    }
    ctx->pc = 0x1A6110u;
label_1a6110:
    // 0x1a6110: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a6110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6114:
    // 0x1a6114: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1a6114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a6118:
    // 0x1a6118: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1a6118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a611c:
    // 0x1a611c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1a611cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a6120:
    // 0x1a6120: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1a6120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a6124:
    // 0x1a6124: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1a6124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a6128:
    // 0x1a6128: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1a6128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a612c:
    // 0x1a612c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1a612cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6130:
    // 0x1a6130: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a6130u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6134:
    // 0x1a6134: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1a6134u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a6138:
    // 0x1a6138: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a613c:
    // 0x1a613c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1a613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a6140:
    // 0x1a6140: 0x3e00008  jr          $ra
label_1a6144:
    if (ctx->pc == 0x1A6144u) {
        ctx->pc = 0x1A6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6140u;
        // 0x1a6144: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6148u;
        goto label_fallthrough_0x1a6140;
    }
    ctx->pc = 0x1A6140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6140u;
        // 0x1a6144: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6140:
    ctx->pc = 0x1A6148u;
}
