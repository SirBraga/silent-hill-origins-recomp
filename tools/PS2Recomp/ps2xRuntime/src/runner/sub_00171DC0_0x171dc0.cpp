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

// Function: sub_00171DC0
// Address: 0x171dc0 - 0x171df8
void sub_00171DC0_0x171dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171DC0_0x171dc0");
#endif

    switch (ctx->pc) {
        case 0x171dc0u: goto label_171dc0;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dc8u: goto label_171dc8;
        case 0x171dccu: goto label_171dcc;
        case 0x171dd0u: goto label_171dd0;
        case 0x171dd4u: goto label_171dd4;
        case 0x171dd8u: goto label_171dd8;
        case 0x171ddcu: goto label_171ddc;
        case 0x171de0u: goto label_171de0;
        case 0x171de4u: goto label_171de4;
        case 0x171de8u: goto label_171de8;
        case 0x171decu: goto label_171dec;
        case 0x171df0u: goto label_171df0;
        case 0x171df4u: goto label_171df4;
        default: break;
    }

    ctx->pc = 0x171dc0u;

label_171dc0:
    // 0x171dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_171dc4:
    // 0x171dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171dc8:
    // 0x171dc8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x171dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171dcc:
    // 0x171dcc: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x171dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_171dd0:
    // 0x171dd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_171dd4:
    if (ctx->pc == 0x171DD4u) {
        ctx->pc = 0x171DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD0u;
        // 0x171dd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DD8u;
        goto label_171dd8;
    }
    ctx->pc = 0x171DD0u;
    {
        const bool branch_taken_0x171dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD0u;
        // 0x171dd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dd0) {
            ctx->pc = 0x171DF0u;
            goto label_171df0;
        }
    }
    ctx->pc = 0x171DD8u;
label_171dd8:
    // 0x171dd8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x171dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_171ddc:
    // 0x171ddc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x171ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_171de0:
    // 0x171de0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x171de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_171de4:
    // 0x171de4: 0x60f809  jalr        $v1
label_171de8:
    if (ctx->pc == 0x171DE8u) {
        ctx->pc = 0x171DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DE4u;
        // 0x171de8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DECu;
        goto label_171dec;
    }
    ctx->pc = 0x171DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171DECu);
        ctx->pc = 0x171DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DE4u;
        // 0x171de8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171DE4u, 0x171DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171DECu;
label_171dec:
    // 0x171dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171df0:
    // 0x171df0: 0x3e00008  jr          $ra
label_171df4:
    if (ctx->pc == 0x171DF4u) {
        ctx->pc = 0x171DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DF0u;
        // 0x171df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DF8u;
        goto label_fallthrough_0x171df0;
    }
    ctx->pc = 0x171DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DF0u;
        // 0x171df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x171df0:
    ctx->pc = 0x171DF8u;
}
