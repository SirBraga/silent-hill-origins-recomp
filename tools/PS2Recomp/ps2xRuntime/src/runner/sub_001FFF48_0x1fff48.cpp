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

// Function: sub_001FFF48
// Address: 0x1fff48 - 0x2000b0
void sub_001FFF48_0x1fff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFF48_0x1fff48");
#endif

    switch (ctx->pc) {
        case 0x1fff78u: goto label_1fff78;
        case 0x1fffb4u: goto label_1fffb4;
        case 0x200008u: goto label_200008;
        case 0x200038u: goto label_200038;
        case 0x200070u: goto label_200070;
        default: break;
    }

    ctx->pc = 0x1fff48u;

    // 0x1fff48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fff4c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1fff4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fff50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fff54: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fff54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fff5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fff5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff60: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fff64: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FFF64u;
    {
        const bool branch_taken_0x1fff64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF64u;
        // 0x1fff68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff64) {
            ctx->pc = 0x1FFF94u;
            goto label_1fff94;
        }
    }
    ctx->pc = 0x1FFF6Cu;
    // 0x1fff6c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1fff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fff70: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fff70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff74: 0x0  nop
    ctx->pc = 0x1fff74u;
    // NOP
label_1fff78:
    // 0x1fff78: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1fff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1fff7c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fff7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fff80: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFF80u;
    {
        const bool branch_taken_0x1fff80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff80) {
            ctx->pc = 0x1FFF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF80u;
            // 0x1fff84: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF8Cu;
            goto label_1fff8c;
        }
    }
    ctx->pc = 0x1FFF88u;
    // 0x1fff88: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1fff8c:
    // 0x1fff8c: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFF8Cu;
    {
        const bool branch_taken_0x1fff8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff8c) {
            ctx->pc = 0x1FFF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF8Cu;
            // 0x1fff90: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fff78;
        }
    }
    ctx->pc = 0x1FFF94u;
label_1fff94:
    // 0x1fff94: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FFF94u;
    {
        const bool branch_taken_0x1fff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF94u;
        // 0x1fff98: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff94) {
            ctx->pc = 0x200050u;
            goto label_200050;
        }
    }
    ctx->pc = 0x1FFF9Cu;
    // 0x1fff9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fffa0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fffa4: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFFA4u;
    {
        const bool branch_taken_0x1fffa4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFA4u;
        // 0x1fffa8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffa4) {
            ctx->pc = 0x1FFFBCu;
            goto label_1fffbc;
        }
    }
    ctx->pc = 0x1FFFACu;
    // 0x1fffac: 0xc07feee  jal         func_1FFBB8
    ctx->pc = 0x1FFFACu;
    SET_GPR_U32(ctx, 31, 0x1FFFB4u);
    ctx->pc = 0x1FFFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFACu;
    // 0x1fffb0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFBB8u, 0x1FFFACu, 0x1FFFB4u)) {
        return;
    }
    ctx->pc = 0x1FFFB4u;
label_1fffb4:
    // 0x1fffb4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1FFFB4u;
    {
        const bool branch_taken_0x1fffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFB4u;
        // 0x1fffb8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffb4) {
            ctx->pc = 0x200074u;
            goto label_200074;
        }
    }
    ctx->pc = 0x1FFFBCu;
label_1fffbc:
    // 0x1fffbc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fffc0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFFC0u;
    {
        const bool branch_taken_0x1fffc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFC0u;
        // 0x1fffc4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffc0) {
            ctx->pc = 0x1FFFE4u;
            goto label_1fffe4;
        }
    }
    ctx->pc = 0x1FFFC8u;
    // 0x1fffc8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1fffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fffcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fffd0: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFFD0u;
    {
        const bool branch_taken_0x1fffd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1fffd0) {
            ctx->pc = 0x1FFFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFD0u;
            // 0x1fffd4: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFE8u;
            goto label_1fffe8;
        }
    }
    ctx->pc = 0x1FFFD8u;
    // 0x1fffd8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1fffdc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FFFDCu;
    {
        const bool branch_taken_0x1fffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFDCu;
        // 0x1fffe0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffdc) {
            ctx->pc = 0x200050u;
            goto label_200050;
        }
    }
    ctx->pc = 0x1FFFE4u;
label_1fffe4:
    // 0x1fffe4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1fffe8:
    // 0x1fffe8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fffec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFFECu;
    {
        const bool branch_taken_0x1fffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fffec) {
            ctx->pc = 0x1FFFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFECu;
            // 0x1ffff0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200028u;
            goto label_200028;
        }
    }
    ctx->pc = 0x1FFFF4u;
    // 0x1ffff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffff8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ffff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ffffc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FFFFCu;
    {
        const bool branch_taken_0x1ffffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffffc) {
            ctx->pc = 0x200000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFFCu;
            // 0x200000: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200050u;
            goto label_200050;
        }
    }
    ctx->pc = 0x200004u;
    // 0x200004: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_200008:
    // 0x200008: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x200008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20000c: 0x0  nop
    ctx->pc = 0x20000cu;
    // NOP
    // 0x200010: 0x0  nop
    ctx->pc = 0x200010u;
    // NOP
    // 0x200014: 0x0  nop
    ctx->pc = 0x200014u;
    // NOP
    // 0x200018: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200018u;
    {
        const bool branch_taken_0x200018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200018) {
            ctx->pc = 0x20001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200018u;
            // 0x20001c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200008;
        }
    }
    ctx->pc = 0x200020u;
    // 0x200020: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x200020u;
    {
        const bool branch_taken_0x200020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200020u;
        // 0x200024: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200020) {
            ctx->pc = 0x200050u;
            goto label_200050;
        }
    }
    ctx->pc = 0x200028u;
label_200028:
    // 0x200028: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20002c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20002Cu;
    {
        const bool branch_taken_0x20002c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20002Cu;
        // 0x200030: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20002c) {
            ctx->pc = 0x200050u;
            goto label_200050;
        }
    }
    ctx->pc = 0x200034u;
    // 0x200034: 0x0  nop
    ctx->pc = 0x200034u;
    // NOP
label_200038:
    // 0x200038: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20003c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x200040: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200044: 0x0  nop
    ctx->pc = 0x200044u;
    // NOP
    // 0x200048: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200048u;
    {
        const bool branch_taken_0x200048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200048u;
        // 0x20004c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200048) {
            ctx->pc = 0x200038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200038;
        }
    }
    ctx->pc = 0x200050u;
label_200050:
    // 0x200050: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200054: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x200054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200058: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20005c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x20005cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x200060: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x200060u;
    {
        const bool branch_taken_0x200060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200060) {
            ctx->pc = 0x200064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200060u;
            // 0x200064: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200084u;
            goto label_200084;
        }
    }
    ctx->pc = 0x200068u;
    // 0x200068: 0xc07feee  jal         func_1FFBB8
    ctx->pc = 0x200068u;
    SET_GPR_U32(ctx, 31, 0x200070u);
    ctx->pc = 0x20006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200068u;
    // 0x20006c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFBB8u, 0x200068u, 0x200070u)) {
        return;
    }
    ctx->pc = 0x200070u;
label_200070:
    // 0x200070: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_200074:
    // 0x200074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200078: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x200078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20007c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20007Cu;
    {
        const bool branch_taken_0x20007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20007Cu;
        // 0x200080: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20007c) {
            ctx->pc = 0x200088u;
            goto label_200088;
        }
    }
    ctx->pc = 0x200084u;
label_200084:
    // 0x200084: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x200084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_200088:
    // 0x200088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20008c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200090: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200094: 0x3e00008  jr          $ra
    ctx->pc = 0x200094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200094u;
        // 0x200098: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20009Cu;
    // 0x20009c: 0x0  nop
    ctx->pc = 0x20009cu;
    // NOP
    // 0x2000a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2000a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2000a4: 0x0  nop
    ctx->pc = 0x2000a4u;
    // NOP
    // 0x2000a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2000a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2000ac: 0x0  nop
    ctx->pc = 0x2000acu;
    // NOP
    ctx->pc = 0x2000b0u;
}
