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

// Function: sub_00204C98
// Address: 0x204c98 - 0x204cc0
void sub_00204C98_0x204c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204C98_0x204c98");
#endif

    switch (ctx->pc) {
        case 0x204ca8u: goto label_204ca8;
        default: break;
    }

    ctx->pc = 0x204c98u;

    // 0x204c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204ca0: 0xc080fe2  jal         func_203F88
    ctx->pc = 0x204CA0u;
    SET_GPR_U32(ctx, 31, 0x204CA8u);
    ctx->pc = 0x204CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CA0u;
    // 0x204ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203F88u, 0x204CA0u, 0x204CA8u)) {
        return;
    }
    ctx->pc = 0x204CA8u;
label_204ca8:
    // 0x204ca8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204CA8u;
    {
        const bool branch_taken_0x204ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204ca8) {
            ctx->pc = 0x204CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204CA8u;
            // 0x204cac: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x204CB0u;
label_204cb0:
    // 0x204cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x204CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CB4u;
        // 0x204cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204CBCu;
    // 0x204cbc: 0x0  nop
    ctx->pc = 0x204cbcu;
    // NOP
    ctx->pc = 0x204cc0u;
}
