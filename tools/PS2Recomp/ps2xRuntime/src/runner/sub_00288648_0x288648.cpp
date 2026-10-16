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

// Function: sub_00288648
// Address: 0x288648 - 0x2888c0
void sub_00288648_0x288648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288648_0x288648");
#endif

    switch (ctx->pc) {
        case 0x288648u: goto label_288648;
        case 0x28864cu: goto label_28864c;
        case 0x288650u: goto label_288650;
        case 0x288654u: goto label_288654;
        case 0x288658u: goto label_288658;
        case 0x28865cu: goto label_28865c;
        case 0x288660u: goto label_288660;
        case 0x288664u: goto label_288664;
        case 0x288668u: goto label_288668;
        case 0x28866cu: goto label_28866c;
        case 0x288670u: goto label_288670;
        case 0x288674u: goto label_288674;
        case 0x288678u: goto label_288678;
        case 0x28867cu: goto label_28867c;
        case 0x288680u: goto label_288680;
        case 0x288684u: goto label_288684;
        case 0x288688u: goto label_288688;
        case 0x28868cu: goto label_28868c;
        case 0x288690u: goto label_288690;
        case 0x288694u: goto label_288694;
        case 0x288698u: goto label_288698;
        case 0x28869cu: goto label_28869c;
        case 0x2886a0u: goto label_2886a0;
        case 0x2886a4u: goto label_2886a4;
        case 0x2886a8u: goto label_2886a8;
        case 0x2886acu: goto label_2886ac;
        case 0x2886b0u: goto label_2886b0;
        case 0x2886b4u: goto label_2886b4;
        case 0x2886b8u: goto label_2886b8;
        case 0x2886bcu: goto label_2886bc;
        case 0x2886c0u: goto label_2886c0;
        case 0x2886c4u: goto label_2886c4;
        case 0x2886c8u: goto label_2886c8;
        case 0x2886ccu: goto label_2886cc;
        case 0x2886d0u: goto label_2886d0;
        case 0x2886d4u: goto label_2886d4;
        case 0x2886d8u: goto label_2886d8;
        case 0x2886dcu: goto label_2886dc;
        case 0x2886e0u: goto label_2886e0;
        case 0x2886e4u: goto label_2886e4;
        case 0x2886e8u: goto label_2886e8;
        case 0x2886ecu: goto label_2886ec;
        case 0x2886f0u: goto label_2886f0;
        case 0x2886f4u: goto label_2886f4;
        case 0x2886f8u: goto label_2886f8;
        case 0x2886fcu: goto label_2886fc;
        case 0x288700u: goto label_288700;
        case 0x288704u: goto label_288704;
        case 0x288708u: goto label_288708;
        case 0x28870cu: goto label_28870c;
        case 0x288710u: goto label_288710;
        case 0x288714u: goto label_288714;
        case 0x288718u: goto label_288718;
        case 0x28871cu: goto label_28871c;
        case 0x288720u: goto label_288720;
        case 0x288724u: goto label_288724;
        case 0x288728u: goto label_288728;
        case 0x28872cu: goto label_28872c;
        case 0x288730u: goto label_288730;
        case 0x288734u: goto label_288734;
        case 0x288738u: goto label_288738;
        case 0x28873cu: goto label_28873c;
        case 0x288740u: goto label_288740;
        case 0x288744u: goto label_288744;
        case 0x288748u: goto label_288748;
        case 0x28874cu: goto label_28874c;
        case 0x288750u: goto label_288750;
        case 0x288754u: goto label_288754;
        case 0x288758u: goto label_288758;
        case 0x28875cu: goto label_28875c;
        case 0x288760u: goto label_288760;
        case 0x288764u: goto label_288764;
        case 0x288768u: goto label_288768;
        case 0x28876cu: goto label_28876c;
        case 0x288770u: goto label_288770;
        case 0x288774u: goto label_288774;
        case 0x288778u: goto label_288778;
        case 0x28877cu: goto label_28877c;
        case 0x288780u: goto label_288780;
        case 0x288784u: goto label_288784;
        case 0x288788u: goto label_288788;
        case 0x28878cu: goto label_28878c;
        case 0x288790u: goto label_288790;
        case 0x288794u: goto label_288794;
        case 0x288798u: goto label_288798;
        case 0x28879cu: goto label_28879c;
        case 0x2887a0u: goto label_2887a0;
        case 0x2887a4u: goto label_2887a4;
        case 0x2887a8u: goto label_2887a8;
        case 0x2887acu: goto label_2887ac;
        case 0x2887b0u: goto label_2887b0;
        case 0x2887b4u: goto label_2887b4;
        case 0x2887b8u: goto label_2887b8;
        case 0x2887bcu: goto label_2887bc;
        case 0x2887c0u: goto label_2887c0;
        case 0x2887c4u: goto label_2887c4;
        case 0x2887c8u: goto label_2887c8;
        case 0x2887ccu: goto label_2887cc;
        case 0x2887d0u: goto label_2887d0;
        case 0x2887d4u: goto label_2887d4;
        case 0x2887d8u: goto label_2887d8;
        case 0x2887dcu: goto label_2887dc;
        case 0x2887e0u: goto label_2887e0;
        case 0x2887e4u: goto label_2887e4;
        case 0x2887e8u: goto label_2887e8;
        case 0x2887ecu: goto label_2887ec;
        case 0x2887f0u: goto label_2887f0;
        case 0x2887f4u: goto label_2887f4;
        case 0x2887f8u: goto label_2887f8;
        case 0x2887fcu: goto label_2887fc;
        case 0x288800u: goto label_288800;
        case 0x288804u: goto label_288804;
        case 0x288808u: goto label_288808;
        case 0x28880cu: goto label_28880c;
        case 0x288810u: goto label_288810;
        case 0x288814u: goto label_288814;
        case 0x288818u: goto label_288818;
        case 0x28881cu: goto label_28881c;
        case 0x288820u: goto label_288820;
        case 0x288824u: goto label_288824;
        case 0x288828u: goto label_288828;
        case 0x28882cu: goto label_28882c;
        case 0x288830u: goto label_288830;
        case 0x288834u: goto label_288834;
        case 0x288838u: goto label_288838;
        case 0x28883cu: goto label_28883c;
        case 0x288840u: goto label_288840;
        case 0x288844u: goto label_288844;
        case 0x288848u: goto label_288848;
        case 0x28884cu: goto label_28884c;
        case 0x288850u: goto label_288850;
        case 0x288854u: goto label_288854;
        case 0x288858u: goto label_288858;
        case 0x28885cu: goto label_28885c;
        case 0x288860u: goto label_288860;
        case 0x288864u: goto label_288864;
        case 0x288868u: goto label_288868;
        case 0x28886cu: goto label_28886c;
        case 0x288870u: goto label_288870;
        case 0x288874u: goto label_288874;
        case 0x288878u: goto label_288878;
        case 0x28887cu: goto label_28887c;
        case 0x288880u: goto label_288880;
        case 0x288884u: goto label_288884;
        case 0x288888u: goto label_288888;
        case 0x28888cu: goto label_28888c;
        case 0x288890u: goto label_288890;
        case 0x288894u: goto label_288894;
        case 0x288898u: goto label_288898;
        case 0x28889cu: goto label_28889c;
        case 0x2888a0u: goto label_2888a0;
        case 0x2888a4u: goto label_2888a4;
        case 0x2888a8u: goto label_2888a8;
        case 0x2888acu: goto label_2888ac;
        case 0x2888b0u: goto label_2888b0;
        case 0x2888b4u: goto label_2888b4;
        case 0x2888b8u: goto label_2888b8;
        case 0x2888bcu: goto label_2888bc;
        default: break;
    }

    ctx->pc = 0x288648u;

label_288648:
    // 0x288648: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x288648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28864c:
    // 0x28864c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_288650:
    // 0x288650: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x288650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_288654:
    // 0x288654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x288654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_288658:
    // 0x288658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28865c:
    // 0x28865c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_288660:
    // 0x288660: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x288660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_288664:
    // 0x288664: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x288664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_288668:
    // 0x288668: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x288668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_28866c:
    // 0x28866c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_288670:
    // 0x288670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_288674:
    // 0x288674: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x288674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_288678:
    // 0x288678: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_28867c:
    if (ctx->pc == 0x28867Cu) {
        ctx->pc = 0x28867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288678u;
        // 0x28867c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288680u;
        goto label_288680;
    }
    ctx->pc = 0x288678u;
    {
        const bool branch_taken_0x288678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288678u;
        // 0x28867c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288678) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288680u;
label_288680:
    // 0x288680: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x288680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_288684:
    // 0x288684: 0xc092932  jal         func_24A4C8
label_288688:
    if (ctx->pc == 0x288688u) {
        ctx->pc = 0x288688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288684u;
        // 0x288688: 0x3c150073  lui         $s5, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28868Cu;
        goto label_28868c;
    }
    ctx->pc = 0x288684u;
    SET_GPR_U32(ctx, 31, 0x28868Cu);
    ctx->pc = 0x288688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288684u;
    // 0x288688: 0x3c150073  lui         $s5, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x288684u, 0x28868Cu)) {
        return;
    }
    ctx->pc = 0x28868Cu;
label_28868c:
    // 0x28868c: 0x10000009  b           . + 4 + (0x9 << 2)
label_288690:
    if (ctx->pc == 0x288690u) {
        ctx->pc = 0x288690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28868Cu;
        // 0x288690: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288694u;
        goto label_288694;
    }
    ctx->pc = 0x28868Cu;
    {
        const bool branch_taken_0x28868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28868Cu;
        // 0x288690: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28868c) {
            ctx->pc = 0x2886B4u;
            goto label_2886b4;
        }
    }
    ctx->pc = 0x288694u;
label_288694:
    // 0x288694: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x288694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_288698:
    // 0x288698: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28869c:
    if (ctx->pc == 0x28869Cu) {
        ctx->pc = 0x28869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288698u;
        // 0x28869c: 0x3c150073  lui         $s5, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2886A0u;
        goto label_2886a0;
    }
    ctx->pc = 0x288698u;
    {
        const bool branch_taken_0x288698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288698u;
        // 0x28869c: 0x3c150073  lui         $s5, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288698) {
            ctx->pc = 0x2886B0u;
            goto label_2886b0;
        }
    }
    ctx->pc = 0x2886A0u;
label_2886a0:
    // 0x2886a0: 0x26a20fc8  addiu       $v0, $s5, 0xFC8
    ctx->pc = 0x2886a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_2886a4:
    // 0x2886a4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x2886a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_2886a8:
    // 0x2886a8: 0x60f809  jalr        $v1
label_2886ac:
    if (ctx->pc == 0x2886ACu) {
        ctx->pc = 0x2886B0u;
        goto label_2886b0;
    }
    ctx->pc = 0x2886A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2886B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2886A8u, 0x2886B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2886B0u;
label_2886b0:
    // 0x2886b0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2886b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2886b4:
    // 0x2886b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2886b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2886b8:
    // 0x2886b8: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2886bc:
    if (ctx->pc == 0x2886BCu) {
        ctx->pc = 0x2886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886B8u;
        // 0x2886bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2886C0u;
        goto label_2886c0;
    }
    ctx->pc = 0x2886B8u;
    {
        const bool branch_taken_0x2886b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886B8u;
        // 0x2886bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886b8) {
            ctx->pc = 0x288734u;
            goto label_288734;
        }
    }
    ctx->pc = 0x2886C0u;
label_2886c0:
    // 0x2886c0: 0xc0a2468  jal         func_2891A0
label_2886c4:
    if (ctx->pc == 0x2886C4u) {
        ctx->pc = 0x2886C8u;
        goto label_2886c8;
    }
    ctx->pc = 0x2886C0u;
    SET_GPR_U32(ctx, 31, 0x2886C8u);
    ctx->pc = 0x2891A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2891A0u, 0x2886C0u, 0x2886C8u)) {
        return;
    }
    ctx->pc = 0x2886C8u;
label_2886c8:
    // 0x2886c8: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x2886c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2886cc:
    // 0x2886cc: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2886d0:
    if (ctx->pc == 0x2886D0u) {
        ctx->pc = 0x2886D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886CCu;
        // 0x2886d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2886D4u;
        goto label_2886d4;
    }
    ctx->pc = 0x2886CCu;
    {
        const bool branch_taken_0x2886cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886CCu;
        // 0x2886d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886cc) {
            ctx->pc = 0x288730u;
            goto label_288730;
        }
    }
    ctx->pc = 0x2886D4u;
label_2886d4:
    // 0x2886d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2886d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2886d8:
    // 0x2886d8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2886dc:
    if (ctx->pc == 0x2886DCu) {
        ctx->pc = 0x2886DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886D8u;
        // 0x2886dc: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2886E0u;
        goto label_2886e0;
    }
    ctx->pc = 0x2886D8u;
    {
        const bool branch_taken_0x2886d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886D8u;
        // 0x2886dc: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886d8) {
            ctx->pc = 0x28870Cu;
            goto label_28870c;
        }
    }
    ctx->pc = 0x2886E0u;
label_2886e0:
    // 0x2886e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2886e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2886e4:
    // 0x2886e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2886e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2886e8:
    // 0x2886e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2886ec:
    if (ctx->pc == 0x2886ECu) {
        ctx->pc = 0x2886ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886E8u;
        // 0x2886ec: 0x26a30fc8  addiu       $v1, $s5, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2886F0u;
        goto label_2886f0;
    }
    ctx->pc = 0x2886E8u;
    {
        const bool branch_taken_0x2886e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2886ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886E8u;
        // 0x2886ec: 0x26a30fc8  addiu       $v1, $s5, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886e8) {
            ctx->pc = 0x288700u;
            goto label_288700;
        }
    }
    ctx->pc = 0x2886F0u;
label_2886f0:
    // 0x2886f0: 0xc092932  jal         func_24A4C8
label_2886f4:
    if (ctx->pc == 0x2886F4u) {
        ctx->pc = 0x2886F8u;
        goto label_2886f8;
    }
    ctx->pc = 0x2886F0u;
    SET_GPR_U32(ctx, 31, 0x2886F8u);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x2886F0u, 0x2886F8u)) {
        return;
    }
    ctx->pc = 0x2886F8u;
label_2886f8:
    // 0x2886f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2886fc:
    if (ctx->pc == 0x2886FCu) {
        ctx->pc = 0x2886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886F8u;
        // 0x2886fc: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288700u;
        goto label_288700;
    }
    ctx->pc = 0x2886F8u;
    {
        const bool branch_taken_0x2886f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886F8u;
        // 0x2886fc: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886f8) {
            ctx->pc = 0x288710u;
            goto label_288710;
        }
    }
    ctx->pc = 0x288700u;
label_288700:
    // 0x288700: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x288700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_288704:
    // 0x288704: 0x40f809  jalr        $v0
label_288708:
    if (ctx->pc == 0x288708u) {
        ctx->pc = 0x28870Cu;
        goto label_28870c;
    }
    ctx->pc = 0x288704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28870Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288704u, 0x28870Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28870Cu;
label_28870c:
    // 0x28870c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x28870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_288710:
    // 0x288710: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x288710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_288714:
    // 0x288714: 0x8c4468d4  lw          $a0, 0x68D4($v0)
    ctx->pc = 0x288714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26836)));
label_288718:
    // 0x288718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28871c:
    // 0x28871c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x28871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_288720:
    // 0x288720: 0x40f809  jalr        $v0
label_288724:
    if (ctx->pc == 0x288724u) {
        ctx->pc = 0x288724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288720u;
        // 0x288724: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288728u;
        goto label_288728;
    }
    ctx->pc = 0x288720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288728u);
        ctx->pc = 0x288724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288720u;
        // 0x288724: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288720u, 0x288728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288728u;
label_288728:
    // 0x288728: 0xc0a22a6  jal         func_288A98
label_28872c:
    if (ctx->pc == 0x28872Cu) {
        ctx->pc = 0x28872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288728u;
        // 0x28872c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288730u;
        goto label_288730;
    }
    ctx->pc = 0x288728u;
    SET_GPR_U32(ctx, 31, 0x288730u);
    ctx->pc = 0x28872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288728u;
    // 0x28872c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x288728u, 0x288730u)) {
        return;
    }
    ctx->pc = 0x288730u;
label_288730:
    // 0x288730: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x288730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_288734:
    // 0x288734: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_288738:
    // 0x288738: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x288738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_28873c:
    // 0x28873c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x28873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_288740:
    // 0x288740: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x288740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_288744:
    // 0x288744: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x288744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_288748:
    // 0x288748: 0x920018  mult        $zero, $a0, $s2
    ctx->pc = 0x288748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28874c:
    // 0x28874c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x28874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_288750:
    // 0x288750: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x288750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_288754:
    // 0x288754: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x288754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_288758:
    // 0x288758: 0x34a501a1  ori         $a1, $a1, 0x1A1
    ctx->pc = 0x288758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
label_28875c:
    // 0x28875c: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x28875cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_288760:
    // 0x288760: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x288760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_288764:
    // 0x288764: 0x2012  mflo        $a0
    ctx->pc = 0x288764u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_288768:
    // 0x288768: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x288768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_28876c:
    // 0x28876c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x28876cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_288770:
    // 0x288770: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x288770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_288774:
    // 0x288774: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x288774u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_288778:
    // 0x288778: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x288778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_28877c:
    // 0x28877c: 0x40f809  jalr        $v0
label_288780:
    if (ctx->pc == 0x288780u) {
        ctx->pc = 0x288780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28877Cu;
        // 0x288780: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288784u;
        goto label_288784;
    }
    ctx->pc = 0x28877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288784u);
        ctx->pc = 0x288780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28877Cu;
        // 0x288780: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28877Cu, 0x288784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288784u;
label_288784:
    // 0x288784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288788:
    // 0x288788: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_28878c:
    if (ctx->pc == 0x28878Cu) {
        ctx->pc = 0x28878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288788u;
        // 0x28878c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288790u;
        goto label_288790;
    }
    ctx->pc = 0x288788u;
    {
        const bool branch_taken_0x288788 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288788u;
        // 0x28878c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288788) {
            ctx->pc = 0x288898u;
            goto label_288898;
        }
    }
    ctx->pc = 0x288790u;
label_288790:
    // 0x288790: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_288794:
    // 0x288794: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_288798:
    if (ctx->pc == 0x288798u) {
        ctx->pc = 0x288798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288794u;
        // 0x288798: 0xd20018  mult        $zero, $a2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28879Cu;
        goto label_28879c;
    }
    ctx->pc = 0x288794u;
    {
        const bool branch_taken_0x288794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x288798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288794u;
        // 0x288798: 0xd20018  mult        $zero, $a2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288794) {
            ctx->pc = 0x2887C4u;
            goto label_2887c4;
        }
    }
    ctx->pc = 0x28879Cu;
label_28879c:
    // 0x28879c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28879cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2887a0:
    // 0x2887a0: 0x3012  mflo        $a2
    ctx->pc = 0x2887a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_2887a4:
    // 0x2887a4: 0xc093546  jal         func_24D518
label_2887a8:
    if (ctx->pc == 0x2887A8u) {
        ctx->pc = 0x2887A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887A4u;
        // 0x2887a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2887ACu;
        goto label_2887ac;
    }
    ctx->pc = 0x2887A4u;
    SET_GPR_U32(ctx, 31, 0x2887ACu);
    ctx->pc = 0x2887A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887A4u;
    // 0x2887a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2887A4u, 0x2887ACu)) {
        return;
    }
    ctx->pc = 0x2887ACu;
label_2887ac:
    // 0x2887ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2887acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2887b0:
    // 0x2887b0: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x2887b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2887b4:
    // 0x2887b4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_2887b8:
    if (ctx->pc == 0x2887B8u) {
        ctx->pc = 0x2887B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887B4u;
        // 0x2887b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2887BCu;
        goto label_2887bc;
    }
    ctx->pc = 0x2887B4u;
    {
        const bool branch_taken_0x2887b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2887b4) {
            ctx->pc = 0x2887B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2887B4u;
            // 0x2887b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2887C8u;
            goto label_2887c8;
        }
    }
    ctx->pc = 0x2887BCu;
label_2887bc:
    // 0x2887bc: 0x10000036  b           . + 4 + (0x36 << 2)
label_2887c0:
    if (ctx->pc == 0x2887C0u) {
        ctx->pc = 0x2887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887BCu;
        // 0x2887c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2887C4u;
        goto label_2887c4;
    }
    ctx->pc = 0x2887BCu;
    {
        const bool branch_taken_0x2887bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887BCu;
        // 0x2887c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887bc) {
            ctx->pc = 0x288898u;
            goto label_288898;
        }
    }
    ctx->pc = 0x2887C4u;
label_2887c4:
    // 0x2887c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2887c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2887c8:
    // 0x2887c8: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_2887cc:
    if (ctx->pc == 0x2887CCu) {
        ctx->pc = 0x2887CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887C8u;
        // 0x2887cc: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2887D0u;
        goto label_2887d0;
    }
    ctx->pc = 0x2887C8u;
    {
        const bool branch_taken_0x2887c8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2887c8) {
            ctx->pc = 0x2887CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2887C8u;
            // 0x2887cc: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288830u;
            goto label_288830;
        }
    }
    ctx->pc = 0x2887D0u;
label_2887d0:
    // 0x2887d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2887d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2887d4:
    // 0x2887d4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2887d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2887d8:
    // 0x2887d8: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x2887d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2887dc:
    // 0x2887dc: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_2887e0:
    if (ctx->pc == 0x2887E0u) {
        ctx->pc = 0x2887E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887DCu;
        // 0x2887e0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2887E4u;
        goto label_2887e4;
    }
    ctx->pc = 0x2887DCu;
    {
        const bool branch_taken_0x2887dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2887dc) {
            ctx->pc = 0x2887E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2887DCu;
            // 0x2887e0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288810u;
            goto label_288810;
        }
    }
    ctx->pc = 0x2887E4u;
label_2887e4:
    // 0x2887e4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2887e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2887e8:
    // 0x2887e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2887ec:
    if (ctx->pc == 0x2887ECu) {
        ctx->pc = 0x2887ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887E8u;
        // 0x2887ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2887F0u;
        goto label_2887f0;
    }
    ctx->pc = 0x2887E8u;
    {
        const bool branch_taken_0x2887e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2887ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887E8u;
        // 0x2887ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887e8) {
            ctx->pc = 0x288800u;
            goto label_288800;
        }
    }
    ctx->pc = 0x2887F0u;
label_2887f0:
    // 0x2887f0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2887f4:
    // 0x2887f4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2887f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2887f8:
    // 0x2887f8: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2887f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_2887fc:
    // 0x2887fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2887fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_288800:
    // 0x288800: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x288800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_288804:
    // 0x288804: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_288808:
    if (ctx->pc == 0x288808u) {
        ctx->pc = 0x288808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288804u;
        // 0x288808: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28880Cu;
        goto label_28880c;
    }
    ctx->pc = 0x288804u;
    {
        const bool branch_taken_0x288804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288804) {
            ctx->pc = 0x288808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288804u;
            // 0x288808: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288830u;
            goto label_288830;
        }
    }
    ctx->pc = 0x28880Cu;
label_28880c:
    // 0x28880c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x28880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_288810:
    // 0x288810: 0x0  nop
    ctx->pc = 0x288810u;
    // NOP
label_288814:
    // 0x288814: 0x0  nop
    ctx->pc = 0x288814u;
    // NOP
label_288818:
    // 0x288818: 0x0  nop
    ctx->pc = 0x288818u;
    // NOP
label_28881c:
    // 0x28881c: 0x0  nop
    ctx->pc = 0x28881cu;
    // NOP
label_288820:
    // 0x288820: 0x0  nop
    ctx->pc = 0x288820u;
    // NOP
label_288824:
    // 0x288824: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
label_288828:
    if (ctx->pc == 0x288828u) {
        ctx->pc = 0x288828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288824u;
        // 0x288828: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28882Cu;
        goto label_28882c;
    }
    ctx->pc = 0x288824u;
    {
        const bool branch_taken_0x288824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x288824) {
            ctx->pc = 0x288828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288824u;
            // 0x288828: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288810;
        }
    }
    ctx->pc = 0x28882Cu;
label_28882c:
    // 0x28882c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_288830:
    // 0x288830: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x288830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_288834:
    // 0x288834: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_288838:
    if (ctx->pc == 0x288838u) {
        ctx->pc = 0x288838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288834u;
        // 0x288838: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28883Cu;
        goto label_28883c;
    }
    ctx->pc = 0x288834u;
    {
        const bool branch_taken_0x288834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288834u;
        // 0x288838: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288834) {
            ctx->pc = 0x288864u;
            goto label_288864;
        }
    }
    ctx->pc = 0x28883Cu;
label_28883c:
    // 0x28883c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288840:
    // 0x288840: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x288840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_288844:
    // 0x288844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288848:
    // 0x288848: 0xc09270a  jal         func_249C28
label_28884c:
    if (ctx->pc == 0x28884Cu) {
        ctx->pc = 0x28884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288848u;
        // 0x28884c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288850u;
        goto label_288850;
    }
    ctx->pc = 0x288848u;
    SET_GPR_U32(ctx, 31, 0x288850u);
    ctx->pc = 0x28884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288848u;
    // 0x28884c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x288848u, 0x288850u)) {
        return;
    }
    ctx->pc = 0x288850u;
label_288850:
    // 0x288850: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_288854:
    if (ctx->pc == 0x288854u) {
        ctx->pc = 0x288854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288850u;
        // 0x288854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288858u;
        goto label_288858;
    }
    ctx->pc = 0x288850u;
    {
        const bool branch_taken_0x288850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288850u;
        // 0x288854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288850) {
            ctx->pc = 0x288898u;
            goto label_288898;
        }
    }
    ctx->pc = 0x288858u;
label_288858:
    // 0x288858: 0xc0a2230  jal         func_2888C0
label_28885c:
    if (ctx->pc == 0x28885Cu) {
        ctx->pc = 0x28885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288858u;
        // 0x28885c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288860u;
        goto label_288860;
    }
    ctx->pc = 0x288858u;
    SET_GPR_U32(ctx, 31, 0x288860u);
    ctx->pc = 0x28885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288858u;
    // 0x28885c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2888C0u, 0x288858u, 0x288860u)) {
        return;
    }
    ctx->pc = 0x288860u;
label_288860:
    // 0x288860: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x288860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_288864:
    // 0x288864: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x288864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_288868:
    // 0x288868: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_28886c:
    if (ctx->pc == 0x28886Cu) {
        ctx->pc = 0x28886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288868u;
        // 0x28886c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288870u;
        goto label_288870;
    }
    ctx->pc = 0x288868u;
    {
        const bool branch_taken_0x288868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288868) {
            ctx->pc = 0x28886Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288868u;
            // 0x28886c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288898u;
            goto label_288898;
        }
    }
    ctx->pc = 0x288870u;
label_288870:
    // 0x288870: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x288870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_288874:
    // 0x288874: 0x0  nop
    ctx->pc = 0x288874u;
    // NOP
label_288878:
    // 0x288878: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_28887c:
    // 0x28887c: 0x0  nop
    ctx->pc = 0x28887cu;
    // NOP
label_288880:
    // 0x288880: 0x0  nop
    ctx->pc = 0x288880u;
    // NOP
label_288884:
    // 0x288884: 0x0  nop
    ctx->pc = 0x288884u;
    // NOP
label_288888:
    // 0x288888: 0x0  nop
    ctx->pc = 0x288888u;
    // NOP
label_28888c:
    // 0x28888c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_288890:
    if (ctx->pc == 0x288890u) {
        ctx->pc = 0x288890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28888Cu;
        // 0x288890: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288894u;
        goto label_288894;
    }
    ctx->pc = 0x28888Cu;
    {
        const bool branch_taken_0x28888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28888c) {
            ctx->pc = 0x288890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28888Cu;
            // 0x288890: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288878;
        }
    }
    ctx->pc = 0x288894u;
label_288894:
    // 0x288894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x288894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288898:
    // 0x288898: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x288898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28889c:
    // 0x28889c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28889cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2888a0:
    // 0x2888a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2888a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2888a4:
    // 0x2888a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2888a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2888a8:
    // 0x2888a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2888a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2888ac:
    // 0x2888ac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2888acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2888b0:
    // 0x2888b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2888b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2888b4:
    // 0x2888b4: 0x3e00008  jr          $ra
label_2888b8:
    if (ctx->pc == 0x2888B8u) {
        ctx->pc = 0x2888B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888B4u;
        // 0x2888b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2888BCu;
        goto label_2888bc;
    }
    ctx->pc = 0x2888B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2888B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888B4u;
        // 0x2888b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2888B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2888BCu;
label_2888bc:
    // 0x2888bc: 0x0  nop
    ctx->pc = 0x2888bcu;
    // NOP
    ctx->pc = 0x2888c0u;
}
