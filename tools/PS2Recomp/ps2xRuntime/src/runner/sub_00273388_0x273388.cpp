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

// Function: sub_00273388
// Address: 0x273388 - 0x273460
void sub_00273388_0x273388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273388_0x273388");
#endif

    switch (ctx->pc) {
        case 0x273388u: goto label_273388;
        case 0x27338cu: goto label_27338c;
        case 0x273390u: goto label_273390;
        case 0x273394u: goto label_273394;
        case 0x273398u: goto label_273398;
        case 0x27339cu: goto label_27339c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733a4u: goto label_2733a4;
        case 0x2733a8u: goto label_2733a8;
        case 0x2733acu: goto label_2733ac;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733b4u: goto label_2733b4;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733c0u: goto label_2733c0;
        case 0x2733c4u: goto label_2733c4;
        case 0x2733c8u: goto label_2733c8;
        case 0x2733ccu: goto label_2733cc;
        case 0x2733d0u: goto label_2733d0;
        case 0x2733d4u: goto label_2733d4;
        case 0x2733d8u: goto label_2733d8;
        case 0x2733dcu: goto label_2733dc;
        case 0x2733e0u: goto label_2733e0;
        case 0x2733e4u: goto label_2733e4;
        case 0x2733e8u: goto label_2733e8;
        case 0x2733ecu: goto label_2733ec;
        case 0x2733f0u: goto label_2733f0;
        case 0x2733f4u: goto label_2733f4;
        case 0x2733f8u: goto label_2733f8;
        case 0x2733fcu: goto label_2733fc;
        case 0x273400u: goto label_273400;
        case 0x273404u: goto label_273404;
        case 0x273408u: goto label_273408;
        case 0x27340cu: goto label_27340c;
        case 0x273410u: goto label_273410;
        case 0x273414u: goto label_273414;
        case 0x273418u: goto label_273418;
        case 0x27341cu: goto label_27341c;
        case 0x273420u: goto label_273420;
        case 0x273424u: goto label_273424;
        case 0x273428u: goto label_273428;
        case 0x27342cu: goto label_27342c;
        case 0x273430u: goto label_273430;
        case 0x273434u: goto label_273434;
        case 0x273438u: goto label_273438;
        case 0x27343cu: goto label_27343c;
        case 0x273440u: goto label_273440;
        case 0x273444u: goto label_273444;
        case 0x273448u: goto label_273448;
        case 0x27344cu: goto label_27344c;
        case 0x273450u: goto label_273450;
        case 0x273454u: goto label_273454;
        case 0x273458u: goto label_273458;
        case 0x27345cu: goto label_27345c;
        default: break;
    }

    ctx->pc = 0x273388u;

label_273388:
    // 0x273388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x273388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27338c:
    // 0x27338c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x27338cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273390:
    // 0x273390: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x273390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_273394:
    // 0x273394: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x273394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_273398:
    // 0x273398: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x273398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_27339c:
    // 0x27339c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2733a0:
    if (ctx->pc == 0x2733A0u) {
        ctx->pc = 0x2733A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27339Cu;
        // 0x2733a0: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733A4u;
        goto label_2733a4;
    }
    ctx->pc = 0x27339Cu;
    {
        const bool branch_taken_0x27339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27339Cu;
        // 0x2733a0: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27339c) {
            ctx->pc = 0x2733B4u;
            goto label_2733b4;
        }
    }
    ctx->pc = 0x2733A4u;
label_2733a4:
    // 0x2733a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2733a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2733a8:
    // 0x2733a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2733a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2733ac:
    // 0x2733ac: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2733acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_2733b0:
    // 0x2733b0: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x2733b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_2733b4:
    // 0x2733b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2733b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2733b8:
    // 0x2733b8: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
label_2733bc:
    if (ctx->pc == 0x2733BCu) {
        ctx->pc = 0x2733BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733B8u;
        // 0x2733bc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733C0u;
        goto label_2733c0;
    }
    ctx->pc = 0x2733B8u;
    {
        const bool branch_taken_0x2733b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2733BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733B8u;
        // 0x2733bc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733b8) {
            ctx->pc = 0x2733E8u;
            goto label_2733e8;
        }
    }
    ctx->pc = 0x2733C0u;
label_2733c0:
    // 0x2733c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2733c4:
    if (ctx->pc == 0x2733C4u) {
        ctx->pc = 0x2733C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C0u;
        // 0x2733c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733C8u;
        goto label_2733c8;
    }
    ctx->pc = 0x2733C0u;
    {
        const bool branch_taken_0x2733c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733c0) {
            ctx->pc = 0x2733C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2733C0u;
            // 0x2733c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2733D8u;
            goto label_2733d8;
        }
    }
    ctx->pc = 0x2733C8u;
label_2733c8:
    // 0x2733c8: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
label_2733cc:
    if (ctx->pc == 0x2733CCu) {
        ctx->pc = 0x2733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C8u;
        // 0x2733cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733D0u;
        goto label_2733d0;
    }
    ctx->pc = 0x2733C8u;
    {
        const bool branch_taken_0x2733c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C8u;
        // 0x2733cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733c8) {
            ctx->pc = 0x273430u;
            goto label_273430;
        }
    }
    ctx->pc = 0x2733D0u;
label_2733d0:
    // 0x2733d0: 0x10000020  b           . + 4 + (0x20 << 2)
label_2733d4:
    if (ctx->pc == 0x2733D4u) {
        ctx->pc = 0x2733D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733D0u;
        // 0x2733d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733D8u;
        goto label_2733d8;
    }
    ctx->pc = 0x2733D0u;
    {
        const bool branch_taken_0x2733d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733D0u;
        // 0x2733d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733d0) {
            ctx->pc = 0x273454u;
            goto label_273454;
        }
    }
    ctx->pc = 0x2733D8u;
label_2733d8:
    // 0x2733d8: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
label_2733dc:
    if (ctx->pc == 0x2733DCu) {
        ctx->pc = 0x2733DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733D8u;
        // 0x2733dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733E0u;
        goto label_2733e0;
    }
    ctx->pc = 0x2733D8u;
    {
        const bool branch_taken_0x2733d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2733DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733D8u;
        // 0x2733dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733d8) {
            ctx->pc = 0x27340Cu;
            goto label_27340c;
        }
    }
    ctx->pc = 0x2733E0u;
label_2733e0:
    // 0x2733e0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2733e4:
    if (ctx->pc == 0x2733E4u) {
        ctx->pc = 0x2733E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733E0u;
        // 0x2733e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733E8u;
        goto label_2733e8;
    }
    ctx->pc = 0x2733E0u;
    {
        const bool branch_taken_0x2733e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733E0u;
        // 0x2733e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733e0) {
            ctx->pc = 0x273454u;
            goto label_273454;
        }
    }
    ctx->pc = 0x2733E8u;
label_2733e8:
    // 0x2733e8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2733e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2733ec:
    // 0x2733ec: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x2733ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_2733f0:
    // 0x2733f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2733f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2733f4:
    // 0x2733f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2733f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2733f8:
    // 0x2733f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2733fc:
    // 0x2733fc: 0x40f809  jalr        $v0
label_273400:
    if (ctx->pc == 0x273400u) {
        ctx->pc = 0x273400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733FCu;
        // 0x273400: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273404u;
        goto label_273404;
    }
    ctx->pc = 0x2733FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273404u);
        ctx->pc = 0x273400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733FCu;
        // 0x273400: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2733FCu, 0x273404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273404u;
label_273404:
    // 0x273404: 0x10000012  b           . + 4 + (0x12 << 2)
label_273408:
    if (ctx->pc == 0x273408u) {
        ctx->pc = 0x273408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273404u;
        // 0x273408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27340Cu;
        goto label_27340c;
    }
    ctx->pc = 0x273404u;
    {
        const bool branch_taken_0x273404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273404u;
        // 0x273408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273404) {
            ctx->pc = 0x273450u;
            goto label_273450;
        }
    }
    ctx->pc = 0x27340Cu;
label_27340c:
    // 0x27340c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x27340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_273410:
    // 0x273410: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x273410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_273414:
    // 0x273414: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x273414u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_273418:
    // 0x273418: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x273418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27341c:
    // 0x27341c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x27341cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_273420:
    // 0x273420: 0x40f809  jalr        $v0
label_273424:
    if (ctx->pc == 0x273424u) {
        ctx->pc = 0x273424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273420u;
        // 0x273424: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273428u;
        goto label_273428;
    }
    ctx->pc = 0x273420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273428u);
        ctx->pc = 0x273424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273420u;
        // 0x273424: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273420u, 0x273428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273428u;
label_273428:
    // 0x273428: 0x10000009  b           . + 4 + (0x9 << 2)
label_27342c:
    if (ctx->pc == 0x27342Cu) {
        ctx->pc = 0x27342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273428u;
        // 0x27342c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273430u;
        goto label_273430;
    }
    ctx->pc = 0x273428u;
    {
        const bool branch_taken_0x273428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273428u;
        // 0x27342c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273428) {
            ctx->pc = 0x273450u;
            goto label_273450;
        }
    }
    ctx->pc = 0x273430u;
label_273430:
    // 0x273430: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x273430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_273434:
    // 0x273434: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x273434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_273438:
    // 0x273438: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x273438u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_27343c:
    // 0x27343c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27343cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273440:
    // 0x273440: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x273440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273444:
    // 0x273444: 0x40f809  jalr        $v0
label_273448:
    if (ctx->pc == 0x273448u) {
        ctx->pc = 0x273448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273444u;
        // 0x273448: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27344Cu;
        goto label_27344c;
    }
    ctx->pc = 0x273444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27344Cu);
        ctx->pc = 0x273448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273444u;
        // 0x273448: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273444u, 0x27344Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27344Cu;
label_27344c:
    // 0x27344c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27344cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273450:
    // 0x273450: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x273450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_273454:
    // 0x273454: 0x3e00008  jr          $ra
label_273458:
    if (ctx->pc == 0x273458u) {
        ctx->pc = 0x273458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273454u;
        // 0x273458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27345Cu;
        goto label_27345c;
    }
    ctx->pc = 0x273454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273454u;
        // 0x273458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27345Cu;
label_27345c:
    // 0x27345c: 0x0  nop
    ctx->pc = 0x27345cu;
    // NOP
    ctx->pc = 0x273460u;
}
