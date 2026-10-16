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

// Function: sub_00219D08
// Address: 0x219d08 - 0x21a130
void sub_00219D08_0x219d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219D08_0x219d08");
#endif

    switch (ctx->pc) {
        case 0x219d08u: goto label_219d08;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d10u: goto label_219d10;
        case 0x219d14u: goto label_219d14;
        case 0x219d18u: goto label_219d18;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d20u: goto label_219d20;
        case 0x219d24u: goto label_219d24;
        case 0x219d28u: goto label_219d28;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d30u: goto label_219d30;
        case 0x219d34u: goto label_219d34;
        case 0x219d38u: goto label_219d38;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d40u: goto label_219d40;
        case 0x219d44u: goto label_219d44;
        case 0x219d48u: goto label_219d48;
        case 0x219d4cu: goto label_219d4c;
        case 0x219d50u: goto label_219d50;
        case 0x219d54u: goto label_219d54;
        case 0x219d58u: goto label_219d58;
        case 0x219d5cu: goto label_219d5c;
        case 0x219d60u: goto label_219d60;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d70u: goto label_219d70;
        case 0x219d74u: goto label_219d74;
        case 0x219d78u: goto label_219d78;
        case 0x219d7cu: goto label_219d7c;
        case 0x219d80u: goto label_219d80;
        case 0x219d84u: goto label_219d84;
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        case 0x219da0u: goto label_219da0;
        case 0x219da4u: goto label_219da4;
        case 0x219da8u: goto label_219da8;
        case 0x219dacu: goto label_219dac;
        case 0x219db0u: goto label_219db0;
        case 0x219db4u: goto label_219db4;
        case 0x219db8u: goto label_219db8;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dc4u: goto label_219dc4;
        case 0x219dc8u: goto label_219dc8;
        case 0x219dccu: goto label_219dcc;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd4u: goto label_219dd4;
        case 0x219dd8u: goto label_219dd8;
        case 0x219ddcu: goto label_219ddc;
        case 0x219de0u: goto label_219de0;
        case 0x219de4u: goto label_219de4;
        case 0x219de8u: goto label_219de8;
        case 0x219decu: goto label_219dec;
        case 0x219df0u: goto label_219df0;
        case 0x219df4u: goto label_219df4;
        case 0x219df8u: goto label_219df8;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e00u: goto label_219e00;
        case 0x219e04u: goto label_219e04;
        case 0x219e08u: goto label_219e08;
        case 0x219e0cu: goto label_219e0c;
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f40u: goto label_219f40;
        case 0x219f44u: goto label_219f44;
        case 0x219f48u: goto label_219f48;
        case 0x219f4cu: goto label_219f4c;
        case 0x219f50u: goto label_219f50;
        case 0x219f54u: goto label_219f54;
        case 0x219f58u: goto label_219f58;
        case 0x219f5cu: goto label_219f5c;
        case 0x219f60u: goto label_219f60;
        case 0x219f64u: goto label_219f64;
        case 0x219f68u: goto label_219f68;
        case 0x219f6cu: goto label_219f6c;
        case 0x219f70u: goto label_219f70;
        case 0x219f74u: goto label_219f74;
        case 0x219f78u: goto label_219f78;
        case 0x219f7cu: goto label_219f7c;
        case 0x219f80u: goto label_219f80;
        case 0x219f84u: goto label_219f84;
        case 0x219f88u: goto label_219f88;
        case 0x219f8cu: goto label_219f8c;
        case 0x219f90u: goto label_219f90;
        case 0x219f94u: goto label_219f94;
        case 0x219f98u: goto label_219f98;
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fa8u: goto label_219fa8;
        case 0x219facu: goto label_219fac;
        case 0x219fb0u: goto label_219fb0;
        case 0x219fb4u: goto label_219fb4;
        case 0x219fb8u: goto label_219fb8;
        case 0x219fbcu: goto label_219fbc;
        case 0x219fc0u: goto label_219fc0;
        case 0x219fc4u: goto label_219fc4;
        case 0x219fc8u: goto label_219fc8;
        case 0x219fccu: goto label_219fcc;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fe0u: goto label_219fe0;
        case 0x219fe4u: goto label_219fe4;
        case 0x219fe8u: goto label_219fe8;
        case 0x219fecu: goto label_219fec;
        case 0x219ff0u: goto label_219ff0;
        case 0x219ff4u: goto label_219ff4;
        case 0x219ff8u: goto label_219ff8;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a000u: goto label_21a000;
        case 0x21a004u: goto label_21a004;
        case 0x21a008u: goto label_21a008;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a010u: goto label_21a010;
        case 0x21a014u: goto label_21a014;
        case 0x21a018u: goto label_21a018;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a020u: goto label_21a020;
        case 0x21a024u: goto label_21a024;
        case 0x21a028u: goto label_21a028;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a030u: goto label_21a030;
        case 0x21a034u: goto label_21a034;
        case 0x21a038u: goto label_21a038;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a040u: goto label_21a040;
        case 0x21a044u: goto label_21a044;
        case 0x21a048u: goto label_21a048;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a050u: goto label_21a050;
        case 0x21a054u: goto label_21a054;
        case 0x21a058u: goto label_21a058;
        case 0x21a05cu: goto label_21a05c;
        case 0x21a060u: goto label_21a060;
        case 0x21a064u: goto label_21a064;
        case 0x21a068u: goto label_21a068;
        case 0x21a06cu: goto label_21a06c;
        case 0x21a070u: goto label_21a070;
        case 0x21a074u: goto label_21a074;
        case 0x21a078u: goto label_21a078;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a080u: goto label_21a080;
        case 0x21a084u: goto label_21a084;
        case 0x21a088u: goto label_21a088;
        case 0x21a08cu: goto label_21a08c;
        case 0x21a090u: goto label_21a090;
        case 0x21a094u: goto label_21a094;
        case 0x21a098u: goto label_21a098;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0a4u: goto label_21a0a4;
        case 0x21a0a8u: goto label_21a0a8;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a0b0u: goto label_21a0b0;
        case 0x21a0b4u: goto label_21a0b4;
        case 0x21a0b8u: goto label_21a0b8;
        case 0x21a0bcu: goto label_21a0bc;
        case 0x21a0c0u: goto label_21a0c0;
        case 0x21a0c4u: goto label_21a0c4;
        case 0x21a0c8u: goto label_21a0c8;
        case 0x21a0ccu: goto label_21a0cc;
        case 0x21a0d0u: goto label_21a0d0;
        case 0x21a0d4u: goto label_21a0d4;
        case 0x21a0d8u: goto label_21a0d8;
        case 0x21a0dcu: goto label_21a0dc;
        case 0x21a0e0u: goto label_21a0e0;
        case 0x21a0e4u: goto label_21a0e4;
        case 0x21a0e8u: goto label_21a0e8;
        case 0x21a0ecu: goto label_21a0ec;
        case 0x21a0f0u: goto label_21a0f0;
        case 0x21a0f4u: goto label_21a0f4;
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a0fcu: goto label_21a0fc;
        case 0x21a100u: goto label_21a100;
        case 0x21a104u: goto label_21a104;
        case 0x21a108u: goto label_21a108;
        case 0x21a10cu: goto label_21a10c;
        case 0x21a110u: goto label_21a110;
        case 0x21a114u: goto label_21a114;
        case 0x21a118u: goto label_21a118;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a120u: goto label_21a120;
        case 0x21a124u: goto label_21a124;
        case 0x21a128u: goto label_21a128;
        case 0x21a12cu: goto label_21a12c;
        default: break;
    }

    ctx->pc = 0x219d08u;

label_219d08:
    // 0x219d08: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x219d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_219d0c:
    // 0x219d0c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x219d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_219d10:
    // 0x219d10: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x219d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_219d14:
    // 0x219d14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x219d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219d18:
    // 0x219d18: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x219d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_219d1c:
    // 0x219d1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x219d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219d20:
    // 0x219d20: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x219d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_219d24:
    // 0x219d24: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x219d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_219d28:
    // 0x219d28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x219d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_219d2c:
    // 0x219d2c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x219d2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_219d30:
    // 0x219d30: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x219d30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_219d34:
    // 0x219d34: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x219d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_219d38:
    // 0x219d38: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x219d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_219d3c:
    // 0x219d3c: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x219d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_219d40:
    // 0x219d40: 0x120000ef  beqz        $s0, . + 4 + (0xEF << 2)
label_219d44:
    if (ctx->pc == 0x219D44u) {
        ctx->pc = 0x219D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D40u;
        // 0x219d44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D48u;
        goto label_219d48;
    }
    ctx->pc = 0x219D40u;
    {
        const bool branch_taken_0x219d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D40u;
        // 0x219d44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d40) {
            ctx->pc = 0x21A100u;
            goto label_21a100;
        }
    }
    ctx->pc = 0x219D48u;
label_219d48:
    // 0x219d48: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x219d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_219d4c:
    // 0x219d4c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x219d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_219d50:
    // 0x219d50: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
label_219d54:
    if (ctx->pc == 0x219D54u) {
        ctx->pc = 0x219D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D50u;
        // 0x219d54: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D58u;
        goto label_219d58;
    }
    ctx->pc = 0x219D50u;
    {
        const bool branch_taken_0x219d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D50u;
        // 0x219d54: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d50) {
            ctx->pc = 0x21A100u;
            goto label_21a100;
        }
    }
    ctx->pc = 0x219D58u;
label_219d58:
    // 0x219d58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219d5c:
    // 0x219d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d60:
    // 0x219d60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_219d64:
    // 0x219d64: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x219d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_219d68:
    // 0x219d68: 0xc0c493d  jal         func_3124F4
label_219d6c:
    if (ctx->pc == 0x219D6Cu) {
        ctx->pc = 0x219D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D68u;
        // 0x219d6c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D70u;
        goto label_219d70;
    }
    ctx->pc = 0x219D68u;
    SET_GPR_U32(ctx, 31, 0x219D70u);
    ctx->pc = 0x219D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D68u;
    // 0x219d6c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x219D68u, 0x219D70u)) {
        return;
    }
    ctx->pc = 0x219D70u;
label_219d70:
    // 0x219d70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x219d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d74:
    // 0x219d74: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_219d78:
    // 0x219d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d7c:
    // 0x219d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219d80:
    // 0x219d80: 0xc0c493d  jal         func_3124F4
label_219d84:
    if (ctx->pc == 0x219D84u) {
        ctx->pc = 0x219D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D80u;
        // 0x219d84: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D88u;
        goto label_219d88;
    }
    ctx->pc = 0x219D80u;
    SET_GPR_U32(ctx, 31, 0x219D88u);
    ctx->pc = 0x219D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D80u;
    // 0x219d84: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x219D80u, 0x219D88u)) {
        return;
    }
    ctx->pc = 0x219D88u;
label_219d88:
    // 0x219d88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_219d8c:
    // 0x219d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d90:
    // 0x219d90: 0xc0c493d  jal         func_3124F4
label_219d94:
    if (ctx->pc == 0x219D94u) {
        ctx->pc = 0x219D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D90u;
        // 0x219d94: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D98u;
        goto label_219d98;
    }
    ctx->pc = 0x219D90u;
    SET_GPR_U32(ctx, 31, 0x219D98u);
    ctx->pc = 0x219D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D90u;
    // 0x219d94: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x219D90u, 0x219D98u)) {
        return;
    }
    ctx->pc = 0x219D98u;
label_219d98:
    // 0x219d98: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_219d9c:
    // 0x219d9c: 0x1860006a  blez        $v1, . + 4 + (0x6A << 2)
label_219da0:
    if (ctx->pc == 0x219DA0u) {
        ctx->pc = 0x219DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D9Cu;
        // 0x219da0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DA4u;
        goto label_219da4;
    }
    ctx->pc = 0x219D9Cu;
    {
        const bool branch_taken_0x219d9c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x219DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D9Cu;
        // 0x219da0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d9c) {
            ctx->pc = 0x219F48u;
            goto label_219f48;
        }
    }
    ctx->pc = 0x219DA4u;
label_219da4:
    // 0x219da4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x219da4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219da8:
    // 0x219da8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x219da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_219dac:
    // 0x219dac: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_219db0:
    // 0x219db0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x219db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219db4:
    // 0x219db4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x219db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219db8:
    // 0x219db8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x219db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219dbc:
    // 0x219dbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x219dbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_219dc0:
    // 0x219dc0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x219dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219dc4:
    // 0x219dc4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x219dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_219dc8:
    // 0x219dc8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x219dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219dcc:
    // 0x219dcc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x219dccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_219dd0:
    // 0x219dd0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x219dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_219dd4:
    // 0x219dd4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x219dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219dd8:
    // 0x219dd8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x219dd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_219ddc:
    // 0x219ddc: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x219ddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_219de0:
    // 0x219de0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x219de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_219de4:
    // 0x219de4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_219de8:
    // 0x219de8: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x219de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_219dec:
    // 0x219dec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x219decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219df0:
    // 0x219df0: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x219df0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_219df4:
    // 0x219df4: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x219df4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_219df8:
    // 0x219df8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_219dfc:
    // 0x219dfc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_219e00:
    // 0x219e00: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x219e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_219e04:
    // 0x219e04: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x219e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219e08:
    // 0x219e08: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x219e08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_219e0c:
    // 0x219e0c: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x219e0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_219e10:
    // 0x219e10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_219e14:
    // 0x219e14: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_219e18:
    // 0x219e18: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x219e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_219e1c:
    // 0x219e1c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x219e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219e20:
    // 0x219e20: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x219e20u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_219e24:
    // 0x219e24: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x219e24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_219e28:
    // 0x219e28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x219e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_219e2c:
    // 0x219e2c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_219e30:
    // 0x219e30: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x219e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219e34:
    // 0x219e34: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x219e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219e38:
    // 0x219e38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x219e38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_219e3c:
    // 0x219e3c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x219e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_219e40:
    // 0x219e40: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x219e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_219e44:
    // 0x219e44: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x219e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219e48:
    // 0x219e48: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_219e4c:
    // 0x219e4c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x219e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219e50:
    // 0x219e50: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x219e50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_219e54:
    // 0x219e54: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x219e54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_219e58:
    // 0x219e58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x219e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_219e5c:
    // 0x219e5c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x219e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219e60:
    // 0x219e60: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x219e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_219e64:
    // 0x219e64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x219e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219e68:
    // 0x219e68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x219e68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_219e6c:
    // 0x219e6c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x219e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_219e70:
    // 0x219e70: 0x46013102  mul.s       $f4, $f6, $f1
    ctx->pc = 0x219e70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_219e74:
    // 0x219e74: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x219e74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_219e78:
    // 0x219e78: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x219e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_219e7c:
    // 0x219e7c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x219e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_219e80:
    // 0x219e80: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x219e80u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_219e84:
    // 0x219e84: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x219e84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_219e88:
    // 0x219e88: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x219e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_219e8c:
    // 0x219e8c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x219e8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_219e90:
    // 0x219e90: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x219e90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_219e94:
    // 0x219e94: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x219e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_219e98:
    // 0x219e98: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x219e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_219e9c:
    // 0x219e9c: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x219e9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_219ea0:
    // 0x219ea0: 0xc093aa8  jal         func_24EAA0
label_219ea4:
    if (ctx->pc == 0x219EA4u) {
        ctx->pc = 0x219EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA0u;
        // 0x219ea4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EA8u;
        goto label_219ea8;
    }
    ctx->pc = 0x219EA0u;
    SET_GPR_U32(ctx, 31, 0x219EA8u);
    ctx->pc = 0x219EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EA0u;
    // 0x219ea4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x219EA0u, 0x219EA8u)) {
        return;
    }
    ctx->pc = 0x219EA8u;
label_219ea8:
    // 0x219ea8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x219ea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_219eac:
    // 0x219eac: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x219eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219eb0:
    // 0x219eb0: 0x0  nop
    ctx->pc = 0x219eb0u;
    // NOP
label_219eb4:
    // 0x219eb4: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_219eb8:
    if (ctx->pc == 0x219EB8u) {
        ctx->pc = 0x219EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EB4u;
        // 0x219eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EBCu;
        goto label_219ebc;
    }
    ctx->pc = 0x219EB4u;
    {
        const bool branch_taken_0x219eb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EB4u;
        // 0x219eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219eb4) {
            ctx->pc = 0x219F30u;
            goto label_219f30;
        }
    }
    ctx->pc = 0x219EBCu;
label_219ebc:
    // 0x219ebc: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x219ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219ec0:
    // 0x219ec0: 0x0  nop
    ctx->pc = 0x219ec0u;
    // NOP
label_219ec4:
    // 0x219ec4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_219ec8:
    if (ctx->pc == 0x219EC8u) {
        ctx->pc = 0x219EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC4u;
        // 0x219ec8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219ECCu;
        goto label_219ecc;
    }
    ctx->pc = 0x219EC4u;
    {
        const bool branch_taken_0x219ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC4u;
        // 0x219ec8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ec4) {
            ctx->pc = 0x219EF0u;
            goto label_219ef0;
        }
    }
    ctx->pc = 0x219ECCu;
label_219ecc:
    // 0x219ecc: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x219eccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_219ed0:
    // 0x219ed0: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x219ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_219ed4:
    // 0x219ed4: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x219ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_219ed8:
    // 0x219ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x219ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_219edc:
    // 0x219edc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x219edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_219ee0:
    // 0x219ee0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x219ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_219ee4:
    // 0x219ee4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x219ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_219ee8:
    // 0x219ee8: 0xc093a88  jal         func_24EA20
label_219eec:
    if (ctx->pc == 0x219EECu) {
        ctx->pc = 0x219EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE8u;
        // 0x219eec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EF0u;
        goto label_219ef0;
    }
    ctx->pc = 0x219EE8u;
    SET_GPR_U32(ctx, 31, 0x219EF0u);
    ctx->pc = 0x219EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EE8u;
    // 0x219eec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x219EE8u, 0x219EF0u)) {
        return;
    }
    ctx->pc = 0x219EF0u;
label_219ef0:
    // 0x219ef0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x219ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219ef4:
    // 0x219ef4: 0x0  nop
    ctx->pc = 0x219ef4u;
    // NOP
label_219ef8:
    // 0x219ef8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_219efc:
    if (ctx->pc == 0x219EFCu) {
        ctx->pc = 0x219EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EF8u;
        // 0x219efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F00u;
        goto label_219f00;
    }
    ctx->pc = 0x219EF8u;
    {
        const bool branch_taken_0x219ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EF8u;
        // 0x219efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ef8) {
            ctx->pc = 0x219F30u;
            goto label_219f30;
        }
    }
    ctx->pc = 0x219F00u;
label_219f00:
    // 0x219f00: 0xc093a88  jal         func_24EA20
label_219f04:
    if (ctx->pc == 0x219F04u) {
        ctx->pc = 0x219F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F00u;
        // 0x219f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F08u;
        goto label_219f08;
    }
    ctx->pc = 0x219F00u;
    SET_GPR_U32(ctx, 31, 0x219F08u);
    ctx->pc = 0x219F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F00u;
    // 0x219f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x219F00u, 0x219F08u)) {
        return;
    }
    ctx->pc = 0x219F08u;
label_219f08:
    // 0x219f08: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x219f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219f0c:
    // 0x219f0c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x219f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219f10:
    // 0x219f10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x219f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_219f14:
    // 0x219f14: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x219f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219f18:
    // 0x219f18: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x219f18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_219f1c:
    // 0x219f1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x219f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_219f20:
    // 0x219f20: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x219f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_219f24:
    // 0x219f24: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x219f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_219f28:
    // 0x219f28: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x219f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_219f2c:
    // 0x219f2c: 0x0  nop
    ctx->pc = 0x219f2cu;
    // NOP
label_219f30:
    // 0x219f30: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x219f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_219f34:
    // 0x219f34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x219f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_219f38:
    // 0x219f38: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x219f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_219f3c:
    // 0x219f3c: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_219f40:
    if (ctx->pc == 0x219F40u) {
        ctx->pc = 0x219F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F3Cu;
        // 0x219f40: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F44u;
        goto label_219f44;
    }
    ctx->pc = 0x219F3Cu;
    {
        const bool branch_taken_0x219f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F3Cu;
        // 0x219f40: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f3c) {
            ctx->pc = 0x219DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219db0;
        }
    }
    ctx->pc = 0x219F44u;
label_219f44:
    // 0x219f44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219f48:
    // 0x219f48: 0xc093a88  jal         func_24EA20
label_219f4c:
    if (ctx->pc == 0x219F4Cu) {
        ctx->pc = 0x219F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F48u;
        // 0x219f4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F50u;
        goto label_219f50;
    }
    ctx->pc = 0x219F48u;
    SET_GPR_U32(ctx, 31, 0x219F50u);
    ctx->pc = 0x219F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F48u;
    // 0x219f4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x219F48u, 0x219F50u)) {
        return;
    }
    ctx->pc = 0x219F50u;
label_219f50:
    // 0x219f50: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x219f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219f54:
    // 0x219f54: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x219f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219f58:
    // 0x219f58: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x219f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_219f5c:
    // 0x219f5c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x219f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219f60:
    // 0x219f60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x219f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_219f64:
    // 0x219f64: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x219f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_219f68:
    // 0x219f68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x219f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_219f6c:
    // 0x219f6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x219f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_219f70:
    // 0x219f70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_219f74:
    // 0x219f74: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x219f74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219f78:
    // 0x219f78: 0x0  nop
    ctx->pc = 0x219f78u;
    // NOP
label_219f7c:
    // 0x219f7c: 0x45010060  bc1t        . + 4 + (0x60 << 2)
label_219f80:
    if (ctx->pc == 0x219F80u) {
        ctx->pc = 0x219F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F7Cu;
        // 0x219f80: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F84u;
        goto label_219f84;
    }
    ctx->pc = 0x219F7Cu;
    {
        const bool branch_taken_0x219f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x219F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F7Cu;
        // 0x219f80: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f7c) {
            ctx->pc = 0x21A100u;
            goto label_21a100;
        }
    }
    ctx->pc = 0x219F84u;
label_219f84:
    // 0x219f84: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x219f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_219f88:
    // 0x219f88: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x219f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_219f8c:
    // 0x219f8c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x219f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_219f90:
    // 0x219f90: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x219f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_219f94:
    // 0x219f94: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x219f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_219f98:
    // 0x219f98: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x219f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_219f9c:
    // 0x219f9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_219fa0:
    // 0x219fa0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x219fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_219fa4:
    // 0x219fa4: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x219fa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219fa8:
    // 0x219fa8: 0x0  nop
    ctx->pc = 0x219fa8u;
    // NOP
label_219fac:
    // 0x219fac: 0x45010054  bc1t        . + 4 + (0x54 << 2)
label_219fb0:
    if (ctx->pc == 0x219FB0u) {
        ctx->pc = 0x219FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FACu;
        // 0x219fb0: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FB4u;
        goto label_219fb4;
    }
    ctx->pc = 0x219FACu;
    {
        const bool branch_taken_0x219fac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x219FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FACu;
        // 0x219fb0: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fac) {
            ctx->pc = 0x21A100u;
            goto label_21a100;
        }
    }
    ctx->pc = 0x219FB4u;
label_219fb4:
    // 0x219fb4: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x219fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_219fb8:
    // 0x219fb8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x219fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_219fbc:
    // 0x219fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_219fc0:
    // 0x219fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219fc4:
    // 0x219fc4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x219fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219fc8:
    // 0x219fc8: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x219fc8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_219fcc:
    // 0x219fcc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x219fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219fd0:
    // 0x219fd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x219fd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_219fd4:
    // 0x219fd4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x219fd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_219fd8:
    // 0x219fd8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x219fd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_219fdc:
    // 0x219fdc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x219fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_219fe0:
    // 0x219fe0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x219fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_219fe4:
    // 0x219fe4: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x219fe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_219fe8:
    // 0x219fe8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x219fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_219fec:
    // 0x219fec: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x219fecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_219ff0:
    // 0x219ff0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x219ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_219ff4:
    // 0x219ff4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x219ff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_219ff8:
    // 0x219ff8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x219ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_219ffc:
    // 0x219ffc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x219ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_21a000:
    // 0x21a000: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_21a004:
    if (ctx->pc == 0x21A004u) {
        ctx->pc = 0x21A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A000u;
        // 0x21a004: 0x46000d07  neg.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A008u;
        goto label_21a008;
    }
    ctx->pc = 0x21A000u;
    {
        const bool branch_taken_0x21a000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A000u;
        // 0x21a004: 0x46000d07  neg.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a000) {
            ctx->pc = 0x21A0A0u;
            goto label_21a0a0;
        }
    }
    ctx->pc = 0x21A008u;
label_21a008:
    // 0x21a008: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x21a008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_21a00c:
    // 0x21a00c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x21a00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_21a010:
    // 0x21a010: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x21a010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_21a014:
    // 0x21a014: 0x460038c6  mov.s       $f3, $f7
    ctx->pc = 0x21a014u;
    ctx->f[3] = FPU_MOV_S(ctx->f[7]);
label_21a018:
    // 0x21a018: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x21a018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
label_21a01c:
    // 0x21a01c: 0x342137be  ori         $at, $at, 0x37BE
    ctx->pc = 0x21a01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14270);
label_21a020:
    // 0x21a020: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x21a020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_21a024:
    // 0x21a024: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x21a024u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
label_21a028:
    // 0x21a028: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x21a028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a02c:
    // 0x21a02c: 0x0  nop
    ctx->pc = 0x21a02cu;
    // NOP
label_21a030:
    // 0x21a030: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x21a030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21a034:
    // 0x21a034: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x21a034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_21a038:
    // 0x21a038: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x21a038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a03c:
    // 0x21a03c: 0x0  nop
    ctx->pc = 0x21a03cu;
    // NOP
label_21a040:
    // 0x21a040: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_21a044:
    if (ctx->pc == 0x21A044u) {
        ctx->pc = 0x21A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A040u;
        // 0x21a044: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A048u;
        goto label_21a048;
    }
    ctx->pc = 0x21A040u;
    {
        const bool branch_taken_0x21a040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a040) {
            ctx->pc = 0x21A044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A040u;
            // 0x21a044: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A098u;
            goto label_21a098;
        }
    }
    ctx->pc = 0x21A048u;
label_21a048:
    // 0x21a048: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x21a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21a04c:
    // 0x21a04c: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x21a04cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_21a050:
    // 0x21a050: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x21a050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_21a054:
    // 0x21a054: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x21a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a058:
    // 0x21a058: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x21a058u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_21a05c:
    // 0x21a05c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x21a05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_21a060:
    // 0x21a060: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a064:
    // 0x21a064: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x21a064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_21a068:
    // 0x21a068: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x21a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_21a06c:
    // 0x21a06c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x21a06cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_21a070:
    // 0x21a070: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x21a070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_21a074:
    // 0x21a074: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x21a074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_21a078:
    // 0x21a078: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x21a078u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_21a07c:
    // 0x21a07c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x21a07cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_21a080:
    // 0x21a080: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x21a080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a084:
    // 0x21a084: 0x0  nop
    ctx->pc = 0x21a084u;
    // NOP
label_21a088:
    // 0x21a088: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_21a08c:
    if (ctx->pc == 0x21A08Cu) {
        ctx->pc = 0x21A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A088u;
        // 0x21a08c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A090u;
        goto label_21a090;
    }
    ctx->pc = 0x21A088u;
    {
        const bool branch_taken_0x21a088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a088) {
            ctx->pc = 0x21A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A088u;
            // 0x21a08c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A0FCu;
            goto label_21a0fc;
        }
    }
    ctx->pc = 0x21A090u;
label_21a090:
    // 0x21a090: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_21a094:
    // 0x21a094: 0x0  nop
    ctx->pc = 0x21a094u;
    // NOP
label_21a098:
    // 0x21a098: 0x5480ffe5  bnel        $a0, $zero, . + 4 + (-0x1B << 2)
label_21a09c:
    if (ctx->pc == 0x21A09Cu) {
        ctx->pc = 0x21A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A098u;
        // 0x21a09c: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0A0u;
        goto label_21a0a0;
    }
    ctx->pc = 0x21A098u;
    {
        const bool branch_taken_0x21a098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a098) {
            ctx->pc = 0x21A09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A098u;
            // 0x21a09c: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a030;
        }
    }
    ctx->pc = 0x21A0A0u;
label_21a0a0:
    // 0x21a0a0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21a0a4:
    // 0x21a0a4: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x21a0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_21a0a8:
    // 0x21a0a8: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x21a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_21a0ac:
    // 0x21a0ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21a0b0:
    // 0x21a0b0: 0x40f809  jalr        $v0
label_21a0b4:
    if (ctx->pc == 0x21A0B4u) {
        ctx->pc = 0x21A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0B0u;
        // 0x21a0b4: 0x8cc402c4  lw          $a0, 0x2C4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0B8u;
        goto label_21a0b8;
    }
    ctx->pc = 0x21A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A0B8u);
        ctx->pc = 0x21A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0B0u;
        // 0x21a0b4: 0x8cc402c4  lw          $a0, 0x2C4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0B0u, 0x21A0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A0B8u;
label_21a0b8:
    // 0x21a0b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a0bc:
    // 0x21a0bc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x21a0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21a0c0:
    // 0x21a0c0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x21a0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_21a0c4:
    // 0x21a0c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x21a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21a0c8:
    // 0x21a0c8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x21a0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21a0cc:
    // 0x21a0cc: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x21a0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21a0d0:
    // 0x21a0d0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x21a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_21a0d4:
    // 0x21a0d4: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x21a0d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_21a0d8:
    // 0x21a0d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a0dc:
    // 0x21a0dc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x21a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_21a0e0:
    // 0x21a0e0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21a0e4:
    // 0x21a0e4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x21a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_21a0e8:
    // 0x21a0e8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x21a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_21a0ec:
    // 0x21a0ec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x21a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21a0f0:
    // 0x21a0f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21a0f4:
    // 0x21a0f4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x21a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_21a0f8:
    // 0x21a0f8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x21a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_21a0fc:
    // 0x21a0fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a100:
    // 0x21a100: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x21a100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21a104:
    // 0x21a104: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x21a104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21a108:
    // 0x21a108: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x21a108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21a10c:
    // 0x21a10c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x21a10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21a110:
    // 0x21a110: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x21a110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21a114:
    // 0x21a114: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x21a114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21a118:
    // 0x21a118: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21a11c:
    // 0x21a11c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x21a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_21a120:
    // 0x21a120: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x21a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21a124:
    // 0x21a124: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x21a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21a128:
    // 0x21a128: 0x3e00008  jr          $ra
label_21a12c:
    if (ctx->pc == 0x21A12Cu) {
        ctx->pc = 0x21A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A128u;
        // 0x21a12c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A130u;
        goto label_fallthrough_0x21a128;
    }
    ctx->pc = 0x21A128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A128u;
        // 0x21a12c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21a128:
    ctx->pc = 0x21A130u;
}
