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

// Function: sub_001158D0
// Address: 0x1158d0 - 0x115c08
void sub_001158D0_0x1158d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001158D0_0x1158d0");
#endif

    switch (ctx->pc) {
        case 0x115b48u: goto label_115b48;
        case 0x115b9cu: goto label_115b9c;
        default: break;
    }

    ctx->pc = 0x1158d0u;

    // 0x1158d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1158d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1158d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1158d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1158d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1158d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1158dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1158dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1158e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1158e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1158e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158e8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1158e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1158ec: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1158ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1158f0: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x1158f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1158f4: 0xc4cb0004  lwc1        $f11, 0x4($a2)
    ctx->pc = 0x1158f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1158f8: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x1158f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1158fc: 0xc4ca0008  lwc1        $f10, 0x8($a2)
    ctx->pc = 0x1158fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x115900: 0x460b2841  sub.s       $f1, $f5, $f11
    ctx->pc = 0x115900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[11]);
    // 0x115904: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x115904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x115908: 0x460a2001  sub.s       $f0, $f4, $f10
    ctx->pc = 0x115908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x11590c: 0x460610c1  sub.s       $f3, $f2, $f6
    ctx->pc = 0x11590cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x115910: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x115910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x115914: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x115914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x115918: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x115918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11591c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x11591cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115920: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x115920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115924: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x115924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x115928: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x115928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11592c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x11592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115930: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x115930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x115934: 0xc60801e8  lwc1        $f8, 0x1E8($s0)
    ctx->pc = 0x115934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x115938: 0xc60901ec  lwc1        $f9, 0x1EC($s0)
    ctx->pc = 0x115938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x11593c: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x11593cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x115940: 0xc60701f0  lwc1        $f7, 0x1F0($s0)
    ctx->pc = 0x115940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x115944: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x115944u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x115948: 0xc60c0200  lwc1        $f12, 0x200($s0)
    ctx->pc = 0x115948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11594c: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x11594cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x115950: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x115950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115954: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x115954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115958: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x115958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11595c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x11595cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115960: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x115960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115964: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x115964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x115968: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x115968u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x11596c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11596cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x115970: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x115970u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x115974: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x115974u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x115978: 0x46023942  mul.s       $f5, $f7, $f2
    ctx->pc = 0x115978u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x11597c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x11597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115980: 0x46024102  mul.s       $f4, $f8, $f2
    ctx->pc = 0x115980u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x115984: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x115984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115988: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x115988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x11598c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x11598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115990: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x115990u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x115994: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x115994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115998: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x115998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11599c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x11599cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1159a0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1159a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1159a4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1159a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1159a8: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x1159a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1159ac: 0x460b4ac2  mul.s       $f11, $f9, $f11
    ctx->pc = 0x1159acu;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x1159b0: 0x460a3a82  mul.s       $f10, $f7, $f10
    ctx->pc = 0x1159b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x1159b4: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x1159b4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x1159b8: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x1159b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x1159bc: 0x460c3180  add.s       $f6, $f6, $f12
    ctx->pc = 0x1159bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[12]);
    // 0x1159c0: 0x46003507  neg.s       $f20, $f6
    ctx->pc = 0x1159c0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[6]);
    // 0x1159c4: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x1159c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x1159c8: 0x46144a42  mul.s       $f9, $f9, $f20
    ctx->pc = 0x1159c8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x1159cc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1159ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1159d0: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x1159d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x1159d4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1159d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1159d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1159d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1159dc: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x1159dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x1159e0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1159e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1159e4: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1159e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1159e8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1159e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1159ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1159ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1159f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1159f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1159f4: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1159f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1159f8: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1159f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1159fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115a00: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x115a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a04: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x115a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a08: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x115a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x115a0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x115a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115a10: 0xc6010224  lwc1        $f1, 0x224($s0)
    ctx->pc = 0x115a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115a14: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x115a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115a18: 0x0  nop
    ctx->pc = 0x115a18u;
    // NOP
    // 0x115a1c: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x115A1Cu;
    {
        const bool branch_taken_0x115a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115a1c) {
            ctx->pc = 0x115A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A1Cu;
            // 0x115a20: 0xe60201dc  swc1        $f2, 0x1DC($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x115AB8u;
            goto label_115ab8;
        }
    }
    ctx->pc = 0x115A24u;
    // 0x115a24: 0xc6000220  lwc1        $f0, 0x220($s0)
    ctx->pc = 0x115a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115a28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x115a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115a2c: 0x0  nop
    ctx->pc = 0x115a2cu;
    // NOP
    // 0x115a30: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x115A30u;
    {
        const bool branch_taken_0x115a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115a30) {
            ctx->pc = 0x115A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A30u;
            // 0x115a34: 0xe60201dc  swc1        $f2, 0x1DC($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x115AB8u;
            goto label_115ab8;
        }
    }
    ctx->pc = 0x115A38u;
    // 0x115a38: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x115a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x115a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x115a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115a40: 0x0  nop
    ctx->pc = 0x115a40u;
    // NOP
    // 0x115a44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x115A44u;
    {
        const bool branch_taken_0x115a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A44u;
        // 0x115a48: 0xe60001dc  swc1        $f0, 0x1DC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a44) {
            ctx->pc = 0x115A50u;
            goto label_115a50;
        }
    }
    ctx->pc = 0x115A4Cu;
    // 0x115a4c: 0xe60101dc  swc1        $f1, 0x1DC($s0)
    ctx->pc = 0x115a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
label_115a50:
    // 0x115a50: 0xc60101dc  lwc1        $f1, 0x1DC($s0)
    ctx->pc = 0x115a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115a54: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x115a54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x115a58: 0xc60301e8  lwc1        $f3, 0x1E8($s0)
    ctx->pc = 0x115a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115a5c: 0xc60501ec  lwc1        $f5, 0x1EC($s0)
    ctx->pc = 0x115a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115a60: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x115a60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x115a64: 0xc60401f0  lwc1        $f4, 0x1F0($s0)
    ctx->pc = 0x115a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115a68: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x115a68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x115a6c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x115a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115a70: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x115a70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x115a74: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x115a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115a78: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x115a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115a7c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x115a7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x115a80: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x115a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x115a84: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x115a84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x115a88: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x115a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x115a8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x115a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x115a90: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x115a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x115a94: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x115a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115a98: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x115a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115a9c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x115a9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x115aa0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x115aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115aa4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x115aa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x115aa8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x115aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x115aac: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x115aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x115ab0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x115ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x115ab4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x115ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_115ab8:
    // 0x115ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x115ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115abc: 0x0  nop
    ctx->pc = 0x115abcu;
    // NOP
    // 0x115ac0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x115ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115ac4: 0x0  nop
    ctx->pc = 0x115ac4u;
    // NOP
    // 0x115ac8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x115AC8u;
    {
        const bool branch_taken_0x115ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115ac8) {
            ctx->pc = 0x115ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115AC8u;
            // 0x115acc: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115AD0u;
            goto label_115ad0;
        }
    }
    ctx->pc = 0x115AD0u;
label_115ad0:
    // 0x115ad0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x115ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115ad4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x115ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115ad8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x115ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115adc: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x115adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115ae0: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x115ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115ae4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x115ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x115ae8: 0xc60401e8  lwc1        $f4, 0x1E8($s0)
    ctx->pc = 0x115ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115aec: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x115aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x115af0: 0xc60301ec  lwc1        $f3, 0x1EC($s0)
    ctx->pc = 0x115af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115af4: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x115af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115af8: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x115af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x115afc: 0xc60101f0  lwc1        $f1, 0x1F0($s0)
    ctx->pc = 0x115afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115b00: 0x46051a02  mul.s       $f8, $f3, $f5
    ctx->pc = 0x115b00u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x115b04: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x115b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115b08: 0x460209c2  mul.s       $f7, $f1, $f2
    ctx->pc = 0x115b08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x115b0c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x115b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x115b10: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x115b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x115b14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x115b14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x115b18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115b1c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x115b1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x115b20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x115b20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x115b24: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x115b24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x115b28: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x115b28u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x115b2c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x115b2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x115b30: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x115b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x115b34: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x115b34u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x115b38: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x115b38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115b3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x115b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115b40: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x115B40u;
    SET_GPR_U32(ctx, 31, 0x115B48u);
    ctx->pc = 0x115B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B40u;
    // 0x115b44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x115B40u, 0x115B48u)) {
        return;
    }
    ctx->pc = 0x115B48u;
label_115b48:
    // 0x115b48: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x115b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115b4c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x115b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x115b50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x115b54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x115b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x115b58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x115b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115b5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x115b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x115b60: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x115b60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x115b64: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x115b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115b68: 0x0  nop
    ctx->pc = 0x115b68u;
    // NOP
    // 0x115b6c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x115B6Cu;
    {
        const bool branch_taken_0x115b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115b6c) {
            ctx->pc = 0x115B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115B6Cu;
            // 0x115b70: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115B78u;
            goto label_115b78;
        }
    }
    ctx->pc = 0x115B74u;
    // 0x115b74: 0x0  nop
    ctx->pc = 0x115b74u;
    // NOP
label_115b78:
    // 0x115b78: 0x0  nop
    ctx->pc = 0x115b78u;
    // NOP
    // 0x115b7c: 0x0  nop
    ctx->pc = 0x115b7cu;
    // NOP
    // 0x115b80: 0x460c0004  c1          0xC0004
    ctx->pc = 0x115b80u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x115b84: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x115b84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115b88: 0x0  nop
    ctx->pc = 0x115b88u;
    // NOP
    // 0x115b8c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x115B8Cu;
    {
        const bool branch_taken_0x115b8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x115B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B8Cu;
        // 0x115b90: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b8c) {
            ctx->pc = 0x115BA0u;
            goto label_115ba0;
        }
    }
    ctx->pc = 0x115B94u;
    // 0x115b94: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x115B94u;
    SET_GPR_U32(ctx, 31, 0x115B9Cu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x115B94u, 0x115B9Cu)) {
        return;
    }
    ctx->pc = 0x115B9Cu;
label_115b9c:
    // 0x115b9c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x115b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_115ba0:
    // 0x115ba0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x115ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115ba4: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x115ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115ba8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x115ba8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x115bac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x115bacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x115bb0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x115bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115bb4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x115bb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x115bb8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x115bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115bbc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x115bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115bc0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x115bc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x115bc4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x115bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x115bc8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x115bc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x115bcc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x115bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x115bd0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x115bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x115bd4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x115bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x115bd8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x115bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115bdc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x115bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115be0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x115be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115be4: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x115be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115be8: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x115be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115bec: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x115becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x115bf0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x115bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115bf4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x115bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115bf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x115bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115bfc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x115bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x115c00: 0x3e00008  jr          $ra
    ctx->pc = 0x115C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C00u;
        // 0x115c04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C08u;
}
