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

// Function: sub_002EFF48
// Address: 0x2eff48 - 0x2f0030
void sub_002EFF48_0x2eff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFF48_0x2eff48");
#endif

    switch (ctx->pc) {
        case 0x2eff7cu: goto label_2eff7c;
        case 0x2eff8cu: goto label_2eff8c;
        case 0x2eff98u: goto label_2eff98;
        case 0x2effb8u: goto label_2effb8;
        case 0x2effc8u: goto label_2effc8;
        case 0x2effdcu: goto label_2effdc;
        default: break;
    }

    ctx->pc = 0x2eff48u;

    // 0x2eff48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2eff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2eff4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2eff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eff50: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2eff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2eff54: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2eff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2eff58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2eff58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2eff5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff60: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2eff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2eff64: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2eff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2eff68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2eff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2eff6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2eff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2eff70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eff74: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2EFF74u;
    SET_GPR_U32(ctx, 31, 0x2EFF7Cu);
    ctx->pc = 0x2EFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF74u;
    // 0x2eff78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2EFF74u, 0x2EFF7Cu)) {
        return;
    }
    ctx->pc = 0x2EFF7Cu;
label_2eff7c:
    // 0x2eff7c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EFF7Cu;
    {
        const bool branch_taken_0x2eff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF7Cu;
        // 0x2eff80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff7c) {
            ctx->pc = 0x2F000Cu;
            goto label_2f000c;
        }
    }
    ctx->pc = 0x2EFF84u;
    // 0x2eff84: 0xc0bbcfc  jal         func_2EF3F0
    ctx->pc = 0x2EFF84u;
    SET_GPR_U32(ctx, 31, 0x2EFF8Cu);
    ctx->pc = 0x2EFF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF84u;
    // 0x2eff88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF3F0u, 0x2EFF84u, 0x2EFF8Cu)) {
        return;
    }
    ctx->pc = 0x2EFF8Cu;
label_2eff8c:
    // 0x2eff8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2eff8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff90: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFF90u;
    {
        const bool branch_taken_0x2eff90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff90) {
            ctx->pc = 0x2EFF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF90u;
            // 0x2eff94: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFA0u;
            goto label_2effa0;
        }
    }
    ctx->pc = 0x2EFF98u;
label_2eff98:
    // 0x2eff98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EFF98u;
    {
        const bool branch_taken_0x2eff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF98u;
        // 0x2eff9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff98) {
            ctx->pc = 0x2F000Cu;
            goto label_2f000c;
        }
    }
    ctx->pc = 0x2EFFA0u;
label_2effa0:
    // 0x2effa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2effa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2effa4: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x2effa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
    // 0x2effa8: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EFFA8u;
    {
        const bool branch_taken_0x2effa8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFA8u;
        // 0x2effac: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effa8) {
            ctx->pc = 0x2F0008u;
            goto label_2f0008;
        }
    }
    ctx->pc = 0x2EFFB0u;
    // 0x2effb0: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x2effb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2effb4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2effb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2effb8:
    // 0x2effb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2effb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2effbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2effbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2effc0: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x2EFFC0u;
    SET_GPR_U32(ctx, 31, 0x2EFFC8u);
    ctx->pc = 0x2EFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFC0u;
    // 0x2effc4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x2EFFC0u, 0x2EFFC8u)) {
        return;
    }
    ctx->pc = 0x2EFFC8u;
label_2effc8:
    // 0x2effc8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2EFFC8u;
    {
        const bool branch_taken_0x2effc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFC8u;
        // 0x2effcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effc8) {
            ctx->pc = 0x2EFF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eff98;
        }
    }
    ctx->pc = 0x2EFFD0u;
    // 0x2effd0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2effd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2effd4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2EFFD4u;
    SET_GPR_U32(ctx, 31, 0x2EFFDCu);
    ctx->pc = 0x2EFFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFD4u;
    // 0x2effd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2EFFD4u, 0x2EFFDCu)) {
        return;
    }
    ctx->pc = 0x2EFFDCu;
label_2effdc:
    // 0x2effdc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EFFDCu;
    {
        const bool branch_taken_0x2effdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFDCu;
        // 0x2effe0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effdc) {
            ctx->pc = 0x2EFF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eff98;
        }
    }
    ctx->pc = 0x2EFFE4u;
    // 0x2effe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2effe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2effe8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2effe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2effec: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2effecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2efff0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2efff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2efff4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2efff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2efff8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2efff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2efffc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2efffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f0000: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F0000u;
    {
        const bool branch_taken_0x2f0000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0000u;
        // 0x2f0004: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0000) {
            ctx->pc = 0x2EFFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2effb8;
        }
    }
    ctx->pc = 0x2F0008u;
label_2f0008:
    // 0x2f0008: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2f0008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f000c:
    // 0x2f000c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f000cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0010: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f0010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f0014: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f0014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0018: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f001c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2f001cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0020: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2f0020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0028: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0028u;
        // 0x2f002c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0030u;
}
