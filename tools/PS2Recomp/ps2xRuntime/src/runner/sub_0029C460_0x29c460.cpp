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

// Function: sub_0029C460
// Address: 0x29c460 - 0x29c480
void sub_0029C460_0x29c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C460_0x29c460");
#endif

    ctx->pc = 0x29c460u;

    // 0x29c460: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x29c460u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29c464: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x29c464u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x29c468: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x29c468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x29c46c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x29c46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29c470: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x29c470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x29c474: 0x3e00008  jr          $ra
    ctx->pc = 0x29C474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C474u;
        // 0x29c478: 0xfc830010  sd          $v1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C47Cu;
    // 0x29c47c: 0x0  nop
    ctx->pc = 0x29c47cu;
    // NOP
    ctx->pc = 0x29c480u;
}
