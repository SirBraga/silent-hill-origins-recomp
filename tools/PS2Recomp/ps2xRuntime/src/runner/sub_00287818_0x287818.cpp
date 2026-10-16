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

// Function: sub_00287818
// Address: 0x287818 - 0x287850
void sub_00287818_0x287818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287818_0x287818");
#endif

    ctx->pc = 0x287818u;

    // 0x287818: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x287818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x28781c: 0x244363b0  addiu       $v1, $v0, 0x63B0
    ctx->pc = 0x28781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x287820: 0x8c620610  lw          $v0, 0x610($v1)
    ctx->pc = 0x287820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7069C0u));
    // 0x287824: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x287824u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287828: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287828u;
    {
        const bool branch_taken_0x287828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287828u;
        // 0x28782c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287828) {
            ctx->pc = 0x28783Cu;
            goto label_28783c;
        }
    }
    ctx->pc = 0x287830u;
    // 0x287830: 0xac600704  sw          $zero, 0x704($v1)
    ctx->pc = 0x287830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
    // 0x287834: 0xac620610  sw          $v0, 0x610($v1)
    ctx->pc = 0x287834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1552), GPR_U32(ctx, 2));
    // 0x287838: 0xac6006f0  sw          $zero, 0x6F0($v1)
    ctx->pc = 0x287838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
label_28783c:
    // 0x28783c: 0x3e00008  jr          $ra
    ctx->pc = 0x28783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28783Cu;
        // 0x287840: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287844u;
    // 0x287844: 0x0  nop
    ctx->pc = 0x287844u;
    // NOP
    // 0x287848: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x287848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1828)));
    // 0x28784c: 0x0  nop
    ctx->pc = 0x28784cu;
    // NOP
    ctx->pc = 0x287850u;
}
