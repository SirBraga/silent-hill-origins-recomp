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

// Function: sub_00178C30
// Address: 0x178c30 - 0x178c58
void sub_00178C30_0x178c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C30_0x178c30");
#endif

    switch (ctx->pc) {
        case 0x178c30u: goto label_178c30;
        case 0x178c34u: goto label_178c34;
        case 0x178c38u: goto label_178c38;
        case 0x178c3cu: goto label_178c3c;
        case 0x178c40u: goto label_178c40;
        case 0x178c44u: goto label_178c44;
        case 0x178c48u: goto label_178c48;
        case 0x178c4cu: goto label_178c4c;
        case 0x178c50u: goto label_178c50;
        case 0x178c54u: goto label_178c54;
        default: break;
    }

    ctx->pc = 0x178c30u;

label_178c30:
    // 0x178c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178c34:
    // 0x178c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_178c38:
    // 0x178c38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x178c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_178c3c:
    // 0x178c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_178c40:
    if (ctx->pc == 0x178C40u) {
        ctx->pc = 0x178C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C3Cu;
        // 0x178c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C44u;
        goto label_178c44;
    }
    ctx->pc = 0x178C3Cu;
    {
        const bool branch_taken_0x178c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C3Cu;
        // 0x178c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c3c) {
            ctx->pc = 0x178C50u;
            goto label_178c50;
        }
    }
    ctx->pc = 0x178C44u;
label_178c44:
    // 0x178c44: 0x40f809  jalr        $v0
label_178c48:
    if (ctx->pc == 0x178C48u) {
        ctx->pc = 0x178C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C44u;
        // 0x178c48: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C4Cu;
        goto label_178c4c;
    }
    ctx->pc = 0x178C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178C4Cu);
        ctx->pc = 0x178C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C44u;
        // 0x178c48: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C44u, 0x178C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178C4Cu;
label_178c4c:
    // 0x178c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178c50:
    // 0x178c50: 0x3e00008  jr          $ra
label_178c54:
    if (ctx->pc == 0x178C54u) {
        ctx->pc = 0x178C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C50u;
        // 0x178c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C58u;
        goto label_fallthrough_0x178c50;
    }
    ctx->pc = 0x178C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C50u;
        // 0x178c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x178c50:
    ctx->pc = 0x178C58u;
}
