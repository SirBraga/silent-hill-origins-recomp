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

// Function: sub_0029A8B0
// Address: 0x29a8b0 - 0x29a8d0
void sub_0029A8B0_0x29a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A8B0_0x29a8b0");
#endif

    switch (ctx->pc) {
        case 0x29a8c0u: goto label_29a8c0;
        default: break;
    }

    ctx->pc = 0x29a8b0u;

    // 0x29a8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a8b8: 0xc0a644c  jal         func_299130
    ctx->pc = 0x29A8B8u;
    SET_GPR_U32(ctx, 31, 0x29A8C0u);
    ctx->pc = 0x299130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299130u, 0x29A8B8u, 0x29A8C0u)) {
        return;
    }
    ctx->pc = 0x29A8C0u;
label_29a8c0:
    // 0x29a8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8C4u;
        // 0x29a8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A8CCu;
    // 0x29a8cc: 0x0  nop
    ctx->pc = 0x29a8ccu;
    // NOP
    ctx->pc = 0x29a8d0u;
}
