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

// Function: sub_00207408
// Address: 0x207408 - 0x2074d0
void sub_00207408_0x207408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207408_0x207408");
#endif

    switch (ctx->pc) {
        case 0x207408u: goto label_207408;
        case 0x20740cu: goto label_20740c;
        case 0x207410u: goto label_207410;
        case 0x207414u: goto label_207414;
        case 0x207418u: goto label_207418;
        case 0x20741cu: goto label_20741c;
        case 0x207420u: goto label_207420;
        case 0x207424u: goto label_207424;
        case 0x207428u: goto label_207428;
        case 0x20742cu: goto label_20742c;
        case 0x207430u: goto label_207430;
        case 0x207434u: goto label_207434;
        case 0x207438u: goto label_207438;
        case 0x20743cu: goto label_20743c;
        case 0x207440u: goto label_207440;
        case 0x207444u: goto label_207444;
        case 0x207448u: goto label_207448;
        case 0x20744cu: goto label_20744c;
        case 0x207450u: goto label_207450;
        case 0x207454u: goto label_207454;
        case 0x207458u: goto label_207458;
        case 0x20745cu: goto label_20745c;
        case 0x207460u: goto label_207460;
        case 0x207464u: goto label_207464;
        case 0x207468u: goto label_207468;
        case 0x20746cu: goto label_20746c;
        case 0x207470u: goto label_207470;
        case 0x207474u: goto label_207474;
        case 0x207478u: goto label_207478;
        case 0x20747cu: goto label_20747c;
        case 0x207480u: goto label_207480;
        case 0x207484u: goto label_207484;
        case 0x207488u: goto label_207488;
        case 0x20748cu: goto label_20748c;
        case 0x207490u: goto label_207490;
        case 0x207494u: goto label_207494;
        case 0x207498u: goto label_207498;
        case 0x20749cu: goto label_20749c;
        case 0x2074a0u: goto label_2074a0;
        case 0x2074a4u: goto label_2074a4;
        case 0x2074a8u: goto label_2074a8;
        case 0x2074acu: goto label_2074ac;
        case 0x2074b0u: goto label_2074b0;
        case 0x2074b4u: goto label_2074b4;
        case 0x2074b8u: goto label_2074b8;
        case 0x2074bcu: goto label_2074bc;
        case 0x2074c0u: goto label_2074c0;
        case 0x2074c4u: goto label_2074c4;
        case 0x2074c8u: goto label_2074c8;
        case 0x2074ccu: goto label_2074cc;
        default: break;
    }

    ctx->pc = 0x207408u;

label_207408:
    // 0x207408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20740c:
    // 0x20740c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_207410:
    // 0x207410: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x207410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_207414:
    // 0x207414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207418:
    // 0x207418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x207418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20741c:
    // 0x20741c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207420:
    // 0x207420: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_207424:
    // 0x207424: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x207424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
label_207428:
    // 0x207428: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x207428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20742c:
    // 0x20742c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_207430:
    if (ctx->pc == 0x207430u) {
        ctx->pc = 0x207430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20742Cu;
        // 0x207430: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207434u;
        goto label_207434;
    }
    ctx->pc = 0x20742Cu;
    {
        const bool branch_taken_0x20742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20742Cu;
        // 0x207430: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20742c) {
            ctx->pc = 0x20745Cu;
            goto label_20745c;
        }
    }
    ctx->pc = 0x207434u;
label_207434:
    // 0x207434: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207438:
    // 0x207438: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x207438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20743c:
    // 0x20743c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20743cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207440:
    // 0x207440: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_207444:
    // 0x207444: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207448:
    // 0x207448: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_20744c:
    // 0x20744c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207450:
    // 0x207450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207454:
    // 0x207454: 0x40f809  jalr        $v0
label_207458:
    if (ctx->pc == 0x207458u) {
        ctx->pc = 0x20745Cu;
        goto label_20745c;
    }
    ctx->pc = 0x207454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20745Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207454u, 0x20745Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20745Cu;
label_20745c:
    // 0x20745c: 0xc081d7c  jal         func_2075F0
label_207460:
    if (ctx->pc == 0x207460u) {
        ctx->pc = 0x207460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20745Cu;
        // 0x207460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207464u;
        goto label_207464;
    }
    ctx->pc = 0x20745Cu;
    SET_GPR_U32(ctx, 31, 0x207464u);
    ctx->pc = 0x207460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20745Cu;
    // 0x207460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2075F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2075F0u, 0x20745Cu, 0x207464u)) {
        return;
    }
    ctx->pc = 0x207464u;
label_207464:
    // 0x207464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207468:
    // 0x207468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20746c:
    // 0x20746c: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
label_207470:
    if (ctx->pc == 0x207470u) {
        ctx->pc = 0x207470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20746Cu;
        // 0x207470: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207474u;
        goto label_207474;
    }
    ctx->pc = 0x20746Cu;
    {
        const bool branch_taken_0x20746c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x207470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20746Cu;
        // 0x207470: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20746c) {
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x207474u;
label_207474:
    // 0x207474: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_207478:
    if (ctx->pc == 0x207478u) {
        ctx->pc = 0x207478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207474u;
        // 0x207478: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20747Cu;
        goto label_20747c;
    }
    ctx->pc = 0x207474u;
    {
        const bool branch_taken_0x207474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207474u;
        // 0x207478: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207474) {
            ctx->pc = 0x2074B4u;
            goto label_2074b4;
        }
    }
    ctx->pc = 0x20747Cu;
label_20747c:
    // 0x20747c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207480:
    // 0x207480: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_207484:
    if (ctx->pc == 0x207484u) {
        ctx->pc = 0x207484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207480u;
        // 0x207484: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207488u;
        goto label_207488;
    }
    ctx->pc = 0x207480u;
    {
        const bool branch_taken_0x207480 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x207484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207480u;
        // 0x207484: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207480) {
            ctx->pc = 0x2074B4u;
            goto label_2074b4;
        }
    }
    ctx->pc = 0x207488u;
label_207488:
    // 0x207488: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_20748c:
    if (ctx->pc == 0x20748Cu) {
        ctx->pc = 0x20748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207488u;
        // 0x20748c: 0x24030033  addiu       $v1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207490u;
        goto label_207490;
    }
    ctx->pc = 0x207488u;
    {
        const bool branch_taken_0x207488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207488u;
        // 0x20748c: 0x24030033  addiu       $v1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207488) {
            ctx->pc = 0x2074A8u;
            goto label_2074a8;
        }
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207494:
    // 0x207494: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x207494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_207498:
    // 0x207498: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20749c:
    // 0x20749c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2074a0:
    // 0x2074a0: 0x60f809  jalr        $v1
label_2074a4:
    if (ctx->pc == 0x2074A4u) {
        ctx->pc = 0x2074A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074A0u;
        // 0x2074a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074A8u;
        goto label_2074a8;
    }
    ctx->pc = 0x2074A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2074A8u);
        ctx->pc = 0x2074A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074A0u;
        // 0x2074a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074A0u, 0x2074A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2074A8u;
label_2074a8:
    // 0x2074a8: 0xc08701a  jal         func_21C068
label_2074ac:
    if (ctx->pc == 0x2074ACu) {
        ctx->pc = 0x2074ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074A8u;
        // 0x2074ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074B0u;
        goto label_2074b0;
    }
    ctx->pc = 0x2074A8u;
    SET_GPR_U32(ctx, 31, 0x2074B0u);
    ctx->pc = 0x2074ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074A8u;
    // 0x2074ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21C068u, 0x2074A8u, 0x2074B0u)) {
        return;
    }
    ctx->pc = 0x2074B0u;
label_2074b0:
    // 0x2074b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2074b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2074b4:
    // 0x2074b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2074b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2074b8:
    // 0x2074b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2074b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2074bc:
    // 0x2074bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2074bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2074c0:
    // 0x2074c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2074c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2074c4:
    // 0x2074c4: 0x3e00008  jr          $ra
label_2074c8:
    if (ctx->pc == 0x2074C8u) {
        ctx->pc = 0x2074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074C4u;
        // 0x2074c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074CCu;
        goto label_2074cc;
    }
    ctx->pc = 0x2074C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074C4u;
        // 0x2074c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2074CCu;
label_2074cc:
    // 0x2074cc: 0x0  nop
    ctx->pc = 0x2074ccu;
    // NOP
    ctx->pc = 0x2074d0u;
}
