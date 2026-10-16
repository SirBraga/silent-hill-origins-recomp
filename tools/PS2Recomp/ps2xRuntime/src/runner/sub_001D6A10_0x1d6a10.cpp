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

// Function: sub_001D6A10
// Address: 0x1d6a10 - 0x1d6a38
void sub_001D6A10_0x1d6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A10_0x1d6a10");
#endif

    switch (ctx->pc) {
        case 0x1d6a28u: goto label_1d6a28;
        default: break;
    }

    ctx->pc = 0x1d6a10u;

    // 0x1d6a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6a14: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d6a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6a1c: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x1d6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x1d6a20: 0xc074cc2  jal         func_1D3308
    ctx->pc = 0x1D6A20u;
    SET_GPR_U32(ctx, 31, 0x1D6A28u);
    ctx->pc = 0x1D6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A20u;
    // 0x1d6a24: 0x8c840084  lw          $a0, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3308u, 0x1D6A20u, 0x1D6A28u)) {
        return;
    }
    ctx->pc = 0x1D6A28u;
label_1d6a28:
    // 0x1d6a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A2Cu;
        // 0x1d6a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6A34u;
    // 0x1d6a34: 0x0  nop
    ctx->pc = 0x1d6a34u;
    // NOP
    ctx->pc = 0x1d6a38u;
}
