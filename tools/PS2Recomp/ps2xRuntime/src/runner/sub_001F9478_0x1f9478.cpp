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

// Function: sub_001F9478
// Address: 0x1f9478 - 0x1f9498
void sub_001F9478_0x1f9478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9478_0x1f9478");
#endif

    switch (ctx->pc) {
        case 0x1f9488u: goto label_1f9488;
        default: break;
    }

    ctx->pc = 0x1f9478u;

    // 0x1f9478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f947c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9480: 0xc07e144  jal         func_1F8510
    ctx->pc = 0x1F9480u;
    SET_GPR_U32(ctx, 31, 0x1F9488u);
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F9480u, 0x1F9488u)) {
        return;
    }
    ctx->pc = 0x1F9488u;
label_1f9488:
    // 0x1f9488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f948c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9490: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9490u;
        // 0x1f9494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9498u;
}
