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

// Function: sub_0029C0D8
// Address: 0x29c0d8 - 0x29c0e8
void sub_0029C0D8_0x29c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C0D8_0x29c0d8");
#endif

    ctx->pc = 0x29c0d8u;

    // 0x29c0d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0DCu;
        // 0x29c0e0: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C0E4u;
    // 0x29c0e4: 0x0  nop
    ctx->pc = 0x29c0e4u;
    // NOP
    ctx->pc = 0x29c0e8u;
}
