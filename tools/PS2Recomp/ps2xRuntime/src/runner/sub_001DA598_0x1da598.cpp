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

// Function: sub_001DA598
// Address: 0x1da598 - 0x1da5b8
void sub_001DA598_0x1da598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA598_0x1da598");
#endif

    switch (ctx->pc) {
        case 0x1da5acu: goto label_1da5ac;
        default: break;
    }

    ctx->pc = 0x1da598u;

    // 0x1da598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da59c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1da59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da5a4: 0xc0767e2  jal         func_1D9F88
    ctx->pc = 0x1DA5A4u;
    SET_GPR_U32(ctx, 31, 0x1DA5ACu);
    ctx->pc = 0x1DA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5A4u;
    // 0x1da5a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9F88u, 0x1DA5A4u, 0x1DA5ACu)) {
        return;
    }
    ctx->pc = 0x1DA5ACu;
label_1da5ac:
    // 0x1da5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5B0u;
        // 0x1da5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA5B8u;
}
