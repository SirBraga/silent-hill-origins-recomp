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

// Function: sub_0021BD90
// Address: 0x21bd90 - 0x21bda8
void sub_0021BD90_0x21bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BD90_0x21bd90");
#endif

    ctx->pc = 0x21bd90u;

    // 0x21bd90: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x21bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x21bd94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21bd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x21bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD9Cu;
        // 0x21bda0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BDA4u;
    // 0x21bda4: 0x0  nop
    ctx->pc = 0x21bda4u;
    // NOP
    ctx->pc = 0x21bda8u;
}
