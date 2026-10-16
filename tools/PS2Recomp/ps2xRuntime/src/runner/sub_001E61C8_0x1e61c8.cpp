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

// Function: sub_001E61C8
// Address: 0x1e61c8 - 0x1e61e8
void sub_001E61C8_0x1e61c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E61C8_0x1e61c8");
#endif

    ctx->pc = 0x1e61c8u;

    // 0x1e61c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e61cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e61ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61d0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1e61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1e61d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E61D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61D4u;
        // 0x1e61d8: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E61D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E61DCu;
    // 0x1e61dc: 0x0  nop
    ctx->pc = 0x1e61dcu;
    // NOP
    // 0x1e61e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e61e4: 0x0  nop
    ctx->pc = 0x1e61e4u;
    // NOP
    ctx->pc = 0x1e61e8u;
}
