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

// Function: sub_002ED850
// Address: 0x2ed850 - 0x2ed880
void sub_002ED850_0x2ed850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED850_0x2ed850");
#endif

    switch (ctx->pc) {
        case 0x2ed870u: goto label_2ed870;
        default: break;
    }

    ctx->pc = 0x2ed850u;

    // 0x2ed850: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ed850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed854: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed858: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ed858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ed85c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed864: 0x2444e890  addiu       $a0, $v0, -0x1770
    ctx->pc = 0x2ed864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x2ed868: 0xc0bb8e0  jal         func_2EE380
    ctx->pc = 0x2ED868u;
    SET_GPR_U32(ctx, 31, 0x2ED870u);
    ctx->pc = 0x2ED86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED868u;
    // 0x2ed86c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE380u, 0x2ED868u, 0x2ED870u)) {
        return;
    }
    ctx->pc = 0x2ED870u;
label_2ed870:
    // 0x2ed870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed878: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED878u;
        // 0x2ed87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED880u;
}
