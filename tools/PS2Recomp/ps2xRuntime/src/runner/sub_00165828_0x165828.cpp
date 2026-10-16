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

// Function: sub_00165828
// Address: 0x165828 - 0x165850
void sub_00165828_0x165828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165828_0x165828");
#endif

    ctx->pc = 0x165828u;

    // 0x165828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x165828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16582c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16582Cu;
    {
        const bool branch_taken_0x16582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16582c) {
            ctx->pc = 0x165830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16582Cu;
            // 0x165830: 0x90a20028  lbu         $v0, 0x28($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16583Cu;
            goto label_16583c;
        }
    }
    ctx->pc = 0x165834u;
    // 0x165834: 0x3e00008  jr          $ra
    ctx->pc = 0x165834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165834u;
        // 0x165838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16583Cu;
label_16583c:
    // 0x16583c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x165840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165844: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165848: 0x3e00008  jr          $ra
    ctx->pc = 0x165848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165848u;
        // 0x16584c: 0x90620006  lbu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165850u;
}
