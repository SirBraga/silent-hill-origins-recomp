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

// Function: sub_002273A0
// Address: 0x2273a0 - 0x227490
void sub_002273A0_0x2273a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002273A0_0x2273a0");
#endif

    switch (ctx->pc) {
        case 0x2273a0u: goto label_2273a0;
        case 0x2273a4u: goto label_2273a4;
        case 0x2273a8u: goto label_2273a8;
        case 0x2273acu: goto label_2273ac;
        case 0x2273b0u: goto label_2273b0;
        case 0x2273b4u: goto label_2273b4;
        case 0x2273b8u: goto label_2273b8;
        case 0x2273bcu: goto label_2273bc;
        case 0x2273c0u: goto label_2273c0;
        case 0x2273c4u: goto label_2273c4;
        case 0x2273c8u: goto label_2273c8;
        case 0x2273ccu: goto label_2273cc;
        case 0x2273d0u: goto label_2273d0;
        case 0x2273d4u: goto label_2273d4;
        case 0x2273d8u: goto label_2273d8;
        case 0x2273dcu: goto label_2273dc;
        case 0x2273e0u: goto label_2273e0;
        case 0x2273e4u: goto label_2273e4;
        case 0x2273e8u: goto label_2273e8;
        case 0x2273ecu: goto label_2273ec;
        case 0x2273f0u: goto label_2273f0;
        case 0x2273f4u: goto label_2273f4;
        case 0x2273f8u: goto label_2273f8;
        case 0x2273fcu: goto label_2273fc;
        case 0x227400u: goto label_227400;
        case 0x227404u: goto label_227404;
        case 0x227408u: goto label_227408;
        case 0x22740cu: goto label_22740c;
        case 0x227410u: goto label_227410;
        case 0x227414u: goto label_227414;
        case 0x227418u: goto label_227418;
        case 0x22741cu: goto label_22741c;
        case 0x227420u: goto label_227420;
        case 0x227424u: goto label_227424;
        case 0x227428u: goto label_227428;
        case 0x22742cu: goto label_22742c;
        case 0x227430u: goto label_227430;
        case 0x227434u: goto label_227434;
        case 0x227438u: goto label_227438;
        case 0x22743cu: goto label_22743c;
        case 0x227440u: goto label_227440;
        case 0x227444u: goto label_227444;
        case 0x227448u: goto label_227448;
        case 0x22744cu: goto label_22744c;
        case 0x227450u: goto label_227450;
        case 0x227454u: goto label_227454;
        case 0x227458u: goto label_227458;
        case 0x22745cu: goto label_22745c;
        case 0x227460u: goto label_227460;
        case 0x227464u: goto label_227464;
        case 0x227468u: goto label_227468;
        case 0x22746cu: goto label_22746c;
        case 0x227470u: goto label_227470;
        case 0x227474u: goto label_227474;
        case 0x227478u: goto label_227478;
        case 0x22747cu: goto label_22747c;
        case 0x227480u: goto label_227480;
        case 0x227484u: goto label_227484;
        case 0x227488u: goto label_227488;
        case 0x22748cu: goto label_22748c;
        default: break;
    }

    ctx->pc = 0x2273a0u;

label_2273a0:
    // 0x2273a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2273a4:
    // 0x2273a4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2273a8:
    // 0x2273a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2273a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2273ac:
    // 0x2273ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2273acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2273b0:
    // 0x2273b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2273b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2273b4:
    // 0x2273b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2273b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2273b8:
    // 0x2273b8: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x2273b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2273bc:
    // 0x2273bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2273bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2273c0:
    // 0x2273c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2273c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2273c4:
    // 0x2273c4: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_2273c8:
    // 0x2273c8: 0x40f809  jalr        $v0
label_2273cc:
    if (ctx->pc == 0x2273CCu) {
        ctx->pc = 0x2273CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273C8u;
        // 0x2273cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273D0u;
        goto label_2273d0;
    }
    ctx->pc = 0x2273C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2273D0u);
        ctx->pc = 0x2273CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273C8u;
        // 0x2273cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2273C8u, 0x2273D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2273D0u;
label_2273d0:
    // 0x2273d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2273d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2273d4:
    // 0x2273d4: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x2273d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_2273d8:
    // 0x2273d8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2273d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2273dc:
    // 0x2273dc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2273dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2273e0:
    // 0x2273e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2273e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2273e4:
    // 0x2273e4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2273e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2273e8:
    // 0x2273e8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2273ec:
    if (ctx->pc == 0x2273ECu) {
        ctx->pc = 0x2273ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273E8u;
        // 0x2273ec: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273F0u;
        goto label_2273f0;
    }
    ctx->pc = 0x2273E8u;
    {
        const bool branch_taken_0x2273e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273E8u;
        // 0x2273ec: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273e8) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2273F0u;
label_2273f0:
    // 0x2273f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2273f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2273f4:
    // 0x2273f4: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2273f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_2273f8:
    // 0x2273f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2273f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2273fc:
    // 0x2273fc: 0x40f809  jalr        $v0
label_227400:
    if (ctx->pc == 0x227400u) {
        ctx->pc = 0x227400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273FCu;
        // 0x227400: 0x34c60406  ori         $a2, $a2, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x227404u;
        goto label_227404;
    }
    ctx->pc = 0x2273FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227404u);
        ctx->pc = 0x227400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273FCu;
        // 0x227400: 0x34c60406  ori         $a2, $a2, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2273FCu, 0x227404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227404u;
label_227404:
    // 0x227404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x227404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227408:
    // 0x227408: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_22740c:
    if (ctx->pc == 0x22740Cu) {
        ctx->pc = 0x22740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227408u;
        // 0x22740c: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227410u;
        goto label_227410;
    }
    ctx->pc = 0x227408u;
    {
        const bool branch_taken_0x227408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227408) {
            ctx->pc = 0x22740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227408u;
            // 0x22740c: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227440u;
            goto label_227440;
        }
    }
    ctx->pc = 0x227410u;
label_227410:
    // 0x227410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227414:
    // 0x227414: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_227418:
    // 0x227418: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x227418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22741c:
    // 0x22741c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227420:
    // 0x227420: 0xc092848  jal         func_24A120
label_227424:
    if (ctx->pc == 0x227424u) {
        ctx->pc = 0x227424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227420u;
        // 0x227424: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x227428u;
        goto label_227428;
    }
    ctx->pc = 0x227420u;
    SET_GPR_U32(ctx, 31, 0x227428u);
    ctx->pc = 0x227424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227420u;
    // 0x227424: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x227420u, 0x227428u)) {
        return;
    }
    ctx->pc = 0x227428u;
label_227428:
    // 0x227428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22742c:
    // 0x22742c: 0xc09281a  jal         func_24A068
label_227430:
    if (ctx->pc == 0x227430u) {
        ctx->pc = 0x227430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22742Cu;
        // 0x227430: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227434u;
        goto label_227434;
    }
    ctx->pc = 0x22742Cu;
    SET_GPR_U32(ctx, 31, 0x227434u);
    ctx->pc = 0x227430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22742Cu;
    // 0x227430: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22742Cu, 0x227434u)) {
        return;
    }
    ctx->pc = 0x227434u;
label_227434:
    // 0x227434: 0x1000000e  b           . + 4 + (0xE << 2)
label_227438:
    if (ctx->pc == 0x227438u) {
        ctx->pc = 0x227438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227434u;
        // 0x227438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22743Cu;
        goto label_22743c;
    }
    ctx->pc = 0x227434u;
    {
        const bool branch_taken_0x227434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227434u;
        // 0x227438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227434) {
            ctx->pc = 0x227470u;
            goto label_227470;
        }
    }
    ctx->pc = 0x22743Cu;
label_22743c:
    // 0x22743c: 0x0  nop
    ctx->pc = 0x22743cu;
    // NOP
label_227440:
    // 0x227440: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_227444:
    // 0x227444: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x227444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_227448:
    // 0x227448: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x227448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_22744c:
    // 0x22744c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_227450:
    // 0x227450: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_227454:
    // 0x227454: 0x26630fc8  addiu       $v1, $s3, 0xFC8
    ctx->pc = 0x227454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4040));
label_227458:
    // 0x227458: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x227458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22745c:
    // 0x22745c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22745cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_227460:
    // 0x227460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227464:
    // 0x227464: 0xc075fdc  jal         func_1D7F70
label_227468:
    if (ctx->pc == 0x227468u) {
        ctx->pc = 0x227468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227464u;
        // 0x227468: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22746Cu;
        goto label_22746c;
    }
    ctx->pc = 0x227464u;
    SET_GPR_U32(ctx, 31, 0x22746Cu);
    ctx->pc = 0x227468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227464u;
    // 0x227468: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x227464u, 0x22746Cu)) {
        return;
    }
    ctx->pc = 0x22746Cu;
label_22746c:
    // 0x22746c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22746cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_227470:
    // 0x227470: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x227470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_227474:
    // 0x227474: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x227474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_227478:
    // 0x227478: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x227478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22747c:
    // 0x22747c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22747cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_227480:
    // 0x227480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227484:
    // 0x227484: 0x3e00008  jr          $ra
label_227488:
    if (ctx->pc == 0x227488u) {
        ctx->pc = 0x227488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227484u;
        // 0x227488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22748Cu;
        goto label_22748c;
    }
    ctx->pc = 0x227484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227484u;
        // 0x227488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22748Cu;
label_22748c:
    // 0x22748c: 0x0  nop
    ctx->pc = 0x22748cu;
    // NOP
    ctx->pc = 0x227490u;
}
