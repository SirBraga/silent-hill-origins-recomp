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

// Function: sub_001B9818
// Address: 0x1b9818 - 0x1b9878
void sub_001B9818_0x1b9818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9818_0x1b9818");
#endif

    switch (ctx->pc) {
        case 0x1b9840u: goto label_1b9840;
        case 0x1b9864u: goto label_1b9864;
        default: break;
    }

    ctx->pc = 0x1b9818u;

    // 0x1b9818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b981c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9828: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b9828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1b982c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1b982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1b9830: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9830u;
    {
        const bool branch_taken_0x1b9830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9830) {
            ctx->pc = 0x1B9834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9830u;
            // 0x1b9834: 0x8e020280  lw          $v0, 0x280($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9848u;
            goto label_1b9848;
        }
    }
    ctx->pc = 0x1B9838u;
    // 0x1b9838: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B9838u;
    SET_GPR_U32(ctx, 31, 0x1B9840u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B9838u, 0x1B9840u)) {
        return;
    }
    ctx->pc = 0x1B9840u;
label_1b9840:
    // 0x1b9840: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1b9840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1b9844: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1b9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_1b9848:
    // 0x1b9848: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9848u;
    {
        const bool branch_taken_0x1b9848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9848) {
            ctx->pc = 0x1B984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9848u;
            // 0x1b984c: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9868u;
            goto label_1b9868;
        }
    }
    ctx->pc = 0x1B9850u;
    // 0x1b9850: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1b9850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1b9854: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9854u;
    {
        const bool branch_taken_0x1b9854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9854) {
            ctx->pc = 0x1B9858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9854u;
            // 0x1b9858: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9868u;
            goto label_1b9868;
        }
    }
    ctx->pc = 0x1B985Cu;
    // 0x1b985c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1B985Cu;
    SET_GPR_U32(ctx, 31, 0x1B9864u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1B985Cu, 0x1B9864u)) {
        return;
    }
    ctx->pc = 0x1B9864u;
label_1b9864:
    // 0x1b9864: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b9864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_1b9868:
    // 0x1b9868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b986c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9870: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9870u;
        // 0x1b9874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9878u;
}
