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

// Function: sub_002A3690
// Address: 0x2a3690 - 0x2a36b0
void sub_002A3690_0x2a3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3690_0x2a3690");
#endif

    switch (ctx->pc) {
        case 0x2a36a0u: goto label_2a36a0;
        default: break;
    }

    ctx->pc = 0x2a3690u;

    // 0x2a3690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3698: 0xc0c86b4  jal         func_321AD0
    ctx->pc = 0x2A3698u;
    SET_GPR_U32(ctx, 31, 0x2A36A0u);
    ctx->pc = 0x2A369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3698u;
    // 0x2a369c: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321AD0u, 0x2A3698u, 0x2A36A0u)) {
        return;
    }
    ctx->pc = 0x2A36A0u;
label_2a36a0:
    // 0x2a36a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a36a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a36a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A36A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36A4u;
        // 0x2a36a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A36A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A36ACu;
    // 0x2a36ac: 0x0  nop
    ctx->pc = 0x2a36acu;
    // NOP
    ctx->pc = 0x2a36b0u;
}
