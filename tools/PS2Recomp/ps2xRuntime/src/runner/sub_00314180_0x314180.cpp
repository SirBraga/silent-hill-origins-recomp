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

// Function: sub_00314180
// Address: 0x314180 - 0x3141a0
void sub_00314180_0x314180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314180_0x314180");
#endif

    switch (ctx->pc) {
        case 0x314194u: goto label_314194;
        default: break;
    }

    ctx->pc = 0x314180u;

    // 0x314180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314188: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x314188u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x31418c: 0xc0c7d58  jal         func_31F560
    ctx->pc = 0x31418Cu;
    SET_GPR_U32(ctx, 31, 0x314194u);
    ctx->pc = 0x314190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31418Cu;
    // 0x314190: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F560u, 0x31418Cu, 0x314194u)) {
        return;
    }
    ctx->pc = 0x314194u;
label_314194:
    // 0x314194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314198: 0x3e00008  jr          $ra
    ctx->pc = 0x314198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314198u;
        // 0x31419c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3141A0u;
}
