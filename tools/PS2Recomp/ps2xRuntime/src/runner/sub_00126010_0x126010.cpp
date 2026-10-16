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

// Function: sub_00126010
// Address: 0x126010 - 0x126098
void sub_00126010_0x126010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126010_0x126010");
#endif

    switch (ctx->pc) {
        case 0x126010u: goto label_126010;
        case 0x126014u: goto label_126014;
        case 0x126018u: goto label_126018;
        case 0x12601cu: goto label_12601c;
        case 0x126020u: goto label_126020;
        case 0x126024u: goto label_126024;
        case 0x126028u: goto label_126028;
        case 0x12602cu: goto label_12602c;
        case 0x126030u: goto label_126030;
        case 0x126034u: goto label_126034;
        case 0x126038u: goto label_126038;
        case 0x12603cu: goto label_12603c;
        case 0x126040u: goto label_126040;
        case 0x126044u: goto label_126044;
        case 0x126048u: goto label_126048;
        case 0x12604cu: goto label_12604c;
        case 0x126050u: goto label_126050;
        case 0x126054u: goto label_126054;
        case 0x126058u: goto label_126058;
        case 0x12605cu: goto label_12605c;
        case 0x126060u: goto label_126060;
        case 0x126064u: goto label_126064;
        case 0x126068u: goto label_126068;
        case 0x12606cu: goto label_12606c;
        case 0x126070u: goto label_126070;
        case 0x126074u: goto label_126074;
        case 0x126078u: goto label_126078;
        case 0x12607cu: goto label_12607c;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x126088u: goto label_126088;
        case 0x12608cu: goto label_12608c;
        case 0x126090u: goto label_126090;
        case 0x126094u: goto label_126094;
        default: break;
    }

    ctx->pc = 0x126010u;

label_126010:
    // 0x126010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_126014:
    // 0x126014: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x126014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_126018:
    // 0x126018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12601c:
    // 0x12601c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126020:
    // 0x126020: 0x8e020df0  lw          $v0, 0xDF0($s0)
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3568)));
label_126024:
    // 0x126024: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_126028:
    if (ctx->pc == 0x126028u) {
        ctx->pc = 0x126028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126024u;
        // 0x126028: 0xae000cd4  sw          $zero, 0xCD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12602Cu;
        goto label_12602c;
    }
    ctx->pc = 0x126024u;
    {
        const bool branch_taken_0x126024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126024) {
            ctx->pc = 0x126028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126024u;
            // 0x126028: 0xae000cd4  sw          $zero, 0xCD4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126084u;
            goto label_126084;
        }
    }
    ctx->pc = 0x12602Cu;
label_12602c:
    // 0x12602c: 0x50c00015  beql        $a2, $zero, . + 4 + (0x15 << 2)
label_126030:
    if (ctx->pc == 0x126030u) {
        ctx->pc = 0x126030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12602Cu;
        // 0x126030: 0xae000cd4  sw          $zero, 0xCD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126034u;
        goto label_126034;
    }
    ctx->pc = 0x12602Cu;
    {
        const bool branch_taken_0x12602c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12602c) {
            ctx->pc = 0x126030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12602Cu;
            // 0x126030: 0xae000cd4  sw          $zero, 0xCD4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126084u;
            goto label_126084;
        }
    }
    ctx->pc = 0x126034u;
label_126034:
    // 0x126034: 0x8e020c94  lw          $v0, 0xC94($s0)
    ctx->pc = 0x126034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3220)));
label_126038:
    // 0x126038: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_12603c:
    if (ctx->pc == 0x12603Cu) {
        ctx->pc = 0x12603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126038u;
        // 0x12603c: 0xae000cd4  sw          $zero, 0xCD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126040u;
        goto label_126040;
    }
    ctx->pc = 0x126038u;
    {
        const bool branch_taken_0x126038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126038) {
            ctx->pc = 0x12603Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126038u;
            // 0x12603c: 0xae000cd4  sw          $zero, 0xCD4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126084u;
            goto label_126084;
        }
    }
    ctx->pc = 0x126040u;
label_126040:
    // 0x126040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126044:
    // 0x126044: 0xae020cd4  sw          $v0, 0xCD4($s0)
    ctx->pc = 0x126044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 2));
label_126048:
    // 0x126048: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x126048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_12604c:
    // 0x12604c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_126050:
    if (ctx->pc == 0x126050u) {
        ctx->pc = 0x126050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12604Cu;
        // 0x126050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126054u;
        goto label_126054;
    }
    ctx->pc = 0x12604Cu;
    {
        const bool branch_taken_0x12604c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12604Cu;
        // 0x126050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12604c) {
            ctx->pc = 0x126084u;
            goto label_126084;
        }
    }
    ctx->pc = 0x126054u;
label_126054:
    // 0x126054: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_126058:
    // 0x126058: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_12605c:
    if (ctx->pc == 0x12605Cu) {
        ctx->pc = 0x12605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126058u;
        // 0x12605c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126060u;
        goto label_126060;
    }
    ctx->pc = 0x126058u;
    {
        const bool branch_taken_0x126058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x126058) {
            ctx->pc = 0x12605Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126058u;
            // 0x12605c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126088u;
            goto label_126088;
        }
    }
    ctx->pc = 0x126060u;
label_126060:
    // 0x126060: 0x24a5ffbc  addiu       $a1, $a1, -0x44
    ctx->pc = 0x126060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967228));
label_126064:
    // 0x126064: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x126064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_126068:
    // 0x126068: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x126068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_12606c:
    // 0x12606c: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_126070:
    // 0x126070: 0x40f809  jalr        $v0
label_126074:
    if (ctx->pc == 0x126074u) {
        ctx->pc = 0x126074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126070u;
        // 0x126074: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126078u;
        goto label_126078;
    }
    ctx->pc = 0x126070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126078u);
        ctx->pc = 0x126074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126070u;
        // 0x126074: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126070u, 0x126078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_12607c:
    if (ctx->pc == 0x12607Cu) {
        ctx->pc = 0x12607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126078u;
        // 0x12607c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126080u;
        goto label_126080;
    }
    ctx->pc = 0x126078u;
    {
        const bool branch_taken_0x126078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126078) {
            ctx->pc = 0x12607Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126078u;
            // 0x12607c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126088u;
            goto label_126088;
        }
    }
    ctx->pc = 0x126080u;
label_126080:
    // 0x126080: 0xae000cd4  sw          $zero, 0xCD4($s0)
    ctx->pc = 0x126080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
label_126084:
    // 0x126084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126088:
    // 0x126088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12608c:
    // 0x12608c: 0x3e00008  jr          $ra
label_126090:
    if (ctx->pc == 0x126090u) {
        ctx->pc = 0x126090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12608Cu;
        // 0x126090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126094u;
        goto label_126094;
    }
    ctx->pc = 0x12608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12608Cu;
        // 0x126090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126094u;
label_126094:
    // 0x126094: 0x0  nop
    ctx->pc = 0x126094u;
    // NOP
    ctx->pc = 0x126098u;
}
