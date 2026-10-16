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

// Function: sub_0020A440
// Address: 0x20a440 - 0x20a558
void sub_0020A440_0x20a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A440_0x20a440");
#endif

    switch (ctx->pc) {
        case 0x20a440u: goto label_20a440;
        case 0x20a444u: goto label_20a444;
        case 0x20a448u: goto label_20a448;
        case 0x20a44cu: goto label_20a44c;
        case 0x20a450u: goto label_20a450;
        case 0x20a454u: goto label_20a454;
        case 0x20a458u: goto label_20a458;
        case 0x20a45cu: goto label_20a45c;
        case 0x20a460u: goto label_20a460;
        case 0x20a464u: goto label_20a464;
        case 0x20a468u: goto label_20a468;
        case 0x20a46cu: goto label_20a46c;
        case 0x20a470u: goto label_20a470;
        case 0x20a474u: goto label_20a474;
        case 0x20a478u: goto label_20a478;
        case 0x20a47cu: goto label_20a47c;
        case 0x20a480u: goto label_20a480;
        case 0x20a484u: goto label_20a484;
        case 0x20a488u: goto label_20a488;
        case 0x20a48cu: goto label_20a48c;
        case 0x20a490u: goto label_20a490;
        case 0x20a494u: goto label_20a494;
        case 0x20a498u: goto label_20a498;
        case 0x20a49cu: goto label_20a49c;
        case 0x20a4a0u: goto label_20a4a0;
        case 0x20a4a4u: goto label_20a4a4;
        case 0x20a4a8u: goto label_20a4a8;
        case 0x20a4acu: goto label_20a4ac;
        case 0x20a4b0u: goto label_20a4b0;
        case 0x20a4b4u: goto label_20a4b4;
        case 0x20a4b8u: goto label_20a4b8;
        case 0x20a4bcu: goto label_20a4bc;
        case 0x20a4c0u: goto label_20a4c0;
        case 0x20a4c4u: goto label_20a4c4;
        case 0x20a4c8u: goto label_20a4c8;
        case 0x20a4ccu: goto label_20a4cc;
        case 0x20a4d0u: goto label_20a4d0;
        case 0x20a4d4u: goto label_20a4d4;
        case 0x20a4d8u: goto label_20a4d8;
        case 0x20a4dcu: goto label_20a4dc;
        case 0x20a4e0u: goto label_20a4e0;
        case 0x20a4e4u: goto label_20a4e4;
        case 0x20a4e8u: goto label_20a4e8;
        case 0x20a4ecu: goto label_20a4ec;
        case 0x20a4f0u: goto label_20a4f0;
        case 0x20a4f4u: goto label_20a4f4;
        case 0x20a4f8u: goto label_20a4f8;
        case 0x20a4fcu: goto label_20a4fc;
        case 0x20a500u: goto label_20a500;
        case 0x20a504u: goto label_20a504;
        case 0x20a508u: goto label_20a508;
        case 0x20a50cu: goto label_20a50c;
        case 0x20a510u: goto label_20a510;
        case 0x20a514u: goto label_20a514;
        case 0x20a518u: goto label_20a518;
        case 0x20a51cu: goto label_20a51c;
        case 0x20a520u: goto label_20a520;
        case 0x20a524u: goto label_20a524;
        case 0x20a528u: goto label_20a528;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a530u: goto label_20a530;
        case 0x20a534u: goto label_20a534;
        case 0x20a538u: goto label_20a538;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a540u: goto label_20a540;
        case 0x20a544u: goto label_20a544;
        case 0x20a548u: goto label_20a548;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a550u: goto label_20a550;
        case 0x20a554u: goto label_20a554;
        default: break;
    }

    ctx->pc = 0x20a440u;

label_20a440:
    // 0x20a440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20a444:
    // 0x20a444: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x20a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_20a448:
    // 0x20a448: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_20a44c:
    // 0x20a44c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20a44cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a450:
    // 0x20a450: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20a454:
    // 0x20a454: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20a454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_20a458:
    // 0x20a458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a45c:
    // 0x20a45c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20a460:
    // 0x20a460: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_20a464:
    // 0x20a464: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20a468:
    // 0x20a468: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_20a46c:
    if (ctx->pc == 0x20A46Cu) {
        ctx->pc = 0x20A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A468u;
        // 0x20a46c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A470u;
        goto label_20a470;
    }
    ctx->pc = 0x20A468u;
    {
        const bool branch_taken_0x20a468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A468u;
        // 0x20a46c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a468) {
            ctx->pc = 0x20A490u;
            goto label_20a490;
        }
    }
    ctx->pc = 0x20A470u;
label_20a470:
    // 0x20a470: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20a474:
    // 0x20a474: 0x40f809  jalr        $v0
label_20a478:
    if (ctx->pc == 0x20A478u) {
        ctx->pc = 0x20A47Cu;
        goto label_20a47c;
    }
    ctx->pc = 0x20A474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A47Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A474u, 0x20A47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A47Cu;
label_20a47c:
    // 0x20a47c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20a480:
    if (ctx->pc == 0x20A480u) {
        ctx->pc = 0x20A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A47Cu;
        // 0x20a480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A484u;
        goto label_20a484;
    }
    ctx->pc = 0x20A47Cu;
    {
        const bool branch_taken_0x20a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A47Cu;
        // 0x20a480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a47c) {
            ctx->pc = 0x20A538u;
            goto label_20a538;
        }
    }
    ctx->pc = 0x20A484u;
label_20a484:
    // 0x20a484: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x20a484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20a488:
    // 0x20a488: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20a48c:
    // 0x20a48c: 0x0  nop
    ctx->pc = 0x20a48cu;
    // NOP
label_20a490:
    // 0x20a490: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x20a490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20a494:
    // 0x20a494: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20a498:
    // 0x20a498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20a49c:
    // 0x20a49c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_20a4a0:
    if (ctx->pc == 0x20A4A0u) {
        ctx->pc = 0x20A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A49Cu;
        // 0x20a4a0: 0x29a00  sll         $s3, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4A4u;
        goto label_20a4a4;
    }
    ctx->pc = 0x20A49Cu;
    {
        const bool branch_taken_0x20a49c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A49Cu;
        // 0x20a4a0: 0x29a00  sll         $s3, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a49c) {
            ctx->pc = 0x20A4C4u;
            goto label_20a4c4;
        }
    }
    ctx->pc = 0x20A4A4u;
label_20a4a4:
    // 0x20a4a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20a4a8:
    // 0x20a4a8: 0x40f809  jalr        $v0
label_20a4ac:
    if (ctx->pc == 0x20A4ACu) {
        ctx->pc = 0x20A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4A8u;
        // 0x20a4ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4B0u;
        goto label_20a4b0;
    }
    ctx->pc = 0x20A4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A4B0u);
        ctx->pc = 0x20A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4A8u;
        // 0x20a4ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A4A8u, 0x20A4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A4B0u;
label_20a4b0:
    // 0x20a4b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_20a4b4:
    if (ctx->pc == 0x20A4B4u) {
        ctx->pc = 0x20A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B0u;
        // 0x20a4b4: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4B8u;
        goto label_20a4b8;
    }
    ctx->pc = 0x20A4B0u;
    {
        const bool branch_taken_0x20a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a4b0) {
            ctx->pc = 0x20A4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A4B0u;
            // 0x20a4b4: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A4C0u;
            goto label_20a4c0;
        }
    }
    ctx->pc = 0x20A4B8u;
label_20a4b8:
    // 0x20a4b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_20a4bc:
    if (ctx->pc == 0x20A4BCu) {
        ctx->pc = 0x20A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B8u;
        // 0x20a4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4C0u;
        goto label_20a4c0;
    }
    ctx->pc = 0x20A4B8u;
    {
        const bool branch_taken_0x20a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B8u;
        // 0x20a4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4b8) {
            ctx->pc = 0x20A538u;
            goto label_20a538;
        }
    }
    ctx->pc = 0x20A4C0u;
label_20a4c0:
    // 0x20a4c0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20a4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20a4c4:
    // 0x20a4c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x20a4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20a4c8:
    // 0x20a4c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20a4cc:
    // 0x20a4cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20a4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20a4d0:
    // 0x20a4d0: 0x262982d  daddu       $s3, $s3, $v0
    ctx->pc = 0x20a4d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
label_20a4d4:
    // 0x20a4d4: 0x6673fffe  daddiu      $s3, $s3, -0x2
    ctx->pc = 0x20a4d4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294967294);
label_20a4d8:
    // 0x20a4d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x20a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20a4dc:
    // 0x20a4dc: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x20a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_20a4e0:
    // 0x20a4e0: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x20a4e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
label_20a4e4:
    // 0x20a4e4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x20a4e4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_20a4e8:
    // 0x20a4e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a4ec:
    // 0x20a4ec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20a4f0:
    // 0x20a4f0: 0x8e8201a0  lw          $v0, 0x1A0($s4)
    ctx->pc = 0x20a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_20a4f4:
    // 0x20a4f4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x20a4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20a4f8:
    // 0x20a4f8: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x20a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_20a4fc:
    // 0x20a4fc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x20a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20a500:
    // 0x20a500: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x20a500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
label_20a504:
    // 0x20a504: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20a508:
    // 0x20a508: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20a50c:
    // 0x20a50c: 0x60f809  jalr        $v1
label_20a510:
    if (ctx->pc == 0x20A510u) {
        ctx->pc = 0x20A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A50Cu;
        // 0x20a510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A514u;
        goto label_20a514;
    }
    ctx->pc = 0x20A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A514u);
        ctx->pc = 0x20A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A50Cu;
        // 0x20a510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A50Cu, 0x20A514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A514u;
label_20a514:
    // 0x20a514: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x20a514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_20a518:
    // 0x20a518: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
label_20a51c:
    if (ctx->pc == 0x20A51Cu) {
        ctx->pc = 0x20A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A518u;
        // 0x20a51c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A520u;
        goto label_20a520;
    }
    ctx->pc = 0x20A518u;
    {
        const bool branch_taken_0x20a518 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x20A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A518u;
        // 0x20a51c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a518) {
            ctx->pc = 0x20A534u;
            goto label_20a534;
        }
    }
    ctx->pc = 0x20A520u;
label_20a520:
    // 0x20a520: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x20a520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_20a524:
    // 0x20a524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a528:
    // 0x20a528: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_20a52c:
    // 0x20a52c: 0x40f809  jalr        $v0
label_20a530:
    if (ctx->pc == 0x20A530u) {
        ctx->pc = 0x20A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A52Cu;
        // 0x20a530: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A534u;
        goto label_20a534;
    }
    ctx->pc = 0x20A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A534u);
        ctx->pc = 0x20A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A52Cu;
        // 0x20a530: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A52Cu, 0x20A534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A534u;
label_20a534:
    // 0x20a534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a538:
    // 0x20a538: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20a538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20a53c:
    // 0x20a53c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20a53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20a540:
    // 0x20a540: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20a540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a544:
    // 0x20a544: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20a544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a548:
    // 0x20a548: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x20a548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a54c:
    // 0x20a54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a550:
    // 0x20a550: 0x3e00008  jr          $ra
label_20a554:
    if (ctx->pc == 0x20A554u) {
        ctx->pc = 0x20A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A550u;
        // 0x20a554: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A558u;
        goto label_fallthrough_0x20a550;
    }
    ctx->pc = 0x20A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A550u;
        // 0x20a554: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a550:
    ctx->pc = 0x20A558u;
}
