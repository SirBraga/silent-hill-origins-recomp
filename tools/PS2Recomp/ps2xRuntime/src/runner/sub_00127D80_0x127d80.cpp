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

// Function: sub_00127D80
// Address: 0x127d80 - 0x128148
void sub_00127D80_0x127d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127D80_0x127d80");
#endif

    switch (ctx->pc) {
        case 0x127d80u: goto label_127d80;
        case 0x127d84u: goto label_127d84;
        case 0x127d88u: goto label_127d88;
        case 0x127d8cu: goto label_127d8c;
        case 0x127d90u: goto label_127d90;
        case 0x127d94u: goto label_127d94;
        case 0x127d98u: goto label_127d98;
        case 0x127d9cu: goto label_127d9c;
        case 0x127da0u: goto label_127da0;
        case 0x127da4u: goto label_127da4;
        case 0x127da8u: goto label_127da8;
        case 0x127dacu: goto label_127dac;
        case 0x127db0u: goto label_127db0;
        case 0x127db4u: goto label_127db4;
        case 0x127db8u: goto label_127db8;
        case 0x127dbcu: goto label_127dbc;
        case 0x127dc0u: goto label_127dc0;
        case 0x127dc4u: goto label_127dc4;
        case 0x127dc8u: goto label_127dc8;
        case 0x127dccu: goto label_127dcc;
        case 0x127dd0u: goto label_127dd0;
        case 0x127dd4u: goto label_127dd4;
        case 0x127dd8u: goto label_127dd8;
        case 0x127ddcu: goto label_127ddc;
        case 0x127de0u: goto label_127de0;
        case 0x127de4u: goto label_127de4;
        case 0x127de8u: goto label_127de8;
        case 0x127decu: goto label_127dec;
        case 0x127df0u: goto label_127df0;
        case 0x127df4u: goto label_127df4;
        case 0x127df8u: goto label_127df8;
        case 0x127dfcu: goto label_127dfc;
        case 0x127e00u: goto label_127e00;
        case 0x127e04u: goto label_127e04;
        case 0x127e08u: goto label_127e08;
        case 0x127e0cu: goto label_127e0c;
        case 0x127e10u: goto label_127e10;
        case 0x127e14u: goto label_127e14;
        case 0x127e18u: goto label_127e18;
        case 0x127e1cu: goto label_127e1c;
        case 0x127e20u: goto label_127e20;
        case 0x127e24u: goto label_127e24;
        case 0x127e28u: goto label_127e28;
        case 0x127e2cu: goto label_127e2c;
        case 0x127e30u: goto label_127e30;
        case 0x127e34u: goto label_127e34;
        case 0x127e38u: goto label_127e38;
        case 0x127e3cu: goto label_127e3c;
        case 0x127e40u: goto label_127e40;
        case 0x127e44u: goto label_127e44;
        case 0x127e48u: goto label_127e48;
        case 0x127e4cu: goto label_127e4c;
        case 0x127e50u: goto label_127e50;
        case 0x127e54u: goto label_127e54;
        case 0x127e58u: goto label_127e58;
        case 0x127e5cu: goto label_127e5c;
        case 0x127e60u: goto label_127e60;
        case 0x127e64u: goto label_127e64;
        case 0x127e68u: goto label_127e68;
        case 0x127e6cu: goto label_127e6c;
        case 0x127e70u: goto label_127e70;
        case 0x127e74u: goto label_127e74;
        case 0x127e78u: goto label_127e78;
        case 0x127e7cu: goto label_127e7c;
        case 0x127e80u: goto label_127e80;
        case 0x127e84u: goto label_127e84;
        case 0x127e88u: goto label_127e88;
        case 0x127e8cu: goto label_127e8c;
        case 0x127e90u: goto label_127e90;
        case 0x127e94u: goto label_127e94;
        case 0x127e98u: goto label_127e98;
        case 0x127e9cu: goto label_127e9c;
        case 0x127ea0u: goto label_127ea0;
        case 0x127ea4u: goto label_127ea4;
        case 0x127ea8u: goto label_127ea8;
        case 0x127eacu: goto label_127eac;
        case 0x127eb0u: goto label_127eb0;
        case 0x127eb4u: goto label_127eb4;
        case 0x127eb8u: goto label_127eb8;
        case 0x127ebcu: goto label_127ebc;
        case 0x127ec0u: goto label_127ec0;
        case 0x127ec4u: goto label_127ec4;
        case 0x127ec8u: goto label_127ec8;
        case 0x127eccu: goto label_127ecc;
        case 0x127ed0u: goto label_127ed0;
        case 0x127ed4u: goto label_127ed4;
        case 0x127ed8u: goto label_127ed8;
        case 0x127edcu: goto label_127edc;
        case 0x127ee0u: goto label_127ee0;
        case 0x127ee4u: goto label_127ee4;
        case 0x127ee8u: goto label_127ee8;
        case 0x127eecu: goto label_127eec;
        case 0x127ef0u: goto label_127ef0;
        case 0x127ef4u: goto label_127ef4;
        case 0x127ef8u: goto label_127ef8;
        case 0x127efcu: goto label_127efc;
        case 0x127f00u: goto label_127f00;
        case 0x127f04u: goto label_127f04;
        case 0x127f08u: goto label_127f08;
        case 0x127f0cu: goto label_127f0c;
        case 0x127f10u: goto label_127f10;
        case 0x127f14u: goto label_127f14;
        case 0x127f18u: goto label_127f18;
        case 0x127f1cu: goto label_127f1c;
        case 0x127f20u: goto label_127f20;
        case 0x127f24u: goto label_127f24;
        case 0x127f28u: goto label_127f28;
        case 0x127f2cu: goto label_127f2c;
        case 0x127f30u: goto label_127f30;
        case 0x127f34u: goto label_127f34;
        case 0x127f38u: goto label_127f38;
        case 0x127f3cu: goto label_127f3c;
        case 0x127f40u: goto label_127f40;
        case 0x127f44u: goto label_127f44;
        case 0x127f48u: goto label_127f48;
        case 0x127f4cu: goto label_127f4c;
        case 0x127f50u: goto label_127f50;
        case 0x127f54u: goto label_127f54;
        case 0x127f58u: goto label_127f58;
        case 0x127f5cu: goto label_127f5c;
        case 0x127f60u: goto label_127f60;
        case 0x127f64u: goto label_127f64;
        case 0x127f68u: goto label_127f68;
        case 0x127f6cu: goto label_127f6c;
        case 0x127f70u: goto label_127f70;
        case 0x127f74u: goto label_127f74;
        case 0x127f78u: goto label_127f78;
        case 0x127f7cu: goto label_127f7c;
        case 0x127f80u: goto label_127f80;
        case 0x127f84u: goto label_127f84;
        case 0x127f88u: goto label_127f88;
        case 0x127f8cu: goto label_127f8c;
        case 0x127f90u: goto label_127f90;
        case 0x127f94u: goto label_127f94;
        case 0x127f98u: goto label_127f98;
        case 0x127f9cu: goto label_127f9c;
        case 0x127fa0u: goto label_127fa0;
        case 0x127fa4u: goto label_127fa4;
        case 0x127fa8u: goto label_127fa8;
        case 0x127facu: goto label_127fac;
        case 0x127fb0u: goto label_127fb0;
        case 0x127fb4u: goto label_127fb4;
        case 0x127fb8u: goto label_127fb8;
        case 0x127fbcu: goto label_127fbc;
        case 0x127fc0u: goto label_127fc0;
        case 0x127fc4u: goto label_127fc4;
        case 0x127fc8u: goto label_127fc8;
        case 0x127fccu: goto label_127fcc;
        case 0x127fd0u: goto label_127fd0;
        case 0x127fd4u: goto label_127fd4;
        case 0x127fd8u: goto label_127fd8;
        case 0x127fdcu: goto label_127fdc;
        case 0x127fe0u: goto label_127fe0;
        case 0x127fe4u: goto label_127fe4;
        case 0x127fe8u: goto label_127fe8;
        case 0x127fecu: goto label_127fec;
        case 0x127ff0u: goto label_127ff0;
        case 0x127ff4u: goto label_127ff4;
        case 0x127ff8u: goto label_127ff8;
        case 0x127ffcu: goto label_127ffc;
        case 0x128000u: goto label_128000;
        case 0x128004u: goto label_128004;
        case 0x128008u: goto label_128008;
        case 0x12800cu: goto label_12800c;
        case 0x128010u: goto label_128010;
        case 0x128014u: goto label_128014;
        case 0x128018u: goto label_128018;
        case 0x12801cu: goto label_12801c;
        case 0x128020u: goto label_128020;
        case 0x128024u: goto label_128024;
        case 0x128028u: goto label_128028;
        case 0x12802cu: goto label_12802c;
        case 0x128030u: goto label_128030;
        case 0x128034u: goto label_128034;
        case 0x128038u: goto label_128038;
        case 0x12803cu: goto label_12803c;
        case 0x128040u: goto label_128040;
        case 0x128044u: goto label_128044;
        case 0x128048u: goto label_128048;
        case 0x12804cu: goto label_12804c;
        case 0x128050u: goto label_128050;
        case 0x128054u: goto label_128054;
        case 0x128058u: goto label_128058;
        case 0x12805cu: goto label_12805c;
        case 0x128060u: goto label_128060;
        case 0x128064u: goto label_128064;
        case 0x128068u: goto label_128068;
        case 0x12806cu: goto label_12806c;
        case 0x128070u: goto label_128070;
        case 0x128074u: goto label_128074;
        case 0x128078u: goto label_128078;
        case 0x12807cu: goto label_12807c;
        case 0x128080u: goto label_128080;
        case 0x128084u: goto label_128084;
        case 0x128088u: goto label_128088;
        case 0x12808cu: goto label_12808c;
        case 0x128090u: goto label_128090;
        case 0x128094u: goto label_128094;
        case 0x128098u: goto label_128098;
        case 0x12809cu: goto label_12809c;
        case 0x1280a0u: goto label_1280a0;
        case 0x1280a4u: goto label_1280a4;
        case 0x1280a8u: goto label_1280a8;
        case 0x1280acu: goto label_1280ac;
        case 0x1280b0u: goto label_1280b0;
        case 0x1280b4u: goto label_1280b4;
        case 0x1280b8u: goto label_1280b8;
        case 0x1280bcu: goto label_1280bc;
        case 0x1280c0u: goto label_1280c0;
        case 0x1280c4u: goto label_1280c4;
        case 0x1280c8u: goto label_1280c8;
        case 0x1280ccu: goto label_1280cc;
        case 0x1280d0u: goto label_1280d0;
        case 0x1280d4u: goto label_1280d4;
        case 0x1280d8u: goto label_1280d8;
        case 0x1280dcu: goto label_1280dc;
        case 0x1280e0u: goto label_1280e0;
        case 0x1280e4u: goto label_1280e4;
        case 0x1280e8u: goto label_1280e8;
        case 0x1280ecu: goto label_1280ec;
        case 0x1280f0u: goto label_1280f0;
        case 0x1280f4u: goto label_1280f4;
        case 0x1280f8u: goto label_1280f8;
        case 0x1280fcu: goto label_1280fc;
        case 0x128100u: goto label_128100;
        case 0x128104u: goto label_128104;
        case 0x128108u: goto label_128108;
        case 0x12810cu: goto label_12810c;
        case 0x128110u: goto label_128110;
        case 0x128114u: goto label_128114;
        case 0x128118u: goto label_128118;
        case 0x12811cu: goto label_12811c;
        case 0x128120u: goto label_128120;
        case 0x128124u: goto label_128124;
        case 0x128128u: goto label_128128;
        case 0x12812cu: goto label_12812c;
        case 0x128130u: goto label_128130;
        case 0x128134u: goto label_128134;
        case 0x128138u: goto label_128138;
        case 0x12813cu: goto label_12813c;
        case 0x128140u: goto label_128140;
        case 0x128144u: goto label_128144;
        default: break;
    }

    ctx->pc = 0x127d80u;

label_127d80:
    // 0x127d80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_127d84:
    // 0x127d84: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x127d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_127d88:
    // 0x127d88: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x127d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_127d8c:
    // 0x127d8c: 0x24c6ca28  addiu       $a2, $a2, -0x35D8
    ctx->pc = 0x127d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953512));
label_127d90:
    // 0x127d90: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x127d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_127d94:
    // 0x127d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127d98:
    // 0x127d98: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x127d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_127d9c:
    // 0x127d9c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_127da0:
    // 0x127da0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x127da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_127da4:
    // 0x127da4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x127da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_127da8:
    // 0x127da8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x127da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_127dac:
    // 0x127dac: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
label_127db0:
    // 0x127db0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x127db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_127db4:
    // 0x127db4: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x127db4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
label_127db8:
    // 0x127db8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x127db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_127dbc:
    // 0x127dbc: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x127dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
label_127dc0:
    // 0x127dc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x127dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_127dc4:
    // 0x127dc4: 0x2463cb88  addiu       $v1, $v1, -0x3478
    ctx->pc = 0x127dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953864));
label_127dc8:
    // 0x127dc8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x127dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_127dcc:
    // 0x127dcc: 0x26301510  addiu       $s0, $s1, 0x1510
    ctx->pc = 0x127dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5392));
label_127dd0:
    // 0x127dd0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x127dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_127dd4:
    // 0x127dd4: 0x2442ca68  addiu       $v0, $v0, -0x3598
    ctx->pc = 0x127dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953576));
label_127dd8:
    // 0x127dd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_127ddc:
    // 0x127ddc: 0x24e7ca10  addiu       $a3, $a3, -0x35F0
    ctx->pc = 0x127ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953488));
label_127de0:
    // 0x127de0: 0x2508cba8  addiu       $t0, $t0, -0x3458
    ctx->pc = 0x127de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953896));
label_127de4:
    // 0x127de4: 0x2529ce68  addiu       $t1, $t1, -0x3198
    ctx->pc = 0x127de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954600));
label_127de8:
    // 0x127de8: 0xae2600c4  sw          $a2, 0xC4($s1)
    ctx->pc = 0x127de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 6));
label_127dec:
    // 0x127dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127df0:
    // 0x127df0: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x127df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_127df4:
    // 0x127df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127df8:
    // 0x127df8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x127df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_127dfc:
    // 0x127dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127e00:
    // 0x127e00: 0xae270354  sw          $a3, 0x354($s1)
    ctx->pc = 0x127e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 7));
label_127e04:
    // 0x127e04: 0xae280074  sw          $t0, 0x74($s1)
    ctx->pc = 0x127e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 8));
label_127e08:
    // 0x127e08: 0xc0685da  jal         func_1A1768
label_127e0c:
    if (ctx->pc == 0x127E0Cu) {
        ctx->pc = 0x127E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E08u;
        // 0x127e0c: 0xae290030  sw          $t1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E10u;
        goto label_127e10;
    }
    ctx->pc = 0x127E08u;
    SET_GPR_U32(ctx, 31, 0x127E10u);
    ctx->pc = 0x127E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E08u;
    // 0x127e0c: 0xae290030  sw          $t1, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x127E08u, 0x127E10u)) {
        return;
    }
    ctx->pc = 0x127E10u;
label_127e10:
    // 0x127e10: 0x8e031350  lw          $v1, 0x1350($s0)
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
label_127e14:
    // 0x127e14: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_127e18:
    if (ctx->pc == 0x127E18u) {
        ctx->pc = 0x127E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E14u;
        // 0x127e18: 0xae001350  sw          $zero, 0x1350($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E1Cu;
        goto label_127e1c;
    }
    ctx->pc = 0x127E14u;
    {
        const bool branch_taken_0x127e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e14) {
            ctx->pc = 0x127E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E14u;
            // 0x127e18: 0xae001350  sw          $zero, 0x1350($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E34u;
            goto label_127e34;
        }
    }
    ctx->pc = 0x127E1Cu;
label_127e1c:
    // 0x127e1c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x127e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_127e20:
    // 0x127e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x127e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_127e24:
    // 0x127e24: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_127e28:
    if (ctx->pc == 0x127E28u) {
        ctx->pc = 0x127E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E24u;
        // 0x127e28: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E2Cu;
        goto label_127e2c;
    }
    ctx->pc = 0x127E24u;
    {
        const bool branch_taken_0x127e24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x127E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E24u;
        // 0x127e28: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e24) {
            ctx->pc = 0x127E30u;
            goto label_127e30;
        }
    }
    ctx->pc = 0x127E2Cu;
label_127e2c:
    // 0x127e2c: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x127e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_127e30:
    // 0x127e30: 0xae001350  sw          $zero, 0x1350($s0)
    ctx->pc = 0x127e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 0));
label_127e34:
    // 0x127e34: 0x262229bc  addiu       $v0, $s1, 0x29BC
    ctx->pc = 0x127e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10684));
label_127e38:
    // 0x127e38: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x127e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_127e3c:
    // 0x127e3c: 0x26322d74  addiu       $s2, $s1, 0x2D74
    ctx->pc = 0x127e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 11636));
label_127e40:
    // 0x127e40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x127e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_127e44:
    // 0x127e44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127e48:
    // 0x127e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127e4c:
    // 0x127e4c: 0xc07fb0c  jal         func_1FEC30
label_127e50:
    if (ctx->pc == 0x127E50u) {
        ctx->pc = 0x127E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E4Cu;
        // 0x127e50: 0x263e2a14  addiu       $fp, $s1, 0x2A14 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 10772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E54u;
        goto label_127e54;
    }
    ctx->pc = 0x127E4Cu;
    SET_GPR_U32(ctx, 31, 0x127E54u);
    ctx->pc = 0x127E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E4Cu;
    // 0x127e50: 0x263e2a14  addiu       $fp, $s1, 0x2A14 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 10772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x127E4Cu, 0x127E54u)) {
        return;
    }
    ctx->pc = 0x127E54u;
label_127e54:
    // 0x127e54: 0x26372a1c  addiu       $s7, $s1, 0x2A1C
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 10780));
label_127e58:
    // 0x127e58: 0x262329cc  addiu       $v1, $s1, 0x29CC
    ctx->pc = 0x127e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10700));
label_127e5c:
    // 0x127e5c: 0x262229d4  addiu       $v0, $s1, 0x29D4
    ctx->pc = 0x127e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10708));
label_127e60:
    // 0x127e60: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x127e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_127e64:
    // 0x127e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127e68:
    // 0x127e68: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x127e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_127e6c:
    // 0x127e6c: 0xc07fac2  jal         func_1FEB08
label_127e70:
    if (ctx->pc == 0x127E70u) {
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E6Cu;
        // 0x127e70: 0x26362cdc  addiu       $s6, $s1, 0x2CDC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 11484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E74u;
        goto label_127e74;
    }
    ctx->pc = 0x127E6Cu;
    SET_GPR_U32(ctx, 31, 0x127E74u);
    ctx->pc = 0x127E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E6Cu;
    // 0x127e70: 0x26362cdc  addiu       $s6, $s1, 0x2CDC (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 11484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127E6Cu, 0x127E74u)) {
        return;
    }
    ctx->pc = 0x127E74u;
label_127e74:
    // 0x127e74: 0x26352ce4  addiu       $s5, $s1, 0x2CE4
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 11492));
label_127e78:
    // 0x127e78: 0x262329dc  addiu       $v1, $s1, 0x29DC
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10716));
label_127e7c:
    // 0x127e7c: 0x26342cec  addiu       $s4, $s1, 0x2CEC
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 11500));
label_127e80:
    // 0x127e80: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x127e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_127e84:
    // 0x127e84: 0xc0691ec  jal         func_1A47B0
label_127e88:
    if (ctx->pc == 0x127E88u) {
        ctx->pc = 0x127E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E84u;
        // 0x127e88: 0x26332d48  addiu       $s3, $s1, 0x2D48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 11592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E8Cu;
        goto label_127e8c;
    }
    ctx->pc = 0x127E84u;
    SET_GPR_U32(ctx, 31, 0x127E8Cu);
    ctx->pc = 0x127E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E84u;
    // 0x127e88: 0x26332d48  addiu       $s3, $s1, 0x2D48 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 11592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x127E84u, 0x127E8Cu)) {
        return;
    }
    ctx->pc = 0x127E8Cu;
label_127e8c:
    // 0x127e8c: 0x262329e4  addiu       $v1, $s1, 0x29E4
    ctx->pc = 0x127e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10724));
label_127e90:
    // 0x127e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127e94:
    // 0x127e94: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x127e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_127e98:
    // 0x127e98: 0xc069230  jal         func_1A48C0
label_127e9c:
    if (ctx->pc == 0x127E9Cu) {
        ctx->pc = 0x127E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E98u;
        // 0x127e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EA0u;
        goto label_127ea0;
    }
    ctx->pc = 0x127E98u;
    SET_GPR_U32(ctx, 31, 0x127EA0u);
    ctx->pc = 0x127E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127E98u;
    // 0x127e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A48C0u, 0x127E98u, 0x127EA0u)) {
        return;
    }
    ctx->pc = 0x127EA0u;
label_127ea0:
    // 0x127ea0: 0x262229ec  addiu       $v0, $s1, 0x29EC
    ctx->pc = 0x127ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10732));
label_127ea4:
    // 0x127ea4: 0x262329fc  addiu       $v1, $s1, 0x29FC
    ctx->pc = 0x127ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10748));
label_127ea8:
    // 0x127ea8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x127ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_127eac:
    // 0x127eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_127eb0:
    // 0x127eb0: 0xc04a10a  jal         func_128428
label_127eb4:
    if (ctx->pc == 0x127EB4u) {
        ctx->pc = 0x127EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EB0u;
        // 0x127eb4: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EB8u;
        goto label_127eb8;
    }
    ctx->pc = 0x127EB0u;
    SET_GPR_U32(ctx, 31, 0x127EB8u);
    ctx->pc = 0x127EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EB0u;
    // 0x127eb4: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x128428u, 0x127EB0u, 0x127EB8u)) {
        return;
    }
    ctx->pc = 0x127EB8u;
label_127eb8:
    // 0x127eb8: 0x26222a04  addiu       $v0, $s1, 0x2A04
    ctx->pc = 0x127eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10756));
label_127ebc:
    // 0x127ebc: 0x26232a0c  addiu       $v1, $s1, 0x2A0C
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10764));
label_127ec0:
    // 0x127ec0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_127ec4:
    // 0x127ec4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x127ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_127ec8:
    // 0x127ec8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x127ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_127ecc:
    // 0x127ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127ed0:
    // 0x127ed0: 0xc07fb0c  jal         func_1FEC30
label_127ed4:
    if (ctx->pc == 0x127ED4u) {
        ctx->pc = 0x127ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ED0u;
        // 0x127ed4: 0x24a545f8  addiu       $a1, $a1, 0x45F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127ED8u;
        goto label_127ed8;
    }
    ctx->pc = 0x127ED0u;
    SET_GPR_U32(ctx, 31, 0x127ED8u);
    ctx->pc = 0x127ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127ED0u;
    // 0x127ed4: 0x24a545f8  addiu       $a1, $a1, 0x45F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x127ED0u, 0x127ED8u)) {
        return;
    }
    ctx->pc = 0x127ED8u;
label_127ed8:
    // 0x127ed8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x127ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_127edc:
    // 0x127edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127ee0:
    // 0x127ee0: 0xc07fb0c  jal         func_1FEC30
label_127ee4:
    if (ctx->pc == 0x127EE4u) {
        ctx->pc = 0x127EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE0u;
        // 0x127ee4: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EE8u;
        goto label_127ee8;
    }
    ctx->pc = 0x127EE0u;
    SET_GPR_U32(ctx, 31, 0x127EE8u);
    ctx->pc = 0x127EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EE0u;
    // 0x127ee4: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x127EE0u, 0x127EE8u)) {
        return;
    }
    ctx->pc = 0x127EE8u;
label_127ee8:
    // 0x127ee8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x127ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_127eec:
    // 0x127eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127ef0:
    // 0x127ef0: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
label_127ef4:
    // 0x127ef4: 0xc07fb0c  jal         func_1FEC30
label_127ef8:
    if (ctx->pc == 0x127EF8u) {
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF4u;
        // 0x127ef8: 0x26302d50  addiu       $s0, $s1, 0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EFCu;
        goto label_127efc;
    }
    ctx->pc = 0x127EF4u;
    SET_GPR_U32(ctx, 31, 0x127EFCu);
    ctx->pc = 0x127EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EF4u;
    // 0x127ef8: 0x26302d50  addiu       $s0, $s1, 0x2D50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x127EF4u, 0x127EFCu)) {
        return;
    }
    ctx->pc = 0x127EFCu;
label_127efc:
    // 0x127efc: 0xc07fac2  jal         func_1FEB08
label_127f00:
    if (ctx->pc == 0x127F00u) {
        ctx->pc = 0x127F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EFCu;
        // 0x127f00: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F04u;
        goto label_127f04;
    }
    ctx->pc = 0x127EFCu;
    SET_GPR_U32(ctx, 31, 0x127F04u);
    ctx->pc = 0x127F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EFCu;
    // 0x127f00: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127EFCu, 0x127F04u)) {
        return;
    }
    ctx->pc = 0x127F04u;
label_127f04:
    // 0x127f04: 0xc07fac2  jal         func_1FEB08
label_127f08:
    if (ctx->pc == 0x127F08u) {
        ctx->pc = 0x127F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F04u;
        // 0x127f08: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F0Cu;
        goto label_127f0c;
    }
    ctx->pc = 0x127F04u;
    SET_GPR_U32(ctx, 31, 0x127F0Cu);
    ctx->pc = 0x127F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F04u;
    // 0x127f08: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F04u, 0x127F0Cu)) {
        return;
    }
    ctx->pc = 0x127F0Cu;
label_127f0c:
    // 0x127f0c: 0xc07fac2  jal         func_1FEB08
label_127f10:
    if (ctx->pc == 0x127F10u) {
        ctx->pc = 0x127F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F0Cu;
        // 0x127f10: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F14u;
        goto label_127f14;
    }
    ctx->pc = 0x127F0Cu;
    SET_GPR_U32(ctx, 31, 0x127F14u);
    ctx->pc = 0x127F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F0Cu;
    // 0x127f10: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F0Cu, 0x127F14u)) {
        return;
    }
    ctx->pc = 0x127F14u;
label_127f14:
    // 0x127f14: 0xc07fac2  jal         func_1FEB08
label_127f18:
    if (ctx->pc == 0x127F18u) {
        ctx->pc = 0x127F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F14u;
        // 0x127f18: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F1Cu;
        goto label_127f1c;
    }
    ctx->pc = 0x127F14u;
    SET_GPR_U32(ctx, 31, 0x127F1Cu);
    ctx->pc = 0x127F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F14u;
    // 0x127f18: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F14u, 0x127F1Cu)) {
        return;
    }
    ctx->pc = 0x127F1Cu;
label_127f1c:
    // 0x127f1c: 0xc07fac2  jal         func_1FEB08
label_127f20:
    if (ctx->pc == 0x127F20u) {
        ctx->pc = 0x127F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F1Cu;
        // 0x127f20: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F24u;
        goto label_127f24;
    }
    ctx->pc = 0x127F1Cu;
    SET_GPR_U32(ctx, 31, 0x127F24u);
    ctx->pc = 0x127F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F1Cu;
    // 0x127f20: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F1Cu, 0x127F24u)) {
        return;
    }
    ctx->pc = 0x127F24u;
label_127f24:
    // 0x127f24: 0xc07fac2  jal         func_1FEB08
label_127f28:
    if (ctx->pc == 0x127F28u) {
        ctx->pc = 0x127F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F24u;
        // 0x127f28: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F2Cu;
        goto label_127f2c;
    }
    ctx->pc = 0x127F24u;
    SET_GPR_U32(ctx, 31, 0x127F2Cu);
    ctx->pc = 0x127F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F24u;
    // 0x127f28: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F24u, 0x127F2Cu)) {
        return;
    }
    ctx->pc = 0x127F2Cu;
label_127f2c:
    // 0x127f2c: 0xc07fac2  jal         func_1FEB08
label_127f30:
    if (ctx->pc == 0x127F30u) {
        ctx->pc = 0x127F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F2Cu;
        // 0x127f30: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F34u;
        goto label_127f34;
    }
    ctx->pc = 0x127F2Cu;
    SET_GPR_U32(ctx, 31, 0x127F34u);
    ctx->pc = 0x127F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F2Cu;
    // 0x127f30: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F2Cu, 0x127F34u)) {
        return;
    }
    ctx->pc = 0x127F34u;
label_127f34:
    // 0x127f34: 0xc07fac2  jal         func_1FEB08
label_127f38:
    if (ctx->pc == 0x127F38u) {
        ctx->pc = 0x127F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F34u;
        // 0x127f38: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F3Cu;
        goto label_127f3c;
    }
    ctx->pc = 0x127F34u;
    SET_GPR_U32(ctx, 31, 0x127F3Cu);
    ctx->pc = 0x127F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F34u;
    // 0x127f38: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F34u, 0x127F3Cu)) {
        return;
    }
    ctx->pc = 0x127F3Cu;
label_127f3c:
    // 0x127f3c: 0xc07fac2  jal         func_1FEB08
label_127f40:
    if (ctx->pc == 0x127F40u) {
        ctx->pc = 0x127F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F3Cu;
        // 0x127f40: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F44u;
        goto label_127f44;
    }
    ctx->pc = 0x127F3Cu;
    SET_GPR_U32(ctx, 31, 0x127F44u);
    ctx->pc = 0x127F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F3Cu;
    // 0x127f40: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F3Cu, 0x127F44u)) {
        return;
    }
    ctx->pc = 0x127F44u;
label_127f44:
    // 0x127f44: 0xc07fac2  jal         func_1FEB08
label_127f48:
    if (ctx->pc == 0x127F48u) {
        ctx->pc = 0x127F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F44u;
        // 0x127f48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F4Cu;
        goto label_127f4c;
    }
    ctx->pc = 0x127F44u;
    SET_GPR_U32(ctx, 31, 0x127F4Cu);
    ctx->pc = 0x127F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F44u;
    // 0x127f48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F44u, 0x127F4Cu)) {
        return;
    }
    ctx->pc = 0x127F4Cu;
label_127f4c:
    // 0x127f4c: 0xc07fac2  jal         func_1FEB08
label_127f50:
    if (ctx->pc == 0x127F50u) {
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F54u;
        goto label_127f54;
    }
    ctx->pc = 0x127F4Cu;
    SET_GPR_U32(ctx, 31, 0x127F54u);
    ctx->pc = 0x127F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F4Cu;
    // 0x127f50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F4Cu, 0x127F54u)) {
        return;
    }
    ctx->pc = 0x127F54u;
label_127f54:
    // 0x127f54: 0xc07fac2  jal         func_1FEB08
label_127f58:
    if (ctx->pc == 0x127F58u) {
        ctx->pc = 0x127F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F54u;
        // 0x127f58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F5Cu;
        goto label_127f5c;
    }
    ctx->pc = 0x127F54u;
    SET_GPR_U32(ctx, 31, 0x127F5Cu);
    ctx->pc = 0x127F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F54u;
    // 0x127f58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F54u, 0x127F5Cu)) {
        return;
    }
    ctx->pc = 0x127F5Cu;
label_127f5c:
    // 0x127f5c: 0xc07fac2  jal         func_1FEB08
label_127f60:
    if (ctx->pc == 0x127F60u) {
        ctx->pc = 0x127F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F5Cu;
        // 0x127f60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F64u;
        goto label_127f64;
    }
    ctx->pc = 0x127F5Cu;
    SET_GPR_U32(ctx, 31, 0x127F64u);
    ctx->pc = 0x127F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F5Cu;
    // 0x127f60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F5Cu, 0x127F64u)) {
        return;
    }
    ctx->pc = 0x127F64u;
label_127f64:
    // 0x127f64: 0xc07fac2  jal         func_1FEB08
label_127f68:
    if (ctx->pc == 0x127F68u) {
        ctx->pc = 0x127F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F64u;
        // 0x127f68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F6Cu;
        goto label_127f6c;
    }
    ctx->pc = 0x127F64u;
    SET_GPR_U32(ctx, 31, 0x127F6Cu);
    ctx->pc = 0x127F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F64u;
    // 0x127f68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F64u, 0x127F6Cu)) {
        return;
    }
    ctx->pc = 0x127F6Cu;
label_127f6c:
    // 0x127f6c: 0xc07fac2  jal         func_1FEB08
label_127f70:
    if (ctx->pc == 0x127F70u) {
        ctx->pc = 0x127F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F6Cu;
        // 0x127f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F74u;
        goto label_127f74;
    }
    ctx->pc = 0x127F6Cu;
    SET_GPR_U32(ctx, 31, 0x127F74u);
    ctx->pc = 0x127F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F6Cu;
    // 0x127f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F6Cu, 0x127F74u)) {
        return;
    }
    ctx->pc = 0x127F74u;
label_127f74:
    // 0x127f74: 0xc07fac2  jal         func_1FEB08
label_127f78:
    if (ctx->pc == 0x127F78u) {
        ctx->pc = 0x127F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F74u;
        // 0x127f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F7Cu;
        goto label_127f7c;
    }
    ctx->pc = 0x127F74u;
    SET_GPR_U32(ctx, 31, 0x127F7Cu);
    ctx->pc = 0x127F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F74u;
    // 0x127f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x127F74u, 0x127F7Cu)) {
        return;
    }
    ctx->pc = 0x127F7Cu;
label_127f7c:
    // 0x127f7c: 0x8e242c30  lw          $a0, 0x2C30($s1)
    ctx->pc = 0x127f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11312)));
label_127f80:
    // 0x127f80: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_127f84:
    if (ctx->pc == 0x127F84u) {
        ctx->pc = 0x127F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F80u;
        // 0x127f84: 0x8e2428c4  lw          $a0, 0x28C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F88u;
        goto label_127f88;
    }
    ctx->pc = 0x127F80u;
    {
        const bool branch_taken_0x127f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f80) {
            ctx->pc = 0x127F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127F80u;
            // 0x127f84: 0x8e2428c4  lw          $a0, 0x28C4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127F94u;
            goto label_127f94;
        }
    }
    ctx->pc = 0x127F88u;
label_127f88:
    // 0x127f88: 0xc0808d4  jal         func_202350
label_127f8c:
    if (ctx->pc == 0x127F8Cu) {
        ctx->pc = 0x127F90u;
        goto label_127f90;
    }
    ctx->pc = 0x127F88u;
    SET_GPR_U32(ctx, 31, 0x127F90u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x127F88u, 0x127F90u)) {
        return;
    }
    ctx->pc = 0x127F90u;
label_127f90:
    // 0x127f90: 0x8e2428c4  lw          $a0, 0x28C4($s1)
    ctx->pc = 0x127f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10436)));
label_127f94:
    // 0x127f94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_127f98:
    if (ctx->pc == 0x127F98u) {
        ctx->pc = 0x127F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F94u;
        // 0x127f98: 0x8e2428c8  lw          $a0, 0x28C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F9Cu;
        goto label_127f9c;
    }
    ctx->pc = 0x127F94u;
    {
        const bool branch_taken_0x127f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f94) {
            ctx->pc = 0x127F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127F94u;
            // 0x127f98: 0x8e2428c8  lw          $a0, 0x28C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127FA8u;
            goto label_127fa8;
        }
    }
    ctx->pc = 0x127F9Cu;
label_127f9c:
    // 0x127f9c: 0xc0808d4  jal         func_202350
label_127fa0:
    if (ctx->pc == 0x127FA0u) {
        ctx->pc = 0x127FA4u;
        goto label_127fa4;
    }
    ctx->pc = 0x127F9Cu;
    SET_GPR_U32(ctx, 31, 0x127FA4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x127F9Cu, 0x127FA4u)) {
        return;
    }
    ctx->pc = 0x127FA4u;
label_127fa4:
    // 0x127fa4: 0x8e2428c8  lw          $a0, 0x28C8($s1)
    ctx->pc = 0x127fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10440)));
label_127fa8:
    // 0x127fa8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_127fac:
    if (ctx->pc == 0x127FACu) {
        ctx->pc = 0x127FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FA8u;
        // 0x127fac: 0x8e262aa8  lw          $a2, 0x2AA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FB0u;
        goto label_127fb0;
    }
    ctx->pc = 0x127FA8u;
    {
        const bool branch_taken_0x127fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127fa8) {
            ctx->pc = 0x127FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127FA8u;
            // 0x127fac: 0x8e262aa8  lw          $a2, 0x2AA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127FBCu;
            goto label_127fbc;
        }
    }
    ctx->pc = 0x127FB0u;
label_127fb0:
    // 0x127fb0: 0xc0808d4  jal         func_202350
label_127fb4:
    if (ctx->pc == 0x127FB4u) {
        ctx->pc = 0x127FB8u;
        goto label_127fb8;
    }
    ctx->pc = 0x127FB0u;
    SET_GPR_U32(ctx, 31, 0x127FB8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x127FB0u, 0x127FB8u)) {
        return;
    }
    ctx->pc = 0x127FB8u;
label_127fb8:
    // 0x127fb8: 0x8e262aa8  lw          $a2, 0x2AA8($s1)
    ctx->pc = 0x127fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10920)));
label_127fbc:
    // 0x127fbc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_127fc0:
    if (ctx->pc == 0x127FC0u) {
        ctx->pc = 0x127FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FBCu;
        // 0x127fc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FC4u;
        goto label_127fc4;
    }
    ctx->pc = 0x127FBCu;
    {
        const bool branch_taken_0x127fbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FBCu;
        // 0x127fc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fbc) {
            ctx->pc = 0x127FD8u;
            goto label_127fd8;
        }
    }
    ctx->pc = 0x127FC4u;
label_127fc4:
    // 0x127fc4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x127fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_127fc8:
    // 0x127fc8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x127fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_127fcc:
    // 0x127fcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x127fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_127fd0:
    // 0x127fd0: 0x60f809  jalr        $v1
label_127fd4:
    if (ctx->pc == 0x127FD4u) {
        ctx->pc = 0x127FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FD0u;
        // 0x127fd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FD8u;
        goto label_127fd8;
    }
    ctx->pc = 0x127FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x127FD8u);
        ctx->pc = 0x127FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FD0u;
        // 0x127fd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127FD0u, 0x127FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127FD8u;
label_127fd8:
    // 0x127fd8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x127fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_127fdc:
    // 0x127fdc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x127fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_127fe0:
    // 0x127fe0: 0x8ca38348  lw          $v1, -0x7CB8($a1)
    ctx->pc = 0x127fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294935368)));
label_127fe4:
    // 0x127fe4: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x127fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_127fe8:
    // 0x127fe8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x127fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_127fec:
    // 0x127fec: 0xaca38348  sw          $v1, -0x7CB8($a1)
    ctx->pc = 0x127fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294935368), GPR_U32(ctx, 3));
label_127ff0:
    // 0x127ff0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x127ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_127ff4:
    // 0x127ff4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_127ff8:
    if (ctx->pc == 0x127FF8u) {
        ctx->pc = 0x127FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FF4u;
        // 0x127ff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FFCu;
        goto label_127ffc;
    }
    ctx->pc = 0x127FF4u;
    {
        const bool branch_taken_0x127ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ff4) {
            ctx->pc = 0x127FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127FF4u;
            // 0x127ff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128008u;
            goto label_128008;
        }
    }
    ctx->pc = 0x127FFCu;
label_127ffc:
    // 0x127ffc: 0xc05e29a  jal         func_178A68
label_128000:
    if (ctx->pc == 0x128000u) {
        ctx->pc = 0x128000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FFCu;
        // 0x128000: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128004u;
        goto label_128004;
    }
    ctx->pc = 0x127FFCu;
    SET_GPR_U32(ctx, 31, 0x128004u);
    ctx->pc = 0x128000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FFCu;
    // 0x128000: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178A68u, 0x127FFCu, 0x128004u)) {
        return;
    }
    ctx->pc = 0x128004u;
label_128004:
    // 0x128004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128008:
    // 0x128008: 0xc07fbec  jal         func_1FEFB0
label_12800c:
    if (ctx->pc == 0x12800Cu) {
        ctx->pc = 0x12800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128008u;
        // 0x12800c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128010u;
        goto label_128010;
    }
    ctx->pc = 0x128008u;
    SET_GPR_U32(ctx, 31, 0x128010u);
    ctx->pc = 0x12800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128008u;
    // 0x12800c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128008u, 0x128010u)) {
        return;
    }
    ctx->pc = 0x128010u;
label_128010:
    // 0x128010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128014:
    // 0x128014: 0xc07fbec  jal         func_1FEFB0
label_128018:
    if (ctx->pc == 0x128018u) {
        ctx->pc = 0x128018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128014u;
        // 0x128018: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12801Cu;
        goto label_12801c;
    }
    ctx->pc = 0x128014u;
    SET_GPR_U32(ctx, 31, 0x12801Cu);
    ctx->pc = 0x128018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128014u;
    // 0x128018: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128014u, 0x12801Cu)) {
        return;
    }
    ctx->pc = 0x12801Cu;
label_12801c:
    // 0x12801c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_128020:
    // 0x128020: 0xc07fbec  jal         func_1FEFB0
label_128024:
    if (ctx->pc == 0x128024u) {
        ctx->pc = 0x128024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128020u;
        // 0x128024: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128028u;
        goto label_128028;
    }
    ctx->pc = 0x128020u;
    SET_GPR_U32(ctx, 31, 0x128028u);
    ctx->pc = 0x128024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128020u;
    // 0x128024: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128020u, 0x128028u)) {
        return;
    }
    ctx->pc = 0x128028u;
label_128028:
    // 0x128028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12802c:
    // 0x12802c: 0xc07fbec  jal         func_1FEFB0
label_128030:
    if (ctx->pc == 0x128030u) {
        ctx->pc = 0x128030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12802Cu;
        // 0x128030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128034u;
        goto label_128034;
    }
    ctx->pc = 0x12802Cu;
    SET_GPR_U32(ctx, 31, 0x128034u);
    ctx->pc = 0x128030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12802Cu;
    // 0x128030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12802Cu, 0x128034u)) {
        return;
    }
    ctx->pc = 0x128034u;
label_128034:
    // 0x128034: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_128038:
    // 0x128038: 0xc07fbec  jal         func_1FEFB0
label_12803c:
    if (ctx->pc == 0x12803Cu) {
        ctx->pc = 0x12803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128038u;
        // 0x12803c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128040u;
        goto label_128040;
    }
    ctx->pc = 0x128038u;
    SET_GPR_U32(ctx, 31, 0x128040u);
    ctx->pc = 0x12803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128038u;
    // 0x12803c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128038u, 0x128040u)) {
        return;
    }
    ctx->pc = 0x128040u;
label_128040:
    // 0x128040: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128044:
    // 0x128044: 0xc07fbec  jal         func_1FEFB0
label_128048:
    if (ctx->pc == 0x128048u) {
        ctx->pc = 0x128048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128044u;
        // 0x128048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12804Cu;
        goto label_12804c;
    }
    ctx->pc = 0x128044u;
    SET_GPR_U32(ctx, 31, 0x12804Cu);
    ctx->pc = 0x128048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128044u;
    // 0x128048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128044u, 0x12804Cu)) {
        return;
    }
    ctx->pc = 0x12804Cu;
label_12804c:
    // 0x12804c: 0x26242c54  addiu       $a0, $s1, 0x2C54
    ctx->pc = 0x12804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11348));
label_128050:
    // 0x128050: 0xc05a2d8  jal         func_168B60
label_128054:
    if (ctx->pc == 0x128054u) {
        ctx->pc = 0x128054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128050u;
        // 0x128054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128058u;
        goto label_128058;
    }
    ctx->pc = 0x128050u;
    SET_GPR_U32(ctx, 31, 0x128058u);
    ctx->pc = 0x128054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128050u;
    // 0x128054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168B60u, 0x128050u, 0x128058u)) {
        return;
    }
    ctx->pc = 0x128058u;
label_128058:
    // 0x128058: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x128058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12805c:
    // 0x12805c: 0xc07fbec  jal         func_1FEFB0
label_128060:
    if (ctx->pc == 0x128060u) {
        ctx->pc = 0x128060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12805Cu;
        // 0x128060: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128064u;
        goto label_128064;
    }
    ctx->pc = 0x12805Cu;
    SET_GPR_U32(ctx, 31, 0x128064u);
    ctx->pc = 0x128060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12805Cu;
    // 0x128060: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12805Cu, 0x128064u)) {
        return;
    }
    ctx->pc = 0x128064u;
label_128064:
    // 0x128064: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x128064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_128068:
    // 0x128068: 0xc07fbec  jal         func_1FEFB0
label_12806c:
    if (ctx->pc == 0x12806Cu) {
        ctx->pc = 0x12806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128068u;
        // 0x12806c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128070u;
        goto label_128070;
    }
    ctx->pc = 0x128068u;
    SET_GPR_U32(ctx, 31, 0x128070u);
    ctx->pc = 0x12806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128068u;
    // 0x12806c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128068u, 0x128070u)) {
        return;
    }
    ctx->pc = 0x128070u;
label_128070:
    // 0x128070: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x128070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_128074:
    // 0x128074: 0xc07fbec  jal         func_1FEFB0
label_128078:
    if (ctx->pc == 0x128078u) {
        ctx->pc = 0x128078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128074u;
        // 0x128078: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12807Cu;
        goto label_12807c;
    }
    ctx->pc = 0x128074u;
    SET_GPR_U32(ctx, 31, 0x12807Cu);
    ctx->pc = 0x128078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128074u;
    // 0x128078: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128074u, 0x12807Cu)) {
        return;
    }
    ctx->pc = 0x12807Cu;
label_12807c:
    // 0x12807c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_128080:
    // 0x128080: 0xc07fbec  jal         func_1FEFB0
label_128084:
    if (ctx->pc == 0x128084u) {
        ctx->pc = 0x128084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128080u;
        // 0x128084: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128088u;
        goto label_128088;
    }
    ctx->pc = 0x128080u;
    SET_GPR_U32(ctx, 31, 0x128088u);
    ctx->pc = 0x128084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128080u;
    // 0x128084: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128080u, 0x128088u)) {
        return;
    }
    ctx->pc = 0x128088u;
label_128088:
    // 0x128088: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x128088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12808c:
    // 0x12808c: 0xc07fbec  jal         func_1FEFB0
label_128090:
    if (ctx->pc == 0x128090u) {
        ctx->pc = 0x128090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12808Cu;
        // 0x128090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128094u;
        goto label_128094;
    }
    ctx->pc = 0x12808Cu;
    SET_GPR_U32(ctx, 31, 0x128094u);
    ctx->pc = 0x128090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12808Cu;
    // 0x128090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12808Cu, 0x128094u)) {
        return;
    }
    ctx->pc = 0x128094u;
label_128094:
    // 0x128094: 0x262429f4  addiu       $a0, $s1, 0x29F4
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10740));
label_128098:
    // 0x128098: 0xc07fbec  jal         func_1FEFB0
label_12809c:
    if (ctx->pc == 0x12809Cu) {
        ctx->pc = 0x12809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128098u;
        // 0x12809c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280A0u;
        goto label_1280a0;
    }
    ctx->pc = 0x128098u;
    SET_GPR_U32(ctx, 31, 0x1280A0u);
    ctx->pc = 0x12809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128098u;
    // 0x12809c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x128098u, 0x1280A0u)) {
        return;
    }
    ctx->pc = 0x1280A0u;
label_1280a0:
    // 0x1280a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1280a4:
    // 0x1280a4: 0xc07fbec  jal         func_1FEFB0
label_1280a8:
    if (ctx->pc == 0x1280A8u) {
        ctx->pc = 0x1280A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280A4u;
        // 0x1280a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280ACu;
        goto label_1280ac;
    }
    ctx->pc = 0x1280A4u;
    SET_GPR_U32(ctx, 31, 0x1280ACu);
    ctx->pc = 0x1280A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280A4u;
    // 0x1280a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280A4u, 0x1280ACu)) {
        return;
    }
    ctx->pc = 0x1280ACu;
label_1280ac:
    // 0x1280ac: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1280acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1280b0:
    // 0x1280b0: 0xc07fbec  jal         func_1FEFB0
label_1280b4:
    if (ctx->pc == 0x1280B4u) {
        ctx->pc = 0x1280B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280B0u;
        // 0x1280b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280B8u;
        goto label_1280b8;
    }
    ctx->pc = 0x1280B0u;
    SET_GPR_U32(ctx, 31, 0x1280B8u);
    ctx->pc = 0x1280B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280B0u;
    // 0x1280b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280B0u, 0x1280B8u)) {
        return;
    }
    ctx->pc = 0x1280B8u;
label_1280b8:
    // 0x1280b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1280bc:
    // 0x1280bc: 0xc07fbec  jal         func_1FEFB0
label_1280c0:
    if (ctx->pc == 0x1280C0u) {
        ctx->pc = 0x1280C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280BCu;
        // 0x1280c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280C4u;
        goto label_1280c4;
    }
    ctx->pc = 0x1280BCu;
    SET_GPR_U32(ctx, 31, 0x1280C4u);
    ctx->pc = 0x1280C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280BCu;
    // 0x1280c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280BCu, 0x1280C4u)) {
        return;
    }
    ctx->pc = 0x1280C4u;
label_1280c4:
    // 0x1280c4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1280c8:
    // 0x1280c8: 0xc07fbec  jal         func_1FEFB0
label_1280cc:
    if (ctx->pc == 0x1280CCu) {
        ctx->pc = 0x1280CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280C8u;
        // 0x1280cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280D0u;
        goto label_1280d0;
    }
    ctx->pc = 0x1280C8u;
    SET_GPR_U32(ctx, 31, 0x1280D0u);
    ctx->pc = 0x1280CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280C8u;
    // 0x1280cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280C8u, 0x1280D0u)) {
        return;
    }
    ctx->pc = 0x1280D0u;
label_1280d0:
    // 0x1280d0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1280d4:
    // 0x1280d4: 0xc07fbec  jal         func_1FEFB0
label_1280d8:
    if (ctx->pc == 0x1280D8u) {
        ctx->pc = 0x1280D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280D4u;
        // 0x1280d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280DCu;
        goto label_1280dc;
    }
    ctx->pc = 0x1280D4u;
    SET_GPR_U32(ctx, 31, 0x1280DCu);
    ctx->pc = 0x1280D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280D4u;
    // 0x1280d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280D4u, 0x1280DCu)) {
        return;
    }
    ctx->pc = 0x1280DCu;
label_1280dc:
    // 0x1280dc: 0x262429c4  addiu       $a0, $s1, 0x29C4
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10692));
label_1280e0:
    // 0x1280e0: 0xc07fbec  jal         func_1FEFB0
label_1280e4:
    if (ctx->pc == 0x1280E4u) {
        ctx->pc = 0x1280E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280E0u;
        // 0x1280e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280E8u;
        goto label_1280e8;
    }
    ctx->pc = 0x1280E0u;
    SET_GPR_U32(ctx, 31, 0x1280E8u);
    ctx->pc = 0x1280E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280E0u;
    // 0x1280e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280E0u, 0x1280E8u)) {
        return;
    }
    ctx->pc = 0x1280E8u;
label_1280e8:
    // 0x1280e8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1280e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1280ec:
    // 0x1280ec: 0xc07fbec  jal         func_1FEFB0
label_1280f0:
    if (ctx->pc == 0x1280F0u) {
        ctx->pc = 0x1280F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280ECu;
        // 0x1280f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1280F4u;
        goto label_1280f4;
    }
    ctx->pc = 0x1280ECu;
    SET_GPR_U32(ctx, 31, 0x1280F4u);
    ctx->pc = 0x1280F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280ECu;
    // 0x1280f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1280ECu, 0x1280F4u)) {
        return;
    }
    ctx->pc = 0x1280F4u;
label_1280f4:
    // 0x1280f4: 0x26241510  addiu       $a0, $s1, 0x1510
    ctx->pc = 0x1280f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5392));
label_1280f8:
    // 0x1280f8: 0xc068900  jal         func_1A2400
label_1280fc:
    if (ctx->pc == 0x1280FCu) {
        ctx->pc = 0x1280FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280F8u;
        // 0x1280fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128100u;
        goto label_128100;
    }
    ctx->pc = 0x1280F8u;
    SET_GPR_U32(ctx, 31, 0x128100u);
    ctx->pc = 0x1280FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280F8u;
    // 0x1280fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2400u, 0x1280F8u, 0x128100u)) {
        return;
    }
    ctx->pc = 0x128100u;
label_128100:
    // 0x128100: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x128100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_128104:
    // 0x128104: 0xc047fcc  jal         func_11FF30
label_128108:
    if (ctx->pc == 0x128108u) {
        ctx->pc = 0x128108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128104u;
        // 0x128108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12810Cu;
        goto label_12810c;
    }
    ctx->pc = 0x128104u;
    SET_GPR_U32(ctx, 31, 0x12810Cu);
    ctx->pc = 0x128108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128104u;
    // 0x128108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11FF30u, 0x128104u, 0x12810Cu)) {
        return;
    }
    ctx->pc = 0x12810Cu;
label_12810c:
    // 0x12810c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12810cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_128110:
    // 0x128110: 0xc0620d6  jal         func_188358
label_128114:
    if (ctx->pc == 0x128114u) {
        ctx->pc = 0x128114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128110u;
        // 0x128114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128118u;
        goto label_128118;
    }
    ctx->pc = 0x128110u;
    SET_GPR_U32(ctx, 31, 0x128118u);
    ctx->pc = 0x128114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128110u;
    // 0x128114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188358u, 0x128110u, 0x128118u)) {
        return;
    }
    ctx->pc = 0x128118u;
label_128118:
    // 0x128118: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x128118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12811c:
    // 0x12811c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12811cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_128120:
    // 0x128120: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x128120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_128124:
    // 0x128124: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x128124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_128128:
    // 0x128128: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x128128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12812c:
    // 0x12812c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x12812cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_128130:
    // 0x128130: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_128134:
    // 0x128134: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x128134u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_128138:
    // 0x128138: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x128138u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12813c:
    // 0x12813c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12813cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_128140:
    // 0x128140: 0x3e00008  jr          $ra
label_128144:
    if (ctx->pc == 0x128144u) {
        ctx->pc = 0x128144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128140u;
        // 0x128144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128148u;
        goto label_fallthrough_0x128140;
    }
    ctx->pc = 0x128140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128140u;
        // 0x128144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x128140:
    ctx->pc = 0x128148u;
}
