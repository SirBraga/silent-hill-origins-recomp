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

// Function: sub_002FEF98
// Address: 0x2fef98 - 0x2ff1d8
void sub_002FEF98_0x2fef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEF98_0x2fef98");
#endif

    switch (ctx->pc) {
        case 0x2feff0u: goto label_2feff0;
        case 0x2feff4u: goto label_2feff4;
        case 0x2feffcu: goto label_2feffc;
        case 0x2ff018u: goto label_2ff018;
        case 0x2ff020u: goto label_2ff020;
        case 0x2ff068u: goto label_2ff068;
        case 0x2ff08cu: goto label_2ff08c;
        case 0x2ff100u: goto label_2ff100;
        case 0x2ff130u: goto label_2ff130;
        case 0x2ff160u: goto label_2ff160;
        case 0x2ff194u: goto label_2ff194;
        case 0x2ff1acu: goto label_2ff1ac;
        default: break;
    }

    ctx->pc = 0x2fef98u;

    // 0x2fef98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fef9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2fef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2fefa0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fefa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fefa4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fefa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fefa8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fefa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fefac: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2fefacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fefb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fefb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fefb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fefb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fefb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fefb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fefbc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2fefbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2fefc0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2fefc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2fefc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2fefc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2fefc8: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x2fefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x2fefcc: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x2fefccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2fefd0: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2fefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2fefd4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x2fefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x2fefd8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2fefd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2fefdc: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x2fefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x2fefe0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2fefe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2fefe4: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x2fefe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2fefe8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x2fefe8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x2fefec: 0x0  nop
    ctx->pc = 0x2fefecu;
    // NOP
label_2feff0:
    // 0x2feff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2feff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2feff4:
    // 0x2feff4: 0xc0bfc76  jal         func_2FF1D8
    ctx->pc = 0x2FEFF4u;
    SET_GPR_U32(ctx, 31, 0x2FEFFCu);
    ctx->pc = 0x2FEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFF4u;
    // 0x2feff8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF1D8u, 0x2FEFF4u, 0x2FEFFCu)) {
        return;
    }
    ctx->pc = 0x2FEFFCu;
label_2feffc:
    // 0x2feffc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2feffcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff000: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2FF000u;
    {
        const bool branch_taken_0x2ff000 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x2FF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF000u;
        // 0x2ff004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff000) {
            ctx->pc = 0x2FEFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2feff4;
        }
    }
    ctx->pc = 0x2FF008u;
    // 0x2ff008: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FF008u;
    {
        const bool branch_taken_0x2ff008 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x2ff008) {
            ctx->pc = 0x2FEFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2feff0;
        }
    }
    ctx->pc = 0x2FF010u;
    // 0x2ff010: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF010u;
    SET_GPR_U32(ctx, 31, 0x2FF018u);
    ctx->pc = 0x2FF014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF010u;
    // 0x2ff014: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF010u, 0x2FF018u)) {
        return;
    }
    ctx->pc = 0x2FF018u;
label_2ff018:
    // 0x2ff018: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF018u;
    SET_GPR_U32(ctx, 31, 0x2FF020u);
    ctx->pc = 0x2FF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF018u;
    // 0x2ff01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF018u, 0x2FF020u)) {
        return;
    }
    ctx->pc = 0x2FF020u;
label_2ff020:
    // 0x2ff020: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff024: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x2ff024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x2ff028: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ff028u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x2ff02c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FF02Cu;
    {
        const bool branch_taken_0x2ff02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF02Cu;
        // 0x2ff030: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff02c) {
            ctx->pc = 0x2FF0B4u;
            goto label_2ff0b4;
        }
    }
    ctx->pc = 0x2FF034u;
    // 0x2ff034: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2ff034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2ff038: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ff038u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x2ff03c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2ff03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ff040: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FF040u;
    {
        const bool branch_taken_0x2ff040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF040u;
        // 0x2ff044: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff040) {
            ctx->pc = 0x2FF0B8u;
            goto label_2ff0b8;
        }
    }
    ctx->pc = 0x2FF048u;
    // 0x2ff048: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x2ff048u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff04c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x2ff04cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff050: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x2ff050u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff054: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x2ff054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff058: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x2ff058u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x2ff05c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x2ff05cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x2ff060: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x2ff060u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x2ff064: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x2ff064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_2ff068:
    // 0x2ff068: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ff068u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x2ff06c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF06Cu;
    {
        const bool branch_taken_0x2ff06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff06c) {
            ctx->pc = 0x2FF070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF06Cu;
            // 0x2ff070: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF090u;
            goto label_2ff090;
        }
    }
    ctx->pc = 0x2FF074u;
    // 0x2ff074: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ff074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ff078: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2ff078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2ff07c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF07Cu;
    {
        const bool branch_taken_0x2ff07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff07c) {
            ctx->pc = 0x2FF080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF07Cu;
            // 0x2ff080: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF090u;
            goto label_2ff090;
        }
    }
    ctx->pc = 0x2FF084u;
    // 0x2ff084: 0xc0be688  jal         func_2F9A20
    ctx->pc = 0x2FF084u;
    SET_GPR_U32(ctx, 31, 0x2FF08Cu);
    ctx->pc = 0x2FF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF084u;
    // 0x2ff088: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A20u, 0x2FF084u, 0x2FF08Cu)) {
        return;
    }
    ctx->pc = 0x2FF08Cu;
label_2ff08c:
    // 0x2ff08c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x2ff08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_2ff090:
    // 0x2ff090: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FF090u;
    {
        const bool branch_taken_0x2ff090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff090) {
            ctx->pc = 0x2FF0F8u;
            goto label_2ff0f8;
        }
    }
    ctx->pc = 0x2FF098u;
    // 0x2ff098: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ff098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ff09c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF09Cu;
    {
        const bool branch_taken_0x2ff09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF09Cu;
        // 0x2ff0a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff09c) {
            ctx->pc = 0x2FF0B8u;
            goto label_2ff0b8;
        }
    }
    ctx->pc = 0x2FF0A4u;
    // 0x2ff0a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ff0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ff0a8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ff0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2ff0ac: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FF0ACu;
    {
        const bool branch_taken_0x2ff0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0ac) {
            ctx->pc = 0x2FF068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff068;
        }
    }
    ctx->pc = 0x2FF0B4u;
label_2ff0b4:
    // 0x2ff0b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2ff0b8:
    // 0x2ff0b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff0bc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ff0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ff0c0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ff0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ff0c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ff0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x2ff0c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ff0c8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ff0cc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff0d4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF0D4u;
    {
        const bool branch_taken_0x2ff0d4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0D4u;
        // 0x2ff0d8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0d4) {
            ctx->pc = 0x2FF108u;
            goto label_2ff108;
        }
    }
    ctx->pc = 0x2FF0DCu;
    // 0x2ff0dc: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x2ff0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ff0e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF0E0u;
    {
        const bool branch_taken_0x2ff0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0E0u;
        // 0x2ff0e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0e0) {
            ctx->pc = 0x2FF0F0u;
            goto label_2ff0f0;
        }
    }
    ctx->pc = 0x2FF0E8u;
    // 0x2ff0e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF0E8u;
    {
        const bool branch_taken_0x2ff0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0E8u;
        // 0x2ff0ec: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0e8) {
            ctx->pc = 0x2FF10Cu;
            goto label_2ff10c;
        }
    }
    ctx->pc = 0x2FF0F0u;
label_2ff0f0:
    // 0x2ff0f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF0F0u;
    {
        const bool branch_taken_0x2ff0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0F0u;
        // 0x2ff0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0f0) {
            ctx->pc = 0x2FF10Cu;
            goto label_2ff10c;
        }
    }
    ctx->pc = 0x2FF0F8u;
label_2ff0f8:
    // 0x2ff0f8: 0xc0bf702  jal         func_2FDC08
    ctx->pc = 0x2FF0F8u;
    SET_GPR_U32(ctx, 31, 0x2FF100u);
    ctx->pc = 0x2FDC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDC08u, 0x2FF0F8u, 0x2FF100u)) {
        return;
    }
    ctx->pc = 0x2FF100u;
label_2ff100:
    // 0x2ff100: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FF100u;
    {
        const bool branch_taken_0x2ff100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF100u;
        // 0x2ff104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff100) {
            ctx->pc = 0x2FF134u;
            goto label_2ff134;
        }
    }
    ctx->pc = 0x2FF108u;
label_2ff108:
    // 0x2ff108: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ff108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ff10c:
    // 0x2ff10c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x2ff10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x2ff110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff114: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2ff114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2ff118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ff118u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2ff11c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2ff11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ff120: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF120u;
    {
        const bool branch_taken_0x2ff120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF120u;
        // 0x2ff124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff120) {
            ctx->pc = 0x2FF130u;
            goto label_2ff130;
        }
    }
    ctx->pc = 0x2FF128u;
    // 0x2ff128: 0xc0bf72a  jal         func_2FDCA8
    ctx->pc = 0x2FF128u;
    SET_GPR_U32(ctx, 31, 0x2FF130u);
    ctx->pc = 0x2FF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF128u;
    // 0x2ff12c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDCA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDCA8u, 0x2FF128u, 0x2FF130u)) {
        return;
    }
    ctx->pc = 0x2FF130u;
label_2ff130:
    // 0x2ff130: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2ff130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ff134:
    // 0x2ff134: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF134u;
    {
        const bool branch_taken_0x2ff134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF134u;
        // 0x2ff138: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff134) {
            ctx->pc = 0x2FF150u;
            goto label_2ff150;
        }
    }
    ctx->pc = 0x2FF13Cu;
    // 0x2ff13c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x2ff13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x2ff140: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FF140u;
    {
        const bool branch_taken_0x2ff140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF140u;
        // 0x2ff144: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff140) {
            ctx->pc = 0x2FF1B0u;
            goto label_2ff1b0;
        }
    }
    ctx->pc = 0x2FF148u;
    // 0x2ff148: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff14c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2ff150:
    // 0x2ff150: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x2ff150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2ff154: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x2ff154u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ff158: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x2ff158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x2ff15c: 0x0  nop
    ctx->pc = 0x2ff15cu;
    // NOP
label_2ff160:
    // 0x2ff160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ff160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff164: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ff164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ff168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ff168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ff16c: 0x0  nop
    ctx->pc = 0x2ff16cu;
    // NOP
    // 0x2ff170: 0x0  nop
    ctx->pc = 0x2ff170u;
    // NOP
    // 0x2ff174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FF174u;
    {
        const bool branch_taken_0x2ff174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff174) {
            ctx->pc = 0x2FF160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff160;
        }
    }
    ctx->pc = 0x2FF17Cu;
    // 0x2ff17c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF17Cu;
    {
        const bool branch_taken_0x2ff17c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF17Cu;
        // 0x2ff180: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff17c) {
            ctx->pc = 0x2FF198u;
            goto label_2ff198;
        }
    }
    ctx->pc = 0x2FF184u;
    // 0x2ff184: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x2ff184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x2ff188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff18c: 0xc0bfb5e  jal         func_2FED78
    ctx->pc = 0x2FF18Cu;
    SET_GPR_U32(ctx, 31, 0x2FF194u);
    ctx->pc = 0x2FF190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF18Cu;
    // 0x2ff190: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FED78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FED78u, 0x2FF18Cu, 0x2FF194u)) {
        return;
    }
    ctx->pc = 0x2FF194u;
label_2ff194:
    // 0x2ff194: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2ff194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ff198:
    // 0x2ff198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF198u;
    {
        const bool branch_taken_0x2ff198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF198u;
        // 0x2ff19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff198) {
            ctx->pc = 0x2FF1ACu;
            goto label_2ff1ac;
        }
    }
    ctx->pc = 0x2FF1A0u;
    // 0x2ff1a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ff1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ff1a4: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FF1A4u;
    SET_GPR_U32(ctx, 31, 0x2FF1ACu);
    ctx->pc = 0x2FF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1A4u;
    // 0x2ff1a8: 0x24a50850  addiu       $a1, $a1, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FF1A4u, 0x2FF1ACu)) {
        return;
    }
    ctx->pc = 0x2FF1ACu;
label_2ff1ac:
    // 0x2ff1ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ff1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff1b0:
    // 0x2ff1b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ff1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ff1b4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ff1b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ff1b8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ff1b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ff1bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ff1bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ff1c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ff1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff1c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ff1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff1c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ff1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D0u;
        // 0x2ff1d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF1D8u;
}
