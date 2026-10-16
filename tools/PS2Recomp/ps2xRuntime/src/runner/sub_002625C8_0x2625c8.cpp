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

// Function: sub_002625C8
// Address: 0x2625c8 - 0x2625e0
void sub_002625C8_0x2625c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002625C8_0x2625c8");
#endif

    ctx->pc = 0x2625c8u;

    // 0x2625c8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2625c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2625cc: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x2625ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x730FC8u));
    // 0x2625d0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2625d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2625d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2625D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625D4u;
        // 0x2625d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625DCu;
    // 0x2625dc: 0x0  nop
    ctx->pc = 0x2625dcu;
    // NOP
    ctx->pc = 0x2625e0u;
}
