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

// Function: sub_002D9860
// Address: 0x2d9860 - 0x2d9880
void sub_002D9860_0x2d9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9860_0x2d9860");
#endif

    ctx->pc = 0x2d9860u;

    // 0x2d9860: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2d9860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2d9864: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2d9868: 0x24429880  addiu       $v0, $v0, -0x6780
    ctx->pc = 0x2d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940800));
    // 0x2d986c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9870: 0xac6240a8  sw          $v0, 0x40A8($v1)
    ctx->pc = 0x2d9870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6840A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6840A8u, _value); } while (0);
    // 0x2d9874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9878: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9878u;
        // 0x2d987c: 0xaf848b4c  sw          $a0, -0x74B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937420), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9880u;
}
