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

// Function: sub_0016E9B0
// Address: 0x16e9b0 - 0x16e9d0
void sub_0016E9B0_0x16e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E9B0_0x16e9b0");
#endif

    switch (ctx->pc) {
        case 0x16e9c4u: goto label_16e9c4;
        default: break;
    }

    ctx->pc = 0x16e9b0u;

    // 0x16e9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e9b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e9bc: 0xc05b9d6  jal         func_16E758
    ctx->pc = 0x16E9BCu;
    SET_GPR_U32(ctx, 31, 0x16E9C4u);
    ctx->pc = 0x16E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9BCu;
    // 0x16e9c0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16E758u, 0x16E9BCu, 0x16E9C4u)) {
        return;
    }
    ctx->pc = 0x16E9C4u;
label_16e9c4:
    // 0x16e9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9C8u;
        // 0x16e9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E9D0u;
}
