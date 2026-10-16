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

// Function: sub_001D5D98
// Address: 0x1d5d98 - 0x1d5dc0
void sub_001D5D98_0x1d5d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D98_0x1d5d98");
#endif

    switch (ctx->pc) {
        case 0x1d5d98u: goto label_1d5d98;
        case 0x1d5d9cu: goto label_1d5d9c;
        case 0x1d5da0u: goto label_1d5da0;
        case 0x1d5da4u: goto label_1d5da4;
        case 0x1d5da8u: goto label_1d5da8;
        case 0x1d5dacu: goto label_1d5dac;
        case 0x1d5db0u: goto label_1d5db0;
        case 0x1d5db4u: goto label_1d5db4;
        case 0x1d5db8u: goto label_1d5db8;
        case 0x1d5dbcu: goto label_1d5dbc;
        default: break;
    }

    ctx->pc = 0x1d5d98u;

label_1d5d98:
    // 0x1d5d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d5d9c:
    // 0x1d5d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d5da0:
    // 0x1d5da0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d5da4:
    // 0x1d5da4: 0x84430020  lh          $v1, 0x20($v0)
    ctx->pc = 0x1d5da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1d5da8:
    // 0x1d5da8: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1d5dac:
    // 0x1d5dac: 0xc0f809  jalr        $a2
label_1d5db0:
    if (ctx->pc == 0x1D5DB0u) {
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DB4u;
        goto label_1d5db4;
    }
    ctx->pc = 0x1D5DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D5DB4u);
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DACu, 0x1D5DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5DB4u;
label_1d5db4:
    // 0x1d5db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5db8:
    // 0x1d5db8: 0x3e00008  jr          $ra
label_1d5dbc:
    if (ctx->pc == 0x1D5DBCu) {
        ctx->pc = 0x1D5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DB8u;
        // 0x1d5dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DC0u;
        goto label_fallthrough_0x1d5db8;
    }
    ctx->pc = 0x1D5DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DB8u;
        // 0x1d5dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d5db8:
    ctx->pc = 0x1D5DC0u;
}
