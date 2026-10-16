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

// Function: sub_001EDE50
// Address: 0x1ede50 - 0x1ede80
void sub_001EDE50_0x1ede50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDE50_0x1ede50");
#endif

    ctx->pc = 0x1ede50u;

    // 0x1ede50: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1ede50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1ede54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ede54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede58: 0x8ce3e7bc  lw          $v1, -0x1844($a3)
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ede5c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ede5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ede60: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1ede60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ede64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ede64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ede68: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ede68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1ede6c: 0x8ce5e7bc  lw          $a1, -0x1844($a3)
    ctx->pc = 0x1ede6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ede70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ede70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ede74: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE74u;
        // 0x1ede78: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDE7Cu;
    // 0x1ede7c: 0x0  nop
    ctx->pc = 0x1ede7cu;
    // NOP
    ctx->pc = 0x1ede80u;
}
