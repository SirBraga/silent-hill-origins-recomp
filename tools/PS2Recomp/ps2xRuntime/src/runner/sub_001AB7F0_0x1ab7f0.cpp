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

// Function: sub_001AB7F0
// Address: 0x1ab7f0 - 0x1ab820
void sub_001AB7F0_0x1ab7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB7F0_0x1ab7f0");
#endif

    switch (ctx->pc) {
        case 0x1ab7f0u: goto label_1ab7f0;
        case 0x1ab7f4u: goto label_1ab7f4;
        case 0x1ab7f8u: goto label_1ab7f8;
        case 0x1ab7fcu: goto label_1ab7fc;
        case 0x1ab800u: goto label_1ab800;
        case 0x1ab804u: goto label_1ab804;
        case 0x1ab808u: goto label_1ab808;
        case 0x1ab80cu: goto label_1ab80c;
        case 0x1ab810u: goto label_1ab810;
        case 0x1ab814u: goto label_1ab814;
        case 0x1ab818u: goto label_1ab818;
        case 0x1ab81cu: goto label_1ab81c;
        default: break;
    }

    ctx->pc = 0x1ab7f0u;

label_1ab7f0:
    // 0x1ab7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab7f4:
    // 0x1ab7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab7f8:
    // 0x1ab7f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ab7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab7fc:
    // 0x1ab7fc: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x1ab7fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1ab800:
    // 0x1ab800: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1ab800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1ab804:
    // 0x1ab804: 0xc0f809  jalr        $a2
label_1ab808:
    if (ctx->pc == 0x1AB808u) {
        ctx->pc = 0x1AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB804u;
        // 0x1ab808: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB80Cu;
        goto label_1ab80c;
    }
    ctx->pc = 0x1AB804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AB80Cu);
        ctx->pc = 0x1AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB804u;
        // 0x1ab808: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB804u, 0x1AB80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB80Cu;
label_1ab80c:
    // 0x1ab80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab810:
    // 0x1ab810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab814:
    // 0x1ab814: 0x3e00008  jr          $ra
label_1ab818:
    if (ctx->pc == 0x1AB818u) {
        ctx->pc = 0x1AB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB814u;
        // 0x1ab818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB81Cu;
        goto label_1ab81c;
    }
    ctx->pc = 0x1AB814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB814u;
        // 0x1ab818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB81Cu;
label_1ab81c:
    // 0x1ab81c: 0x0  nop
    ctx->pc = 0x1ab81cu;
    // NOP
    ctx->pc = 0x1ab820u;
}
