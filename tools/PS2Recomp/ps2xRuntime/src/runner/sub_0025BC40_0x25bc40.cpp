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

// Function: sub_0025BC40
// Address: 0x25bc40 - 0x25bd50
void sub_0025BC40_0x25bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BC40_0x25bc40");
#endif

    switch (ctx->pc) {
        case 0x25bc88u: goto label_25bc88;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd30u: goto label_25bd30;
        default: break;
    }

    ctx->pc = 0x25bc40u;

label_25bc40:
    // 0x25bc40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25bc44: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x25bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x25bc48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25bc4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x25bc50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25bc50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25bc58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25bc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x25bc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bc60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25bc64: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x25BC64u;
    {
        const bool branch_taken_0x25bc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC64u;
        // 0x25bc68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc64) {
            ctx->pc = 0x25BD30u;
            goto label_25bd30;
        }
    }
    ctx->pc = 0x25BC6Cu;
    // 0x25bc6c: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x25BC6Cu;
    {
        const bool branch_taken_0x25bc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bc6c) {
            ctx->pc = 0x25BC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC6Cu;
            // 0x25bc70: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD0Cu;
            goto label_25bd0c;
        }
    }
    ctx->pc = 0x25BC74u;
    // 0x25bc74: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x25bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x25bc78: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BC78u;
    {
        const bool branch_taken_0x25bc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bc78) {
            ctx->pc = 0x25BC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BC78u;
            // 0x25bc7c: 0x8e500038  lw          $s0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC8Cu;
            goto label_25bc8c;
        }
    }
    ctx->pc = 0x25BC80u;
    // 0x25bc80: 0xc093356  jal         func_24CD58
    ctx->pc = 0x25BC80u;
    SET_GPR_U32(ctx, 31, 0x25BC88u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x25BC80u, 0x25BC88u)) {
        return;
    }
    ctx->pc = 0x25BC88u;
label_25bc88:
    // 0x25bc88: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x25bc88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_25bc8c:
    // 0x25bc8c: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x25bc8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x25bc90: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25BC90u;
    {
        const bool branch_taken_0x25bc90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x25BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC90u;
        // 0x25bc94: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc90) {
            ctx->pc = 0x25BCB8u;
            goto label_25bcb8;
        }
    }
    ctx->pc = 0x25BC98u;
    // 0x25bc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc9c: 0x0  nop
    ctx->pc = 0x25bc9cu;
    // NOP
label_25bca0:
    // 0x25bca0: 0xc0974de  jal         func_25D378
    ctx->pc = 0x25BCA0u;
    SET_GPR_U32(ctx, 31, 0x25BCA8u);
    ctx->pc = 0x25BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCA0u;
    // 0x25bca4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D378u, 0x25BCA0u, 0x25BCA8u)) {
        return;
    }
    ctx->pc = 0x25BCA8u;
label_25bca8:
    // 0x25bca8: 0x0  nop
    ctx->pc = 0x25bca8u;
    // NOP
    // 0x25bcac: 0x0  nop
    ctx->pc = 0x25bcacu;
    // NOP
    // 0x25bcb0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25BCB0u;
    {
        const bool branch_taken_0x25bcb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x25BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCB0u;
        // 0x25bcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bcb0) {
            ctx->pc = 0x25BCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bca0;
        }
    }
    ctx->pc = 0x25BCB8u;
label_25bcb8:
    // 0x25bcb8: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x25bcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x25bcbc: 0x12130009  beq         $s0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x25BCBCu;
    {
        const bool branch_taken_0x25bcbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x25BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCBCu;
        // 0x25bcc0: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bcbc) {
            ctx->pc = 0x25BCE4u;
            goto label_25bce4;
        }
    }
    ctx->pc = 0x25BCC4u;
    // 0x25bcc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bcc8:
    // 0x25bcc8: 0xc0974c2  jal         func_25D308
    ctx->pc = 0x25BCC8u;
    SET_GPR_U32(ctx, 31, 0x25BCD0u);
    ctx->pc = 0x25BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCC8u;
    // 0x25bccc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D308u, 0x25BCC8u, 0x25BCD0u)) {
        return;
    }
    ctx->pc = 0x25BCD0u;
label_25bcd0:
    // 0x25bcd0: 0x0  nop
    ctx->pc = 0x25bcd0u;
    // NOP
    // 0x25bcd4: 0x0  nop
    ctx->pc = 0x25bcd4u;
    // NOP
    // 0x25bcd8: 0x5613fffb  bnel        $s0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25BCD8u;
    {
        const bool branch_taken_0x25bcd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x25bcd8) {
            ctx->pc = 0x25BCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BCD8u;
            // 0x25bcdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bcc8;
        }
    }
    ctx->pc = 0x25BCE0u;
    // 0x25bce0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x25bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_25bce4:
    // 0x25bce4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bce8: 0xc09397e  jal         func_24E5F8
    ctx->pc = 0x25BCE8u;
    SET_GPR_U32(ctx, 31, 0x25BCF0u);
    ctx->pc = 0x25BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCE8u;
    // 0x25bcec: 0x24841280  addiu       $a0, $a0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x25BCE8u, 0x25BCF0u)) {
        return;
    }
    ctx->pc = 0x25BCF0u;
label_25bcf0:
    // 0x25bcf0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x25bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x25bcf4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x25BCF4u;
    {
        const bool branch_taken_0x25bcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCF4u;
        // 0x25bcf8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bcf4) {
            ctx->pc = 0x25BD34u;
            goto label_25bd34;
        }
    }
    ctx->pc = 0x25BCFCu;
    // 0x25bcfc: 0xc096264  jal         func_258990
    ctx->pc = 0x25BCFCu;
    SET_GPR_U32(ctx, 31, 0x25BD04u);
    ctx->pc = 0x258990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258990u, 0x25BCFCu, 0x25BD04u)) {
        return;
    }
    ctx->pc = 0x25BD04u;
label_25bd04:
    // 0x25bd04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25BD04u;
    {
        const bool branch_taken_0x25bd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD04u;
        // 0x25bd08: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd04) {
            ctx->pc = 0x25BD30u;
            goto label_25bd30;
        }
    }
    ctx->pc = 0x25BD0Cu;
label_25bd0c:
    // 0x25bd0c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BD0Cu;
    {
        const bool branch_taken_0x25bd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd0c) {
            ctx->pc = 0x25BD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BD0Cu;
            // 0x25bd10: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BD20u;
            goto label_25bd20;
        }
    }
    ctx->pc = 0x25BD14u;
    // 0x25bd14: 0xc096f10  jal         func_25BC40
    ctx->pc = 0x25BD14u;
    SET_GPR_U32(ctx, 31, 0x25BD1Cu);
    ctx->pc = 0x25BC40u;
    goto label_25bc40;
    ctx->pc = 0x25BD1Cu;
label_25bd1c:
    // 0x25bd1c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x25bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_25bd20:
    // 0x25bd20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BD20u;
    {
        const bool branch_taken_0x25bd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD20u;
        // 0x25bd24: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd20) {
            ctx->pc = 0x25BD34u;
            goto label_25bd34;
        }
    }
    ctx->pc = 0x25BD28u;
    // 0x25bd28: 0xc096f10  jal         func_25BC40
    ctx->pc = 0x25BD28u;
    SET_GPR_U32(ctx, 31, 0x25BD30u);
    ctx->pc = 0x25BC40u;
    goto label_25bc40;
    ctx->pc = 0x25BD30u;
label_25bd30:
    // 0x25bd30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25bd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25bd34:
    // 0x25bd34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25bd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bd38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25bd38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bd3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25bd3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bd44: 0x3e00008  jr          $ra
    ctx->pc = 0x25BD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD44u;
        // 0x25bd48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BD4Cu;
    // 0x25bd4c: 0x0  nop
    ctx->pc = 0x25bd4cu;
    // NOP
    ctx->pc = 0x25bd50u;
}
