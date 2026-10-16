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

// Function: sub_001AA7B8
// Address: 0x1aa7b8 - 0x1aa7e0
void sub_001AA7B8_0x1aa7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA7B8_0x1aa7b8");
#endif

    switch (ctx->pc) {
        case 0x1aa7d0u: goto label_1aa7d0;
        default: break;
    }

    ctx->pc = 0x1aa7b8u;

    // 0x1aa7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa7bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1aa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1aa7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa7c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa7c8: 0xc06a96c  jal         func_1AA5B0
    ctx->pc = 0x1AA7C8u;
    SET_GPR_U32(ctx, 31, 0x1AA7D0u);
    ctx->pc = 0x1AA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7C8u;
    // 0x1aa7cc: 0x24848518  addiu       $a0, $a0, -0x7AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA5B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA5B0u, 0x1AA7C8u, 0x1AA7D0u)) {
        return;
    }
    ctx->pc = 0x1AA7D0u;
label_1aa7d0:
    // 0x1aa7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D4u;
        // 0x1aa7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA7DCu;
    // 0x1aa7dc: 0x0  nop
    ctx->pc = 0x1aa7dcu;
    // NOP
    ctx->pc = 0x1aa7e0u;
}
