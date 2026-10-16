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

// Function: sub_001B3358
// Address: 0x1b3358 - 0x1b3378
void sub_001B3358_0x1b3358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3358_0x1b3358");
#endif

    switch (ctx->pc) {
        case 0x1b336cu: goto label_1b336c;
        default: break;
    }

    ctx->pc = 0x1b3358u;

    // 0x1b3358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b335c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3364: 0xc06cc32  jal         func_1B30C8
    ctx->pc = 0x1B3364u;
    SET_GPR_U32(ctx, 31, 0x1B336Cu);
    ctx->pc = 0x1B3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3364u;
    // 0x1b3368: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B30C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B30C8u, 0x1B3364u, 0x1B336Cu)) {
        return;
    }
    ctx->pc = 0x1B336Cu;
label_1b336c:
    // 0x1b336c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b336cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3370: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3370u;
        // 0x1b3374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3378u;
}
