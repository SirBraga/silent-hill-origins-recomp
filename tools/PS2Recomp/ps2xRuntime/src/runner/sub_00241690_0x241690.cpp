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

// Function: sub_00241690
// Address: 0x241690 - 0x2416a0
void sub_00241690_0x241690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241690_0x241690");
#endif

    switch (ctx->pc) {
        case 0x241694u: goto label_241694;
        default: break;
    }

    ctx->pc = 0x241690u;

    // 0x241690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241694:
    // 0x241694: 0x3e00008  jr          $ra
    ctx->pc = 0x241694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241694u;
        // 0x241698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24169Cu;
    // 0x24169c: 0x0  nop
    ctx->pc = 0x24169cu;
    // NOP
    ctx->pc = 0x2416a0u;
}
