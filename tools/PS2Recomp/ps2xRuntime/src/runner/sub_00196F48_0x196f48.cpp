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

// Function: sub_00196F48
// Address: 0x196f48 - 0x197100
void sub_00196F48_0x196f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F48_0x196f48");
#endif

    ctx->pc = 0x196f48u;

    // 0x196f48: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x196f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196f4c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x196f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x196f50: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x196f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196f54: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x196f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x196f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196f5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x196f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196f60: 0x46010a42  mul.s       $f9, $f1, $f1
    ctx->pc = 0x196f60u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x196f64: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x196f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196f68: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x196f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196f6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x196f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x196f70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x196f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x196f74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x196f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196f78: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x196f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196f7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x196f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x196f80: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x196f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x196f84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x196f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196f88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x196f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196f8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x196f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x196f90: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x196f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x196f94: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x196f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x196f98: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x196f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x196f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fa0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x196fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196fa4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x196fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196fa8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x196fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x196fac: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x196facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196fb0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x196fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196fb4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x196fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196fb8: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x196fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196fbc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x196fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196fc0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x196fc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x196fc4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196fc8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x196fc8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x196fcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x196fccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x196fd0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x196fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x196fd4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x196fd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x196fd8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x196fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x196fdc: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x196fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x196fe0: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x196fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x196fe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x196fe8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x196fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196fec: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x196fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196ff0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x196ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x196ff4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x196ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196ff8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x196ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196ffc: 0x46000182  mul.s       $f6, $f0, $f0
    ctx->pc = 0x196ffcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x197000: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x197000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197004: 0x46021202  mul.s       $f8, $f2, $f2
    ctx->pc = 0x197004u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x197008: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x197008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19700c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x19700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x197010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x197014: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x197014u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x197018: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x197018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19701c: 0x460319c2  mul.s       $f7, $f3, $f3
    ctx->pc = 0x19701cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x197020: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x197020u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x197024: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x197024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x197028: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x197028u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x19702c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19702cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x197030: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x197030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x197034: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x197034u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x197038: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x197038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x19703c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x19703cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x197040: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x197040u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x197044: 0x46093034  c.lt.s      $f6, $f9
    ctx->pc = 0x197044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197048: 0x46000100  add.s       $f4, $f0, $f0
    ctx->pc = 0x197048u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x19704c: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x19704Cu;
    {
        const bool branch_taken_0x19704c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x197050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19704Cu;
        // 0x197050: 0x460508c0  add.s       $f3, $f1, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19704c) {
            ctx->pc = 0x1970ECu;
            goto label_1970ec;
        }
    }
    ctx->pc = 0x197054u;
    // 0x197054: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x197054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x197058: 0x0  nop
    ctx->pc = 0x197058u;
    // NOP
    // 0x19705c: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x19705cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197060: 0x0  nop
    ctx->pc = 0x197060u;
    // NOP
    // 0x197064: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x197064u;
    {
        const bool branch_taken_0x197064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197064) {
            ctx->pc = 0x197068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197064u;
            // 0x197068: 0x46002087  neg.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x197088u;
            goto label_197088;
        }
    }
    ctx->pc = 0x19706Cu;
    // 0x19706c: 0x46093034  c.lt.s      $f6, $f9
    ctx->pc = 0x19706cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197070: 0x0  nop
    ctx->pc = 0x197070u;
    // NOP
    // 0x197074: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x197074u;
    {
        const bool branch_taken_0x197074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x197078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197074u;
        // 0x197078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197074) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x19707Cu;
    // 0x19707c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19707Cu;
    {
        const bool branch_taken_0x19707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19707Cu;
        // 0x197080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19707c) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x197084u;
    // 0x197084: 0x0  nop
    ctx->pc = 0x197084u;
    // NOP
label_197088:
    // 0x197088: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19708c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19708cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197090: 0x0  nop
    ctx->pc = 0x197090u;
    // NOP
    // 0x197094: 0x0  nop
    ctx->pc = 0x197094u;
    // NOP
    // 0x197098: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x197098u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x19709c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x19709cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1970a0: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1970a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1970a4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1970a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1970a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1970a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1970ac: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1970acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1970b0: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x1970b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1970b4: 0x0  nop
    ctx->pc = 0x1970b4u;
    // NOP
    // 0x1970b8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1970B8u;
    {
        const bool branch_taken_0x1970b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1970BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970B8u;
        // 0x1970bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970b8) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x1970C0u;
    // 0x1970c0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1970c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1970c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1970c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1970c8: 0x46093181  sub.s       $f6, $f6, $f9
    ctx->pc = 0x1970c8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x1970cc: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1970ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1970d0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1970d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1970d4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1970d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1970d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1970d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1970dc: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x1970dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1970e0: 0x0  nop
    ctx->pc = 0x1970e0u;
    // NOP
    // 0x1970e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1970E4u;
    {
        const bool branch_taken_0x1970e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1970e4) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x1970ECu;
label_1970ec:
    // 0x1970ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1970ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1970f0:
    // 0x1970f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1970F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1970F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970F0u;
        // 0x1970f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1970F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1970F8u;
    // 0x1970f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1970f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970fc: 0x0  nop
    ctx->pc = 0x1970fcu;
    // NOP
    ctx->pc = 0x197100u;
}
