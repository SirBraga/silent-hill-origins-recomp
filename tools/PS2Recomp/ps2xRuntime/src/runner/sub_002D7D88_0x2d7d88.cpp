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

// Function: sub_002D7D88
// Address: 0x2d7d88 - 0x2d80f8
void sub_002D7D88_0x2d7d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D88_0x2d7d88");
#endif

    switch (ctx->pc) {
        case 0x2d7d88u: goto label_2d7d88;
        case 0x2d7d8cu: goto label_2d7d8c;
        case 0x2d7d90u: goto label_2d7d90;
        case 0x2d7d94u: goto label_2d7d94;
        case 0x2d7d98u: goto label_2d7d98;
        case 0x2d7d9cu: goto label_2d7d9c;
        case 0x2d7da0u: goto label_2d7da0;
        case 0x2d7da4u: goto label_2d7da4;
        case 0x2d7da8u: goto label_2d7da8;
        case 0x2d7dacu: goto label_2d7dac;
        case 0x2d7db0u: goto label_2d7db0;
        case 0x2d7db4u: goto label_2d7db4;
        case 0x2d7db8u: goto label_2d7db8;
        case 0x2d7dbcu: goto label_2d7dbc;
        case 0x2d7dc0u: goto label_2d7dc0;
        case 0x2d7dc4u: goto label_2d7dc4;
        case 0x2d7dc8u: goto label_2d7dc8;
        case 0x2d7dccu: goto label_2d7dcc;
        case 0x2d7dd0u: goto label_2d7dd0;
        case 0x2d7dd4u: goto label_2d7dd4;
        case 0x2d7dd8u: goto label_2d7dd8;
        case 0x2d7ddcu: goto label_2d7ddc;
        case 0x2d7de0u: goto label_2d7de0;
        case 0x2d7de4u: goto label_2d7de4;
        case 0x2d7de8u: goto label_2d7de8;
        case 0x2d7decu: goto label_2d7dec;
        case 0x2d7df0u: goto label_2d7df0;
        case 0x2d7df4u: goto label_2d7df4;
        case 0x2d7df8u: goto label_2d7df8;
        case 0x2d7dfcu: goto label_2d7dfc;
        case 0x2d7e00u: goto label_2d7e00;
        case 0x2d7e04u: goto label_2d7e04;
        case 0x2d7e08u: goto label_2d7e08;
        case 0x2d7e0cu: goto label_2d7e0c;
        case 0x2d7e10u: goto label_2d7e10;
        case 0x2d7e14u: goto label_2d7e14;
        case 0x2d7e18u: goto label_2d7e18;
        case 0x2d7e1cu: goto label_2d7e1c;
        case 0x2d7e20u: goto label_2d7e20;
        case 0x2d7e24u: goto label_2d7e24;
        case 0x2d7e28u: goto label_2d7e28;
        case 0x2d7e2cu: goto label_2d7e2c;
        case 0x2d7e30u: goto label_2d7e30;
        case 0x2d7e34u: goto label_2d7e34;
        case 0x2d7e38u: goto label_2d7e38;
        case 0x2d7e3cu: goto label_2d7e3c;
        case 0x2d7e40u: goto label_2d7e40;
        case 0x2d7e44u: goto label_2d7e44;
        case 0x2d7e48u: goto label_2d7e48;
        case 0x2d7e4cu: goto label_2d7e4c;
        case 0x2d7e50u: goto label_2d7e50;
        case 0x2d7e54u: goto label_2d7e54;
        case 0x2d7e58u: goto label_2d7e58;
        case 0x2d7e5cu: goto label_2d7e5c;
        case 0x2d7e60u: goto label_2d7e60;
        case 0x2d7e64u: goto label_2d7e64;
        case 0x2d7e68u: goto label_2d7e68;
        case 0x2d7e6cu: goto label_2d7e6c;
        case 0x2d7e70u: goto label_2d7e70;
        case 0x2d7e74u: goto label_2d7e74;
        case 0x2d7e78u: goto label_2d7e78;
        case 0x2d7e7cu: goto label_2d7e7c;
        case 0x2d7e80u: goto label_2d7e80;
        case 0x2d7e84u: goto label_2d7e84;
        case 0x2d7e88u: goto label_2d7e88;
        case 0x2d7e8cu: goto label_2d7e8c;
        case 0x2d7e90u: goto label_2d7e90;
        case 0x2d7e94u: goto label_2d7e94;
        case 0x2d7e98u: goto label_2d7e98;
        case 0x2d7e9cu: goto label_2d7e9c;
        case 0x2d7ea0u: goto label_2d7ea0;
        case 0x2d7ea4u: goto label_2d7ea4;
        case 0x2d7ea8u: goto label_2d7ea8;
        case 0x2d7eacu: goto label_2d7eac;
        case 0x2d7eb0u: goto label_2d7eb0;
        case 0x2d7eb4u: goto label_2d7eb4;
        case 0x2d7eb8u: goto label_2d7eb8;
        case 0x2d7ebcu: goto label_2d7ebc;
        case 0x2d7ec0u: goto label_2d7ec0;
        case 0x2d7ec4u: goto label_2d7ec4;
        case 0x2d7ec8u: goto label_2d7ec8;
        case 0x2d7eccu: goto label_2d7ecc;
        case 0x2d7ed0u: goto label_2d7ed0;
        case 0x2d7ed4u: goto label_2d7ed4;
        case 0x2d7ed8u: goto label_2d7ed8;
        case 0x2d7edcu: goto label_2d7edc;
        case 0x2d7ee0u: goto label_2d7ee0;
        case 0x2d7ee4u: goto label_2d7ee4;
        case 0x2d7ee8u: goto label_2d7ee8;
        case 0x2d7eecu: goto label_2d7eec;
        case 0x2d7ef0u: goto label_2d7ef0;
        case 0x2d7ef4u: goto label_2d7ef4;
        case 0x2d7ef8u: goto label_2d7ef8;
        case 0x2d7efcu: goto label_2d7efc;
        case 0x2d7f00u: goto label_2d7f00;
        case 0x2d7f04u: goto label_2d7f04;
        case 0x2d7f08u: goto label_2d7f08;
        case 0x2d7f0cu: goto label_2d7f0c;
        case 0x2d7f10u: goto label_2d7f10;
        case 0x2d7f14u: goto label_2d7f14;
        case 0x2d7f18u: goto label_2d7f18;
        case 0x2d7f1cu: goto label_2d7f1c;
        case 0x2d7f20u: goto label_2d7f20;
        case 0x2d7f24u: goto label_2d7f24;
        case 0x2d7f28u: goto label_2d7f28;
        case 0x2d7f2cu: goto label_2d7f2c;
        case 0x2d7f30u: goto label_2d7f30;
        case 0x2d7f34u: goto label_2d7f34;
        case 0x2d7f38u: goto label_2d7f38;
        case 0x2d7f3cu: goto label_2d7f3c;
        case 0x2d7f40u: goto label_2d7f40;
        case 0x2d7f44u: goto label_2d7f44;
        case 0x2d7f48u: goto label_2d7f48;
        case 0x2d7f4cu: goto label_2d7f4c;
        case 0x2d7f50u: goto label_2d7f50;
        case 0x2d7f54u: goto label_2d7f54;
        case 0x2d7f58u: goto label_2d7f58;
        case 0x2d7f5cu: goto label_2d7f5c;
        case 0x2d7f60u: goto label_2d7f60;
        case 0x2d7f64u: goto label_2d7f64;
        case 0x2d7f68u: goto label_2d7f68;
        case 0x2d7f6cu: goto label_2d7f6c;
        case 0x2d7f70u: goto label_2d7f70;
        case 0x2d7f74u: goto label_2d7f74;
        case 0x2d7f78u: goto label_2d7f78;
        case 0x2d7f7cu: goto label_2d7f7c;
        case 0x2d7f80u: goto label_2d7f80;
        case 0x2d7f84u: goto label_2d7f84;
        case 0x2d7f88u: goto label_2d7f88;
        case 0x2d7f8cu: goto label_2d7f8c;
        case 0x2d7f90u: goto label_2d7f90;
        case 0x2d7f94u: goto label_2d7f94;
        case 0x2d7f98u: goto label_2d7f98;
        case 0x2d7f9cu: goto label_2d7f9c;
        case 0x2d7fa0u: goto label_2d7fa0;
        case 0x2d7fa4u: goto label_2d7fa4;
        case 0x2d7fa8u: goto label_2d7fa8;
        case 0x2d7facu: goto label_2d7fac;
        case 0x2d7fb0u: goto label_2d7fb0;
        case 0x2d7fb4u: goto label_2d7fb4;
        case 0x2d7fb8u: goto label_2d7fb8;
        case 0x2d7fbcu: goto label_2d7fbc;
        case 0x2d7fc0u: goto label_2d7fc0;
        case 0x2d7fc4u: goto label_2d7fc4;
        case 0x2d7fc8u: goto label_2d7fc8;
        case 0x2d7fccu: goto label_2d7fcc;
        case 0x2d7fd0u: goto label_2d7fd0;
        case 0x2d7fd4u: goto label_2d7fd4;
        case 0x2d7fd8u: goto label_2d7fd8;
        case 0x2d7fdcu: goto label_2d7fdc;
        case 0x2d7fe0u: goto label_2d7fe0;
        case 0x2d7fe4u: goto label_2d7fe4;
        case 0x2d7fe8u: goto label_2d7fe8;
        case 0x2d7fecu: goto label_2d7fec;
        case 0x2d7ff0u: goto label_2d7ff0;
        case 0x2d7ff4u: goto label_2d7ff4;
        case 0x2d7ff8u: goto label_2d7ff8;
        case 0x2d7ffcu: goto label_2d7ffc;
        case 0x2d8000u: goto label_2d8000;
        case 0x2d8004u: goto label_2d8004;
        case 0x2d8008u: goto label_2d8008;
        case 0x2d800cu: goto label_2d800c;
        case 0x2d8010u: goto label_2d8010;
        case 0x2d8014u: goto label_2d8014;
        case 0x2d8018u: goto label_2d8018;
        case 0x2d801cu: goto label_2d801c;
        case 0x2d8020u: goto label_2d8020;
        case 0x2d8024u: goto label_2d8024;
        case 0x2d8028u: goto label_2d8028;
        case 0x2d802cu: goto label_2d802c;
        case 0x2d8030u: goto label_2d8030;
        case 0x2d8034u: goto label_2d8034;
        case 0x2d8038u: goto label_2d8038;
        case 0x2d803cu: goto label_2d803c;
        case 0x2d8040u: goto label_2d8040;
        case 0x2d8044u: goto label_2d8044;
        case 0x2d8048u: goto label_2d8048;
        case 0x2d804cu: goto label_2d804c;
        case 0x2d8050u: goto label_2d8050;
        case 0x2d8054u: goto label_2d8054;
        case 0x2d8058u: goto label_2d8058;
        case 0x2d805cu: goto label_2d805c;
        case 0x2d8060u: goto label_2d8060;
        case 0x2d8064u: goto label_2d8064;
        case 0x2d8068u: goto label_2d8068;
        case 0x2d806cu: goto label_2d806c;
        case 0x2d8070u: goto label_2d8070;
        case 0x2d8074u: goto label_2d8074;
        case 0x2d8078u: goto label_2d8078;
        case 0x2d807cu: goto label_2d807c;
        case 0x2d8080u: goto label_2d8080;
        case 0x2d8084u: goto label_2d8084;
        case 0x2d8088u: goto label_2d8088;
        case 0x2d808cu: goto label_2d808c;
        case 0x2d8090u: goto label_2d8090;
        case 0x2d8094u: goto label_2d8094;
        case 0x2d8098u: goto label_2d8098;
        case 0x2d809cu: goto label_2d809c;
        case 0x2d80a0u: goto label_2d80a0;
        case 0x2d80a4u: goto label_2d80a4;
        case 0x2d80a8u: goto label_2d80a8;
        case 0x2d80acu: goto label_2d80ac;
        case 0x2d80b0u: goto label_2d80b0;
        case 0x2d80b4u: goto label_2d80b4;
        case 0x2d80b8u: goto label_2d80b8;
        case 0x2d80bcu: goto label_2d80bc;
        case 0x2d80c0u: goto label_2d80c0;
        case 0x2d80c4u: goto label_2d80c4;
        case 0x2d80c8u: goto label_2d80c8;
        case 0x2d80ccu: goto label_2d80cc;
        case 0x2d80d0u: goto label_2d80d0;
        case 0x2d80d4u: goto label_2d80d4;
        case 0x2d80d8u: goto label_2d80d8;
        case 0x2d80dcu: goto label_2d80dc;
        case 0x2d80e0u: goto label_2d80e0;
        case 0x2d80e4u: goto label_2d80e4;
        case 0x2d80e8u: goto label_2d80e8;
        case 0x2d80ecu: goto label_2d80ec;
        case 0x2d80f0u: goto label_2d80f0;
        case 0x2d80f4u: goto label_2d80f4;
        default: break;
    }

    ctx->pc = 0x2d7d88u;

label_2d7d88:
    // 0x2d7d88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d7d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2d7d8c:
    // 0x2d7d8c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d7d90:
    // 0x2d7d90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d7d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2d7d94:
    // 0x2d7d94: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2d7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2d7d98:
    // 0x2d7d98: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2d7d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2d7d9c:
    // 0x2d7d9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d7d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7da0:
    // 0x2d7da0: 0x30b7ffff  andi        $s7, $a1, 0xFFFF
    ctx->pc = 0x2d7da0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2d7da4:
    // 0x2d7da4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x2d7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2d7da8:
    // 0x2d7da8: 0x2e40018  mult        $zero, $s7, $a0
    ctx->pc = 0x2d7da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d7dac:
    // 0x2d7dac: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2d7dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2d7db0:
    // 0x2d7db0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2d7db4:
    // 0x2d7db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7db8:
    // 0x2d7db8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d7db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2d7dbc:
    // 0x2d7dbc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d7dc0:
    // 0x2d7dc0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d7dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2d7dc4:
    // 0x2d7dc4: 0x30deffff  andi        $fp, $a2, 0xFFFF
    ctx->pc = 0x2d7dc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_2d7dc8:
    // 0x2d7dc8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d7dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2d7dcc:
    // 0x2d7dcc: 0x2012  mflo        $a0
    ctx->pc = 0x2d7dccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2d7dd0:
    // 0x2d7dd0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d7dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2d7dd4:
    // 0x2d7dd4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2d7dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2d7dd8:
    // 0x2d7dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d7ddc:
    // 0x2d7ddc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x2d7ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_2d7de0:
    // 0x2d7de0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2d7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2d7de4:
    // 0x2d7de4: 0x40f809  jalr        $v0
label_2d7de8:
    if (ctx->pc == 0x2D7DE8u) {
        ctx->pc = 0x2D7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DE4u;
        // 0x2d7de8: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7DECu;
        goto label_2d7dec;
    }
    ctx->pc = 0x2D7DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7DECu);
        ctx->pc = 0x2D7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DE4u;
        // 0x2d7de8: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7DE4u, 0x2D7DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7DECu;
label_2d7dec:
    // 0x2d7dec: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2d7decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2d7df0:
    // 0x2d7df0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d7df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2d7df4:
    // 0x2d7df4: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x2d7df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d7df8:
    // 0x2d7df8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d7df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d7dfc:
    // 0x2d7dfc: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2d7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2d7e00:
    // 0x2d7e00: 0xc0ad2b4  jal         func_2B4AD0
label_2d7e04:
    if (ctx->pc == 0x2D7E04u) {
        ctx->pc = 0x2D7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E00u;
        // 0x2d7e04: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E08u;
        goto label_2d7e08;
    }
    ctx->pc = 0x2D7E00u;
    SET_GPR_U32(ctx, 31, 0x2D7E08u);
    ctx->pc = 0x2D7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E00u;
    // 0x2d7e04: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2D7E00u, 0x2D7E08u)) {
        return;
    }
    ctx->pc = 0x2D7E08u;
label_2d7e08:
    // 0x2d7e08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d7e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e0c:
    // 0x2d7e0c: 0x12e00055  beqz        $s7, . + 4 + (0x55 << 2)
label_2d7e10:
    if (ctx->pc == 0x2D7E10u) {
        ctx->pc = 0x2D7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E0Cu;
        // 0x2d7e10: 0xae650010  sw          $a1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E14u;
        goto label_2d7e14;
    }
    ctx->pc = 0x2D7E0Cu;
    {
        const bool branch_taken_0x2d7e0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E0Cu;
        // 0x2d7e10: 0xae650010  sw          $a1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e0c) {
            ctx->pc = 0x2D7F64u;
            goto label_2d7f64;
        }
    }
    ctx->pc = 0x2D7E14u;
label_2d7e14:
    // 0x2d7e14: 0x171023  negu        $v0, $s7
    ctx->pc = 0x2d7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
label_2d7e18:
    // 0x2d7e18: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d7e18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e1c:
    // 0x2d7e1c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d7e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2d7e20:
    // 0x2d7e20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d7e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e24:
    // 0x2d7e24: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_2d7e28:
    if (ctx->pc == 0x2D7E28u) {
        ctx->pc = 0x2D7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E24u;
        // 0x2d7e28: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E2Cu;
        goto label_2d7e2c;
    }
    ctx->pc = 0x2D7E24u;
    {
        const bool branch_taken_0x2d7e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E24u;
        // 0x2d7e28: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e24) {
            ctx->pc = 0x2D7EB8u;
            goto label_2d7eb8;
        }
    }
    ctx->pc = 0x2D7E2Cu;
label_2d7e2c:
    // 0x2d7e2c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d7e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d7e30:
    // 0x2d7e30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2d7e34:
    if (ctx->pc == 0x2D7E34u) {
        ctx->pc = 0x2D7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E30u;
        // 0x2d7e34: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E38u;
        goto label_2d7e38;
    }
    ctx->pc = 0x2D7E30u;
    {
        const bool branch_taken_0x2d7e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E30u;
        // 0x2d7e34: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e30) {
            ctx->pc = 0x2D7E88u;
            goto label_2d7e88;
        }
    }
    ctx->pc = 0x2D7E38u;
label_2d7e38:
    // 0x2d7e38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2d7e3c:
    if (ctx->pc == 0x2D7E3Cu) {
        ctx->pc = 0x2D7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E38u;
        // 0x2d7e3c: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E40u;
        goto label_2d7e40;
    }
    ctx->pc = 0x2D7E38u;
    {
        const bool branch_taken_0x2d7e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e38) {
            ctx->pc = 0x2D7E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7E38u;
            // 0x2d7e3c: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7E60u;
            goto label_2d7e60;
        }
    }
    ctx->pc = 0x2D7E40u;
label_2d7e40:
    // 0x2d7e40: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2d7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7e44:
    // 0x2d7e44: 0x24150060  addiu       $s5, $zero, 0x60
    ctx->pc = 0x2d7e44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2d7e48:
    // 0x2d7e48: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x2d7e48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2d7e4c:
    // 0x2d7e4c: 0xc0acb28  jal         func_2B2CA0
label_2d7e50:
    if (ctx->pc == 0x2D7E50u) {
        ctx->pc = 0x2D7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E4Cu;
        // 0x2d7e50: 0x26f4ffff  addiu       $s4, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E54u;
        goto label_2d7e54;
    }
    ctx->pc = 0x2D7E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D7E54u);
    ctx->pc = 0x2D7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E4Cu;
    // 0x2d7e50: 0x26f4ffff  addiu       $s4, $s7, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7E4Cu, 0x2D7E54u)) {
        return;
    }
    ctx->pc = 0x2D7E54u;
label_2d7e54:
    // 0x2d7e54: 0xc0b5ac6  jal         func_2D6B18
label_2d7e58:
    if (ctx->pc == 0x2D7E58u) {
        ctx->pc = 0x2D7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E54u;
        // 0x2d7e58: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E5Cu;
        goto label_2d7e5c;
    }
    ctx->pc = 0x2D7E54u;
    SET_GPR_U32(ctx, 31, 0x2D7E5Cu);
    ctx->pc = 0x2D7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E54u;
    // 0x2d7e58: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7E54u, 0x2D7E5Cu)) {
        return;
    }
    ctx->pc = 0x2D7E5Cu;
label_2d7e5c:
    // 0x2d7e5c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7e60:
    // 0x2d7e60: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d7e60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2d7e64:
    // 0x2d7e64: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d7e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7e68:
    // 0x2d7e68: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x2d7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2d7e6c:
    // 0x2d7e6c: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2d7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_2d7e70:
    // 0x2d7e70: 0xc0acb28  jal         func_2B2CA0
label_2d7e74:
    if (ctx->pc == 0x2D7E74u) {
        ctx->pc = 0x2D7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E70u;
        // 0x2d7e74: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E78u;
        goto label_2d7e78;
    }
    ctx->pc = 0x2D7E70u;
    SET_GPR_U32(ctx, 31, 0x2D7E78u);
    ctx->pc = 0x2D7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E70u;
    // 0x2d7e74: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7E70u, 0x2D7E78u)) {
        return;
    }
    ctx->pc = 0x2D7E78u;
label_2d7e78:
    // 0x2d7e78: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7e7c:
    // 0x2d7e7c: 0xc0b5ac6  jal         func_2D6B18
label_2d7e80:
    if (ctx->pc == 0x2D7E80u) {
        ctx->pc = 0x2D7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E7Cu;
        // 0x2d7e80: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E84u;
        goto label_2d7e84;
    }
    ctx->pc = 0x2D7E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D7E84u);
    ctx->pc = 0x2D7E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E7Cu;
    // 0x2d7e80: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7E7Cu, 0x2D7E84u)) {
        return;
    }
    ctx->pc = 0x2D7E84u;
label_2d7e84:
    // 0x2d7e84: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x2d7e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2d7e88:
    // 0x2d7e88: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7e8c:
    // 0x2d7e8c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d7e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2d7e90:
    // 0x2d7e90: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7e94:
    // 0x2d7e94: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x2d7e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2d7e98:
    // 0x2d7e98: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2d7e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_2d7e9c:
    // 0x2d7e9c: 0xc0acb28  jal         func_2B2CA0
label_2d7ea0:
    if (ctx->pc == 0x2D7EA0u) {
        ctx->pc = 0x2D7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E9Cu;
        // 0x2d7ea0: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EA4u;
        goto label_2d7ea4;
    }
    ctx->pc = 0x2D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2D7EA4u);
    ctx->pc = 0x2D7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E9Cu;
    // 0x2d7ea0: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7E9Cu, 0x2D7EA4u)) {
        return;
    }
    ctx->pc = 0x2D7EA4u;
label_2d7ea4:
    // 0x2d7ea4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7ea8:
    // 0x2d7ea8: 0xc0b5ac6  jal         func_2D6B18
label_2d7eac:
    if (ctx->pc == 0x2D7EACu) {
        ctx->pc = 0x2D7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EA8u;
        // 0x2d7eac: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EB0u;
        goto label_2d7eb0;
    }
    ctx->pc = 0x2D7EA8u;
    SET_GPR_U32(ctx, 31, 0x2D7EB0u);
    ctx->pc = 0x2D7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EA8u;
    // 0x2d7eac: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7EA8u, 0x2D7EB0u)) {
        return;
    }
    ctx->pc = 0x2D7EB0u;
label_2d7eb0:
    // 0x2d7eb0: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
label_2d7eb4:
    if (ctx->pc == 0x2D7EB4u) {
        ctx->pc = 0x2D7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EB0u;
        // 0x2d7eb4: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EB8u;
        goto label_2d7eb8;
    }
    ctx->pc = 0x2D7EB0u;
    {
        const bool branch_taken_0x2d7eb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EB0u;
        // 0x2d7eb4: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7eb0) {
            ctx->pc = 0x2D7F64u;
            goto label_2d7f64;
        }
    }
    ctx->pc = 0x2D7EB8u;
label_2d7eb8:
    // 0x2d7eb8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7ebc:
    // 0x2d7ebc: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x2d7ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2d7ec0:
    // 0x2d7ec0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d7ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7ec4:
    // 0x2d7ec4: 0x26b100c0  addiu       $s1, $s5, 0xC0
    ctx->pc = 0x2d7ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_2d7ec8:
    // 0x2d7ec8: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x2d7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2d7ecc:
    // 0x2d7ecc: 0x26b20120  addiu       $s2, $s5, 0x120
    ctx->pc = 0x2d7eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
label_2d7ed0:
    // 0x2d7ed0: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2d7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_2d7ed4:
    // 0x2d7ed4: 0xc0acb28  jal         func_2B2CA0
label_2d7ed8:
    if (ctx->pc == 0x2D7ED8u) {
        ctx->pc = 0x2D7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7ED4u;
        // 0x2d7ed8: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EDCu;
        goto label_2d7edc;
    }
    ctx->pc = 0x2D7ED4u;
    SET_GPR_U32(ctx, 31, 0x2D7EDCu);
    ctx->pc = 0x2D7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7ED4u;
    // 0x2d7ed8: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7ED4u, 0x2D7EDCu)) {
        return;
    }
    ctx->pc = 0x2D7EDCu;
label_2d7edc:
    // 0x2d7edc: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7ee0:
    // 0x2d7ee0: 0xc0b5ac6  jal         func_2D6B18
label_2d7ee4:
    if (ctx->pc == 0x2D7EE4u) {
        ctx->pc = 0x2D7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EE0u;
        // 0x2d7ee4: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EE8u;
        goto label_2d7ee8;
    }
    ctx->pc = 0x2D7EE0u;
    SET_GPR_U32(ctx, 31, 0x2D7EE8u);
    ctx->pc = 0x2D7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EE0u;
    // 0x2d7ee4: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7EE0u, 0x2D7EE8u)) {
        return;
    }
    ctx->pc = 0x2D7EE8u;
label_2d7ee8:
    // 0x2d7ee8: 0x26b50180  addiu       $s5, $s5, 0x180
    ctx->pc = 0x2d7ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
label_2d7eec:
    // 0x2d7eec: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7ef0:
    // 0x2d7ef0: 0x26c4004c  addiu       $a0, $s6, 0x4C
    ctx->pc = 0x2d7ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
label_2d7ef4:
    // 0x2d7ef4: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7ef8:
    // 0x2d7ef8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d7efc:
    // 0x2d7efc: 0xc0acb28  jal         func_2B2CA0
label_2d7f00:
    if (ctx->pc == 0x2D7F00u) {
        ctx->pc = 0x2D7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EFCu;
        // 0x2d7f00: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F04u;
        goto label_2d7f04;
    }
    ctx->pc = 0x2D7EFCu;
    SET_GPR_U32(ctx, 31, 0x2D7F04u);
    ctx->pc = 0x2D7F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EFCu;
    // 0x2d7f00: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7EFCu, 0x2D7F04u)) {
        return;
    }
    ctx->pc = 0x2D7F04u;
label_2d7f04:
    // 0x2d7f04: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7f08:
    // 0x2d7f08: 0xc0b5ac6  jal         func_2D6B18
label_2d7f0c:
    if (ctx->pc == 0x2D7F0Cu) {
        ctx->pc = 0x2D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F08u;
        // 0x2d7f0c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F10u;
        goto label_2d7f10;
    }
    ctx->pc = 0x2D7F08u;
    SET_GPR_U32(ctx, 31, 0x2D7F10u);
    ctx->pc = 0x2D7F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F08u;
    // 0x2d7f0c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7F08u, 0x2D7F10u)) {
        return;
    }
    ctx->pc = 0x2D7F10u;
label_2d7f10:
    // 0x2d7f10: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7f14:
    // 0x2d7f14: 0x26c40098  addiu       $a0, $s6, 0x98
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 152));
label_2d7f18:
    // 0x2d7f18: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d7f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7f1c:
    // 0x2d7f1c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d7f20:
    // 0x2d7f20: 0xc0acb28  jal         func_2B2CA0
label_2d7f24:
    if (ctx->pc == 0x2D7F24u) {
        ctx->pc = 0x2D7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F20u;
        // 0x2d7f24: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F28u;
        goto label_2d7f28;
    }
    ctx->pc = 0x2D7F20u;
    SET_GPR_U32(ctx, 31, 0x2D7F28u);
    ctx->pc = 0x2D7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F20u;
    // 0x2d7f24: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7F20u, 0x2D7F28u)) {
        return;
    }
    ctx->pc = 0x2D7F28u;
label_2d7f28:
    // 0x2d7f28: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7f2c:
    // 0x2d7f2c: 0xc0b5ac6  jal         func_2D6B18
label_2d7f30:
    if (ctx->pc == 0x2D7F30u) {
        ctx->pc = 0x2D7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F2Cu;
        // 0x2d7f30: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F34u;
        goto label_2d7f34;
    }
    ctx->pc = 0x2D7F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F34u);
    ctx->pc = 0x2D7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F2Cu;
    // 0x2d7f30: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7F2Cu, 0x2D7F34u)) {
        return;
    }
    ctx->pc = 0x2D7F34u;
label_2d7f34:
    // 0x2d7f34: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d7f38:
    // 0x2d7f38: 0x26c400e4  addiu       $a0, $s6, 0xE4
    ctx->pc = 0x2d7f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 228));
label_2d7f3c:
    // 0x2d7f3c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d7f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7f40:
    // 0x2d7f40: 0x26d60130  addiu       $s6, $s6, 0x130
    ctx->pc = 0x2d7f40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
label_2d7f44:
    // 0x2d7f44: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d7f48:
    // 0x2d7f48: 0xc0acb28  jal         func_2B2CA0
label_2d7f4c:
    if (ctx->pc == 0x2D7F4Cu) {
        ctx->pc = 0x2D7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F48u;
        // 0x2d7f4c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F50u;
        goto label_2d7f50;
    }
    ctx->pc = 0x2D7F48u;
    SET_GPR_U32(ctx, 31, 0x2D7F50u);
    ctx->pc = 0x2D7F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F48u;
    // 0x2d7f4c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D7F48u, 0x2D7F50u)) {
        return;
    }
    ctx->pc = 0x2D7F50u;
label_2d7f50:
    // 0x2d7f50: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d7f54:
    // 0x2d7f54: 0xc0b5ac6  jal         func_2D6B18
label_2d7f58:
    if (ctx->pc == 0x2D7F58u) {
        ctx->pc = 0x2D7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F54u;
        // 0x2d7f58: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F5Cu;
        goto label_2d7f5c;
    }
    ctx->pc = 0x2D7F54u;
    SET_GPR_U32(ctx, 31, 0x2D7F5Cu);
    ctx->pc = 0x2D7F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F54u;
    // 0x2d7f58: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D7F54u, 0x2D7F5Cu)) {
        return;
    }
    ctx->pc = 0x2D7F5Cu;
label_2d7f5c:
    // 0x2d7f5c: 0x5680ffd7  bnel        $s4, $zero, . + 4 + (-0x29 << 2)
label_2d7f60:
    if (ctx->pc == 0x2D7F60u) {
        ctx->pc = 0x2D7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F5Cu;
        // 0x2d7f60: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F64u;
        goto label_2d7f64;
    }
    ctx->pc = 0x2D7F5Cu;
    {
        const bool branch_taken_0x2d7f5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7f5c) {
            ctx->pc = 0x2D7F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7F5Cu;
            // 0x2d7f60: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7ebc;
        }
    }
    ctx->pc = 0x2D7F64u;
label_2d7f64:
    // 0x2d7f64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f68:
    // 0x2d7f68: 0xc0ad26a  jal         func_2B49A8
label_2d7f6c:
    if (ctx->pc == 0x2D7F6Cu) {
        ctx->pc = 0x2D7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F68u;
        // 0x2d7f6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F70u;
        goto label_2d7f70;
    }
    ctx->pc = 0x2D7F68u;
    SET_GPR_U32(ctx, 31, 0x2D7F70u);
    ctx->pc = 0x2D7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F68u;
    // 0x2d7f6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B49A8u, 0x2D7F68u, 0x2D7F70u)) {
        return;
    }
    ctx->pc = 0x2D7F70u;
label_2d7f70:
    // 0x2d7f70: 0x1e9080  sll         $s2, $fp, 2
    ctx->pc = 0x2d7f70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_2d7f74:
    // 0x2d7f74: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x2d7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2d7f78:
    // 0x2d7f78: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x2d7f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_2d7f7c:
    // 0x2d7f7c: 0x3c40018  mult        $zero, $fp, $a0
    ctx->pc = 0x2d7f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2d7f80:
    // 0x2d7f80: 0x24a30fc8  addiu       $v1, $a1, 0xFC8
    ctx->pc = 0x2d7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_2d7f84:
    // 0x2d7f84: 0x8c660108  lw          $a2, 0x108($v1)
    ctx->pc = 0x2d7f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2d7f88:
    // 0x2d7f88: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d7f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d7f8c:
    // 0x2d7f8c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2d7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2d7f90:
    // 0x2d7f90: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d7f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d7f94:
    // 0x2d7f94: 0x2012  mflo        $a0
    ctx->pc = 0x2d7f94u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2d7f98:
    // 0x2d7f98: 0xc0f809  jalr        $a2
label_2d7f9c:
    if (ctx->pc == 0x2D7F9Cu) {
        ctx->pc = 0x2D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F98u;
        // 0x2d7f9c: 0x178880  sll         $s1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FA0u;
        goto label_2d7fa0;
    }
    ctx->pc = 0x2D7F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D7FA0u);
        ctx->pc = 0x2D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F98u;
        // 0x2d7f9c: 0x178880  sll         $s1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7F98u, 0x2D7FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7FA0u;
label_2d7fa0:
    // 0x2d7fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fa4:
    // 0x2d7fa4: 0x13c0002d  beqz        $fp, . + 4 + (0x2D << 2)
label_2d7fa8:
    if (ctx->pc == 0x2D7FA8u) {
        ctx->pc = 0x2D7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FA4u;
        // 0x2d7fa8: 0xae640018  sw          $a0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FACu;
        goto label_2d7fac;
    }
    ctx->pc = 0x2D7FA4u;
    {
        const bool branch_taken_0x2d7fa4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FA4u;
        // 0x2d7fa8: 0xae640018  sw          $a0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fa4) {
            ctx->pc = 0x2D805Cu;
            goto label_2d805c;
        }
    }
    ctx->pc = 0x2D7FACu;
label_2d7fac:
    // 0x2d7fac: 0x1e1023  negu        $v0, $fp
    ctx->pc = 0x2d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_2d7fb0:
    // 0x2d7fb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fb4:
    // 0x2d7fb4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d7fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2d7fb8:
    // 0x2d7fb8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2d7fbc:
    if (ctx->pc == 0x2D7FBCu) {
        ctx->pc = 0x2D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FB8u;
        // 0x2d7fbc: 0x3c0a02d  daddu       $s4, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FC0u;
        goto label_2d7fc0;
    }
    ctx->pc = 0x2D7FB8u;
    {
        const bool branch_taken_0x2d7fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FB8u;
        // 0x2d7fbc: 0x3c0a02d  daddu       $s4, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fb8) {
            ctx->pc = 0x2D8010u;
            goto label_2d8010;
        }
    }
    ctx->pc = 0x2D7FC0u;
label_2d7fc0:
    // 0x2d7fc0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d7fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d7fc4:
    // 0x2d7fc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d7fc8:
    if (ctx->pc == 0x2D7FC8u) {
        ctx->pc = 0x2D7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FC4u;
        // 0x2d7fc8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FCCu;
        goto label_2d7fcc;
    }
    ctx->pc = 0x2D7FC4u;
    {
        const bool branch_taken_0x2d7fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FC4u;
        // 0x2d7fc8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fc4) {
            ctx->pc = 0x2D7FF4u;
            goto label_2d7ff4;
        }
    }
    ctx->pc = 0x2D7FCCu;
label_2d7fcc:
    // 0x2d7fcc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2d7fd0:
    if (ctx->pc == 0x2D7FD0u) {
        ctx->pc = 0x2D7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FCCu;
        // 0x2d7fd0: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FD4u;
        goto label_2d7fd4;
    }
    ctx->pc = 0x2D7FCCu;
    {
        const bool branch_taken_0x2d7fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7fcc) {
            ctx->pc = 0x2D7FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7FCCu;
            // 0x2d7fd0: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7FE4u;
            goto label_2d7fe4;
        }
    }
    ctx->pc = 0x2D7FD4u;
label_2d7fd4:
    // 0x2d7fd4: 0xc0c2620  jal         func_309880
label_2d7fd8:
    if (ctx->pc == 0x2D7FD8u) {
        ctx->pc = 0x2D7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FD4u;
        // 0x2d7fd8: 0x241000b4  addiu       $s0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FDCu;
        goto label_2d7fdc;
    }
    ctx->pc = 0x2D7FD4u;
    SET_GPR_U32(ctx, 31, 0x2D7FDCu);
    ctx->pc = 0x2D7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FD4u;
    // 0x2d7fd8: 0x241000b4  addiu       $s0, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D7FD4u, 0x2D7FDCu)) {
        return;
    }
    ctx->pc = 0x2D7FDCu;
label_2d7fdc:
    // 0x2d7fdc: 0x27d4ffff  addiu       $s4, $fp, -0x1
    ctx->pc = 0x2d7fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_2d7fe0:
    // 0x2d7fe0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2d7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d7fe4:
    // 0x2d7fe4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d7fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2d7fe8:
    // 0x2d7fe8: 0xc0c2620  jal         func_309880
label_2d7fec:
    if (ctx->pc == 0x2D7FECu) {
        ctx->pc = 0x2D7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FE8u;
        // 0x2d7fec: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FF0u;
        goto label_2d7ff0;
    }
    ctx->pc = 0x2D7FE8u;
    SET_GPR_U32(ctx, 31, 0x2D7FF0u);
    ctx->pc = 0x2D7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FE8u;
    // 0x2d7fec: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D7FE8u, 0x2D7FF0u)) {
        return;
    }
    ctx->pc = 0x2D7FF0u;
label_2d7ff0:
    // 0x2d7ff0: 0x261000b4  addiu       $s0, $s0, 0xB4
    ctx->pc = 0x2d7ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_2d7ff4:
    // 0x2d7ff4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d7ff8:
    // 0x2d7ff8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d7ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2d7ffc:
    // 0x2d7ffc: 0xc0c2620  jal         func_309880
label_2d8000:
    if (ctx->pc == 0x2D8000u) {
        ctx->pc = 0x2D8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FFCu;
        // 0x2d8000: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8004u;
        goto label_2d8004;
    }
    ctx->pc = 0x2D7FFCu;
    SET_GPR_U32(ctx, 31, 0x2D8004u);
    ctx->pc = 0x2D8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FFCu;
    // 0x2d8000: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D7FFCu, 0x2D8004u)) {
        return;
    }
    ctx->pc = 0x2D8004u;
label_2d8004:
    // 0x2d8004: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
label_2d8008:
    if (ctx->pc == 0x2D8008u) {
        ctx->pc = 0x2D8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8004u;
        // 0x2d8008: 0x261000b4  addiu       $s0, $s0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D800Cu;
        goto label_2d800c;
    }
    ctx->pc = 0x2D8004u;
    {
        const bool branch_taken_0x2d8004 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8004u;
        // 0x2d8008: 0x261000b4  addiu       $s0, $s0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8004) {
            ctx->pc = 0x2D805Cu;
            goto label_2d805c;
        }
    }
    ctx->pc = 0x2D800Cu;
label_2d800c:
    // 0x2d800c: 0x0  nop
    ctx->pc = 0x2d800cu;
    // NOP
label_2d8010:
    // 0x2d8010: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2d8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d8014:
    // 0x2d8014: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x2d8014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_2d8018:
    // 0x2d8018: 0xc0c2620  jal         func_309880
label_2d801c:
    if (ctx->pc == 0x2D801Cu) {
        ctx->pc = 0x2D801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8018u;
        // 0x2d801c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8020u;
        goto label_2d8020;
    }
    ctx->pc = 0x2D8018u;
    SET_GPR_U32(ctx, 31, 0x2D8020u);
    ctx->pc = 0x2D801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8018u;
    // 0x2d801c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D8018u, 0x2D8020u)) {
        return;
    }
    ctx->pc = 0x2D8020u;
label_2d8020:
    // 0x2d8020: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2d8020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d8024:
    // 0x2d8024: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x2d8024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_2d8028:
    // 0x2d8028: 0xc0c2620  jal         func_309880
label_2d802c:
    if (ctx->pc == 0x2D802Cu) {
        ctx->pc = 0x2D802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8028u;
        // 0x2d802c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8030u;
        goto label_2d8030;
    }
    ctx->pc = 0x2D8028u;
    SET_GPR_U32(ctx, 31, 0x2D8030u);
    ctx->pc = 0x2D802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8028u;
    // 0x2d802c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D8028u, 0x2D8030u)) {
        return;
    }
    ctx->pc = 0x2D8030u;
label_2d8030:
    // 0x2d8030: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2d8030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d8034:
    // 0x2d8034: 0x26040168  addiu       $a0, $s0, 0x168
    ctx->pc = 0x2d8034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
label_2d8038:
    // 0x2d8038: 0xc0c2620  jal         func_309880
label_2d803c:
    if (ctx->pc == 0x2D803Cu) {
        ctx->pc = 0x2D803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8038u;
        // 0x2d803c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8040u;
        goto label_2d8040;
    }
    ctx->pc = 0x2D8038u;
    SET_GPR_U32(ctx, 31, 0x2D8040u);
    ctx->pc = 0x2D803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8038u;
    // 0x2d803c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D8038u, 0x2D8040u)) {
        return;
    }
    ctx->pc = 0x2D8040u;
label_2d8040:
    // 0x2d8040: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2d8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d8044:
    // 0x2d8044: 0x2604021c  addiu       $a0, $s0, 0x21C
    ctx->pc = 0x2d8044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
label_2d8048:
    // 0x2d8048: 0x261002d0  addiu       $s0, $s0, 0x2D0
    ctx->pc = 0x2d8048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
label_2d804c:
    // 0x2d804c: 0xc0c2620  jal         func_309880
label_2d8050:
    if (ctx->pc == 0x2D8050u) {
        ctx->pc = 0x2D8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D804Cu;
        // 0x2d8050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8054u;
        goto label_2d8054;
    }
    ctx->pc = 0x2D804Cu;
    SET_GPR_U32(ctx, 31, 0x2D8054u);
    ctx->pc = 0x2D8050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D804Cu;
    // 0x2d8050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D804Cu, 0x2D8054u)) {
        return;
    }
    ctx->pc = 0x2D8054u;
label_2d8054:
    // 0x2d8054: 0x5680ffef  bnel        $s4, $zero, . + 4 + (-0x11 << 2)
label_2d8058:
    if (ctx->pc == 0x2D8058u) {
        ctx->pc = 0x2D8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8054u;
        // 0x2d8058: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D805Cu;
        goto label_2d805c;
    }
    ctx->pc = 0x2D8054u;
    {
        const bool branch_taken_0x2d8054 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8054) {
            ctx->pc = 0x2D8058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8054u;
            // 0x2d8058: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8014;
        }
    }
    ctx->pc = 0x2D805Cu;
label_2d805c:
    // 0x2d805c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2d805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2d8060:
    // 0x2d8060: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d8060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d8064:
    // 0x2d8064: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x2d8064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2d8068:
    // 0x2d8068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d806c:
    // 0x2d806c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d8070:
    // 0x2d8070: 0x40f809  jalr        $v0
label_2d8074:
    if (ctx->pc == 0x2D8074u) {
        ctx->pc = 0x2D8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8070u;
        // 0x2d8074: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8078u;
        goto label_2d8078;
    }
    ctx->pc = 0x2D8070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8078u);
        ctx->pc = 0x2D8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8070u;
        // 0x2d8074: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8070u, 0x2D8078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8078u;
label_2d8078:
    // 0x2d8078: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x2d8078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d807c:
    // 0x2d807c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d807cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d8080:
    // 0x2d8080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8084:
    // 0x2d8084: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x2d8084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_2d8088:
    // 0x2d8088: 0x60f809  jalr        $v1
label_2d808c:
    if (ctx->pc == 0x2D808Cu) {
        ctx->pc = 0x2D808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8088u;
        // 0x2d808c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8090u;
        goto label_2d8090;
    }
    ctx->pc = 0x2D8088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D8090u);
        ctx->pc = 0x2D808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8088u;
        // 0x2d808c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8088u, 0x2D8090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8090u;
label_2d8090:
    // 0x2d8090: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x2d8090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d8094:
    // 0x2d8094: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d8094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d8098:
    // 0x2d8098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d809c:
    // 0x2d809c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x2d809cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_2d80a0:
    // 0x2d80a0: 0xc0f809  jalr        $a2
label_2d80a4:
    if (ctx->pc == 0x2D80A4u) {
        ctx->pc = 0x2D80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80A0u;
        // 0x2d80a4: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D80A8u;
        goto label_2d80a8;
    }
    ctx->pc = 0x2D80A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D80A8u);
        ctx->pc = 0x2D80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80A0u;
        // 0x2d80a4: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D80A0u, 0x2D80A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D80A8u;
label_2d80a8:
    // 0x2d80a8: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x2d80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_2d80ac:
    // 0x2d80ac: 0xa6770004  sh          $s7, 0x4($s3)
    ctx->pc = 0x2d80acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 23));
label_2d80b0:
    // 0x2d80b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d80b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d80b4:
    // 0x2d80b4: 0xa67e0006  sh          $fp, 0x6($s3)
    ctx->pc = 0x2d80b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 30));
label_2d80b8:
    // 0x2d80b8: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x2d80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_2d80bc:
    // 0x2d80bc: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x2d80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_2d80c0:
    // 0x2d80c0: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x2d80c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_2d80c4:
    // 0x2d80c4: 0xa660000a  sh          $zero, 0xA($s3)
    ctx->pc = 0x2d80c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 0));
label_2d80c8:
    // 0x2d80c8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d80c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d80cc:
    // 0x2d80cc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d80ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d80d0:
    // 0x2d80d0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d80d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d80d4:
    // 0x2d80d4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d80d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d80d8:
    // 0x2d80d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d80d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d80dc:
    // 0x2d80dc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d80dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d80e0:
    // 0x2d80e0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2d80e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d80e4:
    // 0x2d80e4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2d80e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d80e8:
    // 0x2d80e8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2d80e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d80ec:
    // 0x2d80ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d80ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d80f0:
    // 0x2d80f0: 0x3e00008  jr          $ra
label_2d80f4:
    if (ctx->pc == 0x2D80F4u) {
        ctx->pc = 0x2D80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80F0u;
        // 0x2d80f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D80F8u;
        goto label_fallthrough_0x2d80f0;
    }
    ctx->pc = 0x2D80F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80F0u;
        // 0x2d80f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D80F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d80f0:
    ctx->pc = 0x2D80F8u;
}
