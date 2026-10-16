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

// Function: sub_00207010
// Address: 0x207010 - 0x207038
void sub_00207010_0x207010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207010_0x207010");
#endif

    ctx->pc = 0x207010u;

    // 0x207010: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207014: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207014u;
    {
        const bool branch_taken_0x207014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207014) {
            ctx->pc = 0x207018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207014u;
            // 0x207018: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20702Cu;
            goto label_20702c;
        }
    }
    ctx->pc = 0x20701Cu;
    // 0x20701c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x207020: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x207020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207024: 0x3e00008  jr          $ra
    ctx->pc = 0x207024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207024u;
        // 0x207028: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20702Cu;
label_20702c:
    // 0x20702c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20702cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207030: 0x3e00008  jr          $ra
    ctx->pc = 0x207030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207030u;
        // 0x207034: 0xac640298  sw          $a0, 0x298($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 664), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207038u;
}
