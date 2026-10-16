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

// Function: sub_0022CA10
// Address: 0x22ca10 - 0x22cab8
void sub_0022CA10_0x22ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CA10_0x22ca10");
#endif

    switch (ctx->pc) {
        case 0x22ca50u: goto label_22ca50;
        case 0x22ca64u: goto label_22ca64;
        case 0x22ca8cu: goto label_22ca8c;
        default: break;
    }

    ctx->pc = 0x22ca10u;

label_22ca10:
    // 0x22ca10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22ca14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22ca18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22ca1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22ca1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22ca24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ca24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22ca2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ca2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22ca34: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22CA34u;
    {
        const bool branch_taken_0x22ca34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA34u;
        // 0x22ca38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca34) {
            ctx->pc = 0x22CA94u;
            goto label_22ca94;
        }
    }
    ctx->pc = 0x22CA3Cu;
    // 0x22ca3c: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x22CA3Cu;
    {
        const bool branch_taken_0x22ca3c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x22CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA3Cu;
        // 0x22ca40: 0x24f4ffff  addiu       $s4, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca3c) {
            ctx->pc = 0x22CA7Cu;
            goto label_22ca7c;
        }
    }
    ctx->pc = 0x22CA44u;
    // 0x22ca44: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x22ca44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x22ca48: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x22ca48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22ca4c: 0x0  nop
    ctx->pc = 0x22ca4cu;
    // NOP
label_22ca50:
    // 0x22ca50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ca54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ca54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22ca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca5c: 0xc08b284  jal         func_22CA10
    ctx->pc = 0x22CA5Cu;
    SET_GPR_U32(ctx, 31, 0x22CA64u);
    ctx->pc = 0x22CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA5Cu;
    // 0x22ca60: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CA10u;
    goto label_22ca10;
    ctx->pc = 0x22CA64u;
label_22ca64:
    // 0x22ca64: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22ca64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x22ca68: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22ca68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x22ca6c: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22CA6Cu;
    {
        const bool branch_taken_0x22ca6c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x22CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA6Cu;
        // 0x22ca70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca6c) {
            ctx->pc = 0x22CA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ca50;
        }
    }
    ctx->pc = 0x22CA74u;
    // 0x22ca74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22CA74u;
    {
        const bool branch_taken_0x22ca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA74u;
        // 0x22ca78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca74) {
            ctx->pc = 0x22CA98u;
            goto label_22ca98;
        }
    }
    ctx->pc = 0x22CA7Cu;
label_22ca7c:
    // 0x22ca7c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x22ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ca80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ca84: 0xc08af0e  jal         func_22BC38
    ctx->pc = 0x22CA84u;
    SET_GPR_U32(ctx, 31, 0x22CA8Cu);
    ctx->pc = 0x22CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA84u;
    // 0x22ca88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BC38u, 0x22CA84u, 0x22CA8Cu)) {
        return;
    }
    ctx->pc = 0x22CA8Cu;
label_22ca8c:
    // 0x22ca8c: 0xa2300018  sb          $s0, 0x18($s1)
    ctx->pc = 0x22ca8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 16));
    // 0x22ca90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22ca90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22ca94:
    // 0x22ca94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ca98:
    // 0x22ca98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22ca98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ca9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22ca9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22caa0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22caa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22caa4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22caa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22caa8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22caa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22caac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22caacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cab0: 0x3e00008  jr          $ra
    ctx->pc = 0x22CAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAB0u;
        // 0x22cab4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CAB8u;
}
