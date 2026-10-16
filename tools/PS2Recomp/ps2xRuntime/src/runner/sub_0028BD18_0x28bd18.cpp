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

// Function: sub_0028BD18
// Address: 0x28bd18 - 0x28bd70
void sub_0028BD18_0x28bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BD18_0x28bd18");
#endif

    switch (ctx->pc) {
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd4cu: goto label_28bd4c;
        default: break;
    }

    ctx->pc = 0x28bd18u;

    // 0x28bd18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bd1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28bd20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bd24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28bd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bd2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28bd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd30: 0xc0a25e8  jal         func_2897A0
    ctx->pc = 0x28BD30u;
    SET_GPR_U32(ctx, 31, 0x28BD38u);
    ctx->pc = 0x28BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD30u;
    // 0x28bd34: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2897A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2897A0u, 0x28BD30u, 0x28BD38u)) {
        return;
    }
    ctx->pc = 0x28BD38u;
label_28bd38:
    // 0x28bd38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BD38u;
    {
        const bool branch_taken_0x28bd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD38u;
        // 0x28bd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd38) {
            ctx->pc = 0x28BD54u;
            goto label_28bd54;
        }
    }
    ctx->pc = 0x28BD40u;
    // 0x28bd40: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x28bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28bd44: 0xc0a2660  jal         func_289980
    ctx->pc = 0x28BD44u;
    SET_GPR_U32(ctx, 31, 0x28BD4Cu);
    ctx->pc = 0x28BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD44u;
    // 0x28bd48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289980u, 0x28BD44u, 0x28BD4Cu)) {
        return;
    }
    ctx->pc = 0x28BD4Cu;
label_28bd4c:
    // 0x28bd4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28BD4Cu;
    {
        const bool branch_taken_0x28bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD4Cu;
        // 0x28bd50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd4c) {
            ctx->pc = 0x28BD5Cu;
            goto label_28bd5c;
        }
    }
    ctx->pc = 0x28BD54u;
label_28bd54:
    // 0x28bd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28bd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28bd5c:
    // 0x28bd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bd64: 0x3e00008  jr          $ra
    ctx->pc = 0x28BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD64u;
        // 0x28bd68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BD6Cu;
    // 0x28bd6c: 0x0  nop
    ctx->pc = 0x28bd6cu;
    // NOP
    ctx->pc = 0x28bd70u;
}
