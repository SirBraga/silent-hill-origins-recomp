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

// Function: sub_00187438
// Address: 0x187438 - 0x187458
void sub_00187438_0x187438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187438_0x187438");
#endif

    switch (ctx->pc) {
        case 0x18744cu: goto label_18744c;
        default: break;
    }

    ctx->pc = 0x187438u;

    // 0x187438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18743c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187444: 0xc061c36  jal         func_1870D8
    ctx->pc = 0x187444u;
    SET_GPR_U32(ctx, 31, 0x18744Cu);
    ctx->pc = 0x187448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187444u;
    // 0x187448: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1870D8u, 0x187444u, 0x18744Cu)) {
        return;
    }
    ctx->pc = 0x18744Cu;
label_18744c:
    // 0x18744c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18744cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187450: 0x3e00008  jr          $ra
    ctx->pc = 0x187450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187450u;
        // 0x187454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187458u;
}
