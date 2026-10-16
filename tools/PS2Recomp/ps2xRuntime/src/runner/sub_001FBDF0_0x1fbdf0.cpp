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

// Function: sub_001FBDF0
// Address: 0x1fbdf0 - 0x1fbe10
void sub_001FBDF0_0x1fbdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBDF0_0x1fbdf0");
#endif

    switch (ctx->pc) {
        case 0x1fbe00u: goto label_1fbe00;
        default: break;
    }

    ctx->pc = 0x1fbdf0u;

    // 0x1fbdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbdf8: 0xc07eae0  jal         func_1FAB80
    ctx->pc = 0x1FBDF8u;
    SET_GPR_U32(ctx, 31, 0x1FBE00u);
    ctx->pc = 0x1FAB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAB80u, 0x1FBDF8u, 0x1FBE00u)) {
        return;
    }
    ctx->pc = 0x1FBE00u;
label_1fbe00:
    // 0x1fbe00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe04: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE04u;
        // 0x1fbe08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE0Cu;
    // 0x1fbe0c: 0x0  nop
    ctx->pc = 0x1fbe0cu;
    // NOP
    ctx->pc = 0x1fbe10u;
}
