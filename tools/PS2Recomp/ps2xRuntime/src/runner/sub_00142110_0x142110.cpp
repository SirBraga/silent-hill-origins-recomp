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

// Function: sub_00142110
// Address: 0x142110 - 0x142130
void sub_00142110_0x142110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142110_0x142110");
#endif

    switch (ctx->pc) {
        case 0x142124u: goto label_142124;
        default: break;
    }

    ctx->pc = 0x142110u;

    // 0x142110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14211c: 0xc050710  jal         func_141C40
    ctx->pc = 0x14211Cu;
    SET_GPR_U32(ctx, 31, 0x142124u);
    ctx->pc = 0x142120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14211Cu;
    // 0x142120: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x141C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141C40u, 0x14211Cu, 0x142124u)) {
        return;
    }
    ctx->pc = 0x142124u;
label_142124:
    // 0x142124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142128: 0x3e00008  jr          $ra
    ctx->pc = 0x142128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142128u;
        // 0x14212c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142130u;
}
