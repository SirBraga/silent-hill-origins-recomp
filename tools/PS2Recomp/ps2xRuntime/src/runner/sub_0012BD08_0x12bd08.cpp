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

// Function: sub_0012BD08
// Address: 0x12bd08 - 0x12bd48
void sub_0012BD08_0x12bd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BD08_0x12bd08");
#endif

    switch (ctx->pc) {
        case 0x12bd20u: goto label_12bd20;
        case 0x12bd34u: goto label_12bd34;
        default: break;
    }

    ctx->pc = 0x12bd08u;

    // 0x12bd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bd0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bd10: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x12bd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12bd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bd18: 0xc049b16  jal         func_126C58
    ctx->pc = 0x12BD18u;
    SET_GPR_U32(ctx, 31, 0x12BD20u);
    ctx->pc = 0x12BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD18u;
    // 0x12bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126C58u, 0x12BD18u, 0x12BD20u)) {
        return;
    }
    ctx->pc = 0x12BD20u;
label_12bd20:
    // 0x12bd20: 0x8e040c00  lw          $a0, 0xC00($s0)
    ctx->pc = 0x12bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x12bd24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BD24u;
    {
        const bool branch_taken_0x12bd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD24u;
        // 0x12bd28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd24) {
            ctx->pc = 0x12BD38u;
            goto label_12bd38;
        }
    }
    ctx->pc = 0x12BD2Cu;
    // 0x12bd2c: 0xc051cae  jal         func_1472B8
    ctx->pc = 0x12BD2Cu;
    SET_GPR_U32(ctx, 31, 0x12BD34u);
    ctx->pc = 0x12BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD2Cu;
    // 0x12bd30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1472B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1472B8u, 0x12BD2Cu, 0x12BD34u)) {
        return;
    }
    ctx->pc = 0x12BD34u;
label_12bd34:
    // 0x12bd34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12bd38:
    // 0x12bd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD3Cu;
        // 0x12bd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD44u;
    // 0x12bd44: 0x0  nop
    ctx->pc = 0x12bd44u;
    // NOP
    ctx->pc = 0x12bd48u;
}
