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

// Function: sub_0030F7C8
// Address: 0x30f7c8 - 0x30f7e8
void sub_0030F7C8_0x30f7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F7C8_0x30f7c8");
#endif

    switch (ctx->pc) {
        case 0x30f7d8u: goto label_30f7d8;
        default: break;
    }

    ctx->pc = 0x30f7c8u;

    // 0x30f7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30f7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30f7cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f7d0: 0xc0c407a  jal         func_3101E8
    ctx->pc = 0x30F7D0u;
    SET_GPR_U32(ctx, 31, 0x30F7D8u);
    ctx->pc = 0x30F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F7D0u;
    // 0x30f7d4: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3101E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3101E8u, 0x30F7D0u, 0x30F7D8u)) {
        return;
    }
    ctx->pc = 0x30F7D8u;
label_30f7d8:
    // 0x30f7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7E0u;
        // 0x30f7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F7E8u;
}
