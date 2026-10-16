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

// Function: sub_001F9450
// Address: 0x1f9450 - 0x1f9478
void sub_001F9450_0x1f9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9450_0x1f9450");
#endif

    switch (ctx->pc) {
        case 0x1f9460u: goto label_1f9460;
        default: break;
    }

    ctx->pc = 0x1f9450u;

    // 0x1f9450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9458: 0xc07e144  jal         func_1F8510
    ctx->pc = 0x1F9458u;
    SET_GPR_U32(ctx, 31, 0x1F9460u);
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F9458u, 0x1F9460u)) {
        return;
    }
    ctx->pc = 0x1F9460u;
label_1f9460:
    // 0x1f9460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9468: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f9468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f946c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F946Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F946Cu;
        // 0x1f9470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F946Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9474u;
    // 0x1f9474: 0x0  nop
    ctx->pc = 0x1f9474u;
    // NOP
    ctx->pc = 0x1f9478u;
}
