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

// Function: sub_002DCEF8
// Address: 0x2dcef8 - 0x2dcf70
void sub_002DCEF8_0x2dcef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCEF8_0x2dcef8");
#endif

    switch (ctx->pc) {
        case 0x2dcf20u: goto label_2dcf20;
        case 0x2dcf28u: goto label_2dcf28;
        case 0x2dcf40u: goto label_2dcf40;
        default: break;
    }

    ctx->pc = 0x2dcef8u;

    // 0x2dcef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dcef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dcefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dcf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dcf04: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x2dcf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dcf08: 0x27909020  addiu       $s0, $gp, -0x6FE0
    ctx->pc = 0x2dcf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dcf0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcf10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dcf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dcf14: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCF14u;
    {
        const bool branch_taken_0x2dcf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF14u;
        // 0x2dcf18: 0xaf828bdc  sw          $v0, -0x7424($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf14) {
            ctx->pc = 0x2DCF34u;
            goto label_2dcf34;
        }
    }
    ctx->pc = 0x2DCF1Cu;
    // 0x2dcf1c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2dcf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf20:
    // 0x2dcf20: 0xc0b7404  jal         func_2DD010
    ctx->pc = 0x2DCF20u;
    SET_GPR_U32(ctx, 31, 0x2DCF28u);
    ctx->pc = 0x2DCF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF20u;
    // 0x2dcf24: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD010u, 0x2DCF20u, 0x2DCF28u)) {
        return;
    }
    ctx->pc = 0x2DCF28u;
label_2dcf28:
    // 0x2dcf28: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x2dcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dcf2c: 0x1491fffc  bne         $a0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2DCF2Cu;
    {
        const bool branch_taken_0x2dcf2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x2dcf2c) {
            ctx->pc = 0x2DCF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcf20;
        }
    }
    ctx->pc = 0x2DCF34u;
label_2dcf34:
    // 0x2dcf34: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2dcf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2dcf38: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DCF38u;
    SET_GPR_U32(ctx, 31, 0x2DCF40u);
    ctx->pc = 0x2DCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF38u;
    // 0x2dcf3c: 0x24848018  addiu       $a0, $a0, -0x7FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DCF38u, 0x2DCF40u)) {
        return;
    }
    ctx->pc = 0x2DCF40u;
label_2dcf40:
    // 0x2dcf40: 0xaf909024  sw          $s0, -0x6FDC($gp)
    ctx->pc = 0x2dcf40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 16));
    // 0x2dcf44: 0xaf909020  sw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dcf44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 16));
    // 0x2dcf48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dcf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcf4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcf54: 0xaf808be0  sw          $zero, -0x7420($gp)
    ctx->pc = 0x2dcf54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 0));
    // 0x2dcf58: 0xaf808be4  sw          $zero, -0x741C($gp)
    ctx->pc = 0x2dcf58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 0));
    // 0x2dcf5c: 0xaf808bd8  sw          $zero, -0x7428($gp)
    ctx->pc = 0x2dcf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U32(ctx, 0));
    // 0x2dcf60: 0xaf808bdc  sw          $zero, -0x7424($gp)
    ctx->pc = 0x2dcf60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 0));
    // 0x2dcf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF64u;
        // 0x2dcf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCF6Cu;
    // 0x2dcf6c: 0x0  nop
    ctx->pc = 0x2dcf6cu;
    // NOP
    ctx->pc = 0x2dcf70u;
}
