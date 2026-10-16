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

// Function: sub_001DA108
// Address: 0x1da108 - 0x1da130
void sub_001DA108_0x1da108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA108_0x1da108");
#endif

    switch (ctx->pc) {
        case 0x1da118u: goto label_1da118;
        default: break;
    }

    ctx->pc = 0x1da108u;

    // 0x1da108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da110: 0xc08010c  jal         func_200430
    ctx->pc = 0x1DA110u;
    SET_GPR_U32(ctx, 31, 0x1DA118u);
    ctx->pc = 0x200430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200430u, 0x1DA110u, 0x1DA118u)) {
        return;
    }
    ctx->pc = 0x1DA118u;
label_1da118:
    // 0x1da118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA11Cu;
        // 0x1da120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA124u;
    // 0x1da124: 0x0  nop
    ctx->pc = 0x1da124u;
    // NOP
    // 0x1da128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1da128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1da12c: 0x0  nop
    ctx->pc = 0x1da12cu;
    // NOP
    ctx->pc = 0x1da130u;
}
