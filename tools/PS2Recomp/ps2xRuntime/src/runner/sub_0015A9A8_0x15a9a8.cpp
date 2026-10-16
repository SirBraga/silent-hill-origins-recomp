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

// Function: sub_0015A9A8
// Address: 0x15a9a8 - 0x15a9c8
void sub_0015A9A8_0x15a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A9A8_0x15a9a8");
#endif

    switch (ctx->pc) {
        case 0x15a9bcu: goto label_15a9bc;
        default: break;
    }

    ctx->pc = 0x15a9a8u;

    // 0x15a9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a9b4: 0xc0568e8  jal         func_15A3A0
    ctx->pc = 0x15A9B4u;
    SET_GPR_U32(ctx, 31, 0x15A9BCu);
    ctx->pc = 0x15A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9B4u;
    // 0x15a9b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A3A0u, 0x15A9B4u, 0x15A9BCu)) {
        return;
    }
    ctx->pc = 0x15A9BCu;
label_15a9bc:
    // 0x15a9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C0u;
        // 0x15a9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A9C8u;
}
