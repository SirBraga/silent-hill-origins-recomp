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

// Function: sub_001C4F34
// Address: 0x1c4f34 - 0x1c4f48
void sub_001C4F34_0x1c4f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4F34_0x1c4f34");
#endif

    switch (ctx->pc) {
        case 0x1c4f3cu: goto label_1c4f3c;
        case 0x1c4f40u: goto label_1c4f40;
        default: break;
    }

    ctx->pc = 0x1c4f34u;

    // 0x1c4f34: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1c4f38: 0xac45014c  sw          $a1, 0x14C($v0)
    ctx->pc = 0x1c4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 5));
label_1c4f3c:
    // 0x1c4f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4f40:
    // 0x1c4f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F40u;
        // 0x1c4f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4F48u;
}
