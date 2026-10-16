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

// Function: sub_002737B8
// Address: 0x2737b8 - 0x273870
void sub_002737B8_0x2737b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002737B8_0x2737b8");
#endif

    switch (ctx->pc) {
        case 0x2737b8u: goto label_2737b8;
        case 0x2737bcu: goto label_2737bc;
        case 0x2737c0u: goto label_2737c0;
        case 0x2737c4u: goto label_2737c4;
        case 0x2737c8u: goto label_2737c8;
        case 0x2737ccu: goto label_2737cc;
        case 0x2737d0u: goto label_2737d0;
        case 0x2737d4u: goto label_2737d4;
        case 0x2737d8u: goto label_2737d8;
        case 0x2737dcu: goto label_2737dc;
        case 0x2737e0u: goto label_2737e0;
        case 0x2737e4u: goto label_2737e4;
        case 0x2737e8u: goto label_2737e8;
        case 0x2737ecu: goto label_2737ec;
        case 0x2737f0u: goto label_2737f0;
        case 0x2737f4u: goto label_2737f4;
        case 0x2737f8u: goto label_2737f8;
        case 0x2737fcu: goto label_2737fc;
        case 0x273800u: goto label_273800;
        case 0x273804u: goto label_273804;
        case 0x273808u: goto label_273808;
        case 0x27380cu: goto label_27380c;
        case 0x273810u: goto label_273810;
        case 0x273814u: goto label_273814;
        case 0x273818u: goto label_273818;
        case 0x27381cu: goto label_27381c;
        case 0x273820u: goto label_273820;
        case 0x273824u: goto label_273824;
        case 0x273828u: goto label_273828;
        case 0x27382cu: goto label_27382c;
        case 0x273830u: goto label_273830;
        case 0x273834u: goto label_273834;
        case 0x273838u: goto label_273838;
        case 0x27383cu: goto label_27383c;
        case 0x273840u: goto label_273840;
        case 0x273844u: goto label_273844;
        case 0x273848u: goto label_273848;
        case 0x27384cu: goto label_27384c;
        case 0x273850u: goto label_273850;
        case 0x273854u: goto label_273854;
        case 0x273858u: goto label_273858;
        case 0x27385cu: goto label_27385c;
        case 0x273860u: goto label_273860;
        case 0x273864u: goto label_273864;
        case 0x273868u: goto label_273868;
        case 0x27386cu: goto label_27386c;
        default: break;
    }

    ctx->pc = 0x2737b8u;

label_2737b8:
    // 0x2737b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2737b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2737bc:
    // 0x2737bc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2737bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_2737c0:
    // 0x2737c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2737c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2737c4:
    // 0x2737c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2737c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2737c8:
    // 0x2737c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2737c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2737cc:
    // 0x2737cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2737ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2737d0:
    // 0x2737d0: 0x8c5053c8  lw          $s0, 0x53C8($v0)
    ctx->pc = 0x2737d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21448)));
label_2737d4:
    // 0x2737d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2737d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2737d8:
    // 0x2737d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2737d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2737dc:
    // 0x2737dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2737e0:
    if (ctx->pc == 0x2737E0u) {
        ctx->pc = 0x2737E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737DCu;
        // 0x2737e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737E4u;
        goto label_2737e4;
    }
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737DCu;
        // 0x2737e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x273810u;
            goto label_273810;
        }
    }
    ctx->pc = 0x2737E4u;
label_2737e4:
    // 0x2737e4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2737e8:
    // 0x2737e8: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x2737e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2737ec:
    // 0x2737ec: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_2737f0:
    // 0x2737f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2737f4:
    // 0x2737f4: 0x40f809  jalr        $v0
label_2737f8:
    if (ctx->pc == 0x2737F8u) {
        ctx->pc = 0x2737F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737F4u;
        // 0x2737f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737FCu;
        goto label_2737fc;
    }
    ctx->pc = 0x2737F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2737FCu);
        ctx->pc = 0x2737F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737F4u;
        // 0x2737f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2737F4u, 0x2737FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2737FCu;
label_2737fc:
    // 0x2737fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_273800:
    if (ctx->pc == 0x273800u) {
        ctx->pc = 0x273800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737FCu;
        // 0x273800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273804u;
        goto label_273804;
    }
    ctx->pc = 0x2737FCu;
    {
        const bool branch_taken_0x2737fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737FCu;
        // 0x273800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737fc) {
            ctx->pc = 0x27382Cu;
            goto label_27382c;
        }
    }
    ctx->pc = 0x273804u;
label_273804:
    // 0x273804: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x273804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_273808:
    // 0x273808: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_27380c:
    if (ctx->pc == 0x27380Cu) {
        ctx->pc = 0x27380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273808u;
        // 0x27380c: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273810u;
        goto label_273810;
    }
    ctx->pc = 0x273808u;
    {
        const bool branch_taken_0x273808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x273808) {
            ctx->pc = 0x27380Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273808u;
            // 0x27380c: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2737F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2737f0;
        }
    }
    ctx->pc = 0x273810u;
label_273810:
    // 0x273810: 0x266253c8  addiu       $v0, $s3, 0x53C8
    ctx->pc = 0x273810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21448));
label_273814:
    // 0x273814: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x273814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_273818:
    // 0x273818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27381c:
    if (ctx->pc == 0x27381Cu) {
        ctx->pc = 0x27381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273818u;
        // 0x27381c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273820u;
        goto label_273820;
    }
    ctx->pc = 0x273818u;
    {
        const bool branch_taken_0x273818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273818u;
        // 0x27381c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273818) {
            ctx->pc = 0x27382Cu;
            goto label_27382c;
        }
    }
    ctx->pc = 0x273820u;
label_273820:
    // 0x273820: 0x40f809  jalr        $v0
label_273824:
    if (ctx->pc == 0x273824u) {
        ctx->pc = 0x273824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273820u;
        // 0x273824: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273828u;
        goto label_273828;
    }
    ctx->pc = 0x273820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273828u);
        ctx->pc = 0x273824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273820u;
        // 0x273824: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273820u, 0x273828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273828u;
label_273828:
    // 0x273828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27382c:
    // 0x27382c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_273830:
    if (ctx->pc == 0x273830u) {
        ctx->pc = 0x273830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27382Cu;
        // 0x273830: 0x266253c8  addiu       $v0, $s3, 0x53C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273834u;
        goto label_273834;
    }
    ctx->pc = 0x27382Cu;
    {
        const bool branch_taken_0x27382c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27382Cu;
        // 0x273830: 0x266253c8  addiu       $v0, $s3, 0x53C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27382c) {
            ctx->pc = 0x273850u;
            goto label_273850;
        }
    }
    ctx->pc = 0x273834u;
label_273834:
    // 0x273834: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x273834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_273838:
    // 0x273838: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_27383c:
    if (ctx->pc == 0x27383Cu) {
        ctx->pc = 0x27383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273838u;
        // 0x27383c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273840u;
        goto label_273840;
    }
    ctx->pc = 0x273838u;
    {
        const bool branch_taken_0x273838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273838) {
            ctx->pc = 0x27383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273838u;
            // 0x27383c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273854u;
            goto label_273854;
        }
    }
    ctx->pc = 0x273840u;
label_273840:
    // 0x273840: 0x40f809  jalr        $v0
label_273844:
    if (ctx->pc == 0x273844u) {
        ctx->pc = 0x273844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273840u;
        // 0x273844: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273848u;
        goto label_273848;
    }
    ctx->pc = 0x273840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273848u);
        ctx->pc = 0x273844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273840u;
        // 0x273844: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273840u, 0x273848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273848u;
label_273848:
    // 0x273848: 0x10000002  b           . + 4 + (0x2 << 2)
label_27384c:
    if (ctx->pc == 0x27384Cu) {
        ctx->pc = 0x27384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273848u;
        // 0x27384c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273850u;
        goto label_273850;
    }
    ctx->pc = 0x273848u;
    {
        const bool branch_taken_0x273848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273848u;
        // 0x27384c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273848) {
            ctx->pc = 0x273854u;
            goto label_273854;
        }
    }
    ctx->pc = 0x273850u;
label_273850:
    // 0x273850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273854:
    // 0x273854: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x273854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273858:
    // 0x273858: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x273858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27385c:
    // 0x27385c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27385cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273860:
    // 0x273860: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x273860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273864:
    // 0x273864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273868:
    // 0x273868: 0x3e00008  jr          $ra
label_27386c:
    if (ctx->pc == 0x27386Cu) {
        ctx->pc = 0x27386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273868u;
        // 0x27386c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273870u;
        goto label_fallthrough_0x273868;
    }
    ctx->pc = 0x273868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273868u;
        // 0x27386c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x273868:
    ctx->pc = 0x273870u;
}
