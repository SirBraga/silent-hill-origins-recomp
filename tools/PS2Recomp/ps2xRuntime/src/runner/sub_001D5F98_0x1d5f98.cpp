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

// Function: sub_001D5F98
// Address: 0x1d5f98 - 0x1d5fc0
void sub_001D5F98_0x1d5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F98_0x1d5f98");
#endif

    switch (ctx->pc) {
        case 0x1d5fa8u: goto label_1d5fa8;
        case 0x1d5fb0u: goto label_1d5fb0;
        default: break;
    }

    ctx->pc = 0x1d5f98u;

    // 0x1d5f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5fa0: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D5FA0u;
    SET_GPR_U32(ctx, 31, 0x1D5FA8u);
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D5FA0u, 0x1D5FA8u)) {
        return;
    }
    ctx->pc = 0x1D5FA8u;
label_1d5fa8:
    // 0x1d5fa8: 0xc074864  jal         func_1D2190
    ctx->pc = 0x1D5FA8u;
    SET_GPR_U32(ctx, 31, 0x1D5FB0u);
    ctx->pc = 0x1D2190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2190u, 0x1D5FA8u, 0x1D5FB0u)) {
        return;
    }
    ctx->pc = 0x1D5FB0u;
label_1d5fb0:
    // 0x1d5fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB4u;
        // 0x1d5fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5FBCu;
    // 0x1d5fbc: 0x0  nop
    ctx->pc = 0x1d5fbcu;
    // NOP
    ctx->pc = 0x1d5fc0u;
}
