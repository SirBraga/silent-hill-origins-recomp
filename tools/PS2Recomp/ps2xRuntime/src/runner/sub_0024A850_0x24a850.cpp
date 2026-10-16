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

// Function: sub_0024A850
// Address: 0x24a850 - 0x24ad80
void sub_0024A850_0x24a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A850_0x24a850");
#endif

    ctx->pc = 0x24a850u;

    // 0x24a850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24a854: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24a854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a858: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x24a858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24a85c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x24a85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24a860: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x24a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24a864: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x24a864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a868: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x24a868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a86c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x24a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x24a870: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x24a870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24a874: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x24a874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24a878: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x24a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x24a87c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x24a87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a880: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x24a880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a884: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x24a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x24a888: 0x68a70027  ldl         $a3, 0x27($a1)
    ctx->pc = 0x24a888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24a88c: 0x6ca70020  ldr         $a3, 0x20($a1)
    ctx->pc = 0x24a88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24a890: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x24a894: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x24a894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a898: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x24a898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a89c: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x24a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x24a8a0: 0x68a40037  ldl         $a0, 0x37($a1)
    ctx->pc = 0x24a8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24a8a4: 0x6ca40030  ldr         $a0, 0x30($a1)
    ctx->pc = 0x24a8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24a8a8: 0x8ca70038  lw          $a3, 0x38($a1)
    ctx->pc = 0x24a8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x24a8ac: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x24a8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a8b0: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x24a8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a8b4: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x24a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x24a8b8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a8bc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a8c0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24a8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24a8c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x24a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a8c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24a8c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24a8cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24a8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24a8d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a8d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a8d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24a8d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a8d8: 0x46010044  c1          0x10044
    ctx->pc = 0x24a8d8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x24a8dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a8e0: 0x0  nop
    ctx->pc = 0x24a8e0u;
    // NOP
    // 0x24a8e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24a8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a8e8: 0x0  nop
    ctx->pc = 0x24a8e8u;
    // NOP
    // 0x24a8ec: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24A8ECu;
    {
        const bool branch_taken_0x24a8ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a8ec) {
            ctx->pc = 0x24A8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A8ECu;
            // 0x24a8f0: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A908u;
            goto label_24a908;
        }
    }
    ctx->pc = 0x24A8F4u;
    // 0x24a8f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a8fc: 0x0  nop
    ctx->pc = 0x24a8fcu;
    // NOP
    // 0x24a900: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24a900u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24a904: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_24a908:
    // 0x24a908: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24a908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a90c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a910: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a914: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x24a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a918: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a91c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a91cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a920: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24a920u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24a924: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24a924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24a928: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x24a928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24a92c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x24a92cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24a930: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x24a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a934: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x24a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a938: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24a938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24a93c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x24a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a940: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24a940u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24a944: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24a944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24a948: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a94c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24a94cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a950: 0x46010044  c1          0x10044
    ctx->pc = 0x24a950u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x24a954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a958: 0x0  nop
    ctx->pc = 0x24a958u;
    // NOP
    // 0x24a95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24a95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a960: 0x0  nop
    ctx->pc = 0x24a960u;
    // NOP
    // 0x24a964: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24A964u;
    {
        const bool branch_taken_0x24a964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a964) {
            ctx->pc = 0x24A968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A964u;
            // 0x24a968: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A980u;
            goto label_24a980;
        }
    }
    ctx->pc = 0x24A96Cu;
    // 0x24a96c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a974: 0x0  nop
    ctx->pc = 0x24a974u;
    // NOP
    // 0x24a978: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24a978u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24a97c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24a97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_24a980:
    // 0x24a980: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a984: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x24a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a988: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x24a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a98c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x24a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a994: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a998: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24a998u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24a99c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x24a99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24a9a0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x24a9a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24a9a4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x24a9a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24a9a8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a9ac: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x24a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a9b0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24a9b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24a9b4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x24a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a9b8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24a9b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24a9bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24a9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24a9c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a9c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a9c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24a9c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a9c8: 0x46010044  c1          0x10044
    ctx->pc = 0x24a9c8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x24a9cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a9d0: 0x0  nop
    ctx->pc = 0x24a9d0u;
    // NOP
    // 0x24a9d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24a9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a9d8: 0x0  nop
    ctx->pc = 0x24a9d8u;
    // NOP
    // 0x24a9dc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24A9DCu;
    {
        const bool branch_taken_0x24a9dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a9dc) {
            ctx->pc = 0x24A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A9DCu;
            // 0x24a9e0: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A9F8u;
            goto label_24a9f8;
        }
    }
    ctx->pc = 0x24A9E4u;
    // 0x24a9e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a9e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a9ec: 0x0  nop
    ctx->pc = 0x24a9ecu;
    // NOP
    // 0x24a9f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24a9f0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24a9f4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24a9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_24a9f8:
    // 0x24a9f8: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x24a9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a9fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x24a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aa00: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x24aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24aa04: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aa08: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x24aa08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24aa0c: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x24aa0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x24aa10: 0x46030982  mul.s       $f6, $f1, $f3
    ctx->pc = 0x24aa10u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24aa14: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x24aa14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24aa18: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x24aa18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24aa1c: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x24aa1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24aa20: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aa24: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x24aa24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x24aa28: 0x0  nop
    ctx->pc = 0x24aa28u;
    // NOP
    // 0x24aa2c: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x24aa2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aa30: 0x0  nop
    ctx->pc = 0x24aa30u;
    // NOP
    // 0x24aa34: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x24AA34u;
    {
        const bool branch_taken_0x24aa34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA34u;
        // 0x24aa38: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa34) {
            ctx->pc = 0x24AB50u;
            goto label_24ab50;
        }
    }
    ctx->pc = 0x24AA3Cu;
    // 0x24aa3c: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x24aa3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aa40: 0x0  nop
    ctx->pc = 0x24aa40u;
    // NOP
    // 0x24aa44: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x24AA44u;
    {
        const bool branch_taken_0x24aa44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA44u;
        // 0x24aa48: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa44) {
            ctx->pc = 0x24AB44u;
            goto label_24ab44;
        }
    }
    ctx->pc = 0x24AA4Cu;
    // 0x24aa4c: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x24aa4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aa50: 0x0  nop
    ctx->pc = 0x24aa50u;
    // NOP
    // 0x24aa54: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x24AA54u;
    {
        const bool branch_taken_0x24aa54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA54u;
        // 0x24aa58: 0xc7ab0010  lwc1        $f11, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa54) {
            ctx->pc = 0x24AB34u;
            goto label_24ab34;
        }
    }
    ctx->pc = 0x24AA5Cu;
    // 0x24aa5c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x24aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24aa60: 0x46045802  mul.s       $f0, $f11, $f4
    ctx->pc = 0x24aa60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x24aa64: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x24aa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24aa68: 0x46056842  mul.s       $f1, $f13, $f5
    ctx->pc = 0x24aa68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x24aa6c: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x24aa6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x24aa70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24aa70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24aa74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24aa74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24aa78: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x24aa78u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x24aa7c: 0x46075036  c.le.s      $f10, $f7
    ctx->pc = 0x24aa7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aa80: 0x0  nop
    ctx->pc = 0x24aa80u;
    // NOP
    // 0x24aa84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24AA84u;
    {
        const bool branch_taken_0x24aa84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA84u;
        // 0x24aa88: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa84) {
            ctx->pc = 0x24AA90u;
            goto label_24aa90;
        }
    }
    ctx->pc = 0x24AA8Cu;
    // 0x24aa8c: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x24aa8cu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_24aa90:
    // 0x24aa90: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x24aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24aa94: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x24aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24aa98: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x24aa98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x24aa9c: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x24aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24aaa0: 0x46092882  mul.s       $f2, $f5, $f9
    ctx->pc = 0x24aaa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x24aaa4: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x24aaa4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24aaa8: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x24aaa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x24aaac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24aaacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24aab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24aab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24aab4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x24aab4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x24aab8: 0x46045036  c.le.s      $f10, $f4
    ctx->pc = 0x24aab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aabc: 0x0  nop
    ctx->pc = 0x24aabcu;
    // NOP
    // 0x24aac0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24AAC0u;
    {
        const bool branch_taken_0x24aac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAC0u;
        // 0x24aac4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aac0) {
            ctx->pc = 0x24AACCu;
            goto label_24aacc;
        }
    }
    ctx->pc = 0x24AAC8u;
    // 0x24aac8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x24aac8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_24aacc:
    // 0x24aacc: 0x460b1802  mul.s       $f0, $f3, $f11
    ctx->pc = 0x24aaccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x24aad0: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x24aad0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24aad4: 0x460d4842  mul.s       $f1, $f9, $f13
    ctx->pc = 0x24aad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x24aad8: 0x460c4082  mul.s       $f2, $f8, $f12
    ctx->pc = 0x24aad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x24aadc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24aadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24aae0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24aae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24aae4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x24aae4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x24aae8: 0x46035036  c.le.s      $f10, $f3
    ctx->pc = 0x24aae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aaec: 0x0  nop
    ctx->pc = 0x24aaecu;
    // NOP
    // 0x24aaf0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24AAF0u;
    {
        const bool branch_taken_0x24aaf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAF0u;
        // 0x24aaf4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaf0) {
            ctx->pc = 0x24AAFCu;
            goto label_24aafc;
        }
    }
    ctx->pc = 0x24AAF8u;
    // 0x24aaf8: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24aaf8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24aafc:
    // 0x24aafc: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x24aafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ab00: 0x0  nop
    ctx->pc = 0x24ab00u;
    // NOP
    // 0x24ab04: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24AB04u;
    {
        const bool branch_taken_0x24ab04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB04u;
        // 0x24ab08: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab04) {
            ctx->pc = 0x24AB24u;
            goto label_24ab24;
        }
    }
    ctx->pc = 0x24AB0Cu;
    // 0x24ab0c: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x24ab0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ab10: 0x0  nop
    ctx->pc = 0x24ab10u;
    // NOP
    // 0x24ab14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x24AB14u;
    {
        const bool branch_taken_0x24ab14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB14u;
        // 0x24ab18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab14) {
            ctx->pc = 0x24AB54u;
            goto label_24ab54;
        }
    }
    ctx->pc = 0x24AB1Cu;
    // 0x24ab1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AB1Cu;
    {
        const bool branch_taken_0x24ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB1Cu;
        // 0x24ab20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab1c) {
            ctx->pc = 0x24AB38u;
            goto label_24ab38;
        }
    }
    ctx->pc = 0x24AB24u;
label_24ab24:
    // 0x24ab24: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x24ab24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ab28: 0x0  nop
    ctx->pc = 0x24ab28u;
    // NOP
    // 0x24ab2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AB2Cu;
    {
        const bool branch_taken_0x24ab2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB2Cu;
        // 0x24ab30: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab2c) {
            ctx->pc = 0x24AB44u;
            goto label_24ab44;
        }
    }
    ctx->pc = 0x24AB34u;
label_24ab34:
    // 0x24ab34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24ab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24ab38:
    // 0x24ab38: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24ab3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24AB3Cu;
    {
        const bool branch_taken_0x24ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB3Cu;
        // 0x24ab40: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab3c) {
            ctx->pc = 0x24AB5Cu;
            goto label_24ab5c;
        }
    }
    ctx->pc = 0x24AB44u;
label_24ab44:
    // 0x24ab44: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x24ab44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24AB48u;
    {
        const bool branch_taken_0x24ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB48u;
        // 0x24ab4c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab48) {
            ctx->pc = 0x24AB5Cu;
            goto label_24ab5c;
        }
    }
    ctx->pc = 0x24AB50u;
label_24ab50:
    // 0x24ab50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24ab54:
    // 0x24ab54: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x24ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ab58: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x24ab58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24ab5c:
    // 0x24ab5c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x24ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ab60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ab64: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ab68: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x24ab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ab6c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x24ab6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x24ab70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ab70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ab74: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x24ab74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x24ab78: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x24ab78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24ab7c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x24ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ab80: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x24ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ab84: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x24ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ab88: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ab8c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24ab8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24ab90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ab90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ab94: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24ab94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24ab98: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x24ab98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24ab9c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aba0: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x24aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24aba4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x24aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aba8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x24aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24abac: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x24abacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x24abb0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x24abb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24abb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24abb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24abb8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24abb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24abbc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x24abbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x24abc0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24abc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24abc4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24abc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24abc8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x24abc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24abcc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24abccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x24abd0: 0x46030044  c1          0x30044
    ctx->pc = 0x24abd0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[3]);
    // 0x24abd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24abd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24abd8: 0x0  nop
    ctx->pc = 0x24abd8u;
    // NOP
    // 0x24abdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24abdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24abe0: 0x0  nop
    ctx->pc = 0x24abe0u;
    // NOP
    // 0x24abe4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x24ABE4u;
    {
        const bool branch_taken_0x24abe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABE4u;
        // 0x24abe8: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abe4) {
            ctx->pc = 0x24AC08u;
            goto label_24ac08;
        }
    }
    ctx->pc = 0x24ABECu;
    // 0x24abec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24abecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24abf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24abf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24abf4: 0x0  nop
    ctx->pc = 0x24abf4u;
    // NOP
    // 0x24abf8: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x24abf8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24abfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24ABFCu;
    {
        const bool branch_taken_0x24abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABFCu;
        // 0x24ac00: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abfc) {
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24AC04u;
    // 0x24ac04: 0x0  nop
    ctx->pc = 0x24ac04u;
    // NOP
label_24ac08:
    // 0x24ac08: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac0c: 0x0  nop
    ctx->pc = 0x24ac0cu;
    // NOP
label_24ac10:
    // 0x24ac10: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ac14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ac18: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x24ac18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24ac1c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24ac1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24ac20: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24ac20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24ac24: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x24ac24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24ac28: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x24ac28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24ac2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24ac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24ac30: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x24ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac34: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ac38: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24ac38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24ac3c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24ac3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24ac40: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24ac40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24ac44: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x24ac44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24ac48: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x24ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ac4c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x24ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ac50: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ac54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ac58: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x24ac58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24ac5c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24ac5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24ac60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24ac60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24ac64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24ac64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24ac68: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ac6c: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x24ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ac70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ac74: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x24ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ac78: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x24ac78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24ac7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24ac7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24ac80: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x24ac80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24ac84: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24ac84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x24ac88: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24ac88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24ac8c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24ac8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24ac90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24ac90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24ac94: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x24ac94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24ac98: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x24ac98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24ac9c: 0x46020044  c1          0x20044
    ctx->pc = 0x24ac9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[2]);
    // 0x24aca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24aca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aca4: 0x0  nop
    ctx->pc = 0x24aca4u;
    // NOP
    // 0x24aca8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24aca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24acac: 0x0  nop
    ctx->pc = 0x24acacu;
    // NOP
    // 0x24acb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24ACB0u;
    {
        const bool branch_taken_0x24acb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACB0u;
        // 0x24acb4: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acb0) {
            ctx->pc = 0x24ACD0u;
            goto label_24acd0;
        }
    }
    ctx->pc = 0x24ACB8u;
    // 0x24acb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24acbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24acbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24acc0: 0x0  nop
    ctx->pc = 0x24acc0u;
    // NOP
    // 0x24acc4: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x24acc4u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24acc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24ACC8u;
    {
        const bool branch_taken_0x24acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACC8u;
        // 0x24accc: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acc8) {
            ctx->pc = 0x24ACD8u;
            goto label_24acd8;
        }
    }
    ctx->pc = 0x24ACD0u;
label_24acd0:
    // 0x24acd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24acd4: 0x0  nop
    ctx->pc = 0x24acd4u;
    // NOP
label_24acd8:
    // 0x24acd8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24acdc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x24acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ace0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24ace0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24ace4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x24ace4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x24ace8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24ace8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24acec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24acecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24acf0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24acf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24acf4: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x24acf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x24acf8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x24acf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24acfc: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x24acfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24ad00: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x24ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ad04: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x24ad04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad08: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x24ad08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad0c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x24ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x24ad10: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x24ad10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24ad14: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x24ad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24ad18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ad1c: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x24ad1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad20: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x24ad20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad24: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x24ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x24ad28: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x24ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x24ad2c: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x24ad2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24ad30: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x24ad30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x24ad34: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x24ad34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ad38: 0xb0c70027  sdl         $a3, 0x27($a2)
    ctx->pc = 0x24ad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad3c: 0xb4c70020  sdr         $a3, 0x20($a2)
    ctx->pc = 0x24ad3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad40: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x24ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
    // 0x24ad44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x24ad44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ad48: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x24ad48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24ad4c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x24ad4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24ad50: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x24ad50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24ad54: 0xb0c50037  sdl         $a1, 0x37($a2)
    ctx->pc = 0x24ad54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad58: 0xb4c50030  sdr         $a1, 0x30($a2)
    ctx->pc = 0x24ad58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad5c: 0xacc70038  sw          $a3, 0x38($a2)
    ctx->pc = 0x24ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 7));
    // 0x24ad60: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x24ad60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad64: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x24ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24ad68: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x24ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x24ad6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24ad6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24ad70: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x24ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x24ad74: 0x3e00008  jr          $ra
    ctx->pc = 0x24AD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD74u;
        // 0x24ad78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AD7Cu;
    // 0x24ad7c: 0x0  nop
    ctx->pc = 0x24ad7cu;
    // NOP
    ctx->pc = 0x24ad80u;
}
