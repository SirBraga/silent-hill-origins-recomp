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

// Function: sub_001F9A00
// Address: 0x1f9a00 - 0x1f9a28
void sub_001F9A00_0x1f9a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9A00_0x1f9a00");
#endif

    switch (ctx->pc) {
        case 0x1f9a00u: goto label_1f9a00;
        case 0x1f9a04u: goto label_1f9a04;
        case 0x1f9a08u: goto label_1f9a08;
        case 0x1f9a0cu: goto label_1f9a0c;
        case 0x1f9a10u: goto label_1f9a10;
        case 0x1f9a14u: goto label_1f9a14;
        case 0x1f9a18u: goto label_1f9a18;
        case 0x1f9a1cu: goto label_1f9a1c;
        case 0x1f9a20u: goto label_1f9a20;
        case 0x1f9a24u: goto label_1f9a24;
        default: break;
    }

    ctx->pc = 0x1f9a00u;

label_1f9a00:
    // 0x1f9a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f9a04:
    // 0x1f9a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9a08:
    // 0x1f9a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9a0c:
    // 0x1f9a0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f9a10:
    // 0x1f9a10: 0x40f809  jalr        $v0
label_1f9a14:
    if (ctx->pc == 0x1F9A14u) {
        ctx->pc = 0x1F9A18u;
        goto label_1f9a18;
    }
    ctx->pc = 0x1F9A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9A18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A10u, 0x1F9A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9A18u;
label_1f9a18:
    // 0x1f9a18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9a1c:
    // 0x1f9a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9a20:
    // 0x1f9a20: 0x3e00008  jr          $ra
label_1f9a24:
    if (ctx->pc == 0x1F9A24u) {
        ctx->pc = 0x1F9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A20u;
        // 0x1f9a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A28u;
        goto label_fallthrough_0x1f9a20;
    }
    ctx->pc = 0x1F9A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A20u;
        // 0x1f9a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f9a20:
    ctx->pc = 0x1F9A28u;
}
