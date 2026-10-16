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

// Function: sub_001EC644
// Address: 0x1ec644 - 0x1ec668
void sub_001EC644_0x1ec644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC644_0x1ec644");
#endif

    switch (ctx->pc) {
        case 0x1ec64cu: goto label_1ec64c;
        default: break;
    }

    ctx->pc = 0x1ec644u;

    // 0x1ec644: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ec648: 0x24421de8  addiu       $v0, $v0, 0x1DE8
    ctx->pc = 0x1ec648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7656));
label_1ec64c:
    // 0x1ec64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC654u;
    // 0x1ec654: 0x0  nop
    ctx->pc = 0x1ec654u;
    // NOP
    // 0x1ec658: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec65c: 0x0  nop
    ctx->pc = 0x1ec65cu;
    // NOP
    // 0x1ec660: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec664: 0x0  nop
    ctx->pc = 0x1ec664u;
    // NOP
    ctx->pc = 0x1ec668u;
}
