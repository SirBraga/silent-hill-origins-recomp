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

// Function: sub_001F85C8
// Address: 0x1f85c8 - 0x1f85f0
void sub_001F85C8_0x1f85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F85C8_0x1f85c8");
#endif

    switch (ctx->pc) {
        case 0x1f85c8u: goto label_1f85c8;
        case 0x1f85ccu: goto label_1f85cc;
        case 0x1f85d0u: goto label_1f85d0;
        case 0x1f85d4u: goto label_1f85d4;
        case 0x1f85d8u: goto label_1f85d8;
        case 0x1f85dcu: goto label_1f85dc;
        case 0x1f85e0u: goto label_1f85e0;
        case 0x1f85e4u: goto label_1f85e4;
        case 0x1f85e8u: goto label_1f85e8;
        case 0x1f85ecu: goto label_1f85ec;
        default: break;
    }

    ctx->pc = 0x1f85c8u;

label_1f85c8:
    // 0x1f85c8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f85cc:
    // 0x1f85cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f85ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f85d0:
    // 0x1f85d0: 0x8c62ec54  lw          $v0, -0x13AC($v1)
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962260)));
label_1f85d4:
    // 0x1f85d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f85d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f85d8:
    // 0x1f85d8: 0x40f809  jalr        $v0
label_1f85dc:
    if (ctx->pc == 0x1F85DCu) {
        ctx->pc = 0x1F85E0u;
        goto label_1f85e0;
    }
    ctx->pc = 0x1F85D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F85E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85D8u, 0x1F85E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F85E0u;
label_1f85e0:
    // 0x1f85e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f85e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f85e4:
    // 0x1f85e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f85e8:
    // 0x1f85e8: 0x3e00008  jr          $ra
label_1f85ec:
    if (ctx->pc == 0x1F85ECu) {
        ctx->pc = 0x1F85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85E8u;
        // 0x1f85ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F85F0u;
        goto label_fallthrough_0x1f85e8;
    }
    ctx->pc = 0x1F85E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85E8u;
        // 0x1f85ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f85e8:
    ctx->pc = 0x1F85F0u;
}
