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

// Function: sub_002ED328
// Address: 0x2ed328 - 0x2ed348
void sub_002ED328_0x2ed328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED328_0x2ed328");
#endif

    switch (ctx->pc) {
        case 0x2ed33cu: goto label_2ed33c;
        default: break;
    }

    ctx->pc = 0x2ed328u;

    // 0x2ed328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed32c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2ed32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2ed330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed334: 0xc0b6c8c  jal         func_2DB230
    ctx->pc = 0x2ED334u;
    SET_GPR_U32(ctx, 31, 0x2ED33Cu);
    ctx->pc = 0x2ED338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED334u;
    // 0x2ed338: 0x2484e818  addiu       $a0, $a0, -0x17E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB230u, 0x2ED334u, 0x2ED33Cu)) {
        return;
    }
    ctx->pc = 0x2ED33Cu;
label_2ed33c:
    // 0x2ed33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed340: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED340u;
        // 0x2ed344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED348u;
}
