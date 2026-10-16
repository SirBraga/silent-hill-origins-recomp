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

// Function: sub_0022AFD8
// Address: 0x22afd8 - 0x22b050
void sub_0022AFD8_0x22afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AFD8_0x22afd8");
#endif

    switch (ctx->pc) {
        case 0x22b008u: goto label_22b008;
        case 0x22b018u: goto label_22b018;
        default: break;
    }

    ctx->pc = 0x22afd8u;

    // 0x22afd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22afdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22afe0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22afe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22afe4: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x22afe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22afe8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22afec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22afecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22aff0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22aff4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22aff8: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x22AFF8u;
    {
        const bool branch_taken_0x22aff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x22AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFF8u;
        // 0x22affc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aff8) {
            ctx->pc = 0x22B02Cu;
            goto label_22b02c;
        }
    }
    ctx->pc = 0x22B000u;
    // 0x22b000: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x22b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x22b004: 0x0  nop
    ctx->pc = 0x22b004u;
    // NOP
label_22b008:
    // 0x22b008: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B008u;
    {
        const bool branch_taken_0x22b008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B008u;
        // 0x22b00c: 0x2611fff8  addiu       $s1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b008) {
            ctx->pc = 0x22B020u;
            goto label_22b020;
        }
    }
    ctx->pc = 0x22B010u;
    // 0x22b010: 0xc08aa34  jal         func_22A8D0
    ctx->pc = 0x22B010u;
    SET_GPR_U32(ctx, 31, 0x22B018u);
    ctx->pc = 0x22B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B010u;
    // 0x22b014: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A8D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22A8D0u, 0x22B010u, 0x22B018u)) {
        return;
    }
    ctx->pc = 0x22B018u;
label_22b018:
    // 0x22b018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B018u;
        // 0x22b01c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B030u;
            goto label_22b030;
        }
    }
    ctx->pc = 0x22B020u;
label_22b020:
    // 0x22b020: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x22b020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b024: 0x1612fff8  bne         $s0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B024u;
    {
        const bool branch_taken_0x22b024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x22B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B024u;
        // 0x22b028: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b024) {
            ctx->pc = 0x22B008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b008;
        }
    }
    ctx->pc = 0x22B02Cu;
label_22b02c:
    // 0x22b02c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b030:
    // 0x22b030: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22b030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b034: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22b034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b03c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22b03cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b044: 0x3e00008  jr          $ra
    ctx->pc = 0x22B044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B044u;
        // 0x22b048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B04Cu;
    // 0x22b04c: 0x0  nop
    ctx->pc = 0x22b04cu;
    // NOP
    ctx->pc = 0x22b050u;
}
