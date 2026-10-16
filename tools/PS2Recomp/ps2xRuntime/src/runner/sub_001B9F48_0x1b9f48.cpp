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

// Function: sub_001B9F48
// Address: 0x1b9f48 - 0x1ba040
void sub_001B9F48_0x1b9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F48_0x1b9f48");
#endif

    switch (ctx->pc) {
        case 0x1b9f48u: goto label_1b9f48;
        case 0x1b9f4cu: goto label_1b9f4c;
        case 0x1b9f50u: goto label_1b9f50;
        case 0x1b9f54u: goto label_1b9f54;
        case 0x1b9f58u: goto label_1b9f58;
        case 0x1b9f5cu: goto label_1b9f5c;
        case 0x1b9f60u: goto label_1b9f60;
        case 0x1b9f64u: goto label_1b9f64;
        case 0x1b9f68u: goto label_1b9f68;
        case 0x1b9f6cu: goto label_1b9f6c;
        case 0x1b9f70u: goto label_1b9f70;
        case 0x1b9f74u: goto label_1b9f74;
        case 0x1b9f78u: goto label_1b9f78;
        case 0x1b9f7cu: goto label_1b9f7c;
        case 0x1b9f80u: goto label_1b9f80;
        case 0x1b9f84u: goto label_1b9f84;
        case 0x1b9f88u: goto label_1b9f88;
        case 0x1b9f8cu: goto label_1b9f8c;
        case 0x1b9f90u: goto label_1b9f90;
        case 0x1b9f94u: goto label_1b9f94;
        case 0x1b9f98u: goto label_1b9f98;
        case 0x1b9f9cu: goto label_1b9f9c;
        case 0x1b9fa0u: goto label_1b9fa0;
        case 0x1b9fa4u: goto label_1b9fa4;
        case 0x1b9fa8u: goto label_1b9fa8;
        case 0x1b9facu: goto label_1b9fac;
        case 0x1b9fb0u: goto label_1b9fb0;
        case 0x1b9fb4u: goto label_1b9fb4;
        case 0x1b9fb8u: goto label_1b9fb8;
        case 0x1b9fbcu: goto label_1b9fbc;
        case 0x1b9fc0u: goto label_1b9fc0;
        case 0x1b9fc4u: goto label_1b9fc4;
        case 0x1b9fc8u: goto label_1b9fc8;
        case 0x1b9fccu: goto label_1b9fcc;
        case 0x1b9fd0u: goto label_1b9fd0;
        case 0x1b9fd4u: goto label_1b9fd4;
        case 0x1b9fd8u: goto label_1b9fd8;
        case 0x1b9fdcu: goto label_1b9fdc;
        case 0x1b9fe0u: goto label_1b9fe0;
        case 0x1b9fe4u: goto label_1b9fe4;
        case 0x1b9fe8u: goto label_1b9fe8;
        case 0x1b9fecu: goto label_1b9fec;
        case 0x1b9ff0u: goto label_1b9ff0;
        case 0x1b9ff4u: goto label_1b9ff4;
        case 0x1b9ff8u: goto label_1b9ff8;
        case 0x1b9ffcu: goto label_1b9ffc;
        case 0x1ba000u: goto label_1ba000;
        case 0x1ba004u: goto label_1ba004;
        case 0x1ba008u: goto label_1ba008;
        case 0x1ba00cu: goto label_1ba00c;
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba014u: goto label_1ba014;
        case 0x1ba018u: goto label_1ba018;
        case 0x1ba01cu: goto label_1ba01c;
        case 0x1ba020u: goto label_1ba020;
        case 0x1ba024u: goto label_1ba024;
        case 0x1ba028u: goto label_1ba028;
        case 0x1ba02cu: goto label_1ba02c;
        case 0x1ba030u: goto label_1ba030;
        case 0x1ba034u: goto label_1ba034;
        case 0x1ba038u: goto label_1ba038;
        case 0x1ba03cu: goto label_1ba03c;
        default: break;
    }

    ctx->pc = 0x1b9f48u;

label_1b9f48:
    // 0x1b9f48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b9f4c:
    // 0x1b9f4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b9f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b9f50:
    // 0x1b9f50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9f54:
    // 0x1b9f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f58:
    // 0x1b9f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9f5c:
    // 0x1b9f5c: 0xc06bbf8  jal         func_1AEFE0
label_1b9f60:
    if (ctx->pc == 0x1B9F60u) {
        ctx->pc = 0x1B9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F5Cu;
        // 0x1b9f60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F64u;
        goto label_1b9f64;
    }
    ctx->pc = 0x1B9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F64u);
    ctx->pc = 0x1B9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F5Cu;
    // 0x1b9f60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1B9F5Cu, 0x1B9F64u)) {
        return;
    }
    ctx->pc = 0x1B9F64u;
label_1b9f64:
    // 0x1b9f64: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1b9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1b9f68:
    // 0x1b9f68: 0xc06d36a  jal         func_1B4DA8
label_1b9f6c:
    if (ctx->pc == 0x1B9F6Cu) {
        ctx->pc = 0x1B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F68u;
        // 0x1b9f6c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F70u;
        goto label_1b9f70;
    }
    ctx->pc = 0x1B9F68u;
    SET_GPR_U32(ctx, 31, 0x1B9F70u);
    ctx->pc = 0x1B9F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F68u;
    // 0x1b9f6c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4DA8u, 0x1B9F68u, 0x1B9F70u)) {
        return;
    }
    ctx->pc = 0x1B9F70u;
label_1b9f70:
    // 0x1b9f70: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x1b9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1b9f74:
    // 0x1b9f74: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_1b9f78:
    if (ctx->pc == 0x1B9F78u) {
        ctx->pc = 0x1B9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F74u;
        // 0x1b9f78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F7Cu;
        goto label_1b9f7c;
    }
    ctx->pc = 0x1B9F74u;
    {
        const bool branch_taken_0x1b9f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9f74) {
            ctx->pc = 0x1B9F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9F74u;
            // 0x1b9f78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA02Cu;
            goto label_1ba02c;
        }
    }
    ctx->pc = 0x1B9F7Cu;
label_1b9f7c:
    // 0x1b9f7c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b9f80:
    // 0x1b9f80: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1b9f84:
    if (ctx->pc == 0x1B9F84u) {
        ctx->pc = 0x1B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F80u;
        // 0x1b9f84: 0x2604027c  addiu       $a0, $s0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F88u;
        goto label_1b9f88;
    }
    ctx->pc = 0x1B9F80u;
    {
        const bool branch_taken_0x1b9f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F80u;
        // 0x1b9f84: 0x2604027c  addiu       $a0, $s0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f80) {
            ctx->pc = 0x1B9FE0u;
            goto label_1b9fe0;
        }
    }
    ctx->pc = 0x1B9F88u;
label_1b9f88:
    // 0x1b9f88: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1b9f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9f8c:
    // 0x1b9f8c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b9f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1b9f90:
    // 0x1b9f90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b9f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b9f94:
    // 0x1b9f94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b9f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b9f98:
    // 0x1b9f98: 0x26050284  addiu       $a1, $s0, 0x284
    ctx->pc = 0x1b9f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_1b9f9c:
    // 0x1b9f9c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1b9f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b9fa0:
    // 0x1b9fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b9fa4:
    // 0x1b9fa4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1b9fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1b9fa8:
    // 0x1b9fa8: 0xc06d01e  jal         func_1B4078
label_1b9fac:
    if (ctx->pc == 0x1B9FACu) {
        ctx->pc = 0x1B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FA8u;
        // 0x1b9fac: 0xc60e0280  lwc1        $f14, 0x280($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FB0u;
        goto label_1b9fb0;
    }
    ctx->pc = 0x1B9FA8u;
    SET_GPR_U32(ctx, 31, 0x1B9FB0u);
    ctx->pc = 0x1B9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FA8u;
    // 0x1b9fac: 0xc60e0280  lwc1        $f14, 0x280($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1B9FA8u, 0x1B9FB0u)) {
        return;
    }
    ctx->pc = 0x1B9FB0u;
label_1b9fb0:
    // 0x1b9fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b9fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b9fb4:
    // 0x1b9fb4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1b9fb8:
    if (ctx->pc == 0x1B9FB8u) {
        ctx->pc = 0x1B9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FB4u;
        // 0x1b9fb8: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FBCu;
        goto label_1b9fbc;
    }
    ctx->pc = 0x1B9FB4u;
    {
        const bool branch_taken_0x1b9fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FB4u;
        // 0x1b9fb8: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fb4) {
            ctx->pc = 0x1BA028u;
            goto label_1ba028;
        }
    }
    ctx->pc = 0x1B9FBCu;
label_1b9fbc:
    // 0x1b9fbc: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b9fc0:
    // 0x1b9fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9fc4:
    // 0x1b9fc4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b9fc8:
    // 0x1b9fc8: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b9fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b9fcc:
    // 0x1b9fcc: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b9fd0:
    // 0x1b9fd0: 0x60f809  jalr        $v1
label_1b9fd4:
    if (ctx->pc == 0x1B9FD4u) {
        ctx->pc = 0x1B9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FD0u;
        // 0x1b9fd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FD8u;
        goto label_1b9fd8;
    }
    ctx->pc = 0x1B9FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9FD8u);
        ctx->pc = 0x1B9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FD0u;
        // 0x1b9fd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9FD0u, 0x1B9FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9FD8u;
label_1b9fd8:
    // 0x1b9fd8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b9fdc:
    if (ctx->pc == 0x1B9FDCu) {
        ctx->pc = 0x1B9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FD8u;
        // 0x1b9fdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FE0u;
        goto label_1b9fe0;
    }
    ctx->pc = 0x1B9FD8u;
    {
        const bool branch_taken_0x1b9fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FD8u;
        // 0x1b9fdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fd8) {
            ctx->pc = 0x1BA02Cu;
            goto label_1ba02c;
        }
    }
    ctx->pc = 0x1B9FE0u;
label_1b9fe0:
    // 0x1b9fe0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1b9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9fe4:
    // 0x1b9fe4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1b9fe8:
    // 0x1b9fe8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b9fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b9fec:
    // 0x1b9fec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b9fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b9ff0:
    // 0x1b9ff0: 0x26050284  addiu       $a1, $s0, 0x284
    ctx->pc = 0x1b9ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_1b9ff4:
    // 0x1b9ff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b9ff8:
    // 0x1b9ff8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1b9ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b9ffc:
    // 0x1b9ffc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1b9ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1ba000:
    // 0x1ba000: 0xc06d01e  jal         func_1B4078
label_1ba004:
    if (ctx->pc == 0x1BA004u) {
        ctx->pc = 0x1BA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA000u;
        // 0x1ba004: 0xc60e0280  lwc1        $f14, 0x280($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA008u;
        goto label_1ba008;
    }
    ctx->pc = 0x1BA000u;
    SET_GPR_U32(ctx, 31, 0x1BA008u);
    ctx->pc = 0x1BA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA000u;
    // 0x1ba004: 0xc60e0280  lwc1        $f14, 0x280($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BA000u, 0x1BA008u)) {
        return;
    }
    ctx->pc = 0x1BA008u;
label_1ba008:
    // 0x1ba008: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ba008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ba00c:
    // 0x1ba00c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ba010:
    if (ctx->pc == 0x1BA010u) {
        ctx->pc = 0x1BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA00Cu;
        // 0x1ba010: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA014u;
        goto label_1ba014;
    }
    ctx->pc = 0x1BA00Cu;
    {
        const bool branch_taken_0x1ba00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA00Cu;
        // 0x1ba010: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba00c) {
            ctx->pc = 0x1BA028u;
            goto label_1ba028;
        }
    }
    ctx->pc = 0x1BA014u;
label_1ba014:
    // 0x1ba014: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba018:
    // 0x1ba018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba01c:
    // 0x1ba01c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1ba01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1ba020:
    // 0x1ba020: 0xc06bede  jal         func_1AFB78
label_1ba024:
    if (ctx->pc == 0x1BA024u) {
        ctx->pc = 0x1BA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA020u;
        // 0x1ba024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA028u;
        goto label_1ba028;
    }
    ctx->pc = 0x1BA020u;
    SET_GPR_U32(ctx, 31, 0x1BA028u);
    ctx->pc = 0x1BA024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA020u;
    // 0x1ba024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1BA020u, 0x1BA028u)) {
        return;
    }
    ctx->pc = 0x1BA028u;
label_1ba028:
    // 0x1ba028: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ba028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba02c:
    // 0x1ba02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba030:
    // 0x1ba030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba034:
    // 0x1ba034: 0x3e00008  jr          $ra
label_1ba038:
    if (ctx->pc == 0x1BA038u) {
        ctx->pc = 0x1BA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA034u;
        // 0x1ba038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA03Cu;
        goto label_1ba03c;
    }
    ctx->pc = 0x1BA034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA034u;
        // 0x1ba038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA03Cu;
label_1ba03c:
    // 0x1ba03c: 0x0  nop
    ctx->pc = 0x1ba03cu;
    // NOP
    ctx->pc = 0x1ba040u;
}
