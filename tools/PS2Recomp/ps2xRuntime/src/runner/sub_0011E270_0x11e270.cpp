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

// Function: sub_0011E270
// Address: 0x11e270 - 0x11e618
void sub_0011E270_0x11e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E270_0x11e270");
#endif

    switch (ctx->pc) {
        case 0x11e2b8u: goto label_11e2b8;
        case 0x11e38cu: goto label_11e38c;
        case 0x11e3b8u: goto label_11e3b8;
        case 0x11e448u: goto label_11e448;
        case 0x11e468u: goto label_11e468;
        case 0x11e4f8u: goto label_11e4f8;
        case 0x11e5d8u: goto label_11e5d8;
        default: break;
    }

    ctx->pc = 0x11e270u;

    // 0x11e270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11e274: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11e278: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x11e27c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11e27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e280: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11e280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e284: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11e284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x11e288: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x11e28c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11e28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e290: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x11e290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x11e294: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11e294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e298: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x11e298u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x11e29c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x11e29cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x11e2a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11e2a4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x11e2a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x11e2a8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x11e2a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x11e2ac: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x11e2acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x11e2b0: 0xc04783c  jal         func_11E0F0
    ctx->pc = 0x11E2B0u;
    SET_GPR_U32(ctx, 31, 0x11E2B8u);
    ctx->pc = 0x11E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2B0u;
    // 0x11e2b4: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E0F0u, 0x11E2B0u, 0x11E2B8u)) {
        return;
    }
    ctx->pc = 0x11E2B8u;
label_11e2b8:
    // 0x11e2b8: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x11E2B8u;
    {
        const bool branch_taken_0x11e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2B8u;
        // 0x11e2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2b8) {
            ctx->pc = 0x11E5E8u;
            goto label_11e5e8;
        }
    }
    ctx->pc = 0x11E2C0u;
    // 0x11e2c0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x11e2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e2c4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x11e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e2c8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x11e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e2cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11e2ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11e2d0: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x11e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11e2d4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e2d8: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x11e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e2dc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11e2dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11e2e0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x11e2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11e2e4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11e2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11e2e8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x11e2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11e2ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x11e2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11e2f0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x11e2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11e2f4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x11e2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11e2f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11e2fc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x11e2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e300: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x11e300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e304: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11e304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11e308: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x11e308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x11e30c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x11e30cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x11e310: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11e310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11e314: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x11e314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11e318: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x11e318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11e31c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x11e31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e320: 0xb2460107  sdl         $a2, 0x107($s2)
    ctx->pc = 0x11e320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e324: 0xb6460100  sdr         $a2, 0x100($s2)
    ctx->pc = 0x11e324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e328: 0xae470108  sw          $a3, 0x108($s2)
    ctx->pc = 0x11e328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 7));
    // 0x11e32c: 0x26500100  addiu       $s0, $s2, 0x100
    ctx->pc = 0x11e32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x11e330: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x11e330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x11e334: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x11e334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e338: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x11e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e33c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11e33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11e340: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x11e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e344: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x11e344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x11e348: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x11e348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11e34c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e354: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x11e354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e358: 0x0  nop
    ctx->pc = 0x11e358u;
    // NOP
    // 0x11e35c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x11E35Cu;
    {
        const bool branch_taken_0x11e35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E35Cu;
        // 0x11e360: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e35c) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E364u;
    // 0x11e364: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x11e364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11e368: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x11e368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11e36c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x11e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x11e370: 0xb2440107  sdl         $a0, 0x107($s2)
    ctx->pc = 0x11e370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e374: 0xb6440100  sdr         $a0, 0x100($s2)
    ctx->pc = 0x11e374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e378: 0xae450108  sw          $a1, 0x108($s2)
    ctx->pc = 0x11e378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 5));
    // 0x11e37c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x11e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_11e380:
    // 0x11e380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e384: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x11E384u;
    SET_GPR_U32(ctx, 31, 0x11E38Cu);
    ctx->pc = 0x11E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E384u;
    // 0x11e388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x11E384u, 0x11E38Cu)) {
        return;
    }
    ctx->pc = 0x11E38Cu;
label_11e38c:
    // 0x11e38c: 0x0  nop
    ctx->pc = 0x11e38cu;
    // NOP
    // 0x11e390: 0x0  nop
    ctx->pc = 0x11e390u;
    // NOP
    // 0x11e394: 0x46000044  c1          0x44
    ctx->pc = 0x11e394u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x11e398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e39c: 0x0  nop
    ctx->pc = 0x11e39cu;
    // NOP
    // 0x11e3a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11e3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e3a4: 0x0  nop
    ctx->pc = 0x11e3a4u;
    // NOP
    // 0x11e3a8: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x11E3A8u;
    {
        const bool branch_taken_0x11e3a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3A8u;
        // 0x11e3ac: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3a8) {
            ctx->pc = 0x11E51Cu;
            goto label_11e51c;
        }
    }
    ctx->pc = 0x11E3B0u;
    // 0x11e3b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e3b4: 0x0  nop
    ctx->pc = 0x11e3b4u;
    // NOP
label_11e3b8:
    // 0x11e3b8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e3bc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x11e3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e3c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11e3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11e3c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11e3c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11e3c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11e3c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11e3cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x11e3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x11e3d0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x11e3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x11e3d4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11e3d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x11e3d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e3dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11e3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11e3e0: 0x0  nop
    ctx->pc = 0x11e3e0u;
    // NOP
    // 0x11e3e4: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x11e3e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11e3e8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11e3ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x11e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11e3f0: 0x4600a906  mov.s       $f4, $f21
    ctx->pc = 0x11e3f0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[21]);
    // 0x11e3f4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x11e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e3f8: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x11e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11e3fc: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x11e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e400: 0xc6410100  lwc1        $f1, 0x100($s2)
    ctx->pc = 0x11e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e404: 0x460620c2  mul.s       $f3, $f4, $f6
    ctx->pc = 0x11e404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x11e408: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x11e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e40c: 0x46141142  mul.s       $f5, $f2, $f20
    ctx->pc = 0x11e40cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x11e410: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11e410u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11e414: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11e414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11e418: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11e418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11e41c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11e41cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x11e420: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x11e420u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x11e424: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11e424u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11e428: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11e428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11e42c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x11e42cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11e430: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11e430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11e434: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11e434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11e438: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x11e438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e440: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x11E440u;
    SET_GPR_U32(ctx, 31, 0x11E448u);
    ctx->pc = 0x11E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E440u;
    // 0x11e444: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x11E440u, 0x11E448u)) {
        return;
    }
    ctx->pc = 0x11E448u;
label_11e448:
    // 0x11e448: 0x0  nop
    ctx->pc = 0x11e448u;
    // NOP
    // 0x11e44c: 0x0  nop
    ctx->pc = 0x11e44cu;
    // NOP
    // 0x11e450: 0x46000004  c1          0x4
    ctx->pc = 0x11e450u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x11e454: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x11e454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e458: 0x0  nop
    ctx->pc = 0x11e458u;
    // NOP
    // 0x11e45c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x11E45Cu;
    {
        const bool branch_taken_0x11e45c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E45Cu;
        // 0x11e460: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e45c) {
            ctx->pc = 0x11E508u;
            goto label_11e508;
        }
    }
    ctx->pc = 0x11E464u;
    // 0x11e464: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e468:
    // 0x11e468: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e46c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x11e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e470: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11e470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11e474: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11e474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11e478: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11e478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11e47c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x11e47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x11e480: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x11e480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x11e484: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11e484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x11e488: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11e48c: 0x244645b0  addiu       $a2, $v0, 0x45B0
    ctx->pc = 0x11e48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
    // 0x11e490: 0x6a4300e7  ldl         $v1, 0xE7($s2)
    ctx->pc = 0x11e490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11e494: 0x6e4300e0  ldr         $v1, 0xE0($s2)
    ctx->pc = 0x11e494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11e498: 0x8e4400e8  lw          $a0, 0xE8($s2)
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x11e49c: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x11e49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e4a0: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x11e4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e4a4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x11e4a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B45B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B45B8u, _value); } while (0);
    // 0x11e4a8: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x11e4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x11e4ac: 0x262445a0  addiu       $a0, $s1, 0x45A0
    ctx->pc = 0x11e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17824));
    // 0x11e4b0: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x11e4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11e4b4: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x11e4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11e4b8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x11e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e4bc: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x11e4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e4c0: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x11e4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e4c4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x11e4c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B45A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B45A8u, _value); } while (0);
    // 0x11e4c8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11e4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11e4cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11e4d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x11e4d4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x11e4d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x11e4d8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x11e4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11e4dc: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x11e4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11e4e0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x11e4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e4e4: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x11e4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e4e8: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x11e4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e4ec: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x11e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x11e4f0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11E4F0u;
    SET_GPR_U32(ctx, 31, 0x11E4F8u);
    ctx->pc = 0x11E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4F0u;
    // 0x11e4f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11EBC0u, 0x11E4F0u, 0x11E4F8u)) {
        return;
    }
    ctx->pc = 0x11E4F8u;
label_11e4f8:
    // 0x11e4f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11E4F8u;
    {
        const bool branch_taken_0x11e4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F8u;
        // 0x11e4fc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f8) {
            ctx->pc = 0x11E534u;
            goto label_11e534;
        }
    }
    ctx->pc = 0x11E500u;
    // 0x11e500: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11E500u;
    {
        const bool branch_taken_0x11e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E500u;
        // 0x11e504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e500) {
            ctx->pc = 0x11E5E8u;
            goto label_11e5e8;
        }
    }
    ctx->pc = 0x11E508u;
label_11e508:
    // 0x11e508: 0x0  nop
    ctx->pc = 0x11e508u;
    // NOP
    // 0x11e50c: 0x0  nop
    ctx->pc = 0x11e50cu;
    // NOP
    // 0x11e510: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x11e510u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x11e514: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x11E514u;
    {
        const bool branch_taken_0x11e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E514u;
        // 0x11e518: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e514) {
            ctx->pc = 0x11E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e468;
        }
    }
    ctx->pc = 0x11E51Cu;
label_11e51c:
    // 0x11e51c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e520: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e524: 0x0  nop
    ctx->pc = 0x11e524u;
    // NOP
    // 0x11e528: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x11e528u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x11e52c: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x11E52Cu;
    {
        const bool branch_taken_0x11e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E52Cu;
        // 0x11e530: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e52c) {
            ctx->pc = 0x11E3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e3b8;
        }
    }
    ctx->pc = 0x11E534u;
label_11e534:
    // 0x11e534: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x11e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e538: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x11e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e53c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11e53cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11e540: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11e540u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11e544: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11e544u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11e548: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x11e548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11e54c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x11e54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11e550: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x11e550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11e554: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x11e554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11e558: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x11e558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11e55c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11e560: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x11e560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e564: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x11e564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e568: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x11e568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x11e56c: 0x262545a0  addiu       $a1, $s1, 0x45A0
    ctx->pc = 0x11e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17824));
    // 0x11e570: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x11e570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11e574: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x11e574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11e578: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x11e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11e57c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x11e57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e580: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x11e580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e584: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x11e584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x11e588: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e58c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x11e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e590: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11e590u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11e594: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e598: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11e598u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11e59c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11e59cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11e5a0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x11e5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11e5a4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x11e5a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11e5a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x11e5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11e5ac: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x11e5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11e5b0: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x11e5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11e5b4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x11e5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11e5b8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x11e5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e5bc: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x11e5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e5c0: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x11e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x11e5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11e5c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x11e5cc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x11e5ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x11e5d0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11E5D0u;
    SET_GPR_U32(ctx, 31, 0x11E5D8u);
    ctx->pc = 0x11E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5D0u;
    // 0x11e5d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11EBC0u, 0x11E5D0u, 0x11E5D8u)) {
        return;
    }
    ctx->pc = 0x11E5D8u;
label_11e5d8:
    // 0x11e5d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11e5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5dc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E5DCu;
    {
        const bool branch_taken_0x11e5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5DCu;
        // 0x11e5e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5dc) {
            ctx->pc = 0x11E5E8u;
            goto label_11e5e8;
        }
    }
    ctx->pc = 0x11E5E4u;
    // 0x11e5e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e5e8:
    // 0x11e5e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11e5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e5ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11e5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e5f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11e5f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e5f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11e5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e5f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e5fc: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x11e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11e600: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x11e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11e604: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x11e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11e608: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E60Cu;
        // 0x11e610: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E614u;
    // 0x11e614: 0x0  nop
    ctx->pc = 0x11e614u;
    // NOP
    ctx->pc = 0x11e618u;
}
