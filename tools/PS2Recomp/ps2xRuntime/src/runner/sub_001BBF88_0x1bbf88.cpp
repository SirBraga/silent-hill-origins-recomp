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

// Function: sub_001BBF88
// Address: 0x1bbf88 - 0x1bc0a8
void sub_001BBF88_0x1bbf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBF88_0x1bbf88");
#endif

    switch (ctx->pc) {
        case 0x1bbfc0u: goto label_1bbfc0;
        case 0x1bbff0u: goto label_1bbff0;
        case 0x1bc004u: goto label_1bc004;
        case 0x1bc038u: goto label_1bc038;
        case 0x1bc070u: goto label_1bc070;
        case 0x1bc07cu: goto label_1bc07c;
        case 0x1bc08cu: goto label_1bc08c;
        default: break;
    }

    ctx->pc = 0x1bbf88u;

    // 0x1bbf88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bbf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bbf8c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bbf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1bbf90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bbf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bbf94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bbf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bbf9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bbf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfa0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bbfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1bbfa4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1bbfa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bbfa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bbfac: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1bbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1bbfb0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bbfb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBFB4u;
    {
        const bool branch_taken_0x1bbfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFB4u;
        // 0x1bbfb8: 0x3c130070  lui         $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfb4) {
            ctx->pc = 0x1BBFD8u;
            goto label_1bbfd8;
        }
    }
    ctx->pc = 0x1BBFBCu;
    // 0x1bbfbc: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1bbfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1bbfc0:
    // 0x1bbfc0: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBFC0u;
    {
        const bool branch_taken_0x1bbfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbfc0) {
            ctx->pc = 0x1BBFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBFC0u;
            // 0x1bbfc4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBFE0u;
            goto label_1bbfe0;
        }
    }
    ctx->pc = 0x1BBFC8u;
    // 0x1bbfc8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bbfcc: 0x0  nop
    ctx->pc = 0x1bbfccu;
    // NOP
    // 0x1bbfd0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BBFD0u;
    {
        const bool branch_taken_0x1bbfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFD0u;
        // 0x1bbfd4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfd0) {
            ctx->pc = 0x1BBFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbfc0;
        }
    }
    ctx->pc = 0x1BBFD8u;
label_1bbfd8:
    // 0x1bbfd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bbfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x0u));
label_1bbfe0:
    // 0x1bbfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfe8: 0xc081b78  jal         func_206DE0
    ctx->pc = 0x1BBFE8u;
    SET_GPR_U32(ctx, 31, 0x1BBFF0u);
    ctx->pc = 0x1BBFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFE8u;
    // 0x1bbfec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206DE0u, 0x1BBFE8u, 0x1BBFF0u)) {
        return;
    }
    ctx->pc = 0x1BBFF0u;
label_1bbff0:
    // 0x1bbff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bbff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbff8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bbffc: 0xc063e10  jal         func_18F840
    ctx->pc = 0x1BBFFCu;
    SET_GPR_U32(ctx, 31, 0x1BC004u);
    ctx->pc = 0x1BC000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFFCu;
    // 0x1bc000: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F840u, 0x1BBFFCu, 0x1BC004u)) {
        return;
    }
    ctx->pc = 0x1BC004u;
label_1bc004:
    // 0x1bc004: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC004u;
    {
        const bool branch_taken_0x1bc004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC004u;
        // 0x1bc008: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc004) {
            ctx->pc = 0x1BC040u;
            goto label_1bc040;
        }
    }
    ctx->pc = 0x1BC00Cu;
    // 0x1bc00c: 0x8e631a70  lw          $v1, 0x1A70($s3)
    ctx->pc = 0x1bc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x1bc010: 0x8c444468  lw          $a0, 0x4468($v0)
    ctx->pc = 0x1bc010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17512)));
    // 0x1bc014: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BC014u;
    {
        const bool branch_taken_0x1bc014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc014) {
            ctx->pc = 0x1BC018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC014u;
            // 0x1bc018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC01Cu;
    // 0x1bc01c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc020: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BC020u;
    {
        const bool branch_taken_0x1bc020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc020) {
            ctx->pc = 0x1BC024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC020u;
            // 0x1bc024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC028u;
    // 0x1bc028: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bc028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bc02c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bc02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc030: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC030u;
    SET_GPR_U32(ctx, 31, 0x1BC038u);
    ctx->pc = 0x1BC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC030u;
    // 0x1bc034: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC030u, 0x1BC038u)) {
        return;
    }
    ctx->pc = 0x1BC038u;
label_1bc038:
    // 0x1bc038: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BC038u;
    {
        const bool branch_taken_0x1bc038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC038u;
        // 0x1bc03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc038) {
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC040u;
label_1bc040:
    // 0x1bc040: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bc040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bc044: 0x8e631a70  lw          $v1, 0x1A70($s3)
    ctx->pc = 0x1bc044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x1bc048: 0x8c4443c0  lw          $a0, 0x43C0($v0)
    ctx->pc = 0x1bc048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B43C0u));
    // 0x1bc04c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC04Cu;
    {
        const bool branch_taken_0x1bc04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc04c) {
            ctx->pc = 0x1BC050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC04Cu;
            // 0x1bc050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC054u;
    // 0x1bc054: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bc054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc058: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC058u;
    {
        const bool branch_taken_0x1bc058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc058) {
            ctx->pc = 0x1BC05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC058u;
            // 0x1bc05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC060u;
    // 0x1bc060: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bc060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bc064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bc064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc068: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC068u;
    SET_GPR_U32(ctx, 31, 0x1BC070u);
    ctx->pc = 0x1BC06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC068u;
    // 0x1bc06c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC068u, 0x1BC070u)) {
        return;
    }
    ctx->pc = 0x1BC070u;
label_1bc070:
    // 0x1bc070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc074:
    // 0x1bc074: 0xc06ef00  jal         func_1BBC00
    ctx->pc = 0x1BC074u;
    SET_GPR_U32(ctx, 31, 0x1BC07Cu);
    ctx->pc = 0x1BC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC074u;
    // 0x1bc078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBC00u, 0x1BC074u, 0x1BC07Cu)) {
        return;
    }
    ctx->pc = 0x1BC07Cu;
label_1bc07c:
    // 0x1bc07c: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC07Cu;
    {
        const bool branch_taken_0x1bc07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc07c) {
            ctx->pc = 0x1BC080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC07Cu;
            // 0x1bc080: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC090u;
            goto label_1bc090;
        }
    }
    ctx->pc = 0x1BC084u;
    // 0x1bc084: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BC084u;
    SET_GPR_U32(ctx, 31, 0x1BC08Cu);
    ctx->pc = 0x1BC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC084u;
    // 0x1bc088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BC084u, 0x1BC08Cu)) {
        return;
    }
    ctx->pc = 0x1BC08Cu;
label_1bc08c:
    // 0x1bc08c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bc08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bc090:
    // 0x1bc090: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bc090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc094: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bc094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc09c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0A0u;
        // 0x1bc0a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC0A8u;
}
