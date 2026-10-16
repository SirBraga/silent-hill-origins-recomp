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

// Function: sub_0016BCE8
// Address: 0x16bce8 - 0x16bd58
void sub_0016BCE8_0x16bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BCE8_0x16bce8");
#endif

    switch (ctx->pc) {
        case 0x16bd28u: goto label_16bd28;
        default: break;
    }

    ctx->pc = 0x16bce8u;

    // 0x16bce8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x16bcec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bcecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bcf0: 0x8c45bda8  lw          $a1, -0x4258($v0)
    ctx->pc = 0x16bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6CBDA8u));
    // 0x16bcf4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16bcf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16bcfc: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x16bd00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bd08: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x16bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x16bd0c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BD0Cu;
    {
        const bool branch_taken_0x16bd0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD0Cu;
        // 0x16bd10: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd0c) {
            ctx->pc = 0x16BD28u;
            goto label_16bd28;
        }
    }
    ctx->pc = 0x16BD14u;
    // 0x16bd14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bd18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD18u;
    {
        const bool branch_taken_0x16bd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd18) {
            ctx->pc = 0x16BD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BD18u;
            // 0x16bd1c: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BD2Cu;
            goto label_16bd2c;
        }
    }
    ctx->pc = 0x16BD20u;
    // 0x16bd20: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16BD20u;
    SET_GPR_U32(ctx, 31, 0x16BD28u);
    ctx->pc = 0x16BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BD20u;
    // 0x16bd24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16BD20u, 0x16BD28u)) {
        return;
    }
    ctx->pc = 0x16BD28u;
label_16bd28:
    // 0x16bd28: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x16bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_16bd2c:
    // 0x16bd2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x16bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16bd30: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x16bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x16bd34: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x16bd34u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x16bd38: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x16bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x16bd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16bd40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16bd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bd44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16bd48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16bd4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16bd50: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD50u;
        // 0x16bd54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD58u;
}
