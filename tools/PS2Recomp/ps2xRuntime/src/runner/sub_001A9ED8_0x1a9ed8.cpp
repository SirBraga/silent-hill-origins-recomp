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

// Function: sub_001A9ED8
// Address: 0x1a9ed8 - 0x1a9f10
void sub_001A9ED8_0x1a9ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9ED8_0x1a9ed8");
#endif

    switch (ctx->pc) {
        case 0x1a9ee0u: goto label_1a9ee0;
        default: break;
    }

    ctx->pc = 0x1a9ed8u;

    // 0x1a9ed8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1a9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a9edc: 0x2c830001  sltiu       $v1, $a0, 0x1
    ctx->pc = 0x1a9edcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a9ee0:
    // 0x1a9ee0: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9EE0u;
    {
        const bool branch_taken_0x1a9ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a9ee0) {
            ctx->pc = 0x1A9EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9EE0u;
            // 0x1a9ee4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9EF0u;
            goto label_1a9ef0;
        }
    }
    ctx->pc = 0x1A9EE8u;
    // 0x1a9ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE8u;
        // 0x1a9eec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9EF0u;
label_1a9ef0:
    // 0x1a9ef0: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A9EF0u;
    {
        const bool branch_taken_0x1a9ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EF0u;
        // 0x1a9ef4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ef0) {
            ctx->pc = 0x1A9EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ee0;
        }
    }
    ctx->pc = 0x1A9EF8u;
    // 0x1a9ef8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1a9ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a9efc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A9EFCu;
    {
        const bool branch_taken_0x1a9efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EFCu;
        // 0x1a9f00: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9efc) {
            ctx->pc = 0x1A9EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ee0;
        }
    }
    ctx->pc = 0x1A9F04u;
    // 0x1a9f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F04u;
        // 0x1a9f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9F0Cu;
    // 0x1a9f0c: 0x0  nop
    ctx->pc = 0x1a9f0cu;
    // NOP
    ctx->pc = 0x1a9f10u;
}
