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

// Function: sub_00258838
// Address: 0x258838 - 0x258930
void sub_00258838_0x258838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258838_0x258838");
#endif

    switch (ctx->pc) {
        case 0x258838u: goto label_258838;
        case 0x25883cu: goto label_25883c;
        case 0x258840u: goto label_258840;
        case 0x258844u: goto label_258844;
        case 0x258848u: goto label_258848;
        case 0x25884cu: goto label_25884c;
        case 0x258850u: goto label_258850;
        case 0x258854u: goto label_258854;
        case 0x258858u: goto label_258858;
        case 0x25885cu: goto label_25885c;
        case 0x258860u: goto label_258860;
        case 0x258864u: goto label_258864;
        case 0x258868u: goto label_258868;
        case 0x25886cu: goto label_25886c;
        case 0x258870u: goto label_258870;
        case 0x258874u: goto label_258874;
        case 0x258878u: goto label_258878;
        case 0x25887cu: goto label_25887c;
        case 0x258880u: goto label_258880;
        case 0x258884u: goto label_258884;
        case 0x258888u: goto label_258888;
        case 0x25888cu: goto label_25888c;
        case 0x258890u: goto label_258890;
        case 0x258894u: goto label_258894;
        case 0x258898u: goto label_258898;
        case 0x25889cu: goto label_25889c;
        case 0x2588a0u: goto label_2588a0;
        case 0x2588a4u: goto label_2588a4;
        case 0x2588a8u: goto label_2588a8;
        case 0x2588acu: goto label_2588ac;
        case 0x2588b0u: goto label_2588b0;
        case 0x2588b4u: goto label_2588b4;
        case 0x2588b8u: goto label_2588b8;
        case 0x2588bcu: goto label_2588bc;
        case 0x2588c0u: goto label_2588c0;
        case 0x2588c4u: goto label_2588c4;
        case 0x2588c8u: goto label_2588c8;
        case 0x2588ccu: goto label_2588cc;
        case 0x2588d0u: goto label_2588d0;
        case 0x2588d4u: goto label_2588d4;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588dcu: goto label_2588dc;
        case 0x2588e0u: goto label_2588e0;
        case 0x2588e4u: goto label_2588e4;
        case 0x2588e8u: goto label_2588e8;
        case 0x2588ecu: goto label_2588ec;
        case 0x2588f0u: goto label_2588f0;
        case 0x2588f4u: goto label_2588f4;
        case 0x2588f8u: goto label_2588f8;
        case 0x2588fcu: goto label_2588fc;
        case 0x258900u: goto label_258900;
        case 0x258904u: goto label_258904;
        case 0x258908u: goto label_258908;
        case 0x25890cu: goto label_25890c;
        case 0x258910u: goto label_258910;
        case 0x258914u: goto label_258914;
        case 0x258918u: goto label_258918;
        case 0x25891cu: goto label_25891c;
        case 0x258920u: goto label_258920;
        case 0x258924u: goto label_258924;
        case 0x258928u: goto label_258928;
        case 0x25892cu: goto label_25892c;
        default: break;
    }

    ctx->pc = 0x258838u;

label_258838:
    // 0x258838: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x258838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25883c:
    // 0x25883c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_258840:
    // 0x258840: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x258840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_258844:
    // 0x258844: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x258844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_258848:
    // 0x258848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x258848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25884c:
    // 0x25884c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25884cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_258850:
    // 0x258850: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x258850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_258854:
    // 0x258854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x258854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258858:
    // 0x258858: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x258858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25885c:
    // 0x25885c: 0x24530fc8  addiu       $s3, $v0, 0xFC8
    ctx->pc = 0x25885cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_258860:
    // 0x258860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_258864:
    // 0x258864: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x258864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_258868:
    // 0x258868: 0x40f809  jalr        $v0
label_25886c:
    if (ctx->pc == 0x25886Cu) {
        ctx->pc = 0x25886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258868u;
        // 0x25886c: 0x8f8485f0  lw          $a0, -0x7A10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258870u;
        goto label_258870;
    }
    ctx->pc = 0x258868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258870u);
        ctx->pc = 0x25886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258868u;
        // 0x25886c: 0x8f8485f0  lw          $a0, -0x7A10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258868u, 0x258870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258870u;
label_258870:
    // 0x258870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258874:
    // 0x258874: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_258878:
    if (ctx->pc == 0x258878u) {
        ctx->pc = 0x258878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258874u;
        // 0x258878: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25887Cu;
        goto label_25887c;
    }
    ctx->pc = 0x258874u;
    {
        const bool branch_taken_0x258874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x258878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258874u;
        // 0x258878: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258874) {
            ctx->pc = 0x2588E8u;
            goto label_2588e8;
        }
    }
    ctx->pc = 0x25887Cu;
label_25887c:
    // 0x25887c: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_258880:
    if (ctx->pc == 0x258880u) {
        ctx->pc = 0x258880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25887Cu;
        // 0x258880: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258884u;
        goto label_258884;
    }
    ctx->pc = 0x25887Cu;
    {
        const bool branch_taken_0x25887c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x258880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25887Cu;
        // 0x258880: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25887c) {
            ctx->pc = 0x2588D8u;
            goto label_2588d8;
        }
    }
    ctx->pc = 0x258884u;
label_258884:
    // 0x258884: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x258884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_258888:
    // 0x258888: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x258888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_25888c:
    // 0x25888c: 0x2438818  mult        $s1, $s2, $v1
    ctx->pc = 0x25888cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_258890:
    // 0x258890: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x258890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_258894:
    // 0x258894: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x258894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_258898:
    // 0x258898: 0x40f809  jalr        $v0
label_25889c:
    if (ctx->pc == 0x25889Cu) {
        ctx->pc = 0x25889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258898u;
        // 0x25889c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588A0u;
        goto label_2588a0;
    }
    ctx->pc = 0x258898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2588A0u);
        ctx->pc = 0x25889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258898u;
        // 0x25889c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258898u, 0x2588A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2588A0u;
label_2588a0:
    // 0x2588a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2588a4:
    if (ctx->pc == 0x2588A4u) {
        ctx->pc = 0x2588A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588A0u;
        // 0x2588a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588A8u;
        goto label_2588a8;
    }
    ctx->pc = 0x2588A0u;
    {
        const bool branch_taken_0x2588a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2588A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588A0u;
        // 0x2588a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588a0) {
            ctx->pc = 0x2588D0u;
            goto label_2588d0;
        }
    }
    ctx->pc = 0x2588A8u;
label_2588a8:
    // 0x2588a8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2588a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_2588ac:
    // 0x2588ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2588acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2588b0:
    // 0x2588b0: 0x40f809  jalr        $v0
label_2588b4:
    if (ctx->pc == 0x2588B4u) {
        ctx->pc = 0x2588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588B0u;
        // 0x2588b4: 0x8f8485f0  lw          $a0, -0x7A10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588B8u;
        goto label_2588b8;
    }
    ctx->pc = 0x2588B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2588B8u);
        ctx->pc = 0x2588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588B0u;
        // 0x2588b4: 0x8f8485f0  lw          $a0, -0x7A10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2588B0u, 0x2588B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2588B8u;
label_2588b8:
    // 0x2588b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2588b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2588bc:
    // 0x2588bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2588bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2588c0:
    // 0x2588c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2588c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2588c4:
    // 0x2588c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2588c8:
    if (ctx->pc == 0x2588C8u) {
        ctx->pc = 0x2588C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588C4u;
        // 0x2588c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588CCu;
        goto label_2588cc;
    }
    ctx->pc = 0x2588C4u;
    {
        const bool branch_taken_0x2588c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588C4u;
        // 0x2588c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588c4) {
            ctx->pc = 0x2588F8u;
            goto label_2588f8;
        }
    }
    ctx->pc = 0x2588CCu;
label_2588cc:
    // 0x2588cc: 0x0  nop
    ctx->pc = 0x2588ccu;
    // NOP
label_2588d0:
    // 0x2588d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2588d4:
    if (ctx->pc == 0x2588D4u) {
        ctx->pc = 0x2588D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588D0u;
        // 0x2588d4: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588D8u;
        goto label_2588d8;
    }
    ctx->pc = 0x2588D0u;
    {
        const bool branch_taken_0x2588d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588D0u;
        // 0x2588d4: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588d0) {
            ctx->pc = 0x2588E0u;
            goto label_2588e0;
        }
    }
    ctx->pc = 0x2588D8u;
label_2588d8:
    // 0x2588d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2588d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2588dc:
    // 0x2588dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2588dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2588e0:
    // 0x2588e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2588e4:
    if (ctx->pc == 0x2588E4u) {
        ctx->pc = 0x2588E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588E0u;
        // 0x2588e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2588E8u;
        goto label_2588e8;
    }
    ctx->pc = 0x2588E0u;
    {
        const bool branch_taken_0x2588e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588E0u;
        // 0x2588e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588e0) {
            ctx->pc = 0x258910u;
            goto label_258910;
        }
    }
    ctx->pc = 0x2588E8u;
label_2588e8:
    // 0x2588e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2588e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2588ec:
    // 0x2588ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2588ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2588f0:
    // 0x2588f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2588f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2588f4:
    // 0x2588f4: 0x0  nop
    ctx->pc = 0x2588f4u;
    // NOP
label_2588f8:
    // 0x2588f8: 0xc092848  jal         func_24A120
label_2588fc:
    if (ctx->pc == 0x2588FCu) {
        ctx->pc = 0x2588FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588F8u;
        // 0x2588fc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258900u;
        goto label_258900;
    }
    ctx->pc = 0x2588F8u;
    SET_GPR_U32(ctx, 31, 0x258900u);
    ctx->pc = 0x2588FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588F8u;
    // 0x2588fc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2588F8u, 0x258900u)) {
        return;
    }
    ctx->pc = 0x258900u;
label_258900:
    // 0x258900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_258904:
    // 0x258904: 0xc09281a  jal         func_24A068
label_258908:
    if (ctx->pc == 0x258908u) {
        ctx->pc = 0x258908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258904u;
        // 0x258908: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25890Cu;
        goto label_25890c;
    }
    ctx->pc = 0x258904u;
    SET_GPR_U32(ctx, 31, 0x25890Cu);
    ctx->pc = 0x258908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258904u;
    // 0x258908: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x258904u, 0x25890Cu)) {
        return;
    }
    ctx->pc = 0x25890Cu;
label_25890c:
    // 0x25890c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25890cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258910:
    // 0x258910: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x258910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_258914:
    // 0x258914: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x258914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_258918:
    // 0x258918: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x258918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25891c:
    // 0x25891c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25891cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_258920:
    // 0x258920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_258924:
    // 0x258924: 0x3e00008  jr          $ra
label_258928:
    if (ctx->pc == 0x258928u) {
        ctx->pc = 0x258928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258924u;
        // 0x258928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25892Cu;
        goto label_25892c;
    }
    ctx->pc = 0x258924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258924u;
        // 0x258928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25892Cu;
label_25892c:
    // 0x25892c: 0x0  nop
    ctx->pc = 0x25892cu;
    // NOP
    ctx->pc = 0x258930u;
}
