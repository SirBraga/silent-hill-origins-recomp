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

// Function: sub_0013E0A0
// Address: 0x13e0a0 - 0x13e0c0
void sub_0013E0A0_0x13e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E0A0_0x13e0a0");
#endif

    switch (ctx->pc) {
        case 0x13e0b4u: goto label_13e0b4;
        default: break;
    }

    ctx->pc = 0x13e0a0u;

    // 0x13e0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e0a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13e0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e0ac: 0xc04f7be  jal         func_13DEF8
    ctx->pc = 0x13E0ACu;
    SET_GPR_U32(ctx, 31, 0x13E0B4u);
    ctx->pc = 0x13E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0ACu;
    // 0x13e0b0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13DEF8u, 0x13E0ACu, 0x13E0B4u)) {
        return;
    }
    ctx->pc = 0x13E0B4u;
label_13e0b4:
    // 0x13e0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0B8u;
        // 0x13e0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E0C0u;
}
