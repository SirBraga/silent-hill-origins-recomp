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

// Function: sub_002A9C38
// Address: 0x2a9c38 - 0x2a9c68
void sub_002A9C38_0x2a9c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9C38_0x2a9c38");
#endif

    switch (ctx->pc) {
        case 0x2a9c38u: goto label_2a9c38;
        case 0x2a9c3cu: goto label_2a9c3c;
        case 0x2a9c40u: goto label_2a9c40;
        case 0x2a9c44u: goto label_2a9c44;
        case 0x2a9c48u: goto label_2a9c48;
        case 0x2a9c4cu: goto label_2a9c4c;
        case 0x2a9c50u: goto label_2a9c50;
        case 0x2a9c54u: goto label_2a9c54;
        case 0x2a9c58u: goto label_2a9c58;
        case 0x2a9c5cu: goto label_2a9c5c;
        case 0x2a9c60u: goto label_2a9c60;
        case 0x2a9c64u: goto label_2a9c64;
        default: break;
    }

    ctx->pc = 0x2a9c38u;

label_2a9c38:
    // 0x2a9c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a9c3c:
    // 0x2a9c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9c40:
    // 0x2a9c40: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2a9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2a9c44:
    // 0x2a9c44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2a9c48:
    // 0x2a9c48: 0x40f809  jalr        $v0
label_2a9c4c:
    if (ctx->pc == 0x2A9C4Cu) {
        ctx->pc = 0x2A9C50u;
        goto label_2a9c50;
    }
    ctx->pc = 0x2A9C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9C50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C48u, 0x2A9C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9C50u;
label_2a9c50:
    // 0x2a9c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9c54:
    // 0x2a9c54: 0x3e00008  jr          $ra
label_2a9c58:
    if (ctx->pc == 0x2A9C58u) {
        ctx->pc = 0x2A9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C54u;
        // 0x2a9c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C5Cu;
        goto label_2a9c5c;
    }
    ctx->pc = 0x2A9C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C54u;
        // 0x2a9c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C5Cu;
label_2a9c5c:
    // 0x2a9c5c: 0x0  nop
    ctx->pc = 0x2a9c5cu;
    // NOP
label_2a9c60:
    // 0x2a9c60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a9c64:
    // 0x2a9c64: 0x0  nop
    ctx->pc = 0x2a9c64u;
    // NOP
    ctx->pc = 0x2a9c68u;
}
