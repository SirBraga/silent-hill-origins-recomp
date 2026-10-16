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

// Function: sub_001DC6E8
// Address: 0x1dc6e8 - 0x1dc868
void sub_001DC6E8_0x1dc6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC6E8_0x1dc6e8");
#endif

    switch (ctx->pc) {
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6ecu: goto label_1dc6ec;
        case 0x1dc6f0u: goto label_1dc6f0;
        case 0x1dc6f4u: goto label_1dc6f4;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc6fcu: goto label_1dc6fc;
        case 0x1dc700u: goto label_1dc700;
        case 0x1dc704u: goto label_1dc704;
        case 0x1dc708u: goto label_1dc708;
        case 0x1dc70cu: goto label_1dc70c;
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc714u: goto label_1dc714;
        case 0x1dc718u: goto label_1dc718;
        case 0x1dc71cu: goto label_1dc71c;
        case 0x1dc720u: goto label_1dc720;
        case 0x1dc724u: goto label_1dc724;
        case 0x1dc728u: goto label_1dc728;
        case 0x1dc72cu: goto label_1dc72c;
        case 0x1dc730u: goto label_1dc730;
        case 0x1dc734u: goto label_1dc734;
        case 0x1dc738u: goto label_1dc738;
        case 0x1dc73cu: goto label_1dc73c;
        case 0x1dc740u: goto label_1dc740;
        case 0x1dc744u: goto label_1dc744;
        case 0x1dc748u: goto label_1dc748;
        case 0x1dc74cu: goto label_1dc74c;
        case 0x1dc750u: goto label_1dc750;
        case 0x1dc754u: goto label_1dc754;
        case 0x1dc758u: goto label_1dc758;
        case 0x1dc75cu: goto label_1dc75c;
        case 0x1dc760u: goto label_1dc760;
        case 0x1dc764u: goto label_1dc764;
        case 0x1dc768u: goto label_1dc768;
        case 0x1dc76cu: goto label_1dc76c;
        case 0x1dc770u: goto label_1dc770;
        case 0x1dc774u: goto label_1dc774;
        case 0x1dc778u: goto label_1dc778;
        case 0x1dc77cu: goto label_1dc77c;
        case 0x1dc780u: goto label_1dc780;
        case 0x1dc784u: goto label_1dc784;
        case 0x1dc788u: goto label_1dc788;
        case 0x1dc78cu: goto label_1dc78c;
        case 0x1dc790u: goto label_1dc790;
        case 0x1dc794u: goto label_1dc794;
        case 0x1dc798u: goto label_1dc798;
        case 0x1dc79cu: goto label_1dc79c;
        case 0x1dc7a0u: goto label_1dc7a0;
        case 0x1dc7a4u: goto label_1dc7a4;
        case 0x1dc7a8u: goto label_1dc7a8;
        case 0x1dc7acu: goto label_1dc7ac;
        case 0x1dc7b0u: goto label_1dc7b0;
        case 0x1dc7b4u: goto label_1dc7b4;
        case 0x1dc7b8u: goto label_1dc7b8;
        case 0x1dc7bcu: goto label_1dc7bc;
        case 0x1dc7c0u: goto label_1dc7c0;
        case 0x1dc7c4u: goto label_1dc7c4;
        case 0x1dc7c8u: goto label_1dc7c8;
        case 0x1dc7ccu: goto label_1dc7cc;
        case 0x1dc7d0u: goto label_1dc7d0;
        case 0x1dc7d4u: goto label_1dc7d4;
        case 0x1dc7d8u: goto label_1dc7d8;
        case 0x1dc7dcu: goto label_1dc7dc;
        case 0x1dc7e0u: goto label_1dc7e0;
        case 0x1dc7e4u: goto label_1dc7e4;
        case 0x1dc7e8u: goto label_1dc7e8;
        case 0x1dc7ecu: goto label_1dc7ec;
        case 0x1dc7f0u: goto label_1dc7f0;
        case 0x1dc7f4u: goto label_1dc7f4;
        case 0x1dc7f8u: goto label_1dc7f8;
        case 0x1dc7fcu: goto label_1dc7fc;
        case 0x1dc800u: goto label_1dc800;
        case 0x1dc804u: goto label_1dc804;
        case 0x1dc808u: goto label_1dc808;
        case 0x1dc80cu: goto label_1dc80c;
        case 0x1dc810u: goto label_1dc810;
        case 0x1dc814u: goto label_1dc814;
        case 0x1dc818u: goto label_1dc818;
        case 0x1dc81cu: goto label_1dc81c;
        case 0x1dc820u: goto label_1dc820;
        case 0x1dc824u: goto label_1dc824;
        case 0x1dc828u: goto label_1dc828;
        case 0x1dc82cu: goto label_1dc82c;
        case 0x1dc830u: goto label_1dc830;
        case 0x1dc834u: goto label_1dc834;
        case 0x1dc838u: goto label_1dc838;
        case 0x1dc83cu: goto label_1dc83c;
        case 0x1dc840u: goto label_1dc840;
        case 0x1dc844u: goto label_1dc844;
        case 0x1dc848u: goto label_1dc848;
        case 0x1dc84cu: goto label_1dc84c;
        case 0x1dc850u: goto label_1dc850;
        case 0x1dc854u: goto label_1dc854;
        case 0x1dc858u: goto label_1dc858;
        case 0x1dc85cu: goto label_1dc85c;
        case 0x1dc860u: goto label_1dc860;
        case 0x1dc864u: goto label_1dc864;
        default: break;
    }

    ctx->pc = 0x1dc6e8u;

label_1dc6e8:
    // 0x1dc6e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dc6ec:
    // 0x1dc6ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1dc6f0:
    // 0x1dc6f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6f4:
    // 0x1dc6f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dc6f8:
    // 0x1dc6f8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dc6fc:
    // 0x1dc6fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dc6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1dc700:
    // 0x1dc700: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1dc700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc704:
    // 0x1dc704: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1dc704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1dc708:
    // 0x1dc708: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dc708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dc70c:
    // 0x1dc70c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc710:
    // 0x1dc710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc714:
    // 0x1dc714: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc718:
    // 0x1dc718: 0x40f809  jalr        $v0
label_1dc71c:
    if (ctx->pc == 0x1DC71Cu) {
        ctx->pc = 0x1DC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC718u;
        // 0x1dc71c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC720u;
        goto label_1dc720;
    }
    ctx->pc = 0x1DC718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC720u);
        ctx->pc = 0x1DC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC718u;
        // 0x1dc71c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC718u, 0x1DC720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC720u;
label_1dc720:
    // 0x1dc720: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc724:
    // 0x1dc724: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1dc724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1dc728:
    // 0x1dc728: 0x40f809  jalr        $v0
label_1dc72c:
    if (ctx->pc == 0x1DC72Cu) {
        ctx->pc = 0x1DC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC728u;
        // 0x1dc72c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC730u;
        goto label_1dc730;
    }
    ctx->pc = 0x1DC728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC730u);
        ctx->pc = 0x1DC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC728u;
        // 0x1dc72c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC728u, 0x1DC730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC730u;
label_1dc730:
    // 0x1dc730: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc734:
    // 0x1dc734: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1dc734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1dc738:
    // 0x1dc738: 0x40f809  jalr        $v0
label_1dc73c:
    if (ctx->pc == 0x1DC73Cu) {
        ctx->pc = 0x1DC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC738u;
        // 0x1dc73c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC740u;
        goto label_1dc740;
    }
    ctx->pc = 0x1DC738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC740u);
        ctx->pc = 0x1DC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC738u;
        // 0x1dc73c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC738u, 0x1DC740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC740u;
label_1dc740:
    // 0x1dc740: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc744:
    // 0x1dc744: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x1dc744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_1dc748:
    // 0x1dc748: 0x40f809  jalr        $v0
label_1dc74c:
    if (ctx->pc == 0x1DC74Cu) {
        ctx->pc = 0x1DC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC748u;
        // 0x1dc74c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC750u;
        goto label_1dc750;
    }
    ctx->pc = 0x1DC748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC750u);
        ctx->pc = 0x1DC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC748u;
        // 0x1dc74c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC748u, 0x1DC750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC750u;
label_1dc750:
    // 0x1dc750: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc754:
    // 0x1dc754: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc758:
    // 0x1dc758: 0x40f809  jalr        $v0
label_1dc75c:
    if (ctx->pc == 0x1DC75Cu) {
        ctx->pc = 0x1DC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC758u;
        // 0x1dc75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC760u;
        goto label_1dc760;
    }
    ctx->pc = 0x1DC758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC760u);
        ctx->pc = 0x1DC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC758u;
        // 0x1dc75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC758u, 0x1DC760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC760u;
label_1dc760:
    // 0x1dc760: 0xc07741e  jal         func_1DD078
label_1dc764:
    if (ctx->pc == 0x1DC764u) {
        ctx->pc = 0x1DC768u;
        goto label_1dc768;
    }
    ctx->pc = 0x1DC760u;
    SET_GPR_U32(ctx, 31, 0x1DC768u);
    ctx->pc = 0x1DD078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DD078u, 0x1DC760u, 0x1DC768u)) {
        return;
    }
    ctx->pc = 0x1DC768u;
label_1dc768:
    // 0x1dc768: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dc768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1dc76c:
    // 0x1dc76c: 0x8c43e644  lw          $v1, -0x19BC($v0)
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960708)));
label_1dc770:
    // 0x1dc770: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1dc774:
    if (ctx->pc == 0x1DC774u) {
        ctx->pc = 0x1DC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC770u;
        // 0x1dc774: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC778u;
        goto label_1dc778;
    }
    ctx->pc = 0x1DC770u;
    {
        const bool branch_taken_0x1dc770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC770u;
        // 0x1dc774: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc770) {
            ctx->pc = 0x1DC78Cu;
            goto label_1dc78c;
        }
    }
    ctx->pc = 0x1DC778u;
label_1dc778:
    // 0x1dc778: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1dc77c:
    if (ctx->pc == 0x1DC77Cu) {
        ctx->pc = 0x1DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC778u;
        // 0x1dc77c: 0x8c50e668  lw          $s0, -0x1998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC780u;
        goto label_1dc780;
    }
    ctx->pc = 0x1DC778u;
    {
        const bool branch_taken_0x1dc778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC778u;
        // 0x1dc77c: 0x8c50e668  lw          $s0, -0x1998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc778) {
            ctx->pc = 0x1DC790u;
            goto label_1dc790;
        }
    }
    ctx->pc = 0x1DC780u;
label_1dc780:
    // 0x1dc780: 0xc0772ae  jal         func_1DCAB8
label_1dc784:
    if (ctx->pc == 0x1DC784u) {
        ctx->pc = 0x1DC788u;
        goto label_1dc788;
    }
    ctx->pc = 0x1DC780u;
    SET_GPR_U32(ctx, 31, 0x1DC788u);
    ctx->pc = 0x1DCAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCAB8u, 0x1DC780u, 0x1DC788u)) {
        return;
    }
    ctx->pc = 0x1DC788u;
label_1dc788:
    // 0x1dc788: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dc788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1dc78c:
    // 0x1dc78c: 0x8c50e668  lw          $s0, -0x1998($v0)
    ctx->pc = 0x1dc78cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960744)));
label_1dc790:
    // 0x1dc790: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1dc794:
    if (ctx->pc == 0x1DC794u) {
        ctx->pc = 0x1DC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC790u;
        // 0x1dc794: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC798u;
        goto label_1dc798;
    }
    ctx->pc = 0x1DC790u;
    {
        const bool branch_taken_0x1dc790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC790u;
        // 0x1dc794: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc790) {
            ctx->pc = 0x1DC7BCu;
            goto label_1dc7bc;
        }
    }
    ctx->pc = 0x1DC798u;
label_1dc798:
    // 0x1dc798: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1dc798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_1dc79c:
    // 0x1dc79c: 0x0  nop
    ctx->pc = 0x1dc79cu;
    // NOP
label_1dc7a0:
    // 0x1dc7a0: 0xc077162  jal         func_1DC588
label_1dc7a4:
    if (ctx->pc == 0x1DC7A4u) {
        ctx->pc = 0x1DC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7A0u;
        // 0x1dc7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7A8u;
        goto label_1dc7a8;
    }
    ctx->pc = 0x1DC7A0u;
    SET_GPR_U32(ctx, 31, 0x1DC7A8u);
    ctx->pc = 0x1DC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7A0u;
    // 0x1dc7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DC588u, 0x1DC7A0u, 0x1DC7A8u)) {
        return;
    }
    ctx->pc = 0x1DC7A8u;
label_1dc7a8:
    // 0x1dc7a8: 0x8e22e664  lw          $v0, -0x199C($s1)
    ctx->pc = 0x1dc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960740)));
label_1dc7ac:
    // 0x1dc7ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc7b0:
    // 0x1dc7b0: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x1dc7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1dc7b4:
    // 0x1dc7b4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_1dc7b8:
    if (ctx->pc == 0x1DC7B8u) {
        ctx->pc = 0x1DC7BCu;
        goto label_1dc7bc;
    }
    ctx->pc = 0x1DC7B4u;
    {
        const bool branch_taken_0x1dc7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc7b4) {
            ctx->pc = 0x1DC7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc7a0;
        }
    }
    ctx->pc = 0x1DC7BCu;
label_1dc7bc:
    // 0x1dc7bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc7c0:
    // 0x1dc7c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc7c4:
    if (ctx->pc == 0x1DC7C4u) {
        ctx->pc = 0x1DC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7C0u;
        // 0x1dc7c4: 0x26430fd8  addiu       $v1, $s2, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7C8u;
        goto label_1dc7c8;
    }
    ctx->pc = 0x1DC7C0u;
    {
        const bool branch_taken_0x1dc7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7C0u;
        // 0x1dc7c4: 0x26430fd8  addiu       $v1, $s2, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7c0) {
            ctx->pc = 0x1DC7E0u;
            goto label_1dc7e0;
        }
    }
    ctx->pc = 0x1DC7C8u;
label_1dc7c8:
    // 0x1dc7c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc7cc:
    // 0x1dc7cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dc7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1dc7d0:
    // 0x1dc7d0: 0x40f809  jalr        $v0
label_1dc7d4:
    if (ctx->pc == 0x1DC7D4u) {
        ctx->pc = 0x1DC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D0u;
        // 0x1dc7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7D8u;
        goto label_1dc7d8;
    }
    ctx->pc = 0x1DC7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC7D8u);
        ctx->pc = 0x1DC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D0u;
        // 0x1dc7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7D0u, 0x1DC7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC7D8u;
label_1dc7d8:
    // 0x1dc7d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1dc7dc:
    if (ctx->pc == 0x1DC7DCu) {
        ctx->pc = 0x1DC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D8u;
        // 0x1dc7dc: 0x26500fd8  addiu       $s0, $s2, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7E0u;
        goto label_1dc7e0;
    }
    ctx->pc = 0x1DC7D8u;
    {
        const bool branch_taken_0x1dc7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D8u;
        // 0x1dc7dc: 0x26500fd8  addiu       $s0, $s2, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7d8) {
            ctx->pc = 0x1DC7F4u;
            goto label_1dc7f4;
        }
    }
    ctx->pc = 0x1DC7E0u;
label_1dc7e0:
    // 0x1dc7e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc7e4:
    // 0x1dc7e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1dc7e8:
    // 0x1dc7e8: 0x40f809  jalr        $v0
label_1dc7ec:
    if (ctx->pc == 0x1DC7ECu) {
        ctx->pc = 0x1DC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7E8u;
        // 0x1dc7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7F0u;
        goto label_1dc7f0;
    }
    ctx->pc = 0x1DC7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC7F0u);
        ctx->pc = 0x1DC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7E8u;
        // 0x1dc7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7E8u, 0x1DC7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC7F0u;
label_1dc7f0:
    // 0x1dc7f0: 0x26500fd8  addiu       $s0, $s2, 0xFD8
    ctx->pc = 0x1dc7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
label_1dc7f4:
    // 0x1dc7f4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1dc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1dc7f8:
    // 0x1dc7f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc7fc:
    // 0x1dc7fc: 0x40f809  jalr        $v0
label_1dc800:
    if (ctx->pc == 0x1DC800u) {
        ctx->pc = 0x1DC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7FCu;
        // 0x1dc800: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC804u;
        goto label_1dc804;
    }
    ctx->pc = 0x1DC7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC804u);
        ctx->pc = 0x1DC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7FCu;
        // 0x1dc800: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7FCu, 0x1DC804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC804u;
label_1dc804:
    // 0x1dc804: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dc804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1dc808:
    // 0x1dc808: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc80c:
    // 0x1dc80c: 0x40f809  jalr        $v0
label_1dc810:
    if (ctx->pc == 0x1DC810u) {
        ctx->pc = 0x1DC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC80Cu;
        // 0x1dc810: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC814u;
        goto label_1dc814;
    }
    ctx->pc = 0x1DC80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC814u);
        ctx->pc = 0x1DC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC80Cu;
        // 0x1dc810: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC80Cu, 0x1DC814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC814u;
label_1dc814:
    // 0x1dc814: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1dc814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1dc818:
    // 0x1dc818: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc81c:
    // 0x1dc81c: 0x40f809  jalr        $v0
label_1dc820:
    if (ctx->pc == 0x1DC820u) {
        ctx->pc = 0x1DC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC81Cu;
        // 0x1dc820: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC824u;
        goto label_1dc824;
    }
    ctx->pc = 0x1DC81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC824u);
        ctx->pc = 0x1DC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC81Cu;
        // 0x1dc820: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC81Cu, 0x1DC824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC824u;
label_1dc824:
    // 0x1dc824: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc828:
    // 0x1dc828: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1dc828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dc82c:
    // 0x1dc82c: 0x40f809  jalr        $v0
label_1dc830:
    if (ctx->pc == 0x1DC830u) {
        ctx->pc = 0x1DC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC82Cu;
        // 0x1dc830: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC834u;
        goto label_1dc834;
    }
    ctx->pc = 0x1DC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC834u);
        ctx->pc = 0x1DC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC82Cu;
        // 0x1dc830: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC82Cu, 0x1DC834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC834u;
label_1dc834:
    // 0x1dc834: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc838:
    // 0x1dc838: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dc838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dc83c:
    // 0x1dc83c: 0x40f809  jalr        $v0
label_1dc840:
    if (ctx->pc == 0x1DC840u) {
        ctx->pc = 0x1DC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC83Cu;
        // 0x1dc840: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC844u;
        goto label_1dc844;
    }
    ctx->pc = 0x1DC83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC844u);
        ctx->pc = 0x1DC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC83Cu;
        // 0x1dc840: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC83Cu, 0x1DC844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC844u;
label_1dc844:
    // 0x1dc844: 0xae60e668  sw          $zero, -0x1998($s3)
    ctx->pc = 0x1dc844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960744), GPR_U32(ctx, 0));
label_1dc848:
    // 0x1dc848: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1dc848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc84c:
    // 0x1dc84c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1dc84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc850:
    // 0x1dc850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dc850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc854:
    // 0x1dc854: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1dc854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc858:
    // 0x1dc858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc85c:
    // 0x1dc85c: 0x3e00008  jr          $ra
label_1dc860:
    if (ctx->pc == 0x1DC860u) {
        ctx->pc = 0x1DC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC85Cu;
        // 0x1dc860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC864u;
        goto label_1dc864;
    }
    ctx->pc = 0x1DC85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC85Cu;
        // 0x1dc860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC864u;
label_1dc864:
    // 0x1dc864: 0x0  nop
    ctx->pc = 0x1dc864u;
    // NOP
    ctx->pc = 0x1dc868u;
}
