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

// Function: sub_001D5DC0
// Address: 0x1d5dc0 - 0x1d5de8
void sub_001D5DC0_0x1d5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DC0_0x1d5dc0");
#endif

    switch (ctx->pc) {
        case 0x1d5dc0u: goto label_1d5dc0;
        case 0x1d5dc4u: goto label_1d5dc4;
        case 0x1d5dc8u: goto label_1d5dc8;
        case 0x1d5dccu: goto label_1d5dcc;
        case 0x1d5dd0u: goto label_1d5dd0;
        case 0x1d5dd4u: goto label_1d5dd4;
        case 0x1d5dd8u: goto label_1d5dd8;
        case 0x1d5ddcu: goto label_1d5ddc;
        case 0x1d5de0u: goto label_1d5de0;
        case 0x1d5de4u: goto label_1d5de4;
        default: break;
    }

    ctx->pc = 0x1d5dc0u;

label_1d5dc0:
    // 0x1d5dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d5dc4:
    // 0x1d5dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d5dc8:
    // 0x1d5dc8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d5dcc:
    // 0x1d5dcc: 0x85020028  lh          $v0, 0x28($t0)
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_1d5dd0:
    // 0x1d5dd0: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_1d5dd4:
    // 0x1d5dd4: 0x60f809  jalr        $v1
label_1d5dd8:
    if (ctx->pc == 0x1D5DD8u) {
        ctx->pc = 0x1D5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DD4u;
        // 0x1d5dd8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DDCu;
        goto label_1d5ddc;
    }
    ctx->pc = 0x1D5DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D5DDCu);
        ctx->pc = 0x1D5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DD4u;
        // 0x1d5dd8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DD4u, 0x1D5DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5DDCu;
label_1d5ddc:
    // 0x1d5ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5de0:
    // 0x1d5de0: 0x3e00008  jr          $ra
label_1d5de4:
    if (ctx->pc == 0x1D5DE4u) {
        ctx->pc = 0x1D5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DE0u;
        // 0x1d5de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DE8u;
        goto label_fallthrough_0x1d5de0;
    }
    ctx->pc = 0x1D5DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DE0u;
        // 0x1d5de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d5de0:
    ctx->pc = 0x1D5DE8u;
}
