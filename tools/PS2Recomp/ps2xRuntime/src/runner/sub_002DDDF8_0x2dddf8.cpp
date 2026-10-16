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

// Function: sub_002DDDF8
// Address: 0x2dddf8 - 0x2dde28
void sub_002DDDF8_0x2dddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDDF8_0x2dddf8");
#endif

    ctx->pc = 0x2dddf8u;

    // 0x2dddf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dddf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dddfc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2dddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2dde00: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2dde00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2dde04: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2dde04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2dde08: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2dde08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2dde0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDE0Cu;
    {
        const bool branch_taken_0x2dde0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE0Cu;
        // 0x2dde10: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde0c) {
            ctx->pc = 0x2DDE1Cu;
            goto label_2dde1c;
        }
    }
    ctx->pc = 0x2DDE14u;
    // 0x2dde14: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2dde18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2dde18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2dde1c:
    // 0x2dde1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE1Cu;
        // 0x2dde20: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE24u;
    // 0x2dde24: 0x0  nop
    ctx->pc = 0x2dde24u;
    // NOP
    ctx->pc = 0x2dde28u;
}
