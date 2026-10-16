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

// Function: sub_0017CFD8
// Address: 0x17cfd8 - 0x17d008
void sub_0017CFD8_0x17cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CFD8_0x17cfd8");
#endif

    switch (ctx->pc) {
        case 0x17cfe8u: goto label_17cfe8;
        default: break;
    }

    ctx->pc = 0x17cfd8u;

    // 0x17cfd8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17cfdc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17cfe0: 0x24428758  addiu       $v0, $v0, -0x78A8
    ctx->pc = 0x17cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    // 0x17cfe4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_17cfe8:
    // 0x17cfe8: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x17cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x17cfec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17cff0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17cff4: 0x0  nop
    ctx->pc = 0x17cff4u;
    // NOP
    // 0x17cff8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17CFF8u;
    {
        const bool branch_taken_0x17cff8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x17CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFF8u;
        // 0x17cffc: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cff8) {
            ctx->pc = 0x17CFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17cfe8;
        }
    }
    ctx->pc = 0x17D000u;
    // 0x17d000: 0x3e00008  jr          $ra
    ctx->pc = 0x17D000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D008u;
}
