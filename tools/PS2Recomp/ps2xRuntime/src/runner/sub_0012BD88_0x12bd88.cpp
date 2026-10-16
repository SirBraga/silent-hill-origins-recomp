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

// Function: sub_0012BD88
// Address: 0x12bd88 - 0x12be90
void sub_0012BD88_0x12bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BD88_0x12bd88");
#endif

    switch (ctx->pc) {
        case 0x12bda4u: goto label_12bda4;
        case 0x12bdacu: goto label_12bdac;
        case 0x12bdf4u: goto label_12bdf4;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be44u: goto label_12be44;
        case 0x12be7cu: goto label_12be7c;
        default: break;
    }

    ctx->pc = 0x12bd88u;

    // 0x12bd88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12bd8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12bd90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12bd94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12bd9c: 0xc04adea  jal         func_12B7A8
    ctx->pc = 0x12BD9Cu;
    SET_GPR_U32(ctx, 31, 0x12BDA4u);
    ctx->pc = 0x12BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD9Cu;
    // 0x12bda0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B7A8u, 0x12BD9Cu, 0x12BDA4u)) {
        return;
    }
    ctx->pc = 0x12BDA4u;
label_12bda4:
    // 0x12bda4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x12BDA4u;
    SET_GPR_U32(ctx, 31, 0x12BDACu);
    ctx->pc = 0x12BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BDA4u;
    // 0x12bda8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12BDA4u, 0x12BDACu)) {
        return;
    }
    ctx->pc = 0x12BDACu;
label_12bdac:
    // 0x12bdac: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x12bdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12bdb0: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x12bdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12bdb4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x12bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bdb8: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x12bdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bdbc: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x12bdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bdc0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x12bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x12bdc4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12bdc8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12bdcc: 0x24a5d000  addiu       $a1, $a1, -0x3000
    ctx->pc = 0x12bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955008));
    // 0x12bdd0: 0x2468f0b0  addiu       $t0, $v1, -0xF50
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963376));
    // 0x12bdd4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x12bdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12bdd8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x12bdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12bddc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bde0: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x12bde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bde4: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x12bde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bde8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x12bde8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BF0B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF0B8u, _value); } while (0);
    // 0x12bdec: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x12BDECu;
    SET_GPR_U32(ctx, 31, 0x12BDF4u);
    ctx->pc = 0x12BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BDECu;
    // 0x12bdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x12BDECu, 0x12BDF4u)) {
        return;
    }
    ctx->pc = 0x12BDF4u;
label_12bdf4:
    // 0x12bdf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12BDF4u;
    {
        const bool branch_taken_0x12bdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF4u;
        // 0x12bdf8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdf4) {
            ctx->pc = 0x12BE34u;
            goto label_12be34;
        }
    }
    ctx->pc = 0x12BDFCu;
    // 0x12bdfc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x12be00: 0x8c45f0c0  lw          $a1, -0xF40($v0)
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963392)));
    // 0x12be04: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x12be04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x12be08: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12BE08u;
    {
        const bool branch_taken_0x12be08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE08u;
        // 0x12be0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be08) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE10u;
    // 0x12be10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12be14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12BE14u;
    {
        const bool branch_taken_0x12be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE14u;
        // 0x12be18: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be14) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE1Cu;
    // 0x12be1c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12be20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be24: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12BE24u;
    SET_GPR_U32(ctx, 31, 0x12BE2Cu);
    ctx->pc = 0x12BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE24u;
    // 0x12be28: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12BE24u, 0x12BE2Cu)) {
        return;
    }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12BE2Cu;
    {
        const bool branch_taken_0x12be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE2Cu;
        // 0x12be30: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be2c) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE34u;
label_12be34:
    // 0x12be34: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12be34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12be38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be3c: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x12BE3Cu;
    SET_GPR_U32(ctx, 31, 0x12BE44u);
    ctx->pc = 0x12BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE3Cu;
    // 0x12be40: 0x24a5d010  addiu       $a1, $a1, -0x2FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x12BE3Cu, 0x12BE44u)) {
        return;
    }
    ctx->pc = 0x12BE44u;
label_12be44:
    // 0x12be44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12BE44u;
    {
        const bool branch_taken_0x12be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE44u;
        // 0x12be48: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be44) {
            ctx->pc = 0x12BE7Cu;
            goto label_12be7c;
        }
    }
    ctx->pc = 0x12BE4Cu;
    // 0x12be4c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x12be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x12be50: 0x8c45f0c8  lw          $a1, -0xF38($v0)
    ctx->pc = 0x12be50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963400)));
    // 0x12be54: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x12be54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x12be58: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BE58u;
    {
        const bool branch_taken_0x12be58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE58u;
        // 0x12be5c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be58) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE60u;
    // 0x12be60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12be64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BE64u;
    {
        const bool branch_taken_0x12be64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE64u;
        // 0x12be68: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be64) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE6Cu;
    // 0x12be6c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12be70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be74: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12BE74u;
    SET_GPR_U32(ctx, 31, 0x12BE7Cu);
    ctx->pc = 0x12BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE74u;
    // 0x12be78: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12BE74u, 0x12BE7Cu)) {
        return;
    }
    ctx->pc = 0x12BE7Cu;
label_12be7c:
    // 0x12be7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12be7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12be80:
    // 0x12be80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12be80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12be84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12be84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12be88: 0x3e00008  jr          $ra
    ctx->pc = 0x12BE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE88u;
        // 0x12be8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BE90u;
}
