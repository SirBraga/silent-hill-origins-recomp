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

// Function: sub_002A39D0
// Address: 0x2a39d0 - 0x2a39e8
void sub_002A39D0_0x2a39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A39D0_0x2a39d0");
#endif

    switch (ctx->pc) {
        case 0x2a39d8u: goto label_2a39d8;
        default: break;
    }

    ctx->pc = 0x2a39d0u;

    // 0x2a39d0: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x2A39D0u;
    SET_GPR_U32(ctx, 31, 0x2A39D8u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x2A39D0u, 0x2A39D8u)) {
        return;
    }
    ctx->pc = 0x2A39D8u;
label_2a39d8:
    // 0x2a39d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a39d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a39dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a39dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a39e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39E0u;
        // 0x2a39e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A39E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A39E8u;
}
