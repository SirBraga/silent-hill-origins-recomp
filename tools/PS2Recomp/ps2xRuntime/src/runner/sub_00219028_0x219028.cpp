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

// Function: sub_00219028
// Address: 0x219028 - 0x2191a0
void sub_00219028_0x219028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219028_0x219028");
#endif

    switch (ctx->pc) {
        case 0x219080u: goto label_219080;
        case 0x2190c8u: goto label_2190c8;
        case 0x2190f8u: goto label_2190f8;
        case 0x219160u: goto label_219160;
        default: break;
    }

    ctx->pc = 0x219028u;

    // 0x219028: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x219028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21902c: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x21902cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x219030: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219030u;
    {
        const bool branch_taken_0x219030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219030u;
        // 0x219034: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219030) {
            ctx->pc = 0x219044u;
            goto label_219044;
        }
    }
    ctx->pc = 0x219038u;
    // 0x219038: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x219038u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21903c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x21903Cu;
    {
        const bool branch_taken_0x21903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21903Cu;
        // 0x219040: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21903c) {
            ctx->pc = 0x219198u;
            goto label_219198;
        }
    }
    ctx->pc = 0x219044u;
label_219044:
    // 0x219044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219048: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219048u;
    {
        const bool branch_taken_0x219048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219048) {
            ctx->pc = 0x21904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219048u;
            // 0x21904c: 0x90a20008  lbu         $v0, 0x8($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219064u;
            goto label_219064;
        }
    }
    ctx->pc = 0x219050u;
    // 0x219050: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x219050u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x219054: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x219058: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x219058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21905c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x21905Cu;
    {
        const bool branch_taken_0x21905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21905Cu;
        // 0x219060: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21905c) {
            ctx->pc = 0x219198u;
            goto label_219198;
        }
    }
    ctx->pc = 0x219064u;
label_219064:
    // 0x219064: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x219064u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x219068: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x219068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21906c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x21906Cu;
    {
        const bool branch_taken_0x21906c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x219070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21906Cu;
        // 0x219070: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21906c) {
            ctx->pc = 0x2190A0u;
            goto label_2190a0;
        }
    }
    ctx->pc = 0x219074u;
    // 0x219074: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x219074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219078: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x219078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21907c: 0x0  nop
    ctx->pc = 0x21907cu;
    // NOP
label_219080:
    // 0x219080: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x219080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x219084: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x219084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x219088: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21908c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21908Cu;
    {
        const bool branch_taken_0x21908c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x219090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21908Cu;
        // 0x219090: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21908c) {
            ctx->pc = 0x2190A0u;
            goto label_2190a0;
        }
    }
    ctx->pc = 0x219094u;
    // 0x219094: 0x294200ff  slti        $v0, $t2, 0xFF
    ctx->pc = 0x219094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x219098: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x219098u;
    {
        const bool branch_taken_0x219098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219098) {
            ctx->pc = 0x21909Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219098u;
            // 0x21909c: 0x94a20004  lhu         $v0, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219080;
        }
    }
    ctx->pc = 0x2190A0u;
label_2190a0:
    // 0x2190a0: 0x8da30030  lw          $v1, 0x30($t5)
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x2190a4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2190a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2190a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2190acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2190b0: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2190b4: 0x19600022  blez        $t3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2190B4u;
    {
        const bool branch_taken_0x2190b4 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x2190B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190B4u;
        // 0x2190b8: 0x60602d  daddu       $t4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190b4) {
            ctx->pc = 0x219140u;
            goto label_219140;
        }
    }
    ctx->pc = 0x2190BCu;
    // 0x2190bc: 0x97b80000  lhu         $t8, 0x0($sp)
    ctx->pc = 0x2190bcu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2190c0: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x2190c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190c4: 0x0  nop
    ctx->pc = 0x2190c4u;
    // NOP
label_2190c8:
    // 0x2190c8: 0x19400015  blez        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2190C8u;
    {
        const bool branch_taken_0x2190c8 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2190CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190C8u;
        // 0x2190cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190c8) {
            ctx->pc = 0x219120u;
            goto label_219120;
        }
    }
    ctx->pc = 0x2190D0u;
    // 0x2190d0: 0x8de20014  lw          $v0, 0x14($t7)
    ctx->pc = 0x2190d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x2190d4: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x2190d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2190d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2190d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2190dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2190dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2190e0: 0x1703000f  bne         $t8, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2190E0u;
    {
        const bool branch_taken_0x2190e0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 3));
        if (branch_taken_0x2190e0) {
            ctx->pc = 0x219120u;
            goto label_219120;
        }
    }
    ctx->pc = 0x2190E8u;
    // 0x2190e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2190e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2190ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2190f4: 0x0  nop
    ctx->pc = 0x2190f4u;
    // NOP
label_2190f8:
    // 0x2190f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2190f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2190fc: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x2190fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x219100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219100u;
    {
        const bool branch_taken_0x219100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219100u;
        // 0x219104: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219100) {
            ctx->pc = 0x219120u;
            goto label_219120;
        }
    }
    ctx->pc = 0x219108u;
    // 0x219108: 0x8d820014  lw          $v0, 0x14($t4)
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x21910c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x21910cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219110: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x219114: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x219114u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219118: 0x5083fff7  beql        $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x219118u;
    {
        const bool branch_taken_0x219118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x219118) {
            ctx->pc = 0x21911Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219118u;
            // 0x21911c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2190F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2190f8;
        }
    }
    ctx->pc = 0x219120u;
label_219120:
    // 0x219120: 0x550a0004  bnel        $t0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x219120u;
    {
        const bool branch_taken_0x219120 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        if (branch_taken_0x219120) {
            ctx->pc = 0x219124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219120u;
            // 0x219124: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219134u;
            goto label_219134;
        }
    }
    ctx->pc = 0x219128u;
    // 0x219128: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x219128u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21912c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x21912cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219130: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x219130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_219134:
    // 0x219134: 0x12b102a  slt         $v0, $t1, $t3
    ctx->pc = 0x219134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x219138: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x219138u;
    {
        const bool branch_taken_0x219138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219138) {
            ctx->pc = 0x2190C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2190c8;
        }
    }
    ctx->pc = 0x219140u;
label_219140:
    // 0x219140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219144: 0x55c20014  bnel        $t6, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x219144u;
    {
        const bool branch_taken_0x219144 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        if (branch_taken_0x219144) {
            ctx->pc = 0x219148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219144u;
            // 0x219148: 0xa4ee0000  sh          $t6, 0x0($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219198u;
            goto label_219198;
        }
    }
    ctx->pc = 0x21914Cu;
    // 0x21914c: 0x9582002c  lhu         $v0, 0x2C($t4)
    ctx->pc = 0x21914cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 44)));
    // 0x219150: 0x19400011  blez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x219150u;
    {
        const bool branch_taken_0x219150 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x219154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219150u;
        // 0x219154: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219150) {
            ctx->pc = 0x219198u;
            goto label_219198;
        }
    }
    ctx->pc = 0x219158u;
    // 0x219158: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x219158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21915c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219160:
    // 0x219160: 0x8da40030  lw          $a0, 0x30($t5)
    ctx->pc = 0x219160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x219164: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x219164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x219168: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x219168u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21916c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x21916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x219170: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x219174: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x219174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x219178: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x219178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21917c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219180: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x219180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x219184: 0x8da30030  lw          $v1, 0x30($t5)
    ctx->pc = 0x219184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x219188: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x21918c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219190: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x219190u;
    {
        const bool branch_taken_0x219190 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x219194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219190u;
        // 0x219194: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219190) {
            ctx->pc = 0x219160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219160;
        }
    }
    ctx->pc = 0x219198u;
label_219198:
    // 0x219198: 0x3e00008  jr          $ra
    ctx->pc = 0x219198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219198u;
        // 0x21919c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2191A0u;
}
