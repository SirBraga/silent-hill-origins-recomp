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

// Function: sub_002D7200
// Address: 0x2d7200 - 0x2d7228
void sub_002D7200_0x2d7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7200_0x2d7200");
#endif

    switch (ctx->pc) {
        case 0x2d7210u: goto label_2d7210;
        default: break;
    }

    ctx->pc = 0x2d7200u;

    // 0x2d7200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7208: 0xc0b5b14  jal         func_2D6C50
    ctx->pc = 0x2D7208u;
    SET_GPR_U32(ctx, 31, 0x2D7210u);
    ctx->pc = 0x2D6C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C50u, 0x2D7208u, 0x2D7210u)) {
        return;
    }
    ctx->pc = 0x2D7210u;
label_2d7210:
    // 0x2d7210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7214: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7214u;
        // 0x2d7218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D721Cu;
    // 0x2d721c: 0x0  nop
    ctx->pc = 0x2d721cu;
    // NOP
    // 0x2d7220: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d7220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7224: 0x0  nop
    ctx->pc = 0x2d7224u;
    // NOP
    ctx->pc = 0x2d7228u;
}
