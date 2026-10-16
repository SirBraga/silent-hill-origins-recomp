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

// Function: sub_002B91D8
// Address: 0x2b91d8 - 0x2b93e0
void sub_002B91D8_0x2b91d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B91D8_0x2b91d8");
#endif

    ctx->pc = 0x2b91d8u;

    // 0x2b91d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b91d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b91dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b91dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b91e0: 0x8c8e00f8  lw          $t6, 0xF8($a0)
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2b91e4: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x2b91e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2b91e8: 0xe1080  sll         $v0, $t6, 2
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2b91ec: 0x8c890108  lw          $t1, 0x108($a0)
    ctx->pc = 0x2b91ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x2b91f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b91f4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2b91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b91f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b91f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b91fc: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x2b91fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x2b9200: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2b9200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9204: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x2b9204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2b9208: 0x8c88001c  lw          $t0, 0x1C($a0)
    ctx->pc = 0x2b9208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b920c: 0x97883  sra         $t7, $t1, 2
    ctx->pc = 0x2b920cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 9), 2));
    // 0x2b9210: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2b9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2b9214: 0xf3100  sll         $a2, $t7, 4
    ctx->pc = 0x2b9214u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2b9218: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x2b9218u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x2b921c: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x2b921cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b9220: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b9224: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b9228: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x2b9228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b922c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b922cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b9230: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2b9230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2b9234: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b9238: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b9238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b923c: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x2b923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9240: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b9240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b9244: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b9248: 0x8c8c0040  lw          $t4, 0x40($a0)
    ctx->pc = 0x2b9248u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2b924c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2b924cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2b9250: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b9250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b9254: 0x8c880034  lw          $t0, 0x34($a0)
    ctx->pc = 0x2b9254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b9258: 0xcc6021  addu        $t4, $a2, $t4
    ctx->pc = 0x2b9258u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2b925c: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x2b925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9260: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x2b9260u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x2b9264: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x2b9264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b9268: 0x8c8a004c  lw          $t2, 0x4C($a0)
    ctx->pc = 0x2b9268u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b926c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b926cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b9270: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2b9270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2b9274: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x2b9274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2b9278: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2b9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2b927c: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x2b927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9280: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2b9284: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b9288: 0xf6a00  sll         $t5, $t7, 8
    ctx->pc = 0x2b9288u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 8));
    // 0x2b928c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b9290: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b9294: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x2b9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x2b9298: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2b9298u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2b929c: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x2b929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b92a0: 0x98180  sll         $s0, $t1, 6
    ctx->pc = 0x2b92a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2b92a4: 0x8c8b0088  lw          $t3, 0x88($a0)
    ctx->pc = 0x2b92a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2b92a8: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x2b92a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2b92ac: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2b92acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2b92b0: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x2b92b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x2b92b4: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x2b92b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2b92b8: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x2b92b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b92bc: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x2b92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b92c0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2b92c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b92c4: 0x8dc90004  lw          $t1, 0x4($t6)
    ctx->pc = 0x2b92c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2b92c8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2b92c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2b92cc: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x2b92ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x2b92d0: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x2b92d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b92d4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2b92d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2b92d8: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x2b92d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b92dc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2b92dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b92e0: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x2b92e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b92e4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b92e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b92e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b92ec: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x2b92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2b92f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b92f4: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2b92f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b92f8: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2b92f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b92fc: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2b92fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b9300: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2b9300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9304: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2b9304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9308: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2b9308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2b930c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9310: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2b9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2b9314: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2b9314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b9318: 0x68a20017  ldl         $v0, 0x17($a1)
    ctx->pc = 0x2b9318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b931c: 0x6ca20010  ldr         $v0, 0x10($a1)
    ctx->pc = 0x2b931cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b9320: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x2b9320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b9324: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x2b9324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9328: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x2b9328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b932c: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x2b932cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x2b9330: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2b9330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9334: 0x1a63021  addu        $a2, $t5, $a2
    ctx->pc = 0x2b9334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x2b9338: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2b933c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x2b933cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x2b9340: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b9340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9344: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2b9344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2b9348: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2b934c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2b934cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2b9350: 0x68a20027  ldl         $v0, 0x27($a1)
    ctx->pc = 0x2b9350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b9354: 0x6ca20020  ldr         $v0, 0x20($a1)
    ctx->pc = 0x2b9354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b9358: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2b935c: 0xb0c20027  sdl         $v0, 0x27($a2)
    ctx->pc = 0x2b935cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9360: 0xb4c20020  sdr         $v0, 0x20($a2)
    ctx->pc = 0x2b9360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9364: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x2b9364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x2b9368: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b936c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x2b936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2b9370: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b9370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b9374: 0x68aa0037  ldl         $t2, 0x37($a1)
    ctx->pc = 0x2b9374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2b9378: 0x6caa0030  ldr         $t2, 0x30($a1)
    ctx->pc = 0x2b9378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2b937c: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x2b937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2b9380: 0xb04a0037  sdl         $t2, 0x37($v0)
    ctx->pc = 0x2b9380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9384: 0xb44a0030  sdr         $t2, 0x30($v0)
    ctx->pc = 0x2b9384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9388: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2b9388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2b938c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9390: 0x8c860094  lw          $a2, 0x94($a0)
    ctx->pc = 0x2b9390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2b9394: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x2b9394u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2b9398: 0x8c8700b8  lw          $a3, 0xB8($a0)
    ctx->pc = 0x2b9398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2b939c: 0x1b01021  addu        $v0, $t5, $s0
    ctx->pc = 0x2b939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x2b93a0: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x2b93a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x2b93a4: 0xac49002c  sw          $t1, 0x2C($v0)
    ctx->pc = 0x2b93a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 9));
    // 0x2b93a8: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2b93a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b93acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b93b0: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x2b93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2b93b4: 0xada2003c  sw          $v0, 0x3C($t5)
    ctx->pc = 0x2b93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 2));
    // 0x2b93b8: 0x8ca60068  lw          $a2, 0x68($a1)
    ctx->pc = 0x2b93b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x2b93bc: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x2b93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x2b93c0: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x2b93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2b93c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b93c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b93cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b93d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b93d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2b93d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B93D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93D8u;
        // 0x2b93dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B93D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B93E0u;
}
