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

// Function: sub_001FAFF8
// Address: 0x1faff8 - 0x1fb018
void sub_001FAFF8_0x1faff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAFF8_0x1faff8");
#endif

    switch (ctx->pc) {
        case 0x1fb008u: goto label_1fb008;
        default: break;
    }

    ctx->pc = 0x1faff8u;

    // 0x1faff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1faff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1faffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1faffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb000: 0xc07eae0  jal         func_1FAB80
    ctx->pc = 0x1FB000u;
    SET_GPR_U32(ctx, 31, 0x1FB008u);
    ctx->pc = 0x1FAB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAB80u, 0x1FB000u, 0x1FB008u)) {
        return;
    }
    ctx->pc = 0x1FB008u;
label_1fb008:
    // 0x1fb008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb00c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB00Cu;
        // 0x1fb010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB014u;
    // 0x1fb014: 0x0  nop
    ctx->pc = 0x1fb014u;
    // NOP
    ctx->pc = 0x1fb018u;
}
