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

// Function: sub_0017B8F0
// Address: 0x17b8f0 - 0x17b918
void sub_0017B8F0_0x17b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8F0_0x17b8f0");
#endif

    switch (ctx->pc) {
        case 0x17b900u: goto label_17b900;
        default: break;
    }

    ctx->pc = 0x17b8f0u;

    // 0x17b8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b8f8: 0xc05ee46  jal         func_17B918
    ctx->pc = 0x17B8F8u;
    SET_GPR_U32(ctx, 31, 0x17B900u);
    ctx->pc = 0x17B918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B918u, 0x17B8F8u, 0x17B900u)) {
        return;
    }
    ctx->pc = 0x17B900u;
label_17b900:
    // 0x17b900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b904: 0x3e00008  jr          $ra
    ctx->pc = 0x17B904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B904u;
        // 0x17b908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B90Cu;
    // 0x17b90c: 0x0  nop
    ctx->pc = 0x17b90cu;
    // NOP
    // 0x17b910: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b914: 0x0  nop
    ctx->pc = 0x17b914u;
    // NOP
    ctx->pc = 0x17b918u;
}
