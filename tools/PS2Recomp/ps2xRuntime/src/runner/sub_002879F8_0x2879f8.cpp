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

// Function: sub_002879F8
// Address: 0x2879f8 - 0x287c68
void sub_002879F8_0x2879f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002879F8_0x2879f8");
#endif

    switch (ctx->pc) {
        case 0x287a28u: goto label_287a28;
        case 0x287a34u: goto label_287a34;
        case 0x287a44u: goto label_287a44;
        case 0x287a98u: goto label_287a98;
        case 0x287ab0u: goto label_287ab0;
        case 0x287bb8u: goto label_287bb8;
        case 0x287bc8u: goto label_287bc8;
        default: break;
    }

    ctx->pc = 0x2879f8u;

    // 0x2879f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2879f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2879fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2879fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x287a00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x287a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x287a04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x287a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x287a08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x287a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a0c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x287a0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x287a10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x287a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x287a14: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x287a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x287a18: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x287a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x287a1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x287a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x287a20: 0xc09294c  jal         func_24A530
    ctx->pc = 0x287A20u;
    SET_GPR_U32(ctx, 31, 0x287A28u);
    ctx->pc = 0x287A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A20u;
    // 0x287a24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x287A20u, 0x287A28u)) {
        return;
    }
    ctx->pc = 0x287A28u;
label_287a28:
    // 0x287a28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x287a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287a2c: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x287A2Cu;
    SET_GPR_U32(ctx, 31, 0x287A34u);
    ctx->pc = 0x287A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A2Cu;
    // 0x287a30: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x287A2Cu, 0x287A34u)) {
        return;
    }
    ctx->pc = 0x287A34u;
label_287a34:
    // 0x287a34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x287a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a3c: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x287A3Cu;
    SET_GPR_U32(ctx, 31, 0x287A44u);
    ctx->pc = 0x287A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A3Cu;
    // 0x287a40: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x287A3Cu, 0x287A44u)) {
        return;
    }
    ctx->pc = 0x287A44u;
label_287a44:
    // 0x287a44: 0x6a03000b  ldl         $v1, 0xB($s0)
    ctx->pc = 0x287a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x287a48: 0x6e030004  ldr         $v1, 0x4($s0)
    ctx->pc = 0x287a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x287a4c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x287a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287a50: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x287a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287a54: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x287a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287a58: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x287a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287a5c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x287a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287a64: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x287a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x287a68: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x287a68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287a6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x287a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287a70: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x287a70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x287a74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x287A74u;
    {
        const bool branch_taken_0x287a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A74u;
        // 0x287a78: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a74) {
            ctx->pc = 0x287A8Cu;
            goto label_287a8c;
        }
    }
    ctx->pc = 0x287A7Cu;
    // 0x287a7c: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x287a7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287a80: 0x0  nop
    ctx->pc = 0x287a80u;
    // NOP
    // 0x287a84: 0x45030052  bc1tl       . + 4 + (0x52 << 2)
    ctx->pc = 0x287A84u;
    {
        const bool branch_taken_0x287a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287a84) {
            ctx->pc = 0x287A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A84u;
            // 0x287a88: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x287BD0u;
            goto label_287bd0;
        }
    }
    ctx->pc = 0x287A8Cu;
label_287a8c:
    // 0x287a8c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x287a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x287a90: 0xc09294c  jal         func_24A530
    ctx->pc = 0x287A90u;
    SET_GPR_U32(ctx, 31, 0x287A98u);
    ctx->pc = 0x287A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A90u;
    // 0x287a94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x287A90u, 0x287A98u)) {
        return;
    }
    ctx->pc = 0x287A98u;
label_287a98:
    // 0x287a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x287a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x287aa0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x287aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x287aa4: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x287aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x287aa8: 0xc09289c  jal         func_24A270
    ctx->pc = 0x287AA8u;
    SET_GPR_U32(ctx, 31, 0x287AB0u);
    ctx->pc = 0x287AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AA8u;
    // 0x287aac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x287AA8u, 0x287AB0u)) {
        return;
    }
    ctx->pc = 0x287AB0u;
label_287ab0:
    // 0x287ab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x287ab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ab4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x287ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287abc: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x287abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287ac0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x287ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287ac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x287ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x287ac8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x287ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287acc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x287accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x287ad0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x287ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287ad4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x287ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287ad8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x287ad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x287adc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x287adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x287ae0: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x287ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ae4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x287ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x287ae8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x287ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x287aec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287af0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287af4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x287af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287af8: 0x46010104  c1          0x10104
    ctx->pc = 0x287af8u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[1]);
    // 0x287afc: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x287afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287b00: 0x0  nop
    ctx->pc = 0x287b00u;
    // NOP
    // 0x287b04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x287B04u;
    {
        const bool branch_taken_0x287b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B04u;
        // 0x287b08: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b04) {
            ctx->pc = 0x287B18u;
            goto label_287b18;
        }
    }
    ctx->pc = 0x287B0Cu;
    // 0x287b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287b14: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x287b14u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_287b18:
    // 0x287b18: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x287b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b1c: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x287b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287b20: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x287b20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x287b24: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x287b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b28: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287b2c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x287b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x287b30: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x287b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287b34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x287b34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x287b38: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x287b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x287b3c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x287B3Cu;
    {
        const bool branch_taken_0x287b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B3Cu;
        // 0x287b40: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b3c) {
            ctx->pc = 0x287BA0u;
            goto label_287ba0;
        }
    }
    ctx->pc = 0x287B44u;
    // 0x287b44: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x287b48: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x287b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287b4c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x287b50: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x287b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x287b54: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x287b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b58: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x287b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287b5c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x287b5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x287b60: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x287b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x287b64: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x287b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287b68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287b6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x287b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x287b70: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x287b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b74: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x287b74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x287b78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x287b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287b7c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x287b7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x287b80: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x287b80u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x287b84: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x287b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287b88: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x287b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x287b8c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x287b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b90: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287b94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x287B94u;
    {
        const bool branch_taken_0x287b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B94u;
        // 0x287b98: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b94) {
            ctx->pc = 0x287BB0u;
            goto label_287bb0;
        }
    }
    ctx->pc = 0x287B9Cu;
    // 0x287b9c: 0x0  nop
    ctx->pc = 0x287b9cu;
    // NOP
label_287ba0:
    // 0x287ba0: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x287ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x287ba4: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x287ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x287ba8: 0xb062fffb  sdl         $v0, -0x5($v1)
    ctx->pc = 0x287ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287bac: 0xb462fff4  sdr         $v0, -0xC($v1)
    ctx->pc = 0x287bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_287bb0:
    // 0x287bb0: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x287BB0u;
    SET_GPR_U32(ctx, 31, 0x287BB8u);
    ctx->pc = 0x287BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BB0u;
    // 0x287bb4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x287BB0u, 0x287BB8u)) {
        return;
    }
    ctx->pc = 0x287BB8u;
label_287bb8:
    // 0x287bb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x287bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bc0: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x287BC0u;
    SET_GPR_U32(ctx, 31, 0x287BC8u);
    ctx->pc = 0x287BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BC0u;
    // 0x287bc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x287BC0u, 0x287BC8u)) {
        return;
    }
    ctx->pc = 0x287BC8u;
label_287bc8:
    // 0x287bc8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x287bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287bcc: 0x0  nop
    ctx->pc = 0x287bccu;
    // NOP
label_287bd0:
    // 0x287bd0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x287bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287bd4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x287bd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x287bd8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x287bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x287bdc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x287bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287be0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x287be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287be4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x287be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287be8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x287be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x287bec: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x287becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287bf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287bf4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x287bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x287bf8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x287bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287bfc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x287bfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x287c00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x287c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287c04: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x287c04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x287c08: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x287c08u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x287c0c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x287c0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x287c10: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x287c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x287c14: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x287c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287c18: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287c1c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x287c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x287c20: 0x68430013  ldl         $v1, 0x13($v0)
    ctx->pc = 0x287c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x287c24: 0x6c43000c  ldr         $v1, 0xC($v0)
    ctx->pc = 0x287c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x287c28: 0xb2030013  sdl         $v1, 0x13($s0)
    ctx->pc = 0x287c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287c2c: 0xb603000c  sdr         $v1, 0xC($s0)
    ctx->pc = 0x287c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287c34: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x287c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x287c38: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x287c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x287c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287c40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x287c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287c44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x287c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287c48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x287c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x287c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287c50: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x287c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287c54: 0x3e00008  jr          $ra
    ctx->pc = 0x287C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C54u;
        // 0x287c58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C5Cu;
    // 0x287c5c: 0x0  nop
    ctx->pc = 0x287c5cu;
    // NOP
    // 0x287c60: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x287c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x287c64: 0x0  nop
    ctx->pc = 0x287c64u;
    // NOP
    ctx->pc = 0x287c68u;
}
