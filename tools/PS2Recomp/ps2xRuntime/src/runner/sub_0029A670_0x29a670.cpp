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

// Function: sub_0029A670
// Address: 0x29a670 - 0x29a690
void sub_0029A670_0x29a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A670_0x29a670");
#endif

    switch (ctx->pc) {
        case 0x29a680u: goto label_29a680;
        default: break;
    }

    ctx->pc = 0x29a670u;

    // 0x29a670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a678: 0xc0a5e8a  jal         func_297A28
    ctx->pc = 0x29A678u;
    SET_GPR_U32(ctx, 31, 0x29A680u);
    ctx->pc = 0x297A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297A28u, 0x29A678u, 0x29A680u)) {
        return;
    }
    ctx->pc = 0x29A680u;
label_29a680:
    // 0x29a680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a684: 0x3e00008  jr          $ra
    ctx->pc = 0x29A684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A684u;
        // 0x29a688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A68Cu;
    // 0x29a68c: 0x0  nop
    ctx->pc = 0x29a68cu;
    // NOP
    ctx->pc = 0x29a690u;
}
