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

// Function: sub_0027E428
// Address: 0x27e428 - 0x27e460
void sub_0027E428_0x27e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E428_0x27e428");
#endif

    ctx->pc = 0x27e428u;

    // 0x27e428: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x27e42c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27e434: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E434u;
    {
        const bool branch_taken_0x27e434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e434) {
            ctx->pc = 0x27E444u;
            goto label_27e444;
        }
    }
    ctx->pc = 0x27E43Cu;
    // 0x27e43c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E43Cu;
        // 0x27e440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E444u;
label_27e444:
    // 0x27e444: 0x3e00008  jr          $ra
    ctx->pc = 0x27E444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E444u;
        // 0x27e448: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E44Cu;
    // 0x27e44c: 0x0  nop
    ctx->pc = 0x27e44cu;
    // NOP
    // 0x27e450: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27e454: 0x0  nop
    ctx->pc = 0x27e454u;
    // NOP
    // 0x27e458: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e45c: 0x0  nop
    ctx->pc = 0x27e45cu;
    // NOP
    ctx->pc = 0x27e460u;
}
