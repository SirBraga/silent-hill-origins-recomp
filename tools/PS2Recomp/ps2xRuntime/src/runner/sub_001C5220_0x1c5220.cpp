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

// Function: sub_001C5220
// Address: 0x1c5220 - 0x1c5250
void sub_001C5220_0x1c5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5220_0x1c5220");
#endif

    ctx->pc = 0x1c5220u;

    // 0x1c5220: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1c5224: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1c5224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c5228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5228u;
    {
        const bool branch_taken_0x1c5228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5228) {
            ctx->pc = 0x1C5238u;
            goto label_1c5238;
        }
    }
    ctx->pc = 0x1C5230u;
    // 0x1c5230: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5230u;
        // 0x1c5234: 0xac8002d8  sw          $zero, 0x2D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5238u;
label_1c5238:
    // 0x1c5238: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5238u;
    {
        const bool branch_taken_0x1c5238 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5238u;
        // 0x1c523c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5238) {
            ctx->pc = 0x1C5244u;
            goto label_1c5244;
        }
    }
    ctx->pc = 0x1C5240u;
    // 0x1c5240: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x1c5240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
label_1c5244:
    // 0x1c5244: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C524Cu;
    // 0x1c524c: 0x0  nop
    ctx->pc = 0x1c524cu;
    // NOP
    ctx->pc = 0x1c5250u;
}
