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

// Function: sub_0020A618
// Address: 0x20a618 - 0x20a640
void sub_0020A618_0x20a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A618_0x20a618");
#endif

    ctx->pc = 0x20a618u;

    // 0x20a618: 0x8c8201b8  lw          $v0, 0x1B8($a0)
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x20a61c: 0xac8001a0  sw          $zero, 0x1A0($a0)
    ctx->pc = 0x20a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
    // 0x20a620: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x20a620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x20a624: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x20a624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x20a628: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x20a628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x20a62c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20a630: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x20a630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x20a634: 0x3e00008  jr          $ra
    ctx->pc = 0x20A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A634u;
        // 0x20a638: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A63Cu;
    // 0x20a63c: 0x0  nop
    ctx->pc = 0x20a63cu;
    // NOP
    ctx->pc = 0x20a640u;
}
