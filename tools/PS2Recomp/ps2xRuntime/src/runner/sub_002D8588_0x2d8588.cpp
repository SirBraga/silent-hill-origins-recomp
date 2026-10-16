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

// Function: sub_002D8588
// Address: 0x2d8588 - 0x2d85a8
void sub_002D8588_0x2d8588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8588_0x2d8588");
#endif

    switch (ctx->pc) {
        case 0x2d8598u: goto label_2d8598;
        default: break;
    }

    ctx->pc = 0x2d8588u;

    // 0x2d8588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d858c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8590: 0xc0b5eae  jal         func_2D7AB8
    ctx->pc = 0x2D8590u;
    SET_GPR_U32(ctx, 31, 0x2D8598u);
    ctx->pc = 0x2D7AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7AB8u, 0x2D8590u, 0x2D8598u)) {
        return;
    }
    ctx->pc = 0x2D8598u;
label_2d8598:
    // 0x2d8598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d859c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D859Cu;
        // 0x2d85a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D85A4u;
    // 0x2d85a4: 0x0  nop
    ctx->pc = 0x2d85a4u;
    // NOP
    ctx->pc = 0x2d85a8u;
}
