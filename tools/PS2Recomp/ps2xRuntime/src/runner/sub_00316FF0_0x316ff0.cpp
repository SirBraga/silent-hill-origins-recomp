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

// Function: sub_00316FF0
// Address: 0x316ff0 - 0x317200
void sub_00316FF0_0x316ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316FF0_0x316ff0");
#endif

    switch (ctx->pc) {
        case 0x317040u: goto label_317040;
        case 0x3170ecu: goto label_3170ec;
        case 0x3170fcu: goto label_3170fc;
        case 0x317110u: goto label_317110;
        case 0x317150u: goto label_317150;
        default: break;
    }

    ctx->pc = 0x316ff0u;

    // 0x316ff0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x316ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x316ff4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x316ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x316ff8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x316ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x316ffc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x316ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x317000: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x317000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x317004: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x317004u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
    // 0x317008: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x317008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x31700c: 0x26e511d1  addiu       $a1, $s7, 0x11D1
    ctx->pc = 0x31700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4561));
    // 0x317010: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x317010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x317014: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x317014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317018: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x317018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x31701c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31701cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317020: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x317020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x317024: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x317024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x317028: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x317028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x31702c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x317030: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x317030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x317034: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x317034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x317038: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x317038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31703c: 0x0  nop
    ctx->pc = 0x31703cu;
    // NOP
label_317040:
    // 0x317040: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x317040u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x317044: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x317044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x317048: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x317048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31704c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x317050: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317050u;
    {
        const bool branch_taken_0x317050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317050u;
        // 0x317054: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317050) {
            ctx->pc = 0x317040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317040;
        }
    }
    ctx->pc = 0x317058u;
    // 0x317058: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x317058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31705c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31705Cu;
    {
        const bool branch_taken_0x31705c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x317060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31705Cu;
        // 0x317060: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31705c) {
            ctx->pc = 0x317074u;
            goto label_317074;
        }
    }
    ctx->pc = 0x317064u;
    // 0x317064: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x317064u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x317068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31706c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31706Cu;
    {
        const bool branch_taken_0x31706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31706Cu;
        // 0x317070: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31706c) {
            ctx->pc = 0x317080u;
            goto label_317080;
        }
    }
    ctx->pc = 0x317074u;
label_317074:
    // 0x317074: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317074u;
    {
        const bool branch_taken_0x317074 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x317074) {
            ctx->pc = 0x317084u;
            goto label_317084;
        }
    }
    ctx->pc = 0x31707Cu;
    // 0x31707c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x31707cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_317080:
    // 0x317080: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x317080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_317084:
    // 0x317084: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x317084u;
    {
        const bool branch_taken_0x317084 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x317088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317084u;
        // 0x317088: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317084) {
            ctx->pc = 0x317094u;
            goto label_317094;
        }
    }
    ctx->pc = 0x31708Cu;
    // 0x31708c: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31708Cu;
    {
        const bool branch_taken_0x31708c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x31708c) {
            ctx->pc = 0x3170C0u;
            goto label_3170c0;
        }
    }
    ctx->pc = 0x317094u;
label_317094:
    // 0x317094: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x317094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x317098: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x317098u;
    {
        const bool branch_taken_0x317098 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317098u;
        // 0x31709c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317098) {
            ctx->pc = 0x3170C0u;
            goto label_3170c0;
        }
    }
    ctx->pc = 0x3170A0u;
    // 0x3170a0: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3170a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3170A4u;
    {
        const bool branch_taken_0x3170a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3170A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170A4u;
        // 0x3170a8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170a4) {
            ctx->pc = 0x3170B4u;
            goto label_3170b4;
        }
    }
    ctx->pc = 0x3170ACu;
    // 0x3170ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3170ACu;
    {
        const bool branch_taken_0x3170ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3170ac) {
            ctx->pc = 0x3170C0u;
            goto label_3170c0;
        }
    }
    ctx->pc = 0x3170B4u;
label_3170b4:
    // 0x3170b4: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x3170b4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3170b8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3170b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3170bc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3170bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_3170c0:
    // 0x3170c0: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3170C0u;
    {
        const bool branch_taken_0x3170c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170C0u;
        // 0x3170c4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170c0) {
            ctx->pc = 0x3170DCu;
            goto label_3170dc;
        }
    }
    ctx->pc = 0x3170C8u;
    // 0x3170c8: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x3170c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3170cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3170ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3170d0: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x3170d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x3170d4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3170d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
    // 0x3170d8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3170d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3170dc:
    // 0x3170dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3170dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3170e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3170e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170e4: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x3170E4u;
    SET_GPR_U32(ctx, 31, 0x3170ECu);
    ctx->pc = 0x3170E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170E4u;
    // 0x3170e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x3170E4u, 0x3170ECu)) {
        return;
    }
    ctx->pc = 0x3170ECu;
label_3170ec:
    // 0x3170ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3170ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3170f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3170f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170f4: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x3170F4u;
    SET_GPR_U32(ctx, 31, 0x3170FCu);
    ctx->pc = 0x3170F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170F4u;
    // 0x3170f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x3170F4u, 0x3170FCu)) {
        return;
    }
    ctx->pc = 0x3170FCu;
label_3170fc:
    // 0x3170fc: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x3170fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317100: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x317100u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x317104: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x317104u;
    {
        const bool branch_taken_0x317104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317104u;
        // 0x317108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317104) {
            ctx->pc = 0x31715Cu;
            goto label_31715c;
        }
    }
    ctx->pc = 0x31710Cu;
    // 0x31710c: 0x0  nop
    ctx->pc = 0x31710cu;
    // NOP
label_317110:
    // 0x317110: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x317110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x317114: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x317114u;
    {
        const bool branch_taken_0x317114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317114) {
            ctx->pc = 0x317194u;
            goto label_317194;
        }
    }
    ctx->pc = 0x31711Cu;
    // 0x31711c: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x31711Cu;
    {
        const bool branch_taken_0x31711c = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x317120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31711Cu;
        // 0x317120: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31711c) {
            ctx->pc = 0x317140u;
            goto label_317140;
        }
    }
    ctx->pc = 0x317124u;
    // 0x317124: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x317124u;
    {
        const bool branch_taken_0x317124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317124) {
            ctx->pc = 0x317128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317124u;
            // 0x317128: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317154u;
            goto label_317154;
        }
    }
    ctx->pc = 0x31712Cu;
    // 0x31712c: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x31712Cu;
    {
        const bool branch_taken_0x31712c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x317130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31712Cu;
        // 0x317130: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31712c) {
            ctx->pc = 0x317148u;
            goto label_317148;
        }
    }
    ctx->pc = 0x317134u;
    // 0x317134: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x317134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x317138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317138u;
    {
        const bool branch_taken_0x317138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317138) {
            ctx->pc = 0x317148u;
            goto label_317148;
        }
    }
    ctx->pc = 0x317140u;
label_317140:
    // 0x317140: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x317140u;
    {
        const bool branch_taken_0x317140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317140u;
        // 0x317144: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317140) {
            ctx->pc = 0x317154u;
            goto label_317154;
        }
    }
    ctx->pc = 0x317148u;
label_317148:
    // 0x317148: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x317148u;
    SET_GPR_U32(ctx, 31, 0x317150u);
    ctx->pc = 0x31714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317148u;
    // 0x31714c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x317148u, 0x317150u)) {
        return;
    }
    ctx->pc = 0x317150u;
label_317150:
    // 0x317150: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x317150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_317154:
    // 0x317154: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x317154u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x317158: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x317158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31715c:
    // 0x31715c: 0x26e211d1  addiu       $v0, $s7, 0x11D1
    ctx->pc = 0x31715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4561));
    // 0x317160: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x317160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x317164: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x317164u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317168: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x317168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x31716c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31716Cu;
    {
        const bool branch_taken_0x31716c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31716Cu;
        // 0x317170: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31716c) {
            ctx->pc = 0x31717Cu;
            goto label_31717c;
        }
    }
    ctx->pc = 0x317174u;
    // 0x317174: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x317174u;
    {
        const bool branch_taken_0x317174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317174u;
        // 0x317178: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317174) {
            ctx->pc = 0x317110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317110;
        }
    }
    ctx->pc = 0x31717Cu;
label_31717c:
    // 0x31717c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31717Cu;
    {
        const bool branch_taken_0x31717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31717Cu;
        // 0x317180: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31717c) {
            ctx->pc = 0x317194u;
            goto label_317194;
        }
    }
    ctx->pc = 0x317184u;
    // 0x317184: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x317184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x317188: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x317188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x31718c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x31718Cu;
    {
        const bool branch_taken_0x31718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31718Cu;
        // 0x317190: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31718c) {
            ctx->pc = 0x317110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317110;
        }
    }
    ctx->pc = 0x317194u;
label_317194:
    // 0x317194: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x317194u;
    {
        const bool branch_taken_0x317194 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x317198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317194u;
        // 0x317198: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317194) {
            ctx->pc = 0x3171B0u;
            goto label_3171b0;
        }
    }
    ctx->pc = 0x31719Cu;
    // 0x31719c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3171a0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3171a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3171a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3171a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3171A8u;
    {
        const bool branch_taken_0x3171a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171A8u;
        // 0x3171ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171a8) {
            ctx->pc = 0x3171B8u;
            goto label_3171b8;
        }
    }
    ctx->pc = 0x3171B0u;
label_3171b0:
    // 0x3171b0: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x3171b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x3171b4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3171b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_3171b8:
    // 0x3171b8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3171B8u;
    {
        const bool branch_taken_0x3171b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171B8u;
        // 0x3171bc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171b8) {
            ctx->pc = 0x3171CCu;
            goto label_3171cc;
        }
    }
    ctx->pc = 0x3171C0u;
    // 0x3171c0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3171c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3171c4: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x3171c4u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x3171c8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3171c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3171cc:
    // 0x3171cc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3171ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3171d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3171d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3171d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3171d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3171d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3171dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3171dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3171e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3171e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3171e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3171e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3171e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3171e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3171ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3171ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3171f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3171f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3171f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3171f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3171f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3171F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3171FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171F8u;
        // 0x3171fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3171F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317200u;
}
