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

// Function: sub_0016AF00
// Address: 0x16af00 - 0x16af20
void sub_0016AF00_0x16af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF00_0x16af00");
#endif

    switch (ctx->pc) {
        case 0x16af14u: goto label_16af14;
        default: break;
    }

    ctx->pc = 0x16af00u;

    // 0x16af00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16af00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16af04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16af0c: 0xc05ab1a  jal         func_16AC68
    ctx->pc = 0x16AF0Cu;
    SET_GPR_U32(ctx, 31, 0x16AF14u);
    ctx->pc = 0x16AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF0Cu;
    // 0x16af10: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16AC68u, 0x16AF0Cu, 0x16AF14u)) {
        return;
    }
    ctx->pc = 0x16AF14u;
label_16af14:
    // 0x16af14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af18: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF18u;
        // 0x16af1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF20u;
}
