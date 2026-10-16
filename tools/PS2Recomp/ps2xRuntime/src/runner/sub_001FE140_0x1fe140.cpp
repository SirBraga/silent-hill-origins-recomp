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

// Function: sub_001FE140
// Address: 0x1fe140 - 0x1fe170
void sub_001FE140_0x1fe140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE140_0x1fe140");
#endif

    switch (ctx->pc) {
        case 0x1fe164u: goto label_1fe164;
        default: break;
    }

    ctx->pc = 0x1fe140u;

    // 0x1fe140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe148: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1fe14c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1fe14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fe150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe154: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE154u;
    {
        const bool branch_taken_0x1fe154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE154u;
        // 0x1fe158: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe154) {
            ctx->pc = 0x1FE164u;
            goto label_1fe164;
        }
    }
    ctx->pc = 0x1FE15Cu;
    // 0x1fe15c: 0xc08125c  jal         func_204970
    ctx->pc = 0x1FE15Cu;
    SET_GPR_U32(ctx, 31, 0x1FE164u);
    ctx->pc = 0x1FE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE15Cu;
    // 0x1fe160: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204970u, 0x1FE15Cu, 0x1FE164u)) {
        return;
    }
    ctx->pc = 0x1FE164u;
label_1fe164:
    // 0x1fe164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe168: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE168u;
        // 0x1fe16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE170u;
}
