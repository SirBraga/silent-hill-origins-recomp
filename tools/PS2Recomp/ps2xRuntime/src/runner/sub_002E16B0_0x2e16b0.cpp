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

// Function: sub_002E16B0
// Address: 0x2e16b0 - 0x2e1700
void sub_002E16B0_0x2e16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E16B0_0x2e16b0");
#endif

    switch (ctx->pc) {
        case 0x2e16c8u: goto label_2e16c8;
        case 0x2e16d0u: goto label_2e16d0;
        case 0x2e16e8u: goto label_2e16e8;
        default: break;
    }

    ctx->pc = 0x2e16b0u;

    // 0x2e16b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e16b4: 0x8f849048  lw          $a0, -0x6FB8($gp)
    ctx->pc = 0x2e16b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938696)));
    // 0x2e16b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e16bc: 0x27909048  addiu       $s0, $gp, -0x6FB8
    ctx->pc = 0x2e16bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938696));
    // 0x2e16c0: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E16C0u;
    {
        const bool branch_taken_0x2e16c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16C0u;
        // 0x2e16c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16c0) {
            ctx->pc = 0x2E16DCu;
            goto label_2e16dc;
        }
    }
    ctx->pc = 0x2E16C8u;
label_2e16c8:
    // 0x2e16c8: 0xc0b849a  jal         func_2E1268
    ctx->pc = 0x2E16C8u;
    SET_GPR_U32(ctx, 31, 0x2E16D0u);
    ctx->pc = 0x2E16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16C8u;
    // 0x2e16cc: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1268u, 0x2E16C8u, 0x2E16D0u)) {
        return;
    }
    ctx->pc = 0x2E16D0u;
label_2e16d0:
    // 0x2e16d0: 0x8f849048  lw          $a0, -0x6FB8($gp)
    ctx->pc = 0x2e16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938696)));
    // 0x2e16d4: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E16D4u;
    {
        const bool branch_taken_0x2e16d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e16d4) {
            ctx->pc = 0x2E16C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e16c8;
        }
    }
    ctx->pc = 0x2E16DCu;
label_2e16dc:
    // 0x2e16dc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e16dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e16e0: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E16E0u;
    SET_GPR_U32(ctx, 31, 0x2E16E8u);
    ctx->pc = 0x2E16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16E0u;
    // 0x2e16e4: 0x24848108  addiu       $a0, $a0, -0x7EF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E16E0u, 0x2E16E8u)) {
        return;
    }
    ctx->pc = 0x2E16E8u;
label_2e16e8:
    // 0x2e16e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e16e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e16ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e16ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e16f0: 0xaf808c38  sw          $zero, -0x73C8($gp)
    ctx->pc = 0x2e16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 0));
    // 0x2e16f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16F4u;
        // 0x2e16f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E16F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E16FCu;
    // 0x2e16fc: 0x0  nop
    ctx->pc = 0x2e16fcu;
    // NOP
    ctx->pc = 0x2e1700u;
}
