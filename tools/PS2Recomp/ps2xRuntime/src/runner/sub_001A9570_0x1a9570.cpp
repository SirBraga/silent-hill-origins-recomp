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

// Function: sub_001A9570
// Address: 0x1a9570 - 0x1a9590
void sub_001A9570_0x1a9570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9570_0x1a9570");
#endif

    ctx->pc = 0x1a9570u;

    // 0x1a9570: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1a9574: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x1a9574u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1a9578: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A9578u;
    {
        const bool branch_taken_0x1a9578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9578) {
            ctx->pc = 0x1A957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9578u;
            // 0x1a957c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9580u;
            goto label_1a9580;
        }
    }
    ctx->pc = 0x1A9580u;
label_1a9580:
    // 0x1a9580: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9580u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a9584: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A958Cu;
    // 0x1a958c: 0x0  nop
    ctx->pc = 0x1a958cu;
    // NOP
    ctx->pc = 0x1a9590u;
}
