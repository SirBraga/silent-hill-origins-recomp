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

// Function: sub_001DCF10
// Address: 0x1dcf10 - 0x1dcf60
void sub_001DCF10_0x1dcf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCF10_0x1dcf10");
#endif

    ctx->pc = 0x1dcf10u;

    // 0x1dcf10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dcf10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dcf14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf18: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dcf1c: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x1dcf20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF20u;
    {
        const bool branch_taken_0x1dcf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF20u;
        // 0x1dcf24: 0xacc20048  sw          $v0, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf20) {
            ctx->pc = 0x1DCF38u;
            goto label_1dcf38;
        }
    }
    ctx->pc = 0x1DCF28u;
    // 0x1dcf28: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dcf2c: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dcf30: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x1dcf30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
    // 0x1dcf34: 0x0  nop
    ctx->pc = 0x1dcf34u;
    // NOP
label_1dcf38:
    // 0x1dcf38: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1dcf3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dcf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dcf40: 0x8c82e664  lw          $v0, -0x199C($a0)
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dcf44: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dcf48: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1dcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1dcf4c: 0x8c83e664  lw          $v1, -0x199C($a0)
    ctx->pc = 0x1dcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dcf50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dcf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dcf54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF54u;
        // 0x1dcf58: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF5Cu;
    // 0x1dcf5c: 0x0  nop
    ctx->pc = 0x1dcf5cu;
    // NOP
    ctx->pc = 0x1dcf60u;
}
