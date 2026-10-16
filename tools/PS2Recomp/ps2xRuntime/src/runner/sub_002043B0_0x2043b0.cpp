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

// Function: sub_002043B0
// Address: 0x2043b0 - 0x204530
void sub_002043B0_0x2043b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002043B0_0x2043b0");
#endif

    switch (ctx->pc) {
        case 0x2043f0u: goto label_2043f0;
        case 0x20440cu: goto label_20440c;
        case 0x204424u: goto label_204424;
        case 0x20442cu: goto label_20442c;
        case 0x204440u: goto label_204440;
        case 0x204480u: goto label_204480;
        case 0x2044a0u: goto label_2044a0;
        case 0x2044b0u: goto label_2044b0;
        case 0x2044b4u: goto label_2044b4;
        case 0x204504u: goto label_204504;
        default: break;
    }

    ctx->pc = 0x2043b0u;

    // 0x2043b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2043b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2043b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2043b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2043b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2043bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2043bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2043c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2043c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2043c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2043c8: 0x24422cf8  addiu       $v0, $v0, 0x2CF8
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11512));
    // 0x2043cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2043ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2043d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2043d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2043d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2043d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2043d8: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x702CFCu));
    // 0x2043dc: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x2043DCu;
    {
        const bool branch_taken_0x2043dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043DCu;
        // 0x2043e0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043dc) {
            ctx->pc = 0x2044ACu;
            goto label_2044ac;
        }
    }
    ctx->pc = 0x2043E4u;
    // 0x2043e4: 0x24536a48  addiu       $s3, $v0, 0x6A48
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x2043e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2043ec: 0x0  nop
    ctx->pc = 0x2043ecu;
    // NOP
label_2043f0:
    // 0x2043f0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2043f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2043f4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2043f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2043f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2043fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2043FCu;
    {
        const bool branch_taken_0x2043fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043FCu;
        // 0x204400: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043fc) {
            ctx->pc = 0x20440Cu;
            goto label_20440c;
        }
    }
    ctx->pc = 0x204404u;
    // 0x204404: 0xc081268  jal         func_2049A0
    ctx->pc = 0x204404u;
    SET_GPR_U32(ctx, 31, 0x20440Cu);
    ctx->pc = 0x2049A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2049A0u, 0x204404u, 0x20440Cu)) {
        return;
    }
    ctx->pc = 0x20440Cu;
label_20440c:
    // 0x20440c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x20440cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x204410: 0x52200024  beql        $s1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x204410u;
    {
        const bool branch_taken_0x204410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x204410) {
            ctx->pc = 0x204414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204410u;
            // 0x204414: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2044A4u;
            goto label_2044a4;
        }
    }
    ctx->pc = 0x204418u;
    // 0x204418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20441c: 0xc080dd6  jal         func_203758
    ctx->pc = 0x20441Cu;
    SET_GPR_U32(ctx, 31, 0x204424u);
    ctx->pc = 0x204420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20441Cu;
    // 0x204420: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203758u, 0x20441Cu, 0x204424u)) {
        return;
    }
    ctx->pc = 0x204424u;
label_204424:
    // 0x204424: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204424u;
    SET_GPR_U32(ctx, 31, 0x20442Cu);
    ctx->pc = 0x204428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204424u;
    // 0x204428: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204424u, 0x20442Cu)) {
        return;
    }
    ctx->pc = 0x20442Cu;
label_20442c:
    // 0x20442c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204430: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204430u;
    {
        const bool branch_taken_0x204430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204430u;
        // 0x204434: 0xae13000c  sw          $s3, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204430) {
            ctx->pc = 0x204498u;
            goto label_204498;
        }
    }
    ctx->pc = 0x204438u;
    // 0x204438: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x204438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20443c: 0x0  nop
    ctx->pc = 0x20443cu;
    // NOP
label_204440:
    // 0x204440: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x204440u;
    {
        const bool branch_taken_0x204440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204440) {
            ctx->pc = 0x204444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204440u;
            // 0x204444: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204490u;
            goto label_204490;
        }
    }
    ctx->pc = 0x204448u;
    // 0x204448: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x204448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20444c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20444Cu;
    {
        const bool branch_taken_0x20444c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20444Cu;
        // 0x204450: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20444c) {
            ctx->pc = 0x20445Cu;
            goto label_20445c;
        }
    }
    ctx->pc = 0x204454u;
    // 0x204454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204454u;
    {
        const bool branch_taken_0x204454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204454u;
        // 0x204458: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204454) {
            ctx->pc = 0x204460u;
            goto label_204460;
        }
    }
    ctx->pc = 0x20445Cu;
label_20445c:
    // 0x20445c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x20445cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204460:
    // 0x204460: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204464: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204464u;
    {
        const bool branch_taken_0x204464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204464u;
        // 0x204468: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204464) {
            ctx->pc = 0x204474u;
            goto label_204474;
        }
    }
    ctx->pc = 0x20446Cu;
    // 0x20446c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20446Cu;
    {
        const bool branch_taken_0x20446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20446Cu;
        // 0x204470: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20446c) {
            ctx->pc = 0x204478u;
            goto label_204478;
        }
    }
    ctx->pc = 0x204474u;
label_204474:
    // 0x204474: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x204474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_204478:
    // 0x204478: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204478u;
    SET_GPR_U32(ctx, 31, 0x204480u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204478u, 0x204480u)) {
        return;
    }
    ctx->pc = 0x204480u;
label_204480:
    // 0x204480: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204488: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x204488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20448c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_204490:
    // 0x204490: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204490u;
    {
        const bool branch_taken_0x204490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204490) {
            ctx->pc = 0x204494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204490u;
            // 0x204494: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204440;
        }
    }
    ctx->pc = 0x204498u;
label_204498:
    // 0x204498: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204498u;
    SET_GPR_U32(ctx, 31, 0x2044A0u);
    ctx->pc = 0x20449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204498u;
    // 0x20449c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204498u, 0x2044A0u)) {
        return;
    }
    ctx->pc = 0x2044A0u;
label_2044a0:
    // 0x2044a0: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2044a4:
    // 0x2044a4: 0x5640ffd2  bnel        $s2, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2044A4u;
    {
        const bool branch_taken_0x2044a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2044a4) {
            ctx->pc = 0x2044A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2044A4u;
            // 0x2044a8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2043F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2043f0;
        }
    }
    ctx->pc = 0x2044ACu;
label_2044ac:
    // 0x2044ac: 0x26902cf8  addiu       $s0, $s4, 0x2CF8
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 11512));
label_2044b0:
    // 0x2044b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2044b4:
    // 0x2044b4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2044B4u;
    {
        const bool branch_taken_0x2044b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2044b4) {
            ctx->pc = 0x2044B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2044B4u;
            // 0x2044b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204514u;
            goto label_204514;
        }
    }
    ctx->pc = 0x2044BCu;
    // 0x2044bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2044c0: 0x0  nop
    ctx->pc = 0x2044c0u;
    // NOP
    // 0x2044c4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2044C4u;
    {
        const bool branch_taken_0x2044c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2044c4) {
            ctx->pc = 0x2044B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2044b4;
        }
    }
    ctx->pc = 0x2044CCu;
    // 0x2044cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2044d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2044D0u;
    {
        const bool branch_taken_0x2044d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D0u;
        // 0x2044d4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d0) {
            ctx->pc = 0x2044E0u;
            goto label_2044e0;
        }
    }
    ctx->pc = 0x2044D8u;
    // 0x2044d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2044D8u;
    {
        const bool branch_taken_0x2044d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D8u;
        // 0x2044dc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d8) {
            ctx->pc = 0x2044E4u;
            goto label_2044e4;
        }
    }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2044e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2044e4:
    // 0x2044e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2044e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2044E8u;
    {
        const bool branch_taken_0x2044e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2044ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044E8u;
        // 0x2044ec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044e8) {
            ctx->pc = 0x2044F8u;
            goto label_2044f8;
        }
    }
    ctx->pc = 0x2044F0u;
    // 0x2044f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2044F0u;
    {
        const bool branch_taken_0x2044f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F0u;
        // 0x2044f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044f0) {
            ctx->pc = 0x2044FCu;
            goto label_2044fc;
        }
    }
    ctx->pc = 0x2044F8u;
label_2044f8:
    // 0x2044f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2044f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2044fc:
    // 0x2044fc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2044FCu;
    SET_GPR_U32(ctx, 31, 0x204504u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2044FCu, 0x204504u)) {
        return;
    }
    ctx->pc = 0x204504u;
label_204504:
    // 0x204504: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20450c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x20450Cu;
    {
        const bool branch_taken_0x20450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20450Cu;
        // 0x204510: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20450c) {
            ctx->pc = 0x2044B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2044b0;
        }
    }
    ctx->pc = 0x204514u;
label_204514:
    // 0x204514: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x204514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204518: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x204518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20451c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20451cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204520: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x204520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204528: 0x3e00008  jr          $ra
    ctx->pc = 0x204528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204528u;
        // 0x20452c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204530u;
}
