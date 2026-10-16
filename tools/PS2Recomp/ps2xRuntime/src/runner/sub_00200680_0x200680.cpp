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

// Function: sub_00200680
// Address: 0x200680 - 0x200748
void sub_00200680_0x200680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200680_0x200680");
#endif

    switch (ctx->pc) {
        case 0x200680u: goto label_200680;
        case 0x200684u: goto label_200684;
        case 0x200688u: goto label_200688;
        case 0x20068cu: goto label_20068c;
        case 0x200690u: goto label_200690;
        case 0x200694u: goto label_200694;
        case 0x200698u: goto label_200698;
        case 0x20069cu: goto label_20069c;
        case 0x2006a0u: goto label_2006a0;
        case 0x2006a4u: goto label_2006a4;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006acu: goto label_2006ac;
        case 0x2006b0u: goto label_2006b0;
        case 0x2006b4u: goto label_2006b4;
        case 0x2006b8u: goto label_2006b8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c0u: goto label_2006c0;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006c8u: goto label_2006c8;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        default: break;
    }

    ctx->pc = 0x200680u;

label_200680:
    // 0x200680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_200684:
    // 0x200684: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x200684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_200688:
    // 0x200688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20068c:
    // 0x20068c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20068cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200690:
    // 0x200690: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x200690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_200694:
    // 0x200694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200698:
    // 0x200698: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x200698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_20069c:
    // 0x20069c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2006a0:
    // 0x2006a0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_2006a4:
    if (ctx->pc == 0x2006A4u) {
        ctx->pc = 0x2006A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A0u;
        // 0x2006a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006A8u;
        goto label_2006a8;
    }
    ctx->pc = 0x2006A0u;
    {
        const bool branch_taken_0x2006a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A0u;
        // 0x2006a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006a0) {
            ctx->pc = 0x200724u;
            goto label_200724;
        }
    }
    ctx->pc = 0x2006A8u;
label_2006a8:
    // 0x2006a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2006a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2006ac:
    // 0x2006ac: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x2006acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_2006b0:
    // 0x2006b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2006b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2006b4:
    // 0x2006b4: 0x0  nop
    ctx->pc = 0x2006b4u;
    // NOP
label_2006b8:
    // 0x2006b8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2006bc:
    // 0x2006bc: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_2006c0:
    // 0x2006c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2006c4:
    // 0x2006c4: 0x40f809  jalr        $v0
label_2006c8:
    if (ctx->pc == 0x2006C8u) {
        ctx->pc = 0x2006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006C4u;
        // 0x2006c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006CCu;
        goto label_2006cc;
    }
    ctx->pc = 0x2006C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2006CCu);
        ctx->pc = 0x2006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006C4u;
        // 0x2006c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006C4u, 0x2006CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2006CCu;
label_2006cc:
    // 0x2006cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2006ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2006d0:
    // 0x2006d0: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_2006d4:
    if (ctx->pc == 0x2006D4u) {
        ctx->pc = 0x2006D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006D0u;
        // 0x2006d4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006D8u;
        goto label_2006d8;
    }
    ctx->pc = 0x2006D0u;
    {
        const bool branch_taken_0x2006d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2006d0) {
            ctx->pc = 0x2006D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2006D0u;
            // 0x2006d4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200728u;
            goto label_200728;
        }
    }
    ctx->pc = 0x2006D8u;
label_2006d8:
    // 0x2006d8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2006dc:
    // 0x2006dc: 0x40f809  jalr        $v0
label_2006e0:
    if (ctx->pc == 0x2006E0u) {
        ctx->pc = 0x2006E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006DCu;
        // 0x2006e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006E4u;
        goto label_2006e4;
    }
    ctx->pc = 0x2006DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2006E4u);
        ctx->pc = 0x2006E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006DCu;
        // 0x2006e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006DCu, 0x2006E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2006E4u;
label_2006e4:
    // 0x2006e4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2006e8:
    if (ctx->pc == 0x2006E8u) {
        ctx->pc = 0x2006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E4u;
        // 0x2006e8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006ECu;
        goto label_2006ec;
    }
    ctx->pc = 0x2006E4u;
    {
        const bool branch_taken_0x2006e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2006e4) {
            ctx->pc = 0x2006E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2006E4u;
            // 0x2006e8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20071Cu;
            goto label_20071c;
        }
    }
    ctx->pc = 0x2006ECu;
label_2006ec:
    // 0x2006ec: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_2006f0:
    if (ctx->pc == 0x2006F0u) {
        ctx->pc = 0x2006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006ECu;
        // 0x2006f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006F4u;
        goto label_2006f4;
    }
    ctx->pc = 0x2006ECu;
    {
        const bool branch_taken_0x2006ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2006ec) {
            ctx->pc = 0x2006F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2006ECu;
            // 0x2006f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200728u;
            goto label_200728;
        }
    }
    ctx->pc = 0x2006F4u;
label_2006f4:
    // 0x2006f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2006f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2006f8:
    // 0x2006f8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2006fc:
    // 0x2006fc: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_200700:
    // 0x200700: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_200704:
    // 0x200704: 0x40f809  jalr        $v0
label_200708:
    if (ctx->pc == 0x200708u) {
        ctx->pc = 0x200708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200704u;
        // 0x200708: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20070Cu;
        goto label_20070c;
    }
    ctx->pc = 0x200704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20070Cu);
        ctx->pc = 0x200708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200704u;
        // 0x200708: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200704u, 0x20070Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20070Cu;
label_20070c:
    // 0x20070c: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
label_200710:
    if (ctx->pc == 0x200710u) {
        ctx->pc = 0x200710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20070Cu;
        // 0x200710: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200714u;
        goto label_200714;
    }
    ctx->pc = 0x20070Cu;
    {
        const bool branch_taken_0x20070c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x20070c) {
            ctx->pc = 0x200710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20070Cu;
            // 0x200710: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20071Cu;
            goto label_20071c;
        }
    }
    ctx->pc = 0x200714u;
label_200714:
    // 0x200714: 0x10000004  b           . + 4 + (0x4 << 2)
label_200718:
    if (ctx->pc == 0x200718u) {
        ctx->pc = 0x200718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200714u;
        // 0x200718: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20071Cu;
        goto label_20071c;
    }
    ctx->pc = 0x200714u;
    {
        const bool branch_taken_0x200714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200714u;
        // 0x200718: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200714) {
            ctx->pc = 0x200728u;
            goto label_200728;
        }
    }
    ctx->pc = 0x20071Cu;
label_20071c:
    // 0x20071c: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
label_200720:
    if (ctx->pc == 0x200720u) {
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20071Cu;
        // 0x200720: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200724u;
        goto label_200724;
    }
    ctx->pc = 0x20071Cu;
    {
        const bool branch_taken_0x20071c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20071c) {
            ctx->pc = 0x200720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20071Cu;
            // 0x200720: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2006B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2006b8;
        }
    }
    ctx->pc = 0x200724u;
label_200724:
    // 0x200724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200728:
    // 0x200728: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20072c:
    // 0x20072c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20072cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_200730:
    // 0x200730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x200730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200734:
    // 0x200734: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x200734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200738:
    // 0x200738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20073c:
    // 0x20073c: 0x3e00008  jr          $ra
label_200740:
    if (ctx->pc == 0x200740u) {
        ctx->pc = 0x200740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20073Cu;
        // 0x200740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200744u;
        goto label_200744;
    }
    ctx->pc = 0x20073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20073Cu;
        // 0x200740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200744u;
label_200744:
    // 0x200744: 0x0  nop
    ctx->pc = 0x200744u;
    // NOP
    ctx->pc = 0x200748u;
}
