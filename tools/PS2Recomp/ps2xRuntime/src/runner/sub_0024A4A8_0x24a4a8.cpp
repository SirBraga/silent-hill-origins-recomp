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

// Function: sub_0024A4A8
// Address: 0x24a4a8 - 0x24a4c8
void sub_0024A4A8_0x24a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A4A8_0x24a4a8");
#endif

    ctx->pc = 0x24a4a8u;

    // 0x24a4a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24a4ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A4ACu;
    {
        const bool branch_taken_0x24a4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ACu;
        // 0x24a4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4ac) {
            ctx->pc = 0x24A4BCu;
            goto label_24a4bc;
        }
    }
    ctx->pc = 0x24A4B4u;
    // 0x24a4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4B4u;
        // 0x24a4b8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A4BCu;
label_24a4bc:
    // 0x24a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x24A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A4C4u;
    // 0x24a4c4: 0x0  nop
    ctx->pc = 0x24a4c4u;
    // NOP
    ctx->pc = 0x24a4c8u;
}
