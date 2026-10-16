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

// Function: sub_001E0468
// Address: 0x1e0468 - 0x1e0498
void sub_001E0468_0x1e0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0468_0x1e0468");
#endif

    ctx->pc = 0x1e0468u;

    // 0x1e0468: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e0468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e046c: 0x8c43e6d4  lw          $v1, -0x192C($v0)
    ctx->pc = 0x1e046cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e0470: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e0474: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0474u;
        // 0x1e0478: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E047Cu;
    // 0x1e047c: 0x0  nop
    ctx->pc = 0x1e047cu;
    // NOP
    // 0x1e0480: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e0480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e0484: 0x0  nop
    ctx->pc = 0x1e0484u;
    // NOP
    // 0x1e0488: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e0488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e048c: 0x0  nop
    ctx->pc = 0x1e048cu;
    // NOP
    // 0x1e0490: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1e0490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1e0494: 0x0  nop
    ctx->pc = 0x1e0494u;
    // NOP
    ctx->pc = 0x1e0498u;
}
