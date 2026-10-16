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

// Function: sub_001CFA90
// Address: 0x1cfa90 - 0x1cfb20
void sub_001CFA90_0x1cfa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA90_0x1cfa90");
#endif

    switch (ctx->pc) {
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfaf8u: goto label_1cfaf8;
        default: break;
    }

    ctx->pc = 0x1cfa90u;

    // 0x1cfa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfa94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfa98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cfa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cfa9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1cfa9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfaa0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CFAA0u;
    {
        const bool branch_taken_0x1cfaa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAA0u;
        // 0x1cfaa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaa0) {
            ctx->pc = 0x1CFB00u;
            goto label_1cfb00;
        }
    }
    ctx->pc = 0x1CFAA8u;
    // 0x1cfaa8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cfaac: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1CFAACu;
    SET_GPR_U32(ctx, 31, 0x1CFAB4u);
    ctx->pc = 0x1CFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAACu;
    // 0x1cfab0: 0x24a508b8  addiu       $a1, $a1, 0x8B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFAACu, 0x1CFAB4u)) {
        return;
    }
    ctx->pc = 0x1CFAB4u;
label_1cfab4:
    // 0x1cfab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cfab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfab8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CFAB8u;
    {
        const bool branch_taken_0x1cfab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB8u;
        // 0x1cfabc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab8) {
            ctx->pc = 0x1CFB08u;
            goto label_1cfb08;
        }
    }
    ctx->pc = 0x1CFAC0u;
    // 0x1cfac0: 0xc06ce22  jal         func_1B3888
    ctx->pc = 0x1CFAC0u;
    SET_GPR_U32(ctx, 31, 0x1CFAC8u);
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1CFAC0u, 0x1CFAC8u)) {
        return;
    }
    ctx->pc = 0x1CFAC8u;
label_1cfac8:
    // 0x1cfac8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1cfacc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfad0: 0x24c6fb20  addiu       $a2, $a2, -0x4E0
    ctx->pc = 0x1cfad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966048));
    // 0x1cfad4: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1CFAD4u;
    SET_GPR_U32(ctx, 31, 0x1CFADCu);
    ctx->pc = 0x1CFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAD4u;
    // 0x1cfad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1CFAD4u, 0x1CFADCu)) {
        return;
    }
    ctx->pc = 0x1CFADCu;
label_1cfadc:
    // 0x1cfadc: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1CFADCu;
    SET_GPR_U32(ctx, 31, 0x1CFAE4u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1CFADCu, 0x1CFAE4u)) {
        return;
    }
    ctx->pc = 0x1CFAE4u;
label_1cfae4:
    // 0x1cfae4: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1cfae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfaec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfaf0: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1CFAF0u;
    SET_GPR_U32(ctx, 31, 0x1CFAF8u);
    ctx->pc = 0x1CFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAF0u;
    // 0x1cfaf4: 0x24c6fb78  addiu       $a2, $a2, -0x488 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1CFAF0u, 0x1CFAF8u)) {
        return;
    }
    ctx->pc = 0x1CFAF8u;
label_1cfaf8:
    // 0x1cfaf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFAF8u;
    {
        const bool branch_taken_0x1cfaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF8u;
        // 0x1cfafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaf8) {
            ctx->pc = 0x1CFB08u;
            goto label_1cfb08;
        }
    }
    ctx->pc = 0x1CFB00u;
label_1cfb00:
    // 0x1cfb00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cfb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb08:
    // 0x1cfb08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cfb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfb0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cfb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfb14: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB14u;
        // 0x1cfb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFB1Cu;
    // 0x1cfb1c: 0x0  nop
    ctx->pc = 0x1cfb1cu;
    // NOP
    ctx->pc = 0x1cfb20u;
}
