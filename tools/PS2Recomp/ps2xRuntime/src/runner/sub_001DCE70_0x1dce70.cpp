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

// Function: sub_001DCE70
// Address: 0x1dce70 - 0x1dcec0
void sub_001DCE70_0x1dce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCE70_0x1dce70");
#endif

    ctx->pc = 0x1dce70u;

    // 0x1dce70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dce70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce74: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dce74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce78: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dce7c: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x1dce80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCE80u;
    {
        const bool branch_taken_0x1dce80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE80u;
        // 0x1dce84: 0xacc20048  sw          $v0, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce80) {
            ctx->pc = 0x1DCE98u;
            goto label_1dce98;
        }
    }
    ctx->pc = 0x1DCE88u;
    // 0x1dce88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dce8c: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dce90: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x1dce90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
    // 0x1dce94: 0x0  nop
    ctx->pc = 0x1dce94u;
    // NOP
label_1dce98:
    // 0x1dce98: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1dce98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1dce9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcea0: 0x8c82e664  lw          $v0, -0x199C($a0)
    ctx->pc = 0x1dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dcea4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dcea8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1dcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1dceac: 0x8c83e664  lw          $v1, -0x199C($a0)
    ctx->pc = 0x1dceacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dceb0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEB4u;
        // 0x1dceb8: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCEBCu;
    // 0x1dcebc: 0x0  nop
    ctx->pc = 0x1dcebcu;
    // NOP
    ctx->pc = 0x1dcec0u;
}
