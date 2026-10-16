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

// Function: sub_002A6EC0
// Address: 0x2a6ec0 - 0x2a7428
void sub_002A6EC0_0x2a6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6EC0_0x2a6ec0");
#endif

    switch (ctx->pc) {
        case 0x2a6fa8u: goto label_2a6fa8;
        case 0x2a7220u: goto label_2a7220;
        case 0x2a72b8u: goto label_2a72b8;
        default: break;
    }

    ctx->pc = 0x2a6ec0u;

    // 0x2a6ec0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2a6ec4: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2a6ec4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ec8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2a6ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2a6ecc: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6ed0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a6ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ed4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2a6ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2a6ed8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2a6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2a6edc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a6edcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ee0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2a6ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2a6ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a6ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a6ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6ef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a6ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6ef4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a6ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6efc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2a6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2a6f00: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2a6f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a6f04: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2a6f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a6f08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a6f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a6f0c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2a6f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a6f10: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2a6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2a6f14: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2a6f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a6f18: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a6f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a6f1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2a6f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a6f20: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a6f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a6f24: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a6f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a6f28: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a6f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a6f2c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a6f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a6f30: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a6f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a6f34: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a6f38: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a6f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a6f3c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2a6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a6f40: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2a6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2a6f44: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x2a6f44u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x2a6f48: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x2a6f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a6f4c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2a6f4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6f50: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x2a6f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6f54: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2a6f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a6f58: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2a6f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6f5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f60: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2a6f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a6f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f68: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2a6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a6f6c: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x2a6f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f70: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2a6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6f74: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2a6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a6f78: 0x69820037  ldl         $v0, 0x37($t4)
    ctx->pc = 0x2a6f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a6f7c: 0x6d820030  ldr         $v0, 0x30($t4)
    ctx->pc = 0x2a6f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a6f80: 0x8d8f0038  lw          $t7, 0x38($t4)
    ctx->pc = 0x2a6f80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x2a6f84: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2a6f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6f88: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2a6f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a6f8c: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x2a6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x2a6f90: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a6f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a6f94: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2a6f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a6f98: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2a6f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a6f9c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a6fa0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2a6fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a6fa4: 0x0  nop
    ctx->pc = 0x2a6fa4u;
    // NOP
label_2a6fa8:
    // 0x2a6fa8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a6fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6fac: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6fb0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2a6fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2a6fb4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a6fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fb8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a6fb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2a6fbc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a6fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a6fc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a6fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a6fc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a6fc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a6fc8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2a6fc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a6fcc: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x2a6fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6fd0: 0x0  nop
    ctx->pc = 0x2a6fd0u;
    // NOP
    // 0x2a6fd4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2A6FD4u;
    {
        const bool branch_taken_0x2a6fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FD4u;
        // 0x2a6fd8: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fd4) {
            ctx->pc = 0x2A704Cu;
            goto label_2a704c;
        }
    }
    ctx->pc = 0x2A6FDCu;
    // 0x2a6fdc: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x2a6fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6fe0: 0x0  nop
    ctx->pc = 0x2a6fe0u;
    // NOP
    // 0x2a6fe4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FE4u;
        // 0x2a6fe8: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A6FF4u;
            goto label_2a6ff4;
        }
    }
    ctx->pc = 0x2A6FECu;
    // 0x2a6fec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6FECu;
    {
        const bool branch_taken_0x2a6fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FECu;
        // 0x2a6ff0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fec) {
            ctx->pc = 0x2A7000u;
            goto label_2a7000;
        }
    }
    ctx->pc = 0x2A6FF4u;
label_2a6ff4:
    // 0x2a6ff4: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x2a6ff4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x2a6ff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a6ff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a6ffc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a6ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2a7000:
    // 0x2a7000: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7004: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7008: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2a7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a700c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a700cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7010: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2a7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7014: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2a7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7018: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a7018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a701c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2a701cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a7020: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7024: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7028: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a702c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a702cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a7030: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2a7030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a7034: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a7034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7038: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a703c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a703cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7040: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a7040u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a7044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7044u;
    {
        const bool branch_taken_0x2a7044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7044u;
        // 0x2a7048: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7044) {
            ctx->pc = 0x2A7068u;
            goto label_2a7068;
        }
    }
    ctx->pc = 0x2A704Cu;
label_2a704c:
    // 0x2a704c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a704cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a7050: 0x110d0004  beq         $t0, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7050u;
    {
        const bool branch_taken_0x2a7050 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x2A7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7050u;
        // 0x2a7054: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7050) {
            ctx->pc = 0x2A7064u;
            goto label_2a7064;
        }
    }
    ctx->pc = 0x2A7058u;
    // 0x2a7058: 0xeb1021  addu        $v0, $a3, $t3
    ctx->pc = 0x2a7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x2a705c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A705Cu;
    {
        const bool branch_taken_0x2a705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A705Cu;
        // 0x2a7060: 0x1425823  subu        $t3, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a705c) {
            ctx->pc = 0x2A7068u;
            goto label_2a7068;
        }
    }
    ctx->pc = 0x2A7064u;
label_2a7064:
    // 0x2a7064: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a7068:
    // 0x2a7068: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a7068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a706c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a7070: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2a7070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a7074: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2a7074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a7078: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2A7078u;
    {
        const bool branch_taken_0x2a7078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7078u;
        // 0x2a707c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7078) {
            ctx->pc = 0x2A6FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6fa8;
        }
    }
    ctx->pc = 0x2A7080u;
    // 0x2a7080: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2a7080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a7084: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x2A7084u;
    {
        const bool branch_taken_0x2a7084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7084) {
            ctx->pc = 0x2A7088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7084u;
            // 0x2a7088: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7228u;
            goto label_2a7228;
        }
    }
    ctx->pc = 0x2A708Cu;
    // 0x2a708c: 0x15000011  bnez        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A708Cu;
    {
        const bool branch_taken_0x2a708c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A708Cu;
        // 0x2a7090: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a708c) {
            ctx->pc = 0x2A70D4u;
            goto label_2a70d4;
        }
    }
    ctx->pc = 0x2A7094u;
    // 0x2a7094: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2a7094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7098: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2a7098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a709c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2a709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a70a0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2a70a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a70a4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x2a70a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a70a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2a70ac: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a70b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a70b4: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x2a70b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a70b8: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x2a70b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a70bc: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2a70bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a70c0: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x2a70c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a70c4: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x2a70c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a70c8: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x2a70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x2a70cc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2A70CCu;
    {
        const bool branch_taken_0x2a70cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70CCu;
        // 0x2a70d0: 0xa6030054  sh          $v1, 0x54($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70cc) {
            ctx->pc = 0x2A73D4u;
            goto label_2a73d4;
        }
    }
    ctx->pc = 0x2A70D4u;
label_2a70d4:
    // 0x2a70d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a70d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a70dc: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x2a70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2a70e0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a70e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a70e4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2a70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2a70e8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a70ec: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a70ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a70f0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a70f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a70f4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a70f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a70f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a70fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a70fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a7100: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a7104: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a7104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7108: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a7108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a710c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a710cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a7110: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7114: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a7114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a7118: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a7118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a711c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a711cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a7120: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a7120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7124: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2a7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7128: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a7128u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a712c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7130: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a7130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a7134: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a7134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a7138: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a713c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7140: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7144: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a7144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7148: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a714c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a714cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a7150: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2a7150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a7154: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a7154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7158: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a7158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a715c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7160: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a7164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a7164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a7168: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2a7168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a716c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7170: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a7170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7174: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2a7174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7178: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a717c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a717cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7180: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x2a7180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a7184: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2a7184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7188: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2a7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a718c: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2a718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7190: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a7190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7194: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a7194u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a7198: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2a7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a719c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2a719cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2a71a0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a71a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a71a4: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x2a71a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a71a8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2a71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a71ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a71b0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2a71b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2a71b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a71b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a71b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a71b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a71bc: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2a71bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a71c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a71c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a71c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a71c8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a71c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2a71cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a71ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a71d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a71d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a71d4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2a71d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a71d8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2a71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a71dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a71dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a71e0: 0x46032182  mul.s       $f6, $f4, $f3
    ctx->pc = 0x2a71e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2a71e4: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x2a71e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2a71e8: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x2a71e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a71ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a71ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a71f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a71f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a71f4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2a71f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2a71f8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a71f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2a71fc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2a71fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2a7200: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2a7200u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2a7204: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a7204u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a7208: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a720c: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x2a720cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a7210: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x2a7210u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a7214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7218: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2A7218u;
    SET_GPR_U32(ctx, 31, 0x2A7220u);
    ctx->pc = 0x2A721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7218u;
    // 0x2a721c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2A7218u, 0x2A7220u)) {
        return;
    }
    ctx->pc = 0x2A7220u;
label_2a7220:
    // 0x2a7220: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2A7220u;
    {
        const bool branch_taken_0x2a7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7220u;
        // 0x2a7224: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7220) {
            ctx->pc = 0x2A73D0u;
            goto label_2a73d0;
        }
    }
    ctx->pc = 0x2A7228u;
label_2a7228:
    // 0x2a7228: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x2a7228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2a722c: 0x24463a20  addiu       $a2, $v0, 0x3A20
    ctx->pc = 0x2a722cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14880));
    // 0x2a7230: 0x68d20007  ldl         $s2, 0x7($a2)
    ctx->pc = 0x2a7230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x2a7234: 0x6cd20000  ldr         $s2, 0x0($a2)
    ctx->pc = 0x2a7234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2a7238: 0xb3b20097  sdl         $s2, 0x97($sp)
    ctx->pc = 0x2a7238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a723c: 0xb7b20090  sdr         $s2, 0x90($sp)
    ctx->pc = 0x2a723cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7240: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x2a7240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2a7244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7248: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a724c: 0x1631004  sllv        $v0, $v1, $t3
    ctx->pc = 0x2a724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
    // 0x2a7250: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a7250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7254: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a7254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a7258: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2a7258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a725c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7264: 0x0  nop
    ctx->pc = 0x2a7264u;
    // NOP
    // 0x2a7268: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7268u;
    {
        const bool branch_taken_0x2a7268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7268u;
        // 0x2a726c: 0x30670003  andi        $a3, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7268) {
            ctx->pc = 0x2A7274u;
            goto label_2a7274;
        }
    }
    ctx->pc = 0x2A7270u;
    // 0x2a7270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7274:
    // 0x2a7274: 0x1c53026  xor         $a2, $t6, $a1
    ctx->pc = 0x2a7274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 5));
    // 0x2a7278: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x2a7278u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a727c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2a727cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2a7280: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2a7280u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a7284: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2a7284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a7288: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a7288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a728c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2a728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7290: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x2a7290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a7294: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x2a7294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7298: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x2a7298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a729c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2a729cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a72a0: 0x6282b  sltu        $a1, $zero, $a2
    ctx->pc = 0x2a72a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a72a4: 0xb2100  sll         $a0, $t3, 4
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2a72a8: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x2a72a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a72ac: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x2a72acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a72b0: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x2a72b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a72b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a72b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a72b8:
    // 0x2a72b8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2a72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a72bc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2a72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72c0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2a72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a72c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a72c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a72c8: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2a72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a72cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a72ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a72d0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a72d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a72d4: 0xe4e50000  swc1        $f5, 0x0($a3)
    ctx->pc = 0x2a72d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a72d8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2a72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a72dc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2a72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72e0: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2a72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a72e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a72e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a72e8: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2a72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a72ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a72ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a72f0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a72f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a72f4: 0xe4e40004  swc1        $f4, 0x4($a3)
    ctx->pc = 0x2a72f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2a72f8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2a72f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72fc: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2a72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7300: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2a7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7304: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a7308: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2a7308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a730c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a730cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7310: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a7310u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a7314: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x2a7314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2a7318: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2a7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a731c: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2a731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7320: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7324: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a7328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a732c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a732cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a7330: 0xe4e50000  swc1        $f5, 0x0($a3)
    ctx->pc = 0x2a7330u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a7334: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2a7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7338: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2a7338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a733c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7340: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a7344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7348: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a7348u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a734c: 0xe4e40004  swc1        $f4, 0x4($a3)
    ctx->pc = 0x2a734cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2a7350: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2a7350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7354: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2a7354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7358: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a735c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a735cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a7360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7364: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a7364u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a7368: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x2a7368u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2a736c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a736cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a7370: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a7374: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2a7374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2a7378: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a737c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2a737cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2a7380: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a7380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a7384: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a7384u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a7388: 0x4c1ffcb  bgez        $a2, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2A7388u;
    {
        const bool branch_taken_0x2a7388 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2A738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7388u;
        // 0x2a738c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7388) {
            ctx->pc = 0x2A72B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a72b8;
        }
    }
    ctx->pc = 0x2A7390u;
    // 0x2a7390: 0x46063080  add.s       $f2, $f6, $f6
    ctx->pc = 0x2a7390u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2a7394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a739c: 0x8c1021  addu        $v0, $a0, $t4
    ctx->pc = 0x2a739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2a73a0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2a73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a73a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a73a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a73a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a73ac: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a73b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a73b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a73b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a73b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a73b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a73b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a73bc: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2a73bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a73c0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2a73c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a73c4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2a73c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a73c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a73cc: 0x0  nop
    ctx->pc = 0x2a73ccu;
    // NOP
label_2a73d0:
    // 0x2a73d0: 0xa6020054  sh          $v0, 0x54($s0)
    ctx->pc = 0x2a73d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 2));
label_2a73d4:
    // 0x2a73d4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a73d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a73d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73dc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2a73dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a73e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a73e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a73e4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2a73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a73e8: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2a73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a73ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a73ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a73f0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2a73f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a73f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2a73f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2a73f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a73fc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2a73fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a7400: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a7400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a7404: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2a7404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a7408: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a7408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a740c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2a740cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a7410: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a7410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a7414: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a7414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2a7418: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2a7418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a741c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A741Cu;
        // 0x2a7420: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7424u;
    // 0x2a7424: 0x0  nop
    ctx->pc = 0x2a7424u;
    // NOP
    ctx->pc = 0x2a7428u;
}
