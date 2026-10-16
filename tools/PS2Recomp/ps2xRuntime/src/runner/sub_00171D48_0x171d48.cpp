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

// Function: sub_00171D48
// Address: 0x171d48 - 0x171d68
void sub_00171D48_0x171d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D48_0x171d48");
#endif

    switch (ctx->pc) {
        case 0x171d58u: goto label_171d58;
        default: break;
    }

    ctx->pc = 0x171d48u;

    // 0x171d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171d50: 0xc05c762  jal         func_171D88
    ctx->pc = 0x171D50u;
    SET_GPR_U32(ctx, 31, 0x171D58u);
    ctx->pc = 0x171D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171D88u, 0x171D50u, 0x171D58u)) {
        return;
    }
    ctx->pc = 0x171D58u;
label_171d58:
    // 0x171d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x171D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D5Cu;
        // 0x171d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D64u;
    // 0x171d64: 0x0  nop
    ctx->pc = 0x171d64u;
    // NOP
    ctx->pc = 0x171d68u;
}
