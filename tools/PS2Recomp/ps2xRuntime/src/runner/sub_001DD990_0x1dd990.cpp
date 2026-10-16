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

// Function: sub_001DD990
// Address: 0x1dd990 - 0x1dd9b0
void sub_001DD990_0x1dd990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD990_0x1dd990");
#endif

    switch (ctx->pc) {
        case 0x1dd9a0u: goto label_1dd9a0;
        default: break;
    }

    ctx->pc = 0x1dd990u;

    // 0x1dd990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd998: 0xc09d8c4  jal         func_276310
    ctx->pc = 0x1DD998u;
    SET_GPR_U32(ctx, 31, 0x1DD9A0u);
    ctx->pc = 0x1DD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD998u;
    // 0x1dd99c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276310u, 0x1DD998u, 0x1DD9A0u)) {
        return;
    }
    ctx->pc = 0x1DD9A0u;
label_1dd9a0:
    // 0x1dd9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dd9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9A8u;
        // 0x1dd9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9B0u;
}
