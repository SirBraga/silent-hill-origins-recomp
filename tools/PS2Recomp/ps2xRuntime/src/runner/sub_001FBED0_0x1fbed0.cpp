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

// Function: sub_001FBED0
// Address: 0x1fbed0 - 0x1fbef0
void sub_001FBED0_0x1fbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBED0_0x1fbed0");
#endif

    switch (ctx->pc) {
        case 0x1fbee0u: goto label_1fbee0;
        default: break;
    }

    ctx->pc = 0x1fbed0u;

    // 0x1fbed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbed8: 0xc07eae0  jal         func_1FAB80
    ctx->pc = 0x1FBED8u;
    SET_GPR_U32(ctx, 31, 0x1FBEE0u);
    ctx->pc = 0x1FAB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAB80u, 0x1FBED8u, 0x1FBEE0u)) {
        return;
    }
    ctx->pc = 0x1FBEE0u;
label_1fbee0:
    // 0x1fbee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEE4u;
        // 0x1fbee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEECu;
    // 0x1fbeec: 0x0  nop
    ctx->pc = 0x1fbeecu;
    // NOP
    ctx->pc = 0x1fbef0u;
}
