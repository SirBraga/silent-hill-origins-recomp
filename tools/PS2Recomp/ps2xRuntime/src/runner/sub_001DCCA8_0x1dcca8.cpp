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

// Function: sub_001DCCA8
// Address: 0x1dcca8 - 0x1dccd8
void sub_001DCCA8_0x1dcca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCCA8_0x1dcca8");
#endif

    ctx->pc = 0x1dcca8u;

    // 0x1dcca8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dccac: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dccacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dccb0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dccb4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1dccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1dccb8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DCCB8u;
    {
        const bool branch_taken_0x1dccb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dccb8) {
            ctx->pc = 0x1DCCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCB8u;
            // 0x1dccbc: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCC0u;
            goto label_1dccc0;
        }
    }
    ctx->pc = 0x1DCCC0u;
label_1dccc0:
    // 0x1dccc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCCC8u;
    // 0x1dccc8: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x1dccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x1dcccc: 0x0  nop
    ctx->pc = 0x1dccccu;
    // NOP
    // 0x1dccd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dccd4: 0x0  nop
    ctx->pc = 0x1dccd4u;
    // NOP
    ctx->pc = 0x1dccd8u;
}
