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

// Function: sub_0010B510
// Address: 0x10b510 - 0x10b530
void sub_0010B510_0x10b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B510_0x10b510");
#endif

    switch (ctx->pc) {
        case 0x10b524u: goto label_10b524;
        default: break;
    }

    ctx->pc = 0x10b510u;

    // 0x10b510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b514: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b51c: 0xc042cbc  jal         func_10B2F0
    ctx->pc = 0x10B51Cu;
    SET_GPR_U32(ctx, 31, 0x10B524u);
    ctx->pc = 0x10B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B51Cu;
    // 0x10b520: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10B2F0u, 0x10B51Cu, 0x10B524u)) {
        return;
    }
    ctx->pc = 0x10B524u;
label_10b524:
    // 0x10b524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b528: 0x3e00008  jr          $ra
    ctx->pc = 0x10B528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B528u;
        // 0x10b52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B530u;
}
