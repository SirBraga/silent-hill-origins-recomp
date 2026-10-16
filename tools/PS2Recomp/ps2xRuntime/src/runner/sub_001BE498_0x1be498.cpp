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

// Function: sub_001BE498
// Address: 0x1be498 - 0x1be4b0
void sub_001BE498_0x1be498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE498_0x1be498");
#endif

    switch (ctx->pc) {
        case 0x1be4a0u: goto label_1be4a0;
        case 0x1be4a4u: goto label_1be4a4;
        default: break;
    }

    ctx->pc = 0x1be498u;

    // 0x1be498: 0xc06f078  jal         func_1BC1E0
    ctx->pc = 0x1BE498u;
    SET_GPR_U32(ctx, 31, 0x1BE4A0u);
    ctx->pc = 0x1BE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE498u;
    // 0x1be49c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC1E0u, 0x1BE498u, 0x1BE4A0u)) {
        return;
    }
    ctx->pc = 0x1BE4A0u;
label_1be4a0:
    // 0x1be4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be4a4:
    // 0x1be4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4A4u;
        // 0x1be4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE4ACu;
    // 0x1be4ac: 0x0  nop
    ctx->pc = 0x1be4acu;
    // NOP
    ctx->pc = 0x1be4b0u;
}
