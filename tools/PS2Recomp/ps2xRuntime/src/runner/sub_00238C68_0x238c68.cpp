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

// Function: sub_00238C68
// Address: 0x238c68 - 0x2392d0
void sub_00238C68_0x238c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C68_0x238c68");
#endif

    switch (ctx->pc) {
        case 0x238cf0u: goto label_238cf0;
        case 0x238d14u: goto label_238d14;
        case 0x238d40u: goto label_238d40;
        case 0x238d48u: goto label_238d48;
        case 0x23906cu: goto label_23906c;
        case 0x239090u: goto label_239090;
        case 0x239258u: goto label_239258;
        default: break;
    }

    ctx->pc = 0x238c68u;

    // 0x238c68: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x238c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x238c6c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x238c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x238c70: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x238c74: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x238c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x238c78: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x238c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x238c7c: 0xc60c3c90  lwc1        $f12, 0x3C90($s0)
    ctx->pc = 0x238c7cu;
    { uint32_t bits = FAST_READ32(0x703C90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238c80: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x238c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x238c84: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x238c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x238c88: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x238c88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x238c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x238c90: 0x26103c90  addiu       $s0, $s0, 0x3C90
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15504));
    // 0x238c94: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x238c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x238c98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x238c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c9c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x238c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x238ca0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x238ca0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ca4: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x238ca4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x238ca8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x238ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cac: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x238cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x238cb0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x238cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x238cb4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x238cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x238cb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x238cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x238cbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x238cc0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x238cc4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x238cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x238cc8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x238cc8u;
    { uint32_t bits = FAST_READ32(0x703CA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238cd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x238cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x238cd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238cd8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x238cd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x238cdc: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x238ce0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x238ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x238ce4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x238ce4u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x238ce8: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x238CE8u;
    SET_GPR_U32(ctx, 31, 0x238CF0u);
    ctx->pc = 0x238CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CE8u;
    // 0x238cec: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x238CE8u, 0x238CF0u)) {
        return;
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x238cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x238cf4: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x238cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238cf8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x238cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x238cfc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x238cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238d00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238d04: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x238d04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x238d08: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x238d08u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x238d0c: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x238D0Cu;
    SET_GPR_U32(ctx, 31, 0x238D14u);
    ctx->pc = 0x238D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D0Cu;
    // 0x238d10: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x238D0Cu, 0x238D14u)) {
        return;
    }
    ctx->pc = 0x238D14u;
label_238d14:
    // 0x238d14: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x238d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x238d18: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x238d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d20: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x238d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238d24: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x238d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x238d28: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x238d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238d2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x238d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238d30: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x238d30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x238d34: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x238d34u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
    // 0x238d38: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x238D38u;
    SET_GPR_U32(ctx, 31, 0x238D40u);
    ctx->pc = 0x238D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D38u;
    // 0x238d3c: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x238D38u, 0x238D40u)) {
        return;
    }
    ctx->pc = 0x238D40u;
label_238d40:
    // 0x238d40: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x238d40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d44: 0x0  nop
    ctx->pc = 0x238d44u;
    // NOP
label_238d48:
    // 0x238d48: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x238D48u;
    {
        const bool branch_taken_0x238d48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x238D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D48u;
        // 0x238d4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d48) {
            ctx->pc = 0x238D5Cu;
            goto label_238d5c;
        }
    }
    ctx->pc = 0x238D50u;
    // 0x238d50: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x238d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x238d54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x238D54u;
    {
        const bool branch_taken_0x238d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D54u;
        // 0x238d58: 0x245236c0  addiu       $s2, $v0, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d54) {
            ctx->pc = 0x238D8Cu;
            goto label_238d8c;
        }
    }
    ctx->pc = 0x238D5Cu;
label_238d5c:
    // 0x238d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d60: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238D60u;
    {
        const bool branch_taken_0x238d60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x238D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D60u;
        // 0x238d64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d60) {
            ctx->pc = 0x238D74u;
            goto label_238d74;
        }
    }
    ctx->pc = 0x238D68u;
    // 0x238d68: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x238d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x238D6Cu;
    {
        const bool branch_taken_0x238d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D6Cu;
        // 0x238d70: 0x24723800  addiu       $s2, $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d6c) {
            ctx->pc = 0x238D8Cu;
            goto label_238d8c;
        }
    }
    ctx->pc = 0x238D74u;
label_238d74:
    // 0x238d74: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238D74u;
    {
        const bool branch_taken_0x238d74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x238D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D74u;
        // 0x238d78: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d74) {
            ctx->pc = 0x238D88u;
            goto label_238d88;
        }
    }
    ctx->pc = 0x238D7Cu;
    // 0x238d7c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x238d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x238d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238D80u;
    {
        const bool branch_taken_0x238d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0x24d23940  addiu       $s2, $a2, 0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 14656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d80) {
            ctx->pc = 0x238D8Cu;
            goto label_238d8c;
        }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x24523a80  addiu       $s2, $v0, 0x3A80
    ctx->pc = 0x238d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
label_238d8c:
    // 0x238d8c: 0x26e33c90  addiu       $v1, $s7, 0x3C90
    ctx->pc = 0x238d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 15504));
    // 0x238d90: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x238d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x238d94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x238d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x238d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238D98u;
    {
        const bool branch_taken_0x238d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D98u;
        // 0x238d9c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d98) {
            ctx->pc = 0x238DA8u;
            goto label_238da8;
        }
    }
    ctx->pc = 0x238DA0u;
    // 0x238da0: 0x14a843  sra         $s5, $s4, 1
    ctx->pc = 0x238da0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 20), 1));
    // 0x238da4: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x238da4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_238da8:
    // 0x238da8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238dac: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x238dacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x238db0: 0x35080013  ori         $t0, $t0, 0x13
    ctx->pc = 0x238db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)19);
    // 0x238db4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238db8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238dbc: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238dbcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238dc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238dc4: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238dc8: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x238dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x238dcc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x238dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238dd0: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x238dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x238dd4: 0x35088012  ori         $t0, $t0, 0x8012
    ctx->pc = 0x238dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32786);
    // 0x238dd8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x238dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238ddc: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238ddcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238de0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x238DE0u;
    {
        const bool branch_taken_0x238de0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DE0u;
        // 0x238de4: 0x7e480010  sq          $t0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238de0) {
            ctx->pc = 0x238E00u;
            goto label_238e00;
        }
    }
    ctx->pc = 0x238DE8u;
    // 0x238de8: 0xde620360  ld          $v0, 0x360($s3)
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 864)));
    // 0x238dec: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x238decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x238df0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x238df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x238df4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238DF8u;
    {
        const bool branch_taken_0x238df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DF8u;
        // 0x238dfc: 0x8e640360  lw          $a0, 0x360($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238df8) {
            ctx->pc = 0x238E14u;
            goto label_238e14;
        }
    }
    ctx->pc = 0x238E00u;
label_238e00:
    // 0x238e00: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x238e00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x238e04: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x238e08: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x238e0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238e0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238e10: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x238e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_238e14:
    // 0x238e14: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x238e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x238e18: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x238e1c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x238e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x238e20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x238e24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x238e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x238e28: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x238e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x238e2c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x238e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x238e30: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x238e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e34: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x238e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x238e38: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238e3c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238e3cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238e40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238e44: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238e44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238e48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e50: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x238e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x238e54: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238e58: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238e58u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238e5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238e60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e64: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238e64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238e68: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x238e6c: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x238e6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x238e70: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x238e70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x238e74: 0x3508fffe  ori         $t0, $t0, 0xFFFE
    ctx->pc = 0x238e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65534);
    // 0x238e78: 0x843f8  dsll        $t0, $t0, 15
    ctx->pc = 0x238e78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 15);
    // 0x238e7c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238e80: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238e80u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238e84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238e88: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238e88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e90: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x238e90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x238e94: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x238e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x238e98: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238e9c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238e9cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238ea0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238ea4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x238ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238ea8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x238ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x238eac: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238eacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238eb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238eb4: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x238eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x238eb8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x238eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238ebc: 0xde6301e0  ld          $v1, 0x1E0($s3)
    ctx->pc = 0x238ebcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x238ec0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x238ec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ecc: 0x3163a  dsrl        $v0, $v1, 24
    ctx->pc = 0x238eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 24);
    // 0x238ed0: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x238ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x238ed4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x238ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x238ed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x238ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x238edc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x238edcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x238ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238ee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238ee8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x238ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x238eec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x238eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x238ef0: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x238ef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x238ef4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x238ef8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238ef8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238efc: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x238efcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x238f00: 0x8ec30020  lw          $v1, 0x20($s6)
    ctx->pc = 0x238f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x238f04: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x238F04u;
    {
        const bool branch_taken_0x238f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x238F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F04u;
        // 0x238f08: 0x24090045  addiu       $t1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f04) {
            ctx->pc = 0x238F18u;
            goto label_238f18;
        }
    }
    ctx->pc = 0x238F0Cu;
    // 0x238f0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x238f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238f10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238F10u;
    {
        const bool branch_taken_0x238f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x238F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F10u;
        // 0x238f14: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f10) {
            ctx->pc = 0x238F20u;
            goto label_238f20;
        }
    }
    ctx->pc = 0x238F18u;
label_238f18:
    // 0x238f18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238f1c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_238f20:
    // 0x238f20: 0x71264389  pcpyld      $t0, $t1, $a2
    ctx->pc = 0x238f20u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x238f24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238f28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238f2c: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238f30: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x238f34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238f38: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x238f38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238f3c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x238f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x238f40: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x238f44: 0x8ee33c90  lw          $v1, 0x3C90($s7)
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15504)));
    // 0x238f48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238f4c: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x238f4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x238f50: 0x32850001  andi        $a1, $s4, 0x1
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x238f54: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x238f54u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
    // 0x238f58: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x238f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x238f5c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x238f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x238f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x238f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x238f64: 0x464025  or          $t0, $v0, $a2
    ctx->pc = 0x238f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x238f68: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238f68u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238f6c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x238F6Cu;
    {
        const bool branch_taken_0x238f6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F6Cu;
        // 0x238f70: 0x7c880000  sq          $t0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f6c) {
            ctx->pc = 0x238F88u;
            goto label_238f88;
        }
    }
    ctx->pc = 0x238F74u;
    // 0x238f74: 0x8ee33c90  lw          $v1, 0x3C90($s7)
    ctx->pc = 0x238f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15504)));
    // 0x238f78: 0x3405aa80  ori         $a1, $zero, 0xAA80
    ctx->pc = 0x238f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x238f7c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x238f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x238f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238F80u;
    {
        const bool branch_taken_0x238f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F80u;
        // 0x238f84: 0xde6401d0  ld          $a0, 0x1D0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f80) {
            ctx->pc = 0x238F98u;
            goto label_238f98;
        }
    }
    ctx->pc = 0x238F88u;
label_238f88:
    // 0x238f88: 0x8ee33c90  lw          $v1, 0x3C90($s7)
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15504)));
    // 0x238f8c: 0x3405aa80  ori         $a1, $zero, 0xAA80
    ctx->pc = 0x238f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x238f90: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x238f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x238f94: 0xde640060  ld          $a0, 0x60($s3)
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_238f98:
    // 0x238f98: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x238f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x238f9c: 0x4163a  dsrl        $v0, $a0, 24
    ctx->pc = 0x238f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 24);
    // 0x238fa0: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x238fa4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x238fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x238fa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x238fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x238fac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238fb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238fb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238fb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x238fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x238fb8: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x238fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x238fbc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x238fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x238fc0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x238fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x238fc4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x238fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x238fc8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x238fc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x238fcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x238fd0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x238fd4: 0x444025  or          $t0, $v0, $a0
    ctx->pc = 0x238fd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x238fd8: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x238fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238fdc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x238fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x238fe0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x238fe0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x238fe4: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x238fe8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x238fec: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x238fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x238ff0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x238ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x238ff4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x238ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x238ff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238ffc: 0x34680001  ori         $t0, $v1, 0x1
    ctx->pc = 0x238ffcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x239000: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x239000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x239004: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x239008: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x239008u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x23900c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239010: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x239010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x239014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239018: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x23901c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23901cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239020: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x239020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x239024: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x239024u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x239028: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23902c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23902cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239030: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x239030u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x239034: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x239034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x239038: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x239038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23903c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x23903cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x239040: 0x843bc  dsll32      $t0, $t0, 14
    ctx->pc = 0x239040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 14));
    // 0x239044: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239048: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x239048u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x23904c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x239050: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x239054: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239058: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x239058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x23905c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x23905cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x239060: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x239060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x239064: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x239064u;
    SET_GPR_U32(ctx, 31, 0x23906Cu);
    ctx->pc = 0x239068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239064u;
    // 0x239068: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x239064u, 0x23906Cu)) {
        return;
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x23906cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x239070: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x239070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x239074: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x239074u;
    {
        const bool branch_taken_0x239074 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x239078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239074u;
        // 0x239078: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239074) {
            ctx->pc = 0x239084u;
            goto label_239084;
        }
    }
    ctx->pc = 0x23907Cu;
    // 0x23907c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23907Cu;
    {
        const bool branch_taken_0x23907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23907Cu;
        // 0x239080: 0x1e203c  dsll32      $a0, $fp, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23907c) {
            ctx->pc = 0x239088u;
            goto label_239088;
        }
    }
    ctx->pc = 0x239084u;
label_239084:
    // 0x239084: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x239084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_239088:
    // 0x239088: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x239088u;
    SET_GPR_U32(ctx, 31, 0x239090u);
    ctx->pc = 0x23908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239088u;
    // 0x23908c: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x239088u, 0x239090u)) {
        return;
    }
    ctx->pc = 0x239090u;
label_239090:
    // 0x239090: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x239090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x239094: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x239094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x239098: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x239098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x23909c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2390a0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2390a4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2390a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2390a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2390ac: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2390acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2390b0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2390b4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x2390b4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2390b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2390b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2390bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2390bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2390c0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x2390c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x2390c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2390c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2390c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2390c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390cc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2390ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2390d0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2390d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2390d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x2390d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2390d8: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2390d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x2390dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2390dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2390e0: 0x8ee23c90  lw          $v0, 0x3C90($s7)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15504)));
    // 0x2390e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2390e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2390e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2390ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2390ECu;
    {
        const bool branch_taken_0x2390ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2390F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ECu;
        // 0x2390f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ec) {
            ctx->pc = 0x239108u;
            goto label_239108;
        }
    }
    ctx->pc = 0x2390F4u;
    // 0x2390f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2390f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2390f8: 0x0  nop
    ctx->pc = 0x2390f8u;
    // NOP
    // 0x2390fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2390fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x239100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x239100u;
    {
        const bool branch_taken_0x239100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239100) {
            ctx->pc = 0x239128u;
            goto label_239128;
        }
    }
    ctx->pc = 0x239108u;
label_239108:
    // 0x239108: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x239108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23910c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23910cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239118: 0x0  nop
    ctx->pc = 0x239118u;
    // NOP
    // 0x23911c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23911cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x239120: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x239120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x239124: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x239124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_239128:
    // 0x239128: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x23912c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x23912cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x239130: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x239130u;
    {
        const bool branch_taken_0x239130 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239130) {
            ctx->pc = 0x23914Cu;
            goto label_23914c;
        }
    }
    ctx->pc = 0x239138u;
    // 0x239138: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x23913c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23913Cu;
    {
        const bool branch_taken_0x23913c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x239140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23913Cu;
        // 0x239140: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23913c) {
            ctx->pc = 0x23915Cu;
            goto label_23915c;
        }
    }
    ctx->pc = 0x239144u;
    // 0x239144: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239144u;
    {
        const bool branch_taken_0x239144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239144u;
        // 0x239148: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239144) {
            ctx->pc = 0x239174u;
            goto label_239174;
        }
    }
    ctx->pc = 0x23914Cu;
label_23914c:
    // 0x23914c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x23914cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239150: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x239150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x239154: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239154u;
    {
        const bool branch_taken_0x239154 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x239158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239154u;
        // 0x239158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239154) {
            ctx->pc = 0x239170u;
            goto label_239170;
        }
    }
    ctx->pc = 0x23915Cu;
label_23915c:
    // 0x23915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239160: 0x0  nop
    ctx->pc = 0x239160u;
    // NOP
    // 0x239164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x239164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x239168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x239168u;
    {
        const bool branch_taken_0x239168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239168u;
        // 0x23916c: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239168) {
            ctx->pc = 0x23918Cu;
            goto label_23918c;
        }
    }
    ctx->pc = 0x239170u;
label_239170:
    // 0x239170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_239174:
    // 0x239174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23917c: 0x0  nop
    ctx->pc = 0x23917cu;
    // NOP
    // 0x239180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x239180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x239184: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x239184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x239188: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x239188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_23918c:
    // 0x23918c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23918cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x239190: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x239190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239194: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x239198: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23919c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x23919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2391a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2391a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2391a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2391a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2391a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2391a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391ac: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2391acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2391b0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2391b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2391b4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x2391b4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2391b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2391b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2391bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2391bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2391c0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x2391c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x2391c4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2391c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2391c8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2391c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2391cc: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x2391d0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2391d4: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x2391d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2391dc: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x2391dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x2391e0: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2391e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2391e8: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2391ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2391ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2391f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2391f4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2391f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391f8: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x2391f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2391fc: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x2391fcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x239200: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x239200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x239204: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x239204u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x239208: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x239208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23920c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23920cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239210: 0xdf888468  ld          $t0, -0x7B98($gp)
    ctx->pc = 0x239210u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x239214: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x239214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x239218: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x239218u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x23921c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239220: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x239220u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x239224: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x239228: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x239228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x23922c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239230: 0xde680060  ld          $t0, 0x60($s3)
    ctx->pc = 0x239230u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x239234: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x239234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x239238: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x239238u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x23923c: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x23923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x239240: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x239240u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x239244: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x239244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x239248: 0xde680070  ld          $t0, 0x70($s3)
    ctx->pc = 0x239248u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x23924c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x23924cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x239250: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x239250u;
    SET_GPR_U32(ctx, 31, 0x239258u);
    ctx->pc = 0x239254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239250u;
    // 0x239254: 0x7c480000  sq          $t0, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x239250u, 0x239258u)) {
        return;
    }
    ctx->pc = 0x239258u;
label_239258:
    // 0x239258: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x239258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x23925c: 0x1440feba  bnez        $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x23925Cu;
    {
        const bool branch_taken_0x23925c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23925Cu;
        // 0x239260: 0x3c060070  lui         $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23925c) {
            ctx->pc = 0x238D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238d48;
        }
    }
    ctx->pc = 0x239264u;
    // 0x239264: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x239268: 0x24c336c0  addiu       $v1, $a2, 0x36C0
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 14016));
    // 0x23926c: 0x24443800  addiu       $a0, $v0, 0x3800
    ctx->pc = 0x23926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
    // 0x239270: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x239274: 0xae6303c0  sw          $v1, 0x3C0($s3)
    ctx->pc = 0x239274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 960), GPR_U32(ctx, 3));
    // 0x239278: 0x24c53940  addiu       $a1, $a2, 0x3940
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 14656));
    // 0x23927c: 0xae6403c4  sw          $a0, 0x3C4($s3)
    ctx->pc = 0x23927cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 964), GPR_U32(ctx, 4));
    // 0x239280: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x239284: 0xae6503c8  sw          $a1, 0x3C8($s3)
    ctx->pc = 0x239284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 968), GPR_U32(ctx, 5));
    // 0x239288: 0x24c23a80  addiu       $v0, $a2, 0x3A80
    ctx->pc = 0x239288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 14976));
    // 0x23928c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x23928cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x239290: 0xae6203cc  sw          $v0, 0x3CC($s3)
    ctx->pc = 0x239290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 972), GPR_U32(ctx, 2));
    // 0x239294: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x239294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x239298: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x239298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23929c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x23929cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2392a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2392a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2392a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2392a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2392a8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2392a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2392ac: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2392acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2392b0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2392b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2392b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2392b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2392b8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2392b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2392bc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2392bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2392c0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2392c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2392c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2392C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C4u;
        // 0x2392c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392CCu;
    // 0x2392cc: 0x0  nop
    ctx->pc = 0x2392ccu;
    // NOP
    ctx->pc = 0x2392d0u;
}
