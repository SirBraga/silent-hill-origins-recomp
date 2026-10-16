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

// Function: sub_002E34B8
// Address: 0x2e34b8 - 0x2e34d8
void sub_002E34B8_0x2e34b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E34B8_0x2e34b8");
#endif

    switch (ctx->pc) {
        case 0x2e34c8u: goto label_2e34c8;
        default: break;
    }

    ctx->pc = 0x2e34b8u;

    // 0x2e34b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e34b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e34bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e34bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e34c0: 0xc0b8d3e  jal         func_2E34F8
    ctx->pc = 0x2E34C0u;
    SET_GPR_U32(ctx, 31, 0x2E34C8u);
    ctx->pc = 0x2E34F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E34F8u, 0x2E34C0u, 0x2E34C8u)) {
        return;
    }
    ctx->pc = 0x2E34C8u;
label_2e34c8:
    // 0x2e34c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e34c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e34cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e34d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E34D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34D0u;
        // 0x2e34d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E34D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E34D8u;
}
