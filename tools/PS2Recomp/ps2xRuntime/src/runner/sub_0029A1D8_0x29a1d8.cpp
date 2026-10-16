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

// Function: sub_0029A1D8
// Address: 0x29a1d8 - 0x29a1f8
void sub_0029A1D8_0x29a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A1D8_0x29a1d8");
#endif

    switch (ctx->pc) {
        case 0x29a1e8u: goto label_29a1e8;
        default: break;
    }

    ctx->pc = 0x29a1d8u;

    // 0x29a1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a1e0: 0xc0a5fb4  jal         func_297ED0
    ctx->pc = 0x29A1E0u;
    SET_GPR_U32(ctx, 31, 0x29A1E8u);
    ctx->pc = 0x297ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297ED0u, 0x29A1E0u, 0x29A1E8u)) {
        return;
    }
    ctx->pc = 0x29A1E8u;
label_29a1e8:
    // 0x29a1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29A1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1ECu;
        // 0x29a1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A1F4u;
    // 0x29a1f4: 0x0  nop
    ctx->pc = 0x29a1f4u;
    // NOP
    ctx->pc = 0x29a1f8u;
}
