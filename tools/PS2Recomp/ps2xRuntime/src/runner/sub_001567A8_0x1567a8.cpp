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

// Function: sub_001567A8
// Address: 0x1567a8 - 0x1567d8
void sub_001567A8_0x1567a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001567A8_0x1567a8");
#endif

    switch (ctx->pc) {
        case 0x1567ccu: goto label_1567cc;
        default: break;
    }

    ctx->pc = 0x1567a8u;

    // 0x1567a8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1567ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1567b0: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
    // 0x1567b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1567b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1567b8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1567b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1567bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1567BCu;
    {
        const bool branch_taken_0x1567bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1567C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567BCu;
        // 0x1567c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567bc) {
            ctx->pc = 0x1567CCu;
            goto label_1567cc;
        }
    }
    ctx->pc = 0x1567C4u;
    // 0x1567c4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1567C4u;
    SET_GPR_U32(ctx, 31, 0x1567CCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1567C4u, 0x1567CCu)) {
        return;
    }
    ctx->pc = 0x1567CCu;
label_1567cc:
    // 0x1567cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1567ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1567d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1567D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1567D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567D0u;
        // 0x1567d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1567D8u;
}
