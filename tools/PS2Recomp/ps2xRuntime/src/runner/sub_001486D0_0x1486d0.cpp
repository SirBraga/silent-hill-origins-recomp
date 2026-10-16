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

// Function: sub_001486D0
// Address: 0x1486d0 - 0x1486f0
void sub_001486D0_0x1486d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001486D0_0x1486d0");
#endif

    switch (ctx->pc) {
        case 0x1486e4u: goto label_1486e4;
        default: break;
    }

    ctx->pc = 0x1486d0u;

    // 0x1486d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1486d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1486d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1486d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1486dc: 0xc052052  jal         func_148148
    ctx->pc = 0x1486DCu;
    SET_GPR_U32(ctx, 31, 0x1486E4u);
    ctx->pc = 0x1486E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486DCu;
    // 0x1486e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x148148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148148u, 0x1486DCu, 0x1486E4u)) {
        return;
    }
    ctx->pc = 0x1486E4u;
label_1486e4:
    // 0x1486e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1486e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1486e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1486E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1486ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486E8u;
        // 0x1486ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1486E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1486F0u;
}
