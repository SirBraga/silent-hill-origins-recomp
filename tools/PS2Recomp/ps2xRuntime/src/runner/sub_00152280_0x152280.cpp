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

// Function: sub_00152280
// Address: 0x152280 - 0x1522a0
void sub_00152280_0x152280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152280_0x152280");
#endif

    switch (ctx->pc) {
        case 0x152290u: goto label_152290;
        default: break;
    }

    ctx->pc = 0x152280u;

    // 0x152280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152288: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x152288u;
    SET_GPR_U32(ctx, 31, 0x152290u);
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x152288u, 0x152290u)) {
        return;
    }
    ctx->pc = 0x152290u;
label_152290:
    // 0x152290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152294: 0x3e00008  jr          $ra
    ctx->pc = 0x152294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152294u;
        // 0x152298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15229Cu;
    // 0x15229c: 0x0  nop
    ctx->pc = 0x15229cu;
    // NOP
    ctx->pc = 0x1522a0u;
}
