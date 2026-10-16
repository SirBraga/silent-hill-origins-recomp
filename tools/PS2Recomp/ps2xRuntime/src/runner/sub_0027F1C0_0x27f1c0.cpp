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

// Function: sub_0027F1C0
// Address: 0x27f1c0 - 0x27f1f0
void sub_0027F1C0_0x27f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F1C0_0x27f1c0");
#endif

    ctx->pc = 0x27f1c0u;

    // 0x27f1c0: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x27f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x27f1c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27f1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27f1cc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x27f1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27f1d0: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x27f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x27f1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0xace50010  sw          $a1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1DCu;
    // 0x27f1dc: 0x0  nop
    ctx->pc = 0x27f1dcu;
    // NOP
    // 0x27f1e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x27f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f1e4: 0x0  nop
    ctx->pc = 0x27f1e4u;
    // NOP
    // 0x27f1e8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x27f1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1ec: 0x0  nop
    ctx->pc = 0x27f1ecu;
    // NOP
    ctx->pc = 0x27f1f0u;
}
