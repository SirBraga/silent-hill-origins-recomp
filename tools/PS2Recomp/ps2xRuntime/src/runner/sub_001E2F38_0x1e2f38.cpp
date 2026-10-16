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

// Function: sub_001E2F38
// Address: 0x1e2f38 - 0x1e30e0
void sub_001E2F38_0x1e2f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F38_0x1e2f38");
#endif

    ctx->pc = 0x1e2f38u;

    // 0x1e2f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2f3c: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x1e2f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e2f40: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x1e2f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e2f44: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x1e2f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e2f48: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x1e2f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e2f4c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1e2f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e2f50: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1e2f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e2f54: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1e2f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e2f58: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1e2f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e2f5c: 0xc4a80014  lwc1        $f8, 0x14($a1)
    ctx->pc = 0x1e2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2f60: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e2f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2f64: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x1e2f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2f68: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x1e2f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x1e2f6c: 0xc4a7000c  lwc1        $f7, 0xC($a1)
    ctx->pc = 0x1e2f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2f70: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x1e2f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1e2f74: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x1e2f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e2f78: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x1e2f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1e2f7c: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x1e2f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1e2f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2f84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e2f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e2f88: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e2f88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e2f8c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1e2f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2f90: 0x0  nop
    ctx->pc = 0x1e2f90u;
    // NOP
    // 0x1e2f94: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1E2F94u;
    {
        const bool branch_taken_0x1e2f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F94u;
        // 0x1e2f98: 0xc7aa0000  lwc1        $f10, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f94) {
            ctx->pc = 0x1E2FD8u;
            goto label_1e2fd8;
        }
    }
    ctx->pc = 0x1E2F9Cu;
    // 0x1e2f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2fa4: 0x0  nop
    ctx->pc = 0x1e2fa4u;
    // NOP
    // 0x1e2fa8: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x1e2fa8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1e2fac: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x1e2facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x1e2fb0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1e2fb0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1e2fb4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e2fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e2fb8: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x1e2fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1e2fbc: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x1e2fbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1e2fc0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e2fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e2fc4: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x1e2fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x1e2fc8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e2fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e2fcc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e2fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e2fd0: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x1e2fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e2fd4: 0x0  nop
    ctx->pc = 0x1e2fd4u;
    // NOP
label_1e2fd8:
    // 0x1e2fd8: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x1e2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2fdc: 0xc7ab0004  lwc1        $f11, 0x4($sp)
    ctx->pc = 0x1e2fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2fe0: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x1e2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2fe4: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x1e2fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x1e2fe8: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x1e2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2fec: 0x460758c2  mul.s       $f3, $f11, $f7
    ctx->pc = 0x1e2fecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x1e2ff0: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x1e2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2ff4: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x1e2ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2ff8: 0x46044082  mul.s       $f2, $f8, $f4
    ctx->pc = 0x1e2ff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x1e2ffc: 0xc7ad001c  lwc1        $f13, 0x1C($sp)
    ctx->pc = 0x1e2ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e3000: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e3000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e3004: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x1e3004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1e3008: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e3008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e300c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e300cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3010: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1e3010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1e3014: 0x46045842  mul.s       $f1, $f11, $f4
    ctx->pc = 0x1e3014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1e3018: 0x46074242  mul.s       $f9, $f8, $f7
    ctx->pc = 0x1e3018u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1e301c: 0x46064082  mul.s       $f2, $f8, $f6
    ctx->pc = 0x1e301cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1e3020: 0x46045142  mul.s       $f5, $f10, $f4
    ctx->pc = 0x1e3020u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x1e3024: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x1e3024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x1e3028: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x1e3028u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x1e302c: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x1e302cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x1e3030: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x1e3030u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x1e3034: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e3034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e3038: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x1e3038u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x1e303c: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x1e303cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1e3040: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x1e3040u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x1e3044: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1e3044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1e3048: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e3048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1e304c: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x1e304cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x1e3050: 0x460d5282  mul.s       $f10, $f10, $f13
    ctx->pc = 0x1e3050u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x1e3054: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x1e3054u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x1e3058: 0x460d5ac2  mul.s       $f11, $f11, $f13
    ctx->pc = 0x1e3058u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x1e305c: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x1e305cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x1e3060: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1e3060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1e3064: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x1e3064u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x1e3068: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1e3068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e306c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1e306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e3070: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e3070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e3074: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1e3074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3078: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1e3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e307c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x1e307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3080: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e3080u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e3084: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1e3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3088: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1e3088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1e308c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1e308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3090: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e3090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e3094: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x1e3094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1e3098: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1e3098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e309c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e309cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e30a0: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x1e30a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1e30a4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1e30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30a8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1e30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30ac: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x1e30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e30b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e30b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e30b4: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x1e30b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e30b8: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1e30b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1e30bc: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1e30bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e30c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e30c4: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x1e30c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1e30c8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x1e30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30cc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e30ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e30d0: 0xe483002c  swc1        $f3, 0x2C($a0)
    ctx->pc = 0x1e30d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1e30d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E30D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30D4u;
        // 0x1e30d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E30D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E30DCu;
    // 0x1e30dc: 0x0  nop
    ctx->pc = 0x1e30dcu;
    // NOP
    ctx->pc = 0x1e30e0u;
}
