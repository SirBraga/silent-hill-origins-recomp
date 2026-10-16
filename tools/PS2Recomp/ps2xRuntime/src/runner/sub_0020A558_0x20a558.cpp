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

// Function: sub_0020A558
// Address: 0x20a558 - 0x20a618
void sub_0020A558_0x20a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A558_0x20a558");
#endif

    switch (ctx->pc) {
        case 0x20a558u: goto label_20a558;
        case 0x20a55cu: goto label_20a55c;
        case 0x20a560u: goto label_20a560;
        case 0x20a564u: goto label_20a564;
        case 0x20a568u: goto label_20a568;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a570u: goto label_20a570;
        case 0x20a574u: goto label_20a574;
        case 0x20a578u: goto label_20a578;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a580u: goto label_20a580;
        case 0x20a584u: goto label_20a584;
        case 0x20a588u: goto label_20a588;
        case 0x20a58cu: goto label_20a58c;
        case 0x20a590u: goto label_20a590;
        case 0x20a594u: goto label_20a594;
        case 0x20a598u: goto label_20a598;
        case 0x20a59cu: goto label_20a59c;
        case 0x20a5a0u: goto label_20a5a0;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5a8u: goto label_20a5a8;
        case 0x20a5acu: goto label_20a5ac;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b4u: goto label_20a5b4;
        case 0x20a5b8u: goto label_20a5b8;
        case 0x20a5bcu: goto label_20a5bc;
        case 0x20a5c0u: goto label_20a5c0;
        case 0x20a5c4u: goto label_20a5c4;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5ccu: goto label_20a5cc;
        case 0x20a5d0u: goto label_20a5d0;
        case 0x20a5d4u: goto label_20a5d4;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5dcu: goto label_20a5dc;
        case 0x20a5e0u: goto label_20a5e0;
        case 0x20a5e4u: goto label_20a5e4;
        case 0x20a5e8u: goto label_20a5e8;
        case 0x20a5ecu: goto label_20a5ec;
        case 0x20a5f0u: goto label_20a5f0;
        case 0x20a5f4u: goto label_20a5f4;
        case 0x20a5f8u: goto label_20a5f8;
        case 0x20a5fcu: goto label_20a5fc;
        case 0x20a600u: goto label_20a600;
        case 0x20a604u: goto label_20a604;
        case 0x20a608u: goto label_20a608;
        case 0x20a60cu: goto label_20a60c;
        case 0x20a610u: goto label_20a610;
        case 0x20a614u: goto label_20a614;
        default: break;
    }

    ctx->pc = 0x20a558u;

label_20a558:
    // 0x20a558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20a55c:
    // 0x20a55c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20a560:
    // 0x20a560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a564:
    // 0x20a564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a568:
    // 0x20a568: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_20a56c:
    // 0x20a56c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_20a570:
    if (ctx->pc == 0x20A570u) {
        ctx->pc = 0x20A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A56Cu;
        // 0x20a570: 0x8e0201b8  lw          $v0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A574u;
        goto label_20a574;
    }
    ctx->pc = 0x20A56Cu;
    {
        const bool branch_taken_0x20a56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a56c) {
            ctx->pc = 0x20A570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A56Cu;
            // 0x20a570: 0x8e0201b8  lw          $v0, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A588u;
            goto label_20a588;
        }
    }
    ctx->pc = 0x20A574u;
label_20a574:
    // 0x20a574: 0xc0826b4  jal         func_209AD0
label_20a578:
    if (ctx->pc == 0x20A578u) {
        ctx->pc = 0x20A57Cu;
        goto label_20a57c;
    }
    ctx->pc = 0x20A574u;
    SET_GPR_U32(ctx, 31, 0x20A57Cu);
    ctx->pc = 0x209AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x209AD0u, 0x20A574u, 0x20A57Cu)) {
        return;
    }
    ctx->pc = 0x20A57Cu;
label_20a57c:
    // 0x20a57c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_20a580:
    if (ctx->pc == 0x20A580u) {
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A584u;
        goto label_20a584;
    }
    ctx->pc = 0x20A57Cu;
    {
        const bool branch_taken_0x20a57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a57c) {
            ctx->pc = 0x20A604u;
            goto label_20a604;
        }
    }
    ctx->pc = 0x20A584u;
label_20a584:
    // 0x20a584: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20a588:
    // 0x20a588: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_20a58c:
    // 0x20a58c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x20a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_20a590:
    // 0x20a590: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x20a590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_20a594:
    // 0x20a594: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_20a598:
    if (ctx->pc == 0x20A598u) {
        ctx->pc = 0x20A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A594u;
        // 0x20a598: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A59Cu;
        goto label_20a59c;
    }
    ctx->pc = 0x20A594u;
    {
        const bool branch_taken_0x20a594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20a594) {
            ctx->pc = 0x20A598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A594u;
            // 0x20a598: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A5BCu;
            goto label_20a5bc;
        }
    }
    ctx->pc = 0x20A59Cu;
label_20a59c:
    // 0x20a59c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20a5a0:
    // 0x20a5a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20a5a4:
    // 0x20a5a4: 0x40f809  jalr        $v0
label_20a5a8:
    if (ctx->pc == 0x20A5A8u) {
        ctx->pc = 0x20A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A4u;
        // 0x20a5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5ACu;
        goto label_20a5ac;
    }
    ctx->pc = 0x20A5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A5ACu);
        ctx->pc = 0x20A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A4u;
        // 0x20a5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5A4u, 0x20A5ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A5ACu;
label_20a5ac:
    // 0x20a5ac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_20a5b0:
    if (ctx->pc == 0x20A5B0u) {
        ctx->pc = 0x20A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5ACu;
        // 0x20a5b0: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5B4u;
        goto label_20a5b4;
    }
    ctx->pc = 0x20A5ACu;
    {
        const bool branch_taken_0x20a5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a5ac) {
            ctx->pc = 0x20A5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A5ACu;
            // 0x20a5b0: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A5F0u;
            goto label_20a5f0;
        }
    }
    ctx->pc = 0x20A5B4u;
label_20a5b4:
    // 0x20a5b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_20a5b8:
    if (ctx->pc == 0x20A5B8u) {
        ctx->pc = 0x20A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5B4u;
        // 0x20a5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5BCu;
        goto label_20a5bc;
    }
    ctx->pc = 0x20A5B4u;
    {
        const bool branch_taken_0x20a5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5B4u;
        // 0x20a5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5b4) {
            ctx->pc = 0x20A604u;
            goto label_20a604;
        }
    }
    ctx->pc = 0x20A5BCu;
label_20a5bc:
    // 0x20a5bc: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_20a5c0:
    // 0x20a5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a5c4:
    // 0x20a5c4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x20a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_20a5c8:
    // 0x20a5c8: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20a5cc:
    // 0x20a5cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a5d0:
    // 0x20a5d0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20a5d4:
    // 0x20a5d4: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x20a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_20a5d8:
    // 0x20a5d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a5dc:
    // 0x20a5dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20a5e0:
    // 0x20a5e0: 0x40f809  jalr        $v0
label_20a5e4:
    if (ctx->pc == 0x20A5E4u) {
        ctx->pc = 0x20A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5E0u;
        // 0x20a5e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5E8u;
        goto label_20a5e8;
    }
    ctx->pc = 0x20A5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A5E8u);
        ctx->pc = 0x20A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5E0u;
        // 0x20a5e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5E0u, 0x20A5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A5E8u;
label_20a5e8:
    // 0x20a5e8: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x20a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_20a5ec:
    // 0x20a5ec: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20a5f0:
    // 0x20a5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a5f4:
    // 0x20a5f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20a5f8:
    // 0x20a5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20a5fc:
    // 0x20a5fc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x20a5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_20a600:
    // 0x20a600: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x20a600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_20a604:
    // 0x20a604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a608:
    // 0x20a608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a60c:
    // 0x20a60c: 0x3e00008  jr          $ra
label_20a610:
    if (ctx->pc == 0x20A610u) {
        ctx->pc = 0x20A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A60Cu;
        // 0x20a610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A614u;
        goto label_20a614;
    }
    ctx->pc = 0x20A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A60Cu;
        // 0x20a610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A614u;
label_20a614:
    // 0x20a614: 0x0  nop
    ctx->pc = 0x20a614u;
    // NOP
    ctx->pc = 0x20a618u;
}
