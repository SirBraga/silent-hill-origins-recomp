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

// Function: sub_00276868
// Address: 0x276868 - 0x276890
void sub_00276868_0x276868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276868_0x276868");
#endif

    ctx->pc = 0x276868u;

    // 0x276868: 0x8f8387c8  lw          $v1, -0x7838($gp)
    ctx->pc = 0x276868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x27686c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x27686cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x276870: 0x8f8687cc  lw          $a2, -0x7834($gp)
    ctx->pc = 0x276870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
    // 0x276874: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x276874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
    // 0x276878: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27687c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27687cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276880: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x276880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x276884: 0xaf8387c8  sw          $v1, -0x7838($gp)
    ctx->pc = 0x276884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U32(ctx, 3));
    // 0x276888: 0x3e00008  jr          $ra
    ctx->pc = 0x276888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276888u;
        // 0x27688c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276890u;
}
