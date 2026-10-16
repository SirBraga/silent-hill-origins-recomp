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

// Function: sub_0017BA00
// Address: 0x17ba00 - 0x17ba40
void sub_0017BA00_0x17ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BA00_0x17ba00");
#endif

    switch (ctx->pc) {
        case 0x17ba18u: goto label_17ba18;
        case 0x17ba30u: goto label_17ba30;
        default: break;
    }

    ctx->pc = 0x17ba00u;

    // 0x17ba00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ba04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ba08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17ba08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ba10: 0xc097956  jal         func_25E558
    ctx->pc = 0x17BA10u;
    SET_GPR_U32(ctx, 31, 0x17BA18u);
    ctx->pc = 0x17BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA10u;
    // 0x17ba14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E558u, 0x17BA10u, 0x17BA18u)) {
        return;
    }
    ctx->pc = 0x17BA18u;
label_17ba18:
    // 0x17ba18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA18u;
    {
        const bool branch_taken_0x17ba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA18u;
        // 0x17ba1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba18) {
            ctx->pc = 0x17BA28u;
            goto label_17ba28;
        }
    }
    ctx->pc = 0x17BA20u;
    // 0x17ba20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA20u;
    {
        const bool branch_taken_0x17ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA20u;
        // 0x17ba24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba20) {
            ctx->pc = 0x17BA30u;
            goto label_17ba30;
        }
    }
    ctx->pc = 0x17BA28u;
label_17ba28:
    // 0x17ba28: 0xc09793e  jal         func_25E4F8
    ctx->pc = 0x17BA28u;
    SET_GPR_U32(ctx, 31, 0x17BA30u);
    ctx->pc = 0x17BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA28u;
    // 0x17ba2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E4F8u, 0x17BA28u, 0x17BA30u)) {
        return;
    }
    ctx->pc = 0x17BA30u;
label_17ba30:
    // 0x17ba30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ba30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ba34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ba34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba38: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA38u;
        // 0x17ba3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA40u;
}
