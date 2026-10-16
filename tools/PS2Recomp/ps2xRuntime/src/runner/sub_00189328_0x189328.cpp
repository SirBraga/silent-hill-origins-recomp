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

// Function: sub_00189328
// Address: 0x189328 - 0x189348
void sub_00189328_0x189328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189328_0x189328");
#endif

    switch (ctx->pc) {
        case 0x189338u: goto label_189338;
        default: break;
    }

    ctx->pc = 0x189328u;

    // 0x189328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18932c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189330: 0xc0623b4  jal         func_188ED0
    ctx->pc = 0x189330u;
    SET_GPR_U32(ctx, 31, 0x189338u);
    ctx->pc = 0x188ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188ED0u, 0x189330u, 0x189338u)) {
        return;
    }
    ctx->pc = 0x189338u;
label_189338:
    // 0x189338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18933c: 0x3e00008  jr          $ra
    ctx->pc = 0x18933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18933Cu;
        // 0x189340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18933Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189344u;
    // 0x189344: 0x0  nop
    ctx->pc = 0x189344u;
    // NOP
    ctx->pc = 0x189348u;
}
