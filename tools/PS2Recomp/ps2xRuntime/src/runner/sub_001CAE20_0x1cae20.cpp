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

// Function: sub_001CAE20
// Address: 0x1cae20 - 0x1cae98
void sub_001CAE20_0x1cae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAE20_0x1cae20");
#endif

    switch (ctx->pc) {
        case 0x1cae34u: goto label_1cae34;
        case 0x1cae48u: goto label_1cae48;
        case 0x1cae50u: goto label_1cae50;
        default: break;
    }

    ctx->pc = 0x1cae20u;

    // 0x1cae20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cae28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cae2c: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1CAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE34u);
    ctx->pc = 0x1CAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE2Cu;
    // 0x1cae30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1CAE2Cu, 0x1CAE34u)) {
        return;
    }
    ctx->pc = 0x1CAE34u;
label_1cae34:
    // 0x1cae34: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cae38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAE38u;
    {
        const bool branch_taken_0x1cae38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE38u;
        // 0x1cae3c: 0xae000270  sw          $zero, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae38) {
            ctx->pc = 0x1CAE48u;
            goto label_1cae48;
        }
    }
    ctx->pc = 0x1CAE40u;
    // 0x1cae40: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1CAE40u;
    SET_GPR_U32(ctx, 31, 0x1CAE48u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1CAE40u, 0x1CAE48u)) {
        return;
    }
    ctx->pc = 0x1CAE48u;
label_1cae48:
    // 0x1cae48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cae48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cae4c: 0x0  nop
    ctx->pc = 0x1cae4cu;
    // NOP
label_1cae50:
    // 0x1cae50: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cae54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cae54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cae58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cae5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cae60: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cae60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cae64: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CAE64u;
    {
        const bool branch_taken_0x1cae64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE64u;
        // 0x1cae68: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae64) {
            ctx->pc = 0x1CAE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae50;
        }
    }
    ctx->pc = 0x1CAE6Cu;
    // 0x1cae6c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cae70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cae70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae74: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1cae74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1cae78: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cae7c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1cae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1cae80: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cae84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cae84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae88: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x1cae88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    // 0x1cae8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE8Cu;
        // 0x1cae90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE94u;
    // 0x1cae94: 0x0  nop
    ctx->pc = 0x1cae94u;
    // NOP
    ctx->pc = 0x1cae98u;
}
