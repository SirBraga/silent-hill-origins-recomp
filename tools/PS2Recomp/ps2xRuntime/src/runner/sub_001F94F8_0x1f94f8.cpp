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

// Function: sub_001F94F8
// Address: 0x1f94f8 - 0x1f9518
void sub_001F94F8_0x1f94f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F94F8_0x1f94f8");
#endif

    switch (ctx->pc) {
        case 0x1f9508u: goto label_1f9508;
        default: break;
    }

    ctx->pc = 0x1f94f8u;

    // 0x1f94f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f94f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f94fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9500: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1F9500u;
    SET_GPR_U32(ctx, 31, 0x1F9508u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1F9500u, 0x1F9508u)) {
        return;
    }
    ctx->pc = 0x1F9508u;
label_1f9508:
    // 0x1f9508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f950c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F950Cu;
        // 0x1f9510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9514u;
    // 0x1f9514: 0x0  nop
    ctx->pc = 0x1f9514u;
    // NOP
    ctx->pc = 0x1f9518u;
}
