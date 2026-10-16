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

// Function: sub_002B2D88
// Address: 0x2b2d88 - 0x2b2f18
void sub_002B2D88_0x2b2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2D88_0x2b2d88");
#endif

    switch (ctx->pc) {
        case 0x2b2db8u: goto label_2b2db8;
        default: break;
    }

    ctx->pc = 0x2b2d88u;

    // 0x2b2d88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b2d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b2d8c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b2d90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2d94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b2d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b2d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d9c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b2d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b2da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b2da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b2da8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b2da8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b2dac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b2dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2db0: 0xc0aa4e0  jal         func_2A9380
    ctx->pc = 0x2B2DB0u;
    SET_GPR_U32(ctx, 31, 0x2B2DB8u);
    ctx->pc = 0x2B2DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DB0u;
    // 0x2b2db4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9380u, 0x2B2DB0u, 0x2B2DB8u)) {
        return;
    }
    ctx->pc = 0x2B2DB8u;
label_2b2db8:
    // 0x2b2db8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b2db8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b2dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2dc0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b2dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2dc4: 0x0  nop
    ctx->pc = 0x2b2dc4u;
    // NOP
    // 0x2b2dc8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2DC8u;
    {
        const bool branch_taken_0x2b2dc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2dc8) {
            ctx->pc = 0x2B2DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2DC8u;
            // 0x2b2dcc: 0xe6140010  swc1        $f20, 0x10($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2DDCu;
            goto label_2b2ddc;
        }
    }
    ctx->pc = 0x2B2DD0u;
    // 0x2b2dd0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2b2dd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x2b2dd4: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x2b2dd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2b2dd8: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x2b2dd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2b2ddc:
    // 0x2b2ddc: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2b2ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b2de0: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2b2de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b2de4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2b2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2de8: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x2b2de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2dec: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x2b2decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2df0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2b2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2b2df4: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B2DF4u;
    {
        const bool branch_taken_0x2b2df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2df4) {
            ctx->pc = 0x2B2E80u;
            goto label_2b2e80;
        }
    }
    ctx->pc = 0x2B2DFCu;
    // 0x2b2dfc: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2b2e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2e04: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b2e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2e08: 0x0  nop
    ctx->pc = 0x2b2e08u;
    // NOP
    // 0x2b2e0c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2B2E0Cu;
    {
        const bool branch_taken_0x2b2e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E0Cu;
        // 0x2b2e10: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e0c) {
            ctx->pc = 0x2B2E38u;
            goto label_2b2e38;
        }
    }
    ctx->pc = 0x2B2E14u;
    // 0x2b2e14: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2b2e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2e18: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2b2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2e1c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b2e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b2e20: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2b2e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2b2e24: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2b2e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2b2e28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b2e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b2e2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b2e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b2e30: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2b2e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b2e34: 0x0  nop
    ctx->pc = 0x2b2e34u;
    // NOP
label_2b2e38:
    // 0x2b2e38: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2b2e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b2e3c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2b2e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b2e40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2e44: 0xb202001b  sdl         $v0, 0x1B($s0)
    ctx->pc = 0x2b2e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2e48: 0xb6020014  sdr         $v0, 0x14($s0)
    ctx->pc = 0x2b2e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2e4c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2b2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2b2e50: 0x6ba20013  ldl         $v0, 0x13($sp)
    ctx->pc = 0x2b2e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b2e54: 0x6fa2000c  ldr         $v0, 0xC($sp)
    ctx->pc = 0x2b2e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b2e58: 0x6ba3001b  ldl         $v1, 0x1B($sp)
    ctx->pc = 0x2b2e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b2e5c: 0x6fa30014  ldr         $v1, 0x14($sp)
    ctx->pc = 0x2b2e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b2e60: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x2b2e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2e64: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x2b2e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2e68: 0xb203002f  sdl         $v1, 0x2F($s0)
    ctx->pc = 0x2b2e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2e6c: 0xb6030028  sdr         $v1, 0x28($s0)
    ctx->pc = 0x2b2e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2e70: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b2e74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b2e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b2e78: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B2E78u;
    {
        const bool branch_taken_0x2b2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E78u;
        // 0x2b2e7c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e78) {
            ctx->pc = 0x2B2ED4u;
            goto label_2b2ed4;
        }
    }
    ctx->pc = 0x2B2E80u;
label_2b2e80:
    // 0x2b2e80: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2b2e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2b2e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2e88: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b2e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2e8c: 0x0  nop
    ctx->pc = 0x2b2e8cu;
    // NOP
    // 0x2b2e90: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2B2E90u;
    {
        const bool branch_taken_0x2b2e90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E90u;
        // 0x2b2e94: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e90) {
            ctx->pc = 0x2B2EDCu;
            goto label_2b2edc;
        }
    }
    ctx->pc = 0x2B2E98u;
    // 0x2b2e98: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2b2e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2e9c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2b2e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2ea0: 0x0  nop
    ctx->pc = 0x2b2ea0u;
    // NOP
    // 0x2b2ea4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2EA4u;
    {
        const bool branch_taken_0x2b2ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA4u;
        // 0x2b2ea8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ea4) {
            ctx->pc = 0x2B2EB4u;
            goto label_2b2eb4;
        }
    }
    ctx->pc = 0x2B2EACu;
    // 0x2b2eac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2EACu;
    {
        const bool branch_taken_0x2b2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EACu;
        // 0x2b2eb0: 0x46010028  max.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2eac) {
            ctx->pc = 0x2B2EB8u;
            goto label_2b2eb8;
        }
    }
    ctx->pc = 0x2B2EB4u;
label_2b2eb4:
    // 0x2b2eb4: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x2b2eb4u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
label_2b2eb8:
    // 0x2b2eb8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2b2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b2ebc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b2ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b2ec0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2ec4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2b2ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2b2ec8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2b2ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b2ecc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2b2eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b2ed0: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2b2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2b2ed4:
    // 0x2b2ed4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2b2ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2b2ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b2edc:
    // 0x2b2edc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2b2edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2ee0: 0x0  nop
    ctx->pc = 0x2b2ee0u;
    // NOP
    // 0x2b2ee4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2EE4u;
    {
        const bool branch_taken_0x2b2ee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EE4u;
        // 0x2b2ee8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ee4) {
            ctx->pc = 0x2B2EF8u;
            goto label_2b2ef8;
        }
    }
    ctx->pc = 0x2B2EECu;
    // 0x2b2eec: 0x460ca003  div.s       $f0, $f20, $f12
    ctx->pc = 0x2b2eecu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[12]);
    // 0x2b2ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2EF0u;
    {
        const bool branch_taken_0x2b2ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EF0u;
        // 0x2b2ef4: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ef0) {
            ctx->pc = 0x2B2F04u;
            goto label_2b2f04;
        }
    }
    ctx->pc = 0x2B2EF8u;
label_2b2ef8:
    // 0x2b2ef8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2b2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2b2efc: 0xc4403a58  lwc1        $f0, 0x3A58($v0)
    ctx->pc = 0x2b2efcu;
    { uint32_t bits = FAST_READ32(0x6B3A58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2f00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b2f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b2f04:
    // 0x2b2f04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b2f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2f08: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F0Cu;
        // 0x2b2f10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F14u;
    // 0x2b2f14: 0x0  nop
    ctx->pc = 0x2b2f14u;
    // NOP
    ctx->pc = 0x2b2f18u;
}
