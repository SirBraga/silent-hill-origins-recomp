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

// Function: sub_0029B928
// Address: 0x29b928 - 0x29b948
void sub_0029B928_0x29b928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B928_0x29b928");
#endif

    switch (ctx->pc) {
        case 0x29b938u: goto label_29b938;
        default: break;
    }

    ctx->pc = 0x29b928u;

    // 0x29b928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b92c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b930: 0xc0a74bc  jal         func_29D2F0
    ctx->pc = 0x29B930u;
    SET_GPR_U32(ctx, 31, 0x29B938u);
    ctx->pc = 0x29D2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D2F0u, 0x29B930u, 0x29B938u)) {
        return;
    }
    ctx->pc = 0x29B938u;
label_29b938:
    // 0x29b938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b93c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B93Cu;
        // 0x29b940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B944u;
    // 0x29b944: 0x0  nop
    ctx->pc = 0x29b944u;
    // NOP
    ctx->pc = 0x29b948u;
}
