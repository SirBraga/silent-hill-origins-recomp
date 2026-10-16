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

// Function: sub_0027F3E0
// Address: 0x27f3e0 - 0x27f400
void sub_0027F3E0_0x27f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F3E0_0x27f3e0");
#endif

    switch (ctx->pc) {
        case 0x27f3f0u: goto label_27f3f0;
        default: break;
    }

    ctx->pc = 0x27f3e0u;

    // 0x27f3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f3e8: 0xc09fc34  jal         func_27F0D0
    ctx->pc = 0x27F3E8u;
    SET_GPR_U32(ctx, 31, 0x27F3F0u);
    ctx->pc = 0x27F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3E8u;
    // 0x27f3ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F0D0u, 0x27F3E8u, 0x27F3F0u)) {
        return;
    }
    ctx->pc = 0x27F3F0u;
label_27f3f0:
    // 0x27f3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3F8u;
        // 0x27f3fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F400u;
}
