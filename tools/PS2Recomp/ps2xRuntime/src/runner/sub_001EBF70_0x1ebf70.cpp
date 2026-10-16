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

// Function: sub_001EBF70
// Address: 0x1ebf70 - 0x1ebfc8
void sub_001EBF70_0x1ebf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBF70_0x1ebf70");
#endif

    switch (ctx->pc) {
        case 0x1ebf94u: goto label_1ebf94;
        case 0x1ebfa8u: goto label_1ebfa8;
        default: break;
    }

    ctx->pc = 0x1ebf70u;

label_1ebf70:
    // 0x1ebf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebf74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ebf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ebf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebf7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf80: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ebf84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBF84u;
    {
        const bool branch_taken_0x1ebf84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf84) {
            ctx->pc = 0x1EBF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBF84u;
            // 0x1ebf88: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF98u;
            goto label_1ebf98;
        }
    }
    ctx->pc = 0x1EBF8Cu;
    // 0x1ebf8c: 0xc07afdc  jal         func_1EBF70
    ctx->pc = 0x1EBF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF94u);
    ctx->pc = 0x1EBF70u;
    goto label_1ebf70;
    ctx->pc = 0x1EBF94u;
label_1ebf94:
    // 0x1ebf94: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ebf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ebf98:
    // 0x1ebf98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBF98u;
    {
        const bool branch_taken_0x1ebf98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf98) {
            ctx->pc = 0x1EBF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBF98u;
            // 0x1ebf9c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFACu;
            goto label_1ebfac;
        }
    }
    ctx->pc = 0x1EBFA0u;
    // 0x1ebfa0: 0xc07afdc  jal         func_1EBF70
    ctx->pc = 0x1EBFA0u;
    SET_GPR_U32(ctx, 31, 0x1EBFA8u);
    ctx->pc = 0x1EBF70u;
    goto label_1ebf70;
    ctx->pc = 0x1EBFA8u;
label_1ebfa8:
    // 0x1ebfa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ebfac:
    // 0x1ebfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebfb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ebfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebfb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebfb8: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x1ebfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x1ebfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFBCu;
        // 0x1ebfc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBFC4u;
    // 0x1ebfc4: 0x0  nop
    ctx->pc = 0x1ebfc4u;
    // NOP
    ctx->pc = 0x1ebfc8u;
}
