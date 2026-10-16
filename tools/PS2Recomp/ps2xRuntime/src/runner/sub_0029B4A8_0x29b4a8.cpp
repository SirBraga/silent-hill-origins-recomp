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

// Function: sub_0029B4A8
// Address: 0x29b4a8 - 0x29b4c8
void sub_0029B4A8_0x29b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B4A8_0x29b4a8");
#endif

    switch (ctx->pc) {
        case 0x29b4b8u: goto label_29b4b8;
        default: break;
    }

    ctx->pc = 0x29b4a8u;

    // 0x29b4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b4b0: 0xc0a71ee  jal         func_29C7B8
    ctx->pc = 0x29B4B0u;
    SET_GPR_U32(ctx, 31, 0x29B4B8u);
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29B4B0u, 0x29B4B8u)) {
        return;
    }
    ctx->pc = 0x29B4B8u;
label_29b4b8:
    // 0x29b4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29B4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4BCu;
        // 0x29b4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B4C4u;
    // 0x29b4c4: 0x0  nop
    ctx->pc = 0x29b4c4u;
    // NOP
    ctx->pc = 0x29b4c8u;
}
