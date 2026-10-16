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

// Function: sub_0014CF08
// Address: 0x14cf08 - 0x14cf78
void sub_0014CF08_0x14cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CF08_0x14cf08");
#endif

    switch (ctx->pc) {
        case 0x14cf50u: goto label_14cf50;
        default: break;
    }

    ctx->pc = 0x14cf08u;

    // 0x14cf08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14cf0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14cf10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14cf14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14cf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14cf18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf1c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x14CF1Cu;
    {
        const bool branch_taken_0x14cf1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF1Cu;
        // 0x14cf20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf1c) {
            ctx->pc = 0x14CF5Cu;
            goto label_14cf5c;
        }
    }
    ctx->pc = 0x14CF24u;
    // 0x14cf24: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x14CF24u;
    {
        const bool branch_taken_0x14cf24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF24u;
        // 0x14cf28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf24) {
            ctx->pc = 0x14CF60u;
            goto label_14cf60;
        }
    }
    ctx->pc = 0x14CF2Cu;
    // 0x14cf2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cf30: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x14cf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14cf34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CF34u;
    {
        const bool branch_taken_0x14cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF34u;
        // 0x14cf38: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf34) {
            ctx->pc = 0x14CF5Cu;
            goto label_14cf5c;
        }
    }
    ctx->pc = 0x14CF3Cu;
    // 0x14cf3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14cf40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cf48: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x14CF48u;
    SET_GPR_U32(ctx, 31, 0x14CF50u);
    ctx->pc = 0x14CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF48u;
    // 0x14cf4c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x14CF48u, 0x14CF50u)) {
        return;
    }
    ctx->pc = 0x14CF50u;
label_14cf50:
    // 0x14cf50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cf54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14cf58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_14cf5c:
    // 0x14cf5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14cf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14cf60:
    // 0x14cf60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14cf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF6Cu;
        // 0x14cf70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CF74u;
    // 0x14cf74: 0x0  nop
    ctx->pc = 0x14cf74u;
    // NOP
    ctx->pc = 0x14cf78u;
}
