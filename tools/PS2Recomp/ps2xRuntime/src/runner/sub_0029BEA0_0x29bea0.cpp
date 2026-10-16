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

// Function: sub_0029BEA0
// Address: 0x29bea0 - 0x29bec8
void sub_0029BEA0_0x29bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BEA0_0x29bea0");
#endif

    switch (ctx->pc) {
        case 0x29bea0u: goto label_29bea0;
        case 0x29bea4u: goto label_29bea4;
        case 0x29bea8u: goto label_29bea8;
        case 0x29beacu: goto label_29beac;
        case 0x29beb0u: goto label_29beb0;
        case 0x29beb4u: goto label_29beb4;
        case 0x29beb8u: goto label_29beb8;
        case 0x29bebcu: goto label_29bebc;
        case 0x29bec0u: goto label_29bec0;
        case 0x29bec4u: goto label_29bec4;
        default: break;
    }

    ctx->pc = 0x29bea0u;

label_29bea0:
    // 0x29bea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29bea4:
    // 0x29bea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29bea8:
    // 0x29bea8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x29bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_29beac:
    // 0x29beac: 0x84670030  lh          $a3, 0x30($v1)
    ctx->pc = 0x29beacu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_29beb0:
    // 0x29beb0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29beb4:
    // 0x29beb4: 0x40f809  jalr        $v0
label_29beb8:
    if (ctx->pc == 0x29BEB8u) {
        ctx->pc = 0x29BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEB4u;
        // 0x29beb8: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BEBCu;
        goto label_29bebc;
    }
    ctx->pc = 0x29BEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29BEBCu);
        ctx->pc = 0x29BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEB4u;
        // 0x29beb8: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BEB4u, 0x29BEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29BEBCu;
label_29bebc:
    // 0x29bebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29bec0:
    // 0x29bec0: 0x3e00008  jr          $ra
label_29bec4:
    if (ctx->pc == 0x29BEC4u) {
        ctx->pc = 0x29BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEC0u;
        // 0x29bec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BEC8u;
        goto label_fallthrough_0x29bec0;
    }
    ctx->pc = 0x29BEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEC0u;
        // 0x29bec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29bec0:
    ctx->pc = 0x29BEC8u;
}
