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

// Function: sub_0029C010
// Address: 0x29c010 - 0x29c020
void sub_0029C010_0x29c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C010_0x29c010");
#endif

    ctx->pc = 0x29c010u;

    // 0x29c010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c014: 0x3e00008  jr          $ra
    ctx->pc = 0x29C014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C014u;
        // 0x29c018: 0x30420800  andi        $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C01Cu;
    // 0x29c01c: 0x0  nop
    ctx->pc = 0x29c01cu;
    // NOP
    ctx->pc = 0x29c020u;
}
