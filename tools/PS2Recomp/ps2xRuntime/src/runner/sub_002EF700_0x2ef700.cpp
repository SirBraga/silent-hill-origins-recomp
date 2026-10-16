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

// Function: sub_002EF700
// Address: 0x2ef700 - 0x2ef720
void sub_002EF700_0x2ef700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF700_0x2ef700");
#endif

    ctx->pc = 0x2ef700u;

    // 0x2ef700: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef704: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ef704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ef708: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ef708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ef70c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ef70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ef710: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF710u;
        // 0x2ef714: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF718u;
    // 0x2ef718: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2ef718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2ef71c: 0x0  nop
    ctx->pc = 0x2ef71cu;
    // NOP
    ctx->pc = 0x2ef720u;
}
