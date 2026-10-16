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

// Function: sub_0014B7F8
// Address: 0x14b7f8 - 0x14b818
void sub_0014B7F8_0x14b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B7F8_0x14b7f8");
#endif

    switch (ctx->pc) {
        case 0x14b80cu: goto label_14b80c;
        default: break;
    }

    ctx->pc = 0x14b7f8u;

    // 0x14b7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b7fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b804: 0xc052d20  jal         func_14B480
    ctx->pc = 0x14B804u;
    SET_GPR_U32(ctx, 31, 0x14B80Cu);
    ctx->pc = 0x14B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B804u;
    // 0x14b808: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14B480u, 0x14B804u, 0x14B80Cu)) {
        return;
    }
    ctx->pc = 0x14B80Cu;
label_14b80c:
    // 0x14b80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b810: 0x3e00008  jr          $ra
    ctx->pc = 0x14B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B810u;
        // 0x14b814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B818u;
}
