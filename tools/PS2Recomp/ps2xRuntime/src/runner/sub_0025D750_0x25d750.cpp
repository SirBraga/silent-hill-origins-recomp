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

// Function: sub_0025D750
// Address: 0x25d750 - 0x25d780
void sub_0025D750_0x25d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D750_0x25d750");
#endif

    ctx->pc = 0x25d750u;

    // 0x25d750: 0x8f838600  lw          $v1, -0x7A00($gp)
    ctx->pc = 0x25d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x25d754: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25d754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d758: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x25d758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x25d75c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25d760: 0x24c60fc8  addiu       $a2, $a2, 0xFC8
    ctx->pc = 0x25d760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
    // 0x25d764: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25d764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25d768: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25d768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25d76c: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25d770: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x25d770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25d774: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x25d774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25d778: 0x3e00008  jr          $ra
    ctx->pc = 0x25D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D778u;
        // 0x25d77c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D780u;
}
