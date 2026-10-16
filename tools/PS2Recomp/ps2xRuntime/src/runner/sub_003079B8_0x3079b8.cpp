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

// Function: sub_003079B8
// Address: 0x3079b8 - 0x3079e0
void sub_003079B8_0x3079b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003079B8_0x3079b8");
#endif

    switch (ctx->pc) {
        case 0x3079ccu: goto label_3079cc;
        default: break;
    }

    ctx->pc = 0x3079b8u;

    // 0x3079b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3079b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3079bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3079bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3079c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3079c4: 0xc0c1cc4  jal         func_307310
    ctx->pc = 0x3079C4u;
    SET_GPR_U32(ctx, 31, 0x3079CCu);
    ctx->pc = 0x3079C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079C4u;
    // 0x3079c8: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307310u, 0x3079C4u, 0x3079CCu)) {
        return;
    }
    ctx->pc = 0x3079CCu;
label_3079cc:
    // 0x3079cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3079d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3079d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3079d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3079D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079D4u;
        // 0x3079d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3079DCu;
    // 0x3079dc: 0x0  nop
    ctx->pc = 0x3079dcu;
    // NOP
    ctx->pc = 0x3079e0u;
}
