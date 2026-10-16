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

// Function: sub_0021D518
// Address: 0x21d518 - 0x21d650
void sub_0021D518_0x21d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D518_0x21d518");
#endif

    switch (ctx->pc) {
        case 0x21d518u: goto label_21d518;
        case 0x21d51cu: goto label_21d51c;
        case 0x21d520u: goto label_21d520;
        case 0x21d524u: goto label_21d524;
        case 0x21d528u: goto label_21d528;
        case 0x21d52cu: goto label_21d52c;
        case 0x21d530u: goto label_21d530;
        case 0x21d534u: goto label_21d534;
        case 0x21d538u: goto label_21d538;
        case 0x21d53cu: goto label_21d53c;
        case 0x21d540u: goto label_21d540;
        case 0x21d544u: goto label_21d544;
        case 0x21d548u: goto label_21d548;
        case 0x21d54cu: goto label_21d54c;
        case 0x21d550u: goto label_21d550;
        case 0x21d554u: goto label_21d554;
        case 0x21d558u: goto label_21d558;
        case 0x21d55cu: goto label_21d55c;
        case 0x21d560u: goto label_21d560;
        case 0x21d564u: goto label_21d564;
        case 0x21d568u: goto label_21d568;
        case 0x21d56cu: goto label_21d56c;
        case 0x21d570u: goto label_21d570;
        case 0x21d574u: goto label_21d574;
        case 0x21d578u: goto label_21d578;
        case 0x21d57cu: goto label_21d57c;
        case 0x21d580u: goto label_21d580;
        case 0x21d584u: goto label_21d584;
        case 0x21d588u: goto label_21d588;
        case 0x21d58cu: goto label_21d58c;
        case 0x21d590u: goto label_21d590;
        case 0x21d594u: goto label_21d594;
        case 0x21d598u: goto label_21d598;
        case 0x21d59cu: goto label_21d59c;
        case 0x21d5a0u: goto label_21d5a0;
        case 0x21d5a4u: goto label_21d5a4;
        case 0x21d5a8u: goto label_21d5a8;
        case 0x21d5acu: goto label_21d5ac;
        case 0x21d5b0u: goto label_21d5b0;
        case 0x21d5b4u: goto label_21d5b4;
        case 0x21d5b8u: goto label_21d5b8;
        case 0x21d5bcu: goto label_21d5bc;
        case 0x21d5c0u: goto label_21d5c0;
        case 0x21d5c4u: goto label_21d5c4;
        case 0x21d5c8u: goto label_21d5c8;
        case 0x21d5ccu: goto label_21d5cc;
        case 0x21d5d0u: goto label_21d5d0;
        case 0x21d5d4u: goto label_21d5d4;
        case 0x21d5d8u: goto label_21d5d8;
        case 0x21d5dcu: goto label_21d5dc;
        case 0x21d5e0u: goto label_21d5e0;
        case 0x21d5e4u: goto label_21d5e4;
        case 0x21d5e8u: goto label_21d5e8;
        case 0x21d5ecu: goto label_21d5ec;
        case 0x21d5f0u: goto label_21d5f0;
        case 0x21d5f4u: goto label_21d5f4;
        case 0x21d5f8u: goto label_21d5f8;
        case 0x21d5fcu: goto label_21d5fc;
        case 0x21d600u: goto label_21d600;
        case 0x21d604u: goto label_21d604;
        case 0x21d608u: goto label_21d608;
        case 0x21d60cu: goto label_21d60c;
        case 0x21d610u: goto label_21d610;
        case 0x21d614u: goto label_21d614;
        case 0x21d618u: goto label_21d618;
        case 0x21d61cu: goto label_21d61c;
        case 0x21d620u: goto label_21d620;
        case 0x21d624u: goto label_21d624;
        case 0x21d628u: goto label_21d628;
        case 0x21d62cu: goto label_21d62c;
        case 0x21d630u: goto label_21d630;
        case 0x21d634u: goto label_21d634;
        case 0x21d638u: goto label_21d638;
        case 0x21d63cu: goto label_21d63c;
        case 0x21d640u: goto label_21d640;
        case 0x21d644u: goto label_21d644;
        case 0x21d648u: goto label_21d648;
        case 0x21d64cu: goto label_21d64c;
        default: break;
    }

    ctx->pc = 0x21d518u;

label_21d518:
    // 0x21d518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21d51c:
    // 0x21d51c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d520:
    // 0x21d520: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21d520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21d524:
    // 0x21d524: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x21d524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_21d528:
    // 0x21d528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21d52c:
    // 0x21d52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d530:
    // 0x21d530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21d534:
    // 0x21d534: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21d538:
    // 0x21d538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d53c:
    // 0x21d53c: 0x40f809  jalr        $v0
label_21d540:
    if (ctx->pc == 0x21D540u) {
        ctx->pc = 0x21D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D53Cu;
        // 0x21d540: 0x8e1101c8  lw          $s1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D544u;
        goto label_21d544;
    }
    ctx->pc = 0x21D53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D544u);
        ctx->pc = 0x21D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D53Cu;
        // 0x21d540: 0x8e1101c8  lw          $s1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D53Cu, 0x21D544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D544u;
label_21d544:
    // 0x21d544: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x21d544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_21d548:
    // 0x21d548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d54c:
    // 0x21d54c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d550:
    // 0x21d550: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21d554:
    // 0x21d554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d558:
    // 0x21d558: 0x40f809  jalr        $v0
label_21d55c:
    if (ctx->pc == 0x21D55Cu) {
        ctx->pc = 0x21D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D558u;
        // 0x21d55c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D560u;
        goto label_21d560;
    }
    ctx->pc = 0x21D558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D560u);
        ctx->pc = 0x21D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D558u;
        // 0x21d55c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D558u, 0x21D560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D560u;
label_21d560:
    // 0x21d560: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21d560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21d564:
    // 0x21d564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d568:
    // 0x21d568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d56c:
    // 0x21d56c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21d570:
    // 0x21d570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d574:
    // 0x21d574: 0x40f809  jalr        $v0
label_21d578:
    if (ctx->pc == 0x21D578u) {
        ctx->pc = 0x21D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D574u;
        // 0x21d578: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D57Cu;
        goto label_21d57c;
    }
    ctx->pc = 0x21D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D57Cu);
        ctx->pc = 0x21D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D574u;
        // 0x21d578: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D574u, 0x21D57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D57Cu;
label_21d57c:
    // 0x21d57c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x21d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_21d580:
    // 0x21d580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d584:
    // 0x21d584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d588:
    // 0x21d588: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21d58c:
    // 0x21d58c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d590:
    // 0x21d590: 0x40f809  jalr        $v0
label_21d594:
    if (ctx->pc == 0x21D594u) {
        ctx->pc = 0x21D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D590u;
        // 0x21d594: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D598u;
        goto label_21d598;
    }
    ctx->pc = 0x21D590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D598u);
        ctx->pc = 0x21D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D590u;
        // 0x21d594: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D590u, 0x21D598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D598u;
label_21d598:
    // 0x21d598: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x21d598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_21d59c:
    // 0x21d59c: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x21d59cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_21d5a0:
    // 0x21d5a0: 0x35ce492e  ori         $t6, $t6, 0x492E
    ctx->pc = 0x21d5a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)18734);
label_21d5a4:
    // 0x21d5a4: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x21d5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
label_21d5a8:
    // 0x21d5a8: 0x35adc5a2  ori         $t5, $t5, 0xC5A2
    ctx->pc = 0x21d5a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)50594);
label_21d5ac:
    // 0x21d5ac: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x21d5acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
label_21d5b0:
    // 0x21d5b0: 0x358c66e9  ori         $t4, $t4, 0x66E9
    ctx->pc = 0x21d5b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)26345);
label_21d5b4:
    // 0x21d5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d5b8:
    // 0x21d5b8: 0x3c0b002c  lui         $t3, 0x2C
    ctx->pc = 0x21d5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)44 << 16));
label_21d5bc:
    // 0x21d5bc: 0x356b8d00  ori         $t3, $t3, 0x8D00
    ctx->pc = 0x21d5bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36096);
label_21d5c0:
    // 0x21d5c0: 0x3c0a005b  lui         $t2, 0x5B
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)91 << 16));
label_21d5c4:
    // 0x21d5c4: 0x354a6900  ori         $t2, $t2, 0x6900
    ctx->pc = 0x21d5c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)26880);
label_21d5c8:
    // 0x21d5c8: 0x3c09ff1d  lui         $t1, 0xFF1D
    ctx->pc = 0x21d5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65309 << 16));
label_21d5cc:
    // 0x21d5cc: 0x3529af00  ori         $t1, $t1, 0xAF00
    ctx->pc = 0x21d5ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)44800);
label_21d5d0:
    // 0x21d5d0: 0x3c08ff4d  lui         $t0, 0xFF4D
    ctx->pc = 0x21d5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65357 << 16));
label_21d5d4:
    // 0x21d5d4: 0x35080b80  ori         $t0, $t0, 0xB80
    ctx->pc = 0x21d5d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2944);
label_21d5d8:
    // 0x21d5d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_21d5dc:
    // 0x21d5dc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x21d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_21d5e0:
    // 0x21d5e0: 0x82438  dsll        $a0, $t0, 16
    ctx->pc = 0x21d5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << 16);
label_21d5e4:
    // 0x21d5e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21d5e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21d5e8:
    // 0x21d5e8: 0x93438  dsll        $a2, $t1, 16
    ctx->pc = 0x21d5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 16);
label_21d5ec:
    // 0x21d5ec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x21d5ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_21d5f0:
    // 0x21d5f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21d5f4:
    // 0x21d5f4: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x21d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_21d5f8:
    // 0x21d5f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21d5fc:
    // 0x21d5fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_21d600:
    // 0x21d600: 0x12d482d  daddu       $t1, $t1, $t5
    ctx->pc = 0x21d600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 13));
label_21d604:
    // 0x21d604: 0x10c402d  daddu       $t0, $t0, $t4
    ctx->pc = 0x21d604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 12));
label_21d608:
    // 0x21d608: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21d60c:
    // 0x21d60c: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x21d60cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
label_21d610:
    // 0x21d610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21d614:
    // 0x21d614: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x21d614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_21d618:
    // 0x21d618: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x21d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_21d61c:
    // 0x21d61c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21d620:
    // 0x21d620: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x21d620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
label_21d624:
    // 0x21d624: 0x14e502d  daddu       $t2, $t2, $t6
    ctx->pc = 0x21d624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 14));
label_21d628:
    // 0x21d628: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x21d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21d62c:
    // 0x21d62c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21d62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21d630:
    // 0x21d630: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x21d630u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
label_21d634:
    // 0x21d634: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
label_21d638:
    if (ctx->pc == 0x21D638u) {
        ctx->pc = 0x21D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D634u;
        // 0x21d638: 0x656ba7e6  daddiu      $t3, $t3, -0x581A (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294944742);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D63Cu;
        goto label_21d63c;
    }
    ctx->pc = 0x21D634u;
    {
        const bool branch_taken_0x21d634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D634u;
        // 0x21d638: 0x656ba7e6  daddiu      $t3, $t3, -0x581A (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294944742);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d634) {
            ctx->pc = 0x21D5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d5d8;
        }
    }
    ctx->pc = 0x21D63Cu;
label_21d63c:
    // 0x21d63c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21d63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21d640:
    // 0x21d640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d644:
    // 0x21d644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d648:
    // 0x21d648: 0x3e00008  jr          $ra
label_21d64c:
    if (ctx->pc == 0x21D64Cu) {
        ctx->pc = 0x21D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D648u;
        // 0x21d64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D650u;
        goto label_fallthrough_0x21d648;
    }
    ctx->pc = 0x21D648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D648u;
        // 0x21d64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21d648:
    ctx->pc = 0x21D650u;
}
