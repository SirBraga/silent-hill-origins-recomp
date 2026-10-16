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

// Function: sub_0029D558
// Address: 0x29d558 - 0x29d580
void sub_0029D558_0x29d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D558_0x29d558");
#endif

    ctx->pc = 0x29d558u;

    // 0x29d558: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x29d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x29d55c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29D55Cu;
    {
        const bool branch_taken_0x29d55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d55c) {
            ctx->pc = 0x29D560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D55Cu;
            // 0x29d560: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D564u;
            goto label_29d564;
        }
    }
    ctx->pc = 0x29D564u;
label_29d564:
    // 0x29d564: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x29d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29d568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D568u;
    {
        const bool branch_taken_0x29d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d568) {
            ctx->pc = 0x29D578u;
            goto label_29d578;
        }
    }
    ctx->pc = 0x29D570u;
    // 0x29d570: 0x80a71ee  j           func_29C7B8
    ctx->pc = 0x29D570u;
    ctx->pc = 0x29C7B8u;
    sub_0029C7B8_0x29c7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x29D578u;
label_29d578:
    // 0x29d578: 0x3e00008  jr          $ra
    ctx->pc = 0x29D578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D580u;
}
