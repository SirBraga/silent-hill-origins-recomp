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

// Function: sub_002A4030
// Address: 0x2a4030 - 0x2a4048
void sub_002A4030_0x2a4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4030_0x2a4030");
#endif

    ctx->pc = 0x2a4030u;

    // 0x2a4030: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a4034: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a4034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a4038: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a403c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A403Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A403Cu;
        // 0x2a4040: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A403Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4044u;
    // 0x2a4044: 0x0  nop
    ctx->pc = 0x2a4044u;
    // NOP
    ctx->pc = 0x2a4048u;
}
