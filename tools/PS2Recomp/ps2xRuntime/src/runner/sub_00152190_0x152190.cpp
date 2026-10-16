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

// Function: sub_00152190
// Address: 0x152190 - 0x1521c0
void sub_00152190_0x152190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152190_0x152190");
#endif

    switch (ctx->pc) {
        case 0x1521b0u: goto label_1521b0;
        default: break;
    }

    ctx->pc = 0x152190u;

    // 0x152190: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152198: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x152198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x15219c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x15219cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1521a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1521A0u;
    {
        const bool branch_taken_0x1521a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521A0u;
        // 0x1521a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521a0) {
            ctx->pc = 0x1521B0u;
            goto label_1521b0;
        }
    }
    ctx->pc = 0x1521A8u;
    // 0x1521a8: 0xc074b44  jal         func_1D2D10
    ctx->pc = 0x1521A8u;
    SET_GPR_U32(ctx, 31, 0x1521B0u);
    ctx->pc = 0x1D2D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2D10u, 0x1521A8u, 0x1521B0u)) {
        return;
    }
    ctx->pc = 0x1521B0u;
label_1521b0:
    // 0x1521b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1521b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1521b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1521b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1521B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1521BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521B8u;
        // 0x1521bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1521B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1521C0u;
}
