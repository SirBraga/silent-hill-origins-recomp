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

// Function: sub_002DDAC0
// Address: 0x2ddac0 - 0x2ddb40
void sub_002DDAC0_0x2ddac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDAC0_0x2ddac0");
#endif

    switch (ctx->pc) {
        case 0x2ddae4u: goto label_2ddae4;
        default: break;
    }

    ctx->pc = 0x2ddac0u;

    // 0x2ddac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddac4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ddac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ddac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddad4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ddad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddad8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ddad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ddadc: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDADCu;
    SET_GPR_U32(ctx, 31, 0x2DDAE4u);
    ctx->pc = 0x2DDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDADCu;
    // 0x2ddae0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDADCu, 0x2DDAE4u)) {
        return;
    }
    ctx->pc = 0x2DDAE4u;
label_2ddae4:
    // 0x2ddae4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DDAE4u;
    {
        const bool branch_taken_0x2ddae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAE4u;
        // 0x2ddae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddae4) {
            ctx->pc = 0x2DDB2Cu;
            goto label_2ddb2c;
        }
    }
    ctx->pc = 0x2DDAECu;
    // 0x2ddaec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ddaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ddaf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ddaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddaf4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DDAF4u;
    {
        const bool branch_taken_0x2ddaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAF4u;
        // 0x2ddaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddaf4) {
            ctx->pc = 0x2DDB2Cu;
            goto label_2ddb2c;
        }
    }
    ctx->pc = 0x2DDAFCu;
    // 0x2ddafc: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2ddafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ddb00: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2ddb00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ddb04: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DDB04u;
    {
        const bool branch_taken_0x2ddb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB04u;
        // 0x2ddb08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb04) {
            ctx->pc = 0x2DDB2Cu;
            goto label_2ddb2c;
        }
    }
    ctx->pc = 0x2DDB0Cu;
    // 0x2ddb0c: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x2ddb0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ddb10: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2ddb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2ddb14: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x2ddb14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ddb18: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ddb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ddb1c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2ddb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2ddb20: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDB20u;
    {
        const bool branch_taken_0x2ddb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB20u;
        // 0x2ddb24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb20) {
            ctx->pc = 0x2DDB2Cu;
            goto label_2ddb2c;
        }
    }
    ctx->pc = 0x2DDB28u;
    // 0x2ddb28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ddb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb2c:
    // 0x2ddb2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ddb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddb30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddb30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddb34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddb38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB38u;
        // 0x2ddb3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDB40u;
}
