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

// Function: sub_0017BA68
// Address: 0x17ba68 - 0x17baa8
void sub_0017BA68_0x17ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BA68_0x17ba68");
#endif

    switch (ctx->pc) {
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba98u: goto label_17ba98;
        default: break;
    }

    ctx->pc = 0x17ba68u;

    // 0x17ba68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ba6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ba70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17ba70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ba78: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x17BA78u;
    SET_GPR_U32(ctx, 31, 0x17BA80u);
    ctx->pc = 0x17BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA78u;
    // 0x17ba7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x17BA78u, 0x17BA80u)) {
        return;
    }
    ctx->pc = 0x17BA80u;
label_17ba80:
    // 0x17ba80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA80u;
    {
        const bool branch_taken_0x17ba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA80u;
        // 0x17ba84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba80) {
            ctx->pc = 0x17BA90u;
            goto label_17ba90;
        }
    }
    ctx->pc = 0x17BA88u;
    // 0x17ba88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA88u;
    {
        const bool branch_taken_0x17ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA88u;
        // 0x17ba8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba88) {
            ctx->pc = 0x17BA98u;
            goto label_17ba98;
        }
    }
    ctx->pc = 0x17BA90u;
label_17ba90:
    // 0x17ba90: 0xc09799a  jal         func_25E668
    ctx->pc = 0x17BA90u;
    SET_GPR_U32(ctx, 31, 0x17BA98u);
    ctx->pc = 0x17BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA90u;
    // 0x17ba94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x17BA90u, 0x17BA98u)) {
        return;
    }
    ctx->pc = 0x17BA98u;
label_17ba98:
    // 0x17ba98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ba98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ba9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17baa0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAA0u;
        // 0x17baa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAA8u;
}
