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

// Function: sub_001A5308
// Address: 0x1a5308 - 0x1a5328
void sub_001A5308_0x1a5308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5308_0x1a5308");
#endif

    switch (ctx->pc) {
        case 0x1a5318u: goto label_1a5318;
        default: break;
    }

    ctx->pc = 0x1a5308u;

    // 0x1a5308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a530c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5310: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1A5310u;
    SET_GPR_U32(ctx, 31, 0x1A5318u);
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1A5310u, 0x1A5318u)) {
        return;
    }
    ctx->pc = 0x1A5318u;
label_1a5318:
    // 0x1a5318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a531c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A531Cu;
        // 0x1a5320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5324u;
    // 0x1a5324: 0x0  nop
    ctx->pc = 0x1a5324u;
    // NOP
    ctx->pc = 0x1a5328u;
}
