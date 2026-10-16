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

// Function: sub_001B8310
// Address: 0x1b8310 - 0x1b8330
void sub_001B8310_0x1b8310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8310_0x1b8310");
#endif

    switch (ctx->pc) {
        case 0x1b8324u: goto label_1b8324;
        default: break;
    }

    ctx->pc = 0x1b8310u;

    // 0x1b8310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b8314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b831c: 0xc06e030  jal         func_1B80C0
    ctx->pc = 0x1B831Cu;
    SET_GPR_U32(ctx, 31, 0x1B8324u);
    ctx->pc = 0x1B8320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B831Cu;
    // 0x1b8320: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B80C0u, 0x1B831Cu, 0x1B8324u)) {
        return;
    }
    ctx->pc = 0x1B8324u;
label_1b8324:
    // 0x1b8324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8328: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8328u;
        // 0x1b832c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8330u;
}
