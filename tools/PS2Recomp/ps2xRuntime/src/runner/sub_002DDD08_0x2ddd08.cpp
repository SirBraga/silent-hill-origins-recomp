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

// Function: sub_002DDD08
// Address: 0x2ddd08 - 0x2ddda0
void sub_002DDD08_0x2ddd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDD08_0x2ddd08");
#endif

    switch (ctx->pc) {
        case 0x2ddd64u: goto label_2ddd64;
        default: break;
    }

    ctx->pc = 0x2ddd08u;

    // 0x2ddd08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ddd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ddd0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ddd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ddd10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ddd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ddd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ddd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ddd1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ddd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddd24: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2ddd24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ddd28: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2ddd28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ddd2c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DDD2Cu;
    {
        const bool branch_taken_0x2ddd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD2Cu;
        // 0x2ddd30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd2c) {
            ctx->pc = 0x2DDD84u;
            goto label_2ddd84;
        }
    }
    ctx->pc = 0x2DDD34u;
    // 0x2ddd34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ddd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddd38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ddd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ddd3c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ddd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ddd40: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DDD40u;
    {
        const bool branch_taken_0x2ddd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD40u;
        // 0x2ddd44: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd40) {
            ctx->pc = 0x2DDD88u;
            goto label_2ddd88;
        }
    }
    ctx->pc = 0x2DDD48u;
    // 0x2ddd48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ddd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ddd4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ddd4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ddd50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DDD50u;
    {
        const bool branch_taken_0x2ddd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD50u;
        // 0x2ddd54: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd50) {
            ctx->pc = 0x2DDD88u;
            goto label_2ddd88;
        }
    }
    ctx->pc = 0x2DDD58u;
    // 0x2ddd58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2ddd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ddd5c: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2DDD64u);
    ctx->pc = 0x2DDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD5Cu;
    // 0x2ddd60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDD5Cu, 0x2DDD64u)) {
        return;
    }
    ctx->pc = 0x2DDD64u;
label_2ddd64:
    // 0x2ddd64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDD64u;
    {
        const bool branch_taken_0x2ddd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD64u;
        // 0x2ddd68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd64) {
            ctx->pc = 0x2DDD88u;
            goto label_2ddd88;
        }
    }
    ctx->pc = 0x2DDD6Cu;
    // 0x2ddd6c: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x2ddd6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ddd70: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x2ddd70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ddd74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ddd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ddd78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ddd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ddd7c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2ddd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2ddd80: 0x38720001  xori        $s2, $v1, 0x1
    ctx->pc = 0x2ddd80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2ddd84:
    // 0x2ddd84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ddd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ddd88:
    // 0x2ddd88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ddd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddd8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ddd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddd90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ddd90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD98u;
        // 0x2ddd9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDA0u;
}
