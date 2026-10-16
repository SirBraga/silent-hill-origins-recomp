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

// Function: sub_001A5940
// Address: 0x1a5940 - 0x1a5b88
void sub_001A5940_0x1a5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5940_0x1a5940");
#endif

    ctx->pc = 0x1a5940u;

    // 0x1a5940: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a5944: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1a5944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a5948: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a594c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5950: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1a5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a5958: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a5958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a595c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5960: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a5960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5964: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5968: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a5968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a596c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5970: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5974: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a5978: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a5978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a597c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a597cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a5980: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a5980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a5984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5988: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1a5988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a598c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1a598cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5990: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1a5990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1a5994: 0x24a2001c  addiu       $v0, $a1, 0x1C
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x1a5998: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a5998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a599c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1a599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a59a0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a59a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a59a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a59a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a59a8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a59ac: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a59acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a59b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a59b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a59b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a59b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a59b8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a59b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a59bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a59bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a59c0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a59c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a59c4: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1a59c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a59c8: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a59c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a59cc: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a59ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a59d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a59d4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a59d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a59d8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a59d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a59dc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a59e0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1a59e4: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1a59e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x1a59e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a59e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a59ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a59f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a59f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a59f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a59f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a59f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a59fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a59fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5a00: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a5a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a5a04: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a5a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a5a08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5a0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a5a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a5a10: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a5a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a5a14: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x1a5a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a5a18: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x1a5a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a5a1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5a20: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x1a5a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5a24: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x1a5a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5a28: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1a5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1a5a2c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a5a30: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1a5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1a5a34: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1a5a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5a38: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1a5a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5a3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a5a40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a5a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a5a44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5a48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5a4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5a4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5a50: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1a5a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a5a54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5a58: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5a5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a5a60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1a5a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a5a64: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x1a5a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a5a68: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x1a5a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a5a6c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a5a70: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x1a5a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5a74: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x1a5a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5a78: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x1a5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x1a5a7c: 0x24c2001c  addiu       $v0, $a2, 0x1C
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x1a5a80: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1a5a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5a84: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1a5a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5a88: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1a5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5a8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5a8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5a90: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x1a5a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5a94: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a5a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a5a98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a5a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5a9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a5a9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a5aa0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1a5aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a5aa4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5aa8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a5aa8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a5aac: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x1a5aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a5ab0: 0x6ba40067  ldl         $a0, 0x67($sp)
    ctx->pc = 0x1a5ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a5ab4: 0x6fa40060  ldr         $a0, 0x60($sp)
    ctx->pc = 0x1a5ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a5ab8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1a5ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a5abc: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1a5abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5ac0: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1a5ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5ac4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1a5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1a5ac8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1a5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a5acc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5ad0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a5ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a5ad4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a5ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a5ad8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5adc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a5adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a5ae0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1a5ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a5ae4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5ae8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a5ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a5aec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1a5aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a5af0: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x1a5af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a5af4: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x1a5af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a5af8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a5af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a5afc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1a5afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5b00: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1a5b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5b04: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a5b08: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5b0c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1a5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5b10: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a5b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5b14: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a5b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a5b18: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1a5b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a5b1c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a5b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5b20: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1a5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5b24: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a5b24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1a5b28: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a5b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a5b2c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a5b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a5b30: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a5b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a5b34: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a5b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a5b38: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a5b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a5b3c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a5b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a5b40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5b44: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1a5b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5b48: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1a5b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5b4c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1a5b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1a5b50: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5b54: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a5b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5b58: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a5b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a5b5c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5b60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a5b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a5b64: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a5b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a5b68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a5b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a5b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a5b70: 0x0  nop
    ctx->pc = 0x1a5b70u;
    // NOP
    // 0x1a5b74: 0x0  nop
    ctx->pc = 0x1a5b74u;
    // NOP
    // 0x1a5b78: 0x46000004  c1          0x4
    ctx->pc = 0x1a5b78u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a5b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B7Cu;
        // 0x1a5b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B84u;
    // 0x1a5b84: 0x0  nop
    ctx->pc = 0x1a5b84u;
    // NOP
    ctx->pc = 0x1a5b88u;
}
