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

// Function: sub_001F6960
// Address: 0x1f6960 - 0x1f6980
void sub_001F6960_0x1f6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6960_0x1f6960");
#endif

    ctx->pc = 0x1f6960u;

    // 0x1f6960: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1f6960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1f6964: 0x8c621a00  lw          $v0, 0x1A00($v1)
    ctx->pc = 0x1f6964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A00u));
    // 0x1f6968: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6968u;
    {
        const bool branch_taken_0x1f6968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6968u;
        // 0x1f696c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6968) {
            ctx->pc = 0x1F6978u;
            goto label_1f6978;
        }
    }
    ctx->pc = 0x1F6970u;
    // 0x1f6970: 0x807da2c  j           func_1F68B0
    ctx->pc = 0x1F6970u;
    ctx->pc = 0x1F6974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6970u;
    // 0x1f6974: 0xac621a00  sw          $v0, 0x1A00($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F68B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F68B0u, 0x1F6970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F6978u;
label_1f6978:
    // 0x1f6978: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6980u;
}
