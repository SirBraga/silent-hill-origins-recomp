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

// Function: sub_00165878
// Address: 0x165878 - 0x165898
void sub_00165878_0x165878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165878_0x165878");
#endif

    ctx->pc = 0x165878u;

    // 0x165878: 0x94a20034  lhu         $v0, 0x34($a1)
    ctx->pc = 0x165878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x16587c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x16587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x165880: 0x3e00008  jr          $ra
    ctx->pc = 0x165880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165880u;
        // 0x165884: 0xa4a20034  sh          $v0, 0x34($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165888u;
    // 0x165888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16588c: 0x0  nop
    ctx->pc = 0x16588cu;
    // NOP
    // 0x165890: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x165890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x165894: 0x0  nop
    ctx->pc = 0x165894u;
    // NOP
    ctx->pc = 0x165898u;
}
