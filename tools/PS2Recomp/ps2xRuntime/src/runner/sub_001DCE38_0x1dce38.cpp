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

// Function: sub_001DCE38
// Address: 0x1dce38 - 0x1dce70
void sub_001DCE38_0x1dce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCE38_0x1dce38");
#endif

    ctx->pc = 0x1dce38u;

    // 0x1dce38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce3c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dce40: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x1dce44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE44u;
    {
        const bool branch_taken_0x1dce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE44u;
        // 0x1dce48: 0xaca20048  sw          $v0, 0x48($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce44) {
            ctx->pc = 0x1DCE58u;
            goto label_1dce58;
        }
    }
    ctx->pc = 0x1DCE4Cu;
    // 0x1dce4c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dce50: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dce54: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x1dce54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
label_1dce58:
    // 0x1dce58: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dce5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dce60: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dce60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dce64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1dce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dce68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE68u;
        // 0x1dce6c: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCE70u;
}
