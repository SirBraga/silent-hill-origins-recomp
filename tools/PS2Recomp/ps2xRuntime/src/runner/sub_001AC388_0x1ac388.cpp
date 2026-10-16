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

// Function: sub_001AC388
// Address: 0x1ac388 - 0x1ac890
void sub_001AC388_0x1ac388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC388_0x1ac388");
#endif

    switch (ctx->pc) {
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7c4u: goto label_1ac7c4;
        default: break;
    }

    ctx->pc = 0x1ac388u;

    // 0x1ac388: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ac388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1ac38c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1ac38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1ac390: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1ac390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1ac394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ac394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac398: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1ac398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1ac39c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ac39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3a0: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x1ac3a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1ac3a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ac3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3a8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1ac3a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1ac3ac: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1ac3acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1ac3b0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1ac3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1ac3b4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1ac3b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1ac3b8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1ac3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1ac3bc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ac3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1ac3c0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1ac3c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ac3c4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1ac3c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1ac3c8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1ac3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac3cc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1ac3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac3d0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1ac3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac3d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1ac3d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1ac3d8: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1ac3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ac3dc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1ac3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac3e0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1ac3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac3e4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1ac3e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1ac3e8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ac3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ac3ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1ac3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1ac3f0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1ac3f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ac3f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ac3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ac3f8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1ac3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac3fc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1ac3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac400: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ac400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac404: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ac404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac408: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ac408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac40c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ac40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ac410: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1ac410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac414: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1ac414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac418: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac41c: 0xb2660007  sdl         $a2, 0x7($s3)
    ctx->pc = 0x1ac41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac420: 0xb6660000  sdr         $a2, 0x0($s3)
    ctx->pc = 0x1ac420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac424: 0xae670008  sw          $a3, 0x8($s3)
    ctx->pc = 0x1ac424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 7));
    // 0x1ac428: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ac428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1ac42c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1ac42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac430: 0xc6740004  lwc1        $f20, 0x4($s3)
    ctx->pc = 0x1ac430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac434: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ac434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ac438: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1ac438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac43c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ac43cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ac440: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ac440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ac444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ac444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac448: 0x0  nop
    ctx->pc = 0x1ac448u;
    // NOP
    // 0x1ac44c: 0x0  nop
    ctx->pc = 0x1ac44cu;
    // NOP
    // 0x1ac450: 0x46000584  c1          0x584
    ctx->pc = 0x1ac450u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ac454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ac454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac458: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1AC458u;
    SET_GPR_U32(ctx, 31, 0x1AC460u);
    ctx->pc = 0x1AC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC458u;
    // 0x1ac45c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1AC458u, 0x1AC460u)) {
        return;
    }
    ctx->pc = 0x1AC460u;
label_1ac460:
    // 0x1ac460: 0x0  nop
    ctx->pc = 0x1ac460u;
    // NOP
    // 0x1ac464: 0x0  nop
    ctx->pc = 0x1ac464u;
    // NOP
    // 0x1ac468: 0x46000044  c1          0x44
    ctx->pc = 0x1ac468u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ac46c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1ac46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac470: 0x0  nop
    ctx->pc = 0x1ac470u;
    // NOP
    // 0x1ac474: 0x450100bc  bc1t        . + 4 + (0xBC << 2)
    ctx->pc = 0x1AC474u;
    {
        const bool branch_taken_0x1ac474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC474u;
        // 0x1ac478: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac474) {
            ctx->pc = 0x1AC768u;
            goto label_1ac768;
        }
    }
    ctx->pc = 0x1AC47Cu;
    // 0x1ac47c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1ac47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac480:
    // 0x1ac480: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1ac480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac484: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1ac484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac488: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ac488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ac48c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ac48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1ac490: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ac490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1ac494: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1ac494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1ac498: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1ac498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1ac49c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ac4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac4a4: 0x0  nop
    ctx->pc = 0x1ac4a4u;
    // NOP
    // 0x1ac4a8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ac4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1ac4ac: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1ac4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac4b0: 0x0  nop
    ctx->pc = 0x1ac4b0u;
    // NOP
    // 0x1ac4b4: 0x450000e8  bc1f        . + 4 + (0xE8 << 2)
    ctx->pc = 0x1AC4B4u;
    {
        const bool branch_taken_0x1ac4b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B4u;
        // 0x1ac4b8: 0xe6620008  swc1        $f2, 0x8($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4b4) {
            ctx->pc = 0x1AC858u;
            goto label_1ac858;
        }
    }
    ctx->pc = 0x1AC4BCu;
    // 0x1ac4bc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1ac4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ac4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4c4: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x1ac4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ac4c8: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x1ac4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ac4cc: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ac4d0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1ac4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac4d4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1ac4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac4d8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1ac4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1ac4dc: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1AC4DCu;
    SET_GPR_U32(ctx, 31, 0x1AC4E4u);
    ctx->pc = 0x1AC4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4DCu;
    // 0x1ac4e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1AC4DCu, 0x1AC4E4u)) {
        return;
    }
    ctx->pc = 0x1AC4E4u;
label_1ac4e4:
    // 0x1ac4e4: 0x0  nop
    ctx->pc = 0x1ac4e4u;
    // NOP
    // 0x1ac4e8: 0x0  nop
    ctx->pc = 0x1ac4e8u;
    // NOP
    // 0x1ac4ec: 0x46000044  c1          0x44
    ctx->pc = 0x1ac4ecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ac4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ac4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac4f4: 0x0  nop
    ctx->pc = 0x1ac4f4u;
    // NOP
    // 0x1ac4f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac4fc: 0x0  nop
    ctx->pc = 0x1ac4fcu;
    // NOP
    // 0x1ac500: 0x45010093  bc1t        . + 4 + (0x93 << 2)
    ctx->pc = 0x1AC500u;
    {
        const bool branch_taken_0x1ac500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC500u;
        // 0x1ac504: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac500) {
            ctx->pc = 0x1AC750u;
            goto label_1ac750;
        }
    }
    ctx->pc = 0x1AC508u;
    // 0x1ac508: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ac508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac50c: 0x0  nop
    ctx->pc = 0x1ac50cu;
    // NOP
label_1ac510:
    // 0x1ac510: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ac510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac514: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1ac514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac518: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ac518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ac51c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ac51cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1ac520: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ac520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1ac524: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1ac524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ac528: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1ac528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1ac52c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1ac52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1ac530: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1ac530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1ac534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac538: 0x0  nop
    ctx->pc = 0x1ac538u;
    // NOP
    // 0x1ac53c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1ac53cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac540: 0x0  nop
    ctx->pc = 0x1ac540u;
    // NOP
    // 0x1ac544: 0x450000b6  bc1f        . + 4 + (0xB6 << 2)
    ctx->pc = 0x1AC544u;
    {
        const bool branch_taken_0x1ac544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC544u;
        // 0x1ac548: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac544) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC54Cu;
    // 0x1ac54c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1ac54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac550: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x1ac550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ac554: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ac554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac558: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x1ac558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1ac55c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1ac55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1ac560: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1ac560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac564: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1ac564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1ac568: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x1ac568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ac56c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1ac56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1ac570: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ac570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ac574: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1ac574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1ac578: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ac578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ac57c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ac57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac580: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1ac580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac584: 0x0  nop
    ctx->pc = 0x1ac584u;
    // NOP
    // 0x1ac588: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
    ctx->pc = 0x1AC588u;
    {
        const bool branch_taken_0x1ac588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac588) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC590u;
    // 0x1ac590: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1ac590u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1ac594: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x1ac594u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ac598: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x1ac598u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x1ac59c: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x1ac59cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ac5a0: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x1ac5a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ac5a4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1ac5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ac5a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ac5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ac5ac: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x1ac5acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ac5b0: 0x6a420037  ldl         $v0, 0x37($s2)
    ctx->pc = 0x1ac5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac5b4: 0x6e420030  ldr         $v0, 0x30($s2)
    ctx->pc = 0x1ac5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac5b8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1ac5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1ac5bc: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1ac5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac5c0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1ac5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac5c4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1ac5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1ac5c8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1ac5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac5cc: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x1ac5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac5d0: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x1ac5d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1ac5d4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1ac5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac5d8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1ac5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1ac5dc: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x1ac5dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1ac5e0: 0x46070042  mul.s       $f1, $f0, $f7
    ctx->pc = 0x1ac5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1ac5e4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1ac5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1ac5e8: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x1ac5e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1ac5ec: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1ac5ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1ac5f0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1ac5f0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1ac5f4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1ac5f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1ac5f8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1ac5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ac5fc: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x1ac5fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ac600: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1ac600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ac604: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1ac604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac608: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ac608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac60c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1ac60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1ac610: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1ac610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac614: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1ac614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x1ac618: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ac618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ac61c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1ac61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ac620: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1ac620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ac624: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ac624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ac628: 0x6ba60077  ldl         $a2, 0x77($sp)
    ctx->pc = 0x1ac628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac62c: 0x6fa60070  ldr         $a2, 0x70($sp)
    ctx->pc = 0x1ac62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac630: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ac634: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x1ac634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac638: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x1ac638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac63c: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x1ac63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x1ac640: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x1ac640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ac644: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1ac644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ac648: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1ac648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac64c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1ac64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac650: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1ac650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac654: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1ac654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac658: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1ac658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1ac65c: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x1ac65cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1ac660: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1ac660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1ac664: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1ac664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ac668: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1ac668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ac66c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ac66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ac670: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x1ac670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ac674: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x1ac674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ac678: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1ac678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ac67c: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1ac67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac680: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1ac680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac684: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1ac684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1ac688: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1ac688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac68c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1ac68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac690: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1ac690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1ac694: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1ac694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac698: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1ac698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x1ac69c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ac69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ac6a0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1ac6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ac6a4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x1ac6a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1ac6a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1ac6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1ac6ac: 0x6ba70087  ldl         $a3, 0x87($sp)
    ctx->pc = 0x1ac6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ac6b0: 0x6fa70080  ldr         $a3, 0x80($sp)
    ctx->pc = 0x1ac6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ac6b4: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1ac6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ac6b8: 0xb3a70077  sdl         $a3, 0x77($sp)
    ctx->pc = 0x1ac6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac6bc: 0xb7a70070  sdr         $a3, 0x70($sp)
    ctx->pc = 0x1ac6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac6c0: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x1ac6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x1ac6c4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ac6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac6c8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1ac6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac6cc: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x1ac6ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1ac6d0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1ac6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac6d4: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1ac6d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1ac6d8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1ac6d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1ac6dc: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x1ac6dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ac6e0: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x1ac6e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1ac6e4: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x1ac6e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1ac6e8: 0x6ba40087  ldl         $a0, 0x87($sp)
    ctx->pc = 0x1ac6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ac6ec: 0x6fa40080  ldr         $a0, 0x80($sp)
    ctx->pc = 0x1ac6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ac6f0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1ac6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ac6f4: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x1ac6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac6f8: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x1ac6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac6fc: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1ac6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x1ac700: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ac704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ac704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac708: 0x96440044  lhu         $a0, 0x44($s2)
    ctx->pc = 0x1ac708u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ac70c: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x1ac70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1ac710: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1ac710u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F81B8u));
    // 0x1ac714: 0x6a280007  ldl         $t0, 0x7($s1)
    ctx->pc = 0x1ac714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ac718: 0x6e280000  ldr         $t0, 0x0($s1)
    ctx->pc = 0x1ac718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ac71c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ac71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ac720: 0xb3a80077  sdl         $t0, 0x77($sp)
    ctx->pc = 0x1ac720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac724: 0xb7a80070  sdr         $t0, 0x70($sp)
    ctx->pc = 0x1ac724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac728: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1ac728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1ac72c: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AC72Cu;
    {
        const bool branch_taken_0x1ac72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC72Cu;
        // 0x1ac730: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac72c) {
            ctx->pc = 0x1AC788u;
            goto label_1ac788;
        }
    }
    ctx->pc = 0x1AC734u;
    // 0x1ac734: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac738: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ac738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ac73c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AC73Cu;
    {
        const bool branch_taken_0x1ac73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC73Cu;
        // 0x1ac740: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac73c) {
            ctx->pc = 0x1AC780u;
            goto label_1ac780;
        }
    }
    ctx->pc = 0x1AC744u;
    // 0x1ac744: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AC744u;
    {
        const bool branch_taken_0x1ac744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC744u;
        // 0x1ac748: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac744) {
            ctx->pc = 0x1AC78Cu;
            goto label_1ac78c;
        }
    }
    ctx->pc = 0x1AC74Cu;
    // 0x1ac74c: 0x0  nop
    ctx->pc = 0x1ac74cu;
    // NOP
label_1ac750:
    // 0x1ac750: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac758: 0x0  nop
    ctx->pc = 0x1ac758u;
    // NOP
    // 0x1ac75c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1ac75cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1ac760: 0x1000ff6b  b           . + 4 + (-0x95 << 2)
    ctx->pc = 0x1AC760u;
    {
        const bool branch_taken_0x1ac760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC760u;
        // 0x1ac764: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac760) {
            ctx->pc = 0x1AC510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac510;
        }
    }
    ctx->pc = 0x1AC768u;
label_1ac768:
    // 0x1ac768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac76c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac770: 0x0  nop
    ctx->pc = 0x1ac770u;
    // NOP
    // 0x1ac774: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1ac774u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1ac778: 0x1000ff41  b           . + 4 + (-0xBF << 2)
    ctx->pc = 0x1AC778u;
    {
        const bool branch_taken_0x1ac778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac778) {
            ctx->pc = 0x1AC480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac480;
        }
    }
    ctx->pc = 0x1AC780u;
label_1ac780:
    // 0x1ac780: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1ac780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ac784: 0x66a021  addu        $s4, $v1, $a2
    ctx->pc = 0x1ac784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ac788:
    // 0x1ac788: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1ac788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ac78c:
    // 0x1ac78c: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1ac78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ac790: 0x261081b0  addiu       $s0, $s0, -0x7E50
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934960));
    // 0x1ac794: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ac798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac79c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ac7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7a4: 0xc06a066  jal         func_1A8198
    ctx->pc = 0x1AC7A4u;
    SET_GPR_U32(ctx, 31, 0x1AC7ACu);
    ctx->pc = 0x1AC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7A4u;
    // 0x1ac7a8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8198u, 0x1AC7A4u, 0x1AC7ACu)) {
        return;
    }
    ctx->pc = 0x1AC7ACu;
label_1ac7ac:
    // 0x1ac7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ac7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ac7b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7bc: 0xc06a066  jal         func_1A8198
    ctx->pc = 0x1AC7BCu;
    SET_GPR_U32(ctx, 31, 0x1AC7C4u);
    ctx->pc = 0x1AC7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7BCu;
    // 0x1ac7c0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8198u, 0x1AC7BCu, 0x1AC7C4u)) {
        return;
    }
    ctx->pc = 0x1AC7C4u;
label_1ac7c4:
    // 0x1ac7c4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ac7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac7c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ac7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac7cc: 0x0  nop
    ctx->pc = 0x1ac7ccu;
    // NOP
    // 0x1ac7d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ac7d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac7d4: 0x0  nop
    ctx->pc = 0x1ac7d4u;
    // NOP
    // 0x1ac7d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC7D8u;
    {
        const bool branch_taken_0x1ac7d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D8u;
        // 0x1ac7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7d8) {
            ctx->pc = 0x1AC800u;
            goto label_1ac800;
        }
    }
    ctx->pc = 0x1AC7E0u;
    // 0x1ac7e0: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1ac7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ac7e4: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1ac7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ac7e8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1ac7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac7ec: 0xb2640007  sdl         $a0, 0x7($s3)
    ctx->pc = 0x1ac7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac7f0: 0xb6640000  sdr         $a0, 0x0($s3)
    ctx->pc = 0x1ac7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac7f4: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x1ac7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x1ac7f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AC7F8u;
    {
        const bool branch_taken_0x1ac7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F8u;
        // 0x1ac7fc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7f8) {
            ctx->pc = 0x1AC860u;
            goto label_1ac860;
        }
    }
    ctx->pc = 0x1AC800u;
label_1ac800:
    // 0x1ac800: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x1ac800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ac804: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x1ac804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ac808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ac808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac80c: 0xb2680007  sdl         $t0, 0x7($s3)
    ctx->pc = 0x1ac80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac810: 0xb6680000  sdr         $t0, 0x0($s3)
    ctx->pc = 0x1ac810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac814: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1ac814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1ac818: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AC818u;
    {
        const bool branch_taken_0x1ac818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC818u;
        // 0x1ac81c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac818) {
            ctx->pc = 0x1AC85Cu;
            goto label_1ac85c;
        }
    }
    ctx->pc = 0x1AC820u;
label_1ac820:
    // 0x1ac820: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ac820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ac824: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ac824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ac828: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ac828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ac82c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1ac82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac830: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1ac830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac834: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ac834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1ac838: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1ac838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac83c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ac83cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1ac840: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ac840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ac844: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1ac844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1ac848: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x1ac848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1ac84c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1ac84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1ac850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AC850u;
    {
        const bool branch_taken_0x1ac850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC850u;
        // 0x1ac854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac850) {
            ctx->pc = 0x1AC85Cu;
            goto label_1ac85c;
        }
    }
    ctx->pc = 0x1AC858u;
label_1ac858:
    // 0x1ac858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac85c:
    // 0x1ac85c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1ac85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1ac860:
    // 0x1ac860: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1ac860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ac864: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1ac864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ac868: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1ac868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ac86c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1ac86cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ac870: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ac870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ac874: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x1ac874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ac878: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1ac878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ac87c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1ac87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ac880: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1ac880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac884: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC884u;
        // 0x1ac888: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC88Cu;
    // 0x1ac88c: 0x0  nop
    ctx->pc = 0x1ac88cu;
    // NOP
    ctx->pc = 0x1ac890u;
}
