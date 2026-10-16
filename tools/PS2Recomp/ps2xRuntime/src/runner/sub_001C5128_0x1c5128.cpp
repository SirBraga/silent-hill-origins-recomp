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

// Function: sub_001C5128
// Address: 0x1c5128 - 0x1c51a0
void sub_001C5128_0x1c5128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5128_0x1c5128");
#endif

    switch (ctx->pc) {
        case 0x1c5144u: goto label_1c5144;
        case 0x1c5164u: goto label_1c5164;
        case 0x1c5188u: goto label_1c5188;
        default: break;
    }

    ctx->pc = 0x1c5128u;

    // 0x1c5128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c512c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c5130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c513c: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1C513Cu;
    SET_GPR_U32(ctx, 31, 0x1C5144u);
    ctx->pc = 0x1C5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C513Cu;
    // 0x1c5140: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C513Cu, 0x1C5144u)) {
        return;
    }
    ctx->pc = 0x1C5144u;
label_1c5144:
    // 0x1c5144: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c5148: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5148u;
    {
        const bool branch_taken_0x1c5148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5148u;
        // 0x1c514c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5148) {
            ctx->pc = 0x1C516Cu;
            goto label_1c516c;
        }
    }
    ctx->pc = 0x1C5150u;
    // 0x1c5150: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c515c: 0xc071468  jal         func_1C51A0
    ctx->pc = 0x1C515Cu;
    SET_GPR_U32(ctx, 31, 0x1C5164u);
    ctx->pc = 0x1C5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C515Cu;
    // 0x1c5160: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C51A0u, 0x1C515Cu, 0x1C5164u)) {
        return;
    }
    ctx->pc = 0x1C5164u;
label_1c5164:
    // 0x1c5164: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5164u;
    {
        const bool branch_taken_0x1c5164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5164u;
        // 0x1c5168: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5164) {
            ctx->pc = 0x1C518Cu;
            goto label_1c518c;
        }
    }
    ctx->pc = 0x1C516Cu;
label_1c516c:
    // 0x1c516c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C516Cu;
    {
        const bool branch_taken_0x1c516c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c516c) {
            ctx->pc = 0x1C5170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C516Cu;
            // 0x1c5170: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C518Cu;
            goto label_1c518c;
        }
    }
    ctx->pc = 0x1C5174u;
    // 0x1c5174: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5180: 0xc071468  jal         func_1C51A0
    ctx->pc = 0x1C5180u;
    SET_GPR_U32(ctx, 31, 0x1C5188u);
    ctx->pc = 0x1C5184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5180u;
    // 0x1c5184: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C51A0u, 0x1C5180u, 0x1C5188u)) {
        return;
    }
    ctx->pc = 0x1C5188u;
label_1c5188:
    // 0x1c5188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c5188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c518c:
    // 0x1c518c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c518cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5194: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5194u;
        // 0x1c5198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C519Cu;
    // 0x1c519c: 0x0  nop
    ctx->pc = 0x1c519cu;
    // NOP
    ctx->pc = 0x1c51a0u;
}
