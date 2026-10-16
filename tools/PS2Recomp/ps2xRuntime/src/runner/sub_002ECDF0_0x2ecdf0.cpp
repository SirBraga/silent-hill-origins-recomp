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

// Function: sub_002ECDF0
// Address: 0x2ecdf0 - 0x2ecf20
void sub_002ECDF0_0x2ecdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECDF0_0x2ecdf0");
#endif

    switch (ctx->pc) {
        case 0x2ece20u: goto label_2ece20;
        case 0x2ece9cu: goto label_2ece9c;
        default: break;
    }

    ctx->pc = 0x2ecdf0u;

    // 0x2ecdf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ecdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ecdf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ecdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ecdf8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ecdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ecdfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ecdfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ece00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ece04: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x2ece04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2ece08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ece08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ece0c: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2ece0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x2ece10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ece10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ece14: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ece14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2ece18: 0xc0babdc  jal         func_2EAF70
    ctx->pc = 0x2ECE18u;
    SET_GPR_U32(ctx, 31, 0x2ECE20u);
    ctx->pc = 0x2ECE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE18u;
    // 0x2ece1c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAF70u, 0x2ECE18u, 0x2ECE20u)) {
        return;
    }
    ctx->pc = 0x2ECE20u;
label_2ece20:
    // 0x2ece20: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2ECE20u;
    {
        const bool branch_taken_0x2ece20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE20u;
        // 0x2ece24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece20) {
            ctx->pc = 0x2ECF04u;
            goto label_2ecf04;
        }
    }
    ctx->pc = 0x2ECE28u;
    // 0x2ece28: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ece28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ece2c: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x2ece2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2ece30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ece30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ece34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ece38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ece38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece3c: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x2ece3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x2ece40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ece40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ece44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ece44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ece48: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2ece48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ece4c: 0xc78182fc  lwc1        $f1, -0x7D04($gp)
    ctx->pc = 0x2ece4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ece50: 0xc7828300  lwc1        $f2, -0x7D00($gp)
    ctx->pc = 0x2ece50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ece54: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2ece54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2ece58: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2ece58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x2ece5c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2ece5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2ece60: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2ece60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2ece64: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x2ece64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ece68: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ece68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2ece6c: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x2ece6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2ece70: 0xe6230064  swc1        $f3, 0x64($s1)
    ctx->pc = 0x2ece70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2ece74: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2ece74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2ece78: 0xe622006c  swc1        $f2, 0x6C($s1)
    ctx->pc = 0x2ece78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2ece7c: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2ece7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2ece80: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2ece80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2ece84: 0xe6230058  swc1        $f3, 0x58($s1)
    ctx->pc = 0x2ece84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x2ece88: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x2ece88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2ece8c: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2ece8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2ece90: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2ece90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ece94: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2ECE94u;
    SET_GPR_U32(ctx, 31, 0x2ECE9Cu);
    ctx->pc = 0x2ECE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE94u;
    // 0x2ece98: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2ECE94u, 0x2ECE9Cu)) {
        return;
    }
    ctx->pc = 0x2ECE9Cu;
label_2ece9c:
    // 0x2ece9c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2ece9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ecea0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2ecea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ecea4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2ecea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecea8: 0xb242006b  sdl         $v0, 0x6B($s2)
    ctx->pc = 0x2ecea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eceac: 0xb6420064  sdr         $v0, 0x64($s2)
    ctx->pc = 0x2eceacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eceb0: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x2eceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
    // 0x2eceb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2eceb8: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x2eceb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ecebc: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x2ecebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ecec0: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x2ecec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecec4: 0xb2470077  sdl         $a3, 0x77($s2)
    ctx->pc = 0x2ecec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ecec8: 0xb6470070  sdr         $a3, 0x70($s2)
    ctx->pc = 0x2ecec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ececc: 0xae480078  sw          $t0, 0x78($s2)
    ctx->pc = 0x2ececcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 8));
    // 0x2eced0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2eced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eced4: 0x24045622  addiu       $a0, $zero, 0x5622
    ctx->pc = 0x2eced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22050));
    // 0x2eced8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2eced8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ecedc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ecedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ecee0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ecee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecee4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2ecee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x2ecee8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ecee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2eceec: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2eceecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2ecef0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ecef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ecef4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2ecef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2ecef8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2ecef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2ecefc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECEFCu;
    {
        const bool branch_taken_0x2ecefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEFCu;
        // 0x2ecf00: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecefc) {
            ctx->pc = 0x2ECF08u;
            goto label_2ecf08;
        }
    }
    ctx->pc = 0x2ECF04u;
label_2ecf04:
    // 0x2ecf04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ecf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf08:
    // 0x2ecf08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ecf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecf0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ecf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecf10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ecf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecf14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ecf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF18u;
        // 0x2ecf1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF20u;
}
