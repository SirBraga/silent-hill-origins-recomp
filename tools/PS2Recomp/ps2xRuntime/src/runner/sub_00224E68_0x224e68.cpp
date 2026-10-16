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

// Function: sub_00224E68
// Address: 0x224e68 - 0x224e88
void sub_00224E68_0x224e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224E68_0x224e68");
#endif

    switch (ctx->pc) {
        case 0x224e68u: goto label_224e68;
        case 0x224e6cu: goto label_224e6c;
        case 0x224e70u: goto label_224e70;
        case 0x224e74u: goto label_224e74;
        case 0x224e78u: goto label_224e78;
        case 0x224e7cu: goto label_224e7c;
        case 0x224e80u: goto label_224e80;
        case 0x224e84u: goto label_224e84;
        default: break;
    }

    ctx->pc = 0x224e68u;

label_224e68:
    // 0x224e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_224e6c:
    // 0x224e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224e70:
    // 0x224e70: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x224e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_224e74:
    // 0x224e74: 0x40f809  jalr        $v0
label_224e78:
    if (ctx->pc == 0x224E78u) {
        ctx->pc = 0x224E7Cu;
        goto label_224e7c;
    }
    ctx->pc = 0x224E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224E7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E74u, 0x224E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224E7Cu;
label_224e7c:
    // 0x224e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224e80:
    // 0x224e80: 0x3e00008  jr          $ra
label_224e84:
    if (ctx->pc == 0x224E84u) {
        ctx->pc = 0x224E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E80u;
        // 0x224e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E88u;
        goto label_fallthrough_0x224e80;
    }
    ctx->pc = 0x224E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E80u;
        // 0x224e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x224e80:
    ctx->pc = 0x224E88u;
}
