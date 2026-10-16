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

// Function: sub_001EC0B8
// Address: 0x1ec0b8 - 0x1ec0d8
void sub_001EC0B8_0x1ec0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC0B8_0x1ec0b8");
#endif

    ctx->pc = 0x1ec0b8u;

    // 0x1ec0b8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ec0bc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1ec0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ec0c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC0C0u;
    {
        const bool branch_taken_0x1ec0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0C0u;
        // 0x1ec0c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0c0) {
            ctx->pc = 0x1EC0D0u;
            goto label_1ec0d0;
        }
    }
    ctx->pc = 0x1EC0C8u;
    // 0x1ec0c8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1ec0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ec0cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec0d0:
    // 0x1ec0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0D0u;
        // 0x1ec0d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC0D8u;
}
