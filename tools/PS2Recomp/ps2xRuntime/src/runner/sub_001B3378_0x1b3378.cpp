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

// Function: sub_001B3378
// Address: 0x1b3378 - 0x1b3398
void sub_001B3378_0x1b3378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3378_0x1b3378");
#endif

    switch (ctx->pc) {
        case 0x1b338cu: goto label_1b338c;
        default: break;
    }

    ctx->pc = 0x1b3378u;

    // 0x1b3378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b337c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3384: 0xc06cc32  jal         func_1B30C8
    ctx->pc = 0x1B3384u;
    SET_GPR_U32(ctx, 31, 0x1B338Cu);
    ctx->pc = 0x1B3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3384u;
    // 0x1b3388: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B30C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B30C8u, 0x1B3384u, 0x1B338Cu)) {
        return;
    }
    ctx->pc = 0x1B338Cu;
label_1b338c:
    // 0x1b338c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3390: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3390u;
        // 0x1b3394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3398u;
}
