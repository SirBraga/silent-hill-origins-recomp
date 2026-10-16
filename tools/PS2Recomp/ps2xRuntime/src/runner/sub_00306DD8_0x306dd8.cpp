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

// Function: sub_00306DD8
// Address: 0x306dd8 - 0x3070a0
void sub_00306DD8_0x306dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306DD8_0x306dd8");
#endif

    switch (ctx->pc) {
        case 0x306dd8u: goto label_306dd8;
        case 0x306ddcu: goto label_306ddc;
        case 0x306de0u: goto label_306de0;
        case 0x306de4u: goto label_306de4;
        case 0x306de8u: goto label_306de8;
        case 0x306decu: goto label_306dec;
        case 0x306df0u: goto label_306df0;
        case 0x306df4u: goto label_306df4;
        case 0x306df8u: goto label_306df8;
        case 0x306dfcu: goto label_306dfc;
        case 0x306e00u: goto label_306e00;
        case 0x306e04u: goto label_306e04;
        case 0x306e08u: goto label_306e08;
        case 0x306e0cu: goto label_306e0c;
        case 0x306e10u: goto label_306e10;
        case 0x306e14u: goto label_306e14;
        case 0x306e18u: goto label_306e18;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e20u: goto label_306e20;
        case 0x306e24u: goto label_306e24;
        case 0x306e28u: goto label_306e28;
        case 0x306e2cu: goto label_306e2c;
        case 0x306e30u: goto label_306e30;
        case 0x306e34u: goto label_306e34;
        case 0x306e38u: goto label_306e38;
        case 0x306e3cu: goto label_306e3c;
        case 0x306e40u: goto label_306e40;
        case 0x306e44u: goto label_306e44;
        case 0x306e48u: goto label_306e48;
        case 0x306e4cu: goto label_306e4c;
        case 0x306e50u: goto label_306e50;
        case 0x306e54u: goto label_306e54;
        case 0x306e58u: goto label_306e58;
        case 0x306e5cu: goto label_306e5c;
        case 0x306e60u: goto label_306e60;
        case 0x306e64u: goto label_306e64;
        case 0x306e68u: goto label_306e68;
        case 0x306e6cu: goto label_306e6c;
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        case 0x306ea0u: goto label_306ea0;
        case 0x306ea4u: goto label_306ea4;
        case 0x306ea8u: goto label_306ea8;
        case 0x306eacu: goto label_306eac;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eb4u: goto label_306eb4;
        case 0x306eb8u: goto label_306eb8;
        case 0x306ebcu: goto label_306ebc;
        case 0x306ec0u: goto label_306ec0;
        case 0x306ec4u: goto label_306ec4;
        case 0x306ec8u: goto label_306ec8;
        case 0x306eccu: goto label_306ecc;
        case 0x306ed0u: goto label_306ed0;
        case 0x306ed4u: goto label_306ed4;
        case 0x306ed8u: goto label_306ed8;
        case 0x306edcu: goto label_306edc;
        case 0x306ee0u: goto label_306ee0;
        case 0x306ee4u: goto label_306ee4;
        case 0x306ee8u: goto label_306ee8;
        case 0x306eecu: goto label_306eec;
        case 0x306ef0u: goto label_306ef0;
        case 0x306ef4u: goto label_306ef4;
        case 0x306ef8u: goto label_306ef8;
        case 0x306efcu: goto label_306efc;
        case 0x306f00u: goto label_306f00;
        case 0x306f04u: goto label_306f04;
        case 0x306f08u: goto label_306f08;
        case 0x306f0cu: goto label_306f0c;
        case 0x306f10u: goto label_306f10;
        case 0x306f14u: goto label_306f14;
        case 0x306f18u: goto label_306f18;
        case 0x306f1cu: goto label_306f1c;
        case 0x306f20u: goto label_306f20;
        case 0x306f24u: goto label_306f24;
        case 0x306f28u: goto label_306f28;
        case 0x306f2cu: goto label_306f2c;
        case 0x306f30u: goto label_306f30;
        case 0x306f34u: goto label_306f34;
        case 0x306f38u: goto label_306f38;
        case 0x306f3cu: goto label_306f3c;
        case 0x306f40u: goto label_306f40;
        case 0x306f44u: goto label_306f44;
        case 0x306f48u: goto label_306f48;
        case 0x306f4cu: goto label_306f4c;
        case 0x306f50u: goto label_306f50;
        case 0x306f54u: goto label_306f54;
        case 0x306f58u: goto label_306f58;
        case 0x306f5cu: goto label_306f5c;
        case 0x306f60u: goto label_306f60;
        case 0x306f64u: goto label_306f64;
        case 0x306f68u: goto label_306f68;
        case 0x306f6cu: goto label_306f6c;
        case 0x306f70u: goto label_306f70;
        case 0x306f74u: goto label_306f74;
        case 0x306f78u: goto label_306f78;
        case 0x306f7cu: goto label_306f7c;
        case 0x306f80u: goto label_306f80;
        case 0x306f84u: goto label_306f84;
        case 0x306f88u: goto label_306f88;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f90u: goto label_306f90;
        case 0x306f94u: goto label_306f94;
        case 0x306f98u: goto label_306f98;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa0u: goto label_306fa0;
        case 0x306fa4u: goto label_306fa4;
        case 0x306fa8u: goto label_306fa8;
        case 0x306facu: goto label_306fac;
        case 0x306fb0u: goto label_306fb0;
        case 0x306fb4u: goto label_306fb4;
        case 0x306fb8u: goto label_306fb8;
        case 0x306fbcu: goto label_306fbc;
        case 0x306fc0u: goto label_306fc0;
        case 0x306fc4u: goto label_306fc4;
        case 0x306fc8u: goto label_306fc8;
        case 0x306fccu: goto label_306fcc;
        case 0x306fd0u: goto label_306fd0;
        case 0x306fd4u: goto label_306fd4;
        case 0x306fd8u: goto label_306fd8;
        case 0x306fdcu: goto label_306fdc;
        case 0x306fe0u: goto label_306fe0;
        case 0x306fe4u: goto label_306fe4;
        case 0x306fe8u: goto label_306fe8;
        case 0x306fecu: goto label_306fec;
        case 0x306ff0u: goto label_306ff0;
        case 0x306ff4u: goto label_306ff4;
        case 0x306ff8u: goto label_306ff8;
        case 0x306ffcu: goto label_306ffc;
        case 0x307000u: goto label_307000;
        case 0x307004u: goto label_307004;
        case 0x307008u: goto label_307008;
        case 0x30700cu: goto label_30700c;
        case 0x307010u: goto label_307010;
        case 0x307014u: goto label_307014;
        case 0x307018u: goto label_307018;
        case 0x30701cu: goto label_30701c;
        case 0x307020u: goto label_307020;
        case 0x307024u: goto label_307024;
        case 0x307028u: goto label_307028;
        case 0x30702cu: goto label_30702c;
        case 0x307030u: goto label_307030;
        case 0x307034u: goto label_307034;
        case 0x307038u: goto label_307038;
        case 0x30703cu: goto label_30703c;
        case 0x307040u: goto label_307040;
        case 0x307044u: goto label_307044;
        case 0x307048u: goto label_307048;
        case 0x30704cu: goto label_30704c;
        case 0x307050u: goto label_307050;
        case 0x307054u: goto label_307054;
        case 0x307058u: goto label_307058;
        case 0x30705cu: goto label_30705c;
        case 0x307060u: goto label_307060;
        case 0x307064u: goto label_307064;
        case 0x307068u: goto label_307068;
        case 0x30706cu: goto label_30706c;
        case 0x307070u: goto label_307070;
        case 0x307074u: goto label_307074;
        case 0x307078u: goto label_307078;
        case 0x30707cu: goto label_30707c;
        case 0x307080u: goto label_307080;
        case 0x307084u: goto label_307084;
        case 0x307088u: goto label_307088;
        case 0x30708cu: goto label_30708c;
        case 0x307090u: goto label_307090;
        case 0x307094u: goto label_307094;
        case 0x307098u: goto label_307098;
        case 0x30709cu: goto label_30709c;
        default: break;
    }

    ctx->pc = 0x306dd8u;

label_306dd8:
    // 0x306dd8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x306dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_306ddc:
    // 0x306ddc: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x306ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_306de0:
    // 0x306de0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x306de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_306de4:
    // 0x306de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306de8:
    // 0x306de8: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x306de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_306dec:
    // 0x306dec: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x306decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_306df0:
    // 0x306df0: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x306df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_306df4:
    // 0x306df4: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x306df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_306df8:
    // 0x306df8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x306df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_306dfc:
    // 0x306dfc: 0x8e130030  lw          $s3, 0x30($s0)
    ctx->pc = 0x306dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_306e00:
    // 0x306e00: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x306e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_306e04:
    // 0x306e04: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x306e04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_306e08:
    // 0x306e08: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x306e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_306e0c:
    // 0x306e0c: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x306e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_306e10:
    // 0x306e10: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x306e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_306e14:
    // 0x306e14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x306e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_306e18:
    // 0x306e18: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_306e1c:
    if (ctx->pc == 0x306E1Cu) {
        ctx->pc = 0x306E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E18u;
        // 0x306e1c: 0x24510018  addiu       $s1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E20u;
        goto label_306e20;
    }
    ctx->pc = 0x306E18u;
    {
        const bool branch_taken_0x306e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E18u;
        // 0x306e1c: 0x24510018  addiu       $s1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e18) {
            ctx->pc = 0x307018u;
            goto label_307018;
        }
    }
    ctx->pc = 0x306E20u;
label_306e20:
    // 0x306e20: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x306e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_306e24:
    // 0x306e24: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x306e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_306e28:
    // 0x306e28: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x306e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_306e2c:
    // 0x306e2c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x306e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_306e30:
    // 0x306e30: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x306e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_306e34:
    // 0x306e34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x306e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_306e38:
    // 0x306e38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306e3c:
    // 0x306e3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x306e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_306e40:
    // 0x306e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_306e44:
    if (ctx->pc == 0x306E44u) {
        ctx->pc = 0x306E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E40u;
        // 0x306e44: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E48u;
        goto label_306e48;
    }
    ctx->pc = 0x306E40u;
    {
        const bool branch_taken_0x306e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E40u;
        // 0x306e44: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e40) {
            ctx->pc = 0x306E58u;
            goto label_306e58;
        }
    }
    ctx->pc = 0x306E48u;
label_306e48:
    // 0x306e48: 0x2643fffe  addiu       $v1, $s2, -0x2
    ctx->pc = 0x306e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_306e4c:
    // 0x306e4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x306e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_306e50:
    // 0x306e50: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x306e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306e54:
    // 0x306e54: 0x0  nop
    ctx->pc = 0x306e54u;
    // NOP
label_306e58:
    // 0x306e58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x306e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306e5c:
    // 0x306e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306e60:
    // 0x306e60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x306e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306e64:
    // 0x306e64: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x306e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_306e68:
    // 0x306e68: 0x27a80154  addiu       $t0, $sp, 0x154
    ctx->pc = 0x306e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_306e6c:
    // 0x306e6c: 0xc098ff0  jal         func_263FC0
label_306e70:
    if (ctx->pc == 0x306E70u) {
        ctx->pc = 0x306E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E6Cu;
        // 0x306e70: 0x27a90158  addiu       $t1, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E74u;
        goto label_306e74;
    }
    ctx->pc = 0x306E6Cu;
    SET_GPR_U32(ctx, 31, 0x306E74u);
    ctx->pc = 0x306E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E6Cu;
    // 0x306e70: 0x27a90158  addiu       $t1, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263FC0u, 0x306E6Cu, 0x306E74u)) {
        return;
    }
    ctx->pc = 0x306E74u;
label_306e74:
    // 0x306e74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x306e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e78:
    // 0x306e78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x306e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_306e7c:
    // 0x306e7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_306e80:
    if (ctx->pc == 0x306E80u) {
        ctx->pc = 0x306E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E7Cu;
        // 0x306e80: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E84u;
        goto label_306e84;
    }
    ctx->pc = 0x306E7Cu;
    {
        const bool branch_taken_0x306e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E7Cu;
        // 0x306e80: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e7c) {
            ctx->pc = 0x306E8Cu;
            goto label_306e8c;
        }
    }
    ctx->pc = 0x306E84u;
label_306e84:
    // 0x306e84: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x306e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_306e88:
    // 0x306e88: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x306e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_306e8c:
    // 0x306e8c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x306e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_306e90:
    // 0x306e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306e94:
    // 0x306e94: 0x24e73888  addiu       $a3, $a3, 0x3888
    ctx->pc = 0x306e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14472));
label_306e98:
    // 0x306e98: 0x40f809  jalr        $v0
label_306e9c:
    if (ctx->pc == 0x306E9Cu) {
        ctx->pc = 0x306E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E98u;
        // 0x306e9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EA0u;
        goto label_306ea0;
    }
    ctx->pc = 0x306E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306EA0u);
        ctx->pc = 0x306E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E98u;
        // 0x306e9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306E98u, 0x306EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306EA0u;
label_306ea0:
    // 0x306ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306ea4:
    // 0x306ea4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_306ea8:
    if (ctx->pc == 0x306EA8u) {
        ctx->pc = 0x306EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EA4u;
        // 0x306ea8: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EACu;
        goto label_306eac;
    }
    ctx->pc = 0x306EA4u;
    {
        const bool branch_taken_0x306ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EA4u;
        // 0x306ea8: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ea4) {
            ctx->pc = 0x306EB4u;
            goto label_306eb4;
        }
    }
    ctx->pc = 0x306EACu;
label_306eac:
    // 0x306eac: 0x10000073  b           . + 4 + (0x73 << 2)
label_306eb0:
    if (ctx->pc == 0x306EB0u) {
        ctx->pc = 0x306EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EACu;
        // 0x306eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EB4u;
        goto label_306eb4;
    }
    ctx->pc = 0x306EACu;
    {
        const bool branch_taken_0x306eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EACu;
        // 0x306eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306eac) {
            ctx->pc = 0x30707Cu;
            goto label_30707c;
        }
    }
    ctx->pc = 0x306EB4u;
label_306eb4:
    // 0x306eb4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x306eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_306eb8:
    // 0x306eb8: 0x24910018  addiu       $s1, $a0, 0x18
    ctx->pc = 0x306eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_306ebc:
    // 0x306ebc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x306ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_306ec0:
    // 0x306ec0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x306ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_306ec4:
    // 0x306ec4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x306ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_306ec8:
    // 0x306ec8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x306ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_306ecc:
    // 0x306ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306ed0:
    // 0x306ed0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x306ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_306ed4:
    // 0x306ed4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x306ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_306ed8:
    // 0x306ed8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x306ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_306edc:
    // 0x306edc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x306edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_306ee0:
    // 0x306ee0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x306ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_306ee4:
    // 0x306ee4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_306ee8:
    if (ctx->pc == 0x306EE8u) {
        ctx->pc = 0x306EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EE4u;
        // 0x306ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EECu;
        goto label_306eec;
    }
    ctx->pc = 0x306EE4u;
    {
        const bool branch_taken_0x306ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EE4u;
        // 0x306ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ee4) {
            ctx->pc = 0x306F44u;
            goto label_306f44;
        }
    }
    ctx->pc = 0x306EECu;
label_306eec:
    // 0x306eec: 0x248400a8  addiu       $a0, $a0, 0xA8
    ctx->pc = 0x306eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
label_306ef0:
    // 0x306ef0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x306ef0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306ef4:
    // 0x306ef4: 0x0  nop
    ctx->pc = 0x306ef4u;
    // NOP
label_306ef8:
    // 0x306ef8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x306ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_306efc:
    // 0x306efc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x306efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_306f00:
    // 0x306f00: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x306f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_306f04:
    // 0x306f04: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x306f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_306f08:
    // 0x306f08: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x306f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_306f0c:
    // 0x306f0c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x306f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_306f10:
    // 0x306f10: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x306f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_306f14:
    // 0x306f14: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x306f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_306f18:
    // 0x306f18: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x306f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_306f1c:
    // 0x306f1c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x306f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_306f20:
    // 0x306f20: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x306f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_306f24:
    // 0x306f24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x306f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_306f28:
    // 0x306f28: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x306f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_306f2c:
    // 0x306f2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x306f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_306f30:
    // 0x306f30: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x306f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_306f34:
    // 0x306f34: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x306f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_306f38:
    // 0x306f38: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x306f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_306f3c:
    // 0x306f3c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_306f40:
    if (ctx->pc == 0x306F40u) {
        ctx->pc = 0x306F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F3Cu;
        // 0x306f40: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F44u;
        goto label_306f44;
    }
    ctx->pc = 0x306F3Cu;
    {
        const bool branch_taken_0x306f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F3Cu;
        // 0x306f40: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f3c) {
            ctx->pc = 0x306EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306ef8;
        }
    }
    ctx->pc = 0x306F44u;
label_306f44:
    // 0x306f44: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x306f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_306f48:
    // 0x306f48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_306f4c:
    // 0x306f4c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x306f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_306f50:
    // 0x306f50: 0x262401ef  addiu       $a0, $s1, 0x1EF
    ctx->pc = 0x306f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 495));
label_306f54:
    // 0x306f54: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x306f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_306f58:
    // 0x306f58: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x306f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_306f5c:
    // 0x306f5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306f60:
    // 0x306f60: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x306f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_306f64:
    // 0x306f64: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x306f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_306f68:
    // 0x306f68: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x306f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_306f6c:
    // 0x306f6c: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x306f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_306f70:
    // 0x306f70: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x306f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_306f74:
    // 0x306f74: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x306f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_306f78:
    // 0x306f78: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x306f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_306f7c:
    // 0x306f7c: 0x928200b4  lbu         $v0, 0xB4($s4)
    ctx->pc = 0x306f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 180)));
label_306f80:
    // 0x306f80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_306f84:
    if (ctx->pc == 0x306F84u) {
        ctx->pc = 0x306F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F80u;
        // 0x306f84: 0x2483007f  addiu       $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F88u;
        goto label_306f88;
    }
    ctx->pc = 0x306F80u;
    {
        const bool branch_taken_0x306f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F80u;
        // 0x306f84: 0x2483007f  addiu       $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f80) {
            ctx->pc = 0x306F94u;
            goto label_306f94;
        }
    }
    ctx->pc = 0x306F88u;
label_306f88:
    // 0x306f88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_306f8c:
    // 0x306f8c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x306f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_306f90:
    // 0x306f90: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x306f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_306f94:
    // 0x306f94: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x306f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_306f98:
    // 0x306f98: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x306f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_306f9c:
    // 0x306f9c: 0x2482000a  addiu       $v0, $a0, 0xA
    ctx->pc = 0x306f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_306fa0:
    // 0x306fa0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_306fa4:
    if (ctx->pc == 0x306FA4u) {
        ctx->pc = 0x306FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FA0u;
        // 0x306fa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FA8u;
        goto label_306fa8;
    }
    ctx->pc = 0x306FA0u;
    {
        const bool branch_taken_0x306fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FA0u;
        // 0x306fa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fa0) {
            ctx->pc = 0x307010u;
            goto label_307010;
        }
    }
    ctx->pc = 0x306FA8u;
label_306fa8:
    // 0x306fa8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306fac:
    // 0x306fac: 0x2628009c  addiu       $t0, $s1, 0x9C
    ctx->pc = 0x306facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
label_306fb0:
    // 0x306fb0: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x306fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_306fb4:
    // 0x306fb4: 0x26250034  addiu       $a1, $s1, 0x34
    ctx->pc = 0x306fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_306fb8:
    // 0x306fb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x306fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_306fbc:
    // 0x306fbc: 0x30422001  andi        $v0, $v0, 0x2001
    ctx->pc = 0x306fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8193);
label_306fc0:
    // 0x306fc0: 0x5449000d  bnel        $v0, $t1, . + 4 + (0xD << 2)
label_306fc4:
    if (ctx->pc == 0x306FC4u) {
        ctx->pc = 0x306FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC0u;
        // 0x306fc4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FC8u;
        goto label_306fc8;
    }
    ctx->pc = 0x306FC0u;
    {
        const bool branch_taken_0x306fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x306fc0) {
            ctx->pc = 0x306FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306FC0u;
            // 0x306fc4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306FF8u;
            goto label_306ff8;
        }
    }
    ctx->pc = 0x306FC8u;
label_306fc8:
    // 0x306fc8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_306fcc:
    if (ctx->pc == 0x306FCCu) {
        ctx->pc = 0x306FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC8u;
        // 0x306fcc: 0x8d03fffc  lw          $v1, -0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FD0u;
        goto label_306fd0;
    }
    ctx->pc = 0x306FC8u;
    {
        const bool branch_taken_0x306fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC8u;
        // 0x306fcc: 0x8d03fffc  lw          $v1, -0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fc8) {
            ctx->pc = 0x306FD4u;
            goto label_306fd4;
        }
    }
    ctx->pc = 0x306FD0u;
label_306fd0:
    // 0x306fd0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x306fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_306fd4:
    // 0x306fd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x306fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_306fd8:
    // 0x306fd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x306fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_306fdc:
    // 0x306fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306fe0:
    // 0x306fe0: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x306fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
label_306fe4:
    // 0x306fe4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x306fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_306fe8:
    // 0x306fe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306fec:
    // 0x306fec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x306fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_306ff0:
    // 0x306ff0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_306ff4:
    // 0x306ff4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x306ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_306ff8:
    // 0x306ff8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_306ffc:
    // 0x306ffc: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_307000:
    // 0x307000: 0x2482000a  addiu       $v0, $a0, 0xA
    ctx->pc = 0x307000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_307004:
    // 0x307004: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x307004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_307008:
    // 0x307008: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_30700c:
    if (ctx->pc == 0x30700Cu) {
        ctx->pc = 0x30700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307008u;
        // 0x30700c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307010u;
        goto label_307010;
    }
    ctx->pc = 0x307008u;
    {
        const bool branch_taken_0x307008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307008u;
        // 0x30700c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307008) {
            ctx->pc = 0x306FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306fb8;
        }
    }
    ctx->pc = 0x307010u;
label_307010:
    // 0x307010: 0xc099180  jal         func_264600
label_307014:
    if (ctx->pc == 0x307014u) {
        ctx->pc = 0x307014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307010u;
        // 0x307014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307018u;
        goto label_307018;
    }
    ctx->pc = 0x307010u;
    SET_GPR_U32(ctx, 31, 0x307018u);
    ctx->pc = 0x307014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307010u;
    // 0x307014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264600u, 0x307010u, 0x307018u)) {
        return;
    }
    ctx->pc = 0x307018u;
label_307018:
    // 0x307018: 0x928600b5  lbu         $a2, 0xB5($s4)
    ctx->pc = 0x307018u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 181)));
label_30701c:
    // 0x30701c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30701cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307020:
    // 0x307020: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_307024:
    if (ctx->pc == 0x307024u) {
        ctx->pc = 0x307024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307020u;
        // 0x307024: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307028u;
        goto label_307028;
    }
    ctx->pc = 0x307020u;
    {
        const bool branch_taken_0x307020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x307024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307020u;
        // 0x307024: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307020) {
            ctx->pc = 0x30704Cu;
            goto label_30704c;
        }
    }
    ctx->pc = 0x307028u;
label_307028:
    // 0x307028: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x307028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30702c:
    // 0x30702c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x30702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_307030:
    // 0x307030: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x307030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_307034:
    // 0x307034: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x307034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_307038:
    // 0x307038: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x307038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_30703c:
    // 0x30703c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x30703cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_307040:
    // 0x307040: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x307040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_307044:
    // 0x307044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_307048:
    if (ctx->pc == 0x307048u) {
        ctx->pc = 0x307048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307044u;
        // 0x307048: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30704Cu;
        goto label_30704c;
    }
    ctx->pc = 0x307044u;
    {
        const bool branch_taken_0x307044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307044u;
        // 0x307048: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307044) {
            ctx->pc = 0x307030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307030;
        }
    }
    ctx->pc = 0x30704Cu;
label_30704c:
    // 0x30704c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x30704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_307050:
    // 0x307050: 0x40f809  jalr        $v0
label_307054:
    if (ctx->pc == 0x307054u) {
        ctx->pc = 0x307054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307050u;
        // 0x307054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307058u;
        goto label_307058;
    }
    ctx->pc = 0x307050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307058u);
        ctx->pc = 0x307054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307050u;
        // 0x307054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307050u, 0x307058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307058u;
label_307058:
    // 0x307058: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x307058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_30705c:
    // 0x30705c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30705cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307060:
    // 0x307060: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x307060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_307064:
    // 0x307064: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x307064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_307068:
    // 0x307068: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30706c:
    // 0x30706c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30706cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_307070:
    // 0x307070: 0xc0c86e4  jal         func_321B90
label_307074:
    if (ctx->pc == 0x307074u) {
        ctx->pc = 0x307074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307070u;
        // 0x307074: 0x24a500db  addiu       $a1, $a1, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 219));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307078u;
        goto label_307078;
    }
    ctx->pc = 0x307070u;
    SET_GPR_U32(ctx, 31, 0x307078u);
    ctx->pc = 0x307074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307070u;
    // 0x307074: 0x24a500db  addiu       $a1, $a1, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x307070u, 0x307078u)) {
        return;
    }
    ctx->pc = 0x307078u;
label_307078:
    // 0x307078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x307078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30707c:
    // 0x30707c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x30707cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_307080:
    // 0x307080: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x307080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_307084:
    // 0x307084: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x307084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_307088:
    // 0x307088: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x307088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_30708c:
    // 0x30708c: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x30708cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_307090:
    // 0x307090: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x307090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_307094:
    // 0x307094: 0x3e00008  jr          $ra
label_307098:
    if (ctx->pc == 0x307098u) {
        ctx->pc = 0x307098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307094u;
        // 0x307098: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30709Cu;
        goto label_30709c;
    }
    ctx->pc = 0x307094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307094u;
        // 0x307098: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30709Cu;
label_30709c:
    // 0x30709c: 0x0  nop
    ctx->pc = 0x30709cu;
    // NOP
    ctx->pc = 0x3070a0u;
}
