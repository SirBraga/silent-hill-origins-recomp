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

// Function: sub_0029A458
// Address: 0x29a458 - 0x29a590
void sub_0029A458_0x29a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A458_0x29a458");
#endif

    switch (ctx->pc) {
        case 0x29a498u: goto label_29a498;
        case 0x29a4bcu: goto label_29a4bc;
        case 0x29a4d8u: goto label_29a4d8;
        case 0x29a544u: goto label_29a544;
        case 0x29a570u: goto label_29a570;
        default: break;
    }

    ctx->pc = 0x29a458u;

    // 0x29a458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a468: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29a468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a46c: 0x90a3001a  lbu         $v1, 0x1A($a1)
    ctx->pc = 0x29a46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x29a470: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A470u;
    {
        const bool branch_taken_0x29a470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A470u;
        // 0x29a474: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a470) {
            ctx->pc = 0x29A484u;
            goto label_29a484;
        }
    }
    ctx->pc = 0x29A478u;
    // 0x29a478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a47c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29A47Cu;
    {
        const bool branch_taken_0x29a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A47Cu;
        // 0x29a480: 0xa0a3001a  sb          $v1, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a47c) {
            ctx->pc = 0x29A4C4u;
            goto label_29a4c4;
        }
    }
    ctx->pc = 0x29A484u;
label_29a484:
    // 0x29a484: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x29a484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29a488: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A488u;
    {
        const bool branch_taken_0x29a488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a488) {
            ctx->pc = 0x29A48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A488u;
            // 0x29a48c: 0xdca20010  ld          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A4A0u;
            goto label_29a4a0;
        }
    }
    ctx->pc = 0x29A490u;
    // 0x29a490: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29A490u;
    SET_GPR_U32(ctx, 31, 0x29A498u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29A490u, 0x29A498u)) {
        return;
    }
    ctx->pc = 0x29A498u;
label_29a498:
    // 0x29a498: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29a498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a49c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x29a49cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_29a4a0:
    // 0x29a4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a4a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a4a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29a4a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29a4ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A4ACu;
    {
        const bool branch_taken_0x29a4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4ACu;
        // 0x29a4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4ac) {
            ctx->pc = 0x29A4C4u;
            goto label_29a4c4;
        }
    }
    ctx->pc = 0x29A4B4u;
    // 0x29a4b4: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x29A4B4u;
    SET_GPR_U32(ctx, 31, 0x29A4BCu);
    ctx->pc = 0x29A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4B4u;
    // 0x29a4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x29A4B4u, 0x29A4BCu)) {
        return;
    }
    ctx->pc = 0x29A4BCu;
label_29a4bc:
    // 0x29a4bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A4BCu;
    {
        const bool branch_taken_0x29a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4BCu;
        // 0x29a4c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4bc) {
            ctx->pc = 0x29A4C8u;
            goto label_29a4c8;
        }
    }
    ctx->pc = 0x29A4C4u;
label_29a4c4:
    // 0x29a4c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a4c8:
    // 0x29a4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29A4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4CCu;
        // 0x29a4d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A4D4u;
    // 0x29a4d4: 0x0  nop
    ctx->pc = 0x29a4d4u;
    // NOP
label_29a4d8:
    // 0x29a4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a4dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a4e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a4ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a4f0: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x29a4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29a4f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A4F4u;
    {
        const bool branch_taken_0x29a4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4F4u;
        // 0x29a4f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4f4) {
            ctx->pc = 0x29A50Cu;
            goto label_29a50c;
        }
    }
    ctx->pc = 0x29A4FCu;
    // 0x29a4fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x29a4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x29a500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a504: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29A504u;
    {
        const bool branch_taken_0x29a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A504u;
        // 0x29a508: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a504) {
            ctx->pc = 0x29A578u;
            goto label_29a578;
        }
    }
    ctx->pc = 0x29A50Cu;
label_29a50c:
    // 0x29a50c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x29a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a510: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x29A510u;
    {
        const bool branch_taken_0x29a510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a510) {
            ctx->pc = 0x29A544u;
            goto label_29a544;
        }
    }
    ctx->pc = 0x29A518u;
    // 0x29a518: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A518u;
    {
        const bool branch_taken_0x29a518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a518) {
            ctx->pc = 0x29A53Cu;
            goto label_29a53c;
        }
    }
    ctx->pc = 0x29A520u;
    // 0x29a520: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a524: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29a524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a528: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a52c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x29a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29a530: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29a534: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A534u;
    {
        const bool branch_taken_0x29a534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a534) {
            ctx->pc = 0x29A544u;
            goto label_29a544;
        }
    }
    ctx->pc = 0x29A53Cu;
label_29a53c:
    // 0x29a53c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29A53Cu;
    SET_GPR_U32(ctx, 31, 0x29A544u);
    ctx->pc = 0x29A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A53Cu;
    // 0x29a540: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29A53Cu, 0x29A544u)) {
        return;
    }
    ctx->pc = 0x29A544u;
label_29a544:
    // 0x29a544: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x29A544u;
    {
        const bool branch_taken_0x29a544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A544u;
        // 0x29a548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a544) {
            ctx->pc = 0x29A578u;
            goto label_29a578;
        }
    }
    ctx->pc = 0x29A54Cu;
    // 0x29a54c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a550: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29a550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29a554: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a558: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a55c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29a55cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29a560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A560u;
    {
        const bool branch_taken_0x29a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A560u;
        // 0x29a564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a560) {
            ctx->pc = 0x29A578u;
            goto label_29a578;
        }
    }
    ctx->pc = 0x29A568u;
    // 0x29a568: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x29A568u;
    SET_GPR_U32(ctx, 31, 0x29A570u);
    ctx->pc = 0x29A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A568u;
    // 0x29a56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x29A568u, 0x29A570u)) {
        return;
    }
    ctx->pc = 0x29A570u;
label_29a570:
    // 0x29a570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A570u;
    {
        const bool branch_taken_0x29a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A570u;
        // 0x29a574: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a570) {
            ctx->pc = 0x29A57Cu;
            goto label_29a57c;
        }
    }
    ctx->pc = 0x29A578u;
label_29a578:
    // 0x29a578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a57c:
    // 0x29a57c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a584: 0x3e00008  jr          $ra
    ctx->pc = 0x29A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A584u;
        // 0x29a588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A58Cu;
    // 0x29a58c: 0x0  nop
    ctx->pc = 0x29a58cu;
    // NOP
    ctx->pc = 0x29a590u;
}
