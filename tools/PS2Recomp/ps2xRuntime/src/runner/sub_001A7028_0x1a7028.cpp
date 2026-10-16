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

// Function: sub_001A7028
// Address: 0x1a7028 - 0x1a7048
void sub_001A7028_0x1a7028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7028_0x1a7028");
#endif

    switch (ctx->pc) {
        case 0x1a703cu: goto label_1a703c;
        default: break;
    }

    ctx->pc = 0x1a7028u;

    // 0x1a7028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a702c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a702cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7034: 0xc06a412  jal         func_1A9048
    ctx->pc = 0x1A7034u;
    SET_GPR_U32(ctx, 31, 0x1A703Cu);
    ctx->pc = 0x1A7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7034u;
    // 0x1a7038: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9048u, 0x1A7034u, 0x1A703Cu)) {
        return;
    }
    ctx->pc = 0x1A703Cu;
label_1a703c:
    // 0x1a703c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a703cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7040: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7040u;
        // 0x1a7044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7048u;
}
