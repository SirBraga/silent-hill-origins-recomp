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

// Function: sub_0029A960
// Address: 0x29a960 - 0x29a980
void sub_0029A960_0x29a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A960_0x29a960");
#endif

    switch (ctx->pc) {
        case 0x29a970u: goto label_29a970;
        default: break;
    }

    ctx->pc = 0x29a960u;

    // 0x29a960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a968: 0xc0a6492  jal         func_299248
    ctx->pc = 0x29A968u;
    SET_GPR_U32(ctx, 31, 0x29A970u);
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x29A968u, 0x29A970u)) {
        return;
    }
    ctx->pc = 0x29A970u;
label_29a970:
    // 0x29a970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a974: 0x3e00008  jr          $ra
    ctx->pc = 0x29A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A974u;
        // 0x29a978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A97Cu;
    // 0x29a97c: 0x0  nop
    ctx->pc = 0x29a97cu;
    // NOP
    ctx->pc = 0x29a980u;
}
