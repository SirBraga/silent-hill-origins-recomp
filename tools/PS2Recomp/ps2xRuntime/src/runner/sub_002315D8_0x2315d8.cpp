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

// Function: sub_002315D8
// Address: 0x2315d8 - 0x231600
void sub_002315D8_0x2315d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002315D8_0x2315d8");
#endif

    ctx->pc = 0x2315d8u;

    // 0x2315d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2315d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2315dc: 0xac243564  sw          $a0, 0x3564($at)
    ctx->pc = 0x2315dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3564u, _value); } while (0);
    // 0x2315e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2315E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315E0u;
        // 0x2315e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2315E8u;
    // 0x2315e8: 0xaf83c000  sw          $v1, -0x4000($gp)
    ctx->pc = 0x2315e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 3));
    // 0x2315ec: 0x0  nop
    ctx->pc = 0x2315ecu;
    // NOP
    // 0x2315f0: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x2315f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x2315f4: 0x0  nop
    ctx->pc = 0x2315f4u;
    // NOP
    // 0x2315f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2315f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2315fc: 0x0  nop
    ctx->pc = 0x2315fcu;
    // NOP
    ctx->pc = 0x231600u;
}
