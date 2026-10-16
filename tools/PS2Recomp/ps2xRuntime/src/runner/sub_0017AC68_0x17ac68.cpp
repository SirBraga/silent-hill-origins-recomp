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

// Function: sub_0017AC68
// Address: 0x17ac68 - 0x17ae08
void sub_0017AC68_0x17ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AC68_0x17ac68");
#endif

    switch (ctx->pc) {
        case 0x17ac94u: goto label_17ac94;
        case 0x17ad34u: goto label_17ad34;
        default: break;
    }

    ctx->pc = 0x17ac68u;

    // 0x17ac68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17ac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17ac6c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x17ac70: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x17ac74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17ac74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac78: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x17ac78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x17ac7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ac7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac80: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17ac84: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x17AC84u;
    {
        const bool branch_taken_0x17ac84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC84u;
        // 0x17ac88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac84) {
            ctx->pc = 0x17ADE8u;
            goto label_17ade8;
        }
    }
    ctx->pc = 0x17AC8Cu;
    // 0x17ac8c: 0xc05e396  jal         func_178E58
    ctx->pc = 0x17AC8Cu;
    SET_GPR_U32(ctx, 31, 0x17AC94u);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x17AC8Cu, 0x17AC94u)) {
        return;
    }
    ctx->pc = 0x17AC94u;
label_17ac94:
    // 0x17ac94: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x17AC94u;
    {
        const bool branch_taken_0x17ac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac94) {
            ctx->pc = 0x17ADE8u;
            goto label_17ade8;
        }
    }
    ctx->pc = 0x17AC9Cu;
    // 0x17ac9c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x17ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17aca0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x17aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aca4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x17aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17aca8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17aca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17acac: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x17acacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x17acb0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x17acb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x17acb4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17acb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17acb8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x17acb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17acbc: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x17acbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17acc0: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x17acc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17acc4: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x17acc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17acc8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x17acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17accc: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x17acccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17acd0: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x17acd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17acd4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x17acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x17acd8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x17acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17acdc: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x17acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ace0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x17ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ace4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x17ace4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x17ace8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x17ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17acec: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x17acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17acf0: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x17acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17acf4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x17acf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x17acf8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x17acf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17acfc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17acfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17ad00: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x17ad00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ad04: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17ad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17ad08: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x17ad08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17ad0c: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x17ad0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17ad10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x17ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17ad14: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x17ad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ad18: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x17ad18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ad1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x17ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x17ad20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ad2c: 0xc086156  jal         func_218558
    ctx->pc = 0x17AD2Cu;
    SET_GPR_U32(ctx, 31, 0x17AD34u);
    ctx->pc = 0x17AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD2Cu;
    // 0x17ad30: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x17AD2Cu, 0x17AD34u)) {
        return;
    }
    ctx->pc = 0x17AD34u;
label_17ad34:
    // 0x17ad34: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x17AD34u;
    {
        const bool branch_taken_0x17ad34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD34u;
        // 0x17ad38: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad34) {
            ctx->pc = 0x17ADECu;
            goto label_17adec;
        }
    }
    ctx->pc = 0x17AD3Cu;
    // 0x17ad3c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x17ad3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17ad40: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x17ad40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17ad44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ad48: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x17ad48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ad4c: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x17ad4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ad50: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x17ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x17ad54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ad58: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x17ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x17ad5c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x17ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ad60: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x17ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17ad64: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad68: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x17ad68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x17ad6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ad70: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x17ad70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x17ad74: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x17ad74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x17ad78: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x17ad78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17ad7c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x17ad7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x17ad80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x17ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17ad84: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x17ad84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17ad88: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x17ad88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17ad8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ad90: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x17ad90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ad94: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x17ad94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ad98: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x17ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x17ad9c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x17ad9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17ada0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x17ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ada4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x17ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ada8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x17ada8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x17adac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17adb0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x17adb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x17adb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17adb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17adb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17adb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17adbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17adbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17adc0: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x17adc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17adc4: 0x0  nop
    ctx->pc = 0x17adc4u;
    // NOP
    // 0x17adc8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17ADC8u;
    {
        const bool branch_taken_0x17adc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADC8u;
        // 0x17adcc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adc8) {
            ctx->pc = 0x17ADECu;
            goto label_17adec;
        }
    }
    ctx->pc = 0x17ADD0u;
    // 0x17add0: 0x0  nop
    ctx->pc = 0x17add0u;
    // NOP
    // 0x17add4: 0x0  nop
    ctx->pc = 0x17add4u;
    // NOP
    // 0x17add8: 0x46010504  c1          0x10504
    ctx->pc = 0x17add8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[1]);
    // 0x17addc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17ADDCu;
    {
        const bool branch_taken_0x17addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADDCu;
        // 0x17ade0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17addc) {
            ctx->pc = 0x17ADECu;
            goto label_17adec;
        }
    }
    ctx->pc = 0x17ADE4u;
    // 0x17ade4: 0x0  nop
    ctx->pc = 0x17ade4u;
    // NOP
label_17ade8:
    // 0x17ade8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ade8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17adec:
    // 0x17adec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x17adecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17adf0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17adf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17adf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17adf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17adf8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x17adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17adfc: 0x3e00008  jr          $ra
    ctx->pc = 0x17ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADFCu;
        // 0x17ae00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE04u;
    // 0x17ae04: 0x0  nop
    ctx->pc = 0x17ae04u;
    // NOP
    ctx->pc = 0x17ae08u;
}
