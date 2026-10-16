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

// Function: sub_001B5250
// Address: 0x1b5250 - 0x1b5270
void sub_001B5250_0x1b5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5250_0x1b5250");
#endif

    switch (ctx->pc) {
        case 0x1b5260u: goto label_1b5260;
        default: break;
    }

    ctx->pc = 0x1b5250u;

    // 0x1b5250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5258: 0xc06e436  jal         func_1B90D8
    ctx->pc = 0x1B5258u;
    SET_GPR_U32(ctx, 31, 0x1B5260u);
    ctx->pc = 0x1B90D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B90D8u, 0x1B5258u, 0x1B5260u)) {
        return;
    }
    ctx->pc = 0x1B5260u;
label_1b5260:
    // 0x1b5260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5264: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5264u;
        // 0x1b5268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B526Cu;
    // 0x1b526c: 0x0  nop
    ctx->pc = 0x1b526cu;
    // NOP
    ctx->pc = 0x1b5270u;
}
