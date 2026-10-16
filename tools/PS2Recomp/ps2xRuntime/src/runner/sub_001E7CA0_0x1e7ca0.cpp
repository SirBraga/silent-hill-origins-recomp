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

// Function: sub_001E7CA0
// Address: 0x1e7ca0 - 0x1e7cb8
void sub_001E7CA0_0x1e7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7CA0_0x1e7ca0");
#endif

    ctx->pc = 0x1e7ca0u;

    // 0x1e7ca0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e7ca4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e7ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CA8u;
        // 0x1e7cac: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7CB0u;
    // 0x1e7cb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e7cb4: 0x0  nop
    ctx->pc = 0x1e7cb4u;
    // NOP
    ctx->pc = 0x1e7cb8u;
}
