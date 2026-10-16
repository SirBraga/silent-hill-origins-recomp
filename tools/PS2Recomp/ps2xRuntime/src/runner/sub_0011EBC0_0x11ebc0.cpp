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

// Function: sub_0011EBC0
// Address: 0x11ebc0 - 0x11ed08
void sub_0011EBC0_0x11ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EBC0_0x11ebc0");
#endif

    switch (ctx->pc) {
        case 0x11ec34u: goto label_11ec34;
        default: break;
    }

    ctx->pc = 0x11ebc0u;

    // 0x11ebc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11ebc4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11ebc8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11ebcc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11ebd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ebd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebd4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11ebd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ebd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebdc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x11ebdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11ebe0: 0x263200e0  addiu       $s2, $s1, 0xE0
    ctx->pc = 0x11ebe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x11ebe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ebe8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11ebe8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11ebec: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x11ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x11ebf0: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x11ebf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x11ebf4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x11ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x11ebf8: 0x6a2200e7  ldl         $v0, 0xE7($s1)
    ctx->pc = 0x11ebf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11ebfc: 0x6e2200e0  ldr         $v0, 0xE0($s1)
    ctx->pc = 0x11ebfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11ec00: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x11ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x11ec04: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x11ec04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ec08: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x11ec08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ec0c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11ec10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ec10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec14: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x11ec14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11ec18: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x11ec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11ec1c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x11ec1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11ec20: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x11ec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ec24: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x11ec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ec28: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x11ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x11ec2c: 0xc05eb1a  jal         func_17AC68
    ctx->pc = 0x11EC2Cu;
    SET_GPR_U32(ctx, 31, 0x11EC34u);
    ctx->pc = 0x11EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC2Cu;
    // 0x11ec30: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17AC68u, 0x11EC2Cu, 0x11EC34u)) {
        return;
    }
    ctx->pc = 0x11EC34u;
label_11ec34:
    // 0x11ec34: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x11ec34u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x11ec38: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x11ec38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec3c: 0x0  nop
    ctx->pc = 0x11ec3cu;
    // NOP
    // 0x11ec40: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x11EC40u;
    {
        const bool branch_taken_0x11ec40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec40) {
            ctx->pc = 0x11EC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC40u;
            // 0x11ec44: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC50u;
            goto label_11ec50;
        }
    }
    ctx->pc = 0x11EC48u;
    // 0x11ec48: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11EC48u;
    {
        const bool branch_taken_0x11ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC48u;
        // 0x11ec4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec48) {
            ctx->pc = 0x11ECECu;
            goto label_11ecec;
        }
    }
    ctx->pc = 0x11EC50u;
label_11ec50:
    // 0x11ec50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ec54: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ec58: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec5c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11ec5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11ec60: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11ec60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11ec64: 0xc62300e0  lwc1        $f3, 0xE0($s1)
    ctx->pc = 0x11ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ec68: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11ec68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11ec6c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x11ec6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11ec70: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x11ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11ec74: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x11ec74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11ec78: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x11ec78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11ec7c: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x11ec7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11ec80: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x11ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ec84: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x11ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ec88: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x11ec88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ec8c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x11ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x11ec90: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x11ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ec94: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x11ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec98: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11ec98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11ec9c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x11ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11eca0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x11eca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11eca4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x11eca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11eca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ecac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x11ecacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11ecb0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x11ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ecb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11ecb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11ecb8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x11ecb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11ecbc: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x11ecbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11ecc0: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x11ecc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11ecc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x11ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ecc8: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x11ecc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11eccc: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x11ecccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ecd0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11ecd4: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x11ecd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11ecd8: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x11ecd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11ecdc: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x11ecdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ece0: 0xb22600f7  sdl         $a2, 0xF7($s1)
    ctx->pc = 0x11ece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ece4: 0xb62600f0  sdr         $a2, 0xF0($s1)
    ctx->pc = 0x11ece4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ece8: 0xae2700f8  sw          $a3, 0xF8($s1)
    ctx->pc = 0x11ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 7));
label_11ecec:
    // 0x11ecec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11ececu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ecf0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11ecf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ecf4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11ecf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ecf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11ecf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ecfc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x11ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ed00: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED00u;
        // 0x11ed04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ED08u;
}
