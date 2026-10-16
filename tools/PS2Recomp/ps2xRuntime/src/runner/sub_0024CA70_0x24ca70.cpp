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

// Function: sub_0024CA70
// Address: 0x24ca70 - 0x24ca90
void sub_0024CA70_0x24ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CA70_0x24ca70");
#endif

    switch (ctx->pc) {
        case 0x24ca80u: goto label_24ca80;
        default: break;
    }

    ctx->pc = 0x24ca70u;

    // 0x24ca70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ca74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ca78: 0xc0c53e8  jal         func_314FA0
    ctx->pc = 0x24CA78u;
    SET_GPR_U32(ctx, 31, 0x24CA80u);
    ctx->pc = 0x314FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314FA0u, 0x24CA78u, 0x24CA80u)) {
        return;
    }
    ctx->pc = 0x24CA80u;
label_24ca80:
    // 0x24ca80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x24CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA84u;
        // 0x24ca88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA8Cu;
    // 0x24ca8c: 0x0  nop
    ctx->pc = 0x24ca8cu;
    // NOP
    ctx->pc = 0x24ca90u;
}
