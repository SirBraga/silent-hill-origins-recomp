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

// Function: sub_00188060
// Address: 0x188060 - 0x188288
void sub_00188060_0x188060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188060_0x188060");
#endif

    switch (ctx->pc) {
        case 0x188104u: goto label_188104;
        case 0x188118u: goto label_188118;
        default: break;
    }

    ctx->pc = 0x188060u;

    // 0x188060: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188064: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x188064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x188068: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x188068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18806c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18806cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188070: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x188070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x188074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188078: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x188078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18807c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x188080: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x188080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x188084: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x188084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188088: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x188088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18808c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18808cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188090: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x188090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x188094: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x188094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188098: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x188098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18809c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18809cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1880a0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1880a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1880a4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1880a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1880a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1880ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1880acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1880b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1880b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1880b4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1880b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1880b8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1880b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1880bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1880bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1880c0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1880c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1880c4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1880c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1880c8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1880c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1880cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1880ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1880d0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1880d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1880d4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1880d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1880d8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1880dc: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x1880dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1880e0: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x1880e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1880e4: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1880e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1880e8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1880e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1880ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1880f0: 0x0  nop
    ctx->pc = 0x1880f0u;
    // NOP
    // 0x1880f4: 0x45020060  bc1fl       . + 4 + (0x60 << 2)
    ctx->pc = 0x1880F4u;
    {
        const bool branch_taken_0x1880f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1880f4) {
            ctx->pc = 0x1880F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880F4u;
            // 0x1880f8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188278u;
            goto label_188278;
        }
    }
    ctx->pc = 0x1880FCu;
    // 0x1880fc: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1880FCu;
    SET_GPR_U32(ctx, 31, 0x188104u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1880FCu, 0x188104u)) {
        return;
    }
    ctx->pc = 0x188104u;
label_188104:
    // 0x188104: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x188104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x188108: 0x5080005b  beql        $a0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x188108u;
    {
        const bool branch_taken_0x188108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188108) {
            ctx->pc = 0x18810Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188108u;
            // 0x18810c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188278u;
            goto label_188278;
        }
    }
    ctx->pc = 0x188110u;
    // 0x188110: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x188110u;
    SET_GPR_U32(ctx, 31, 0x188118u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x188110u, 0x188118u)) {
        return;
    }
    ctx->pc = 0x188118u;
label_188118:
    // 0x188118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18811c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x18811cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x188120: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x188120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x188124: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x188124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188128: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x188128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18812c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188130: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x188130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x188134: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x188134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x188138: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x188138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18813c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x188140: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x188140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188144: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x188144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188148: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x188148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18814c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188150: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x188150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188154: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x188154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188158: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x188158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x18815c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x18815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188160: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x188160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188164: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x188164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188168: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x188168u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x18816c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x18816cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x188170: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x188170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x188174: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x188174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x188178: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x188178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18817c: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x18817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x188180: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x188180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x188184: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x188184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188188: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x188188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18818c: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x18818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188190: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x188190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x188194: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x188194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x188198: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x188198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x18819c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x18819cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1881a0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x1881a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1881a4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x1881a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1881a8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1881a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1881ac: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1881acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1881b0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1881b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1881b4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1881b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1881b8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1881b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1881bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1881bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1881c0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1881c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1881c4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1881c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1881c8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1881c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1881cc: 0xc625002c  lwc1        $f5, 0x2C($s1)
    ctx->pc = 0x1881ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1881d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1881d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1881d4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1881d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1881d8: 0x460110c0  add.s       $f3, $f2, $f1
    ctx->pc = 0x1881d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1881dc: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x1881dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1881e0: 0x0  nop
    ctx->pc = 0x1881e0u;
    // NOP
    // 0x1881e4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1881E4u;
    {
        const bool branch_taken_0x1881e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1881e4) {
            ctx->pc = 0x1881E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881E4u;
            // 0x1881e8: 0x46002807  neg.s       $f0, $f5 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881F8u;
            goto label_1881f8;
        }
    }
    ctx->pc = 0x1881ECu;
    // 0x1881ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1881ECu;
    {
        const bool branch_taken_0x1881ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881ECu;
        // 0x1881f0: 0x460028c6  mov.s       $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881ec) {
            ctx->pc = 0x188208u;
            goto label_188208;
        }
    }
    ctx->pc = 0x1881F4u;
    // 0x1881f4: 0x0  nop
    ctx->pc = 0x1881f4u;
    // NOP
label_1881f8:
    // 0x1881f8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1881f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1881fc: 0x0  nop
    ctx->pc = 0x1881fcu;
    // NOP
    // 0x188200: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x188200u;
    {
        const bool branch_taken_0x188200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188200) {
            ctx->pc = 0x188204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188200u;
            // 0x188204: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188208u;
            goto label_188208;
        }
    }
    ctx->pc = 0x188208u;
label_188208:
    // 0x188208: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x188208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18820c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188210: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x188210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188214: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x188214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x188218: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x188218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18821c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x18821cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x188220: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x188220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x188224: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x188224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x188228: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x188228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18822c: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x18822cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x188230: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x188230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x188234: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x188234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188238: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x188238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18823c: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x18823cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188240: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x188240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x188244: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x188244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188248: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x188248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18824c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x18824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188250: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x188250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x188254: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x188254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x188258: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x188258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18825c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x18825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188260: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x188260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x188264: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x188264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x188268: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x188268u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x18826c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x18826cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x188270: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x188270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x188274: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x188274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_188278:
    // 0x188278: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x188278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18827c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188280: 0x3e00008  jr          $ra
    ctx->pc = 0x188280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188280u;
        // 0x188284: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188288u;
}
