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

// Function: sub_00171D68
// Address: 0x171d68 - 0x171d88
void sub_00171D68_0x171d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D68_0x171d68");
#endif

    switch (ctx->pc) {
        case 0x171d78u: goto label_171d78;
        default: break;
    }

    ctx->pc = 0x171d68u;

    // 0x171d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171d70: 0xc05c770  jal         func_171DC0
    ctx->pc = 0x171D70u;
    SET_GPR_U32(ctx, 31, 0x171D78u);
    ctx->pc = 0x171DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171DC0u, 0x171D70u, 0x171D78u)) {
        return;
    }
    ctx->pc = 0x171D78u;
label_171d78:
    // 0x171d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x171D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D7Cu;
        // 0x171d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D84u;
    // 0x171d84: 0x0  nop
    ctx->pc = 0x171d84u;
    // NOP
    ctx->pc = 0x171d88u;
}
