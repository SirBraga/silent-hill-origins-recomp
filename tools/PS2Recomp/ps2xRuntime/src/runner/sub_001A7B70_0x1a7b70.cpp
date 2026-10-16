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

// Function: sub_001A7B70
// Address: 0x1a7b70 - 0x1a7e40
void sub_001A7B70_0x1a7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7B70_0x1a7b70");
#endif

    switch (ctx->pc) {
        case 0x1a7cb0u: goto label_1a7cb0;
        case 0x1a7d08u: goto label_1a7d08;
        case 0x1a7d68u: goto label_1a7d68;
        default: break;
    }

    ctx->pc = 0x1a7b70u;

    // 0x1a7b70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a7b74: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1a7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a7b78: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a7b7c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1a7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a7b80: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a7b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a7b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b88: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a7b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a7b8c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1a7b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7b90: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1a7b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7b94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7b98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a7b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7b9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7ba0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a7ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7ba4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7ba8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7bac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7bb0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7bb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7bb8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a7bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a7bbc: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1a7bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7bc0: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1a7bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7bc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a7bc8: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1a7bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7bcc: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1a7bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7bd0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1a7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1a7bd4: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x1a7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1a7bd8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1a7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7bdc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1a7bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7be0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1a7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7be4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7be8: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x1a7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7bec: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a7becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7bf0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7bf4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a7bf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a7bf8: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1a7bf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7bfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7c00: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a7c00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a7c04: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1a7c04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a7c08: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x1a7c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a7c0c: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x1a7c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7c10: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1a7c10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a7c14: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1a7c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c18: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1a7c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c1c: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x1a7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x1a7c20: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1a7c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1a7c24: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1a7c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x1a7c28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a7c2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a7c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a7c30: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a7c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7c34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a7c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a7c38: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a7c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7c3c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7c40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a7c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a7c44: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7c48: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7c4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a7c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a7c50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a7c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a7c54: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1a7c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7c58: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1a7c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7c5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a7c60: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a7c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c64: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a7c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c68: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a7c6c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7c70: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7c74: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7c78: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x1a7c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1a7c7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a7c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7c80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7c84: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x1a7c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a7c88: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x1a7c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a7c8c: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x1a7c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c90: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x1a7c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c94: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x1a7c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7c98: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x1a7c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a7c9c: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x1a7c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ca0: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x1a7ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ca4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1a7ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ca8: 0xc069cd6  jal         func_1A7358
    ctx->pc = 0x1A7CA8u;
    SET_GPR_U32(ctx, 31, 0x1A7CB0u);
    ctx->pc = 0x1A7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CA8u;
    // 0x1a7cac: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7358u, 0x1A7CA8u, 0x1A7CB0u)) {
        return;
    }
    ctx->pc = 0x1A7CB0u;
label_1a7cb0:
    // 0x1a7cb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7cb8: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A7CB8u;
    {
        const bool branch_taken_0x1a7cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CB8u;
        // 0x1a7cbc: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cb8) {
            ctx->pc = 0x1A7E0Cu;
            goto label_1a7e0c;
        }
    }
    ctx->pc = 0x1A7CC0u;
    // 0x1a7cc0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7cc4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7cc8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7ccc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a7cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a7cd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a7cd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1a7cd4: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x1a7cd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a7cd8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a7cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7cdc: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x1a7cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a7ce0: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1a7ce0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1a7ce4: 0x0  nop
    ctx->pc = 0x1a7ce4u;
    // NOP
    // 0x1a7ce8: 0x0  nop
    ctx->pc = 0x1a7ce8u;
    // NOP
    // 0x1a7cec: 0x460c0504  c1          0xC0504
    ctx->pc = 0x1a7cecu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a7cf0: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x1a7cf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7cf4: 0x0  nop
    ctx->pc = 0x1a7cf4u;
    // NOP
    // 0x1a7cf8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7CF8u;
    {
        const bool branch_taken_0x1a7cf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CF8u;
        // 0x1a7cfc: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cf8) {
            ctx->pc = 0x1A7D10u;
            goto label_1a7d10;
        }
    }
    ctx->pc = 0x1A7D00u;
    // 0x1a7d00: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A7D00u;
    SET_GPR_U32(ctx, 31, 0x1A7D08u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A7D00u, 0x1A7D08u)) {
        return;
    }
    ctx->pc = 0x1A7D08u;
label_1a7d08:
    // 0x1a7d08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a7d08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a7d0c: 0x0  nop
    ctx->pc = 0x1a7d0cu;
    // NOP
label_1a7d10:
    // 0x1a7d10: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1a7d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7d14: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1a7d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7d18: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a7d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a7d1c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a7d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a7d20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a7d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a7d24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a7d24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7d28: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x1a7d28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7d2c: 0x0  nop
    ctx->pc = 0x1a7d2cu;
    // NOP
    // 0x1a7d30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7D30u;
    {
        const bool branch_taken_0x1a7d30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7d30) {
            ctx->pc = 0x1A7D44u;
            goto label_1a7d44;
        }
    }
    ctx->pc = 0x1A7D38u;
    // 0x1a7d38: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1a7d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7d3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A7D3Cu;
    {
        const bool branch_taken_0x1a7d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D3Cu;
        // 0x1a7d40: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d3c) {
            ctx->pc = 0x1A7D98u;
            goto label_1a7d98;
        }
    }
    ctx->pc = 0x1A7D44u;
label_1a7d44:
    // 0x1a7d44: 0x0  nop
    ctx->pc = 0x1a7d44u;
    // NOP
    // 0x1a7d48: 0x0  nop
    ctx->pc = 0x1a7d48u;
    // NOP
    // 0x1a7d4c: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x1a7d4cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a7d50: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x1a7d50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7d54: 0x0  nop
    ctx->pc = 0x1a7d54u;
    // NOP
    // 0x1a7d58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7D58u;
    {
        const bool branch_taken_0x1a7d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7d58) {
            ctx->pc = 0x1A7D6Cu;
            goto label_1a7d6c;
        }
    }
    ctx->pc = 0x1A7D60u;
    // 0x1a7d60: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A7D60u;
    SET_GPR_U32(ctx, 31, 0x1A7D68u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A7D60u, 0x1A7D68u)) {
        return;
    }
    ctx->pc = 0x1A7D68u;
label_1a7d68:
    // 0x1a7d68: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1a7d68u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_1a7d6c:
    // 0x1a7d6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7d74: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1a7d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7d78: 0x0  nop
    ctx->pc = 0x1a7d78u;
    // NOP
    // 0x1a7d7c: 0x0  nop
    ctx->pc = 0x1a7d7cu;
    // NOP
    // 0x1a7d80: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1a7d80u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1a7d84: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7d88: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a7d88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a7d8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a7d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7d90: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1a7d90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7d94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a7d98:
    // 0x1a7d98: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1a7d9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7da0: 0x0  nop
    ctx->pc = 0x1a7da0u;
    // NOP
    // 0x1a7da4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a7da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7da8: 0x0  nop
    ctx->pc = 0x1a7da8u;
    // NOP
    // 0x1a7dac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7DACu;
    {
        const bool branch_taken_0x1a7dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DACu;
        // 0x1a7db0: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dac) {
            ctx->pc = 0x1A7DC4u;
            goto label_1a7dc4;
        }
    }
    ctx->pc = 0x1A7DB4u;
    // 0x1a7db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7dbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7DBCu;
    {
        const bool branch_taken_0x1a7dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DBCu;
        // 0x1a7dc0: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dbc) {
            ctx->pc = 0x1A7DD8u;
            goto label_1a7dd8;
        }
    }
    ctx->pc = 0x1A7DC4u;
label_1a7dc4:
    // 0x1a7dc4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1a7dc8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a7dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a7dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7dd0: 0x0  nop
    ctx->pc = 0x1a7dd0u;
    // NOP
    // 0x1a7dd4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a7dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a7dd8:
    // 0x1a7dd8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7ddc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a7ddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a7de0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a7de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7de4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1a7de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7de8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7dec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a7decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7df4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1a7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7df8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7dfc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1a7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7e00: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a7e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a7e04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7E04u;
    {
        const bool branch_taken_0x1a7e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E04u;
        // 0x1a7e08: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e04) {
            ctx->pc = 0x1A7E20u;
            goto label_1a7e20;
        }
    }
    ctx->pc = 0x1A7E0Cu;
label_1a7e0c:
    // 0x1a7e0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7E0Cu;
    {
        const bool branch_taken_0x1a7e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E0Cu;
        // 0x1a7e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e0c) {
            ctx->pc = 0x1A7E28u;
            goto label_1a7e28;
        }
    }
    ctx->pc = 0x1A7E14u;
    // 0x1a7e14: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7e1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7e20:
    // 0x1a7e20: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1a7e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a7e24: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1a7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1a7e28:
    // 0x1a7e28: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a7e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7e2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a7e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7e30: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E34u;
        // 0x1a7e38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7E3Cu;
    // 0x1a7e3c: 0x0  nop
    ctx->pc = 0x1a7e3cu;
    // NOP
    ctx->pc = 0x1a7e40u;
}
