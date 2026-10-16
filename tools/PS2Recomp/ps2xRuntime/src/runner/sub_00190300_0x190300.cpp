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

// Function: sub_00190300
// Address: 0x190300 - 0x190318
void sub_00190300_0x190300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190300_0x190300");
#endif

    ctx->pc = 0x190300u;

    // 0x190300: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x190300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x190304: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x190304u;
    {
        const bool branch_taken_0x190304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190304) {
            ctx->pc = 0x190308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190304u;
            // 0x190308: 0xac45002c  sw          $a1, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19030Cu;
            goto label_19030c;
        }
    }
    ctx->pc = 0x19030Cu;
label_19030c:
    // 0x19030c: 0x3e00008  jr          $ra
    ctx->pc = 0x19030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190314u;
    // 0x190314: 0x0  nop
    ctx->pc = 0x190314u;
    // NOP
    ctx->pc = 0x190318u;
}
