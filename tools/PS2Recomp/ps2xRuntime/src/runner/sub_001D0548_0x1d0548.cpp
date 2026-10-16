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

// Function: sub_001D0548
// Address: 0x1d0548 - 0x1d0568
void sub_001D0548_0x1d0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0548_0x1d0548");
#endif

    switch (ctx->pc) {
        case 0x1d055cu: goto label_1d055c;
        default: break;
    }

    ctx->pc = 0x1d0548u;

    // 0x1d0548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d054c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0554: 0xc0740e0  jal         func_1D0380
    ctx->pc = 0x1D0554u;
    SET_GPR_U32(ctx, 31, 0x1D055Cu);
    ctx->pc = 0x1D0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0554u;
    // 0x1d0558: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0380u, 0x1D0554u, 0x1D055Cu)) {
        return;
    }
    ctx->pc = 0x1D055Cu;
label_1d055c:
    // 0x1d055c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d055cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0560: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0560u;
        // 0x1d0564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0568u;
}
