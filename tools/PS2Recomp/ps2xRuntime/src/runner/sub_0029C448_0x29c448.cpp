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

// Function: sub_0029C448
// Address: 0x29c448 - 0x29c460
void sub_0029C448_0x29c448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C448_0x29c448");
#endif

    ctx->pc = 0x29c448u;

    // 0x29c448: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x29c448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29c44c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x29c44cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x29c450: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x29c450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29c454: 0x3e00008  jr          $ra
    ctx->pc = 0x29C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C454u;
        // 0x29c458: 0xfc850010  sd          $a1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C45Cu;
    // 0x29c45c: 0x0  nop
    ctx->pc = 0x29c45cu;
    // NOP
    ctx->pc = 0x29c460u;
}
