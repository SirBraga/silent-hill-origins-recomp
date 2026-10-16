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

// Function: sub_002E44D8
// Address: 0x2e44d8 - 0x2e4508
void sub_002E44D8_0x2e44d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E44D8_0x2e44d8");
#endif

    switch (ctx->pc) {
        case 0x2e44ecu: goto label_2e44ec;
        default: break;
    }

    ctx->pc = 0x2e44d8u;

    // 0x2e44d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e44d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e44dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e44dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e44e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e44e4: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E44E4u;
    SET_GPR_U32(ctx, 31, 0x2E44ECu);
    ctx->pc = 0x2E44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44E4u;
    // 0x2e44e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E44E4u, 0x2E44ECu)) {
        return;
    }
    ctx->pc = 0x2E44ECu;
label_2e44ec:
    // 0x2e44ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e44ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e44f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e44f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e44f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E44F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44F4u;
        // 0x2e44f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E44F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E44FCu;
    // 0x2e44fc: 0x0  nop
    ctx->pc = 0x2e44fcu;
    // NOP
    // 0x2e4500: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e4500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e4504: 0x0  nop
    ctx->pc = 0x2e4504u;
    // NOP
    ctx->pc = 0x2e4508u;
}
