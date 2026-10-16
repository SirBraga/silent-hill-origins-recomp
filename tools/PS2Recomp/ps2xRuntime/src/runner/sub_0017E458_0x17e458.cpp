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

// Function: sub_0017E458
// Address: 0x17e458 - 0x17e488
void sub_0017E458_0x17e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E458_0x17e458");
#endif

    switch (ctx->pc) {
        case 0x17e468u: goto label_17e468;
        default: break;
    }

    ctx->pc = 0x17e458u;

    // 0x17e458: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17e45c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x17e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e460: 0x2442f9a0  addiu       $v0, $v0, -0x660
    ctx->pc = 0x17e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965664));
    // 0x17e464: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x17e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_17e468:
    // 0x17e468: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17e468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17e46c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17e470: 0x0  nop
    ctx->pc = 0x17e470u;
    // NOP
    // 0x17e474: 0x0  nop
    ctx->pc = 0x17e474u;
    // NOP
    // 0x17e478: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17E478u;
    {
        const bool branch_taken_0x17e478 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x17E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E478u;
        // 0x17e47c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e478) {
            ctx->pc = 0x17E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e468;
        }
    }
    ctx->pc = 0x17E480u;
    // 0x17e480: 0x3e00008  jr          $ra
    ctx->pc = 0x17E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E488u;
}
