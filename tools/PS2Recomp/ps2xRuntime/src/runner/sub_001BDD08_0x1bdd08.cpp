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

// Function: sub_001BDD08
// Address: 0x1bdd08 - 0x1bdd50
void sub_001BDD08_0x1bdd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDD08_0x1bdd08");
#endif

    switch (ctx->pc) {
        case 0x1bdd24u: goto label_1bdd24;
        case 0x1bdd38u: goto label_1bdd38;
        default: break;
    }

    ctx->pc = 0x1bdd08u;

    // 0x1bdd08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bdd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bdd0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bdd10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdd1c: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1BDD1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD24u);
    ctx->pc = 0x1BDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD1Cu;
    // 0x1bdd20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1BDD1Cu, 0x1BDD24u)) {
        return;
    }
    ctx->pc = 0x1BDD24u;
label_1bdd24:
    // 0x1bdd24: 0x8e040364  lw          $a0, 0x364($s0)
    ctx->pc = 0x1bdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1bdd28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD28u;
    {
        const bool branch_taken_0x1bdd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD28u;
        // 0x1bdd2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd28) {
            ctx->pc = 0x1BDD3Cu;
            goto label_1bdd3c;
        }
    }
    ctx->pc = 0x1BDD30u;
    // 0x1bdd30: 0xc06faea  jal         func_1BEBA8
    ctx->pc = 0x1BDD30u;
    SET_GPR_U32(ctx, 31, 0x1BDD38u);
    ctx->pc = 0x1BDD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD30u;
    // 0x1bdd34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BEBA8u, 0x1BDD30u, 0x1BDD38u)) {
        return;
    }
    ctx->pc = 0x1BDD38u;
label_1bdd38:
    // 0x1bdd38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bdd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bdd3c:
    // 0x1bdd3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bdd3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD44u;
        // 0x1bdd48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDD4Cu;
    // 0x1bdd4c: 0x0  nop
    ctx->pc = 0x1bdd4cu;
    // NOP
    ctx->pc = 0x1bdd50u;
}
