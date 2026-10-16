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

// Function: sub_002020B8
// Address: 0x2020b8 - 0x2020e8
void sub_002020B8_0x2020b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002020B8_0x2020b8");
#endif

    switch (ctx->pc) {
        case 0x2020d0u: goto label_2020d0;
        default: break;
    }

    ctx->pc = 0x2020b8u;

    // 0x2020b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2020b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2020bc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2020bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2020c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2020C0u;
    {
        const bool branch_taken_0x2020c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020C0u;
        // 0x2020c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020c0) {
            ctx->pc = 0x2020D0u;
            goto label_2020d0;
        }
    }
    ctx->pc = 0x2020C8u;
    // 0x2020c8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2020C8u;
    SET_GPR_U32(ctx, 31, 0x2020D0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2020C8u, 0x2020D0u)) {
        return;
    }
    ctx->pc = 0x2020D0u;
label_2020d0:
    // 0x2020d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2020d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2020d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2020D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020D4u;
        // 0x2020d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020DCu;
    // 0x2020dc: 0x0  nop
    ctx->pc = 0x2020dcu;
    // NOP
    // 0x2020e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2020e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2020e4: 0x0  nop
    ctx->pc = 0x2020e4u;
    // NOP
    ctx->pc = 0x2020e8u;
}
