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

// Function: sub_00170D58
// Address: 0x170d58 - 0x170d78
void sub_00170D58_0x170d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170D58_0x170d58");
#endif

    switch (ctx->pc) {
        case 0x170d6cu: goto label_170d6c;
        default: break;
    }

    ctx->pc = 0x170d58u;

    // 0x170d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170d5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170d64: 0xc05c250  jal         func_170940
    ctx->pc = 0x170D64u;
    SET_GPR_U32(ctx, 31, 0x170D6Cu);
    ctx->pc = 0x170D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D64u;
    // 0x170d68: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x170940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170940u, 0x170D64u, 0x170D6Cu)) {
        return;
    }
    ctx->pc = 0x170D6Cu;
label_170d6c:
    // 0x170d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d70: 0x3e00008  jr          $ra
    ctx->pc = 0x170D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D70u;
        // 0x170d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D78u;
}
