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

// Function: sub_00160468
// Address: 0x160468 - 0x1605e0
void sub_00160468_0x160468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160468_0x160468");
#endif

    switch (ctx->pc) {
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        default: break;
    }

    ctx->pc = 0x160468u;

label_160468:
    // 0x160468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16046c:
    // 0x16046c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_160470:
    // 0x160470: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x160470u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_160474:
    // 0x160474: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x160474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_160478:
    // 0x160478: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x160478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_16047c:
    // 0x16047c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16047cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_160480:
    // 0x160480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_160484:
    // 0x160484: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x160484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_160488:
    // 0x160488: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x160488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_16048c:
    // 0x16048c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16048cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160490:
    // 0x160490: 0x8e028644  lw          $v0, -0x79BC($s0)
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936132)));
label_160494:
    // 0x160494: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x160494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160498:
    // 0x160498: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x160498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_16049c:
    // 0x16049c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1604a0:
    // 0x1604a0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1604a4:
    if (ctx->pc == 0x1604A4u) {
        ctx->pc = 0x1604A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A0u;
        // 0x1604a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604A8u;
        goto label_1604a8;
    }
    ctx->pc = 0x1604A0u;
    {
        const bool branch_taken_0x1604a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A0u;
        // 0x1604a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604a0) {
            ctx->pc = 0x1605B8u;
            goto label_1605b8;
        }
    }
    ctx->pc = 0x1604A8u;
label_1604a8:
    // 0x1604a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1604a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1604ac:
    // 0x1604ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1604acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1604b0:
    // 0x1604b0: 0x24510fd8  addiu       $s1, $v0, 0xFD8
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1604b4:
    // 0x1604b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1604b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1604b8:
    // 0x1604b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1604b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1604bc:
    // 0x1604bc: 0x40f809  jalr        $v0
label_1604c0:
    if (ctx->pc == 0x1604C0u) {
        ctx->pc = 0x1604C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604BCu;
        // 0x1604c0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604C4u;
        goto label_1604c4;
    }
    ctx->pc = 0x1604BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1604C4u);
        ctx->pc = 0x1604C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604BCu;
        // 0x1604c0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604BCu, 0x1604C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1604C4u;
label_1604c4:
    // 0x1604c4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1604c8:
    // 0x1604c8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1604c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1604cc:
    // 0x1604cc: 0x40f809  jalr        $v0
label_1604d0:
    if (ctx->pc == 0x1604D0u) {
        ctx->pc = 0x1604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604CCu;
        // 0x1604d0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604D4u;
        goto label_1604d4;
    }
    ctx->pc = 0x1604CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1604D4u);
        ctx->pc = 0x1604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604CCu;
        // 0x1604d0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604CCu, 0x1604D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1604D4u;
label_1604d4:
    // 0x1604d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1604d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1604d8:
    // 0x1604d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1604d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1604dc:
    // 0x1604dc: 0x40f809  jalr        $v0
label_1604e0:
    if (ctx->pc == 0x1604E0u) {
        ctx->pc = 0x1604E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604DCu;
        // 0x1604e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604E4u;
        goto label_1604e4;
    }
    ctx->pc = 0x1604DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1604E4u);
        ctx->pc = 0x1604E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604DCu;
        // 0x1604e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604DCu, 0x1604E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1604E4u;
label_1604e4:
    // 0x1604e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1604e8:
    // 0x1604e8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1604e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1604ec:
    // 0x1604ec: 0x40f809  jalr        $v0
label_1604f0:
    if (ctx->pc == 0x1604F0u) {
        ctx->pc = 0x1604F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604ECu;
        // 0x1604f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604F4u;
        goto label_1604f4;
    }
    ctx->pc = 0x1604ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1604F4u);
        ctx->pc = 0x1604F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604ECu;
        // 0x1604f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604ECu, 0x1604F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1604F4u;
label_1604f4:
    // 0x1604f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1604f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1604f8:
    // 0x1604f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1604fc:
    // 0x1604fc: 0x40f809  jalr        $v0
label_160500:
    if (ctx->pc == 0x160500u) {
        ctx->pc = 0x160500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604FCu;
        // 0x160500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160504u;
        goto label_160504;
    }
    ctx->pc = 0x1604FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160504u);
        ctx->pc = 0x160500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604FCu;
        // 0x160500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604FCu, 0x160504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160504u;
label_160504:
    // 0x160504: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160508:
    // 0x160508: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16050c:
    // 0x16050c: 0x40f809  jalr        $v0
label_160510:
    if (ctx->pc == 0x160510u) {
        ctx->pc = 0x160510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16050Cu;
        // 0x160510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160514u;
        goto label_160514;
    }
    ctx->pc = 0x16050Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160514u);
        ctx->pc = 0x160510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16050Cu;
        // 0x160510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16050Cu, 0x160514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160514u;
label_160514:
    // 0x160514: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160518:
    // 0x160518: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x160518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16051c:
    // 0x16051c: 0x40f809  jalr        $v0
label_160520:
    if (ctx->pc == 0x160520u) {
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160524u;
        goto label_160524;
    }
    ctx->pc = 0x16051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160524u);
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16051Cu, 0x160524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160524u;
label_160524:
    // 0x160524: 0xc08c576  jal         func_2315D8
label_160528:
    if (ctx->pc == 0x160528u) {
        ctx->pc = 0x160528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160524u;
        // 0x160528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16052Cu;
        goto label_16052c;
    }
    ctx->pc = 0x160524u;
    SET_GPR_U32(ctx, 31, 0x16052Cu);
    ctx->pc = 0x160528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160524u;
    // 0x160528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2315D8u, 0x160524u, 0x16052Cu)) {
        return;
    }
    ctx->pc = 0x16052Cu;
label_16052c:
    // 0x16052c: 0x8e108644  lw          $s0, -0x79BC($s0)
    ctx->pc = 0x16052cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936132)));
label_160530:
    // 0x160530: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_160534:
    if (ctx->pc == 0x160534u) {
        ctx->pc = 0x160534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160530u;
        // 0x160534: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160538u;
        goto label_160538;
    }
    ctx->pc = 0x160530u;
    {
        const bool branch_taken_0x160530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160530) {
            ctx->pc = 0x160534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160530u;
            // 0x160534: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160580u;
            goto label_160580;
        }
    }
    ctx->pc = 0x160538u;
label_160538:
    // 0x160538: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x160538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_16053c:
    // 0x16053c: 0x0  nop
    ctx->pc = 0x16053cu;
    // NOP
label_160540:
    // 0x160540: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_160544:
    if (ctx->pc == 0x160544u) {
        ctx->pc = 0x160544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160540u;
        // 0x160544: 0x8e100044  lw          $s0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160548u;
        goto label_160548;
    }
    ctx->pc = 0x160540u;
    {
        const bool branch_taken_0x160540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160540) {
            ctx->pc = 0x160544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160540u;
            // 0x160544: 0x8e100044  lw          $s0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160574u;
            goto label_160574;
        }
    }
    ctx->pc = 0x160548u;
label_160548:
    // 0x160548: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x160548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_16054c:
    // 0x16054c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160550:
    // 0x160550: 0x40f809  jalr        $v0
label_160554:
    if (ctx->pc == 0x160554u) {
        ctx->pc = 0x160554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160550u;
        // 0x160554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160558u;
        goto label_160558;
    }
    ctx->pc = 0x160550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160558u);
        ctx->pc = 0x160554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160550u;
        // 0x160554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160550u, 0x160558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160558u;
label_160558:
    // 0x160558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16055c:
    // 0x16055c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160560:
    // 0x160560: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x160560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_160564:
    // 0x160564: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x160564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_160568:
    // 0x160568: 0xc057e9a  jal         func_15FA68
label_16056c:
    if (ctx->pc == 0x16056Cu) {
        ctx->pc = 0x16056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160568u;
        // 0x16056c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160570u;
        goto label_160570;
    }
    ctx->pc = 0x160568u;
    SET_GPR_U32(ctx, 31, 0x160570u);
    ctx->pc = 0x16056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160568u;
    // 0x16056c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15FA68u, 0x160568u, 0x160570u)) {
        return;
    }
    ctx->pc = 0x160570u;
label_160570:
    // 0x160570: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x160570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_160574:
    // 0x160574: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
label_160578:
    if (ctx->pc == 0x160578u) {
        ctx->pc = 0x160578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160574u;
        // 0x160578: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16057Cu;
        goto label_16057c;
    }
    ctx->pc = 0x160574u;
    {
        const bool branch_taken_0x160574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x160574) {
            ctx->pc = 0x160578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160574u;
            // 0x160578: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160540;
        }
    }
    ctx->pc = 0x16057Cu;
label_16057c:
    // 0x16057c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160580:
    // 0x160580: 0xc08c576  jal         func_2315D8
label_160584:
    if (ctx->pc == 0x160584u) {
        ctx->pc = 0x160584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160580u;
        // 0x160584: 0x26d00fd8  addiu       $s0, $s6, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160588u;
        goto label_160588;
    }
    ctx->pc = 0x160580u;
    SET_GPR_U32(ctx, 31, 0x160588u);
    ctx->pc = 0x160584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160580u;
    // 0x160584: 0x26d00fd8  addiu       $s0, $s6, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2315D8u, 0x160580u, 0x160588u)) {
        return;
    }
    ctx->pc = 0x160588u;
label_160588:
    // 0x160588: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16058c:
    // 0x16058c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160590:
    // 0x160590: 0x40f809  jalr        $v0
label_160594:
    if (ctx->pc == 0x160594u) {
        ctx->pc = 0x160594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160590u;
        // 0x160594: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160598u;
        goto label_160598;
    }
    ctx->pc = 0x160590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160598u);
        ctx->pc = 0x160594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160590u;
        // 0x160594: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160590u, 0x160598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160598u;
label_160598:
    // 0x160598: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16059c:
    // 0x16059c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1605a0:
    // 0x1605a0: 0x40f809  jalr        $v0
label_1605a4:
    if (ctx->pc == 0x1605A4u) {
        ctx->pc = 0x1605A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A0u;
        // 0x1605a4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605A8u;
        goto label_1605a8;
    }
    ctx->pc = 0x1605A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1605A8u);
        ctx->pc = 0x1605A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A0u;
        // 0x1605a4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605A0u, 0x1605A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1605A8u;
label_1605a8:
    // 0x1605a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1605ac:
    // 0x1605ac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1605b0:
    // 0x1605b0: 0x40f809  jalr        $v0
label_1605b4:
    if (ctx->pc == 0x1605B4u) {
        ctx->pc = 0x1605B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605B0u;
        // 0x1605b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605B8u;
        goto label_1605b8;
    }
    ctx->pc = 0x1605B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1605B8u);
        ctx->pc = 0x1605B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605B0u;
        // 0x1605b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605B0u, 0x1605B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1605B8u;
label_1605b8:
    // 0x1605b8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1605b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1605bc:
    // 0x1605bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1605bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1605c0:
    // 0x1605c0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1605c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1605c4:
    // 0x1605c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1605c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1605c8:
    // 0x1605c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1605c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1605cc:
    // 0x1605cc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1605ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1605d0:
    // 0x1605d0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1605d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1605d4:
    // 0x1605d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1605d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1605d8:
    // 0x1605d8: 0x3e00008  jr          $ra
label_1605dc:
    if (ctx->pc == 0x1605DCu) {
        ctx->pc = 0x1605DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605D8u;
        // 0x1605dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605E0u;
        goto label_fallthrough_0x1605d8;
    }
    ctx->pc = 0x1605D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1605DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605D8u;
        // 0x1605dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1605d8:
    ctx->pc = 0x1605E0u;
}
