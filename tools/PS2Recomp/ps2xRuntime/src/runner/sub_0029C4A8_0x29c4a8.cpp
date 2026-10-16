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

// Function: sub_0029C4A8
// Address: 0x29c4a8 - 0x29c4b8
void sub_0029C4A8_0x29c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C4A8_0x29c4a8");
#endif

    ctx->pc = 0x29c4a8u;

    // 0x29c4a8: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x29c4a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29c4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29C4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4ACu;
        // 0x29c4b0: 0xfc850010  sd          $a1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C4B4u;
    // 0x29c4b4: 0x0  nop
    ctx->pc = 0x29c4b4u;
    // NOP
    ctx->pc = 0x29c4b8u;
}
