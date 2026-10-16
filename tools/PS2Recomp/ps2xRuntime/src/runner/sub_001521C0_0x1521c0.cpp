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

// Function: sub_001521C0
// Address: 0x1521c0 - 0x1521f0
void sub_001521C0_0x1521c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001521C0_0x1521c0");
#endif

    switch (ctx->pc) {
        case 0x1521d0u: goto label_1521d0;
        case 0x1521e0u: goto label_1521e0;
        default: break;
    }

    ctx->pc = 0x1521c0u;

    // 0x1521c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1521c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1521c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1521c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1521c8: 0xc074b30  jal         func_1D2CC0
    ctx->pc = 0x1521C8u;
    SET_GPR_U32(ctx, 31, 0x1521D0u);
    ctx->pc = 0x1D2CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2CC0u, 0x1521C8u, 0x1521D0u)) {
        return;
    }
    ctx->pc = 0x1521D0u;
label_1521d0:
    // 0x1521d0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1521d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1521d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1521d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521d8: 0xc074c26  jal         func_1D3098
    ctx->pc = 0x1521D8u;
    SET_GPR_U32(ctx, 31, 0x1521E0u);
    ctx->pc = 0x1521DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521D8u;
    // 0x1521dc: 0x24842190  addiu       $a0, $a0, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3098u, 0x1521D8u, 0x1521E0u)) {
        return;
    }
    ctx->pc = 0x1521E0u;
label_1521e0:
    // 0x1521e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1521e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1521e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1521e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1521e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1521E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1521ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521E8u;
        // 0x1521ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1521E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1521F0u;
}
