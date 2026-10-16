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

// Function: sub_002601D8
// Address: 0x2601d8 - 0x2601f0
void sub_002601D8_0x2601d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002601D8_0x2601d8");
#endif

    ctx->pc = 0x2601d8u;

    // 0x2601d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2601d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2601dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2601dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2601e0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2601e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2601e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2601e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2601e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2601E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2601ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601E8u;
        // 0x2601ec: 0xa0a2002a  sb          $v0, 0x2A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2601E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2601F0u;
}
