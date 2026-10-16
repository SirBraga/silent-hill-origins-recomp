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

// Function: sub_001DD3D0
// Address: 0x1dd3d0 - 0x1dd4a8
void sub_001DD3D0_0x1dd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD3D0_0x1dd3d0");
#endif

    switch (ctx->pc) {
        case 0x1dd3d0u: goto label_1dd3d0;
        case 0x1dd3d4u: goto label_1dd3d4;
        case 0x1dd3d8u: goto label_1dd3d8;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3e0u: goto label_1dd3e0;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3e8u: goto label_1dd3e8;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3f0u: goto label_1dd3f0;
        case 0x1dd3f4u: goto label_1dd3f4;
        case 0x1dd3f8u: goto label_1dd3f8;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd404u: goto label_1dd404;
        case 0x1dd408u: goto label_1dd408;
        case 0x1dd40cu: goto label_1dd40c;
        case 0x1dd410u: goto label_1dd410;
        case 0x1dd414u: goto label_1dd414;
        case 0x1dd418u: goto label_1dd418;
        case 0x1dd41cu: goto label_1dd41c;
        case 0x1dd420u: goto label_1dd420;
        case 0x1dd424u: goto label_1dd424;
        case 0x1dd428u: goto label_1dd428;
        case 0x1dd42cu: goto label_1dd42c;
        case 0x1dd430u: goto label_1dd430;
        case 0x1dd434u: goto label_1dd434;
        case 0x1dd438u: goto label_1dd438;
        case 0x1dd43cu: goto label_1dd43c;
        case 0x1dd440u: goto label_1dd440;
        case 0x1dd444u: goto label_1dd444;
        case 0x1dd448u: goto label_1dd448;
        case 0x1dd44cu: goto label_1dd44c;
        case 0x1dd450u: goto label_1dd450;
        case 0x1dd454u: goto label_1dd454;
        case 0x1dd458u: goto label_1dd458;
        case 0x1dd45cu: goto label_1dd45c;
        case 0x1dd460u: goto label_1dd460;
        case 0x1dd464u: goto label_1dd464;
        case 0x1dd468u: goto label_1dd468;
        case 0x1dd46cu: goto label_1dd46c;
        case 0x1dd470u: goto label_1dd470;
        case 0x1dd474u: goto label_1dd474;
        case 0x1dd478u: goto label_1dd478;
        case 0x1dd47cu: goto label_1dd47c;
        case 0x1dd480u: goto label_1dd480;
        case 0x1dd484u: goto label_1dd484;
        case 0x1dd488u: goto label_1dd488;
        case 0x1dd48cu: goto label_1dd48c;
        case 0x1dd490u: goto label_1dd490;
        case 0x1dd494u: goto label_1dd494;
        case 0x1dd498u: goto label_1dd498;
        case 0x1dd49cu: goto label_1dd49c;
        case 0x1dd4a0u: goto label_1dd4a0;
        case 0x1dd4a4u: goto label_1dd4a4;
        default: break;
    }

    ctx->pc = 0x1dd3d0u;

label_1dd3d0:
    // 0x1dd3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1dd3d4:
    // 0x1dd3d4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_1dd3d8:
    // 0x1dd3d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dd3dc:
    // 0x1dd3dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3e0:
    // 0x1dd3e0: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1dd3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_1dd3e4:
    // 0x1dd3e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1dd3e8:
    // 0x1dd3e8: 0x8e42e664  lw          $v0, -0x199C($s2)
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
label_1dd3ec:
    // 0x1dd3ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3f0:
    // 0x1dd3f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd3f4:
    // 0x1dd3f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd3f8:
    // 0x1dd3f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dd3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1dd3fc:
    // 0x1dd3fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dd400:
    // 0x1dd400: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1dd400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd404:
    // 0x1dd404: 0x1085c0  sll         $s0, $s0, 23
    ctx->pc = 0x1dd404u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 23));
label_1dd408:
    // 0x1dd408: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1dd408u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1dd40c:
    // 0x1dd40c: 0xc08c530  jal         func_2314C0
label_1dd410:
    if (ctx->pc == 0x1DD410u) {
        ctx->pc = 0x1DD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD40Cu;
        // 0x1dd410: 0x36100068  ori         $s0, $s0, 0x68 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD414u;
        goto label_1dd414;
    }
    ctx->pc = 0x1DD40Cu;
    SET_GPR_U32(ctx, 31, 0x1DD414u);
    ctx->pc = 0x1DD410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD40Cu;
    // 0x1dd410: 0x36100068  ori         $s0, $s0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1DD40Cu, 0x1DD414u)) {
        return;
    }
    ctx->pc = 0x1DD414u;
label_1dd414:
    // 0x1dd414: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1dd414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1dd418:
    // 0x1dd418: 0xc08c530  jal         func_2314C0
label_1dd41c:
    if (ctx->pc == 0x1DD41Cu) {
        ctx->pc = 0x1DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD418u;
        // 0x1dd41c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD420u;
        goto label_1dd420;
    }
    ctx->pc = 0x1DD418u;
    SET_GPR_U32(ctx, 31, 0x1DD420u);
    ctx->pc = 0x1DD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD418u;
    // 0x1dd41c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1DD418u, 0x1DD420u)) {
        return;
    }
    ctx->pc = 0x1DD420u;
label_1dd420:
    // 0x1dd420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd424:
    // 0x1dd424: 0xc08c4aa  jal         func_2312A8
label_1dd428:
    if (ctx->pc == 0x1DD428u) {
        ctx->pc = 0x1DD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD424u;
        // 0x1dd428: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD42Cu;
        goto label_1dd42c;
    }
    ctx->pc = 0x1DD424u;
    SET_GPR_U32(ctx, 31, 0x1DD42Cu);
    ctx->pc = 0x1DD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD424u;
    // 0x1dd428: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DD424u, 0x1DD42Cu)) {
        return;
    }
    ctx->pc = 0x1DD42Cu;
label_1dd42c:
    // 0x1dd42c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dd42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd430:
    // 0x1dd430: 0xc08c4aa  jal         func_2312A8
label_1dd434:
    if (ctx->pc == 0x1DD434u) {
        ctx->pc = 0x1DD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD430u;
        // 0x1dd434: 0x2405080b  addiu       $a1, $zero, 0x80B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD438u;
        goto label_1dd438;
    }
    ctx->pc = 0x1DD430u;
    SET_GPR_U32(ctx, 31, 0x1DD438u);
    ctx->pc = 0x1DD434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD430u;
    // 0x1dd434: 0x2405080b  addiu       $a1, $zero, 0x80B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DD430u, 0x1DD438u)) {
        return;
    }
    ctx->pc = 0x1DD438u;
label_1dd438:
    // 0x1dd438: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1dd43c:
    if (ctx->pc == 0x1DD43Cu) {
        ctx->pc = 0x1DD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD438u;
        // 0x1dd43c: 0x8e42e664  lw          $v0, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD440u;
        goto label_1dd440;
    }
    ctx->pc = 0x1DD438u;
    {
        const bool branch_taken_0x1dd438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD438u;
        // 0x1dd43c: 0x8e42e664  lw          $v0, -0x199C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd438) {
            ctx->pc = 0x1DD478u;
            goto label_1dd478;
        }
    }
    ctx->pc = 0x1DD440u;
label_1dd440:
    // 0x1dd440: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1dd440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dd444:
    // 0x1dd444: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1dd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd448:
    // 0x1dd448: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1dd44c:
    if (ctx->pc == 0x1DD44Cu) {
        ctx->pc = 0x1DD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD448u;
        // 0x1dd44c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD450u;
        goto label_1dd450;
    }
    ctx->pc = 0x1DD448u;
    {
        const bool branch_taken_0x1dd448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD448u;
        // 0x1dd44c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd448) {
            ctx->pc = 0x1DD464u;
            goto label_1dd464;
        }
    }
    ctx->pc = 0x1DD450u;
label_1dd450:
    // 0x1dd450: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd454:
    // 0x1dd454: 0x40f809  jalr        $v0
label_1dd458:
    if (ctx->pc == 0x1DD458u) {
        ctx->pc = 0x1DD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD454u;
        // 0x1dd458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD45Cu;
        goto label_1dd45c;
    }
    ctx->pc = 0x1DD454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD45Cu);
        ctx->pc = 0x1DD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD454u;
        // 0x1dd458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD454u, 0x1DD45Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD45Cu;
label_1dd45c:
    // 0x1dd45c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd460:
    if (ctx->pc == 0x1DD460u) {
        ctx->pc = 0x1DD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD45Cu;
        // 0x1dd460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD464u;
        goto label_1dd464;
    }
    ctx->pc = 0x1DD45Cu;
    {
        const bool branch_taken_0x1dd45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD45Cu;
        // 0x1dd460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd45c) {
            ctx->pc = 0x1DD474u;
            goto label_1dd474;
        }
    }
    ctx->pc = 0x1DD464u;
label_1dd464:
    // 0x1dd464: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd468:
    // 0x1dd468: 0x40f809  jalr        $v0
label_1dd46c:
    if (ctx->pc == 0x1DD46Cu) {
        ctx->pc = 0x1DD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD468u;
        // 0x1dd46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD470u;
        goto label_1dd470;
    }
    ctx->pc = 0x1DD468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD470u);
        ctx->pc = 0x1DD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD468u;
        // 0x1dd46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD468u, 0x1DD470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD470u;
label_1dd470:
    // 0x1dd470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd474:
    // 0x1dd474: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dd474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dd478:
    // 0x1dd478: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd47c:
    // 0x1dd47c: 0xc08c4aa  jal         func_2312A8
label_1dd480:
    if (ctx->pc == 0x1DD480u) {
        ctx->pc = 0x1DD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD47Cu;
        // 0x1dd480: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD484u;
        goto label_1dd484;
    }
    ctx->pc = 0x1DD47Cu;
    SET_GPR_U32(ctx, 31, 0x1DD484u);
    ctx->pc = 0x1DD480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD47Cu;
    // 0x1dd480: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DD47Cu, 0x1DD484u)) {
        return;
    }
    ctx->pc = 0x1DD484u;
label_1dd484:
    // 0x1dd484: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1dd488:
    // 0x1dd488: 0xc08c4aa  jal         func_2312A8
label_1dd48c:
    if (ctx->pc == 0x1DD48Cu) {
        ctx->pc = 0x1DD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD488u;
        // 0x1dd48c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD490u;
        goto label_1dd490;
    }
    ctx->pc = 0x1DD488u;
    SET_GPR_U32(ctx, 31, 0x1DD490u);
    ctx->pc = 0x1DD48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD488u;
    // 0x1dd48c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DD488u, 0x1DD490u)) {
        return;
    }
    ctx->pc = 0x1DD490u;
label_1dd490:
    // 0x1dd490: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dd490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd494:
    // 0x1dd494: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd498:
    // 0x1dd498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd49c:
    // 0x1dd49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd4a0:
    // 0x1dd4a0: 0x3e00008  jr          $ra
label_1dd4a4:
    if (ctx->pc == 0x1DD4A4u) {
        ctx->pc = 0x1DD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4A0u;
        // 0x1dd4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD4A8u;
        goto label_fallthrough_0x1dd4a0;
    }
    ctx->pc = 0x1DD4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4A0u;
        // 0x1dd4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd4a0:
    ctx->pc = 0x1DD4A8u;
}
