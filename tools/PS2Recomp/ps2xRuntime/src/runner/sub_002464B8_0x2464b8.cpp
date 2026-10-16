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

// Function: sub_002464B8
// Address: 0x2464b8 - 0x2465b8
void sub_002464B8_0x2464b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002464B8_0x2464b8");
#endif

    switch (ctx->pc) {
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        case 0x246540u: goto label_246540;
        case 0x246544u: goto label_246544;
        case 0x246548u: goto label_246548;
        case 0x24654cu: goto label_24654c;
        case 0x246550u: goto label_246550;
        case 0x246554u: goto label_246554;
        case 0x246558u: goto label_246558;
        case 0x24655cu: goto label_24655c;
        case 0x246560u: goto label_246560;
        case 0x246564u: goto label_246564;
        case 0x246568u: goto label_246568;
        case 0x24656cu: goto label_24656c;
        case 0x246570u: goto label_246570;
        case 0x246574u: goto label_246574;
        case 0x246578u: goto label_246578;
        case 0x24657cu: goto label_24657c;
        case 0x246580u: goto label_246580;
        case 0x246584u: goto label_246584;
        case 0x246588u: goto label_246588;
        case 0x24658cu: goto label_24658c;
        case 0x246590u: goto label_246590;
        case 0x246594u: goto label_246594;
        case 0x246598u: goto label_246598;
        case 0x24659cu: goto label_24659c;
        case 0x2465a0u: goto label_2465a0;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465a8u: goto label_2465a8;
        case 0x2465acu: goto label_2465ac;
        case 0x2465b0u: goto label_2465b0;
        case 0x2465b4u: goto label_2465b4;
        default: break;
    }

    ctx->pc = 0x2464b8u;

label_2464b8:
    // 0x2464b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2464b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2464bc:
    // 0x2464bc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2464bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2464c0:
    // 0x2464c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2464c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2464c4:
    // 0x2464c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2464c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2464c8:
    // 0x2464c8: 0x24501180  addiu       $s0, $v0, 0x1180
    ctx->pc = 0x2464c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
label_2464cc:
    // 0x2464cc: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2464ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
label_2464d0:
    // 0x2464d0: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x2464d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_2464d4:
    // 0x2464d4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x2464d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_2464d8:
    // 0x2464d8: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2464d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_2464dc:
    // 0x2464dc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2464e0:
    if (ctx->pc == 0x2464E0u) {
        ctx->pc = 0x2464E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464DCu;
        // 0x2464e0: 0xaf808504  sw          $zero, -0x7AFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464E4u;
        goto label_2464e4;
    }
    ctx->pc = 0x2464DCu;
    {
        const bool branch_taken_0x2464dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2464E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464DCu;
        // 0x2464e0: 0xaf808504  sw          $zero, -0x7AFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464dc) {
            ctx->pc = 0x246550u;
            goto label_246550;
        }
    }
    ctx->pc = 0x2464E4u;
label_2464e4:
    // 0x2464e4: 0x8f828500  lw          $v0, -0x7B00($gp)
    ctx->pc = 0x2464e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
label_2464e8:
    // 0x2464e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2464e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2464ec:
    // 0x2464ec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2464ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2464f0:
    // 0x2464f0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2464f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_2464f4:
    // 0x2464f4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2464f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2464f8:
    // 0x2464f8: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2464f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2464fc:
    // 0x2464fc: 0x2012  mflo        $a0
    ctx->pc = 0x2464fcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_246500:
    // 0x246500: 0x40f809  jalr        $v0
label_246504:
    if (ctx->pc == 0x246504u) {
        ctx->pc = 0x246504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246500u;
        // 0x246504: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246508u;
        goto label_246508;
    }
    ctx->pc = 0x246500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246508u);
        ctx->pc = 0x246504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246500u;
        // 0x246504: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246500u, 0x246508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246508u;
label_246508:
    // 0x246508: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24650c:
    if (ctx->pc == 0x24650Cu) {
        ctx->pc = 0x24650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246508u;
        // 0x24650c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246510u;
        goto label_246510;
    }
    ctx->pc = 0x246508u;
    {
        const bool branch_taken_0x246508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246508u;
        // 0x24650c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246508) {
            ctx->pc = 0x246518u;
            goto label_246518;
        }
    }
    ctx->pc = 0x246510u;
label_246510:
    // 0x246510: 0x10000025  b           . + 4 + (0x25 << 2)
label_246514:
    if (ctx->pc == 0x246514u) {
        ctx->pc = 0x246514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246510u;
        // 0x246514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246518u;
        goto label_246518;
    }
    ctx->pc = 0x246510u;
    {
        const bool branch_taken_0x246510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246510u;
        // 0x246514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246510) {
            ctx->pc = 0x2465A8u;
            goto label_2465a8;
        }
    }
    ctx->pc = 0x246518u;
label_246518:
    // 0x246518: 0x8f848500  lw          $a0, -0x7B00($gp)
    ctx->pc = 0x246518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
label_24651c:
    // 0x24651c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24651cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_246520:
    // 0x246520: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x246520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_246524:
    // 0x246524: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x246524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_246528:
    // 0x246528: 0x24425f78  addiu       $v0, $v0, 0x5F78
    ctx->pc = 0x246528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24440));
label_24652c:
    // 0x24652c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x24652cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_246530:
    // 0x246530: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x246530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_246534:
    // 0x246534: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x246534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_246538:
    // 0x246538: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x246538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_24653c:
    // 0x24653c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x24653cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_246540:
    // 0x246540: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x246540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_246544:
    // 0x246544: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x246544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_246548:
    // 0x246548: 0x10000004  b           . + 4 + (0x4 << 2)
label_24654c:
    if (ctx->pc == 0x24654Cu) {
        ctx->pc = 0x24654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246548u;
        // 0x24654c: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246550u;
        goto label_246550;
    }
    ctx->pc = 0x246548u;
    {
        const bool branch_taken_0x246548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246548u;
        // 0x24654c: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246548) {
            ctx->pc = 0x24655Cu;
            goto label_24655c;
        }
    }
    ctx->pc = 0x246550u;
label_246550:
    // 0x246550: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x246550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_246554:
    // 0x246554: 0x24425708  addiu       $v0, $v0, 0x5708
    ctx->pc = 0x246554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22280));
label_246558:
    // 0x246558: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x246558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_24655c:
    // 0x24655c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24655cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246560:
    // 0x246560: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x246560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_246564:
    // 0x246564: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x246564u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
label_246568:
    // 0x246568: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x246568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
label_24656c:
    // 0x24656c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x24656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_246570:
    // 0x246570: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x246570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_246574:
    // 0x246574: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x246574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_246578:
    // 0x246578: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x246578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_24657c:
    // 0x24657c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x24657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_246580:
    // 0x246580: 0x24c64140  addiu       $a2, $a2, 0x4140
    ctx->pc = 0x246580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16704));
label_246584:
    // 0x246584: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x246584u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_246588:
    // 0x246588: 0x70a82b89  pcpyld      $a1, $a1, $t0
    ctx->pc = 0x246588u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
label_24658c:
    // 0x24658c: 0x70671b89  pcpyld      $v1, $v1, $a3
    ctx->pc = 0x24658cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_246590:
    // 0x246590: 0x70872389  pcpyld      $a0, $a0, $a3
    ctx->pc = 0x246590u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_246594:
    // 0x246594: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x246594u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_246598:
    // 0x246598: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x246598u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
label_24659c:
    // 0x24659c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2465a0:
    // 0x2465a0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2465a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_2465a4:
    // 0x2465a4: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x2465a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_2465a8:
    // 0x2465a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2465a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2465ac:
    // 0x2465ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2465acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2465b0:
    // 0x2465b0: 0x3e00008  jr          $ra
label_2465b4:
    if (ctx->pc == 0x2465B4u) {
        ctx->pc = 0x2465B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465B0u;
        // 0x2465b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465B8u;
        goto label_fallthrough_0x2465b0;
    }
    ctx->pc = 0x2465B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2465B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465B0u;
        // 0x2465b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2465b0:
    ctx->pc = 0x2465B8u;
}
