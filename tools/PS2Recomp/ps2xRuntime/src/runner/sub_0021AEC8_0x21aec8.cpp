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

// Function: sub_0021AEC8
// Address: 0x21aec8 - 0x21af08
void sub_0021AEC8_0x21aec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AEC8_0x21aec8");
#endif

    switch (ctx->pc) {
        case 0x21aed0u: goto label_21aed0;
        default: break;
    }

    ctx->pc = 0x21aec8u;

    // 0x21aec8: 0x18c00007  blez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AEC8u;
    {
        const bool branch_taken_0x21aec8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x21AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEC8u;
        // 0x21aecc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aec8) {
            ctx->pc = 0x21AEE8u;
            goto label_21aee8;
        }
    }
    ctx->pc = 0x21AED0u;
label_21aed0:
    // 0x21aed0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21aed4: 0x0  nop
    ctx->pc = 0x21aed4u;
    // NOP
    // 0x21aed8: 0x0  nop
    ctx->pc = 0x21aed8u;
    // NOP
    // 0x21aedc: 0x0  nop
    ctx->pc = 0x21aedcu;
    // NOP
    // 0x21aee0: 0x1cc0fffb  bgtz        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21AEE0u;
    {
        const bool branch_taken_0x21aee0 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x21AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEE0u;
        // 0x21aee4: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aee0) {
            ctx->pc = 0x21AED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aed0;
        }
    }
    ctx->pc = 0x21AEE8u;
label_21aee8:
    // 0x21aee8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x21aee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21aeec: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x21aeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21aef0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x21aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21aef4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x21aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21aef8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x21aef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21aefc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21aefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af00: 0x3e00008  jr          $ra
    ctx->pc = 0x21AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF00u;
        // 0x21af04: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AF08u;
}
