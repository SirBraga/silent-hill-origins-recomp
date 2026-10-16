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

// Function: sub_0017BB88
// Address: 0x17bb88 - 0x17bba8
void sub_0017BB88_0x17bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BB88_0x17bb88");
#endif

    ctx->pc = 0x17bb88u;

    // 0x17bb88: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BB88u;
    {
        const bool branch_taken_0x17bb88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB88u;
        // 0x17bb8c: 0xac85002c  sw          $a1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb88) {
            ctx->pc = 0x17BB9Cu;
            goto label_17bb9c;
        }
    }
    ctx->pc = 0x17BB90u;
    // 0x17bb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bb94: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB94u;
        // 0x17bb98: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB9Cu;
label_17bb9c:
    // 0x17bb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB9Cu;
        // 0x17bba0: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBA4u;
    // 0x17bba4: 0x0  nop
    ctx->pc = 0x17bba4u;
    // NOP
    ctx->pc = 0x17bba8u;
}
