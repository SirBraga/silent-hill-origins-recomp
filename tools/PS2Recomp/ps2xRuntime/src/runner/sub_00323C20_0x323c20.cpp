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

// Function: sub_00323C20
// Address: 0x323c20 - 0x323c48
void sub_00323C20_0x323c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323C20_0x323c20");
#endif

    ctx->pc = 0x323c20u;

    // 0x323c20: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x323c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x323c24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x323c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323c28: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x323c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x323c2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323c30: 0x3e00008  jr          $ra
    ctx->pc = 0x323C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C30u;
        // 0x323c34: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323C38u;
    // 0x323c38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x323c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x323c3c: 0x0  nop
    ctx->pc = 0x323c3cu;
    // NOP
    // 0x323c40: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x323c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x323c44: 0x0  nop
    ctx->pc = 0x323c44u;
    // NOP
    ctx->pc = 0x323c48u;
}
