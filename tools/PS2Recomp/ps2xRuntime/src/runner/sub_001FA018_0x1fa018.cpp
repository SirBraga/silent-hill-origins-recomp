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

// Function: sub_001FA018
// Address: 0x1fa018 - 0x1fa158
void sub_001FA018_0x1fa018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA018_0x1fa018");
#endif

    switch (ctx->pc) {
        case 0x1fa050u: goto label_1fa050;
        case 0x1fa05cu: goto label_1fa05c;
        case 0x1fa078u: goto label_1fa078;
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa098u: goto label_1fa098;
        case 0x1fa0d8u: goto label_1fa0d8;
        case 0x1fa0e8u: goto label_1fa0e8;
        case 0x1fa114u: goto label_1fa114;
        case 0x1fa120u: goto label_1fa120;
        default: break;
    }

    ctx->pc = 0x1fa018u;

    // 0x1fa018: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fa01c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1fa01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1fa020: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fa020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fa024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fa024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa028: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1fa028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1fa02c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1fa02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1fa030: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1fa030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1fa034: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1fa034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1fa038: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1fa03c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA03Cu;
    {
        const bool branch_taken_0x1fa03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA03Cu;
        // 0x1fa040: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa03c) {
            ctx->pc = 0x1FA070u;
            goto label_1fa070;
        }
    }
    ctx->pc = 0x1FA044u;
    // 0x1fa044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa048: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA048u;
    {
        const bool branch_taken_0x1fa048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA048u;
        // 0x1fa04c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa048) {
            ctx->pc = 0x1FA07Cu;
            goto label_1fa07c;
        }
    }
    ctx->pc = 0x1FA050u;
label_1fa050:
    // 0x1fa050: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa054: 0xc07e7d2  jal         func_1F9F48
    ctx->pc = 0x1FA054u;
    SET_GPR_U32(ctx, 31, 0x1FA05Cu);
    ctx->pc = 0x1FA058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA054u;
    // 0x1fa058: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9F48u, 0x1FA054u, 0x1FA05Cu)) {
        return;
    }
    ctx->pc = 0x1FA05Cu;
label_1fa05c:
    // 0x1fa05c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa060: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FA060u;
    {
        const bool branch_taken_0x1fa060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa060) {
            ctx->pc = 0x1FA050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa050;
        }
    }
    ctx->pc = 0x1FA068u;
    // 0x1fa068: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA068u;
    {
        const bool branch_taken_0x1fa068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA068u;
        // 0x1fa06c: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa068) {
            ctx->pc = 0x1FA080u;
            goto label_1fa080;
        }
    }
    ctx->pc = 0x1FA070u;
label_1fa070:
    // 0x1fa070: 0xc07e7d2  jal         func_1F9F48
    ctx->pc = 0x1FA070u;
    SET_GPR_U32(ctx, 31, 0x1FA078u);
    ctx->pc = 0x1FA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA070u;
    // 0x1fa074: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9F48u, 0x1FA070u, 0x1FA078u)) {
        return;
    }
    ctx->pc = 0x1FA078u;
label_1fa078:
    // 0x1fa078: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fa078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa07c:
    // 0x1fa07c: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x1fa07cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1fa080:
    // 0x1fa080: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x1fa080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x1fa084: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x1FA084u;
    SET_GPR_U32(ctx, 31, 0x1FA08Cu);
    ctx->pc = 0x1FA088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA084u;
    // 0x1fa088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1FA084u, 0x1FA08Cu)) {
        return;
    }
    ctx->pc = 0x1FA08Cu;
label_1fa08c:
    // 0x1fa08c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fa08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fa090: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x1FA090u;
    SET_GPR_U32(ctx, 31, 0x1FA098u);
    ctx->pc = 0x1FA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA090u;
    // 0x1fa094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1FA090u, 0x1FA098u)) {
        return;
    }
    ctx->pc = 0x1FA098u;
label_1fa098:
    // 0x1fa098: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fa098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa09c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1fa09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1fa0a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fa0a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1fa0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1fa0a8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fa0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1fa0ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fa0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1fa0b0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1fa0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1fa0b4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FA0B4u;
    {
        const bool branch_taken_0x1fa0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B4u;
        // 0x1fa0b8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0b4) {
            ctx->pc = 0x1FA100u;
            goto label_1fa100;
        }
    }
    ctx->pc = 0x1FA0BCu;
    // 0x1fa0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa0c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA0C4u;
    {
        const bool branch_taken_0x1fa0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0C4u;
        // 0x1fa0c8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0c4) {
            ctx->pc = 0x1FA114u;
            goto label_1fa114;
        }
    }
    ctx->pc = 0x1FA0CCu;
    // 0x1fa0cc: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1fa0d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa0d4: 0x0  nop
    ctx->pc = 0x1fa0d4u;
    // NOP
label_1fa0d8:
    // 0x1fa0d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fa0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0e0: 0xc07e7e4  jal         func_1F9F90
    ctx->pc = 0x1FA0E0u;
    SET_GPR_U32(ctx, 31, 0x1FA0E8u);
    ctx->pc = 0x1FA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0E0u;
    // 0x1fa0e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9F90u, 0x1FA0E0u, 0x1FA0E8u)) {
        return;
    }
    ctx->pc = 0x1FA0E8u;
label_1fa0e8:
    // 0x1fa0e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fa0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fa0ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa0f0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FA0F0u;
    {
        const bool branch_taken_0x1fa0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0f0) {
            ctx->pc = 0x1FA0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA0F0u;
            // 0x1fa0f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa0d8;
        }
    }
    ctx->pc = 0x1FA0F8u;
    // 0x1fa0f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA0F8u;
    {
        const bool branch_taken_0x1fa0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0F8u;
        // 0x1fa0fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0f8) {
            ctx->pc = 0x1FA118u;
            goto label_1fa118;
        }
    }
    ctx->pc = 0x1FA100u;
label_1fa100:
    // 0x1fa100: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fa104: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa108: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1fa108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fa10c: 0xc07e7e4  jal         func_1F9F90
    ctx->pc = 0x1FA10Cu;
    SET_GPR_U32(ctx, 31, 0x1FA114u);
    ctx->pc = 0x1FA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA10Cu;
    // 0x1fa110: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9F90u, 0x1FA10Cu, 0x1FA114u)) {
        return;
    }
    ctx->pc = 0x1FA114u;
label_1fa114:
    // 0x1fa114: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa118:
    // 0x1fa118: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FA118u;
    SET_GPR_U32(ctx, 31, 0x1FA120u);
    ctx->pc = 0x1FA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA118u;
    // 0x1fa11c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9CE0u, 0x1FA118u, 0x1FA120u)) {
        return;
    }
    ctx->pc = 0x1FA120u;
label_1fa120:
    // 0x1fa120: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fa120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa124: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1fa124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fa128: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1fa128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1fa12c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1fa12cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1fa130: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1fa130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1fa134: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fa134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa138: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1fa138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fa13c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1fa13cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fa140: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1fa140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa144: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1fa144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa148: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1fa148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA14Cu;
        // 0x1fa150: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA154u;
    // 0x1fa154: 0x0  nop
    ctx->pc = 0x1fa154u;
    // NOP
    ctx->pc = 0x1fa158u;
}
