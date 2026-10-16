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

// Function: sub_001E47A0
// Address: 0x1e47a0 - 0x1e47e0
void sub_001E47A0_0x1e47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E47A0_0x1e47a0");
#endif

    switch (ctx->pc) {
        case 0x1e47d0u: goto label_1e47d0;
        default: break;
    }

    ctx->pc = 0x1e47a0u;

    // 0x1e47a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e47a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e47a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e47a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e47ac: 0x8c44e720  lw          $a0, -0x18E0($v0)
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E720u));
    // 0x1e47b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E47B0u;
    {
        const bool branch_taken_0x1e47b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47B0u;
        // 0x1e47b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47b0) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E47B8u;
    // 0x1e47b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e47bc: 0x8c43e700  lw          $v1, -0x1900($v0)
    ctx->pc = 0x1e47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E700u));
    // 0x1e47c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E47C0u;
    {
        const bool branch_taken_0x1e47c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C0u;
        // 0x1e47c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c0) {
            ctx->pc = 0x1E47D4u;
            goto label_1e47d4;
        }
    }
    ctx->pc = 0x1E47C8u;
    // 0x1e47c8: 0xc079a72  jal         func_1E69C8
    ctx->pc = 0x1E47C8u;
    SET_GPR_U32(ctx, 31, 0x1E47D0u);
    ctx->pc = 0x1E69C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E69C8u, 0x1E47C8u, 0x1E47D0u)) {
        return;
    }
    ctx->pc = 0x1E47D0u;
label_1e47d0:
    // 0x1e47d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e47d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e47d4:
    // 0x1e47d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E47D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47D4u;
        // 0x1e47d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E47DCu;
    // 0x1e47dc: 0x0  nop
    ctx->pc = 0x1e47dcu;
    // NOP
    ctx->pc = 0x1e47e0u;
}
