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

// Function: sub_00107030
// Address: 0x107030 - 0x107050
void sub_00107030_0x107030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107030_0x107030");
#endif

    switch (ctx->pc) {
        case 0x107044u: goto label_107044;
        default: break;
    }

    ctx->pc = 0x107030u;

    // 0x107030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10703c: 0xc041b14  jal         func_106C50
    ctx->pc = 0x10703Cu;
    SET_GPR_U32(ctx, 31, 0x107044u);
    ctx->pc = 0x107040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10703Cu;
    // 0x107040: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106C50u, 0x10703Cu, 0x107044u)) {
        return;
    }
    ctx->pc = 0x107044u;
label_107044:
    // 0x107044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107048: 0x3e00008  jr          $ra
    ctx->pc = 0x107048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107048u;
        // 0x10704c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107050u;
}
