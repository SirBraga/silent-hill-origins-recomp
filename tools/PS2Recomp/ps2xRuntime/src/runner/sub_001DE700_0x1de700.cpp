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

// Function: sub_001DE700
// Address: 0x1de700 - 0x1de720
void sub_001DE700_0x1de700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE700_0x1de700");
#endif

    ctx->pc = 0x1de700u;

    // 0x1de700: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE700u;
    {
        const bool branch_taken_0x1de700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de700) {
            ctx->pc = 0x1DE714u;
            goto label_1de714;
        }
    }
    ctx->pc = 0x1DE708u;
    // 0x1de708: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1de708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1de70c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1de70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1de710: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1de710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1de714:
    // 0x1de714: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE714u;
        // 0x1de718: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE71Cu;
    // 0x1de71c: 0x0  nop
    ctx->pc = 0x1de71cu;
    // NOP
    ctx->pc = 0x1de720u;
}
