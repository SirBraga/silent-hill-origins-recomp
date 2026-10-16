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

// Function: sub_001CF608
// Address: 0x1cf608 - 0x1cf660
void sub_001CF608_0x1cf608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF608_0x1cf608");
#endif

    switch (ctx->pc) {
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf650u: goto label_1cf650;
        default: break;
    }

    ctx->pc = 0x1cf608u;

    // 0x1cf608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf614: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cf618: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf61c: 0x24830290  addiu       $v1, $a0, 0x290
    ctx->pc = 0x1cf61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
label_1cf620:
    // 0x1cf620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cf620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf624: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF624u;
    {
        const bool branch_taken_0x1cf624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf624) {
            ctx->pc = 0x1CF628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF624u;
            // 0x1cf628: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF63Cu;
            goto label_1cf63c;
        }
    }
    ctx->pc = 0x1CF62Cu;
    // 0x1cf62c: 0x8c82028c  lw          $v0, 0x28C($a0)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x1cf630: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF630u;
    {
        const bool branch_taken_0x1cf630 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF630u;
        // 0x1cf634: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf630) {
            ctx->pc = 0x1CF650u;
            goto label_1cf650;
        }
    }
    ctx->pc = 0x1CF638u;
    // 0x1cf638: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cf638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cf63c:
    // 0x1cf63c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1cf63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf640: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CF640u;
    {
        const bool branch_taken_0x1cf640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF640u;
        // 0x1cf644: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf640) {
            ctx->pc = 0x1CF620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf620;
        }
    }
    ctx->pc = 0x1CF648u;
    // 0x1cf648: 0xc073d98  jal         func_1CF660
    ctx->pc = 0x1CF648u;
    SET_GPR_U32(ctx, 31, 0x1CF650u);
    ctx->pc = 0x1CF660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF660u, 0x1CF648u, 0x1CF650u)) {
        return;
    }
    ctx->pc = 0x1CF650u;
label_1cf650:
    // 0x1cf650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf654: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF654u;
        // 0x1cf658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF65Cu;
    // 0x1cf65c: 0x0  nop
    ctx->pc = 0x1cf65cu;
    // NOP
    ctx->pc = 0x1cf660u;
}
