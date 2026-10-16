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

// Function: sub_0010AF28
// Address: 0x10af28 - 0x10af48
void sub_0010AF28_0x10af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF28_0x10af28");
#endif

    switch (ctx->pc) {
        case 0x10af3cu: goto label_10af3c;
        default: break;
    }

    ctx->pc = 0x10af28u;

    // 0x10af28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10af2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10af34: 0xc04292a  jal         func_10A4A8
    ctx->pc = 0x10AF34u;
    SET_GPR_U32(ctx, 31, 0x10AF3Cu);
    ctx->pc = 0x10AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF34u;
    // 0x10af38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A4A8u, 0x10AF34u, 0x10AF3Cu)) {
        return;
    }
    ctx->pc = 0x10AF3Cu;
label_10af3c:
    // 0x10af3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10af3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af40: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF40u;
        // 0x10af44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF48u;
}
