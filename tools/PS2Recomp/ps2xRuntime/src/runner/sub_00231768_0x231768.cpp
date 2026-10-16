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

// Function: sub_00231768
// Address: 0x231768 - 0x231788
void sub_00231768_0x231768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231768_0x231768");
#endif

    ctx->pc = 0x231768u;

    // 0x231768: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231768u;
    {
        const bool branch_taken_0x231768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231768u;
        // 0x23176c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231768) {
            ctx->pc = 0x23177Cu;
            goto label_23177c;
        }
    }
    ctx->pc = 0x231770u;
    // 0x231770: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231774: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x231774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231778: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x231778u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_23177c:
    // 0x23177c: 0x3e00008  jr          $ra
    ctx->pc = 0x23177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23177Cu;
        // 0x231780: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231784u;
    // 0x231784: 0x0  nop
    ctx->pc = 0x231784u;
    // NOP
    ctx->pc = 0x231788u;
}
