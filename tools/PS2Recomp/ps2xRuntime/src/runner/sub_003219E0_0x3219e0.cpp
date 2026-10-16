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

// Function: sub_003219E0
// Address: 0x3219e0 - 0x321a08
void sub_003219E0_0x3219e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003219E0_0x3219e0");
#endif

    switch (ctx->pc) {
        case 0x3219f0u: goto label_3219f0;
        default: break;
    }

    ctx->pc = 0x3219e0u;

    // 0x3219e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3219e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3219e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3219e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3219e8: 0xc0c489a  jal         func_312268
    ctx->pc = 0x3219E8u;
    SET_GPR_U32(ctx, 31, 0x3219F0u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x3219E8u, 0x3219F0u)) {
        return;
    }
    ctx->pc = 0x3219F0u;
label_3219f0:
    // 0x3219f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3219f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3219f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3219f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3219f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3219fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3219fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x321a00: 0x3e00008  jr          $ra
    ctx->pc = 0x321A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A00u;
        // 0x321a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321A08u;
}
