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

// Function: sub_002B4030
// Address: 0x2b4030 - 0x2b4168
void sub_002B4030_0x2b4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4030_0x2b4030");
#endif

    switch (ctx->pc) {
        case 0x2b40c8u: goto label_2b40c8;
        case 0x2b4120u: goto label_2b4120;
        default: break;
    }

    ctx->pc = 0x2b4030u;

    // 0x2b4030: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b4034: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2b4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2b4038: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b4038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b403c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4040: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2b4040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b4044: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2b4044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b4048: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x2b4048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b404c: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x2b404cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b4050: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x2b4050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b4054: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x2b4054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b4058: 0x68a6001f  ldl         $a2, 0x1F($a1)
    ctx->pc = 0x2b4058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b405c: 0x6ca60018  ldr         $a2, 0x18($a1)
    ctx->pc = 0x2b405cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b4060: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2b4060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4064: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2b4064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4068: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2b4068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b406c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2b406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4070: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x2b4070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4074: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x2b4074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4078: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x2b4078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b407c: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x2b407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4080: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2b4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2b4084: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b4084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2b4088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b408c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b408cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4090: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2b4090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b4094: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2b4094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4098: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2b4098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2b409c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2b409cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2b40a0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2b40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2b40a4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b40a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b40a8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2b40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2b40ac: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2b40acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2b40b0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2b40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2b40b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b40b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40b8: 0xc78c8130  lwc1        $f12, -0x7ED0($gp)
    ctx->pc = 0x2b40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b40bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b40c0: 0xc0accf0  jal         func_2B33C0
    ctx->pc = 0x2B40C0u;
    SET_GPR_U32(ctx, 31, 0x2B40C8u);
    ctx->pc = 0x2B40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B40C0u;
    // 0x2b40c4: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B33C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B33C0u, 0x2B40C0u, 0x2B40C8u)) {
        return;
    }
    ctx->pc = 0x2B40C8u;
label_2b40c8:
    // 0x2b40c8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B40C8u;
    {
        const bool branch_taken_0x2b40c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C8u;
        // 0x2b40cc: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c8) {
            ctx->pc = 0x2B4140u;
            goto label_2b4140;
        }
    }
    ctx->pc = 0x2B40D0u;
    // 0x2b40d0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2b40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2b40d4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2b40d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b40d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2b40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b40dc: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2b40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b40e0: 0xc7a80030  lwc1        $f8, 0x30($sp)
    ctx->pc = 0x2b40e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b40e4: 0xc7a7003c  lwc1        $f7, 0x3C($sp)
    ctx->pc = 0x2b40e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b40e8: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2b40e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b40ec: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x2b40ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b40f0: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x2b40f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b40f4: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x2b40f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b40f8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2b40f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b40fc: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2b40fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b4100: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2b4100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b4104: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x2b4104u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b4108: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x2b4108u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b410c: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x2b410cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b4110: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x2b4110u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b4114: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x2b4114u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b4118: 0xc0a4cd2  jal         func_293348
    ctx->pc = 0x2B4118u;
    SET_GPR_U32(ctx, 31, 0x2B4120u);
    ctx->pc = 0x2B411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4118u;
    // 0x2b411c: 0xe7a60088  swc1        $f6, 0x88($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x2B4118u, 0x2B4120u)) {
        return;
    }
    ctx->pc = 0x2B4120u;
label_2b4120:
    // 0x2b4120: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2b4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4128: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2b4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b412c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4130: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2b4130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4134: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b4134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b4138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4138u;
    {
        const bool branch_taken_0x2b4138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4138u;
        // 0x2b413c: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4138) {
            ctx->pc = 0x2B4144u;
            goto label_2b4144;
        }
    }
    ctx->pc = 0x2B4140u;
label_2b4140:
    // 0x2b4140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4144:
    // 0x2b4144: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2b4144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b4148: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b4148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b414c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B414Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B414Cu;
        // 0x2b4150: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B414Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4154u;
    // 0x2b4154: 0x0  nop
    ctx->pc = 0x2b4154u;
    // NOP
    // 0x2b4158: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b4158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b415c: 0x0  nop
    ctx->pc = 0x2b415cu;
    // NOP
    // 0x2b4160: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b4160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b4164: 0x0  nop
    ctx->pc = 0x2b4164u;
    // NOP
    ctx->pc = 0x2b4168u;
}
