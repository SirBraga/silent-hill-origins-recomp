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

// Function: sub_0014B7A0
// Address: 0x14b7a0 - 0x14b7d8
void sub_0014B7A0_0x14b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B7A0_0x14b7a0");
#endif

    switch (ctx->pc) {
        case 0x14b7c8u: goto label_14b7c8;
        default: break;
    }

    ctx->pc = 0x14b7a0u;

    // 0x14b7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b7a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14b7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b7ac: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b7b0: 0x24c6b6c0  addiu       $a2, $a2, -0x4940
    ctx->pc = 0x14b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948544));
    // 0x14b7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14b7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7b8: 0x8ce40054  lw          $a0, 0x54($a3)
    ctx->pc = 0x14b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x14b7bc: 0x8ce50050  lw          $a1, 0x50($a3)
    ctx->pc = 0x14b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x14b7c0: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14B7C0u;
    SET_GPR_U32(ctx, 31, 0x14B7C8u);
    ctx->pc = 0x14B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7C0u;
    // 0x14b7c4: 0x24e70058  addiu       $a3, $a3, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1497A0u, 0x14B7C0u, 0x14B7C8u)) {
        return;
    }
    ctx->pc = 0x14B7C8u;
label_14b7c8:
    // 0x14b7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7CCu;
        // 0x14b7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B7D4u;
    // 0x14b7d4: 0x0  nop
    ctx->pc = 0x14b7d4u;
    // NOP
    ctx->pc = 0x14b7d8u;
}
