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

// Function: sub_00307100
// Address: 0x307100 - 0x307130
void sub_00307100_0x307100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307100_0x307100");
#endif

    ctx->pc = 0x307100u;

    // 0x307100: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x307100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307104: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x307104u;
    {
        const bool branch_taken_0x307104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307104) {
            ctx->pc = 0x307108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307104u;
            // 0x307108: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307114u;
            goto label_307114;
        }
    }
    ctx->pc = 0x30710Cu;
    // 0x30710c: 0x3e00008  jr          $ra
    ctx->pc = 0x30710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30710Cu;
        // 0x307110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307114u;
label_307114:
    // 0x307114: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307114u;
    {
        const bool branch_taken_0x307114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307114) {
            ctx->pc = 0x307124u;
            goto label_307124;
        }
    }
    ctx->pc = 0x30711Cu;
    // 0x30711c: 0x3e00008  jr          $ra
    ctx->pc = 0x30711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30711Cu;
        // 0x307120: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307124u;
label_307124:
    // 0x307124: 0x3e00008  jr          $ra
    ctx->pc = 0x307124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307124u;
        // 0x307128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30712Cu;
    // 0x30712c: 0x0  nop
    ctx->pc = 0x30712cu;
    // NOP
    ctx->pc = 0x307130u;
}
