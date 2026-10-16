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

// Function: sub_001AECC8
// Address: 0x1aecc8 - 0x1aecd8
void sub_001AECC8_0x1aecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AECC8_0x1aecc8");
#endif

    switch (ctx->pc) {
        case 0x1aecccu: goto label_1aeccc;
        default: break;
    }

    ctx->pc = 0x1aecc8u;

    // 0x1aecc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aecc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aeccc:
    // 0x1aeccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECCCu;
        // 0x1aecd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AECCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AECD4u;
    // 0x1aecd4: 0x0  nop
    ctx->pc = 0x1aecd4u;
    // NOP
    ctx->pc = 0x1aecd8u;
}
