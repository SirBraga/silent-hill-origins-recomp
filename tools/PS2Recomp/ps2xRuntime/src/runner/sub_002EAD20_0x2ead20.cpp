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

// Function: sub_002EAD20
// Address: 0x2ead20 - 0x2eaf70
void sub_002EAD20_0x2ead20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAD20_0x2ead20");
#endif

    switch (ctx->pc) {
        case 0x2eae44u: goto label_2eae44;
        case 0x2eaf3cu: goto label_2eaf3c;
        default: break;
    }

    ctx->pc = 0x2ead20u;

    // 0x2ead20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ead20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ead24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ead24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ead28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ead28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ead2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ead2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ead30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ead34: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x2ead34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2ead38: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ead38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ead3c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2ead3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ead40: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2ead40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ead44: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2ead44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ead48: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2ead48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ead4c: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x2ead4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ead50: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x2ead50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ead54: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x2ead54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ead58: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x2ead58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ead5c: 0xb08213ef  sdl         $v0, 0x13EF($a0)
    ctx->pc = 0x2ead5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead60: 0xb48213e8  sdr         $v0, 0x13E8($a0)
    ctx->pc = 0x2ead60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead64: 0xb08313f7  sdl         $v1, 0x13F7($a0)
    ctx->pc = 0x2ead64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead68: 0xb48313f0  sdr         $v1, 0x13F0($a0)
    ctx->pc = 0x2ead68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead6c: 0xb08513ff  sdl         $a1, 0x13FF($a0)
    ctx->pc = 0x2ead6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead70: 0xb48513f8  sdr         $a1, 0x13F8($a0)
    ctx->pc = 0x2ead70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead74: 0xb0861407  sdl         $a2, 0x1407($a0)
    ctx->pc = 0x2ead74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead78: 0xb4861400  sdr         $a2, 0x1400($a0)
    ctx->pc = 0x2ead78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead7c: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x2ead7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ead80: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x2ead80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ead84: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x2ead84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ead88: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x2ead88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ead8c: 0xb082140f  sdl         $v0, 0x140F($a0)
    ctx->pc = 0x2ead8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead90: 0xb4821408  sdr         $v0, 0x1408($a0)
    ctx->pc = 0x2ead90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead94: 0xb0831417  sdl         $v1, 0x1417($a0)
    ctx->pc = 0x2ead94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead98: 0xb4831410  sdr         $v1, 0x1410($a0)
    ctx->pc = 0x2ead98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ead9c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x2ead9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x2eada0: 0x2403d8f0  addiu       $v1, $zero, -0x2710
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
    // 0x2eada4: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x2eada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x2eada8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eadac: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EADACu;
    {
        const bool branch_taken_0x2eadac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eadac) {
            ctx->pc = 0x2EADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADACu;
            // 0x2eadb0: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EADBCu;
            goto label_2eadbc;
        }
    }
    ctx->pc = 0x2EADB4u;
    // 0x2eadb4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2EADB4u;
    {
        const bool branch_taken_0x2eadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EADB4u;
        // 0x2eadb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadb4) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EADBCu;
label_2eadbc:
    // 0x2eadbc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2eadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2eadc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eadc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eadc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eadc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eadc8: 0x0  nop
    ctx->pc = 0x2eadc8u;
    // NOP
    // 0x2eadcc: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x2EADCCu;
    {
        const bool branch_taken_0x2eadcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eadcc) {
            ctx->pc = 0x2EADD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADCCu;
            // 0x2eadd0: 0xc621000c  lwc1        $f1, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAE58u;
            goto label_2eae58;
        }
    }
    ctx->pc = 0x2EADD4u;
    // 0x2eadd4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2eadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2eadd8: 0x443001f  bgezl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EADD8u;
    {
        const bool branch_taken_0x2eadd8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2eadd8) {
            ctx->pc = 0x2EADDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADD8u;
            // 0x2eaddc: 0xc621000c  lwc1        $f1, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAE58u;
            goto label_2eae58;
        }
    }
    ctx->pc = 0x2EADE0u;
    // 0x2eade0: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x2eade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eade4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2eade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eade8: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2eade8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2eadec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2eadecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eadf0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2eadf0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2eadf4: 0xc78282c8  lwc1        $f2, -0x7D38($gp)
    ctx->pc = 0x2eadf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eadf8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2eadf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2eadfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eadfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eae00: 0xe6010668  swc1        $f1, 0x668($s0)
    ctx->pc = 0x2eae00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1640), bits); }
    // 0x2eae04: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2eae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eae08: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2eae08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eae0c: 0x0  nop
    ctx->pc = 0x2eae0cu;
    // NOP
    // 0x2eae10: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x2EAE10u;
    {
        const bool branch_taken_0x2eae10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE10u;
        // 0x2eae14: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae10) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAE18u;
    // 0x2eae18: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eae1c: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2eae1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2eae20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eae20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae24: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x2eae24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x2eae28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2eae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2eae2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eae2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eae30: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x2eae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2eae34: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2eae34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2eae38: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x2eae38u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[0]);
    // 0x2eae3c: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x2EAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE44u);
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x2EAE3Cu, 0x2EAE44u)) {
        return;
    }
    ctx->pc = 0x2EAE44u;
label_2eae44:
    // 0x2eae44: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2eae44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2eae48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eae48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eae4c: 0xe601066c  swc1        $f1, 0x66C($s0)
    ctx->pc = 0x2eae4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1644), bits); }
    // 0x2eae50: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2EAE50u;
    {
        const bool branch_taken_0x2eae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae50) {
            ctx->pc = 0x2EAF18u;
            goto label_2eaf18;
        }
    }
    ctx->pc = 0x2EAE58u;
label_2eae58:
    // 0x2eae58: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2eae58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2eae5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eae5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eae60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eae64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2EAE64u;
    {
        const bool branch_taken_0x2eae64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eae64) {
            ctx->pc = 0x2EAE90u;
            goto label_2eae90;
        }
    }
    ctx->pc = 0x2EAE6Cu;
    // 0x2eae6c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2eae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eae70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eae70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2eae74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eae74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eae78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eae7c: 0x0  nop
    ctx->pc = 0x2eae7cu;
    // NOP
    // 0x2eae80: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2EAE80u;
    {
        const bool branch_taken_0x2eae80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE80u;
        // 0x2eae84: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae80) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAE88u;
    // 0x2eae88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2EAE88u;
    {
        const bool branch_taken_0x2eae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE88u;
        // 0x2eae8c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae88) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAE90u;
label_2eae90:
    // 0x2eae90: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2eae90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2eae94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eae94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eae98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eae9c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2EAE9Cu;
    {
        const bool branch_taken_0x2eae9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eae9c) {
            ctx->pc = 0x2EAEC8u;
            goto label_2eaec8;
        }
    }
    ctx->pc = 0x2EAEA4u;
    // 0x2eaea4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2eaea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eaea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eaeac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eaeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaeb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eaeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaeb4: 0x0  nop
    ctx->pc = 0x2eaeb4u;
    // NOP
    // 0x2eaeb8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2EAEB8u;
    {
        const bool branch_taken_0x2eaeb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB8u;
        // 0x2eaebc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeb8) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAEC0u;
    // 0x2eaec0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EAEC0u;
    {
        const bool branch_taken_0x2eaec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEC0u;
        // 0x2eaec4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaec0) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAEC8u;
label_2eaec8:
    // 0x2eaec8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2eaec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2eaecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eaeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaed0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eaed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaed4: 0x0  nop
    ctx->pc = 0x2eaed4u;
    // NOP
    // 0x2eaed8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAED8u;
    {
        const bool branch_taken_0x2eaed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaed8) {
            ctx->pc = 0x2EAEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAED8u;
            // 0x2eaedc: 0xc6210010  lwc1        $f1, 0x10($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAEF8u;
            goto label_2eaef8;
        }
    }
    ctx->pc = 0x2EAEE0u;
    // 0x2eaee0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2eaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2eaee4: 0x28420191  slti        $v0, $v0, 0x191
    ctx->pc = 0x2eaee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x2eaee8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAEE8u;
    {
        const bool branch_taken_0x2eaee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEE8u;
        // 0x2eaeec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaee8) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAEF0u;
    // 0x2eaef0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAEF0u;
    {
        const bool branch_taken_0x2eaef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEF0u;
        // 0x2eaef4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaef0) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAEF8u;
label_2eaef8:
    // 0x2eaef8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eaef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2eaefc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eaefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eaf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaf04: 0x0  nop
    ctx->pc = 0x2eaf04u;
    // NOP
    // 0x2eaf08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAF08u;
    {
        const bool branch_taken_0x2eaf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF08u;
        // 0x2eaf0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf08) {
            ctx->pc = 0x2EAF14u;
            goto label_2eaf14;
        }
    }
    ctx->pc = 0x2EAF10u;
    // 0x2eaf10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eaf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eaf14:
    // 0x2eaf14: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x2eaf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
label_2eaf18:
    // 0x2eaf18: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2eaf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaf1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eaf1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eaf20: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2eaf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2eaf24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2eaf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eaf28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2eaf2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eaf2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eaf30: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x2eaf30u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[13]);
    // 0x2eaf34: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x2EAF34u;
    SET_GPR_U32(ctx, 31, 0x2EAF3Cu);
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x2EAF34u, 0x2EAF3Cu)) {
        return;
    }
    ctx->pc = 0x2EAF3Cu;
label_2eaf3c:
    // 0x2eaf3c: 0xc78182cc  lwc1        $f1, -0x7D34($gp)
    ctx->pc = 0x2eaf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaf40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eaf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eaf44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2eaf44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eaf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eaf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eaf4c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2eaf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eaf50: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eaf50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eaf54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2eaf54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eaf58: 0xa602065e  sh          $v0, 0x65E($s0)
    ctx->pc = 0x2eaf58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1630), (uint16_t)GPR_U32(ctx, 2));
    // 0x2eaf5c: 0xa602065c  sh          $v0, 0x65C($s0)
    ctx->pc = 0x2eaf5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1628), (uint16_t)GPR_U32(ctx, 2));
    // 0x2eaf60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2eaf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF64u;
        // 0x2eaf68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAF6Cu;
    // 0x2eaf6c: 0x0  nop
    ctx->pc = 0x2eaf6cu;
    // NOP
    ctx->pc = 0x2eaf70u;
}
