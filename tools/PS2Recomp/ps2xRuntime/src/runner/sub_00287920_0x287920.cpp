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

// Function: sub_00287920
// Address: 0x287920 - 0x287950
void sub_00287920_0x287920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287920_0x287920");
#endif

    ctx->pc = 0x287920u;

    // 0x287920: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x287924: 0x246363b0  addiu       $v1, $v1, 0x63B0
    ctx->pc = 0x287924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25520));
    // 0x287928: 0x8c620610  lw          $v0, 0x610($v1)
    ctx->pc = 0x287928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7069C0u));
    // 0x28792c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287930: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287934: 0x3e00008  jr          $ra
    ctx->pc = 0x287934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287934u;
        // 0x287938: 0x8c620590  lw          $v0, 0x590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28793Cu;
    // 0x28793c: 0x0  nop
    ctx->pc = 0x28793cu;
    // NOP
    // 0x287940: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x287940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x287944: 0x0  nop
    ctx->pc = 0x287944u;
    // NOP
    // 0x287948: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x287948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28794c: 0x0  nop
    ctx->pc = 0x28794cu;
    // NOP
    ctx->pc = 0x287950u;
}
