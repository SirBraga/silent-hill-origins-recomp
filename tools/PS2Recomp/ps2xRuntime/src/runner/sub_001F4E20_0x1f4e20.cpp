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

// Function: sub_001F4E20
// Address: 0x1f4e20 - 0x1f4e48
void sub_001F4E20_0x1f4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4E20_0x1f4e20");
#endif

    switch (ctx->pc) {
        case 0x1f4e38u: goto label_1f4e38;
        default: break;
    }

    ctx->pc = 0x1f4e20u;

    // 0x1f4e20: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f4e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4e28: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4e30: 0xc07d4d0  jal         func_1F5340
    ctx->pc = 0x1F4E30u;
    SET_GPR_U32(ctx, 31, 0x1F4E38u);
    ctx->pc = 0x1F4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E30u;
    // 0x1f4e34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5340u, 0x1F4E30u, 0x1F4E38u)) {
        return;
    }
    ctx->pc = 0x1F4E38u;
label_1f4e38:
    // 0x1f4e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E3Cu;
        // 0x1f4e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4E44u;
    // 0x1f4e44: 0x0  nop
    ctx->pc = 0x1f4e44u;
    // NOP
    ctx->pc = 0x1f4e48u;
}
