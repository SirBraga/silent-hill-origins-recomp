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

// Function: sub_00222D28
// Address: 0x222d28 - 0x222e18
void sub_00222D28_0x222d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222D28_0x222d28");
#endif

    switch (ctx->pc) {
        case 0x222d70u: goto label_222d70;
        default: break;
    }

    ctx->pc = 0x222d28u;

    // 0x222d28: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x222d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x222d2c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x222d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x222d30: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x222d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x222d34: 0xb0820013  sdl         $v0, 0x13($a0)
    ctx->pc = 0x222d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d38: 0xb482000c  sdr         $v0, 0xC($a0)
    ctx->pc = 0x222d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d3c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x222d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x222d40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x222d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x222d44: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x222d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x222d48: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x222d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x222d4c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x222d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x222d50: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x222d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d54: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x222d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d58: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x222d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d5c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x222d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x222d60: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x222d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x222d64: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x222D64u;
    {
        const bool branch_taken_0x222d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D64u;
        // 0x222d68: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d64) {
            ctx->pc = 0x222E10u;
            goto label_222e10;
        }
    }
    ctx->pc = 0x222D6Cu;
    // 0x222d6c: 0x0  nop
    ctx->pc = 0x222d6cu;
    // NOP
label_222d70:
    // 0x222d70: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x222d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222d74: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x222d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222d7c: 0x0  nop
    ctx->pc = 0x222d7cu;
    // NOP
    // 0x222d80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222D80u;
    {
        const bool branch_taken_0x222d80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d80) {
            ctx->pc = 0x222D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222D80u;
            // 0x222d84: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222D88u;
            goto label_222d88;
        }
    }
    ctx->pc = 0x222D88u;
label_222d88:
    // 0x222d88: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x222d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222d8c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x222d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222d90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222d94: 0x0  nop
    ctx->pc = 0x222d94u;
    // NOP
    // 0x222d98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222D98u;
    {
        const bool branch_taken_0x222d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d98) {
            ctx->pc = 0x222D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222D98u;
            // 0x222d9c: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222DA0u;
            goto label_222da0;
        }
    }
    ctx->pc = 0x222DA0u;
label_222da0:
    // 0x222da0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x222da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222da4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x222da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222da8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222dac: 0x0  nop
    ctx->pc = 0x222dacu;
    // NOP
    // 0x222db0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222DB0u;
    {
        const bool branch_taken_0x222db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222db0) {
            ctx->pc = 0x222DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222DB0u;
            // 0x222db4: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222DB8u;
label_222db8:
    // 0x222db8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x222db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222dbc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x222dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222dc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222dc4: 0x0  nop
    ctx->pc = 0x222dc4u;
    // NOP
    // 0x222dc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222DC8u;
    {
        const bool branch_taken_0x222dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222dc8) {
            ctx->pc = 0x222DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222DC8u;
            // 0x222dcc: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222DD0u;
            goto label_222dd0;
        }
    }
    ctx->pc = 0x222DD0u;
label_222dd0:
    // 0x222dd0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x222dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222dd4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x222dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222dd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222ddc: 0x0  nop
    ctx->pc = 0x222ddcu;
    // NOP
    // 0x222de0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222DE0u;
    {
        const bool branch_taken_0x222de0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222de0) {
            ctx->pc = 0x222DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222DE0u;
            // 0x222de4: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222DE8u;
            goto label_222de8;
        }
    }
    ctx->pc = 0x222DE8u;
label_222de8:
    // 0x222de8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x222de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222dec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x222decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222df0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222df4: 0x0  nop
    ctx->pc = 0x222df4u;
    // NOP
    // 0x222df8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x222DF8u;
    {
        const bool branch_taken_0x222df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222df8) {
            ctx->pc = 0x222DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222DF8u;
            // 0x222dfc: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222E00u;
            goto label_222e00;
        }
    }
    ctx->pc = 0x222E00u;
label_222e00:
    // 0x222e00: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x222e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e04: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x222e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x222e08: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x222E08u;
    {
        const bool branch_taken_0x222e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E08u;
        // 0x222e0c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e08) {
            ctx->pc = 0x222D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222d70;
        }
    }
    ctx->pc = 0x222E10u;
label_222e10:
    // 0x222e10: 0x3e00008  jr          $ra
    ctx->pc = 0x222E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E10u;
        // 0x222e14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E18u;
}
