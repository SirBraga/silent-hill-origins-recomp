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

// Function: sub_0029BAD8
// Address: 0x29bad8 - 0x29baf8
void sub_0029BAD8_0x29bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BAD8_0x29bad8");
#endif

    switch (ctx->pc) {
        case 0x29bae8u: goto label_29bae8;
        default: break;
    }

    ctx->pc = 0x29bad8u;

    // 0x29bad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29badc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29badcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bae0: 0xc0a74ee  jal         func_29D3B8
    ctx->pc = 0x29BAE0u;
    SET_GPR_U32(ctx, 31, 0x29BAE8u);
    ctx->pc = 0x29D3B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D3B8u, 0x29BAE0u, 0x29BAE8u)) {
        return;
    }
    ctx->pc = 0x29BAE8u;
label_29bae8:
    // 0x29bae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29baec: 0x3e00008  jr          $ra
    ctx->pc = 0x29BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAECu;
        // 0x29baf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BAF4u;
    // 0x29baf4: 0x0  nop
    ctx->pc = 0x29baf4u;
    // NOP
    ctx->pc = 0x29baf8u;
}
