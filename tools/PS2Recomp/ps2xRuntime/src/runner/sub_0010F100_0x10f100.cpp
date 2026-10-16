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

// Function: sub_0010F100
// Address: 0x10f100 - 0x10f120
void sub_0010F100_0x10f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F100_0x10f100");
#endif

    switch (ctx->pc) {
        case 0x10f114u: goto label_10f114;
        default: break;
    }

    ctx->pc = 0x10f100u;

    // 0x10f100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f10c: 0xc043baa  jal         func_10EEA8
    ctx->pc = 0x10F10Cu;
    SET_GPR_U32(ctx, 31, 0x10F114u);
    ctx->pc = 0x10F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F10Cu;
    // 0x10f110: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EEA8u, 0x10F10Cu, 0x10F114u)) {
        return;
    }
    ctx->pc = 0x10F114u;
label_10f114:
    // 0x10f114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f118: 0x3e00008  jr          $ra
    ctx->pc = 0x10F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F118u;
        // 0x10f11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F120u;
}
