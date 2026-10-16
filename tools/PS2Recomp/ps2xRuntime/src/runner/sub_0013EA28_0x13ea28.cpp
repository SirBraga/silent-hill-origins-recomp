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

// Function: sub_0013EA28
// Address: 0x13ea28 - 0x13eaa8
void sub_0013EA28_0x13ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EA28_0x13ea28");
#endif

    switch (ctx->pc) {
        case 0x13ea44u: goto label_13ea44;
        case 0x13ea6cu: goto label_13ea6c;
        case 0x13ea94u: goto label_13ea94;
        default: break;
    }

    ctx->pc = 0x13ea28u;

    // 0x13ea28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ea2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ea30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ea34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ea34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ea3c: 0xc04ee86  jal         func_13BA18
    ctx->pc = 0x13EA3Cu;
    SET_GPR_U32(ctx, 31, 0x13EA44u);
    ctx->pc = 0x13EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA3Cu;
    // 0x13ea40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BA18u, 0x13EA3Cu, 0x13EA44u)) {
        return;
    }
    ctx->pc = 0x13EA44u;
label_13ea44:
    // 0x13ea44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ea48: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13ea48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ea4c: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x13ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF880u));
    // 0x13ea50: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EA50u;
    {
        const bool branch_taken_0x13ea50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA50u;
        // 0x13ea54: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea50) {
            ctx->pc = 0x13EA74u;
            goto label_13ea74;
        }
    }
    ctx->pc = 0x13EA58u;
    // 0x13ea58: 0x8e2201c4  lw          $v0, 0x1C4($s1)
    ctx->pc = 0x13ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 452)));
    // 0x13ea5c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13EA5Cu;
    {
        const bool branch_taken_0x13ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA5Cu;
        // 0x13ea60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea5c) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13EA64u;
    // 0x13ea64: 0xc04f8a2  jal         func_13E288
    ctx->pc = 0x13EA64u;
    SET_GPR_U32(ctx, 31, 0x13EA6Cu);
    ctx->pc = 0x13EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA64u;
    // 0x13ea68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13E288u, 0x13EA64u, 0x13EA6Cu)) {
        return;
    }
    ctx->pc = 0x13EA6Cu;
label_13ea6c:
    // 0x13ea6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13EA6Cu;
    {
        const bool branch_taken_0x13ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA6Cu;
        // 0x13ea70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea6c) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13EA74u;
label_13ea74:
    // 0x13ea74: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965384)));
    // 0x13ea78: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EA78u;
    {
        const bool branch_taken_0x13ea78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA78u;
        // 0x13ea7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea78) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13EA80u;
    // 0x13ea80: 0x8e2201c4  lw          $v0, 0x1C4($s1)
    ctx->pc = 0x13ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 452)));
    // 0x13ea84: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EA84u;
    {
        const bool branch_taken_0x13ea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea84) {
            ctx->pc = 0x13EA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA84u;
            // 0x13ea88: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA9Cu;
            goto label_13ea9c;
        }
    }
    ctx->pc = 0x13EA8Cu;
    // 0x13ea8c: 0xc04faf8  jal         func_13EBE0
    ctx->pc = 0x13EA8Cu;
    SET_GPR_U32(ctx, 31, 0x13EA94u);
    ctx->pc = 0x13EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA8Cu;
    // 0x13ea90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EBE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13EBE0u, 0x13EA8Cu, 0x13EA94u)) {
        return;
    }
    ctx->pc = 0x13EA94u;
label_13ea94:
    // 0x13ea94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ea94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ea98:
    // 0x13ea98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ea98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ea9c:
    // 0x13ea9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAA0u;
        // 0x13eaa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EAA8u;
}
