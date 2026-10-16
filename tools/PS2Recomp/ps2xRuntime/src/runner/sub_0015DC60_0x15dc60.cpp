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

// Function: sub_0015DC60
// Address: 0x15dc60 - 0x15dfb8
void sub_0015DC60_0x15dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DC60_0x15dc60");
#endif

    switch (ctx->pc) {
        case 0x15dcf8u: goto label_15dcf8;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd10u: goto label_15dd10;
        case 0x15dd30u: goto label_15dd30;
        case 0x15dda8u: goto label_15dda8;
        case 0x15de2cu: goto label_15de2c;
        case 0x15de3cu: goto label_15de3c;
        case 0x15de98u: goto label_15de98;
        case 0x15dec8u: goto label_15dec8;
        case 0x15df00u: goto label_15df00;
        case 0x15df30u: goto label_15df30;
        case 0x15df60u: goto label_15df60;
        case 0x15df84u: goto label_15df84;
        default: break;
    }

    ctx->pc = 0x15dc60u;

    // 0x15dc60: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15dc64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15dc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dc68: 0xc4408640  lwc1        $f0, -0x79C0($v0)
    ctx->pc = 0x15dc68u;
    { uint32_t bits = FAST_READ32(0x338640u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dc6c: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x15dc70: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x15dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x15dc74: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x15dc74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x15dc78: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x15dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x15dc7c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x15dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x15dc80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15dc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc84: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x15dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x15dc88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15dc88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15dc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15dc90: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x15dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x15dc94: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x15dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x15dc98: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x15dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x15dc9c: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x15dc9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x15dca0: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x15dca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x15dca4: 0x450100b9  bc1t        . + 4 + (0xB9 << 2)
    ctx->pc = 0x15DCA4u;
    {
        const bool branch_taken_0x15dca4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCA4u;
        // 0x15dca8: 0xe4408640  swc1        $f0, -0x79C0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294936128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dca4) {
            ctx->pc = 0x15DF8Cu;
            goto label_15df8c;
        }
    }
    ctx->pc = 0x15DCACu;
    // 0x15dcac: 0xc68107ec  lwc1        $f1, 0x7EC($s4)
    ctx->pc = 0x15dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dcb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x15dcb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15dcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15dcb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15dcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dcbc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x15dcc0: 0x8c4445e0  lw          $a0, 0x45E0($v0)
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B45E0u));
    // 0x15dcc4: 0x0  nop
    ctx->pc = 0x15dcc4u;
    // NOP
    // 0x15dcc8: 0x0  nop
    ctx->pc = 0x15dcc8u;
    // NOP
    // 0x15dccc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15dcccu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x15dcd0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x15dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x15dcd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15dcd8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x15dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x15dcdc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DCDCu;
    {
        const bool branch_taken_0x15dcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCDCu;
        // 0x15dce0: 0xe6408640  swc1        $f0, -0x79C0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294936128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcdc) {
            ctx->pc = 0x15DCF8u;
            goto label_15dcf8;
        }
    }
    ctx->pc = 0x15DCE4u;
    // 0x15dce4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15dce8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DCE8u;
    {
        const bool branch_taken_0x15dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCE8u;
        // 0x15dcec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dce8) {
            ctx->pc = 0x15DCFCu;
            goto label_15dcfc;
        }
    }
    ctx->pc = 0x15DCF0u;
    // 0x15dcf0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x15DCF0u;
    SET_GPR_U32(ctx, 31, 0x15DCF8u);
    ctx->pc = 0x15DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCF0u;
    // 0x15dcf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x15DCF0u, 0x15DCF8u)) {
        return;
    }
    ctx->pc = 0x15DCF8u;
label_15dcf8:
    // 0x15dcf8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15dcfc:
    // 0x15dcfc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15dd00: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x15DD00u;
    SET_GPR_U32(ctx, 31, 0x15DD08u);
    ctx->pc = 0x15DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD00u;
    // 0x15dd04: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x15DD00u, 0x15DD08u)) {
        return;
    }
    ctx->pc = 0x15DD08u;
label_15dd08:
    // 0x15dd08: 0xc0a0644  jal         func_281910
    ctx->pc = 0x15DD08u;
    SET_GPR_U32(ctx, 31, 0x15DD10u);
    ctx->pc = 0x281910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281910u, 0x15DD08u, 0x15DD10u)) {
        return;
    }
    ctx->pc = 0x15DD10u;
label_15dd10:
    // 0x15dd10: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x15dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x15dd14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x15dd14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15dd18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15DD18u;
    {
        const bool branch_taken_0x15dd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd18) {
            ctx->pc = 0x15DD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DD18u;
            // 0x15dd1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DD20u;
            goto label_15dd20;
        }
    }
    ctx->pc = 0x15DD20u;
label_15dd20:
    // 0x15dd20: 0xc69507e0  lwc1        $f21, 0x7E0($s4)
    ctx->pc = 0x15dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15dd24: 0x8010  mfhi        $s0
    ctx->pc = 0x15dd24u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x15dd28: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15DD28u;
    SET_GPR_U32(ctx, 31, 0x15DD30u);
    ctx->pc = 0x15DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD28u;
    // 0x15dd2c: 0xc69407e4  lwc1        $f20, 0x7E4($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15DD28u, 0x15DD30u)) {
        return;
    }
    ctx->pc = 0x15DD30u;
label_15dd30:
    // 0x15dd30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dd34: 0x0  nop
    ctx->pc = 0x15dd34u;
    // NOP
    // 0x15dd38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15dd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15dd3c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x15dd40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15dd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dd44: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x15dd44u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x15dd48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15dd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15dd4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15dd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15dd50: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DD50u;
    {
        const bool branch_taken_0x15dd50 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x15DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD50u;
        // 0x15dd54: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd50) {
            ctx->pc = 0x15DD6Cu;
            goto label_15dd6c;
        }
    }
    ctx->pc = 0x15DD58u;
    // 0x15dd58: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x15dd58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dd5c: 0x0  nop
    ctx->pc = 0x15dd5cu;
    // NOP
    // 0x15dd60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15dd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15dd64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15DD64u;
    {
        const bool branch_taken_0x15dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD64u;
        // 0x15dd68: 0xc68007f4  lwc1        $f0, 0x7F4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd64) {
            ctx->pc = 0x15DD8Cu;
            goto label_15dd8c;
        }
    }
    ctx->pc = 0x15DD6Cu;
label_15dd6c:
    // 0x15dd6c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x15dd70: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x15dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x15dd74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15dd78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dd7c: 0x0  nop
    ctx->pc = 0x15dd7cu;
    // NOP
    // 0x15dd80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15dd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15dd84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x15dd84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x15dd88: 0xc68007f4  lwc1        $f0, 0x7F4($s4)
    ctx->pc = 0x15dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15dd8c:
    // 0x15dd8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15dd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15dd90: 0x0  nop
    ctx->pc = 0x15dd90u;
    // NOP
    // 0x15dd94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15DD94u;
    {
        const bool branch_taken_0x15dd94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15dd94) {
            ctx->pc = 0x15DDA0u;
            goto label_15dda0;
        }
    }
    ctx->pc = 0x15DD9Cu;
    // 0x15dd9c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15dd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15dda0:
    // 0x15dda0: 0xc0a0644  jal         func_281910
    ctx->pc = 0x15DDA0u;
    SET_GPR_U32(ctx, 31, 0x15DDA8u);
    ctx->pc = 0x281910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281910u, 0x15DDA0u, 0x15DDA8u)) {
        return;
    }
    ctx->pc = 0x15DDA8u;
label_15dda8:
    // 0x15dda8: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x15dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x15ddac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ddb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ddb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ddb4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x15ddb4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15ddb8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15DDB8u;
    {
        const bool branch_taken_0x15ddb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ddb8) {
            ctx->pc = 0x15DDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DDB8u;
            // 0x15ddbc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DDC0u;
            goto label_15ddc0;
        }
    }
    ctx->pc = 0x15DDC0u;
label_15ddc0:
    // 0x15ddc0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x15ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ddc4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x15ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x15ddc8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x15ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x15ddcc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ddd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15ddd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15ddd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ddd8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x15ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x15dddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15dddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dde0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x15dde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x15dde4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dde8: 0x3010  mfhi        $a2
    ctx->pc = 0x15dde8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x15ddec: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DDECu;
    {
        const bool branch_taken_0x15ddec = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x15DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDECu;
        // 0x15ddf0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddec) {
            ctx->pc = 0x15DE08u;
            goto label_15de08;
        }
    }
    ctx->pc = 0x15DDF4u;
    // 0x15ddf4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x15ddf4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ddf8: 0x0  nop
    ctx->pc = 0x15ddf8u;
    // NOP
    // 0x15ddfc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x15ddfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15de00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15DE00u;
    {
        const bool branch_taken_0x15de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15de00) {
            ctx->pc = 0x15DE24u;
            goto label_15de24;
        }
    }
    ctx->pc = 0x15DE08u;
label_15de08:
    // 0x15de08: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x15de0c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x15de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x15de10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15de10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15de14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15de14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15de18: 0x0  nop
    ctx->pc = 0x15de18u;
    // NOP
    // 0x15de1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x15de1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15de20: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x15de20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_15de24:
    // 0x15de24: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x15DE24u;
    SET_GPR_U32(ctx, 31, 0x15DE2Cu);
    ctx->pc = 0x15DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE24u;
    // 0x15de28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x15DE24u, 0x15DE2Cu)) {
        return;
    }
    ctx->pc = 0x15DE2Cu;
label_15de2c:
    // 0x15de2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15de2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15de30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de34: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x15DE34u;
    SET_GPR_U32(ctx, 31, 0x15DE3Cu);
    ctx->pc = 0x15DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE34u;
    // 0x15de38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x15DE34u, 0x15DE3Cu)) {
        return;
    }
    ctx->pc = 0x15DE3Cu;
label_15de3c:
    // 0x15de3c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x15de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15de40: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x15de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15de44: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x15de44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x15de48: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x15de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15de4c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x15de4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x15de50: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x15de50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x15de54: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x15de54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x15de58: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x15de58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x15de5c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x15de5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x15de60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15de64: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15de68: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x15de68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15de6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15de6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15de70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15de70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15de74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x15de74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15de78: 0xc68007e8  lwc1        $f0, 0x7E8($s4)
    ctx->pc = 0x15de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15de7c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15de80: 0x26830060  addiu       $v1, $s4, 0x60
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x15de84: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15de88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DE88u;
    {
        const bool branch_taken_0x15de88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE88u;
        // 0x15de8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de88) {
            ctx->pc = 0x15DEB0u;
            goto label_15deb0;
        }
    }
    ctx->pc = 0x15DE90u;
    // 0x15de90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15de94: 0x0  nop
    ctx->pc = 0x15de94u;
    // NOP
label_15de98:
    // 0x15de98: 0x2e620014  sltiu       $v0, $s3, 0x14
    ctx->pc = 0x15de98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x15de9c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x15DE9Cu;
    {
        const bool branch_taken_0x15de9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE9Cu;
        // 0x15dea0: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de9c) {
            ctx->pc = 0x15DF8Cu;
            goto label_15df8c;
        }
    }
    ctx->pc = 0x15DEA4u;
    // 0x15dea4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15dea8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15DEA8u;
    {
        const bool branch_taken_0x15dea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dea8) {
            ctx->pc = 0x15DEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DEA8u;
            // 0x15deac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15de98;
        }
    }
    ctx->pc = 0x15DEB0u;
label_15deb0:
    // 0x15deb0: 0x2e620014  sltiu       $v0, $s3, 0x14
    ctx->pc = 0x15deb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x15deb4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x15DEB4u;
    {
        const bool branch_taken_0x15deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEB4u;
        // 0x15deb8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15deb4) {
            ctx->pc = 0x15DF8Cu;
            goto label_15df8c;
        }
    }
    ctx->pc = 0x15DEBCu;
    // 0x15debc: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x15dec0: 0xc05e396  jal         func_178E58
    ctx->pc = 0x15DEC0u;
    SET_GPR_U32(ctx, 31, 0x15DEC8u);
    ctx->pc = 0x15DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEC0u;
    // 0x15dec4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x15DEC0u, 0x15DEC8u)) {
        return;
    }
    ctx->pc = 0x15DEC8u;
label_15dec8:
    // 0x15dec8: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x15dec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x15decc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15deccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ded0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ded0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ded4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x15ded4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15ded8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x15ded8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15dedc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15dee0: 0xb3a200c7  sdl         $v0, 0xC7($sp)
    ctx->pc = 0x15dee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15dee4: 0xb7a200c0  sdr         $v0, 0xC0($sp)
    ctx->pc = 0x15dee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15dee8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x15dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x15deec: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x15deecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15def0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15def0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15def4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x15def4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x15def8: 0xc086156  jal         func_218558
    ctx->pc = 0x15DEF8u;
    SET_GPR_U32(ctx, 31, 0x15DF00u);
    ctx->pc = 0x15DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEF8u;
    // 0x15defc: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x15DEF8u, 0x15DF00u)) {
        return;
    }
    ctx->pc = 0x15DF00u;
label_15df00:
    // 0x15df00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15df00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df08: 0x56220020  bnel        $s1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15DF08u;
    {
        const bool branch_taken_0x15df08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15df08) {
            ctx->pc = 0x15DF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DF08u;
            // 0x15df0c: 0xae408640  sw          $zero, -0x79C0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294936128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DF8Cu;
            goto label_15df8c;
        }
    }
    ctx->pc = 0x15DF10u;
    // 0x15df10: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x15df10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15df14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df18: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x15df18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15df1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15df1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df20: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15df24: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x15df28: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x15DF28u;
    SET_GPR_U32(ctx, 31, 0x15DF30u);
    ctx->pc = 0x15DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF28u;
    // 0x15df2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x15DF28u, 0x15DF30u)) {
        return;
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0x2729018  mult        $s2, $s3, $s2
    ctx->pc = 0x15df30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x15df34: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x15df34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x15df38: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x15df38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x15df3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df40: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x15df40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x15df44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15df44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df48: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x15df48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x15df4c: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x15df50: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x15df50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x15df54: 0x8e850048  lw          $a1, 0x48($s4)
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x15df58: 0xc057948  jal         func_15E520
    ctx->pc = 0x15DF58u;
    SET_GPR_U32(ctx, 31, 0x15DF60u);
    ctx->pc = 0x15DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF58u;
    // 0x15df5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15E520u, 0x15DF58u, 0x15DF60u)) {
        return;
    }
    ctx->pc = 0x15DF60u;
label_15df60:
    // 0x15df60: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x15df60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x15df64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15df64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df68: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x15df68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x15df6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15df6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df74: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x15df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df78: 0xe4a000a0  swc1        $f0, 0xA0($a1)
    ctx->pc = 0x15df78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
    // 0x15df7c: 0xc057980  jal         func_15E600
    ctx->pc = 0x15DF7Cu;
    SET_GPR_U32(ctx, 31, 0x15DF84u);
    ctx->pc = 0x15DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF7Cu;
    // 0x15df80: 0x8e85004c  lw          $a1, 0x4C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15E600u, 0x15DF7Cu, 0x15DF84u)) {
        return;
    }
    ctx->pc = 0x15DF84u;
label_15df84:
    // 0x15df84: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x15df88: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x15df88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
label_15df8c:
    // 0x15df8c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x15df8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15df90: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x15df90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15df94: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x15df94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15df98: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x15df98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15df9c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x15df9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15dfa0: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x15dfa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15dfa4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x15dfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15dfa8: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x15dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15dfac: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x15dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15dfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x15DFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB0u;
        // 0x15dfb4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DFB8u;
}
