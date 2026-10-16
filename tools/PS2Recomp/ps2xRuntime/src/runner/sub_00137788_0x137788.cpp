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

// Function: sub_00137788
// Address: 0x137788 - 0x1377b8
void sub_00137788_0x137788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137788_0x137788");
#endif

    switch (ctx->pc) {
        case 0x1377a8u: goto label_1377a8;
        default: break;
    }

    ctx->pc = 0x137788u;

    // 0x137788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13778c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137790: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x137790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x137794: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137794u;
    {
        const bool branch_taken_0x137794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137794u;
        // 0x137798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137794) {
            ctx->pc = 0x1377A0u;
            goto label_1377a0;
        }
    }
    ctx->pc = 0x13779Cu;
    // 0x13779c: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x13779cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_1377a0:
    // 0x1377a0: 0xc048ab8  jal         func_122AE0
    ctx->pc = 0x1377A0u;
    SET_GPR_U32(ctx, 31, 0x1377A8u);
    ctx->pc = 0x122AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x122AE0u, 0x1377A0u, 0x1377A8u)) {
        return;
    }
    ctx->pc = 0x1377A8u;
label_1377a8:
    // 0x1377a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1377a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1377ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1377ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1377B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377ACu;
        // 0x1377b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1377ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1377B4u;
    // 0x1377b4: 0x0  nop
    ctx->pc = 0x1377b4u;
    // NOP
    ctx->pc = 0x1377b8u;
}
