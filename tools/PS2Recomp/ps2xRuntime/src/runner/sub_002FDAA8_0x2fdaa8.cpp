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

// Function: sub_002FDAA8
// Address: 0x2fdaa8 - 0x2fdac8
void sub_002FDAA8_0x2fdaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDAA8_0x2fdaa8");
#endif

    switch (ctx->pc) {
        case 0x2fdabcu: goto label_2fdabc;
        default: break;
    }

    ctx->pc = 0x2fdaa8u;

    // 0x2fdaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdaac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fdaacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdab4: 0xc0bf5b2  jal         func_2FD6C8
    ctx->pc = 0x2FDAB4u;
    SET_GPR_U32(ctx, 31, 0x2FDABCu);
    ctx->pc = 0x2FDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAB4u;
    // 0x2fdab8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FD6C8u, 0x2FDAB4u, 0x2FDABCu)) {
        return;
    }
    ctx->pc = 0x2FDABCu;
label_2fdabc:
    // 0x2fdabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAC0u;
        // 0x2fdac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAC8u;
}
