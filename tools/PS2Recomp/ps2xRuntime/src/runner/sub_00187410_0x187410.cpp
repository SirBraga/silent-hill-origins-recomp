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

// Function: sub_00187410
// Address: 0x187410 - 0x187438
void sub_00187410_0x187410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187410_0x187410");
#endif

    ctx->pc = 0x187410u;

    // 0x187410: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x187410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x187414: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187414u;
    {
        const bool branch_taken_0x187414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187414) {
            ctx->pc = 0x187430u;
            goto label_187430;
        }
    }
    ctx->pc = 0x18741Cu;
    // 0x18741c: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x18741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x187420: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187420u;
    {
        const bool branch_taken_0x187420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187420) {
            ctx->pc = 0x187430u;
            goto label_187430;
        }
    }
    ctx->pc = 0x187428u;
    // 0x187428: 0x3e00008  jr          $ra
    ctx->pc = 0x187428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187428u;
        // 0x18742c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187430u;
label_187430:
    // 0x187430: 0x3e00008  jr          $ra
    ctx->pc = 0x187430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187430u;
        // 0x187434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187438u;
}
