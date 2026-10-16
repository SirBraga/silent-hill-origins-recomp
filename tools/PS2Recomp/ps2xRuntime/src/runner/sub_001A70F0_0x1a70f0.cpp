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

// Function: sub_001A70F0
// Address: 0x1a70f0 - 0x1a7110
void sub_001A70F0_0x1a70f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A70F0_0x1a70f0");
#endif

    ctx->pc = 0x1a70f0u;

    // 0x1a70f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a70f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a70f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a70f8: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x1a70f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a70fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a70fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7100: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a7100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a7104: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7104u;
        // 0x1a7108: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A710Cu;
    // 0x1a710c: 0x0  nop
    ctx->pc = 0x1a710cu;
    // NOP
    ctx->pc = 0x1a7110u;
}
