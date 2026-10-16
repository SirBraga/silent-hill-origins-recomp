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

// Function: sub_001FAC18
// Address: 0x1fac18 - 0x1fac38
void sub_001FAC18_0x1fac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC18_0x1fac18");
#endif

    ctx->pc = 0x1fac18u;

    // 0x1fac18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAC18u;
    {
        const bool branch_taken_0x1fac18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC18u;
        // 0x1fac1c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac18) {
            ctx->pc = 0x1FAC30u;
            goto label_1fac30;
        }
    }
    ctx->pc = 0x1FAC20u;
    // 0x1fac20: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fac20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fac24: 0x24422e68  addiu       $v0, $v0, 0x2E68
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11880));
    // 0x1fac28: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fac28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fac2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fac30:
    // 0x1fac30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC38u;
}
