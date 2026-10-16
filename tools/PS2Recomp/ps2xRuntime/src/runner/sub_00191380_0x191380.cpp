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

// Function: sub_00191380
// Address: 0x191380 - 0x191390
void sub_00191380_0x191380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191380_0x191380");
#endif

    ctx->pc = 0x191380u;

    // 0x191380: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x191380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x191384: 0x3e00008  jr          $ra
    ctx->pc = 0x191384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191384u;
        // 0x191388: 0xac8000e0  sw          $zero, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19138Cu;
    // 0x19138c: 0x0  nop
    ctx->pc = 0x19138cu;
    // NOP
    ctx->pc = 0x191390u;
}
