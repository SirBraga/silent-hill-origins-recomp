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

// Function: sub_002B7D08
// Address: 0x2b7d08 - 0x2b7d28
void sub_002B7D08_0x2b7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D08_0x2b7d08");
#endif

    ctx->pc = 0x2b7d08u;

    // 0x2b7d08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b7d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b7d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7d10: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D14u;
        // 0x2b7d18: 0xac654018  sw          $a1, 0x4018($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16408), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D1Cu;
    // 0x2b7d1c: 0x0  nop
    ctx->pc = 0x2b7d1cu;
    // NOP
    // 0x2b7d20: 0x0  nop
    ctx->pc = 0x2b7d20u;
    // NOP
    // 0x2b7d24: 0x0  nop
    ctx->pc = 0x2b7d24u;
    // NOP
    ctx->pc = 0x2b7d28u;
}
