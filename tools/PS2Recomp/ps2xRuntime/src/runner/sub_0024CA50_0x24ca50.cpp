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

// Function: sub_0024CA50
// Address: 0x24ca50 - 0x24ca70
void sub_0024CA50_0x24ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CA50_0x24ca50");
#endif

    switch (ctx->pc) {
        case 0x24ca60u: goto label_24ca60;
        default: break;
    }

    ctx->pc = 0x24ca50u;

    // 0x24ca50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ca54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ca58: 0xc0c5818  jal         func_316060
    ctx->pc = 0x24CA58u;
    SET_GPR_U32(ctx, 31, 0x24CA60u);
    ctx->pc = 0x316060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316060u, 0x24CA58u, 0x24CA60u)) {
        return;
    }
    ctx->pc = 0x24CA60u;
label_24ca60:
    // 0x24ca60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ca60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ca64: 0x3e00008  jr          $ra
    ctx->pc = 0x24CA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA64u;
        // 0x24ca68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA6Cu;
    // 0x24ca6c: 0x0  nop
    ctx->pc = 0x24ca6cu;
    // NOP
    ctx->pc = 0x24ca70u;
}
