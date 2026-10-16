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

// Function: sub_002F6558
// Address: 0x2f6558 - 0x2f6578
void sub_002F6558_0x2f6558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6558_0x2f6558");
#endif

    switch (ctx->pc) {
        case 0x2f6568u: goto label_2f6568;
        default: break;
    }

    ctx->pc = 0x2f6558u;

    // 0x2f6558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f655c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6560: 0xc0bdd8e  jal         func_2F7638
    ctx->pc = 0x2F6560u;
    SET_GPR_U32(ctx, 31, 0x2F6568u);
    ctx->pc = 0x2F7638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7638u, 0x2F6560u, 0x2F6568u)) {
        return;
    }
    ctx->pc = 0x2F6568u;
label_2f6568:
    // 0x2f6568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f656c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F656Cu;
        // 0x2f6570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6574u;
    // 0x2f6574: 0x0  nop
    ctx->pc = 0x2f6574u;
    // NOP
    ctx->pc = 0x2f6578u;
}
