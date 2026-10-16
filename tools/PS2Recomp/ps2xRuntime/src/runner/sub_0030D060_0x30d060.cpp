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

// Function: sub_0030D060
// Address: 0x30d060 - 0x30d090
void sub_0030D060_0x30d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D060_0x30d060");
#endif

    ctx->pc = 0x30d060u;

    // 0x30d060: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x30d060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x30d064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30d064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d068: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x30d068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x30d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D06Cu;
        // 0x30d070: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D074u;
    // 0x30d074: 0x0  nop
    ctx->pc = 0x30d074u;
    // NOP
    // 0x30d078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d07c: 0x0  nop
    ctx->pc = 0x30d07cu;
    // NOP
    // 0x30d080: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d084: 0x0  nop
    ctx->pc = 0x30d084u;
    // NOP
    // 0x30d088: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30d088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d08c: 0x0  nop
    ctx->pc = 0x30d08cu;
    // NOP
    ctx->pc = 0x30d090u;
}
