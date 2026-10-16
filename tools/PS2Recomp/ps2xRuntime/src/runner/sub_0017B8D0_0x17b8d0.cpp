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

// Function: sub_0017B8D0
// Address: 0x17b8d0 - 0x17b8f0
void sub_0017B8D0_0x17b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8D0_0x17b8d0");
#endif

    switch (ctx->pc) {
        case 0x17b8e0u: goto label_17b8e0;
        default: break;
    }

    ctx->pc = 0x17b8d0u;

    // 0x17b8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b8d8: 0xc076680  jal         func_1D9A00
    ctx->pc = 0x17B8D8u;
    SET_GPR_U32(ctx, 31, 0x17B8E0u);
    ctx->pc = 0x1D9A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9A00u, 0x17B8D8u, 0x17B8E0u)) {
        return;
    }
    ctx->pc = 0x17B8E0u;
label_17b8e0:
    // 0x17b8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8E8u;
        // 0x17b8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8F0u;
}
