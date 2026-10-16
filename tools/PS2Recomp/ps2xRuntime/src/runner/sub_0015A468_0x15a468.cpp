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

// Function: sub_0015A468
// Address: 0x15a468 - 0x15a488
void sub_0015A468_0x15a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A468_0x15a468");
#endif

    ctx->pc = 0x15a468u;

    // 0x15a468: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x15a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15a46c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A46Cu;
    {
        const bool branch_taken_0x15a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a46c) {
            ctx->pc = 0x15A470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A46Cu;
            // 0x15a470: 0xaca20274  sw          $v0, 0x274($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 628), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A47Cu;
            goto label_15a47c;
        }
    }
    ctx->pc = 0x15A474u;
    // 0x15a474: 0x3e00008  jr          $ra
    ctx->pc = 0x15A474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A474u;
        // 0x15a478: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A47Cu;
label_15a47c:
    // 0x15a47c: 0xaca40270  sw          $a0, 0x270($a1)
    ctx->pc = 0x15a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 624), GPR_U32(ctx, 4));
    // 0x15a480: 0x3e00008  jr          $ra
    ctx->pc = 0x15A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A480u;
        // 0x15a484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A488u;
}
