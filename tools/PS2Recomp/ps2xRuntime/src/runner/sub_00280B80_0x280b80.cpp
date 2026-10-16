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

// Function: sub_00280B80
// Address: 0x280b80 - 0x280ba0
void sub_00280B80_0x280b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280B80_0x280b80");
#endif

    ctx->pc = 0x280b80u;

    // 0x280b80: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280b84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280b88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280b8c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280B8Cu;
    {
        const bool branch_taken_0x280b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B8Cu;
        // 0x280b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b8c) {
            ctx->pc = 0x280B98u;
            goto label_280b98;
        }
    }
    ctx->pc = 0x280B94u;
    // 0x280b94: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x280b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_280b98:
    // 0x280b98: 0x3e00008  jr          $ra
    ctx->pc = 0x280B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280BA0u;
}
