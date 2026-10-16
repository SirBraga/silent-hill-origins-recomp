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

// Function: sub_0022BD50
// Address: 0x22bd50 - 0x22bd80
void sub_0022BD50_0x22bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD50_0x22bd50");
#endif

    switch (ctx->pc) {
        case 0x22bd60u: goto label_22bd60;
        default: break;
    }

    ctx->pc = 0x22bd50u;

    // 0x22bd50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22bd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x22bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22bd58: 0x2443003c  addiu       $v1, $v0, 0x3C
    ctx->pc = 0x22bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22bd5c: 0x0  nop
    ctx->pc = 0x22bd5cu;
    // NOP
label_22bd60:
    // 0x22bd60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x22bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x22bd64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22bd68: 0x0  nop
    ctx->pc = 0x22bd68u;
    // NOP
    // 0x22bd6c: 0x0  nop
    ctx->pc = 0x22bd6cu;
    // NOP
    // 0x22bd70: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22BD70u;
    {
        const bool branch_taken_0x22bd70 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x22BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD70u;
        // 0x22bd74: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd70) {
            ctx->pc = 0x22BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bd60;
        }
    }
    ctx->pc = 0x22BD78u;
    // 0x22bd78: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BD80u;
}
