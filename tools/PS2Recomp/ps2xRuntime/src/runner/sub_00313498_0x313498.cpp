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

// Function: sub_00313498
// Address: 0x313498 - 0x3134b8
void sub_00313498_0x313498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313498_0x313498");
#endif

    switch (ctx->pc) {
        case 0x3134acu: goto label_3134ac;
        default: break;
    }

    ctx->pc = 0x313498u;

    // 0x313498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31349c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x31349cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x3134a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3134a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3134a4: 0xc0c4e8e  jal         func_313A38
    ctx->pc = 0x3134A4u;
    SET_GPR_U32(ctx, 31, 0x3134ACu);
    ctx->pc = 0x3134A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134A4u;
    // 0x3134a8: 0x24a53228  addiu       $a1, $a1, 0x3228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313A38u, 0x3134A4u, 0x3134ACu)) {
        return;
    }
    ctx->pc = 0x3134ACu;
label_3134ac:
    // 0x3134ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3134acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3134b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3134B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3134B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134B0u;
        // 0x3134b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3134B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3134B8u;
}
