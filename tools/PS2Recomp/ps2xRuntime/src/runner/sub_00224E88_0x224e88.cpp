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

// Function: sub_00224E88
// Address: 0x224e88 - 0x224ea8
void sub_00224E88_0x224e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224E88_0x224e88");
#endif

    switch (ctx->pc) {
        case 0x224e88u: goto label_224e88;
        case 0x224e8cu: goto label_224e8c;
        case 0x224e90u: goto label_224e90;
        case 0x224e94u: goto label_224e94;
        case 0x224e98u: goto label_224e98;
        case 0x224e9cu: goto label_224e9c;
        case 0x224ea0u: goto label_224ea0;
        case 0x224ea4u: goto label_224ea4;
        default: break;
    }

    ctx->pc = 0x224e88u;

label_224e88:
    // 0x224e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_224e8c:
    // 0x224e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224e90:
    // 0x224e90: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x224e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_224e94:
    // 0x224e94: 0x40f809  jalr        $v0
label_224e98:
    if (ctx->pc == 0x224E98u) {
        ctx->pc = 0x224E9Cu;
        goto label_224e9c;
    }
    ctx->pc = 0x224E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224E9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E94u, 0x224E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224E9Cu;
label_224e9c:
    // 0x224e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224ea0:
    // 0x224ea0: 0x3e00008  jr          $ra
label_224ea4:
    if (ctx->pc == 0x224EA4u) {
        ctx->pc = 0x224EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EA0u;
        // 0x224ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224EA8u;
        goto label_fallthrough_0x224ea0;
    }
    ctx->pc = 0x224EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EA0u;
        // 0x224ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x224ea0:
    ctx->pc = 0x224EA8u;
}
