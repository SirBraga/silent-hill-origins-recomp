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

// Function: sub_002559D0
// Address: 0x2559d0 - 0x2559f8
void sub_002559D0_0x2559d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002559D0_0x2559d0");
#endif

    switch (ctx->pc) {
        case 0x2559ecu: goto label_2559ec;
        default: break;
    }

    ctx->pc = 0x2559d0u;

    // 0x2559d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2559d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2559d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2559d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2559d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2559d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2559dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2559e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2559e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2559e4: 0xc095246  jal         func_254918
    ctx->pc = 0x2559E4u;
    SET_GPR_U32(ctx, 31, 0x2559ECu);
    ctx->pc = 0x2559E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559E4u;
    // 0x2559e8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254918u, 0x2559E4u, 0x2559ECu)) {
        return;
    }
    ctx->pc = 0x2559ECu;
label_2559ec:
    // 0x2559ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2559ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2559f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2559F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2559F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559F0u;
        // 0x2559f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2559F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2559F8u;
}
