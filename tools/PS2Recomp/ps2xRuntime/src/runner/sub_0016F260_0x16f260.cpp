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

// Function: sub_0016F260
// Address: 0x16f260 - 0x16f280
void sub_0016F260_0x16f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F260_0x16f260");
#endif

    switch (ctx->pc) {
        case 0x16f274u: goto label_16f274;
        default: break;
    }

    ctx->pc = 0x16f260u;

    // 0x16f260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f26c: 0xc05bbb6  jal         func_16EED8
    ctx->pc = 0x16F26Cu;
    SET_GPR_U32(ctx, 31, 0x16F274u);
    ctx->pc = 0x16F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F26Cu;
    // 0x16f270: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16EED8u, 0x16F26Cu, 0x16F274u)) {
        return;
    }
    ctx->pc = 0x16F274u;
label_16f274:
    // 0x16f274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f278: 0x3e00008  jr          $ra
    ctx->pc = 0x16F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F278u;
        // 0x16f27c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F280u;
}
