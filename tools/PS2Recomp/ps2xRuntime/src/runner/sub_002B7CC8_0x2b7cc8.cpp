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

// Function: sub_002B7CC8
// Address: 0x2b7cc8 - 0x2b7ce8
void sub_002B7CC8_0x2b7cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7CC8_0x2b7cc8");
#endif

    ctx->pc = 0x2b7cc8u;

    // 0x2b7cc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b7cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ccc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b7cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7cd0: 0x3403b810  ori         $v1, $zero, 0xB810
    ctx->pc = 0x2b7cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47120);
    // 0x2b7cd4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2b7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b7cd8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7cdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b7ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE0u;
        // 0x2b7ce4: 0xa4660000  sh          $a2, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7CE8u;
}
