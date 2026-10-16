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

// Function: sub_001FBD80
// Address: 0x1fbd80 - 0x1fbda0
void sub_001FBD80_0x1fbd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBD80_0x1fbd80");
#endif

    switch (ctx->pc) {
        case 0x1fbd90u: goto label_1fbd90;
        default: break;
    }

    ctx->pc = 0x1fbd80u;

    // 0x1fbd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbd88: 0xc07eae0  jal         func_1FAB80
    ctx->pc = 0x1FBD88u;
    SET_GPR_U32(ctx, 31, 0x1FBD90u);
    ctx->pc = 0x1FAB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAB80u, 0x1FBD88u, 0x1FBD90u)) {
        return;
    }
    ctx->pc = 0x1FBD90u;
label_1fbd90:
    // 0x1fbd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbd94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD94u;
        // 0x1fbd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD9Cu;
    // 0x1fbd9c: 0x0  nop
    ctx->pc = 0x1fbd9cu;
    // NOP
    ctx->pc = 0x1fbda0u;
}
