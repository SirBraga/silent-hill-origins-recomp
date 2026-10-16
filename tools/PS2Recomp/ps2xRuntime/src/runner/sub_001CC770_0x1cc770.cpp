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

// Function: sub_001CC770
// Address: 0x1cc770 - 0x1cc7a0
void sub_001CC770_0x1cc770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC770_0x1cc770");
#endif

    switch (ctx->pc) {
        case 0x1cc780u: goto label_1cc780;
        default: break;
    }

    ctx->pc = 0x1cc770u;

    // 0x1cc770: 0x24840274  addiu       $a0, $a0, 0x274
    ctx->pc = 0x1cc770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 628));
    // 0x1cc774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc778: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cc778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc77c: 0x0  nop
    ctx->pc = 0x1cc77cu;
    // NOP
label_1cc780:
    // 0x1cc780: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc784: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc788: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1cc788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1cc78c: 0x38420064  xori        $v0, $v0, 0x64
    ctx->pc = 0x1cc78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)100);
    // 0x1cc790: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC790u;
    {
        const bool branch_taken_0x1cc790 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC790u;
        // 0x1cc794: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc790) {
            ctx->pc = 0x1CC780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc780;
        }
    }
    ctx->pc = 0x1CC798u;
    // 0x1cc798: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC798u;
        // 0x1cc79c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC7A0u;
}
