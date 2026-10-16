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

// Function: sub_00204DA8
// Address: 0x204da8 - 0x204dd0
void sub_00204DA8_0x204da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204DA8_0x204da8");
#endif

    switch (ctx->pc) {
        case 0x204dc4u: goto label_204dc4;
        default: break;
    }

    ctx->pc = 0x204da8u;

    // 0x204da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204db0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x204db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204db4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204DB4u;
    {
        const bool branch_taken_0x204db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DB4u;
        // 0x204db8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204db4) {
            ctx->pc = 0x204DC8u;
            goto label_204dc8;
        }
    }
    ctx->pc = 0x204DBCu;
    // 0x204dbc: 0xc080608  jal         func_201820
    ctx->pc = 0x204DBCu;
    SET_GPR_U32(ctx, 31, 0x204DC4u);
    ctx->pc = 0x204DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DBCu;
    // 0x204dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201820u, 0x204DBCu, 0x204DC4u)) {
        return;
    }
    ctx->pc = 0x204DC4u;
label_204dc4:
    // 0x204dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204dc8:
    // 0x204dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x204DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DC8u;
        // 0x204dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204DD0u;
}
