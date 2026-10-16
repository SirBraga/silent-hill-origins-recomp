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

// Function: sub_00134C10
// Address: 0x134c10 - 0x134db0
void sub_00134C10_0x134c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134C10_0x134c10");
#endif

    switch (ctx->pc) {
        case 0x134c38u: goto label_134c38;
        case 0x134c40u: goto label_134c40;
        case 0x134cfcu: goto label_134cfc;
        case 0x134d20u: goto label_134d20;
        case 0x134d64u: goto label_134d64;
        default: break;
    }

    ctx->pc = 0x134c10u;

    // 0x134c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x134c14: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x134c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x134c1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x134c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x134c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x134c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x134c28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134c2c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x134c2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x134c30: 0xc062118  jal         func_188460
    ctx->pc = 0x134C30u;
    SET_GPR_U32(ctx, 31, 0x134C38u);
    ctx->pc = 0x134C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C30u;
    // 0x134c34: 0xae221b80  sw          $v0, 0x1B80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 7040), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188460u, 0x134C30u, 0x134C38u)) {
        return;
    }
    ctx->pc = 0x134C38u;
label_134c38:
    // 0x134c38: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x134C38u;
    SET_GPR_U32(ctx, 31, 0x134C40u);
    ctx->pc = 0x134C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C38u;
    // 0x134c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x134C38u, 0x134C40u)) {
        return;
    }
    ctx->pc = 0x134C40u;
label_134c40:
    // 0x134c40: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x134c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x134c44: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x134c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x134c48: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x134c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134c4c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x134c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134c50: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x134c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134c54: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x134c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x134c58: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x134c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c5c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x134c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134c60: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x134c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134c64: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x134c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x134c68: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x134c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134c6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x134c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134c70: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x134c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134c74: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x134c74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x134c78: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x134c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x134c7c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x134c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x134c80: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x134c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x134c84: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x134c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x134c88: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x134c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x134c8c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x134c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x134c90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x134c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x134c94: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x134c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134c98: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x134c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134c9c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x134c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x134ca0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x134ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x134ca4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x134ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x134ca8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134cac: 0xb2261a47  sdl         $a2, 0x1A47($s1)
    ctx->pc = 0x134cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134cb0: 0xb6261a40  sdr         $a2, 0x1A40($s1)
    ctx->pc = 0x134cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134cb4: 0xae221a48  sw          $v0, 0x1A48($s1)
    ctx->pc = 0x134cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6728), GPR_U32(ctx, 2));
    // 0x134cb8: 0x26301a40  addiu       $s0, $s1, 0x1A40
    ctx->pc = 0x134cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6720));
    // 0x134cbc: 0xae201a44  sw          $zero, 0x1A44($s1)
    ctx->pc = 0x134cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6724), GPR_U32(ctx, 0));
    // 0x134cc0: 0xc6201a40  lwc1        $f0, 0x1A40($s1)
    ctx->pc = 0x134cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134cc4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x134cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134cc8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x134cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x134ccc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x134cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134cd0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x134cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x134cd4: 0xc6341a44  lwc1        $f20, 0x1A44($s1)
    ctx->pc = 0x134cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134cd8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x134cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x134cdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x134cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x134ce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134ce4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x134ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134ce8: 0x0  nop
    ctx->pc = 0x134ce8u;
    // NOP
    // 0x134cec: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x134CECu;
    {
        const bool branch_taken_0x134cec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x134CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CECu;
        // 0x134cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134cec) {
            ctx->pc = 0x134D5Cu;
            goto label_134d5c;
        }
    }
    ctx->pc = 0x134CF4u;
    // 0x134cf4: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x134CF4u;
    SET_GPR_U32(ctx, 31, 0x134CFCu);
    ctx->pc = 0x134CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CF4u;
    // 0x134cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x134CF4u, 0x134CFCu)) {
        return;
    }
    ctx->pc = 0x134CFCu;
label_134cfc:
    // 0x134cfc: 0x0  nop
    ctx->pc = 0x134cfcu;
    // NOP
    // 0x134d00: 0x0  nop
    ctx->pc = 0x134d00u;
    // NOP
    // 0x134d04: 0x46000044  c1          0x44
    ctx->pc = 0x134d04u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x134d08: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x134d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134d0c: 0x0  nop
    ctx->pc = 0x134d0cu;
    // NOP
    // 0x134d10: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134D10u;
    {
        const bool branch_taken_0x134d10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x134D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D10u;
        // 0x134d14: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d10) {
            ctx->pc = 0x134D44u;
            goto label_134d44;
        }
    }
    ctx->pc = 0x134D18u;
    // 0x134d18: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x134d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134d1c: 0x0  nop
    ctx->pc = 0x134d1cu;
    // NOP
label_134d20:
    // 0x134d20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x134d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d24: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x134d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134d28: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x134d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x134d2c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x134d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x134d30: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x134d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x134d34: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x134d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x134d38: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x134d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x134d3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x134D3Cu;
    {
        const bool branch_taken_0x134d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D3Cu;
        // 0x134d40: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d3c) {
            ctx->pc = 0x134D94u;
            goto label_134d94;
        }
    }
    ctx->pc = 0x134D44u;
label_134d44:
    // 0x134d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d4c: 0x0  nop
    ctx->pc = 0x134d4cu;
    // NOP
    // 0x134d50: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x134d50u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x134d54: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x134D54u;
    {
        const bool branch_taken_0x134d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D54u;
        // 0x134d58: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d54) {
            ctx->pc = 0x134D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134d20;
        }
    }
    ctx->pc = 0x134D5Cu;
label_134d5c:
    // 0x134d5c: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x134D5Cu;
    SET_GPR_U32(ctx, 31, 0x134D64u);
    ctx->pc = 0x134D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D5Cu;
    // 0x134d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x134D5Cu, 0x134D64u)) {
        return;
    }
    ctx->pc = 0x134D64u;
label_134d64:
    // 0x134d64: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x134d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x134d68: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x134d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x134d6c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x134d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134d70: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x134d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134d74: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x134d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134d78: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x134d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x134d7c: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x134d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x134d80: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x134d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x134d84: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x134d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134d88: 0xb2251a47  sdl         $a1, 0x1A47($s1)
    ctx->pc = 0x134d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134d8c: 0xb6251a40  sdr         $a1, 0x1A40($s1)
    ctx->pc = 0x134d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134d90: 0xae261a48  sw          $a2, 0x1A48($s1)
    ctx->pc = 0x134d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6728), GPR_U32(ctx, 6));
label_134d94:
    // 0x134d94: 0xae201874  sw          $zero, 0x1874($s1)
    ctx->pc = 0x134d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6260), GPR_U32(ctx, 0));
    // 0x134d98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x134d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134d9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x134d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134da0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x134da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134da4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x134da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134da8: 0x3e00008  jr          $ra
    ctx->pc = 0x134DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DA8u;
        // 0x134dac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134DB0u;
}
