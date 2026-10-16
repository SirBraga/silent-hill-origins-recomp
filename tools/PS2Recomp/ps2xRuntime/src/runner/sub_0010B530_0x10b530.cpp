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

// Function: sub_0010B530
// Address: 0x10b530 - 0x10b550
void sub_0010B530_0x10b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B530_0x10b530");
#endif

    switch (ctx->pc) {
        case 0x10b544u: goto label_10b544;
        default: break;
    }

    ctx->pc = 0x10b530u;

    // 0x10b530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b53c: 0xc042cbc  jal         func_10B2F0
    ctx->pc = 0x10B53Cu;
    SET_GPR_U32(ctx, 31, 0x10B544u);
    ctx->pc = 0x10B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B53Cu;
    // 0x10b540: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10B2F0u, 0x10B53Cu, 0x10B544u)) {
        return;
    }
    ctx->pc = 0x10B544u;
label_10b544:
    // 0x10b544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b548: 0x3e00008  jr          $ra
    ctx->pc = 0x10B548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B548u;
        // 0x10b54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B550u;
}
