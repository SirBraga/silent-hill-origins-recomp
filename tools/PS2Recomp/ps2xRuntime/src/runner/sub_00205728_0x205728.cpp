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

// Function: sub_00205728
// Address: 0x205728 - 0x205740
void sub_00205728_0x205728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205728_0x205728");
#endif

    ctx->pc = 0x205728u;

    // 0x205728: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x205728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x20572c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20572cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205730: 0x24633eb8  addiu       $v1, $v1, 0x3EB8
    ctx->pc = 0x205730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16056));
    // 0x205734: 0x3e00008  jr          $ra
    ctx->pc = 0x205734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205734u;
        // 0x205738: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20573Cu;
    // 0x20573c: 0x0  nop
    ctx->pc = 0x20573cu;
    // NOP
    ctx->pc = 0x205740u;
}
