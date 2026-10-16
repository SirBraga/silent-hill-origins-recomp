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

// Function: sub_0023A4C8
// Address: 0x23a4c8 - 0x23a508
void sub_0023A4C8_0x23a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A4C8_0x23a4c8");
#endif

    switch (ctx->pc) {
        case 0x23a4e0u: goto label_23a4e0;
        default: break;
    }

    ctx->pc = 0x23a4c8u;

    // 0x23a4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a4cc: 0x8f82844c  lw          $v0, -0x7BB4($gp)
    ctx->pc = 0x23a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x23a4d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A4D0u;
    {
        const bool branch_taken_0x23a4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D0u;
        // 0x23a4d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4d0) {
            ctx->pc = 0x23A4F0u;
            goto label_23a4f0;
        }
    }
    ctx->pc = 0x23A4D8u;
    // 0x23a4d8: 0xc08bf66  jal         func_22FD98
    ctx->pc = 0x23A4D8u;
    SET_GPR_U32(ctx, 31, 0x23A4E0u);
    ctx->pc = 0x22FD98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FD98u, 0x23A4D8u, 0x23A4E0u)) {
        return;
    }
    ctx->pc = 0x23A4E0u;
label_23a4e0:
    // 0x23a4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a4e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A4E8u;
    {
        const bool branch_taken_0x23a4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E8u;
        // 0x23a4ec: 0xaf83844c  sw          $v1, -0x7BB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e8) {
            ctx->pc = 0x23A4F4u;
            goto label_23a4f4;
        }
    }
    ctx->pc = 0x23A4F0u;
label_23a4f0:
    // 0x23a4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a4f4:
    // 0x23a4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4F8u;
        // 0x23a4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A500u;
    // 0x23a500: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23a504: 0x0  nop
    ctx->pc = 0x23a504u;
    // NOP
    ctx->pc = 0x23a508u;
}
