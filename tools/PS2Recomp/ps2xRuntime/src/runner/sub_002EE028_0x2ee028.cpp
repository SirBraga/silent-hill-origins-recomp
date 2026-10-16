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

// Function: sub_002EE028
// Address: 0x2ee028 - 0x2ee1b0
void sub_002EE028_0x2ee028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE028_0x2ee028");
#endif

    switch (ctx->pc) {
        case 0x2ee098u: goto label_2ee098;
        case 0x2ee0c8u: goto label_2ee0c8;
        case 0x2ee12cu: goto label_2ee12c;
        case 0x2ee15cu: goto label_2ee15c;
        default: break;
    }

    ctx->pc = 0x2ee028u;

    // 0x2ee028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ee028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ee02c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ee02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ee030: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ee030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ee034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee038: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ee038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ee03c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ee03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee048: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ee048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ee04c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ee04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee054: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ee054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee058: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2ee058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2ee05c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ee05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ee060: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2ee060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ee064: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2ee064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ee068: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE068u;
    {
        const bool branch_taken_0x2ee068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee068) {
            ctx->pc = 0x2EE06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE068u;
            // 0x2ee06c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE070u;
            goto label_2ee070;
        }
    }
    ctx->pc = 0x2EE070u;
label_2ee070:
    // 0x2ee070: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2ee070u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2ee074: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ee074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ee078: 0x2812  mflo        $a1
    ctx->pc = 0x2ee078u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2ee07c: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EE07Cu;
    {
        const bool branch_taken_0x2ee07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE07Cu;
        // 0x2ee080: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee07c) {
            ctx->pc = 0x2EE130u;
            goto label_2ee130;
        }
    }
    ctx->pc = 0x2EE084u;
    // 0x2ee084: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x2ee084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ee088: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2ee088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee08c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2ee08cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ee090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee094: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2ee094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2ee098:
    // 0x2ee098: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2ee098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2ee09c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2ee09cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee0a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE0A0u;
    {
        const bool branch_taken_0x2ee0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0a0) {
            ctx->pc = 0x2EE0B4u;
            goto label_2ee0b4;
        }
    }
    ctx->pc = 0x2EE0A8u;
    // 0x2ee0a8: 0x111800a  movz        $s0, $t0, $s1
    ctx->pc = 0x2ee0a8u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8));
    // 0x2ee0ac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2EE0ACu;
    {
        const bool branch_taken_0x2ee0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0ACu;
        // 0x2ee0b0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0ac) {
            ctx->pc = 0x2EE114u;
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EE0B4u;
label_2ee0b4:
    // 0x2ee0b4: 0x104c0015  beq         $v0, $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE0B4u;
    {
        const bool branch_taken_0x2ee0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x2EE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0B4u;
        // 0x2ee0b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0b4) {
            ctx->pc = 0x2EE10Cu;
            goto label_2ee10c;
        }
    }
    ctx->pc = 0x2EE0BCu;
    // 0x2ee0bc: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2ee0c0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2ee0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee0c4: 0x0  nop
    ctx->pc = 0x2ee0c4u;
    // NOP
label_2ee0c8:
    // 0x2ee0c8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2ee0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ee0cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE0CCu;
    {
        const bool branch_taken_0x2ee0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0CCu;
        // 0x2ee0d0: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0cc) {
            ctx->pc = 0x2EE118u;
            goto label_2ee118;
        }
    }
    ctx->pc = 0x2EE0D4u;
    // 0x2ee0d4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2ee0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ee0d8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2ee0d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ee0dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ee0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ee0e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE0E0u;
    {
        const bool branch_taken_0x2ee0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0e0) {
            ctx->pc = 0x2EE0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE0E0u;
            // 0x2ee0e4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE0F8u;
            goto label_2ee0f8;
        }
    }
    ctx->pc = 0x2EE0E8u;
    // 0x2ee0e8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ee0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ee0ec: 0x51800a  movz        $s0, $v0, $s1
    ctx->pc = 0x2ee0ecu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x2ee0f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE0F0u;
    {
        const bool branch_taken_0x2ee0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0F0u;
        // 0x2ee0f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0f0) {
            ctx->pc = 0x2EE0FCu;
            goto label_2ee0fc;
        }
    }
    ctx->pc = 0x2EE0F8u;
label_2ee0f8:
    // 0x2ee0f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee0fc:
    // 0x2ee0fc: 0x1625fff2  bne         $s1, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2EE0FCu;
    {
        const bool branch_taken_0x2ee0fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x2EE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0FCu;
        // 0x2ee100: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0fc) {
            ctx->pc = 0x2EE0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE104u;
    // 0x2ee104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE104u;
    {
        const bool branch_taken_0x2ee104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE104u;
        // 0x2ee108: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee104) {
            ctx->pc = 0x2EE118u;
            goto label_2ee118;
        }
    }
    ctx->pc = 0x2EE10Cu;
label_2ee10c:
    // 0x2ee10c: 0x780c0  sll         $s0, $a3, 3
    ctx->pc = 0x2ee10cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ee110: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee114:
    // 0x2ee114: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x2ee114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2ee118:
    // 0x2ee118: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE118u;
    {
        const bool branch_taken_0x2ee118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE118u;
        // 0x2ee11c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee118) {
            ctx->pc = 0x2EE140u;
            goto label_2ee140;
        }
    }
    ctx->pc = 0x2EE120u;
    // 0x2ee120: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x2ee120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2ee124: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2EE124u;
    {
        const bool branch_taken_0x2ee124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE124u;
        // 0x2ee128: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee124) {
            ctx->pc = 0x2EE098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee098;
        }
    }
    ctx->pc = 0x2EE12Cu;
label_2ee12c:
    // 0x2ee12c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x2ee12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2ee130:
    // 0x2ee130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE130u;
    {
        const bool branch_taken_0x2ee130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE130u;
        // 0x2ee134: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee130) {
            ctx->pc = 0x2EE148u;
            goto label_2ee148;
        }
    }
    ctx->pc = 0x2EE138u;
    // 0x2ee138: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EE138u;
    {
        const bool branch_taken_0x2ee138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE138u;
        // 0x2ee13c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee138) {
            ctx->pc = 0x2EE170u;
            goto label_2ee170;
        }
    }
    ctx->pc = 0x2EE140u;
label_2ee140:
    // 0x2ee140: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE140u;
    {
        const bool branch_taken_0x2ee140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE140u;
        // 0x2ee144: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee140) {
            ctx->pc = 0x2EE12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee12c;
        }
    }
    ctx->pc = 0x2EE148u;
label_2ee148:
    // 0x2ee148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee14c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee150: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ee150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee154: 0xc0bb87c  jal         func_2EE1F0
    ctx->pc = 0x2EE154u;
    SET_GPR_U32(ctx, 31, 0x2EE15Cu);
    ctx->pc = 0x2EE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE154u;
    // 0x2ee158: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE1F0u, 0x2EE154u, 0x2EE15Cu)) {
        return;
    }
    ctx->pc = 0x2EE15Cu;
label_2ee15c:
    // 0x2ee15c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x2ee15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ee160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee164: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x2ee164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ee168: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x2ee168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2ee16c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2ee16cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2ee170:
    // 0x2ee170: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ee170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee174: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ee174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee178: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ee178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee17c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee180: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ee180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee188: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE188u;
        // 0x2ee18c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE190u;
    // 0x2ee190: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2ee190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2ee194: 0x0  nop
    ctx->pc = 0x2ee194u;
    // NOP
    // 0x2ee198: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x2ee198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee19c: 0x0  nop
    ctx->pc = 0x2ee19cu;
    // NOP
    // 0x2ee1a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ee1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ee1a4: 0x0  nop
    ctx->pc = 0x2ee1a4u;
    // NOP
    // 0x2ee1a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ee1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ee1ac: 0x0  nop
    ctx->pc = 0x2ee1acu;
    // NOP
    ctx->pc = 0x2ee1b0u;
}
