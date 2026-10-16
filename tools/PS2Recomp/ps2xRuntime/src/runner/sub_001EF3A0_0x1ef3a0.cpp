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

// Function: sub_001EF3A0
// Address: 0x1ef3a0 - 0x1ef3c0
void sub_001EF3A0_0x1ef3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF3A0_0x1ef3a0");
#endif

    switch (ctx->pc) {
        case 0x1ef3b4u: goto label_1ef3b4;
        default: break;
    }

    ctx->pc = 0x1ef3a0u;

    // 0x1ef3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef3a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef3ac: 0xc0899d8  jal         func_226760
    ctx->pc = 0x1EF3ACu;
    SET_GPR_U32(ctx, 31, 0x1EF3B4u);
    ctx->pc = 0x1EF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3ACu;
    // 0x1ef3b0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x1EF3ACu, 0x1EF3B4u)) {
        return;
    }
    ctx->pc = 0x1EF3B4u;
label_1ef3b4:
    // 0x1ef3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3B8u;
        // 0x1ef3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF3C0u;
}
