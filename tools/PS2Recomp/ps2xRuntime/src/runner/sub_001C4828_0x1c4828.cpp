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

// Function: sub_001C4828
// Address: 0x1c4828 - 0x1c4868
void sub_001C4828_0x1c4828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4828_0x1c4828");
#endif

    switch (ctx->pc) {
        case 0x1c483cu: goto label_1c483c;
        case 0x1c4850u: goto label_1c4850;
        default: break;
    }

    ctx->pc = 0x1c4828u;

    // 0x1c4828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c482c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4834: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C4834u;
    SET_GPR_U32(ctx, 31, 0x1C483Cu);
    ctx->pc = 0x1C4838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4834u;
    // 0x1c4838: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C4834u, 0x1C483Cu)) {
        return;
    }
    ctx->pc = 0x1C483Cu;
label_1c483c:
    // 0x1c483c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c4840: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4840u;
    {
        const bool branch_taken_0x1c4840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4840) {
            ctx->pc = 0x1C4844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4840u;
            // 0x1c4844: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4858u;
            goto label_1c4858;
        }
    }
    ctx->pc = 0x1C4848u;
    // 0x1c4848: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C4848u;
    SET_GPR_U32(ctx, 31, 0x1C4850u);
    ctx->pc = 0x1C484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4848u;
    // 0x1c484c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C4848u, 0x1C4850u)) {
        return;
    }
    ctx->pc = 0x1C4850u;
label_1c4850:
    // 0x1c4850: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x1c4850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x1c4854: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4858:
    // 0x1c4858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c485c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C485Cu;
        // 0x1c4860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4864u;
    // 0x1c4864: 0x0  nop
    ctx->pc = 0x1c4864u;
    // NOP
    ctx->pc = 0x1c4868u;
}
