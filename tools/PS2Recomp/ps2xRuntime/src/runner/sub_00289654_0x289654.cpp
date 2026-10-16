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

// Function: sub_00289654
// Address: 0x289654 - 0x289668
void sub_00289654_0x289654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289654_0x289654");
#endif

    switch (ctx->pc) {
        case 0x28965cu: goto label_28965c;
        default: break;
    }

    ctx->pc = 0x289654u;

    // 0x289654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28965c:
    // 0x28965c: 0x3e00008  jr          $ra
    ctx->pc = 0x28965Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28965Cu;
        // 0x289660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28965Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289664u;
    // 0x289664: 0x0  nop
    ctx->pc = 0x289664u;
    // NOP
    ctx->pc = 0x289668u;
}
