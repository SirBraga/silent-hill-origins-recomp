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

// Function: sub_001AA650
// Address: 0x1aa650 - 0x1aa670
void sub_001AA650_0x1aa650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA650_0x1aa650");
#endif

    switch (ctx->pc) {
        case 0x1aa660u: goto label_1aa660;
        default: break;
    }

    ctx->pc = 0x1aa650u;

    // 0x1aa650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa658: 0xc06a99c  jal         func_1AA670
    ctx->pc = 0x1AA658u;
    SET_GPR_U32(ctx, 31, 0x1AA660u);
    ctx->pc = 0x1AA670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA670u, 0x1AA658u, 0x1AA660u)) {
        return;
    }
    ctx->pc = 0x1AA660u;
label_1aa660:
    // 0x1aa660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa664: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA664u;
        // 0x1aa668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA66Cu;
    // 0x1aa66c: 0x0  nop
    ctx->pc = 0x1aa66cu;
    // NOP
    ctx->pc = 0x1aa670u;
}
