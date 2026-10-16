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

// Function: sub_001F4DD0
// Address: 0x1f4dd0 - 0x1f4df8
void sub_001F4DD0_0x1f4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4DD0_0x1f4dd0");
#endif

    switch (ctx->pc) {
        case 0x1f4de8u: goto label_1f4de8;
        default: break;
    }

    ctx->pc = 0x1f4dd0u;

    // 0x1f4dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4dd4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4ddc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f4ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f4de0: 0xc07d4d0  jal         func_1F5340
    ctx->pc = 0x1F4DE0u;
    SET_GPR_U32(ctx, 31, 0x1F4DE8u);
    ctx->pc = 0x1F4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DE0u;
    // 0x1f4de4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5340u, 0x1F4DE0u, 0x1F4DE8u)) {
        return;
    }
    ctx->pc = 0x1F4DE8u;
label_1f4de8:
    // 0x1f4de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DECu;
        // 0x1f4df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4DF4u;
    // 0x1f4df4: 0x0  nop
    ctx->pc = 0x1f4df4u;
    // NOP
    ctx->pc = 0x1f4df8u;
}
