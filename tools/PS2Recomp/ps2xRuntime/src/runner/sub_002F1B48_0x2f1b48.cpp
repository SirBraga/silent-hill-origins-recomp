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

// Function: sub_002F1B48
// Address: 0x2f1b48 - 0x2f1b70
void sub_002F1B48_0x2f1b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B48_0x2f1b48");
#endif

    switch (ctx->pc) {
        case 0x2f1b60u: goto label_2f1b60;
        default: break;
    }

    ctx->pc = 0x2f1b48u;

    // 0x2f1b48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1b50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f1b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f1b58: 0xc0bc6a8  jal         func_2F1AA0
    ctx->pc = 0x2F1B58u;
    SET_GPR_U32(ctx, 31, 0x2F1B60u);
    ctx->pc = 0x2F1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B58u;
    // 0x2f1b5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1AA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1AA0u, 0x2F1B58u, 0x2F1B60u)) {
        return;
    }
    ctx->pc = 0x2F1B60u;
label_2f1b60:
    // 0x2f1b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1b64: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B64u;
        // 0x2f1b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1B6Cu;
    // 0x2f1b6c: 0x0  nop
    ctx->pc = 0x2f1b6cu;
    // NOP
    ctx->pc = 0x2f1b70u;
}
