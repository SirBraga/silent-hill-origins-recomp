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

// Function: sub_00323A30
// Address: 0x323a30 - 0x323a58
void sub_00323A30_0x323a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323A30_0x323a30");
#endif

    switch (ctx->pc) {
        case 0x323a48u: goto label_323a48;
        default: break;
    }

    ctx->pc = 0x323a30u;

    // 0x323a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323a34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x323a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323A38u;
    {
        const bool branch_taken_0x323a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A38u;
        // 0x323a3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a38) {
            ctx->pc = 0x323A48u;
            goto label_323a48;
        }
    }
    ctx->pc = 0x323A40u;
    // 0x323a40: 0xc0c8a7e  jal         func_3229F8
    ctx->pc = 0x323A40u;
    SET_GPR_U32(ctx, 31, 0x323A48u);
    ctx->pc = 0x3229F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3229F8u, 0x323A40u, 0x323A48u)) {
        return;
    }
    ctx->pc = 0x323A48u;
label_323a48:
    // 0x323a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323a50: 0x3e00008  jr          $ra
    ctx->pc = 0x323A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A50u;
        // 0x323a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A58u;
}
