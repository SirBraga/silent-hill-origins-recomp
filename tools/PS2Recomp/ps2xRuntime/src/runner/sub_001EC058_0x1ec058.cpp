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

// Function: sub_001EC058
// Address: 0x1ec058 - 0x1ec080
void sub_001EC058_0x1ec058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC058_0x1ec058");
#endif

    ctx->pc = 0x1ec058u;

    // 0x1ec058: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1ec058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ec05c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC05Cu;
    {
        const bool branch_taken_0x1ec05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC05Cu;
        // 0x1ec060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec05c) {
            ctx->pc = 0x1EC068u;
            goto label_1ec068;
        }
    }
    ctx->pc = 0x1EC064u;
    // 0x1ec064: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ec064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ec068:
    // 0x1ec068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC068u;
    {
        const bool branch_taken_0x1ec068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec068) {
            ctx->pc = 0x1EC078u;
            goto label_1ec078;
        }
    }
    ctx->pc = 0x1EC070u;
    // 0x1ec070: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC070u;
        // 0x1ec074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC078u;
label_1ec078:
    // 0x1ec078: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC078u;
        // 0x1ec07c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC080u;
}
