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

// Function: sub_00189DF8
// Address: 0x189df8 - 0x189e18
void sub_00189DF8_0x189df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189DF8_0x189df8");
#endif

    switch (ctx->pc) {
        case 0x189e0cu: goto label_189e0c;
        default: break;
    }

    ctx->pc = 0x189df8u;

    // 0x189df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189e04: 0xc0626bc  jal         func_189AF0
    ctx->pc = 0x189E04u;
    SET_GPR_U32(ctx, 31, 0x189E0Cu);
    ctx->pc = 0x189E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E04u;
    // 0x189e08: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189AF0u, 0x189E04u, 0x189E0Cu)) {
        return;
    }
    ctx->pc = 0x189E0Cu;
label_189e0c:
    // 0x189e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189e10: 0x3e00008  jr          $ra
    ctx->pc = 0x189E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E10u;
        // 0x189e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189E18u;
}
