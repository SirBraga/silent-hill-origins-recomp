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

// Function: sub_001FC600
// Address: 0x1fc600 - 0x1fc620
void sub_001FC600_0x1fc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC600_0x1fc600");
#endif

    ctx->pc = 0x1fc600u;

    // 0x1fc600: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1fc600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fc604: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC604u;
        // 0x1fc608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC60Cu;
    // 0x1fc60c: 0x0  nop
    ctx->pc = 0x1fc60cu;
    // NOP
    // 0x1fc610: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1fc614: 0x0  nop
    ctx->pc = 0x1fc614u;
    // NOP
    // 0x1fc618: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fc618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fc61c: 0x0  nop
    ctx->pc = 0x1fc61cu;
    // NOP
    ctx->pc = 0x1fc620u;
}
