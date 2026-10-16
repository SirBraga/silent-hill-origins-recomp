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

// Function: sub_00152220
// Address: 0x152220 - 0x152240
void sub_00152220_0x152220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152220_0x152220");
#endif

    switch (ctx->pc) {
        case 0x152234u: goto label_152234;
        default: break;
    }

    ctx->pc = 0x152220u;

    // 0x152220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152224: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x152224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15222c: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x15222Cu;
    SET_GPR_U32(ctx, 31, 0x152234u);
    ctx->pc = 0x152230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15222Cu;
    // 0x152230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x15222Cu, 0x152234u)) {
        return;
    }
    ctx->pc = 0x152234u;
label_152234:
    // 0x152234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152238: 0x3e00008  jr          $ra
    ctx->pc = 0x152238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152238u;
        // 0x15223c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152240u;
}
