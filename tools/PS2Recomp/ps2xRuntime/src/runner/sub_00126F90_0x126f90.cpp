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

// Function: sub_00126F90
// Address: 0x126f90 - 0x126fb8
void sub_00126F90_0x126f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126F90_0x126f90");
#endif

    switch (ctx->pc) {
        case 0x126f90u: goto label_126f90;
        case 0x126f94u: goto label_126f94;
        case 0x126f98u: goto label_126f98;
        case 0x126f9cu: goto label_126f9c;
        case 0x126fa0u: goto label_126fa0;
        case 0x126fa4u: goto label_126fa4;
        case 0x126fa8u: goto label_126fa8;
        case 0x126facu: goto label_126fac;
        case 0x126fb0u: goto label_126fb0;
        case 0x126fb4u: goto label_126fb4;
        default: break;
    }

    ctx->pc = 0x126f90u;

label_126f90:
    // 0x126f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_126f94:
    // 0x126f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126f98:
    // 0x126f98: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x126f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_126f9c:
    // 0x126f9c: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x126f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_126fa0:
    // 0x126fa0: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x126fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_126fa4:
    // 0x126fa4: 0xc0f809  jalr        $a2
label_126fa8:
    if (ctx->pc == 0x126FA8u) {
        ctx->pc = 0x126FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FA4u;
        // 0x126fa8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126FACu;
        goto label_126fac;
    }
    ctx->pc = 0x126FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x126FACu);
        ctx->pc = 0x126FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FA4u;
        // 0x126fa8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126FA4u, 0x126FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126FACu;
label_126fac:
    // 0x126fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126fb0:
    // 0x126fb0: 0x3e00008  jr          $ra
label_126fb4:
    if (ctx->pc == 0x126FB4u) {
        ctx->pc = 0x126FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FB0u;
        // 0x126fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126FB8u;
        goto label_fallthrough_0x126fb0;
    }
    ctx->pc = 0x126FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FB0u;
        // 0x126fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126fb0:
    ctx->pc = 0x126FB8u;
}
