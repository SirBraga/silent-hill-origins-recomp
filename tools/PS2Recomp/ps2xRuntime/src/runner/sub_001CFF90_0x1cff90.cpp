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

// Function: sub_001CFF90
// Address: 0x1cff90 - 0x1d00d0
void sub_001CFF90_0x1cff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF90_0x1cff90");
#endif

    switch (ctx->pc) {
        case 0x1cffc4u: goto label_1cffc4;
        case 0x1cffd4u: goto label_1cffd4;
        case 0x1cffe8u: goto label_1cffe8;
        case 0x1cfff4u: goto label_1cfff4;
        case 0x1d0028u: goto label_1d0028;
        case 0x1d0058u: goto label_1d0058;
        case 0x1d0088u: goto label_1d0088;
        case 0x1d00b8u: goto label_1d00b8;
        default: break;
    }

    ctx->pc = 0x1cff90u;

    // 0x1cff90: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cff94: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cff98: 0x8c439a08  lw          $v1, -0x65F8($v0)
    ctx->pc = 0x1cff98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339A08u));
    // 0x1cff9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cffa0: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CFFA0u;
    {
        const bool branch_taken_0x1cffa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFA0u;
        // 0x1cffa4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffa0) {
            ctx->pc = 0x1D00B8u;
            goto label_1d00b8;
        }
    }
    ctx->pc = 0x1CFFA8u;
    // 0x1cffa8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cffac: 0x8c509168  lw          $s0, -0x6E98($v0)
    ctx->pc = 0x1cffacu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x339168u));
    // 0x1cffb0: 0x8e030244  lw          $v1, 0x244($s0)
    ctx->pc = 0x1cffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1cffb4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFFB4u;
    {
        const bool branch_taken_0x1cffb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFB4u;
        // 0x1cffb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffb4) {
            ctx->pc = 0x1CFFDCu;
            goto label_1cffdc;
        }
    }
    ctx->pc = 0x1CFFBCu;
    // 0x1cffbc: 0xc0603b6  jal         func_180ED8
    ctx->pc = 0x1CFFBCu;
    SET_GPR_U32(ctx, 31, 0x1CFFC4u);
    ctx->pc = 0x180ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180ED8u, 0x1CFFBCu, 0x1CFFC4u)) {
        return;
    }
    ctx->pc = 0x1CFFC4u;
label_1cffc4:
    // 0x1cffc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cffc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffcc: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CFFCCu;
    SET_GPR_U32(ctx, 31, 0x1CFFD4u);
    ctx->pc = 0x1CFFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFCCu;
    // 0x1cffd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CFFCCu, 0x1CFFD4u)) {
        return;
    }
    ctx->pc = 0x1CFFD4u;
label_1cffd4:
    // 0x1cffd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFFD4u;
    {
        const bool branch_taken_0x1cffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFD4u;
        // 0x1cffd8: 0xae000244  sw          $zero, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffd4) {
            ctx->pc = 0x1CFFE8u;
            goto label_1cffe8;
        }
    }
    ctx->pc = 0x1CFFDCu;
label_1cffdc:
    // 0x1cffdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cffdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffe0: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CFFE0u;
    SET_GPR_U32(ctx, 31, 0x1CFFE8u);
    ctx->pc = 0x1CFFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFE0u;
    // 0x1cffe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CFFE0u, 0x1CFFE8u)) {
        return;
    }
    ctx->pc = 0x1CFFE8u;
label_1cffe8:
    // 0x1cffe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cffec: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x1CFFECu;
    SET_GPR_U32(ctx, 31, 0x1CFFF4u);
    ctx->pc = 0x1CFFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFECu;
    // 0x1cfff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1CFFECu, 0x1CFFF4u)) {
        return;
    }
    ctx->pc = 0x1CFFF4u;
label_1cfff4:
    // 0x1cfff4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1cfff8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1cfff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1cfffc: 0x8c644330  lw          $a0, 0x4330($v1)
    ctx->pc = 0x1cfffcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4330u));
    // 0x1d0000: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d0000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0004: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0004u;
    {
        const bool branch_taken_0x1d0004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0004u;
        // 0x1d0008: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0004) {
            ctx->pc = 0x1D0028u;
            goto label_1d0028;
        }
    }
    ctx->pc = 0x1D000Cu;
    // 0x1d000c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0010: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0010u;
    {
        const bool branch_taken_0x1d0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0010u;
        // 0x1d0014: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0010) {
            ctx->pc = 0x1D002Cu;
            goto label_1d002c;
        }
    }
    ctx->pc = 0x1D0018u;
    // 0x1d0018: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d001c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0020: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0020u;
    SET_GPR_U32(ctx, 31, 0x1D0028u);
    ctx->pc = 0x1D0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0020u;
    // 0x1d0024: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0020u, 0x1D0028u)) {
        return;
    }
    ctx->pc = 0x1D0028u;
label_1d0028:
    // 0x1d0028: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1d002c:
    // 0x1d002c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d0030: 0x8c444340  lw          $a0, 0x4340($v0)
    ctx->pc = 0x1d0030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17216)));
    // 0x1d0034: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0034u;
    {
        const bool branch_taken_0x1d0034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0034u;
        // 0x1d0038: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0034) {
            ctx->pc = 0x1D0060u;
            goto label_1d0060;
        }
    }
    ctx->pc = 0x1D003Cu;
    // 0x1d003c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0040: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0040u;
    {
        const bool branch_taken_0x1d0040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0040u;
        // 0x1d0044: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0040) {
            ctx->pc = 0x1D0060u;
            goto label_1d0060;
        }
    }
    ctx->pc = 0x1D0048u;
    // 0x1d0048: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d004c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0050: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0050u;
    SET_GPR_U32(ctx, 31, 0x1D0058u);
    ctx->pc = 0x1D0054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0050u;
    // 0x1d0054: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0050u, 0x1D0058u)) {
        return;
    }
    ctx->pc = 0x1D0058u;
label_1d0058:
    // 0x1d0058: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d005c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1d0060:
    // 0x1d0060: 0x8c4486c0  lw          $a0, -0x7940($v0)
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936256)));
    // 0x1d0064: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0064u;
    {
        const bool branch_taken_0x1d0064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0064u;
        // 0x1d0068: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0064) {
            ctx->pc = 0x1D008Cu;
            goto label_1d008c;
        }
    }
    ctx->pc = 0x1D006Cu;
    // 0x1d006c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0070: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0070u;
    {
        const bool branch_taken_0x1d0070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0070u;
        // 0x1d0074: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0070) {
            ctx->pc = 0x1D008Cu;
            goto label_1d008c;
        }
    }
    ctx->pc = 0x1D0078u;
    // 0x1d0078: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d007c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0080: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0080u;
    SET_GPR_U32(ctx, 31, 0x1D0088u);
    ctx->pc = 0x1D0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0080u;
    // 0x1d0084: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0080u, 0x1D0088u)) {
        return;
    }
    ctx->pc = 0x1D0088u;
label_1d0088:
    // 0x1d0088: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1d008c:
    // 0x1d008c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d0090: 0x8c4443b8  lw          $a0, 0x43B8($v0)
    ctx->pc = 0x1d0090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
    // 0x1d0094: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0094u;
    {
        const bool branch_taken_0x1d0094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0094u;
        // 0x1d0098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0094) {
            ctx->pc = 0x1D00BCu;
            goto label_1d00bc;
        }
    }
    ctx->pc = 0x1D009Cu;
    // 0x1d009c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d00a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D00A0u;
    {
        const bool branch_taken_0x1d00a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00A0u;
        // 0x1d00a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00a0) {
            ctx->pc = 0x1D00C0u;
            goto label_1d00c0;
        }
    }
    ctx->pc = 0x1D00A8u;
    // 0x1d00a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d00ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d00acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00b0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D00B0u;
    SET_GPR_U32(ctx, 31, 0x1D00B8u);
    ctx->pc = 0x1D00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00B0u;
    // 0x1d00b4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D00B0u, 0x1D00B8u)) {
        return;
    }
    ctx->pc = 0x1D00B8u;
label_1d00b8:
    // 0x1d00b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d00b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d00bc:
    // 0x1d00bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d00bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d00c0:
    // 0x1d00c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d00c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d00c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D00C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00C4u;
        // 0x1d00c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D00C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D00CCu;
    // 0x1d00cc: 0x0  nop
    ctx->pc = 0x1d00ccu;
    // NOP
    ctx->pc = 0x1d00d0u;
}
