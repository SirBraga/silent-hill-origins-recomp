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

// Function: sub_002E1700
// Address: 0x2e1700 - 0x2e1758
void sub_002E1700_0x2e1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1700_0x2e1700");
#endif

    switch (ctx->pc) {
        case 0x2e1718u: goto label_2e1718;
        default: break;
    }

    ctx->pc = 0x2e1700u;

    // 0x2e1700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1704: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e170c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e170cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1710: 0xc0b8574  jal         func_2E15D0
    ctx->pc = 0x2E1710u;
    SET_GPR_U32(ctx, 31, 0x2E1718u);
    ctx->pc = 0x2E1714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1710u;
    // 0x2e1714: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E15D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E15D0u, 0x2E1710u, 0x2E1718u)) {
        return;
    }
    ctx->pc = 0x2E1718u;
label_2e1718:
    // 0x2e1718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e1718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e171c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E171Cu;
    {
        const bool branch_taken_0x2e171c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E171Cu;
        // 0x2e1720: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e171c) {
            ctx->pc = 0x2E1744u;
            goto label_2e1744;
        }
    }
    ctx->pc = 0x2E1724u;
    // 0x2e1724: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e1724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e1728: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2e1728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2e172c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e172cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e1730: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2e1730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1734: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2e1734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e1738: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2e1738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2e173c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E173Cu;
    {
        const bool branch_taken_0x2e173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E173Cu;
        // 0x2e1740: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e173c) {
            ctx->pc = 0x2E1748u;
            goto label_2e1748;
        }
    }
    ctx->pc = 0x2E1744u;
label_2e1744:
    // 0x2e1744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1748:
    // 0x2e1748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e174c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1750: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1750u;
        // 0x2e1754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1758u;
}
