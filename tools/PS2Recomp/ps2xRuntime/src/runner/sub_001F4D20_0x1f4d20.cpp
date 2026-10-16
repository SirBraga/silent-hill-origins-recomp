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

// Function: sub_001F4D20
// Address: 0x1f4d20 - 0x1f4d48
void sub_001F4D20_0x1f4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4D20_0x1f4d20");
#endif

    switch (ctx->pc) {
        case 0x1f4d38u: goto label_1f4d38;
        default: break;
    }

    ctx->pc = 0x1f4d20u;

    // 0x1f4d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4d24: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4d2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4d30: 0xc07d4d0  jal         func_1F5340
    ctx->pc = 0x1F4D30u;
    SET_GPR_U32(ctx, 31, 0x1F4D38u);
    ctx->pc = 0x1F4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D30u;
    // 0x1f4d34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5340u, 0x1F4D30u, 0x1F4D38u)) {
        return;
    }
    ctx->pc = 0x1F4D38u;
label_1f4d38:
    // 0x1f4d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D3Cu;
        // 0x1f4d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4D44u;
    // 0x1f4d44: 0x0  nop
    ctx->pc = 0x1f4d44u;
    // NOP
    ctx->pc = 0x1f4d48u;
}
