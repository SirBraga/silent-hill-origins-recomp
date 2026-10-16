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

// Function: sub_00170540
// Address: 0x170540 - 0x170690
void sub_00170540_0x170540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170540_0x170540");
#endif

    switch (ctx->pc) {
        case 0x170540u: goto label_170540;
        case 0x170544u: goto label_170544;
        case 0x170548u: goto label_170548;
        case 0x17054cu: goto label_17054c;
        case 0x170550u: goto label_170550;
        case 0x170554u: goto label_170554;
        case 0x170558u: goto label_170558;
        case 0x17055cu: goto label_17055c;
        case 0x170560u: goto label_170560;
        case 0x170564u: goto label_170564;
        case 0x170568u: goto label_170568;
        case 0x17056cu: goto label_17056c;
        case 0x170570u: goto label_170570;
        case 0x170574u: goto label_170574;
        case 0x170578u: goto label_170578;
        case 0x17057cu: goto label_17057c;
        case 0x170580u: goto label_170580;
        case 0x170584u: goto label_170584;
        case 0x170588u: goto label_170588;
        case 0x17058cu: goto label_17058c;
        case 0x170590u: goto label_170590;
        case 0x170594u: goto label_170594;
        case 0x170598u: goto label_170598;
        case 0x17059cu: goto label_17059c;
        case 0x1705a0u: goto label_1705a0;
        case 0x1705a4u: goto label_1705a4;
        case 0x1705a8u: goto label_1705a8;
        case 0x1705acu: goto label_1705ac;
        case 0x1705b0u: goto label_1705b0;
        case 0x1705b4u: goto label_1705b4;
        case 0x1705b8u: goto label_1705b8;
        case 0x1705bcu: goto label_1705bc;
        case 0x1705c0u: goto label_1705c0;
        case 0x1705c4u: goto label_1705c4;
        case 0x1705c8u: goto label_1705c8;
        case 0x1705ccu: goto label_1705cc;
        case 0x1705d0u: goto label_1705d0;
        case 0x1705d4u: goto label_1705d4;
        case 0x1705d8u: goto label_1705d8;
        case 0x1705dcu: goto label_1705dc;
        case 0x1705e0u: goto label_1705e0;
        case 0x1705e4u: goto label_1705e4;
        case 0x1705e8u: goto label_1705e8;
        case 0x1705ecu: goto label_1705ec;
        case 0x1705f0u: goto label_1705f0;
        case 0x1705f4u: goto label_1705f4;
        case 0x1705f8u: goto label_1705f8;
        case 0x1705fcu: goto label_1705fc;
        case 0x170600u: goto label_170600;
        case 0x170604u: goto label_170604;
        case 0x170608u: goto label_170608;
        case 0x17060cu: goto label_17060c;
        case 0x170610u: goto label_170610;
        case 0x170614u: goto label_170614;
        case 0x170618u: goto label_170618;
        case 0x17061cu: goto label_17061c;
        case 0x170620u: goto label_170620;
        case 0x170624u: goto label_170624;
        case 0x170628u: goto label_170628;
        case 0x17062cu: goto label_17062c;
        case 0x170630u: goto label_170630;
        case 0x170634u: goto label_170634;
        case 0x170638u: goto label_170638;
        case 0x17063cu: goto label_17063c;
        case 0x170640u: goto label_170640;
        case 0x170644u: goto label_170644;
        case 0x170648u: goto label_170648;
        case 0x17064cu: goto label_17064c;
        case 0x170650u: goto label_170650;
        case 0x170654u: goto label_170654;
        case 0x170658u: goto label_170658;
        case 0x17065cu: goto label_17065c;
        case 0x170660u: goto label_170660;
        case 0x170664u: goto label_170664;
        case 0x170668u: goto label_170668;
        case 0x17066cu: goto label_17066c;
        case 0x170670u: goto label_170670;
        case 0x170674u: goto label_170674;
        case 0x170678u: goto label_170678;
        case 0x17067cu: goto label_17067c;
        case 0x170680u: goto label_170680;
        case 0x170684u: goto label_170684;
        case 0x170688u: goto label_170688;
        case 0x17068cu: goto label_17068c;
        default: break;
    }

    ctx->pc = 0x170540u;

label_170540:
    // 0x170540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_170544:
    // 0x170544: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x170544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_170548:
    // 0x170548: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x170548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_17054c:
    // 0x17054c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17054cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170550:
    // 0x170550: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_170554:
    // 0x170554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170558:
    // 0x170558: 0xc04f0bc  jal         func_13C2F0
label_17055c:
    if (ctx->pc == 0x17055Cu) {
        ctx->pc = 0x17055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170558u;
        // 0x17055c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170560u;
        goto label_170560;
    }
    ctx->pc = 0x170558u;
    SET_GPR_U32(ctx, 31, 0x170560u);
    ctx->pc = 0x17055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170558u;
    // 0x17055c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x170558u, 0x170560u)) {
        return;
    }
    ctx->pc = 0x170560u;
label_170560:
    // 0x170560: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x170560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_170564:
    // 0x170564: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_170568:
    if (ctx->pc == 0x170568u) {
        ctx->pc = 0x170568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170564u;
        // 0x170568: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17056Cu;
        goto label_17056c;
    }
    ctx->pc = 0x170564u;
    {
        const bool branch_taken_0x170564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170564) {
            ctx->pc = 0x170568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170564u;
            // 0x170568: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1705FCu;
            goto label_1705fc;
        }
    }
    ctx->pc = 0x17056Cu;
label_17056c:
    // 0x17056c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_170570:
    // 0x170570: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x170570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_170574:
    // 0x170574: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
label_170578:
    if (ctx->pc == 0x170578u) {
        ctx->pc = 0x170578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170574u;
        // 0x170578: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17057Cu;
        goto label_17057c;
    }
    ctx->pc = 0x170574u;
    {
        const bool branch_taken_0x170574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x170574) {
            ctx->pc = 0x170578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170574u;
            // 0x170578: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170600u;
            goto label_170600;
        }
    }
    ctx->pc = 0x17057Cu;
label_17057c:
    // 0x17057c: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_170580:
    // 0x170580: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_170584:
    if (ctx->pc == 0x170584u) {
        ctx->pc = 0x170584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170580u;
        // 0x170584: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170588u;
        goto label_170588;
    }
    ctx->pc = 0x170580u;
    {
        const bool branch_taken_0x170580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170580u;
        // 0x170584: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170580) {
            ctx->pc = 0x1705F8u;
            goto label_1705f8;
        }
    }
    ctx->pc = 0x170588u;
label_170588:
    // 0x170588: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_17058c:
    if (ctx->pc == 0x17058Cu) {
        ctx->pc = 0x17058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170588u;
        // 0x17058c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170590u;
        goto label_170590;
    }
    ctx->pc = 0x170588u;
    {
        const bool branch_taken_0x170588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170588u;
        // 0x17058c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170588) {
            ctx->pc = 0x1705F8u;
            goto label_1705f8;
        }
    }
    ctx->pc = 0x170590u;
label_170590:
    // 0x170590: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x170590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_170594:
    // 0x170594: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_170598:
    if (ctx->pc == 0x170598u) {
        ctx->pc = 0x170598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170594u;
        // 0x170598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17059Cu;
        goto label_17059c;
    }
    ctx->pc = 0x170594u;
    {
        const bool branch_taken_0x170594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170594u;
        // 0x170598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170594) {
            ctx->pc = 0x1705B8u;
            goto label_1705b8;
        }
    }
    ctx->pc = 0x17059Cu;
label_17059c:
    // 0x17059c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1705a0:
    if (ctx->pc == 0x1705A0u) {
        ctx->pc = 0x1705A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17059Cu;
        // 0x1705a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705A4u;
        goto label_1705a4;
    }
    ctx->pc = 0x17059Cu;
    {
        const bool branch_taken_0x17059c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1705A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17059Cu;
        // 0x1705a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17059c) {
            ctx->pc = 0x1705D8u;
            goto label_1705d8;
        }
    }
    ctx->pc = 0x1705A4u;
label_1705a4:
    // 0x1705a4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1705a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1705a8:
    // 0x1705a8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1705ac:
    // 0x1705ac: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1705acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1705b0:
    // 0x1705b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1705b4:
    if (ctx->pc == 0x1705B4u) {
        ctx->pc = 0x1705B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705B0u;
        // 0x1705b4: 0x8c620044  lw          $v0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705B8u;
        goto label_1705b8;
    }
    ctx->pc = 0x1705B0u;
    {
        const bool branch_taken_0x1705b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705B0u;
        // 0x1705b4: 0x8c620044  lw          $v0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705b0) {
            ctx->pc = 0x1705C8u;
            goto label_1705c8;
        }
    }
    ctx->pc = 0x1705B8u;
label_1705b8:
    // 0x1705b8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1705bc:
    // 0x1705bc: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1705c0:
    // 0x1705c0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1705c4:
    // 0x1705c4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1705c8:
    // 0x1705c8: 0x40f809  jalr        $v0
label_1705cc:
    if (ctx->pc == 0x1705CCu) {
        ctx->pc = 0x1705CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705C8u;
        // 0x1705cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705D0u;
        goto label_1705d0;
    }
    ctx->pc = 0x1705C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1705D0u);
        ctx->pc = 0x1705CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705C8u;
        // 0x1705cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1705C8u, 0x1705D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1705D0u;
label_1705d0:
    // 0x1705d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1705d4:
    if (ctx->pc == 0x1705D4u) {
        ctx->pc = 0x1705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705D0u;
        // 0x1705d4: 0x8e0700d0  lw          $a3, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705D8u;
        goto label_1705d8;
    }
    ctx->pc = 0x1705D0u;
    {
        const bool branch_taken_0x1705d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705D0u;
        // 0x1705d4: 0x8e0700d0  lw          $a3, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705d0) {
            ctx->pc = 0x1705DCu;
            goto label_1705dc;
        }
    }
    ctx->pc = 0x1705D8u;
label_1705d8:
    // 0x1705d8: 0x8e0700d0  lw          $a3, 0xD0($s0)
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1705dc:
    // 0x1705dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1705dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1705e0:
    // 0x1705e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1705e4:
    // 0x1705e4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1705e8:
    // 0x1705e8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1705e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1705ec:
    // 0x1705ec: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1705ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1705f0:
    // 0x1705f0: 0x60f809  jalr        $v1
label_1705f4:
    if (ctx->pc == 0x1705F4u) {
        ctx->pc = 0x1705F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F0u;
        // 0x1705f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705F8u;
        goto label_1705f8;
    }
    ctx->pc = 0x1705F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1705F8u);
        ctx->pc = 0x1705F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F0u;
        // 0x1705f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1705F0u, 0x1705F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1705F8u;
label_1705f8:
    // 0x1705f8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_1705fc:
    // 0x1705fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_170600:
    // 0x170600: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_170604:
    if (ctx->pc == 0x170604u) {
        ctx->pc = 0x170604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170600u;
        // 0x170604: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170608u;
        goto label_170608;
    }
    ctx->pc = 0x170600u;
    {
        const bool branch_taken_0x170600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x170600) {
            ctx->pc = 0x170604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170600u;
            // 0x170604: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170624u;
            goto label_170624;
        }
    }
    ctx->pc = 0x170608u;
label_170608:
    // 0x170608: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_17060c:
    // 0x17060c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170610:
    // 0x170610: 0xc05a818  jal         func_16A060
label_170614:
    if (ctx->pc == 0x170614u) {
        ctx->pc = 0x170614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170610u;
        // 0x170614: 0x248452d8  addiu       $a0, $a0, 0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170618u;
        goto label_170618;
    }
    ctx->pc = 0x170610u;
    SET_GPR_U32(ctx, 31, 0x170618u);
    ctx->pc = 0x170614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170610u;
    // 0x170614: 0x248452d8  addiu       $a0, $a0, 0x52D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x170610u, 0x170618u)) {
        return;
    }
    ctx->pc = 0x170618u;
label_170618:
    // 0x170618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17061c:
    // 0x17061c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x17061cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_170620:
    // 0x170620: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x170620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_170624:
    // 0x170624: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_170628:
    // 0x170628: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_17062c:
    if (ctx->pc == 0x17062Cu) {
        ctx->pc = 0x17062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170628u;
        // 0x17062c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170630u;
        goto label_170630;
    }
    ctx->pc = 0x170628u;
    {
        const bool branch_taken_0x170628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170628u;
        // 0x17062c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170628) {
            ctx->pc = 0x170648u;
            goto label_170648;
        }
    }
    ctx->pc = 0x170630u;
label_170630:
    // 0x170630: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x170630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_170634:
    // 0x170634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170638:
    // 0x170638: 0xc05a818  jal         func_16A060
label_17063c:
    if (ctx->pc == 0x17063Cu) {
        ctx->pc = 0x17063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170638u;
        // 0x17063c: 0x248452f0  addiu       $a0, $a0, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170640u;
        goto label_170640;
    }
    ctx->pc = 0x170638u;
    SET_GPR_U32(ctx, 31, 0x170640u);
    ctx->pc = 0x17063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170638u;
    // 0x17063c: 0x248452f0  addiu       $a0, $a0, 0x52F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x170638u, 0x170640u)) {
        return;
    }
    ctx->pc = 0x170640u;
label_170640:
    // 0x170640: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x170640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_170644:
    // 0x170644: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_170648:
    // 0x170648: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x170648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17064c:
    // 0x17064c: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x17064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
label_170650:
    // 0x170650: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_170654:
    if (ctx->pc == 0x170654u) {
        ctx->pc = 0x170654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170650u;
        // 0x170654: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170658u;
        goto label_170658;
    }
    ctx->pc = 0x170650u;
    {
        const bool branch_taken_0x170650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x170654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170650u;
        // 0x170654: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170650) {
            ctx->pc = 0x170668u;
            goto label_170668;
        }
    }
    ctx->pc = 0x170658u;
label_170658:
    // 0x170658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17065c:
    // 0x17065c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x17065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_170660:
    // 0x170660: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_170664:
    // 0x170664: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_170668:
    // 0x170668: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x170668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965384)));
label_17066c:
    // 0x17066c: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
label_170670:
    if (ctx->pc == 0x170670u) {
        ctx->pc = 0x170670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17066Cu;
        // 0x170670: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170674u;
        goto label_170674;
    }
    ctx->pc = 0x17066Cu;
    {
        const bool branch_taken_0x17066c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17066c) {
            ctx->pc = 0x170670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17066Cu;
            // 0x170670: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170674u;
            goto label_170674;
        }
    }
    ctx->pc = 0x170674u;
label_170674:
    // 0x170674: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_170678:
    // 0x170678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x170678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17067c:
    // 0x17067c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17067cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170680:
    // 0x170680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170684:
    // 0x170684: 0x3e00008  jr          $ra
label_170688:
    if (ctx->pc == 0x170688u) {
        ctx->pc = 0x170688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170684u;
        // 0x170688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17068Cu;
        goto label_17068c;
    }
    ctx->pc = 0x170684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170684u;
        // 0x170688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17068Cu;
label_17068c:
    // 0x17068c: 0x0  nop
    ctx->pc = 0x17068cu;
    // NOP
    ctx->pc = 0x170690u;
}
