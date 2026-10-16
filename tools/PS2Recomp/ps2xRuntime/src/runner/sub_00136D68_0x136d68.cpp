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

// Function: sub_00136D68
// Address: 0x136d68 - 0x136d78
void sub_00136D68_0x136d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136D68_0x136d68");
#endif

    ctx->pc = 0x136d68u;

    // 0x136d68: 0x3e00008  jr          $ra
    ctx->pc = 0x136D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D68u;
        // 0x136d6c: 0x8c8214c0  lw          $v0, 0x14C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5312)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136D70u;
    // 0x136d70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x136d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d74: 0x0  nop
    ctx->pc = 0x136d74u;
    // NOP
    ctx->pc = 0x136d78u;
}
