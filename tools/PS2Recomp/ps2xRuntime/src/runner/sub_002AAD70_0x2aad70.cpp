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

// Function: sub_002AAD70
// Address: 0x2aad70 - 0x2ab048
void sub_002AAD70_0x2aad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAD70_0x2aad70");
#endif

    switch (ctx->pc) {
        case 0x2aae60u: goto label_2aae60;
        case 0x2aae90u: goto label_2aae90;
        default: break;
    }

    ctx->pc = 0x2aad70u;

    // 0x2aad70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aad74: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2aad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2aad78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2aad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2aad7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2aad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2aad84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aad88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aad88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad8c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x2aad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2aad90: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2aad90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2aad94: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2AAD94u;
    {
        const bool branch_taken_0x2aad94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD94u;
        // 0x2aad98: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad94) {
            ctx->pc = 0x2AAE68u;
            goto label_2aae68;
        }
    }
    ctx->pc = 0x2AAD9Cu;
    // 0x2aad9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aada0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AADA0u;
    {
        const bool branch_taken_0x2aada0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADA0u;
        // 0x2aada4: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aada0) {
            ctx->pc = 0x2AADB0u;
            goto label_2aadb0;
        }
    }
    ctx->pc = 0x2AADA8u;
    // 0x2aada8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AADA8u;
    {
        const bool branch_taken_0x2aada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADA8u;
        // 0x2aadac: 0x24420048  addiu       $v0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aada8) {
            ctx->pc = 0x2AADB4u;
            goto label_2aadb4;
        }
    }
    ctx->pc = 0x2AADB0u;
label_2aadb0:
    // 0x2aadb0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2aadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2aadb4:
    // 0x2aadb4: 0x5040009d  beql        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x2AADB4u;
    {
        const bool branch_taken_0x2aadb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aadb4) {
            ctx->pc = 0x2AADB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AADB4u;
            // 0x2aadb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB02Cu;
            goto label_2ab02c;
        }
    }
    ctx->pc = 0x2AADBCu;
    // 0x2aadbc: 0x68430013  ldl         $v1, 0x13($v0)
    ctx->pc = 0x2aadbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aadc0: 0x6c43000c  ldr         $v1, 0xC($v0)
    ctx->pc = 0x2aadc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aadc4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2aadc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2aadc8: 0xb2230017  sdl         $v1, 0x17($s1)
    ctx->pc = 0x2aadc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aadcc: 0xb6230010  sdr         $v1, 0x10($s1)
    ctx->pc = 0x2aadccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aadd0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2aadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x2aadd4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2aadd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aadd8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2aadd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aaddc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2aaddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aade0: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2aade0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aade4: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2aade4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aade8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2aade8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2aadec: 0xc643004c  lwc1        $f3, 0x4C($s2)
    ctx->pc = 0x2aadecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aadf0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2aadf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aadf4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2aadf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aadf8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2aadf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2aadfc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x2aadfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aae00: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2aae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aae04: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2aae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aae08: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2aae08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2aae0c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x2aae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aae10: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2aae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2aae14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aae18: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2aae18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2aae1c: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2aae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae20: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2aae20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2aae24: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x2aae24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2aae28: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2aae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae2c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aae2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aae30: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x2aae30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2aae34: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2aae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae38: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aae38u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aae3c: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2aae3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2aae40: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2aae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae44: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2aae44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2aae48: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2AAE48u;
    {
        const bool branch_taken_0x2aae48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE48u;
        // 0x2aae4c: 0xe6250008  swc1        $f5, 0x8($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae48) {
            ctx->pc = 0x2AB028u;
            goto label_2ab028;
        }
    }
    ctx->pc = 0x2AAE50u;
    // 0x2aae50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aae50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae58: 0xc0acd9e  jal         func_2B3678
    ctx->pc = 0x2AAE58u;
    SET_GPR_U32(ctx, 31, 0x2AAE60u);
    ctx->pc = 0x2AAE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE58u;
    // 0x2aae5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3678u, 0x2AAE58u, 0x2AAE60u)) {
        return;
    }
    ctx->pc = 0x2AAE60u;
label_2aae60:
    // 0x2aae60: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2AAE60u;
    {
        const bool branch_taken_0x2aae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE60u;
        // 0x2aae64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae60) {
            ctx->pc = 0x2AB02Cu;
            goto label_2ab02c;
        }
    }
    ctx->pc = 0x2AAE68u;
label_2aae68:
    // 0x2aae68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aae6c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AAE6Cu;
    {
        const bool branch_taken_0x2aae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE6Cu;
        // 0x2aae70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae6c) {
            ctx->pc = 0x2AAE9Cu;
            goto label_2aae9c;
        }
    }
    ctx->pc = 0x2AAE74u;
    // 0x2aae74: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2aae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2aae78: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2aae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aae7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2aae7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2aae80: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAE80u;
    {
        const bool branch_taken_0x2aae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aae80) {
            ctx->pc = 0x2AAE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAE80u;
            // 0x2aae84: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAE94u;
            goto label_2aae94;
        }
    }
    ctx->pc = 0x2AAE88u;
    // 0x2aae88: 0xc0952e0  jal         func_254B80
    ctx->pc = 0x2AAE88u;
    SET_GPR_U32(ctx, 31, 0x2AAE90u);
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x2AAE88u, 0x2AAE90u)) {
        return;
    }
    ctx->pc = 0x2AAE90u;
label_2aae90:
    // 0x2aae90: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2aae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2aae94:
    // 0x2aae94: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AAE94u;
    {
        const bool branch_taken_0x2aae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE94u;
        // 0x2aae98: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae94) {
            ctx->pc = 0x2AAEE4u;
            goto label_2aaee4;
        }
    }
    ctx->pc = 0x2AAE9Cu;
label_2aae9c:
    // 0x2aae9c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAE9Cu;
    {
        const bool branch_taken_0x2aae9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aae9c) {
            ctx->pc = 0x2AAEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAE9Cu;
            // 0x2aaea0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAEB4u;
            goto label_2aaeb4;
        }
    }
    ctx->pc = 0x2AAEA4u;
    // 0x2aaea4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2aaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2aaea8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2aaea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2aaeac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AAEACu;
    {
        const bool branch_taken_0x2aaeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEACu;
        // 0x2aaeb0: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeac) {
            ctx->pc = 0x2AAEE4u;
            goto label_2aaee4;
        }
    }
    ctx->pc = 0x2AAEB4u;
label_2aaeb4:
    // 0x2aaeb4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AAEB4u;
    {
        const bool branch_taken_0x2aaeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEB4u;
        // 0x2aaeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeb4) {
            ctx->pc = 0x2AAEE4u;
            goto label_2aaee4;
        }
    }
    ctx->pc = 0x2AAEBCu;
    // 0x2aaebc: 0xc78680cc  lwc1        $f6, -0x7F34($gp)
    ctx->pc = 0x2aaebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aaec0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aaec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaec4: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2aaec4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2aaec8: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x2aaec8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2aaecc: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2aaeccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2aaed0: 0xe6260004  swc1        $f6, 0x4($s1)
    ctx->pc = 0x2aaed0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2aaed4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2aaed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2aaed8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2aaed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2aaedc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2AAEDCu;
    {
        const bool branch_taken_0x2aaedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEDCu;
        // 0x2aaee0: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaedc) {
            ctx->pc = 0x2AB02Cu;
            goto label_2ab02c;
        }
    }
    ctx->pc = 0x2AAEE4u;
label_2aaee4:
    // 0x2aaee4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAEE4u;
    {
        const bool branch_taken_0x2aaee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaee4) {
            ctx->pc = 0x2AAEF4u;
            goto label_2aaef4;
        }
    }
    ctx->pc = 0x2AAEECu;
    // 0x2aaeec: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2AAEECu;
    {
        const bool branch_taken_0x2aaeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEECu;
        // 0x2aaef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeec) {
            ctx->pc = 0x2AB02Cu;
            goto label_2ab02c;
        }
    }
    ctx->pc = 0x2AAEF4u;
label_2aaef4:
    // 0x2aaef4: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AAEF4u;
    {
        const bool branch_taken_0x2aaef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaef4) {
            ctx->pc = 0x2AAFB8u;
            goto label_2aafb8;
        }
    }
    ctx->pc = 0x2AAEFCu;
    // 0x2aaefc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2aaefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf00: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2aaf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaf04: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x2aaf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aaf08: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2aaf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaf0c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2aaf0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aaf10: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2aaf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aaf14: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2aaf14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2aaf18: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2aaf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf1c: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2aaf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aaf20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2aaf20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2aaf24: 0xc6070014  lwc1        $f7, 0x14($s0)
    ctx->pc = 0x2aaf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2aaf28: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2aaf28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2aaf2c: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x2aaf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aaf30: 0xc6080008  lwc1        $f8, 0x8($s0)
    ctx->pc = 0x2aaf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2aaf34: 0xc60a0018  lwc1        $f10, 0x18($s0)
    ctx->pc = 0x2aaf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2aaf38: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2aaf38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2aaf3c: 0xc6090028  lwc1        $f9, 0x28($s0)
    ctx->pc = 0x2aaf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2aaf40: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2aaf40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aaf44: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2aaf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aaf48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aaf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaf4c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2aaf4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2aaf50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2aaf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf54: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2aaf54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2aaf58: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2aaf58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2aaf5c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2aaf5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2aaf60: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aaf60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aaf64: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2aaf64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aaf68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2aaf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf6c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2aaf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaf70: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2aaf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2aaf74: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2aaf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaf78: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2aaf78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2aaf7c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2aaf7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2aaf80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aaf80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aaf84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aaf84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aaf88: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2aaf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2aaf8c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2aaf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaf90: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x2aaf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aaf94: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2aaf94u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2aaf98: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2aaf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaf9c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2aaf9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2aafa0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2aafa0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2aafa4: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2aafa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aafa8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2aafa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2aafac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAFACu;
    {
        const bool branch_taken_0x2aafac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFACu;
        // 0x2aafb0: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafac) {
            ctx->pc = 0x2AAFD0u;
            goto label_2aafd0;
        }
    }
    ctx->pc = 0x2AAFB4u;
    // 0x2aafb4: 0x0  nop
    ctx->pc = 0x2aafb4u;
    // NOP
label_2aafb8:
    // 0x2aafb8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2aafb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aafbc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2aafbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aafc0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2aafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aafc4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2aafc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aafc8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2aafc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aafcc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2aafccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2aafd0:
    // 0x2aafd0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2aafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aafd4: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2aafd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aafd8: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x2aafd8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2aafdc: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2aafdcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2aafe0: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2aafe0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2aafe4: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x2aafe4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2aafe8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2aafe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aafec: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2aafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aaff0: 0x46060940  add.s       $f5, $f1, $f6
    ctx->pc = 0x2aaff0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2aaff4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2aaff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaff8: 0x46062080  add.s       $f2, $f4, $f6
    ctx->pc = 0x2aaff8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2aaffc: 0x460600c0  add.s       $f3, $f0, $f6
    ctx->pc = 0x2aaffcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2ab000: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x2ab000u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2ab004: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2ab004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2ab008: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2ab008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2ab00c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2ab00cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2ab010: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2ab010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2ab014: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2ab014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2ab018: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x2ab018u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2ab01c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2ab01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ab020: 0xe6240014  swc1        $f4, 0x14($s1)
    ctx->pc = 0x2ab020u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2ab024: 0x0  nop
    ctx->pc = 0x2ab024u;
    // NOP
label_2ab028:
    // 0x2ab028: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ab028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab02c:
    // 0x2ab02c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ab02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ab030: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ab030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab034: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ab034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab038: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ab038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab03c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB03Cu;
        // 0x2ab040: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB044u;
    // 0x2ab044: 0x0  nop
    ctx->pc = 0x2ab044u;
    // NOP
    ctx->pc = 0x2ab048u;
}
