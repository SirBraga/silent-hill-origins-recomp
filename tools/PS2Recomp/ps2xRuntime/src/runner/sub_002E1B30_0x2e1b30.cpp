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

// Function: sub_002E1B30
// Address: 0x2e1b30 - 0x2e1b50
void sub_002E1B30_0x2e1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1B30_0x2e1b30");
#endif

    switch (ctx->pc) {
        case 0x2e1b44u: goto label_2e1b44;
        default: break;
    }

    ctx->pc = 0x2e1b30u;

    // 0x2e1b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1b34: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e1b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1b3c: 0xc0b6c8c  jal         func_2DB230
    ctx->pc = 0x2E1B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B44u);
    ctx->pc = 0x2E1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B3Cu;
    // 0x2e1b40: 0x24848180  addiu       $a0, $a0, -0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB230u, 0x2E1B3Cu, 0x2E1B44u)) {
        return;
    }
    ctx->pc = 0x2E1B44u;
label_2e1b44:
    // 0x2e1b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B48u;
        // 0x2e1b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1B50u;
}
