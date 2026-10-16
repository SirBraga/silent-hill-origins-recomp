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

// Function: sub_001A78A8
// Address: 0x1a78a8 - 0x1a7b70
void sub_001A78A8_0x1a78a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A78A8_0x1a78a8");
#endif

    switch (ctx->pc) {
        case 0x1a79dcu: goto label_1a79dc;
        case 0x1a7b00u: goto label_1a7b00;
        case 0x1a7b1cu: goto label_1a7b1c;
        case 0x1a7b28u: goto label_1a7b28;
        case 0x1a7b48u: goto label_1a7b48;
        case 0x1a7b54u: goto label_1a7b54;
        default: break;
    }

    ctx->pc = 0x1a78a8u;

    // 0x1a78a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a78a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a78ac: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a78acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a78b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1a78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1a78b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a78b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a78b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78bc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1a78bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1a78c0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a78c4: 0x2673018  mult        $a2, $s3, $a3
    ctx->pc = 0x1a78c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a78c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a78c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a78cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a78ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78d0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1a78d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1a78d4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1a78d8: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1a78d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a78dc: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x1a78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a78e0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1a78e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a78e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1a78e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1a78e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1a78e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1a78ec: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a78f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a78f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a78fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7900: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1a7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7904: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1a7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7908: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a790c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7910: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a7910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a7914: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a7914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a7918: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1a7918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a791c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1a791cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a7920: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a7920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7924: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a7924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7928: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a7928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a792c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a792cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7930: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1a7930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a7934: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1a7934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a7938: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1a7938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a793c: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1a793cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7940: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a7940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a7944: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a7944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7948: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a7948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a794c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x1a794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7950: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x1a7950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7954: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1a7954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a7958: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a795c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1a795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7960: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a7960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7964: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1a7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7968: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a7968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a796c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a796cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a7970: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a7970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a7974: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a7974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a7978: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x1a7978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a797c: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x1a797cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7980: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1a7980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7984: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1a7984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7988: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a7988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a798c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7990: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a7990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a7994: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a7994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a7998: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a7998u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a799c: 0x46046032  c.eq.s      $f12, $f4
    ctx->pc = 0x1a799cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a79a0: 0x0  nop
    ctx->pc = 0x1a79a0u;
    // NOP
    // 0x1a79a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A79A4u;
    {
        const bool branch_taken_0x1a79a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a79a4) {
            ctx->pc = 0x1A79B8u;
            goto label_1a79b8;
        }
    }
    ctx->pc = 0x1A79ACu;
    // 0x1a79ac: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x1a79acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a79b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A79B0u;
    {
        const bool branch_taken_0x1a79b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79B0u;
        // 0x1a79b4: 0xe7a40020  swc1        $f4, 0x20($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79b0) {
            ctx->pc = 0x1A7A0Cu;
            goto label_1a7a0c;
        }
    }
    ctx->pc = 0x1A79B8u;
label_1a79b8:
    // 0x1a79b8: 0x0  nop
    ctx->pc = 0x1a79b8u;
    // NOP
    // 0x1a79bc: 0x0  nop
    ctx->pc = 0x1a79bcu;
    // NOP
    // 0x1a79c0: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x1a79c0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a79c4: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x1a79c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a79c8: 0x0  nop
    ctx->pc = 0x1a79c8u;
    // NOP
    // 0x1a79cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A79CCu;
    {
        const bool branch_taken_0x1a79cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a79cc) {
            ctx->pc = 0x1A79E0u;
            goto label_1a79e0;
        }
    }
    ctx->pc = 0x1A79D4u;
    // 0x1a79d4: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A79D4u;
    SET_GPR_U32(ctx, 31, 0x1A79DCu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A79D4u, 0x1A79DCu)) {
        return;
    }
    ctx->pc = 0x1A79DCu;
label_1a79dc:
    // 0x1a79dc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1a79dcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_1a79e0:
    // 0x1a79e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a79e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a79e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a79e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a79e8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1a79e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a79ec: 0x0  nop
    ctx->pc = 0x1a79ecu;
    // NOP
    // 0x1a79f0: 0x0  nop
    ctx->pc = 0x1a79f0u;
    // NOP
    // 0x1a79f4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1a79f4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1a79f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a79f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a79fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a79fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a7a00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a7a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7a04: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1a7a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a7a08: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1a7a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a7a0c:
    // 0x1a7a0c: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x1a7a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a7a10: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x1a7a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a7a14: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1a7a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7a18: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1a7a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7a1c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a7a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a24: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1a7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7a28: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a7a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7a2c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1a7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7a30: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1a7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7a34: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a7a34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a7a38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a7a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a7a3c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a7a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7a40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1a7a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7a44: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x1a7a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a7a48: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x1a7a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a7a4c: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1a7a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7a50: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x1a7a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7a54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a7a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7a58: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1a7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7a5c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1a7a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7a60: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1a7a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a7a64: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a7a64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a7a68: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x1a7a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a7a6c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x1a7a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7a70: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x1a7a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7a74: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x1a7a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7a78: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a7a78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a7a7c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1a7a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7a80: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1a7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7a84: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a7a84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a7a88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a7a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a7a8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a7a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a7a90: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a7a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a7a94: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1a7a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a7a98: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x1a7a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a7a9c: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x1a7a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a7aa0: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1a7aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7aa4: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1a7aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7aa8: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x1a7aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7aac: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x1a7aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a7ab0: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x1a7ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ab4: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x1a7ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ab8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1a7ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7abc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1a7abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7ac0: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1a7ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ac4: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1a7ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ac8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a7ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7acc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1a7accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7ad0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1a7ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7ad4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1a7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7ad8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a7ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a7adc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a7adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a7ae0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a7ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a7ae4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1a7ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a7ae8: 0x6ba80057  ldl         $t0, 0x57($sp)
    ctx->pc = 0x1a7ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a7aec: 0x6fa80050  ldr         $t0, 0x50($sp)
    ctx->pc = 0x1a7aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a7af0: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x1a7af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7af4: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x1a7af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7af8: 0xc0695f6  jal         func_1A57D8
    ctx->pc = 0x1A7AF8u;
    SET_GPR_U32(ctx, 31, 0x1A7B00u);
    ctx->pc = 0x1A7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AF8u;
    // 0x1a7afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57D8u, 0x1A7AF8u, 0x1A7B00u)) {
        return;
    }
    ctx->pc = 0x1A7B00u;
label_1a7b00:
    // 0x1a7b00: 0x6a270007  ldl         $a3, 0x7($s1)
    ctx->pc = 0x1a7b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a7b04: 0x6e270000  ldr         $a3, 0x0($s1)
    ctx->pc = 0x1a7b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7b08: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x1a7b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7b0c: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x1a7b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b14: 0xc069edc  jal         func_1A7B70
    ctx->pc = 0x1A7B14u;
    SET_GPR_U32(ctx, 31, 0x1A7B1Cu);
    ctx->pc = 0x1A7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B14u;
    // 0x1a7b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7B70u, 0x1A7B14u, 0x1A7B1Cu)) {
        return;
    }
    ctx->pc = 0x1A7B1Cu;
label_1a7b1c:
    // 0x1a7b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b20: 0xc0695f0  jal         func_1A57C0
    ctx->pc = 0x1A7B20u;
    SET_GPR_U32(ctx, 31, 0x1A7B28u);
    ctx->pc = 0x1A7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B20u;
    // 0x1a7b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57C0u, 0x1A7B20u, 0x1A7B28u)) {
        return;
    }
    ctx->pc = 0x1A7B28u;
label_1a7b28:
    // 0x1a7b28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b30: 0x6a27000f  ldl         $a3, 0xF($s1)
    ctx->pc = 0x1a7b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a7b34: 0x6e270008  ldr         $a3, 0x8($s1)
    ctx->pc = 0x1a7b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7b38: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x1a7b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7b3c: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x1a7b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7b40: 0xc069f90  jal         func_1A7E40
    ctx->pc = 0x1A7B40u;
    SET_GPR_U32(ctx, 31, 0x1A7B48u);
    ctx->pc = 0x1A7B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B40u;
    // 0x1a7b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7E40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7E40u, 0x1A7B40u, 0x1A7B48u)) {
        return;
    }
    ctx->pc = 0x1A7B48u;
label_1a7b48:
    // 0x1a7b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b4c: 0xc0695f6  jal         func_1A57D8
    ctx->pc = 0x1A7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B54u);
    ctx->pc = 0x1A7B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B4Cu;
    // 0x1a7b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57D8u, 0x1A7B4Cu, 0x1A7B54u)) {
        return;
    }
    ctx->pc = 0x1A7B54u;
label_1a7b54:
    // 0x1a7b54: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a7b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7b58: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a7b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7b5c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a7b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a7b60: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a7b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7b64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a7b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B68u;
        // 0x1a7b6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7B70u;
}
