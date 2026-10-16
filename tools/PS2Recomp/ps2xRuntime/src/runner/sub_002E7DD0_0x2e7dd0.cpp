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

// Function: sub_002E7DD0
// Address: 0x2e7dd0 - 0x2e7df0
void sub_002E7DD0_0x2e7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7DD0_0x2e7dd0");
#endif

    switch (ctx->pc) {
        case 0x2e7de4u: goto label_2e7de4;
        default: break;
    }

    ctx->pc = 0x2e7dd0u;

    // 0x2e7dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7ddc: 0xc0b9226  jal         func_2E4898
    ctx->pc = 0x2E7DDCu;
    SET_GPR_U32(ctx, 31, 0x2E7DE4u);
    ctx->pc = 0x2E7DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DDCu;
    // 0x2e7de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4898u, 0x2E7DDCu, 0x2E7DE4u)) {
        return;
    }
    ctx->pc = 0x2E7DE4u;
label_2e7de4:
    // 0x2e7de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7de8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DE8u;
        // 0x2e7dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7DF0u;
}
