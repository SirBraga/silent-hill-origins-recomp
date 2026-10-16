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

// Function: sub_00259470
// Address: 0x259470 - 0x259570
void sub_00259470_0x259470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259470_0x259470");
#endif

    switch (ctx->pc) {
        case 0x259470u: goto label_259470;
        case 0x259474u: goto label_259474;
        case 0x259478u: goto label_259478;
        case 0x25947cu: goto label_25947c;
        case 0x259480u: goto label_259480;
        case 0x259484u: goto label_259484;
        case 0x259488u: goto label_259488;
        case 0x25948cu: goto label_25948c;
        case 0x259490u: goto label_259490;
        case 0x259494u: goto label_259494;
        case 0x259498u: goto label_259498;
        case 0x25949cu: goto label_25949c;
        case 0x2594a0u: goto label_2594a0;
        case 0x2594a4u: goto label_2594a4;
        case 0x2594a8u: goto label_2594a8;
        case 0x2594acu: goto label_2594ac;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594b4u: goto label_2594b4;
        case 0x2594b8u: goto label_2594b8;
        case 0x2594bcu: goto label_2594bc;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594c4u: goto label_2594c4;
        case 0x2594c8u: goto label_2594c8;
        case 0x2594ccu: goto label_2594cc;
        case 0x2594d0u: goto label_2594d0;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594d8u: goto label_2594d8;
        case 0x2594dcu: goto label_2594dc;
        case 0x2594e0u: goto label_2594e0;
        case 0x2594e4u: goto label_2594e4;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594ecu: goto label_2594ec;
        case 0x2594f0u: goto label_2594f0;
        case 0x2594f4u: goto label_2594f4;
        case 0x2594f8u: goto label_2594f8;
        case 0x2594fcu: goto label_2594fc;
        case 0x259500u: goto label_259500;
        case 0x259504u: goto label_259504;
        case 0x259508u: goto label_259508;
        case 0x25950cu: goto label_25950c;
        case 0x259510u: goto label_259510;
        case 0x259514u: goto label_259514;
        case 0x259518u: goto label_259518;
        case 0x25951cu: goto label_25951c;
        case 0x259520u: goto label_259520;
        case 0x259524u: goto label_259524;
        case 0x259528u: goto label_259528;
        case 0x25952cu: goto label_25952c;
        case 0x259530u: goto label_259530;
        case 0x259534u: goto label_259534;
        case 0x259538u: goto label_259538;
        case 0x25953cu: goto label_25953c;
        case 0x259540u: goto label_259540;
        case 0x259544u: goto label_259544;
        case 0x259548u: goto label_259548;
        case 0x25954cu: goto label_25954c;
        case 0x259550u: goto label_259550;
        case 0x259554u: goto label_259554;
        case 0x259558u: goto label_259558;
        case 0x25955cu: goto label_25955c;
        case 0x259560u: goto label_259560;
        case 0x259564u: goto label_259564;
        case 0x259568u: goto label_259568;
        case 0x25956cu: goto label_25956c;
        default: break;
    }

    ctx->pc = 0x259470u;

label_259470:
    // 0x259470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x259470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_259474:
    // 0x259474: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x259474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_259478:
    // 0x259478: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x259478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25947c:
    // 0x25947c: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x25947cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_259480:
    // 0x259480: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x259480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_259484:
    // 0x259484: 0x30f1ffff  andi        $s1, $a3, 0xFFFF
    ctx->pc = 0x259484u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_259488:
    // 0x259488: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x259488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25948c:
    // 0x25948c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25948cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259490:
    // 0x259490: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x259490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_259494:
    // 0x259494: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x259494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_259498:
    // 0x259498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25949c:
    // 0x25949c: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x25949cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2594a0:
    // 0x2594a0: 0x1140001b  beqz        $t2, . + 4 + (0x1B << 2)
label_2594a4:
    if (ctx->pc == 0x2594A4u) {
        ctx->pc = 0x2594A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594A0u;
        // 0x2594a4: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594A8u;
        goto label_2594a8;
    }
    ctx->pc = 0x2594A0u;
    {
        const bool branch_taken_0x2594a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2594A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594A0u;
        // 0x2594a4: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594a0) {
            ctx->pc = 0x259510u;
            goto label_259510;
        }
    }
    ctx->pc = 0x2594A8u;
label_2594a8:
    // 0x2594a8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2594a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2594ac:
    // 0x2594ac: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x2594acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2594b0:
    // 0x2594b0: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x2594b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_2594b4:
    // 0x2594b4: 0x0  nop
    ctx->pc = 0x2594b4u;
    // NOP
label_2594b8:
    // 0x2594b8: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_2594bc:
    if (ctx->pc == 0x2594BCu) {
        ctx->pc = 0x2594BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B8u;
        // 0x2594bc: 0x8d4a000c  lw          $t2, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594C0u;
        goto label_2594c0;
    }
    ctx->pc = 0x2594B8u;
    {
        const bool branch_taken_0x2594b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2594b8) {
            ctx->pc = 0x2594BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2594B8u;
            // 0x2594bc: 0x8d4a000c  lw          $t2, 0xC($t2) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259508u;
            goto label_259508;
        }
    }
    ctx->pc = 0x2594C0u;
label_2594c0:
    // 0x2594c0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x2594c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_2594c4:
    // 0x2594c4: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_2594c8:
    if (ctx->pc == 0x2594C8u) {
        ctx->pc = 0x2594C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594C4u;
        // 0x2594c8: 0x8d4a000c  lw          $t2, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594CCu;
        goto label_2594cc;
    }
    ctx->pc = 0x2594C4u;
    {
        const bool branch_taken_0x2594c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2594c4) {
            ctx->pc = 0x2594C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2594C4u;
            // 0x2594c8: 0x8d4a000c  lw          $t2, 0xC($t2) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259508u;
            goto label_259508;
        }
    }
    ctx->pc = 0x2594CCu;
label_2594cc:
    // 0x2594cc: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2594ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2594d0:
    // 0x2594d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2594d4:
    if (ctx->pc == 0x2594D4u) {
        ctx->pc = 0x2594D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D0u;
        // 0x2594d4: 0x8d4a000c  lw          $t2, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594D8u;
        goto label_2594d8;
    }
    ctx->pc = 0x2594D0u;
    {
        const bool branch_taken_0x2594d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2594d0) {
            ctx->pc = 0x2594D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2594D0u;
            // 0x2594d4: 0x8d4a000c  lw          $t2, 0xC($t2) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259508u;
            goto label_259508;
        }
    }
    ctx->pc = 0x2594D8u;
label_2594d8:
    // 0x2594d8: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x2594d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_2594dc:
    // 0x2594dc: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2594dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2594e0:
    // 0x2594e0: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x2594e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_2594e4:
    // 0x2594e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2594e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2594e8:
    // 0x2594e8: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x2594e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
label_2594ec:
    // 0x2594ec: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2594ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2594f0:
    // 0x2594f0: 0x90a30020  lbu         $v1, 0x20($a1)
    ctx->pc = 0x2594f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_2594f4:
    // 0x2594f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2594f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2594f8:
    // 0x2594f8: 0xa0a30020  sb          $v1, 0x20($a1)
    ctx->pc = 0x2594f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 3));
label_2594fc:
    // 0x2594fc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2594fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259500:
    // 0x259500: 0x10000013  b           . + 4 + (0x13 << 2)
label_259504:
    if (ctx->pc == 0x259504u) {
        ctx->pc = 0x259504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259500u;
        // 0x259504: 0xad440008  sw          $a0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259508u;
        goto label_259508;
    }
    ctx->pc = 0x259500u;
    {
        const bool branch_taken_0x259500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259500u;
        // 0x259504: 0xad440008  sw          $a0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259500) {
            ctx->pc = 0x259550u;
            goto label_259550;
        }
    }
    ctx->pc = 0x259508u;
label_259508:
    // 0x259508: 0x5540ffeb  bnel        $t2, $zero, . + 4 + (-0x15 << 2)
label_25950c:
    if (ctx->pc == 0x25950Cu) {
        ctx->pc = 0x25950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259508u;
        // 0x25950c: 0x95420002  lhu         $v0, 0x2($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259510u;
        goto label_259510;
    }
    ctx->pc = 0x259508u;
    {
        const bool branch_taken_0x259508 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x259508) {
            ctx->pc = 0x25950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259508u;
            // 0x25950c: 0x95420002  lhu         $v0, 0x2($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2594B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2594b8;
        }
    }
    ctx->pc = 0x259510u;
label_259510:
    // 0x259510: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x259510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_259514:
    // 0x259514: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x259514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_259518:
    // 0x259518: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x259518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_25951c:
    // 0x25951c: 0x40f809  jalr        $v0
label_259520:
    if (ctx->pc == 0x259520u) {
        ctx->pc = 0x259520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25951Cu;
        // 0x259520: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259524u;
        goto label_259524;
    }
    ctx->pc = 0x25951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259524u);
        ctx->pc = 0x259520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25951Cu;
        // 0x259520: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25951Cu, 0x259524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259524u;
label_259524:
    // 0x259524: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x259524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259528:
    // 0x259528: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x259528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_25952c:
    // 0x25952c: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x25952cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
label_259530:
    // 0x259530: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x259530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_259534:
    // 0x259534: 0xa4710002  sh          $s1, 0x2($v1)
    ctx->pc = 0x259534u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 17));
label_259538:
    // 0x259538: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x259538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25953c:
    // 0x25953c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x25953cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_259540:
    // 0x259540: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x259540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_259544:
    // 0x259544: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x259544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_259548:
    // 0x259548: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x259548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_25954c:
    // 0x25954c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x25954cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_259550:
    // 0x259550: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x259550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259554:
    // 0x259554: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x259554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_259558:
    // 0x259558: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x259558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25955c:
    // 0x25955c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25955cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259560:
    // 0x259560: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x259560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_259564:
    // 0x259564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_259568:
    // 0x259568: 0x3e00008  jr          $ra
label_25956c:
    if (ctx->pc == 0x25956Cu) {
        ctx->pc = 0x25956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259568u;
        // 0x25956c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259570u;
        goto label_fallthrough_0x259568;
    }
    ctx->pc = 0x259568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259568u;
        // 0x25956c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x259568:
    ctx->pc = 0x259570u;
}
