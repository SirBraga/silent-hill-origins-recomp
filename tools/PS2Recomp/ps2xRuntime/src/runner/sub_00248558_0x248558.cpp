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

// Function: sub_00248558
// Address: 0x248558 - 0x2485b8
void sub_00248558_0x248558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248558_0x248558");
#endif

    ctx->pc = 0x248558u;

    // 0x248558: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x248558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24855c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24855Cu;
    {
        const bool branch_taken_0x24855c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24855Cu;
        // 0x248560: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24855c) {
            ctx->pc = 0x248578u;
            goto label_248578;
        }
    }
    ctx->pc = 0x248564u;
    // 0x248564: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248568: 0x24440fc8  addiu       $a0, $v0, 0xFC8
    ctx->pc = 0x248568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24856c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x248570: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x248570u;
    {
        const bool branch_taken_0x248570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248570u;
        // 0x248574: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248570) {
            ctx->pc = 0x24859Cu;
            goto label_24859c;
        }
    }
    ctx->pc = 0x248578u;
label_248578:
    // 0x248578: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24857c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248580: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248584: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x248584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248588: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24858c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x24858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x248590: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x248590u;
    {
        const bool branch_taken_0x248590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248590) {
            ctx->pc = 0x248594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248590u;
            // 0x248594: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24859Cu;
            goto label_24859c;
        }
    }
    ctx->pc = 0x248598u;
    // 0x248598: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x248598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_24859c:
    // 0x24859c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2485a0: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2485a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2485a4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2485a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2485a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2485a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2485ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2485ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485ACu;
        // 0x2485b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2485B4u;
    // 0x2485b4: 0x0  nop
    ctx->pc = 0x2485b4u;
    // NOP
    ctx->pc = 0x2485b8u;
}
