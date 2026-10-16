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

// Function: sub_0011E0F0
// Address: 0x11e0f0 - 0x11e270
void sub_0011E0F0_0x11e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E0F0_0x11e0f0");
#endif

    switch (ctx->pc) {
        case 0x11e120u: goto label_11e120;
        case 0x11e138u: goto label_11e138;
        default: break;
    }

    ctx->pc = 0x11e0f0u;

    // 0x11e0f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x11e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x11e0f4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x11e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x11e0f8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x11e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x11e0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11e0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e100: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x11e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11e104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11e104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e10c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x11e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x11e110: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x11e110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x11e114: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x11e114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11e118: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x11E118u;
    SET_GPR_U32(ctx, 31, 0x11E120u);
    ctx->pc = 0x11E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E118u;
    // 0x11e11c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x11E118u, 0x11E120u)) {
        return;
    }
    ctx->pc = 0x11E120u;
label_11e120:
    // 0x11e120: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x11e124: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11e124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e128: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x11e12c: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x11e12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x11e130: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x11E130u;
    SET_GPR_U32(ctx, 31, 0x11E138u);
    ctx->pc = 0x11E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E130u;
    // 0x11e134: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x11E130u, 0x11E138u)) {
        return;
    }
    ctx->pc = 0x11E138u;
label_11e138:
    // 0x11e138: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x11e138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11e13c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x11e13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11e140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11e144: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x11e144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e148: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x11e148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e14c: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x11e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x11e150: 0x6ba60077  ldl         $a2, 0x77($sp)
    ctx->pc = 0x11e150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11e154: 0x6fa60070  ldr         $a2, 0x70($sp)
    ctx->pc = 0x11e154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11e158: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x11e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11e15c: 0xb3a60097  sdl         $a2, 0x97($sp)
    ctx->pc = 0x11e15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e160: 0xb7a60090  sdr         $a2, 0x90($sp)
    ctx->pc = 0x11e160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e164: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x11e164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x11e168: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x11e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e16c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x11e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e170: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x11e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e174: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11e174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11e178: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x11e178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11e17c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x11e17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e180: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x11e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e184: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11e184u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11e188: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x11e188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11e18c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11e18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11e190: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x11e190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x11e194: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x11e194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x11e198: 0x6ba500c7  ldl         $a1, 0xC7($sp)
    ctx->pc = 0x11e198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11e19c: 0x6fa500c0  ldr         $a1, 0xC0($sp)
    ctx->pc = 0x11e19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11e1a0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x11e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x11e1a4: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x11e1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e1a8: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x11e1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e1ac: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x11e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x11e1b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11e1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11e1b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11e1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11e1b8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x11e1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e1bc: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x11e1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e1c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11e1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11e1c4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x11e1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e1c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11e1c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11e1cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11e1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11e1d0: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x11e1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11e1d4: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x11e1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x11e1d8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x11e1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x11e1dc: 0x6ba400c7  ldl         $a0, 0xC7($sp)
    ctx->pc = 0x11e1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11e1e0: 0x6fa400c0  ldr         $a0, 0xC0($sp)
    ctx->pc = 0x11e1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11e1e4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x11e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x11e1e8: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x11e1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e1ec: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x11e1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e1f0: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x11e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x11e1f4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x11e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e1f8: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x11e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e1fc: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x11e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e200: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e204: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x11e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11e208: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x11e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e20c: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x11e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e210: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11e210u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x11e214: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x11e214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11e218: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11e218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11e21c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x11e21cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x11e220: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x11e220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x11e224: 0x6ba300c7  ldl         $v1, 0xC7($sp)
    ctx->pc = 0x11e224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11e228: 0x6fa300c0  ldr         $v1, 0xC0($sp)
    ctx->pc = 0x11e228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11e22c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x11e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x11e230: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x11e230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e234: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x11e234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e238: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x11e238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x11e23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e240: 0x6ba300b7  ldl         $v1, 0xB7($sp)
    ctx->pc = 0x11e240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11e244: 0x6fa300b0  ldr         $v1, 0xB0($sp)
    ctx->pc = 0x11e244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11e248: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x11e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x11e24c: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x11e24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e250: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x11e250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e254: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x11e254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x11e258: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x11e258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11e25c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x11e25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11e260: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x11e260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11e264: 0x3e00008  jr          $ra
    ctx->pc = 0x11E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E264u;
        // 0x11e268: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E26Cu;
    // 0x11e26c: 0x0  nop
    ctx->pc = 0x11e26cu;
    // NOP
    ctx->pc = 0x11e270u;
}
