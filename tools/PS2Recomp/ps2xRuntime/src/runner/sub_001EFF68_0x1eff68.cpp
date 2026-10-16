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

// Function: sub_001EFF68
// Address: 0x1eff68 - 0x1eff88
void sub_001EFF68_0x1eff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFF68_0x1eff68");
#endif

    switch (ctx->pc) {
        case 0x1eff78u: goto label_1eff78;
        default: break;
    }

    ctx->pc = 0x1eff68u;

    // 0x1eff68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eff6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eff70: 0xc07c2de  jal         func_1F0B78
    ctx->pc = 0x1EFF70u;
    SET_GPR_U32(ctx, 31, 0x1EFF78u);
    ctx->pc = 0x1F0B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0B78u, 0x1EFF70u, 0x1EFF78u)) {
        return;
    }
    ctx->pc = 0x1EFF78u;
label_1eff78:
    // 0x1eff78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF7Cu;
        // 0x1eff80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFF84u;
    // 0x1eff84: 0x0  nop
    ctx->pc = 0x1eff84u;
    // NOP
    ctx->pc = 0x1eff88u;
}
