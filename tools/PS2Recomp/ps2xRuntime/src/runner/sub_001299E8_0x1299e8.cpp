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

// Function: sub_001299E8
// Address: 0x1299e8 - 0x129b70
void sub_001299E8_0x1299e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001299E8_0x1299e8");
#endif

    switch (ctx->pc) {
        case 0x129ad8u: goto label_129ad8;
        default: break;
    }

    ctx->pc = 0x1299e8u;

    // 0x1299e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1299e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1299ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1299ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1299f0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1299f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1299f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1299f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1299f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1299f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1299fc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1299fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x129a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x129a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a08: 0x8ca82aa8  lw          $t0, 0x2AA8($a1)
    ctx->pc = 0x129a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10920)));
    // 0x129a0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x129a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129a10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x129a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x129a14: 0x69020043  ldl         $v0, 0x43($t0)
    ctx->pc = 0x129a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x129a18: 0x6d02003c  ldr         $v0, 0x3C($t0)
    ctx->pc = 0x129a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129a1c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x129a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129a20: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x129a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129a24: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x129a28: 0x9fa40020  lwu         $a0, 0x20($sp)
    ctx->pc = 0x129a28u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129a2c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x129a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x129a30: 0x9fa20024  lwu         $v0, 0x24($sp)
    ctx->pc = 0x129a30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129a34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x129a3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129a40: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x129a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x129a44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x129a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x129a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a4c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x129a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x129a50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x129a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x129a54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x129a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x129a58: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x129a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x129a5c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x129a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x129a60: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x129a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x129a64: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x129a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129a68: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x129a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129a6c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x129a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129a70: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x129a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x129a74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x129a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129a78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x129a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x129a7c: 0x69020043  ldl         $v0, 0x43($t0)
    ctx->pc = 0x129a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x129a80: 0x6d02003c  ldr         $v0, 0x3C($t0)
    ctx->pc = 0x129a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129a84: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x129a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129a88: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x129a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129a8c: 0x9fa20030  lwu         $v0, 0x30($sp)
    ctx->pc = 0x129a8cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129a90: 0x9fa30034  lwu         $v1, 0x34($sp)
    ctx->pc = 0x129a90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x129a94: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x129a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x129a98: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x129a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x129a9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x129a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x129aa0: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x129aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x129aa4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x129aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x129aa8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x129aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x129aac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x129aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x129ab0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x129ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x129ab4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x129ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x129ab8: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x129ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x129abc: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x129abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x129ac0: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x129ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129ac4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x129ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129ac8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x129ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129acc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x129accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129ad0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x129AD0u;
    SET_GPR_U32(ctx, 31, 0x129AD8u);
    ctx->pc = 0x129AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AD0u;
    // 0x129ad4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x129AD0u, 0x129AD8u)) {
        return;
    }
    ctx->pc = 0x129AD8u;
label_129ad8:
    // 0x129ad8: 0x0  nop
    ctx->pc = 0x129ad8u;
    // NOP
    // 0x129adc: 0x0  nop
    ctx->pc = 0x129adcu;
    // NOP
    // 0x129ae0: 0x46000044  c1          0x44
    ctx->pc = 0x129ae0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x129ae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ae8: 0x0  nop
    ctx->pc = 0x129ae8u;
    // NOP
    // 0x129aec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x129aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129af0: 0x0  nop
    ctx->pc = 0x129af0u;
    // NOP
    // 0x129af4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x129AF4u;
    {
        const bool branch_taken_0x129af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AF4u;
        // 0x129af8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129af4) {
            ctx->pc = 0x129B18u;
            goto label_129b18;
        }
    }
    ctx->pc = 0x129AFCu;
    // 0x129afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129b00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b04: 0x0  nop
    ctx->pc = 0x129b04u;
    // NOP
    // 0x129b08: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x129b08u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x129b0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x129B0Cu;
    {
        const bool branch_taken_0x129b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B0Cu;
        // 0x129b10: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b0c) {
            ctx->pc = 0x129B20u;
            goto label_129b20;
        }
    }
    ctx->pc = 0x129B14u;
    // 0x129b14: 0x0  nop
    ctx->pc = 0x129b14u;
    // NOP
label_129b18:
    // 0x129b18: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x129b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129b1c: 0x0  nop
    ctx->pc = 0x129b1cu;
    // NOP
label_129b20:
    // 0x129b20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x129b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129b24: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x129b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129b28: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x129b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x129b2c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x129b2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x129b30: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x129b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x129b34: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x129b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x129b38: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x129b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x129b3c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x129b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x129b40: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x129b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x129b44: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x129b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x129b48: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129b4c: 0xb2290007  sdl         $t1, 0x7($s1)
    ctx->pc = 0x129b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129b50: 0xb6290000  sdr         $t1, 0x0($s1)
    ctx->pc = 0x129b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129b54: 0xae2a0008  sw          $t2, 0x8($s1)
    ctx->pc = 0x129b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 10));
    // 0x129b58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x129b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b5c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x129b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129b60: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x129b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129b64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x129b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129b68: 0x3e00008  jr          $ra
    ctx->pc = 0x129B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B68u;
        // 0x129b6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129B70u;
}
