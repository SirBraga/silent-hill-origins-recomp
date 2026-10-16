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

// Function: sub_0023A6B8
// Address: 0x23a6b8 - 0x23a6d8
void sub_0023A6B8_0x23a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A6B8_0x23a6b8");
#endif

    switch (ctx->pc) {
        case 0x23a6ccu: goto label_23a6cc;
        default: break;
    }

    ctx->pc = 0x23a6b8u;

    // 0x23a6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a6bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A6BCu;
    {
        const bool branch_taken_0x23a6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6BCu;
        // 0x23a6c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6bc) {
            ctx->pc = 0x23A6CCu;
            goto label_23a6cc;
        }
    }
    ctx->pc = 0x23A6C4u;
    // 0x23a6c4: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x23A6C4u;
    SET_GPR_U32(ctx, 31, 0x23A6CCu);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x23A6C4u, 0x23A6CCu)) {
        return;
    }
    ctx->pc = 0x23A6CCu;
label_23a6cc:
    // 0x23a6cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6D0u;
        // 0x23a6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6D8u;
}
