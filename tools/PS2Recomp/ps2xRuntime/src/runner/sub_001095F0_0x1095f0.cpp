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

// Function: sub_001095F0
// Address: 0x1095f0 - 0x109808
void sub_001095F0_0x1095f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001095F0_0x1095f0");
#endif

    switch (ctx->pc) {
        case 0x1095f0u: goto label_1095f0;
        case 0x1095f4u: goto label_1095f4;
        case 0x1095f8u: goto label_1095f8;
        case 0x1095fcu: goto label_1095fc;
        case 0x109600u: goto label_109600;
        case 0x109604u: goto label_109604;
        case 0x109608u: goto label_109608;
        case 0x10960cu: goto label_10960c;
        case 0x109610u: goto label_109610;
        case 0x109614u: goto label_109614;
        case 0x109618u: goto label_109618;
        case 0x10961cu: goto label_10961c;
        case 0x109620u: goto label_109620;
        case 0x109624u: goto label_109624;
        case 0x109628u: goto label_109628;
        case 0x10962cu: goto label_10962c;
        case 0x109630u: goto label_109630;
        case 0x109634u: goto label_109634;
        case 0x109638u: goto label_109638;
        case 0x10963cu: goto label_10963c;
        case 0x109640u: goto label_109640;
        case 0x109644u: goto label_109644;
        case 0x109648u: goto label_109648;
        case 0x10964cu: goto label_10964c;
        case 0x109650u: goto label_109650;
        case 0x109654u: goto label_109654;
        case 0x109658u: goto label_109658;
        case 0x10965cu: goto label_10965c;
        case 0x109660u: goto label_109660;
        case 0x109664u: goto label_109664;
        case 0x109668u: goto label_109668;
        case 0x10966cu: goto label_10966c;
        case 0x109670u: goto label_109670;
        case 0x109674u: goto label_109674;
        case 0x109678u: goto label_109678;
        case 0x10967cu: goto label_10967c;
        case 0x109680u: goto label_109680;
        case 0x109684u: goto label_109684;
        case 0x109688u: goto label_109688;
        case 0x10968cu: goto label_10968c;
        case 0x109690u: goto label_109690;
        case 0x109694u: goto label_109694;
        case 0x109698u: goto label_109698;
        case 0x10969cu: goto label_10969c;
        case 0x1096a0u: goto label_1096a0;
        case 0x1096a4u: goto label_1096a4;
        case 0x1096a8u: goto label_1096a8;
        case 0x1096acu: goto label_1096ac;
        case 0x1096b0u: goto label_1096b0;
        case 0x1096b4u: goto label_1096b4;
        case 0x1096b8u: goto label_1096b8;
        case 0x1096bcu: goto label_1096bc;
        case 0x1096c0u: goto label_1096c0;
        case 0x1096c4u: goto label_1096c4;
        case 0x1096c8u: goto label_1096c8;
        case 0x1096ccu: goto label_1096cc;
        case 0x1096d0u: goto label_1096d0;
        case 0x1096d4u: goto label_1096d4;
        case 0x1096d8u: goto label_1096d8;
        case 0x1096dcu: goto label_1096dc;
        case 0x1096e0u: goto label_1096e0;
        case 0x1096e4u: goto label_1096e4;
        case 0x1096e8u: goto label_1096e8;
        case 0x1096ecu: goto label_1096ec;
        case 0x1096f0u: goto label_1096f0;
        case 0x1096f4u: goto label_1096f4;
        case 0x1096f8u: goto label_1096f8;
        case 0x1096fcu: goto label_1096fc;
        case 0x109700u: goto label_109700;
        case 0x109704u: goto label_109704;
        case 0x109708u: goto label_109708;
        case 0x10970cu: goto label_10970c;
        case 0x109710u: goto label_109710;
        case 0x109714u: goto label_109714;
        case 0x109718u: goto label_109718;
        case 0x10971cu: goto label_10971c;
        case 0x109720u: goto label_109720;
        case 0x109724u: goto label_109724;
        case 0x109728u: goto label_109728;
        case 0x10972cu: goto label_10972c;
        case 0x109730u: goto label_109730;
        case 0x109734u: goto label_109734;
        case 0x109738u: goto label_109738;
        case 0x10973cu: goto label_10973c;
        case 0x109740u: goto label_109740;
        case 0x109744u: goto label_109744;
        case 0x109748u: goto label_109748;
        case 0x10974cu: goto label_10974c;
        case 0x109750u: goto label_109750;
        case 0x109754u: goto label_109754;
        case 0x109758u: goto label_109758;
        case 0x10975cu: goto label_10975c;
        case 0x109760u: goto label_109760;
        case 0x109764u: goto label_109764;
        case 0x109768u: goto label_109768;
        case 0x10976cu: goto label_10976c;
        case 0x109770u: goto label_109770;
        case 0x109774u: goto label_109774;
        case 0x109778u: goto label_109778;
        case 0x10977cu: goto label_10977c;
        case 0x109780u: goto label_109780;
        case 0x109784u: goto label_109784;
        case 0x109788u: goto label_109788;
        case 0x10978cu: goto label_10978c;
        case 0x109790u: goto label_109790;
        case 0x109794u: goto label_109794;
        case 0x109798u: goto label_109798;
        case 0x10979cu: goto label_10979c;
        case 0x1097a0u: goto label_1097a0;
        case 0x1097a4u: goto label_1097a4;
        case 0x1097a8u: goto label_1097a8;
        case 0x1097acu: goto label_1097ac;
        case 0x1097b0u: goto label_1097b0;
        case 0x1097b4u: goto label_1097b4;
        case 0x1097b8u: goto label_1097b8;
        case 0x1097bcu: goto label_1097bc;
        case 0x1097c0u: goto label_1097c0;
        case 0x1097c4u: goto label_1097c4;
        case 0x1097c8u: goto label_1097c8;
        case 0x1097ccu: goto label_1097cc;
        case 0x1097d0u: goto label_1097d0;
        case 0x1097d4u: goto label_1097d4;
        case 0x1097d8u: goto label_1097d8;
        case 0x1097dcu: goto label_1097dc;
        case 0x1097e0u: goto label_1097e0;
        case 0x1097e4u: goto label_1097e4;
        case 0x1097e8u: goto label_1097e8;
        case 0x1097ecu: goto label_1097ec;
        case 0x1097f0u: goto label_1097f0;
        case 0x1097f4u: goto label_1097f4;
        case 0x1097f8u: goto label_1097f8;
        case 0x1097fcu: goto label_1097fc;
        case 0x109800u: goto label_109800;
        case 0x109804u: goto label_109804;
        default: break;
    }

    ctx->pc = 0x1095f0u;

label_1095f0:
    // 0x1095f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1095f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1095f4:
    // 0x1095f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1095f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1095f8:
    // 0x1095f8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1095f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1095fc:
    // 0x1095fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1095fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109600:
    // 0x109600: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x109600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_109604:
    // 0x109604: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x109604u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_109608:
    // 0x109608: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x109608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_10960c:
    // 0x10960c: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x10960cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
label_109610:
    // 0x109610: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x109610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_109614:
    // 0x109614: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x109614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_109618:
    // 0x109618: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x109618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10961c:
    // 0x10961c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x10961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_109620:
    // 0x109620: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x109620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_109624:
    // 0x109624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_109628:
    // 0x109628: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x109628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_10962c:
    // 0x10962c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109630:
    // 0x109630: 0x8e4782d0  lw          $a3, -0x7D30($s2)
    ctx->pc = 0x109630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935248)));
label_109634:
    // 0x109634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_109638:
    // 0x109638: 0x8fc382d4  lw          $v1, -0x7D2C($fp)
    ctx->pc = 0x109638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935252)));
label_10963c:
    // 0x10963c: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x10963cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_109640:
    // 0x109640: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x109640u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_109644:
    // 0x109644: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x109644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_109648:
    // 0x109648: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_10964c:
    if (ctx->pc == 0x10964Cu) {
        ctx->pc = 0x10964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109648u;
        // 0x10964c: 0xb0102b  sltu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109650u;
        goto label_109650;
    }
    ctx->pc = 0x109648u;
    {
        const bool branch_taken_0x109648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109648u;
        // 0x10964c: 0xb0102b  sltu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109648) {
            ctx->pc = 0x109674u;
            goto label_109674;
        }
    }
    ctx->pc = 0x109650u;
label_109650:
    // 0x109650: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x109650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_109654:
    // 0x109654: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x109654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_109658:
    // 0x109658: 0x1000005e  b           . + 4 + (0x5E << 2)
label_10965c:
    if (ctx->pc == 0x10965Cu) {
        ctx->pc = 0x10965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109658u;
        // 0x10965c: 0xae4382d0  sw          $v1, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109660u;
        goto label_109660;
    }
    ctx->pc = 0x109658u;
    {
        const bool branch_taken_0x109658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109658u;
        // 0x10965c: 0xae4382d0  sw          $v1, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109658) {
            ctx->pc = 0x1097D4u;
            goto label_1097d4;
        }
    }
    ctx->pc = 0x109660u;
label_109660:
    // 0x109660: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x109660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_109664:
    // 0x109664: 0xafc282d4  sw          $v0, -0x7D2C($fp)
    ctx->pc = 0x109664u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935252), GPR_U32(ctx, 2));
label_109668:
    // 0x109668: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x109668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_10966c:
    // 0x10966c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_109670:
    if (ctx->pc == 0x109670u) {
        ctx->pc = 0x109670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10966Cu;
        // 0x109670: 0xae4482d0  sw          $a0, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109674u;
        goto label_109674;
    }
    ctx->pc = 0x10966Cu;
    {
        const bool branch_taken_0x10966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10966Cu;
        // 0x109670: 0xae4482d0  sw          $a0, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10966c) {
            ctx->pc = 0x10962Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10962c;
        }
    }
    ctx->pc = 0x109674u;
label_109674:
    // 0x109674: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_109678:
    if (ctx->pc == 0x109678u) {
        ctx->pc = 0x109678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109674u;
        // 0x109678: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10967Cu;
        goto label_10967c;
    }
    ctx->pc = 0x109674u;
    {
        const bool branch_taken_0x109674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109674u;
        // 0x109678: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109674) {
            ctx->pc = 0x1096A8u;
            goto label_1096a8;
        }
    }
    ctx->pc = 0x10967Cu;
label_10967c:
    // 0x10967c: 0xb0001b  divu        $zero, $a1, $s0
    ctx->pc = 0x10967cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_109680:
    // 0x109680: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_109684:
    if (ctx->pc == 0x109684u) {
        ctx->pc = 0x109684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109680u;
        // 0x109684: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109688u;
        goto label_109688;
    }
    ctx->pc = 0x109680u;
    {
        const bool branch_taken_0x109680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x109680) {
            ctx->pc = 0x109684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109680u;
            // 0x109684: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x109688u;
            goto label_109688;
        }
    }
    ctx->pc = 0x109688u;
label_109688:
    // 0x109688: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10968c:
    // 0x10968c: 0x1012  mflo        $v0
    ctx->pc = 0x10968cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_109690:
    // 0x109690: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x109690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_109694:
    // 0x109694: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x109694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_109698:
    // 0x109698: 0x8e4282d0  lw          $v0, -0x7D30($s2)
    ctx->pc = 0x109698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935248)));
label_10969c:
    // 0x10969c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x10969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1096a0:
    // 0x1096a0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1096a4:
    if (ctx->pc == 0x1096A4u) {
        ctx->pc = 0x1096A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096A0u;
        // 0x1096a4: 0xae4382d0  sw          $v1, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096A8u;
        goto label_1096a8;
    }
    ctx->pc = 0x1096A0u;
    {
        const bool branch_taken_0x1096a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096A0u;
        // 0x1096a4: 0xae4382d0  sw          $v1, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096a0) {
            ctx->pc = 0x1097D4u;
            goto label_1097d4;
        }
    }
    ctx->pc = 0x1096A8u;
label_1096a8:
    // 0x1096a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1096a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1096ac:
    // 0x1096ac: 0x8c8282d8  lw          $v0, -0x7D28($a0)
    ctx->pc = 0x1096acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935256)));
label_1096b0:
    // 0x1096b0: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x1096b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_1096b4:
    // 0x1096b4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1096b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1096b8:
    // 0x1096b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1096b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1096bc:
    // 0x1096bc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1096bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1096c0:
    // 0x1096c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1096c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1096c4:
    // 0x1096c4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1096c8:
    if (ctx->pc == 0x1096C8u) {
        ctx->pc = 0x1096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C4u;
        // 0x1096c8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096CCu;
        goto label_1096cc;
    }
    ctx->pc = 0x1096C4u;
    {
        const bool branch_taken_0x1096c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C4u;
        // 0x1096c8: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096c4) {
            ctx->pc = 0x1096F8u;
            goto label_1096f8;
        }
    }
    ctx->pc = 0x1096CCu;
label_1096cc:
    // 0x1096cc: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1096ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1096d0:
    // 0x1096d0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1096d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1096d4:
    // 0x1096d4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1096d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_1096d8:
    // 0x1096d8: 0x24848290  addiu       $a0, $a0, -0x7D70
    ctx->pc = 0x1096d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935184));
label_1096dc:
    // 0x1096dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1096dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1096e0:
    // 0x1096e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1096e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1096e4:
    // 0x1096e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1096e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1096e8:
    // 0x1096e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1096e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1096ec:
    // 0x1096ec: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1096ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1096f0:
    // 0x1096f0: 0x8e4482d0  lw          $a0, -0x7D30($s2)
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935248)));
label_1096f4:
    // 0x1096f4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1096f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1096f8:
    // 0x1096f8: 0xc0c5472  jal         func_3151C8
label_1096fc:
    if (ctx->pc == 0x1096FCu) {
        ctx->pc = 0x1096FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096F8u;
        // 0x1096fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109700u;
        goto label_109700;
    }
    ctx->pc = 0x1096F8u;
    SET_GPR_U32(ctx, 31, 0x109700u);
    ctx->pc = 0x1096FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1096F8u;
    // 0x1096fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1096F8u, 0x109700u)) {
        return;
    }
    ctx->pc = 0x109700u;
label_109700:
    // 0x109700: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_109704:
    if (ctx->pc == 0x109704u) {
        ctx->pc = 0x109704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109700u;
        // 0x109704: 0xae4282d0  sw          $v0, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109708u;
        goto label_109708;
    }
    ctx->pc = 0x109700u;
    {
        const bool branch_taken_0x109700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109700u;
        // 0x109704: 0xae4282d0  sw          $v0, -0x7D30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109700) {
            ctx->pc = 0x1097B4u;
            goto label_1097b4;
        }
    }
    ctx->pc = 0x109708u;
label_109708:
    // 0x109708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10970c:
    // 0x10970c: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x10970cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_109710:
    // 0x109710: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_109714:
    if (ctx->pc == 0x109714u) {
        ctx->pc = 0x109714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109710u;
        // 0x109714: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109718u;
        goto label_109718;
    }
    ctx->pc = 0x109710u;
    {
        const bool branch_taken_0x109710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109710u;
        // 0x109714: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109710) {
            ctx->pc = 0x10974Cu;
            goto label_10974c;
        }
    }
    ctx->pc = 0x109718u;
label_109718:
    // 0x109718: 0x24438290  addiu       $v1, $v0, -0x7D70
    ctx->pc = 0x109718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
label_10971c:
    // 0x10971c: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x10971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_109720:
    // 0x109720: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_109724:
    // 0x109724: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_109728:
    // 0x109728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10972c:
    // 0x10972c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109730:
    // 0x109730: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x109730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_109734:
    // 0x109734: 0x5480ffca  bnel        $a0, $zero, . + 4 + (-0x36 << 2)
label_109738:
    if (ctx->pc == 0x109738u) {
        ctx->pc = 0x109738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109734u;
        // 0x109738: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10973Cu;
        goto label_10973c;
    }
    ctx->pc = 0x109734u;
    {
        const bool branch_taken_0x109734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x109734) {
            ctx->pc = 0x109738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109734u;
            // 0x109738: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109660;
        }
    }
    ctx->pc = 0x10973Cu;
label_10973c:
    // 0x10973c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x10973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_109740:
    // 0x109740: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x109740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_109744:
    // 0x109744: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_109748:
    if (ctx->pc == 0x109748u) {
        ctx->pc = 0x109748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109744u;
        // 0x109748: 0x24a20007  addiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10974Cu;
        goto label_10974c;
    }
    ctx->pc = 0x109744u;
    {
        const bool branch_taken_0x109744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109744u;
        // 0x109748: 0x24a20007  addiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109744) {
            ctx->pc = 0x109720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109720;
        }
    }
    ctx->pc = 0x10974Cu;
label_10974c:
    // 0x10974c: 0xafc082d4  sw          $zero, -0x7D2C($fp)
    ctx->pc = 0x10974cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935252), GPR_U32(ctx, 0));
label_109750:
    // 0x109750: 0xc0c5472  jal         func_3151C8
label_109754:
    if (ctx->pc == 0x109754u) {
        ctx->pc = 0x109754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109750u;
        // 0x109754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109758u;
        goto label_109758;
    }
    ctx->pc = 0x109750u;
    SET_GPR_U32(ctx, 31, 0x109758u);
    ctx->pc = 0x109754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109750u;
    // 0x109754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x109750u, 0x109758u)) {
        return;
    }
    ctx->pc = 0x109758u;
label_109758:
    // 0x109758: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_10975c:
    if (ctx->pc == 0x10975Cu) {
        ctx->pc = 0x10975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109758u;
        // 0x10975c: 0x265782d0  addiu       $s7, $s2, -0x7D30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109760u;
        goto label_109760;
    }
    ctx->pc = 0x109758u;
    {
        const bool branch_taken_0x109758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109758u;
        // 0x10975c: 0x265782d0  addiu       $s7, $s2, -0x7D30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109758) {
            ctx->pc = 0x1097B0u;
            goto label_1097b0;
        }
    }
    ctx->pc = 0x109760u;
label_109760:
    // 0x109760: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_109764:
    // 0x109764: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x109764u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_109768:
    // 0x109768: 0x24569850  addiu       $s6, $v0, -0x67B0
    ctx->pc = 0x109768u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_10976c:
    // 0x10976c: 0x3c130068  lui         $s3, 0x68
    ctx->pc = 0x10976cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)104 << 16));
label_109770:
    // 0x109770: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x109770u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_109774:
    // 0x109774: 0x8ea2828c  lw          $v0, -0x7D74($s5)
    ctx->pc = 0x109774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935180)));
label_109778:
    // 0x109778: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_10977c:
    if (ctx->pc == 0x10977Cu) {
        ctx->pc = 0x10977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109778u;
        // 0x10977c: 0x26641878  addiu       $a0, $s3, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109780u;
        goto label_109780;
    }
    ctx->pc = 0x109778u;
    {
        const bool branch_taken_0x109778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109778u;
        // 0x10977c: 0x26641878  addiu       $a0, $s3, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109778) {
            ctx->pc = 0x109798u;
            goto label_109798;
        }
    }
    ctx->pc = 0x109780u;
label_109780:
    // 0x109780: 0xc0a6492  jal         func_299248
label_109784:
    if (ctx->pc == 0x109784u) {
        ctx->pc = 0x109784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109780u;
        // 0x109784: 0x26859ca8  addiu       $a1, $s4, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109788u;
        goto label_109788;
    }
    ctx->pc = 0x109780u;
    SET_GPR_U32(ctx, 31, 0x109788u);
    ctx->pc = 0x109784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109780u;
    // 0x109784: 0x26859ca8  addiu       $a1, $s4, -0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x109780u, 0x109788u)) {
        return;
    }
    ctx->pc = 0x109788u;
label_109788:
    // 0x109788: 0x2c0f809  jalr        $s6
label_10978c:
    if (ctx->pc == 0x10978Cu) {
        ctx->pc = 0x10978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109788u;
        // 0x10978c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109790u;
        goto label_109790;
    }
    ctx->pc = 0x109788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x109790u);
        ctx->pc = 0x10978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109788u;
        // 0x10978c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109788u, 0x109790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109790u;
label_109790:
    // 0x109790: 0xc07da60  jal         func_1F6980
label_109794:
    if (ctx->pc == 0x109794u) {
        ctx->pc = 0x109794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109790u;
        // 0x109794: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109798u;
        goto label_109798;
    }
    ctx->pc = 0x109790u;
    SET_GPR_U32(ctx, 31, 0x109798u);
    ctx->pc = 0x109794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109790u;
    // 0x109794: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x109790u, 0x109798u)) {
        return;
    }
    ctx->pc = 0x109798u;
label_109798:
    // 0x109798: 0x40f809  jalr        $v0
label_10979c:
    if (ctx->pc == 0x10979Cu) {
        ctx->pc = 0x1097A0u;
        goto label_1097a0;
    }
    ctx->pc = 0x109798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1097A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109798u, 0x1097A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097A0u;
label_1097a0:
    // 0x1097a0: 0xc0c5472  jal         func_3151C8
label_1097a4:
    if (ctx->pc == 0x1097A4u) {
        ctx->pc = 0x1097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A0u;
        // 0x1097a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097A8u;
        goto label_1097a8;
    }
    ctx->pc = 0x1097A0u;
    SET_GPR_U32(ctx, 31, 0x1097A8u);
    ctx->pc = 0x1097A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097A0u;
    // 0x1097a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1097A0u, 0x1097A8u)) {
        return;
    }
    ctx->pc = 0x1097A8u;
label_1097a8:
    // 0x1097a8: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_1097ac:
    if (ctx->pc == 0x1097ACu) {
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x8ea2828c  lw          $v0, -0x7D74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097B0u;
        goto label_1097b0;
    }
    ctx->pc = 0x1097A8u;
    {
        const bool branch_taken_0x1097a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1097a8) {
            ctx->pc = 0x1097ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1097A8u;
            // 0x1097ac: 0x8ea2828c  lw          $v0, -0x7D74($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109778;
        }
    }
    ctx->pc = 0x1097B0u;
label_1097b0:
    // 0x1097b0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1097b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1097b4:
    // 0x1097b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1097b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1097b8:
    // 0x1097b8: 0x8e4382d0  lw          $v1, -0x7D30($s2)
    ctx->pc = 0x1097b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935248)));
label_1097bc:
    // 0x1097bc: 0x8c8282d8  lw          $v0, -0x7D28($a0)
    ctx->pc = 0x1097bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935256)));
label_1097c0:
    // 0x1097c0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1097c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1097c4:
    // 0x1097c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1097c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1097c8:
    // 0x1097c8: 0xafc382d4  sw          $v1, -0x7D2C($fp)
    ctx->pc = 0x1097c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935252), GPR_U32(ctx, 3));
label_1097cc:
    // 0x1097cc: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_1097d0:
    if (ctx->pc == 0x1097D0u) {
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097CCu;
        // 0x1097d0: 0xac8282d8  sw          $v0, -0x7D28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097D4u;
        goto label_1097d4;
    }
    ctx->pc = 0x1097CCu;
    {
        const bool branch_taken_0x1097cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097CCu;
        // 0x1097d0: 0xac8282d8  sw          $v0, -0x7D28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097cc) {
            ctx->pc = 0x10962Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10962c;
        }
    }
    ctx->pc = 0x1097D4u;
label_1097d4:
    // 0x1097d4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1097d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1097d8:
    // 0x1097d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1097d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1097dc:
    // 0x1097dc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1097dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1097e0:
    // 0x1097e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1097e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1097e4:
    // 0x1097e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1097e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1097e8:
    // 0x1097e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1097e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1097ec:
    // 0x1097ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1097ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1097f0:
    // 0x1097f0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1097f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1097f4:
    // 0x1097f4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1097f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1097f8:
    // 0x1097f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1097f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1097fc:
    // 0x1097fc: 0x3e00008  jr          $ra
label_109800:
    if (ctx->pc == 0x109800u) {
        ctx->pc = 0x109800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097FCu;
        // 0x109800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109804u;
        goto label_109804;
    }
    ctx->pc = 0x1097FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097FCu;
        // 0x109800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109804u;
label_109804:
    // 0x109804: 0x0  nop
    ctx->pc = 0x109804u;
    // NOP
    ctx->pc = 0x109808u;
}
