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

// Function: sub_00222768
// Address: 0x222768 - 0x222d28
void sub_00222768_0x222768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222768_0x222768");
#endif

    switch (ctx->pc) {
        case 0x222818u: goto label_222818;
        case 0x222840u: goto label_222840;
        case 0x222888u: goto label_222888;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228f0u: goto label_2228f0;
        case 0x222918u: goto label_222918;
        case 0x22295cu: goto label_22295c;
        case 0x222968u: goto label_222968;
        case 0x2229d0u: goto label_2229d0;
        case 0x222a20u: goto label_222a20;
        case 0x222a78u: goto label_222a78;
        case 0x222c6cu: goto label_222c6c;
        default: break;
    }

    ctx->pc = 0x222768u;

    // 0x222768: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22276c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x22276cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222770: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x222770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x222774: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x222774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222778: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x222778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22277c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x222780: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x222780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x222784: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x222784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222788: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x222788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x22278c: 0x2416001b  addiu       $s6, $zero, 0x1B
    ctx->pc = 0x22278cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x222790: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x222790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x222794: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x222794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x222798: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x222798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x22279c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2227a0: 0x8f0f0024  lw          $t7, 0x24($t8)
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x2227a4: 0x8f070014  lw          $a3, 0x14($t8)
    ctx->pc = 0x2227a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2227a8: 0x8de30034  lw          $v1, 0x34($t7)
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 52)));
    // 0x2227ac: 0x8df50030  lw          $s5, 0x30($t7)
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 48)));
    // 0x2227b0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2227b4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2227b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2227b8: 0x24e7feff  addiu       $a3, $a3, -0x101
    ctx->pc = 0x2227b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967039));
    // 0x2227bc: 0x8de4003c  lw          $a0, 0x3C($t7)
    ctx->pc = 0x2227bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 60)));
    // 0x2227c0: 0x8df90038  lw          $t9, 0x38($t7)
    ctx->pc = 0x2227c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 56)));
    // 0x2227c4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2227c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2227c8: 0x8f040000  lw          $a0, 0x0($t8)
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2227cc: 0x8de30060  lw          $v1, 0x60($t7)
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 96)));
    // 0x2227d0: 0x248affff  addiu       $t2, $a0, -0x1
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2227d4: 0x8f020004  lw          $v0, 0x4($t8)
    ctx->pc = 0x2227d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2227d8: 0x8f060010  lw          $a2, 0x10($t8)
    ctx->pc = 0x2227d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2227dc: 0x681804  sllv        $v1, $t0, $v1
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x2227e0: 0x8de40064  lw          $a0, 0x64($t7)
    ctx->pc = 0x2227e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 100)));
    // 0x2227e4: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2227e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x2227e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2227e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2227ec: 0x8df40058  lw          $s4, 0x58($t7)
    ctx->pc = 0x2227ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 88)));
    // 0x2227f0: 0x884004  sllv        $t0, $t0, $a0
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2227f4: 0x8df3005c  lw          $s3, 0x5C($t7)
    ctx->pc = 0x2227f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 92)));
    // 0x2227f8: 0xddeb0040  ld          $t3, 0x40($t7)
    ctx->pc = 0x2227f8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x2227fc: 0x1428021  addu        $s0, $t2, $v0
    ctx->pc = 0x2227fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x222800: 0x8de90048  lw          $t1, 0x48($t7)
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x222804: 0xc5f023  subu        $fp, $a2, $a1
    ctx->pc = 0x222804u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x222808: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x222808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x22280c: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x222810: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x222810u;
    {
        const bool branch_taken_0x222810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222810u;
        // 0x222814: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222810) {
            ctx->pc = 0x222A8Cu;
            goto label_222a8c;
        }
    }
    ctx->pc = 0x222818u;
label_222818:
    // 0x222818: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22281c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x22281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x222820: 0x1720000f  bnez        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x222820u;
    {
        const bool branch_taken_0x222820 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x222824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222820u;
        // 0x222824: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222820) {
            ctx->pc = 0x222860u;
            goto label_222860;
        }
    }
    ctx->pc = 0x222828u;
    // 0x222828: 0x2a51023  subu        $v0, $s5, $a1
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x22282c: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x22282cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x222830: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x222834: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x222834u;
    {
        const bool branch_taken_0x222834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222834u;
        // 0x222838: 0x150702b  sltu        $t6, $t2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222834) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x22283Cu;
    // 0x22283c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_222840:
    // 0x222840: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222844: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222848: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22284c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x222850: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x222850u;
    {
        const bool branch_taken_0x222850 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222850u;
        // 0x222854: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222850) {
            ctx->pc = 0x222840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222840;
        }
    }
    ctx->pc = 0x222858u;
    // 0x222858: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x222858u;
    {
        const bool branch_taken_0x222858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222858u;
        // 0x22285c: 0xcc2023  subu        $a0, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222858) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x222860u;
label_222860:
    // 0x222860: 0x325102b  sltu        $v0, $t9, $a1
    ctx->pc = 0x222860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x222864: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x222864u;
    {
        const bool branch_taken_0x222864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222864u;
        // 0x222868: 0x2b91821  addu        $v1, $s5, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222864) {
            ctx->pc = 0x2228D8u;
            goto label_2228d8;
        }
    }
    ctx->pc = 0x22286Cu;
    // 0x22286c: 0x150702b  sltu        $t6, $t2, $s0
    ctx->pc = 0x22286cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x222870: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222874: 0xb92823  subu        $a1, $a1, $t9
    ctx->pc = 0x222874u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x222878: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x222878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x22287c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x22287Cu;
    {
        const bool branch_taken_0x22287c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22287Cu;
        // 0x222880: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22287c) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x222884u;
    // 0x222884: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_222888:
    // 0x222888: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22288c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222890: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222894: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x222894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x222898: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x222898u;
    {
        const bool branch_taken_0x222898 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222898u;
        // 0x22289c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222898) {
            ctx->pc = 0x222888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222888;
        }
    }
    ctx->pc = 0x2228A0u;
    // 0x2228a0: 0x327102b  sltu        $v0, $t9, $a3
    ctx->pc = 0x2228a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2228a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2228A4u;
    {
        const bool branch_taken_0x2228a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228A4u;
        // 0x2228a8: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228a4) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x2228ACu;
    // 0x2228ac: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x2228acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228b0: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2228b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2228b4: 0x0  nop
    ctx->pc = 0x2228b4u;
    // NOP
label_2228b8:
    // 0x2228b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2228b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2228bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2228bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2228c0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2228c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2228c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2228c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2228c8: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2228C8u;
    {
        const bool branch_taken_0x2228c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2228CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228C8u;
        // 0x2228cc: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228c8) {
            ctx->pc = 0x2228B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2228b8;
        }
    }
    ctx->pc = 0x2228D0u;
    // 0x2228d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2228D0u;
    {
        const bool branch_taken_0x2228d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228D0u;
        // 0x2228d4: 0xcc2023  subu        $a0, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228d0) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x2228D8u;
label_2228d8:
    // 0x2228d8: 0x3251023  subu        $v0, $t9, $a1
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2228dc: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x2228dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2228e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2228e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2228E4u;
    {
        const bool branch_taken_0x2228e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228E4u;
        // 0x2228e8: 0x150702b  sltu        $t6, $t2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228e4) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x2228ECu;
    // 0x2228ec: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2228f0:
    // 0x2228f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2228f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2228f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2228f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2228fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x222900: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x222900u;
    {
        const bool branch_taken_0x222900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222900u;
        // 0x222904: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222900) {
            ctx->pc = 0x2228F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2228f0;
        }
    }
    ctx->pc = 0x222908u;
    // 0x222908: 0xcc2023  subu        $a0, $a2, $t4
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_22290c:
    // 0x22290c: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x22290cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x222910: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x222910u;
    {
        const bool branch_taken_0x222910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222910) {
            ctx->pc = 0x2229A4u;
            goto label_2229a4;
        }
    }
    ctx->pc = 0x222918u;
label_222918:
    // 0x222918: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22291c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222920: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222924: 0x24e7fffd  addiu       $a3, $a3, -0x3
    ctx->pc = 0x222924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
    // 0x222928: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22292c: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x22292cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x222930: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x222930u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x222934: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222938: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22293c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222940: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x222940u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x222944: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222948: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22294c: 0x1060fff2  beqz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x22294Cu;
    {
        const bool branch_taken_0x22294c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22294Cu;
        // 0x222950: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22294c) {
            ctx->pc = 0x222918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222918;
        }
    }
    ctx->pc = 0x222954u;
    // 0x222954: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x222954u;
    {
        const bool branch_taken_0x222954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222954) {
            ctx->pc = 0x2229A4u;
            goto label_2229a4;
        }
    }
    ctx->pc = 0x22295Cu;
label_22295c:
    // 0x22295c: 0xcc2023  subu        $a0, $a2, $t4
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x222960: 0x150702b  sltu        $t6, $t2, $s0
    ctx->pc = 0x222960u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x222964: 0x0  nop
    ctx->pc = 0x222964u;
    // NOP
label_222968:
    // 0x222968: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22296c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222970: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222974: 0x24e7fffd  addiu       $a3, $a3, -0x3
    ctx->pc = 0x222974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
    // 0x222978: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22297c: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x22297cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x222980: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x222980u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x222984: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222988: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22298c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222990: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x222990u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x222994: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222998: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x222998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22299c: 0x1060fff2  beqz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x22299Cu;
    {
        const bool branch_taken_0x22299c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22299Cu;
        // 0x2229a0: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22299c) {
            ctx->pc = 0x222968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222968;
        }
    }
    ctx->pc = 0x2229A4u;
label_2229a4:
    // 0x2229a4: 0x10e00034  beqz        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x2229A4u;
    {
        const bool branch_taken_0x2229a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229A4u;
        // 0x2229a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229a4) {
            ctx->pc = 0x222A78u;
            goto label_222a78;
        }
    }
    ctx->pc = 0x2229ACu;
    // 0x2229ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2229b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2229b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2229b4: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x2229b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2229b8: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2229B8u;
    {
        const bool branch_taken_0x2229b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2229BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229B8u;
        // 0x2229bc: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229b8) {
            ctx->pc = 0x222A78u;
            goto label_222a78;
        }
    }
    ctx->pc = 0x2229C0u;
    // 0x2229c0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2229c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2229c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2229c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2229C8u;
    {
        const bool branch_taken_0x2229c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229C8u;
        // 0x2229cc: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229c8) {
            ctx->pc = 0x222A78u;
            goto label_222a78;
        }
    }
    ctx->pc = 0x2229D0u;
label_2229d0:
    // 0x2229d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2229D0u;
    {
        const bool branch_taken_0x2229d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2229D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229D0u;
        // 0x2229d4: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229d0) {
            ctx->pc = 0x222A10u;
            goto label_222a10;
        }
    }
    ctx->pc = 0x2229D8u;
    // 0x2229d8: 0xb22004  sllv        $a0, $s2, $a1
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x2229dc: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x2229dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2229e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2229e4: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x2229e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2229e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2229e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2229ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2229ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2229f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2229f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2229f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2229f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2229f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2229fc: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x2229fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x222a00: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x222a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x222a04: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x222a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x222a08: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x222A08u;
    {
        const bool branch_taken_0x222a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A08u;
        // 0x222a0c: 0xbba40000  swr         $a0, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a08) {
            ctx->pc = 0x222BC0u;
            goto label_222bc0;
        }
    }
    ctx->pc = 0x222A10u;
label_222a10:
    // 0x222a10: 0xd1282b  sltu        $a1, $a2, $s1
    ctx->pc = 0x222a10u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x222a14: 0x2463a710  addiu       $v1, $v1, -0x58F0
    ctx->pc = 0x222a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
    // 0x222a18: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x222A18u;
    {
        const bool branch_taken_0x222a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A18u;
        // 0x222a1c: 0xaf030020  sw          $v1, 0x20($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a18) {
            ctx->pc = 0x222C68u;
            goto label_222c68;
        }
    }
    ctx->pc = 0x222A20u;
label_222a20:
    // 0x222a20: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222A20u;
    {
        const bool branch_taken_0x222a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A20u;
        // 0x222a24: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a20) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222A28u;
    // 0x222a28: 0xb22004  sllv        $a0, $s2, $a1
    ctx->pc = 0x222a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x222a2c: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x222a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x222a30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x222a34: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x222a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x222a38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x222a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x222a3c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x222a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x222a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222a44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x222a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x222a48: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x222a4c: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x222a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x222a50: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x222a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x222a54: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x222a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x222a58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x222A58u;
    {
        const bool branch_taken_0x222a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A58u;
        // 0x222a5c: 0xbba40000  swr         $a0, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a58) {
            ctx->pc = 0x222AE8u;
            goto label_222ae8;
        }
    }
    ctx->pc = 0x222A60u;
label_222a60:
    // 0x222a60: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x222A60u;
    {
        const bool branch_taken_0x222a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A60u;
        // 0x222a64: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a60) {
            ctx->pc = 0x222CB4u;
            goto label_222cb4;
        }
    }
    ctx->pc = 0x222A68u;
    // 0x222a68: 0xd1282b  sltu        $a1, $a2, $s1
    ctx->pc = 0x222a68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x222a6c: 0x2442a728  addiu       $v0, $v0, -0x58D8
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944552));
    // 0x222a70: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x222A70u;
    {
        const bool branch_taken_0x222a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A70u;
        // 0x222a74: 0xaf020020  sw          $v0, 0x20($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a70) {
            ctx->pc = 0x222C68u;
            goto label_222c68;
        }
    }
    ctx->pc = 0x222A78u;
label_222a78:
    // 0x222a78: 0x24cd0001  addiu       $t5, $a2, 0x1
    ctx->pc = 0x222a78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222a7c: 0x11c0007b  beqz        $t6, . + 4 + (0x7B << 2)
    ctx->pc = 0x222A7Cu;
    {
        const bool branch_taken_0x222a7c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A7Cu;
        // 0x222a80: 0xd1282b  sltu        $a1, $a2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a7c) {
            ctx->pc = 0x222C6Cu;
            goto label_222c6c;
        }
    }
    ctx->pc = 0x222A84u;
    // 0x222a84: 0x10a0007a  beqz        $a1, . + 4 + (0x7A << 2)
    ctx->pc = 0x222A84u;
    {
        const bool branch_taken_0x222a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A84u;
        // 0x222a88: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a84) {
            ctx->pc = 0x222C70u;
            goto label_222c70;
        }
    }
    ctx->pc = 0x222A8Cu;
label_222a8c:
    // 0x222a8c: 0x2d22000f  sltiu       $v0, $t1, 0xF
    ctx->pc = 0x222a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x222a90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x222A90u;
    {
        const bool branch_taken_0x222a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a90) {
            ctx->pc = 0x222AC0u;
            goto label_222ac0;
        }
    }
    ctx->pc = 0x222A98u;
    // 0x222a98: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222a9c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x222a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222aa0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222aa4: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x222aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222aa8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x222aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222aac: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x222ab0: 0x163582d  daddu       $t3, $t3, $v1
    ctx->pc = 0x222ab0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x222ab4: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x222ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222ab8: 0x162582d  daddu       $t3, $t3, $v0
    ctx->pc = 0x222ab8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222abc: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_222ac0:
    // 0x222ac0: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x222ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x222ac4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x222ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x222ac8: 0x24cd0001  addiu       $t5, $a2, 0x1
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222acc: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x222accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x222ad0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222ad4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x222ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x222ad8: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x222ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x222adc: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x222adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x222ae0: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x222ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x222ae4: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x222ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_222ae8:
    // 0x222ae8: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x222ae8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x222aec: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x222af0: 0xab5816  dsrlv       $t3, $t3, $a1
    ctx->pc = 0x222af0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x222af4: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x222af4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222af8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222AF8u;
    {
        const bool branch_taken_0x222af8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x222AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AF8u;
        // 0x222afc: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222af8) {
            ctx->pc = 0x222B14u;
            goto label_222b14;
        }
    }
    ctx->pc = 0x222B00u;
    // 0x222b00: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x222b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x222b04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222b08: 0x150702b  sltu        $t6, $t2, $s0
    ctx->pc = 0x222b08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x222b0c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x222B0Cu;
    {
        const bool branch_taken_0x222b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B0Cu;
        // 0x222b10: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b0c) {
            ctx->pc = 0x222A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222a78;
        }
    }
    ctx->pc = 0x222B14u;
label_222b14:
    // 0x222b14: 0x1040ffc2  beqz        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x222B14u;
    {
        const bool branch_taken_0x222b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B14u;
        // 0x222b18: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b14) {
            ctx->pc = 0x222A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222a20;
        }
    }
    ctx->pc = 0x222B1Cu;
    // 0x222b1c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x222b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x222b20: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x222B20u;
    {
        const bool branch_taken_0x222b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B20u;
        // 0x222b24: 0x97a70002  lhu         $a3, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b20) {
            ctx->pc = 0x222B68u;
            goto label_222b68;
        }
    }
    ctx->pc = 0x222B28u;
    // 0x222b28: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x222b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x222b2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222B2Cu;
    {
        const bool branch_taken_0x222b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B2Cu;
        // 0x222b30: 0xb21004  sllv        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b2c) {
            ctx->pc = 0x222B4Cu;
            goto label_222b4c;
        }
    }
    ctx->pc = 0x222B34u;
    // 0x222b34: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222b34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222b38: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x222b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222b3c: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x222b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222b40: 0x162582d  daddu       $t3, $t3, $v0
    ctx->pc = 0x222b40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222b44: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x222b48: 0xb21004  sllv        $v0, $s2, $a1
    ctx->pc = 0x222b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
label_222b4c:
    // 0x222b4c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x222b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x222b50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x222b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x222b54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x222b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x222b58: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x222b5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x222b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x222b60: 0xab5816  dsrlv       $t3, $t3, $a1
    ctx->pc = 0x222b60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x222b64: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x222b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_222b68:
    // 0x222b68: 0x2d22000f  sltiu       $v0, $t1, 0xF
    ctx->pc = 0x222b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x222b6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x222B6Cu;
    {
        const bool branch_taken_0x222b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b6c) {
            ctx->pc = 0x222B9Cu;
            goto label_222b9c;
        }
    }
    ctx->pc = 0x222B74u;
    // 0x222b74: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222b78: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x222b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222b7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222b80: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x222b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222b84: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x222b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222b88: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x222b8c: 0x163582d  daddu       $t3, $t3, $v1
    ctx->pc = 0x222b8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x222b90: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x222b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222b94: 0x162582d  daddu       $t3, $t3, $v0
    ctx->pc = 0x222b94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222b98: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_222b9c:
    // 0x222b9c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x222b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x222ba0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x222ba0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x222ba4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x222ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x222ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222bac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x222bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x222bb0: 0x884c0003  lwl         $t4, 0x3($v0)
    ctx->pc = 0x222bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x222bb4: 0x984c0000  lwr         $t4, 0x0($v0)
    ctx->pc = 0x222bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x222bb8: 0xabac0003  swl         $t4, 0x3($sp)
    ctx->pc = 0x222bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x222bbc: 0xbbac0000  swr         $t4, 0x0($sp)
    ctx->pc = 0x222bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_222bc0:
    // 0x222bc0: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x222bc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x222bc4: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x222bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x222bc8: 0xab5816  dsrlv       $t3, $t3, $a1
    ctx->pc = 0x222bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x222bcc: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x222bccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222bd0: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x222bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x222bd4: 0x1040ff7e  beqz        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x222BD4u;
    {
        const bool branch_taken_0x222bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BD4u;
        // 0x222bd8: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bd4) {
            ctx->pc = 0x2229D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2229d0;
        }
    }
    ctx->pc = 0x222BDCu;
    // 0x222bdc: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x222bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x222be0: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x222be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x222be4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222BE4u;
    {
        const bool branch_taken_0x222be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BE4u;
        // 0x222be8: 0x97ac0002  lhu         $t4, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222be4) {
            ctx->pc = 0x222C1Cu;
            goto label_222c1c;
        }
    }
    ctx->pc = 0x222BECu;
    // 0x222bec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222bf0: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x222bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222bf4: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x222bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222bf8: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x222bfc: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x222bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x222c00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222C00u;
    {
        const bool branch_taken_0x222c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C00u;
        // 0x222c04: 0x162582d  daddu       $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c00) {
            ctx->pc = 0x222C1Cu;
            goto label_222c1c;
        }
    }
    ctx->pc = 0x222C08u;
    // 0x222c08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x222c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222c0c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x222c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x222c10: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x222c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x222c14: 0x162582d  daddu       $t3, $t3, $v0
    ctx->pc = 0x222c14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222c18: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x222c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_222c1c:
    // 0x222c1c: 0xb21004  sllv        $v0, $s2, $a1
    ctx->pc = 0x222c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x222c20: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x222c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x222c24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x222c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x222c28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x222c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x222c2c: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x222c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x222c30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x222c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x222c34: 0xab5816  dsrlv       $t3, $t3, $a1
    ctx->pc = 0x222c34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x222c38: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x222c3c: 0xde2823  subu        $a1, $a2, $fp
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x222c40: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x222c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x222c44: 0x1040ff45  beqz        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x222C44u;
    {
        const bool branch_taken_0x222c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C44u;
        // 0x222c48: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c44) {
            ctx->pc = 0x22295Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22295c;
        }
    }
    ctx->pc = 0x222C4Cu;
    // 0x222c4c: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x222c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x222c50: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x222c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x222c54: 0x1040fef0  beqz        $v0, . + 4 + (-0x110 << 2)
    ctx->pc = 0x222C54u;
    {
        const bool branch_taken_0x222c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C54u;
        // 0x222c58: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c54) {
            ctx->pc = 0x222818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222818;
        }
    }
    ctx->pc = 0x222C5Cu;
    // 0x222c5c: 0xd1282b  sltu        $a1, $a2, $s1
    ctx->pc = 0x222c5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x222c60: 0x2484a6f0  addiu       $a0, $a0, -0x5910
    ctx->pc = 0x222c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944496));
    // 0x222c64: 0xaf040020  sw          $a0, 0x20($t8)
    ctx->pc = 0x222c64u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 4));
label_222c68:
    // 0x222c68: 0xadf60000  sw          $s6, 0x0($t7)
    ctx->pc = 0x222c68u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 22));
label_222c6c:
    // 0x222c6c: 0x938c2  srl         $a3, $t1, 3
    ctx->pc = 0x222c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
label_222c70:
    // 0x222c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222c74: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x222c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x222c78: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x222c78u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x222c7c: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x222c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x222c80: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x222c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x222c84: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x222c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x222c88: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x222c88u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x222c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x222c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x222c90: 0xaf0d0010  sw          $t5, 0x10($t8)
    ctx->pc = 0x222c90u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 13));
    // 0x222c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x222c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222c98: 0x150182b  sltu        $v1, $t2, $s0
    ctx->pc = 0x222c98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x222c9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x222c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x222ca0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x222CA0u;
    {
        const bool branch_taken_0x222ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CA0u;
        // 0x222ca4: 0x1625824  and         $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ca0) {
            ctx->pc = 0x222CC4u;
            goto label_222cc4;
        }
    }
    ctx->pc = 0x222CA8u;
    // 0x222ca8: 0x20a1023  subu        $v0, $s0, $t2
    ctx->pc = 0x222ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x222cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x222CACu;
    {
        const bool branch_taken_0x222cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CACu;
        // 0x222cb0: 0x24420005  addiu       $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cac) {
            ctx->pc = 0x222CD0u;
            goto label_222cd0;
        }
    }
    ctx->pc = 0x222CB4u;
label_222cb4:
    // 0x222cb4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x222cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x222cb8: 0xd1282b  sltu        $a1, $a2, $s1
    ctx->pc = 0x222cb8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x222cbc: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x222CBCu;
    {
        const bool branch_taken_0x222cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CBCu;
        // 0x222cc0: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cbc) {
            ctx->pc = 0x222C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222c6c;
        }
    }
    ctx->pc = 0x222CC4u;
label_222cc4:
    // 0x222cc4: 0x1501823  subu        $v1, $t2, $s0
    ctx->pc = 0x222cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x222cc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222ccc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222cd0:
    // 0x222cd0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x222CD0u;
    {
        const bool branch_taken_0x222cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CD0u;
        // 0x222cd4: 0xaf020004  sw          $v0, 0x4($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cd0) {
            ctx->pc = 0x222CE4u;
            goto label_222ce4;
        }
    }
    ctx->pc = 0x222CD8u;
    // 0x222cd8: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x222cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x222cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x222CDCu;
    {
        const bool branch_taken_0x222cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CDCu;
        // 0x222ce0: 0x24420101  addiu       $v0, $v0, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cdc) {
            ctx->pc = 0x222CF0u;
            goto label_222cf0;
        }
    }
    ctx->pc = 0x222CE4u;
label_222ce4:
    // 0x222ce4: 0xd11823  subu        $v1, $a2, $s1
    ctx->pc = 0x222ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x222ce8: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x222ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x222cec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222cf0:
    // 0x222cf0: 0xaf020014  sw          $v0, 0x14($t8)
    ctx->pc = 0x222cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 2));
    // 0x222cf4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x222cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x222cf8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x222cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x222cfc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x222cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x222d00: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x222d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222d04: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x222d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222d08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x222d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222d0c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x222d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222d10: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x222d10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222d14: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x222d14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222d18: 0xade90048  sw          $t1, 0x48($t7)
    ctx->pc = 0x222d18u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 72), GPR_U32(ctx, 9));
    // 0x222d1c: 0xfdeb0040  sd          $t3, 0x40($t7)
    ctx->pc = 0x222d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 11));
    // 0x222d20: 0x3e00008  jr          $ra
    ctx->pc = 0x222D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D20u;
        // 0x222d24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222D28u;
}
