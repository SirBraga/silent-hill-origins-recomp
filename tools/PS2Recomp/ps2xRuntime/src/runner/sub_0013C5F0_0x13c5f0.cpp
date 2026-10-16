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

// Function: sub_0013C5F0
// Address: 0x13c5f0 - 0x13c610
void sub_0013C5F0_0x13c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C5F0_0x13c5f0");
#endif

    switch (ctx->pc) {
        case 0x13c604u: goto label_13c604;
        default: break;
    }

    ctx->pc = 0x13c5f0u;

    // 0x13c5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c5f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c5fc: 0xc04f046  jal         func_13C118
    ctx->pc = 0x13C5FCu;
    SET_GPR_U32(ctx, 31, 0x13C604u);
    ctx->pc = 0x13C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5FCu;
    // 0x13c600: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C118u, 0x13C5FCu, 0x13C604u)) {
        return;
    }
    ctx->pc = 0x13C604u;
label_13c604:
    // 0x13c604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c608: 0x3e00008  jr          $ra
    ctx->pc = 0x13C608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C608u;
        // 0x13c60c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C610u;
}
