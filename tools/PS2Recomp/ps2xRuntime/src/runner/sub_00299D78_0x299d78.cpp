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

// Function: sub_00299D78
// Address: 0x299d78 - 0x299d98
void sub_00299D78_0x299d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D78_0x299d78");
#endif

    switch (ctx->pc) {
        case 0x299d88u: goto label_299d88;
        default: break;
    }

    ctx->pc = 0x299d78u;

    // 0x299d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299d80: 0xc0a7d56  jal         func_29F558
    ctx->pc = 0x299D80u;
    SET_GPR_U32(ctx, 31, 0x299D88u);
    ctx->pc = 0x29F558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F558u, 0x299D80u, 0x299D88u)) {
        return;
    }
    ctx->pc = 0x299D88u;
label_299d88:
    // 0x299d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x299D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D8Cu;
        // 0x299d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D94u;
    // 0x299d94: 0x0  nop
    ctx->pc = 0x299d94u;
    // NOP
    ctx->pc = 0x299d98u;
}
