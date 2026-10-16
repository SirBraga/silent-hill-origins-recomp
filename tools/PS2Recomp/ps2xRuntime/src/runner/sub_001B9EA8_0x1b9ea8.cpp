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

// Function: sub_001B9EA8
// Address: 0x1b9ea8 - 0x1b9ec8
void sub_001B9EA8_0x1b9ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9EA8_0x1b9ea8");
#endif

    switch (ctx->pc) {
        case 0x1b9eb8u: goto label_1b9eb8;
        default: break;
    }

    ctx->pc = 0x1b9ea8u;

    // 0x1b9ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9eb0: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1B9EB0u;
    SET_GPR_U32(ctx, 31, 0x1B9EB8u);
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1B9EB0u, 0x1B9EB8u)) {
        return;
    }
    ctx->pc = 0x1B9EB8u;
label_1b9eb8:
    // 0x1b9eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EBCu;
        // 0x1b9ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9EC4u;
    // 0x1b9ec4: 0x0  nop
    ctx->pc = 0x1b9ec4u;
    // NOP
    ctx->pc = 0x1b9ec8u;
}
