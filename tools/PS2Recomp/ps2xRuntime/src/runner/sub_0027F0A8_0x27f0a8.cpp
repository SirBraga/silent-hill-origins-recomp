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

// Function: sub_0027F0A8
// Address: 0x27f0a8 - 0x27f0d0
void sub_0027F0A8_0x27f0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F0A8_0x27f0a8");
#endif

    ctx->pc = 0x27f0a8u;

    // 0x27f0a8: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x27f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x27f0ac: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27f0b0: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x27f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27f0b4: 0x2463e608  addiu       $v1, $v1, -0x19F8
    ctx->pc = 0x27f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960648));
    // 0x27f0b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27f0bc: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x27f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x27f0c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27f0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0C4u;
        // 0x27f0c8: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F0CCu;
    // 0x27f0cc: 0x0  nop
    ctx->pc = 0x27f0ccu;
    // NOP
    ctx->pc = 0x27f0d0u;
}
