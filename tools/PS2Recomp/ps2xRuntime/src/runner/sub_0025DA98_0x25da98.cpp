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

// Function: sub_0025DA98
// Address: 0x25da98 - 0x25dac0
void sub_0025DA98_0x25da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DA98_0x25da98");
#endif

    ctx->pc = 0x25da98u;

    // 0x25da98: 0x8f858604  lw          $a1, -0x79FC($gp)
    ctx->pc = 0x25da98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x25da9c: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25daa0: 0x24c6d820  addiu       $a2, $a2, -0x27E0
    ctx->pc = 0x25daa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957088));
    // 0x25daa4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25daa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25daa8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x25daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25daac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x25daacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x25dab0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25dab4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x25dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x25dab8: 0x3e00008  jr          $ra
    ctx->pc = 0x25DAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAB8u;
        // 0x25dabc: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DAC0u;
}
