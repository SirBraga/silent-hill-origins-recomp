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

// Function: sub_002D8520
// Address: 0x2d8520 - 0x2d8540
void sub_002D8520_0x2d8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8520_0x2d8520");
#endif

    ctx->pc = 0x2d8520u;

    // 0x2d8520: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2d8520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2d8524: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2d8524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2d8528: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x2d852c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8530: 0xac624080  sw          $v0, 0x4080($v1)
    ctx->pc = 0x2d8530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x684080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x684080u, _value); } while (0);
    // 0x2d8534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8538: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8538u;
        // 0x2d853c: 0xaf848b3c  sw          $a0, -0x74C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8540u;
}
