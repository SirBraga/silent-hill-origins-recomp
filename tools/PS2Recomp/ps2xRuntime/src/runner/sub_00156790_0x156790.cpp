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

// Function: sub_00156790
// Address: 0x156790 - 0x1567a8
void sub_00156790_0x156790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156790_0x156790");
#endif

    ctx->pc = 0x156790u;

    // 0x156790: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x156790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x156794: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x156794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156798: 0x246329e0  addiu       $v1, $v1, 0x29E0
    ctx->pc = 0x156798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10720));
    // 0x15679c: 0x3e00008  jr          $ra
    ctx->pc = 0x15679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1567A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15679Cu;
        // 0x1567a0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15679Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1567A4u;
    // 0x1567a4: 0x0  nop
    ctx->pc = 0x1567a4u;
    // NOP
    ctx->pc = 0x1567a8u;
}
