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

// Function: sub_0012BA90
// Address: 0x12ba90 - 0x12bb30
void sub_0012BA90_0x12ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BA90_0x12ba90");
#endif

    switch (ctx->pc) {
        case 0x12bab4u: goto label_12bab4;
        case 0x12bac4u: goto label_12bac4;
        case 0x12bad8u: goto label_12bad8;
        case 0x12baf8u: goto label_12baf8;
        case 0x12bb08u: goto label_12bb08;
        case 0x12bb18u: goto label_12bb18;
        default: break;
    }

    ctx->pc = 0x12ba90u;

    // 0x12ba90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12ba94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12ba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12ba98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ba98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12baa0: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x12baa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x12baa4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12baa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12baac: 0xc049840  jal         func_126100
    ctx->pc = 0x12BAACu;
    SET_GPR_U32(ctx, 31, 0x12BAB4u);
    ctx->pc = 0x12BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAACu;
    // 0x12bab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126100u, 0x12BAACu, 0x12BAB4u)) {
        return;
    }
    ctx->pc = 0x12BAB4u;
label_12bab4:
    // 0x12bab4: 0x26120360  addiu       $s2, $s0, 0x360
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x12bab8: 0xae002bc8  sw          $zero, 0x2BC8($s0)
    ctx->pc = 0x12bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11208), GPR_U32(ctx, 0));
    // 0x12babc: 0xc068218  jal         func_1A0860
    ctx->pc = 0x12BABCu;
    SET_GPR_U32(ctx, 31, 0x12BAC4u);
    ctx->pc = 0x12BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BABCu;
    // 0x12bac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x12BABCu, 0x12BAC4u)) {
        return;
    }
    ctx->pc = 0x12BAC4u;
label_12bac4:
    // 0x12bac4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12bac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bacc: 0x24a5ca00  addiu       $a1, $a1, -0x3600
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953472));
    // 0x12bad0: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x12BAD0u;
    SET_GPR_U32(ctx, 31, 0x12BAD8u);
    ctx->pc = 0x12BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAD0u;
    // 0x12bad4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x12BAD0u, 0x12BAD8u)) {
        return;
    }
    ctx->pc = 0x12BAD8u;
label_12bad8:
    // 0x12bad8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12badc: 0xae022bf0  sw          $v0, 0x2BF0($s0)
    ctx->pc = 0x12badcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11248), GPR_U32(ctx, 2));
    // 0x12bae0: 0x8e220f54  lw          $v0, 0xF54($s1)
    ctx->pc = 0x12bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3924)));
    // 0x12bae4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x12bae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x12bae8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12BAE8u;
    {
        const bool branch_taken_0x12bae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE8u;
        // 0x12baec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bae8) {
            ctx->pc = 0x12BB1Cu;
            goto label_12bb1c;
        }
    }
    ctx->pc = 0x12BAF0u;
    // 0x12baf0: 0xc068218  jal         func_1A0860
    ctx->pc = 0x12BAF0u;
    SET_GPR_U32(ctx, 31, 0x12BAF8u);
    ctx->pc = 0x12BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAF0u;
    // 0x12baf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x12BAF0u, 0x12BAF8u)) {
        return;
    }
    ctx->pc = 0x12BAF8u;
label_12baf8:
    // 0x12baf8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12bafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb00: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x12BB00u;
    SET_GPR_U32(ctx, 31, 0x12BB08u);
    ctx->pc = 0x12BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB00u;
    // 0x12bb04: 0x24a5ca08  addiu       $a1, $a1, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x12BB00u, 0x12BB08u)) {
        return;
    }
    ctx->pc = 0x12BB08u;
label_12bb08:
    // 0x12bb08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BB08u;
    {
        const bool branch_taken_0x12bb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB08u;
        // 0x12bb0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb08) {
            ctx->pc = 0x12BB1Cu;
            goto label_12bb1c;
        }
    }
    ctx->pc = 0x12BB10u;
    // 0x12bb10: 0xc049a70  jal         func_1269C0
    ctx->pc = 0x12BB10u;
    SET_GPR_U32(ctx, 31, 0x12BB18u);
    ctx->pc = 0x12BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB10u;
    // 0x12bb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x12BB10u, 0x12BB18u)) {
        return;
    }
    ctx->pc = 0x12BB18u;
label_12bb18:
    // 0x12bb18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12bb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12bb1c:
    // 0x12bb1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12bb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bb20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12bb20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb28: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB28u;
        // 0x12bb2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB30u;
}
