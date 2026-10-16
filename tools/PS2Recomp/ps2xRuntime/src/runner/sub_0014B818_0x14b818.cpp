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

// Function: sub_0014B818
// Address: 0x14b818 - 0x14b938
void sub_0014B818_0x14b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B818_0x14b818");
#endif

    ctx->pc = 0x14b818u;

    // 0x14b818: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14b818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b81c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x14b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14b820: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b824: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b828: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14b82c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14b830: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x14b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b834: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14b838: 0x3c01411c  lui         $at, 0x411C
    ctx->pc = 0x14b838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16668 << 16));
    // 0x14b83c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14b83cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14b840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14b840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14b844: 0x68c30087  ldl         $v1, 0x87($a2)
    ctx->pc = 0x14b844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14b848: 0x6cc30080  ldr         $v1, 0x80($a2)
    ctx->pc = 0x14b848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14b84c: 0x8cc70088  lw          $a3, 0x88($a2)
    ctx->pc = 0x14b84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x14b850: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x14b850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b854: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x14b854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b858: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x14b858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x14b85c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14b85cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14b860: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x14b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b864: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14b868: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x14b868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14b86c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b870: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x14b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14b874: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14b878: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x14b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b87c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b880: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b884: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14b884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14b888: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14b888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14b88c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b890: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14b890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14b894: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x14b894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14b898: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b89c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14b89cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14b8a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x14b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14b8a4: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x14b8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14b8a8: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x14b8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14b8ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b8b0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x14b8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b8b4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x14b8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b8b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14b8bc: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x14b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x14b8c0: 0xc4c10080  lwc1        $f1, 0x80($a2)
    ctx->pc = 0x14b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b8c4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x14b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b8c8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x14b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b8cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14b8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14b8d0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x14b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b8d4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x14b8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14b8d8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x14b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b8dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14b8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14b8e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x14b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x14b8e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x14b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b8e8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14b8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x14b8ec: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x14b8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14b8f0: 0x6ba90037  ldl         $t1, 0x37($sp)
    ctx->pc = 0x14b8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x14b8f4: 0x6fa90030  ldr         $t1, 0x30($sp)
    ctx->pc = 0x14b8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x14b8f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14b8fc: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x14b8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b900: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x14b900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b904: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x14b904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x14b908: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x14b908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14b90c: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x14b90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14b910: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x14b910u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b914: 0xb0c80087  sdl         $t0, 0x87($a2)
    ctx->pc = 0x14b914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b918: 0xb4c80080  sdr         $t0, 0x80($a2)
    ctx->pc = 0x14b918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b91c: 0xacc90088  sw          $t1, 0x88($a2)
    ctx->pc = 0x14b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 9));
    // 0x14b920: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b928: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14b928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14b92c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B92Cu;
        // 0x14b930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B934u;
    // 0x14b934: 0x0  nop
    ctx->pc = 0x14b934u;
    // NOP
    ctx->pc = 0x14b938u;
}
