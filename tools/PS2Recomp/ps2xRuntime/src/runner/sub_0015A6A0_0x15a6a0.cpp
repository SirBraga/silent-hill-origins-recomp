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

// Function: sub_0015A6A0
// Address: 0x15a6a0 - 0x15a778
void sub_0015A6A0_0x15a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A6A0_0x15a6a0");
#endif

    switch (ctx->pc) {
        case 0x15a6b0u: goto label_15a6b0;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a710u: goto label_15a710;
        default: break;
    }

    ctx->pc = 0x15a6a0u;

    // 0x15a6a0: 0x8c850298  lw          $a1, 0x298($a0)
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x15a6a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a6a8: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x15A6A8u;
    {
        const bool branch_taken_0x15a6a8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x15A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A8u;
        // 0x15a6ac: 0x8c830364  lw          $v1, 0x364($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6a8) {
            ctx->pc = 0x15A6E4u;
            goto label_15a6e4;
        }
    }
    ctx->pc = 0x15A6B0u;
label_15a6b0:
    // 0x15a6b0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a6b4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15a6b8: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x15a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a6bc: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x15a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a6c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a6c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a6c4: 0x0  nop
    ctx->pc = 0x15a6c4u;
    // NOP
    // 0x15a6c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15A6C8u;
    {
        const bool branch_taken_0x15a6c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6C8u;
        // 0x15a6cc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6c8) {
            ctx->pc = 0x15A6D8u;
            goto label_15a6d8;
        }
    }
    ctx->pc = 0x15A6D0u;
    // 0x15a6d0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x15a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x15a6d4: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x15a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_15a6d8:
    // 0x15a6d8: 0x1ca0fff5  bgtz        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15A6D8u;
    {
        const bool branch_taken_0x15a6d8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x15A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6D8u;
        // 0x15a6dc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6d8) {
            ctx->pc = 0x15A6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a6b0;
        }
    }
    ctx->pc = 0x15A6E0u;
    // 0x15a6e0: 0x8c850298  lw          $a1, 0x298($a0)
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
label_15a6e4:
    // 0x15a6e4: 0x18a00022  blez        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x15A6E4u;
    {
        const bool branch_taken_0x15a6e4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x15A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6E4u;
        // 0x15a6e8: 0x8c840364  lw          $a0, 0x364($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6e4) {
            ctx->pc = 0x15A770u;
            goto label_15a770;
        }
    }
    ctx->pc = 0x15A6ECu;
    // 0x15a6ec: 0x0  nop
    ctx->pc = 0x15a6ecu;
    // NOP
label_15a6f0:
    // 0x15a6f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a6f4: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x15a6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15a6f8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15a6fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15a6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a700: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x15a700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a704: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x15A704u;
    {
        const bool branch_taken_0x15a704 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A704u;
        // 0x15a708: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a704) {
            ctx->pc = 0x15A734u;
            goto label_15a734;
        }
    }
    ctx->pc = 0x15A70Cu;
    // 0x15a70c: 0x0  nop
    ctx->pc = 0x15a70cu;
    // NOP
label_15a710:
    // 0x15a710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a714: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x15a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a718: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a71c: 0x0  nop
    ctx->pc = 0x15a71cu;
    // NOP
    // 0x15a720: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15A720u;
    {
        const bool branch_taken_0x15a720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a720) {
            ctx->pc = 0x15A724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A720u;
            // 0x15a724: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A728u;
            goto label_15a728;
        }
    }
    ctx->pc = 0x15A728u;
label_15a728:
    // 0x15a728: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15a72c: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15A72Cu;
    {
        const bool branch_taken_0x15a72c = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x15A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A72Cu;
        // 0x15a730: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a72c) {
            ctx->pc = 0x15A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a710;
        }
    }
    ctx->pc = 0x15A734u;
label_15a734:
    // 0x15a734: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x15a734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a738: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x15a738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a73c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x15a73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a740: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x15a740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a744: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15a744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a748: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x15a748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a74c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x15a74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a750: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x15a750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a754: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x15a754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a758: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15a758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a75c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x15a75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a760: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x15a760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a764: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x15a764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a768: 0x1ca0ffe1  bgtz        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15A768u;
    {
        const bool branch_taken_0x15a768 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x15A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A768u;
        // 0x15a76c: 0xb4620000  sdr         $v0, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a768) {
            ctx->pc = 0x15A6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a6f0;
        }
    }
    ctx->pc = 0x15A770u;
label_15a770:
    // 0x15a770: 0x3e00008  jr          $ra
    ctx->pc = 0x15A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A770u;
        // 0x15a774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A778u;
}
