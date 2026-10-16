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

// Function: sub_002F1B70
// Address: 0x2f1b70 - 0x2f1b98
void sub_002F1B70_0x2f1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B70_0x2f1b70");
#endif

    switch (ctx->pc) {
        case 0x2f1b88u: goto label_2f1b88;
        default: break;
    }

    ctx->pc = 0x2f1b70u;

    // 0x2f1b70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1b78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f1b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f1b80: 0xc0bc6a8  jal         func_2F1AA0
    ctx->pc = 0x2F1B80u;
    SET_GPR_U32(ctx, 31, 0x2F1B88u);
    ctx->pc = 0x2F1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B80u;
    // 0x2f1b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1AA0u, 0x2F1B80u, 0x2F1B88u)) {
        return;
    }
    ctx->pc = 0x2F1B88u;
label_2f1b88:
    // 0x2f1b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B8Cu;
        // 0x2f1b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1B94u;
    // 0x2f1b94: 0x0  nop
    ctx->pc = 0x2f1b94u;
    // NOP
    ctx->pc = 0x2f1b98u;
}
