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

// Function: sub_002817A4
// Address: 0x2817a4 - 0x2817b4
void sub_002817A4_0x2817a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002817A4_0x2817a4");
#endif

    ctx->pc = 0x2817a4u;

    // 0x2817a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2817a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2817a8: 0xfca00038  sd          $zero, 0x38($a1)
    ctx->pc = 0x2817a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
    // 0x2817ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2817ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2817B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817ACu;
        // 0x2817b0: 0xfca20030  sd          $v0, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2817ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2817B4u;
}
