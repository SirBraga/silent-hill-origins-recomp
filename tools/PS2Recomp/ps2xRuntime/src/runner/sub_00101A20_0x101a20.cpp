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

// Function: sub_00101A20
// Address: 0x101a20 - 0x101a40
void sub_00101A20_0x101a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A20_0x101a20");
#endif

    switch (ctx->pc) {
        case 0x101a30u: goto label_101a30;
        default: break;
    }

    ctx->pc = 0x101a20u;

    // 0x101a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101a28: 0xc0941b8  jal         func_2506E0
    ctx->pc = 0x101A28u;
    SET_GPR_U32(ctx, 31, 0x101A30u);
    ctx->pc = 0x101A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A28u;
    // 0x101a2c: 0x8c8400ec  lw          $a0, 0xEC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2506E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506E0u, 0x101A28u, 0x101A30u)) {
        return;
    }
    ctx->pc = 0x101A30u;
label_101a30:
    // 0x101a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101a34: 0x3e00008  jr          $ra
    ctx->pc = 0x101A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A34u;
        // 0x101a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101A3Cu;
    // 0x101a3c: 0x0  nop
    ctx->pc = 0x101a3cu;
    // NOP
    ctx->pc = 0x101a40u;
}
