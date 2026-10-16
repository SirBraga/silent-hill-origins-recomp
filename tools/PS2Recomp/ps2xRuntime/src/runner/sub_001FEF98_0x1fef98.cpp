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

// Function: sub_001FEF98
// Address: 0x1fef98 - 0x1fefb0
void sub_001FEF98_0x1fef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEF98_0x1fef98");
#endif

    ctx->pc = 0x1fef98u;

    // 0x1fef98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fef98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fefa0: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1fefa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fefa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA4u;
        // 0x1fefa8: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEFACu;
    // 0x1fefac: 0x0  nop
    ctx->pc = 0x1fefacu;
    // NOP
    ctx->pc = 0x1fefb0u;
}
