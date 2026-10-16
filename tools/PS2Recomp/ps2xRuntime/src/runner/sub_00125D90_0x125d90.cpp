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

// Function: sub_00125D90
// Address: 0x125d90 - 0x125e90
void sub_00125D90_0x125d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125D90_0x125d90");
#endif

    switch (ctx->pc) {
        case 0x125db8u: goto label_125db8;
        default: break;
    }

    ctx->pc = 0x125d90u;

    // 0x125d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125d94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x125d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x125d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125d9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125da4: 0x8c820bd0  lw          $v0, 0xBD0($a0)
    ctx->pc = 0x125da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3024)));
    // 0x125da8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x125DA8u;
    {
        const bool branch_taken_0x125da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA8u;
        // 0x125dac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da8) {
            ctx->pc = 0x125E58u;
            goto label_125e58;
        }
    }
    ctx->pc = 0x125DB0u;
    // 0x125db0: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x125DB0u;
    SET_GPR_U32(ctx, 31, 0x125DB8u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x125DB0u, 0x125DB8u)) {
        return;
    }
    ctx->pc = 0x125DB8u;
label_125db8:
    // 0x125db8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x125db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x125dbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x125dc0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x125DC0u;
    {
        const bool branch_taken_0x125dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125dc0) {
            ctx->pc = 0x125DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125DC0u;
            // 0x125dc4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E80u;
            goto label_125e80;
        }
    }
    ctx->pc = 0x125DC8u;
    // 0x125dc8: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x125dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x125dcc: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x125dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x125dd0: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x125dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x125dd4: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x125dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125dd8: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x125dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125ddc: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x125ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x125de0: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x125de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x125de4: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x125de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x125de8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x125de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x125dec: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x125decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125df0: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x125df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125df4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x125df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x125df8: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x125df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x125dfc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x125dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x125e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125e04: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x125e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125e0c: 0x0  nop
    ctx->pc = 0x125e0cu;
    // NOP
    // 0x125e10: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x125E10u;
    {
        const bool branch_taken_0x125e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125e10) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125E18u;
    // 0x125e18: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x125e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x125e1c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x125e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x125e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125e24: 0x0  nop
    ctx->pc = 0x125e24u;
    // NOP
    // 0x125e28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x125e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125e2c: 0x0  nop
    ctx->pc = 0x125e2cu;
    // NOP
    // 0x125e30: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x125E30u;
    {
        const bool branch_taken_0x125e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E30u;
        // 0x125e34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e30) {
            ctx->pc = 0x125E80u;
            goto label_125e80;
        }
    }
    ctx->pc = 0x125E38u;
label_125e38:
    // 0x125e38: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x125e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x125e3c: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x125e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x125e40: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x125e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x125e44: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x125e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125e48: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x125e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125e4c: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x125e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x125e50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x125E50u;
    {
        const bool branch_taken_0x125e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E50u;
        // 0x125e54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e50) {
            ctx->pc = 0x125E80u;
            goto label_125e80;
        }
    }
    ctx->pc = 0x125E58u;
label_125e58:
    // 0x125e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125e60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125e64: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x125e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x125e68: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x125e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x125e6c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x125e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x125e70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x125e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x125e74: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x125e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x125e78: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x125e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x125e7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125e80:
    // 0x125e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125e88: 0x3e00008  jr          $ra
    ctx->pc = 0x125E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E88u;
        // 0x125e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125E90u;
}
