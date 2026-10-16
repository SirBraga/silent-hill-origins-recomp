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

// Function: sub_00171B48
// Address: 0x171b48 - 0x171b68
void sub_00171B48_0x171b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B48_0x171b48");
#endif

    switch (ctx->pc) {
        case 0x171b58u: goto label_171b58;
        default: break;
    }

    ctx->pc = 0x171b48u;

    // 0x171b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171b50: 0xc05c1a4  jal         func_170690
    ctx->pc = 0x171B50u;
    SET_GPR_U32(ctx, 31, 0x171B58u);
    ctx->pc = 0x170690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170690u, 0x171B50u, 0x171B58u)) {
        return;
    }
    ctx->pc = 0x171B58u;
label_171b58:
    // 0x171b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x171B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B5Cu;
        // 0x171b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B64u;
    // 0x171b64: 0x0  nop
    ctx->pc = 0x171b64u;
    // NOP
    ctx->pc = 0x171b68u;
}
