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

// Function: sub_002036C0
// Address: 0x2036c0 - 0x203710
void sub_002036C0_0x2036c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002036C0_0x2036c0");
#endif

    switch (ctx->pc) {
        case 0x2036d0u: goto label_2036d0;
        default: break;
    }

    ctx->pc = 0x2036c0u;

    // 0x2036c0: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2036c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2036c4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2036C4u;
    {
        const bool branch_taken_0x2036c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036C4u;
        // 0x2036c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036c4) {
            ctx->pc = 0x203708u;
            goto label_203708;
        }
    }
    ctx->pc = 0x2036CCu;
    // 0x2036cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2036d0:
    // 0x2036d0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2036d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2036d4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2036d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2036d8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2036d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2036dc: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2036dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2036e0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2036e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2036e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2036e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2036e8: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x2036e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x2036ec: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2036f0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2036f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2036f4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2036f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2036f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x2036D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2036d0;
        }
    }
    ctx->pc = 0x203700u;
    // 0x203700: 0x3e00008  jr          $ra
    ctx->pc = 0x203700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203700u;
        // 0x203704: 0x8c8200c0  lw          $v0, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203708u;
label_203708:
    // 0x203708: 0x3e00008  jr          $ra
    ctx->pc = 0x203708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203710u;
}
