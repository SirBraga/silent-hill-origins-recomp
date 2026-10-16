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

// Function: sub_00137210
// Address: 0x137210 - 0x137230
void sub_00137210_0x137210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137210_0x137210");
#endif

    switch (ctx->pc) {
        case 0x137220u: goto label_137220;
        default: break;
    }

    ctx->pc = 0x137210u;

    // 0x137210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137218: 0xc049804  jal         func_126010
    ctx->pc = 0x137218u;
    SET_GPR_U32(ctx, 31, 0x137220u);
    ctx->pc = 0x126010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126010u, 0x137218u, 0x137220u)) {
        return;
    }
    ctx->pc = 0x137220u;
label_137220:
    // 0x137220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137224: 0x3e00008  jr          $ra
    ctx->pc = 0x137224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137224u;
        // 0x137228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13722Cu;
    // 0x13722c: 0x0  nop
    ctx->pc = 0x13722cu;
    // NOP
    ctx->pc = 0x137230u;
}
