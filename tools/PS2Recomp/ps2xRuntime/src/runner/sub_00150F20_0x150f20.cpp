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

// Function: sub_00150F20
// Address: 0x150f20 - 0x151100
void sub_00150F20_0x150f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150F20_0x150f20");
#endif

    switch (ctx->pc) {
        case 0x150f20u: goto label_150f20;
        case 0x150f24u: goto label_150f24;
        case 0x150f28u: goto label_150f28;
        case 0x150f2cu: goto label_150f2c;
        case 0x150f30u: goto label_150f30;
        case 0x150f34u: goto label_150f34;
        case 0x150f38u: goto label_150f38;
        case 0x150f3cu: goto label_150f3c;
        case 0x150f40u: goto label_150f40;
        case 0x150f44u: goto label_150f44;
        case 0x150f48u: goto label_150f48;
        case 0x150f4cu: goto label_150f4c;
        case 0x150f50u: goto label_150f50;
        case 0x150f54u: goto label_150f54;
        case 0x150f58u: goto label_150f58;
        case 0x150f5cu: goto label_150f5c;
        case 0x150f60u: goto label_150f60;
        case 0x150f64u: goto label_150f64;
        case 0x150f68u: goto label_150f68;
        case 0x150f6cu: goto label_150f6c;
        case 0x150f70u: goto label_150f70;
        case 0x150f74u: goto label_150f74;
        case 0x150f78u: goto label_150f78;
        case 0x150f7cu: goto label_150f7c;
        case 0x150f80u: goto label_150f80;
        case 0x150f84u: goto label_150f84;
        case 0x150f88u: goto label_150f88;
        case 0x150f8cu: goto label_150f8c;
        case 0x150f90u: goto label_150f90;
        case 0x150f94u: goto label_150f94;
        case 0x150f98u: goto label_150f98;
        case 0x150f9cu: goto label_150f9c;
        case 0x150fa0u: goto label_150fa0;
        case 0x150fa4u: goto label_150fa4;
        case 0x150fa8u: goto label_150fa8;
        case 0x150facu: goto label_150fac;
        case 0x150fb0u: goto label_150fb0;
        case 0x150fb4u: goto label_150fb4;
        case 0x150fb8u: goto label_150fb8;
        case 0x150fbcu: goto label_150fbc;
        case 0x150fc0u: goto label_150fc0;
        case 0x150fc4u: goto label_150fc4;
        case 0x150fc8u: goto label_150fc8;
        case 0x150fccu: goto label_150fcc;
        case 0x150fd0u: goto label_150fd0;
        case 0x150fd4u: goto label_150fd4;
        case 0x150fd8u: goto label_150fd8;
        case 0x150fdcu: goto label_150fdc;
        case 0x150fe0u: goto label_150fe0;
        case 0x150fe4u: goto label_150fe4;
        case 0x150fe8u: goto label_150fe8;
        case 0x150fecu: goto label_150fec;
        case 0x150ff0u: goto label_150ff0;
        case 0x150ff4u: goto label_150ff4;
        case 0x150ff8u: goto label_150ff8;
        case 0x150ffcu: goto label_150ffc;
        case 0x151000u: goto label_151000;
        case 0x151004u: goto label_151004;
        case 0x151008u: goto label_151008;
        case 0x15100cu: goto label_15100c;
        case 0x151010u: goto label_151010;
        case 0x151014u: goto label_151014;
        case 0x151018u: goto label_151018;
        case 0x15101cu: goto label_15101c;
        case 0x151020u: goto label_151020;
        case 0x151024u: goto label_151024;
        case 0x151028u: goto label_151028;
        case 0x15102cu: goto label_15102c;
        case 0x151030u: goto label_151030;
        case 0x151034u: goto label_151034;
        case 0x151038u: goto label_151038;
        case 0x15103cu: goto label_15103c;
        case 0x151040u: goto label_151040;
        case 0x151044u: goto label_151044;
        case 0x151048u: goto label_151048;
        case 0x15104cu: goto label_15104c;
        case 0x151050u: goto label_151050;
        case 0x151054u: goto label_151054;
        case 0x151058u: goto label_151058;
        case 0x15105cu: goto label_15105c;
        case 0x151060u: goto label_151060;
        case 0x151064u: goto label_151064;
        case 0x151068u: goto label_151068;
        case 0x15106cu: goto label_15106c;
        case 0x151070u: goto label_151070;
        case 0x151074u: goto label_151074;
        case 0x151078u: goto label_151078;
        case 0x15107cu: goto label_15107c;
        case 0x151080u: goto label_151080;
        case 0x151084u: goto label_151084;
        case 0x151088u: goto label_151088;
        case 0x15108cu: goto label_15108c;
        case 0x151090u: goto label_151090;
        case 0x151094u: goto label_151094;
        case 0x151098u: goto label_151098;
        case 0x15109cu: goto label_15109c;
        case 0x1510a0u: goto label_1510a0;
        case 0x1510a4u: goto label_1510a4;
        case 0x1510a8u: goto label_1510a8;
        case 0x1510acu: goto label_1510ac;
        case 0x1510b0u: goto label_1510b0;
        case 0x1510b4u: goto label_1510b4;
        case 0x1510b8u: goto label_1510b8;
        case 0x1510bcu: goto label_1510bc;
        case 0x1510c0u: goto label_1510c0;
        case 0x1510c4u: goto label_1510c4;
        case 0x1510c8u: goto label_1510c8;
        case 0x1510ccu: goto label_1510cc;
        case 0x1510d0u: goto label_1510d0;
        case 0x1510d4u: goto label_1510d4;
        case 0x1510d8u: goto label_1510d8;
        case 0x1510dcu: goto label_1510dc;
        case 0x1510e0u: goto label_1510e0;
        case 0x1510e4u: goto label_1510e4;
        case 0x1510e8u: goto label_1510e8;
        case 0x1510ecu: goto label_1510ec;
        case 0x1510f0u: goto label_1510f0;
        case 0x1510f4u: goto label_1510f4;
        case 0x1510f8u: goto label_1510f8;
        case 0x1510fcu: goto label_1510fc;
        default: break;
    }

    ctx->pc = 0x150f20u;

label_150f20:
    // 0x150f20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_150f24:
    // 0x150f24: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x150f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_150f28:
    // 0x150f28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x150f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_150f2c:
    // 0x150f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150f30:
    // 0x150f30: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x150f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_150f34:
    // 0x150f34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x150f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150f38:
    // 0x150f38: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x150f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_150f3c:
    // 0x150f3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x150f3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_150f40:
    // 0x150f40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x150f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_150f44:
    // 0x150f44: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x150f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_150f48:
    // 0x150f48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x150f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_150f4c:
    // 0x150f4c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x150f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_150f50:
    // 0x150f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_150f54:
    // 0x150f54: 0x240200d8  addiu       $v0, $zero, 0xD8
    ctx->pc = 0x150f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_150f58:
    // 0x150f58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x150f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_150f5c:
    // 0x150f5c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x150f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_150f60:
    // 0x150f60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x150f60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_150f64:
    // 0x150f64: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_150f68:
    // 0x150f68: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x150f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_150f6c:
    // 0x150f6c: 0xc054440  jal         func_151100
label_150f70:
    if (ctx->pc == 0x150F70u) {
        ctx->pc = 0x150F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F6Cu;
        // 0x150f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F74u;
        goto label_150f74;
    }
    ctx->pc = 0x150F6Cu;
    SET_GPR_U32(ctx, 31, 0x150F74u);
    ctx->pc = 0x150F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F6Cu;
    // 0x150f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151100u, 0x150F6Cu, 0x150F74u)) {
        return;
    }
    ctx->pc = 0x150F74u;
label_150f74:
    // 0x150f74: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x150f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_150f78:
    // 0x150f78: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_150f7c:
    if (ctx->pc == 0x150F7Cu) {
        ctx->pc = 0x150F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F78u;
        // 0x150f7c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F80u;
        goto label_150f80;
    }
    ctx->pc = 0x150F78u;
    {
        const bool branch_taken_0x150f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f78) {
            ctx->pc = 0x150F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150F78u;
            // 0x150f7c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150FACu;
            goto label_150fac;
        }
    }
    ctx->pc = 0x150F80u;
label_150f80:
    // 0x150f80: 0xc07bcda  jal         func_1EF368
label_150f84:
    if (ctx->pc == 0x150F84u) {
        ctx->pc = 0x150F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F80u;
        // 0x150f84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F88u;
        goto label_150f88;
    }
    ctx->pc = 0x150F80u;
    SET_GPR_U32(ctx, 31, 0x150F88u);
    ctx->pc = 0x150F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F80u;
    // 0x150f84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF368u, 0x150F80u, 0x150F88u)) {
        return;
    }
    ctx->pc = 0x150F88u;
label_150f88:
    // 0x150f88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_150f8c:
    if (ctx->pc == 0x150F8Cu) {
        ctx->pc = 0x150F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F88u;
        // 0x150f8c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F90u;
        goto label_150f90;
    }
    ctx->pc = 0x150F88u;
    {
        const bool branch_taken_0x150f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150f88) {
            ctx->pc = 0x150F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150F88u;
            // 0x150f8c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150FACu;
            goto label_150fac;
        }
    }
    ctx->pc = 0x150F90u;
label_150f90:
    // 0x150f90: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x150f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_150f94:
    // 0x150f94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_150f98:
    if (ctx->pc == 0x150F98u) {
        ctx->pc = 0x150F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F94u;
        // 0x150f98: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150F9Cu;
        goto label_150f9c;
    }
    ctx->pc = 0x150F94u;
    {
        const bool branch_taken_0x150f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f94) {
            ctx->pc = 0x150F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150F94u;
            // 0x150f98: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150FA8u;
            goto label_150fa8;
        }
    }
    ctx->pc = 0x150F9Cu;
label_150f9c:
    // 0x150f9c: 0xc07bcb6  jal         func_1EF2D8
label_150fa0:
    if (ctx->pc == 0x150FA0u) {
        ctx->pc = 0x150FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F9Cu;
        // 0x150fa0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FA4u;
        goto label_150fa4;
    }
    ctx->pc = 0x150F9Cu;
    SET_GPR_U32(ctx, 31, 0x150FA4u);
    ctx->pc = 0x150FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F9Cu;
    // 0x150fa0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF2D8u, 0x150F9Cu, 0x150FA4u)) {
        return;
    }
    ctx->pc = 0x150FA4u;
label_150fa4:
    // 0x150fa4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x150fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_150fa8:
    // 0x150fa8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_150fac:
    // 0x150fac: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_150fb0:
    if (ctx->pc == 0x150FB0u) {
        ctx->pc = 0x150FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FACu;
        // 0x150fb0: 0x26360001  addiu       $s6, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FB4u;
        goto label_150fb4;
    }
    ctx->pc = 0x150FACu;
    {
        const bool branch_taken_0x150fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FACu;
        // 0x150fb0: 0x26360001  addiu       $s6, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fac) {
            ctx->pc = 0x1510C4u;
            goto label_1510c4;
        }
    }
    ctx->pc = 0x150FB4u;
label_150fb4:
    // 0x150fb4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x150fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150fb8:
    // 0x150fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150fbc:
    // 0x150fbc: 0x0  nop
    ctx->pc = 0x150fbcu;
    // NOP
label_150fc0:
    // 0x150fc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x150fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_150fc4:
    // 0x150fc4: 0x0  nop
    ctx->pc = 0x150fc4u;
    // NOP
label_150fc8:
    // 0x150fc8: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_150fcc:
    if (ctx->pc == 0x150FCCu) {
        ctx->pc = 0x150FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FC8u;
        // 0x150fcc: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FD0u;
        goto label_150fd0;
    }
    ctx->pc = 0x150FC8u;
    {
        const bool branch_taken_0x150fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FC8u;
        // 0x150fcc: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fc8) {
            ctx->pc = 0x1510C8u;
            goto label_1510c8;
        }
    }
    ctx->pc = 0x150FD0u;
label_150fd0:
    // 0x150fd0: 0x8e722894  lw          $s2, 0x2894($s3)
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10388)));
label_150fd4:
    // 0x150fd4: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_150fd8:
    if (ctx->pc == 0x150FD8u) {
        ctx->pc = 0x150FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FD4u;
        // 0x150fd8: 0x2a220030  slti        $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FDCu;
        goto label_150fdc;
    }
    ctx->pc = 0x150FD4u;
    {
        const bool branch_taken_0x150fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FD4u;
        // 0x150fd8: 0x2a220030  slti        $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fd4) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x150FDCu;
label_150fdc:
    // 0x150fdc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x150fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150fe0:
    // 0x150fe0: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x150fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_150fe4:
    // 0x150fe4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x150fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_150fe8:
    // 0x150fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150fec:
    // 0x150fec: 0xc054192  jal         func_150648
label_150ff0:
    if (ctx->pc == 0x150FF0u) {
        ctx->pc = 0x150FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FECu;
        // 0x150ff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FF4u;
        goto label_150ff4;
    }
    ctx->pc = 0x150FECu;
    SET_GPR_U32(ctx, 31, 0x150FF4u);
    ctx->pc = 0x150FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FECu;
    // 0x150ff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150648u, 0x150FECu, 0x150FF4u)) {
        return;
    }
    ctx->pc = 0x150FF4u;
label_150ff4:
    // 0x150ff4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_150ff8:
    if (ctx->pc == 0x150FF8u) {
        ctx->pc = 0x150FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF4u;
        // 0x150ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150FFCu;
        goto label_150ffc;
    }
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF4u;
        // 0x150ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151074u;
            goto label_151074;
        }
    }
    ctx->pc = 0x150FFCu;
label_150ffc:
    // 0x150ffc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x150ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_151000:
    // 0x151000: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_151004:
    if (ctx->pc == 0x151004u) {
        ctx->pc = 0x151004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151000u;
        // 0x151004: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151008u;
        goto label_151008;
    }
    ctx->pc = 0x151000u;
    {
        const bool branch_taken_0x151000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151000) {
            ctx->pc = 0x151004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151000u;
            // 0x151004: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151048u;
            goto label_151048;
        }
    }
    ctx->pc = 0x151008u;
label_151008:
    // 0x151008: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x151008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15100c:
    // 0x15100c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x15100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_151010:
    // 0x151010: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x151010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_151014:
    // 0x151014: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
label_151018:
    if (ctx->pc == 0x151018u) {
        ctx->pc = 0x151018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151014u;
        // 0x151018: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15101Cu;
        goto label_15101c;
    }
    ctx->pc = 0x151014u;
    {
        const bool branch_taken_0x151014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x151018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151014u;
        // 0x151018: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151014) {
            ctx->pc = 0x151028u;
            goto label_151028;
        }
    }
    ctx->pc = 0x15101Cu;
label_15101c:
    // 0x15101c: 0xc6602888  lwc1        $f0, 0x2888($s3)
    ctx->pc = 0x15101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151020:
    // 0x151020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_151024:
    // 0x151024: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x151024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_151028:
    // 0x151028: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15102c:
    // 0x15102c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151030:
    // 0x151030: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x151030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_151034:
    // 0x151034: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_151038:
    // 0x151038: 0x60f809  jalr        $v1
label_15103c:
    if (ctx->pc == 0x15103Cu) {
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151038u;
        // 0x15103c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151040u;
        goto label_151040;
    }
    ctx->pc = 0x151038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x151040u);
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151038u;
        // 0x15103c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151038u, 0x151040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151040u;
label_151040:
    // 0x151040: 0x1000001e  b           . + 4 + (0x1E << 2)
label_151044:
    if (ctx->pc == 0x151044u) {
        ctx->pc = 0x151044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151040u;
        // 0x151044: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151048u;
        goto label_151048;
    }
    ctx->pc = 0x151040u;
    {
        const bool branch_taken_0x151040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151040u;
        // 0x151044: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151040) {
            ctx->pc = 0x1510BCu;
            goto label_1510bc;
        }
    }
    ctx->pc = 0x151048u;
label_151048:
    // 0x151048: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x151048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_15104c:
    // 0x15104c: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
label_151050:
    if (ctx->pc == 0x151050u) {
        ctx->pc = 0x151050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15104Cu;
        // 0x151050: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151054u;
        goto label_151054;
    }
    ctx->pc = 0x15104Cu;
    {
        const bool branch_taken_0x15104c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x151050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15104Cu;
        // 0x151050: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15104c) {
            ctx->pc = 0x151060u;
            goto label_151060;
        }
    }
    ctx->pc = 0x151054u;
label_151054:
    // 0x151054: 0xc6602888  lwc1        $f0, 0x2888($s3)
    ctx->pc = 0x151054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151058:
    // 0x151058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_15105c:
    // 0x15105c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x15105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_151060:
    // 0x151060: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x151060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_151064:
    // 0x151064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151068:
    // 0x151068: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x151068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_15106c:
    // 0x15106c: 0x10000008  b           . + 4 + (0x8 << 2)
label_151070:
    if (ctx->pc == 0x151070u) {
        ctx->pc = 0x151070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15106Cu;
        // 0x151070: 0x8c4300cc  lw          $v1, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151074u;
        goto label_151074;
    }
    ctx->pc = 0x15106Cu;
    {
        const bool branch_taken_0x15106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15106Cu;
        // 0x151070: 0x8c4300cc  lw          $v1, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15106c) {
            ctx->pc = 0x151090u;
            goto label_151090;
        }
    }
    ctx->pc = 0x151074u;
label_151074:
    // 0x151074: 0xc054160  jal         func_150580
label_151078:
    if (ctx->pc == 0x151078u) {
        ctx->pc = 0x151078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151074u;
        // 0x151078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15107Cu;
        goto label_15107c;
    }
    ctx->pc = 0x151074u;
    SET_GPR_U32(ctx, 31, 0x15107Cu);
    ctx->pc = 0x151078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151074u;
    // 0x151078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150580u, 0x151074u, 0x15107Cu)) {
        return;
    }
    ctx->pc = 0x15107Cu;
label_15107c:
    // 0x15107c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_151080:
    if (ctx->pc == 0x151080u) {
        ctx->pc = 0x151080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15107Cu;
        // 0x151080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151084u;
        goto label_151084;
    }
    ctx->pc = 0x15107Cu;
    {
        const bool branch_taken_0x15107c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15107Cu;
        // 0x151080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15107c) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x151084u;
label_151084:
    // 0x151084: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x151084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_151088:
    // 0x151088: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x151088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_15108c:
    // 0x15108c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x15108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_151090:
    // 0x151090: 0x60f809  jalr        $v1
label_151094:
    if (ctx->pc == 0x151094u) {
        ctx->pc = 0x151094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151090u;
        // 0x151094: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151098u;
        goto label_151098;
    }
    ctx->pc = 0x151090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x151098u);
        ctx->pc = 0x151094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151090u;
        // 0x151094: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151090u, 0x151098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151098u;
label_151098:
    // 0x151098: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x151098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_15109c:
    // 0x15109c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x15109cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1510a0:
    // 0x1510a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1510a4:
    if (ctx->pc == 0x1510A4u) {
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1510A8u;
        goto label_1510a8;
    }
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510A8u;
label_1510a8:
    // 0x1510a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1510ac:
    // 0x1510ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1510acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1510b0:
    // 0x1510b0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1510b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1510b4:
    // 0x1510b4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1510b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1510b8:
    // 0x1510b8: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x1510b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1510bc:
    // 0x1510bc: 0x5640ffca  bnel        $s2, $zero, . + 4 + (-0x36 << 2)
label_1510c0:
    if (ctx->pc == 0x1510C0u) {
        ctx->pc = 0x1510C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510BCu;
        // 0x1510c0: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1510C4u;
        goto label_1510c4;
    }
    ctx->pc = 0x1510BCu;
    {
        const bool branch_taken_0x1510bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1510bc) {
            ctx->pc = 0x1510C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1510BCu;
            // 0x1510c0: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150fe8;
        }
    }
    ctx->pc = 0x1510C4u;
label_1510c4:
    // 0x1510c4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1510c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1510c8:
    // 0x1510c8: 0x2a220030  slti        $v0, $s1, 0x30
    ctx->pc = 0x1510c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
label_1510cc:
    // 0x1510cc: 0x5440ffa2  bnel        $v0, $zero, . + 4 + (-0x5E << 2)
label_1510d0:
    if (ctx->pc == 0x1510D0u) {
        ctx->pc = 0x1510D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510CCu;
        // 0x1510d0: 0x240200d8  addiu       $v0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1510D4u;
        goto label_1510d4;
    }
    ctx->pc = 0x1510CCu;
    {
        const bool branch_taken_0x1510cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1510cc) {
            ctx->pc = 0x1510D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1510CCu;
            // 0x1510d0: 0x240200d8  addiu       $v0, $zero, 0xD8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150f58;
        }
    }
    ctx->pc = 0x1510D4u;
label_1510d4:
    // 0x1510d4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1510d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1510d8:
    // 0x1510d8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1510d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1510dc:
    // 0x1510dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1510dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1510e0:
    // 0x1510e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1510e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1510e4:
    // 0x1510e4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1510e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1510e8:
    // 0x1510e8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1510e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1510ec:
    // 0x1510ec: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1510ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1510f0:
    // 0x1510f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1510f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1510f4:
    // 0x1510f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1510f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1510f8:
    // 0x1510f8: 0x3e00008  jr          $ra
label_1510fc:
    if (ctx->pc == 0x1510FCu) {
        ctx->pc = 0x1510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510F8u;
        // 0x1510fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151100u;
        goto label_fallthrough_0x1510f8;
    }
    ctx->pc = 0x1510F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510F8u;
        // 0x1510fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1510F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1510f8:
    ctx->pc = 0x151100u;
}
