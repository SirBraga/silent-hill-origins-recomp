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

// Function: sub_002B4A18
// Address: 0x2b4a18 - 0x2b4a40
void sub_002B4A18_0x2b4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4A18_0x2b4a18");
#endif

    switch (ctx->pc) {
        case 0x2b4a18u: goto label_2b4a18;
        case 0x2b4a1cu: goto label_2b4a1c;
        case 0x2b4a20u: goto label_2b4a20;
        case 0x2b4a24u: goto label_2b4a24;
        case 0x2b4a28u: goto label_2b4a28;
        case 0x2b4a2cu: goto label_2b4a2c;
        case 0x2b4a30u: goto label_2b4a30;
        case 0x2b4a34u: goto label_2b4a34;
        case 0x2b4a38u: goto label_2b4a38;
        case 0x2b4a3cu: goto label_2b4a3c;
        default: break;
    }

    ctx->pc = 0x2b4a18u;

label_2b4a18:
    // 0x2b4a18: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2b4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2b4a1c:
    // 0x2b4a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b4a20:
    // 0x2b4a20: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2b4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2b4a24:
    // 0x2b4a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b4a28:
    // 0x2b4a28: 0x40f809  jalr        $v0
label_2b4a2c:
    if (ctx->pc == 0x2B4A2Cu) {
        ctx->pc = 0x2B4A30u;
        goto label_2b4a30;
    }
    ctx->pc = 0x2B4A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4A30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A28u, 0x2B4A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4A30u;
label_2b4a30:
    // 0x2b4a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4a34:
    // 0x2b4a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4a38:
    // 0x2b4a38: 0x3e00008  jr          $ra
label_2b4a3c:
    if (ctx->pc == 0x2B4A3Cu) {
        ctx->pc = 0x2B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A38u;
        // 0x2b4a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A40u;
        goto label_fallthrough_0x2b4a38;
    }
    ctx->pc = 0x2B4A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A38u;
        // 0x2b4a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b4a38:
    ctx->pc = 0x2B4A40u;
}
