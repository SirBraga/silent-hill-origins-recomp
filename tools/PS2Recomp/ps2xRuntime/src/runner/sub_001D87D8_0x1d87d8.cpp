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

// Function: sub_001D87D8
// Address: 0x1d87d8 - 0x1d8800
void sub_001D87D8_0x1d87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D87D8_0x1d87d8");
#endif

    switch (ctx->pc) {
        case 0x1d87f4u: goto label_1d87f4;
        default: break;
    }

    ctx->pc = 0x1d87d8u;

    // 0x1d87d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d87dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d87dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d87e0: 0x8c439da0  lw          $v1, -0x6260($v0)
    ctx->pc = 0x1d87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339DA0u));
    // 0x1d87e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D87E4u;
    {
        const bool branch_taken_0x1d87e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87E4u;
        // 0x1d87e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87e4) {
            ctx->pc = 0x1D87F4u;
            goto label_1d87f4;
        }
    }
    ctx->pc = 0x1D87ECu;
    // 0x1d87ec: 0xc076116  jal         func_1D8458
    ctx->pc = 0x1D87ECu;
    SET_GPR_U32(ctx, 31, 0x1D87F4u);
    ctx->pc = 0x1D8458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8458u, 0x1D87ECu, 0x1D87F4u)) {
        return;
    }
    ctx->pc = 0x1D87F4u;
label_1d87f4:
    // 0x1d87f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d87f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d87f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87F8u;
        // 0x1d87fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D87F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8800u;
}
