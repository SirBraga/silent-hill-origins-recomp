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

// Function: sub_00192468
// Address: 0x192468 - 0x192480
void sub_00192468_0x192468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192468_0x192468");
#endif

    ctx->pc = 0x192468u;

    // 0x192468: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x19246c: 0x3e00008  jr          $ra
    ctx->pc = 0x19246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19246Cu;
        // 0x192470: 0xac448b30  sw          $a0, -0x74D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937392), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19246Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192474u;
    // 0x192474: 0x0  nop
    ctx->pc = 0x192474u;
    // NOP
    // 0x192478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19247c: 0x0  nop
    ctx->pc = 0x19247cu;
    // NOP
    ctx->pc = 0x192480u;
}
