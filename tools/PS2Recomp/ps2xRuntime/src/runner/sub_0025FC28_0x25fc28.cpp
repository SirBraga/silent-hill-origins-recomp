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

// Function: sub_0025FC28
// Address: 0x25fc28 - 0x25fcc0
void sub_0025FC28_0x25fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC28_0x25fc28");
#endif

    switch (ctx->pc) {
        case 0x25fc40u: goto label_25fc40;
        case 0x25fc78u: goto label_25fc78;
        default: break;
    }

    ctx->pc = 0x25fc28u;

    // 0x25fc28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25fc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fc30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25fc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fc38: 0xc097188  jal         func_25C620
    ctx->pc = 0x25FC38u;
    SET_GPR_U32(ctx, 31, 0x25FC40u);
    ctx->pc = 0x25FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC38u;
    // 0x25fc3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x25FC38u, 0x25FC40u)) {
        return;
    }
    ctx->pc = 0x25FC40u;
label_25fc40:
    // 0x25fc40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25fc44: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x25fc48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25fc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25fc4c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x25FC4Cu;
    {
        const bool branch_taken_0x25fc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC4Cu;
        // 0x25fc50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc4c) {
            ctx->pc = 0x25FCA4u;
            goto label_25fca4;
        }
    }
    ctx->pc = 0x25FC54u;
    // 0x25fc54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25fc58: 0x8c4241b4  lw          $v0, 0x41B4($v0)
    ctx->pc = 0x25fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B4u));
    // 0x25fc5c: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x25fc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25fc60: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25fc64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fc68: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x25fc68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fc6c: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x25FC6Cu;
    {
        const bool branch_taken_0x25fc6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC6Cu;
        // 0x25fc70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc6c) {
            ctx->pc = 0x25FCA4u;
            goto label_25fca4;
        }
    }
    ctx->pc = 0x25FC74u;
    // 0x25fc74: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x25fc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_25fc78:
    // 0x25fc78: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x25fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25fc7c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x25fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x25fc80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25fc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x25fc84: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25fc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x25fc88: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x25fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25fc8c: 0x109282b  sltu        $a1, $t0, $t1
    ctx->pc = 0x25fc8cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x25fc90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25fc94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25fc98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fc9c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x25FC9Cu;
    {
        const bool branch_taken_0x25fc9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC9Cu;
        // 0x25fca0: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc9c) {
            ctx->pc = 0x25FC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fc78;
        }
    }
    ctx->pc = 0x25FCA4u;
label_25fca4:
    // 0x25fca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25fca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fcac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25fcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCB4u;
        // 0x25fcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FCBCu;
    // 0x25fcbc: 0x0  nop
    ctx->pc = 0x25fcbcu;
    // NOP
    ctx->pc = 0x25fcc0u;
}
