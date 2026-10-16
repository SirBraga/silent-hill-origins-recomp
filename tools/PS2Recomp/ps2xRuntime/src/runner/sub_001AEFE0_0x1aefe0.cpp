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

// Function: sub_001AEFE0
// Address: 0x1aefe0 - 0x1af040
void sub_001AEFE0_0x1aefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEFE0_0x1aefe0");
#endif

    switch (ctx->pc) {
        case 0x1aefe0u: goto label_1aefe0;
        case 0x1aefe4u: goto label_1aefe4;
        case 0x1aefe8u: goto label_1aefe8;
        case 0x1aefecu: goto label_1aefec;
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1aeff4u: goto label_1aeff4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1aeffcu: goto label_1aeffc;
        case 0x1af000u: goto label_1af000;
        case 0x1af004u: goto label_1af004;
        case 0x1af008u: goto label_1af008;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af010u: goto label_1af010;
        case 0x1af014u: goto label_1af014;
        case 0x1af018u: goto label_1af018;
        case 0x1af01cu: goto label_1af01c;
        case 0x1af020u: goto label_1af020;
        case 0x1af024u: goto label_1af024;
        case 0x1af028u: goto label_1af028;
        case 0x1af02cu: goto label_1af02c;
        case 0x1af030u: goto label_1af030;
        case 0x1af034u: goto label_1af034;
        case 0x1af038u: goto label_1af038;
        case 0x1af03cu: goto label_1af03c;
        default: break;
    }

    ctx->pc = 0x1aefe0u;

label_1aefe0:
    // 0x1aefe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aefe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aefe4:
    // 0x1aefe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aefe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aefe8:
    // 0x1aefe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aefe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aefec:
    // 0x1aefec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aefecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1aeff0:
    // 0x1aeff0: 0x8c900034  lw          $s0, 0x34($a0)
    ctx->pc = 0x1aeff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1aeff4:
    // 0x1aeff4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1aeff8:
    if (ctx->pc == 0x1AEFF8u) {
        ctx->pc = 0x1AEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFF4u;
        // 0x1aeff8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEFFCu;
        goto label_1aeffc;
    }
    ctx->pc = 0x1AEFF4u;
    {
        const bool branch_taken_0x1aeff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFF4u;
        // 0x1aeff8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeff4) {
            ctx->pc = 0x1AF028u;
            goto label_1af028;
        }
    }
    ctx->pc = 0x1AEFFCu;
label_1aeffc:
    // 0x1aeffc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af000:
    // 0x1af000: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1af004:
    if (ctx->pc == 0x1AF004u) {
        ctx->pc = 0x1AF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF000u;
        // 0x1af004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF008u;
        goto label_1af008;
    }
    ctx->pc = 0x1AF000u;
    {
        const bool branch_taken_0x1af000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF000u;
        // 0x1af004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af000) {
            ctx->pc = 0x1AF01Cu;
            goto label_1af01c;
        }
    }
    ctx->pc = 0x1AF008u;
label_1af008:
    // 0x1af008: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1af008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1af00c:
    // 0x1af00c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1af00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1af010:
    // 0x1af010: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1af010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1af014:
    // 0x1af014: 0x60f809  jalr        $v1
label_1af018:
    if (ctx->pc == 0x1AF018u) {
        ctx->pc = 0x1AF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF014u;
        // 0x1af018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF01Cu;
        goto label_1af01c;
    }
    ctx->pc = 0x1AF014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF01Cu);
        ctx->pc = 0x1AF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF014u;
        // 0x1af018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF014u, 0x1AF01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF01Cu;
label_1af01c:
    // 0x1af01c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1af020:
    // 0x1af020: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_1af024:
    if (ctx->pc == 0x1AF024u) {
        ctx->pc = 0x1AF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF020u;
        // 0x1af024: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF028u;
        goto label_1af028;
    }
    ctx->pc = 0x1AF020u;
    {
        const bool branch_taken_0x1af020 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af020) {
            ctx->pc = 0x1AF024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF020u;
            // 0x1af024: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af000;
        }
    }
    ctx->pc = 0x1AF028u;
label_1af028:
    // 0x1af028: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af02c:
    // 0x1af02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af030:
    // 0x1af030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af034:
    // 0x1af034: 0x3e00008  jr          $ra
label_1af038:
    if (ctx->pc == 0x1AF038u) {
        ctx->pc = 0x1AF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF034u;
        // 0x1af038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF03Cu;
        goto label_1af03c;
    }
    ctx->pc = 0x1AF034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF034u;
        // 0x1af038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF03Cu;
label_1af03c:
    // 0x1af03c: 0x0  nop
    ctx->pc = 0x1af03cu;
    // NOP
    ctx->pc = 0x1af040u;
}
