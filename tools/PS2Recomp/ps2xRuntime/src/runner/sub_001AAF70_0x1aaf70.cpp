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

// Function: sub_001AAF70
// Address: 0x1aaf70 - 0x1aaf90
void sub_001AAF70_0x1aaf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF70_0x1aaf70");
#endif

    switch (ctx->pc) {
        case 0x1aaf80u: goto label_1aaf80;
        default: break;
    }

    ctx->pc = 0x1aaf70u;

    // 0x1aaf70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aaf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aaf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aaf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aaf78: 0xc06abf4  jal         func_1AAFD0
    ctx->pc = 0x1AAF78u;
    SET_GPR_U32(ctx, 31, 0x1AAF80u);
    ctx->pc = 0x1AAFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAFD0u, 0x1AAF78u, 0x1AAF80u)) {
        return;
    }
    ctx->pc = 0x1AAF80u;
label_1aaf80:
    // 0x1aaf80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaf84: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF84u;
        // 0x1aaf88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAF8Cu;
    // 0x1aaf8c: 0x0  nop
    ctx->pc = 0x1aaf8cu;
    // NOP
    ctx->pc = 0x1aaf90u;
}
