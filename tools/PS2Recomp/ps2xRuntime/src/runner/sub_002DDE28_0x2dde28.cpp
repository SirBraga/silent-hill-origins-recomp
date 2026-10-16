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

// Function: sub_002DDE28
// Address: 0x2dde28 - 0x2dde98
void sub_002DDE28_0x2dde28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDE28_0x2dde28");
#endif

    switch (ctx->pc) {
        case 0x2dde50u: goto label_2dde50;
        case 0x2dde5cu: goto label_2dde5c;
        default: break;
    }

    ctx->pc = 0x2dde28u;

    // 0x2dde28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dde28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dde2c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dde30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dde30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dde34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dde34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dde38: 0x245043a8  addiu       $s0, $v0, 0x43A8
    ctx->pc = 0x2dde38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17320));
    // 0x2dde3c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2dde3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2dde40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dde40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dde44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dde48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dde48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde4c: 0x0  nop
    ctx->pc = 0x2dde4cu;
    // NOP
label_2dde50:
    // 0x2dde50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dde50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dde54: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDE54u;
    SET_GPR_U32(ctx, 31, 0x2DDE5Cu);
    ctx->pc = 0x2DDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE54u;
    // 0x2dde58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDE54u, 0x2DDE5Cu)) {
        return;
    }
    ctx->pc = 0x2DDE5Cu;
label_2dde5c:
    // 0x2dde5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDE5Cu;
    {
        const bool branch_taken_0x2dde5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE5Cu;
        // 0x2dde60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde5c) {
            ctx->pc = 0x2DDE6Cu;
            goto label_2dde6c;
        }
    }
    ctx->pc = 0x2DDE64u;
    // 0x2dde64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDE64u;
    {
        const bool branch_taken_0x2dde64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE64u;
        // 0x2dde68: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde64) {
            ctx->pc = 0x2DDE7Cu;
            goto label_2dde7c;
        }
    }
    ctx->pc = 0x2DDE6Cu;
label_2dde6c:
    // 0x2dde6c: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x2dde6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2dde70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DDE70u;
    {
        const bool branch_taken_0x2dde70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE70u;
        // 0x2dde74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde70) {
            ctx->pc = 0x2DDE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dde50;
        }
    }
    ctx->pc = 0x2DDE78u;
    // 0x2dde78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dde78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dde7c:
    // 0x2dde7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dde7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dde80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dde80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dde84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2dde84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dde88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dde8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE8Cu;
        // 0x2dde90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE94u;
    // 0x2dde94: 0x0  nop
    ctx->pc = 0x2dde94u;
    // NOP
    ctx->pc = 0x2dde98u;
}
