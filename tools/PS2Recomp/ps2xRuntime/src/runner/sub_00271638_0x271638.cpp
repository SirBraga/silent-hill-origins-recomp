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

// Function: sub_00271638
// Address: 0x271638 - 0x271810
void sub_00271638_0x271638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271638_0x271638");
#endif

    switch (ctx->pc) {
        case 0x271690u: goto label_271690;
        case 0x2716acu: goto label_2716ac;
        case 0x2716bcu: goto label_2716bc;
        case 0x2716d0u: goto label_2716d0;
        case 0x2716e0u: goto label_2716e0;
        case 0x2716ecu: goto label_2716ec;
        case 0x2716fcu: goto label_2716fc;
        case 0x271708u: goto label_271708;
        case 0x271718u: goto label_271718;
        case 0x271724u: goto label_271724;
        case 0x271734u: goto label_271734;
        case 0x271748u: goto label_271748;
        case 0x271758u: goto label_271758;
        case 0x271764u: goto label_271764;
        case 0x271770u: goto label_271770;
        case 0x271788u: goto label_271788;
        case 0x271798u: goto label_271798;
        case 0x2717a4u: goto label_2717a4;
        case 0x2717b0u: goto label_2717b0;
        case 0x2717bcu: goto label_2717bc;
        case 0x2717d0u: goto label_2717d0;
        case 0x2717dcu: goto label_2717dc;
        case 0x2717e8u: goto label_2717e8;
        default: break;
    }

    ctx->pc = 0x271638u;

    // 0x271638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x271638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27163c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x271640: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x271640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x271644: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x271644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27164c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27164cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271650: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x271650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x271654: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x271654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271658: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x271658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27165c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x271660: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x271660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271664: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x271664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x271668: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x271668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x27166c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x27166cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x271670: 0x3c033e3f  lui         $v1, 0x3E3F
    ctx->pc = 0x271670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15935 << 16));
    // 0x271674: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x271674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x271678: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x271678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27167c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x27167cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x271680: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x271680u;
    {
        const bool branch_taken_0x271680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271680u;
        // 0x271684: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271680) {
            ctx->pc = 0x2716A0u;
            goto label_2716a0;
        }
    }
    ctx->pc = 0x271688u;
    // 0x271688: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x271688u;
    SET_GPR_U32(ctx, 31, 0x271690u);
    ctx->pc = 0x27168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271688u;
    // 0x27168c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x271688u, 0x271690u)) {
        return;
    }
    ctx->pc = 0x271690u;
label_271690:
    // 0x271690: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271690u;
    {
        const bool branch_taken_0x271690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271690u;
        // 0x271694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271690) {
            ctx->pc = 0x2716A4u;
            goto label_2716a4;
        }
    }
    ctx->pc = 0x271698u;
    // 0x271698: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x271698u;
    {
        const bool branch_taken_0x271698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271698u;
        // 0x27169c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271698) {
            ctx->pc = 0x2717E8u;
            goto label_2717e8;
        }
    }
    ctx->pc = 0x2716A0u;
label_2716a0:
    // 0x2716a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2716a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2716a4:
    // 0x2716a4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2716A4u;
    SET_GPR_U32(ctx, 31, 0x2716ACu);
    ctx->pc = 0x2716A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716A4u;
    // 0x2716a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2716A4u, 0x2716ACu)) {
        return;
    }
    ctx->pc = 0x2716ACu;
label_2716ac:
    // 0x2716ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2716acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2716b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716b4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2716B4u;
    SET_GPR_U32(ctx, 31, 0x2716BCu);
    ctx->pc = 0x2716B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716B4u;
    // 0x2716b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2716B4u, 0x2716BCu)) {
        return;
    }
    ctx->pc = 0x2716BCu;
label_2716bc:
    // 0x2716bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2716bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2716c0: 0xdc25c9c0  ld          $a1, -0x3640($at)
    ctx->pc = 0x2716c0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9C0u));
    // 0x2716c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2716c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716c8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2716C8u;
    SET_GPR_U32(ctx, 31, 0x2716D0u);
    ctx->pc = 0x2716CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716C8u;
    // 0x2716cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2716C8u, 0x2716D0u)) {
        return;
    }
    ctx->pc = 0x2716D0u;
label_2716d0:
    // 0x2716d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2716d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2716d4: 0xdc25c9c8  ld          $a1, -0x3638($at)
    ctx->pc = 0x2716d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9C8u));
    // 0x2716d8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2716D8u;
    SET_GPR_U32(ctx, 31, 0x2716E0u);
    ctx->pc = 0x2716DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716D8u;
    // 0x2716dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2716D8u, 0x2716E0u)) {
        return;
    }
    ctx->pc = 0x2716E0u;
label_2716e0:
    // 0x2716e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2716e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716e4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2716E4u;
    SET_GPR_U32(ctx, 31, 0x2716ECu);
    ctx->pc = 0x2716E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716E4u;
    // 0x2716e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2716E4u, 0x2716ECu)) {
        return;
    }
    ctx->pc = 0x2716ECu;
label_2716ec:
    // 0x2716ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2716ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2716f0: 0xdc25c9d0  ld          $a1, -0x3630($at)
    ctx->pc = 0x2716f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9D0u));
    // 0x2716f4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2716F4u;
    SET_GPR_U32(ctx, 31, 0x2716FCu);
    ctx->pc = 0x2716F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716F4u;
    // 0x2716f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2716F4u, 0x2716FCu)) {
        return;
    }
    ctx->pc = 0x2716FCu;
label_2716fc:
    // 0x2716fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2716fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271700: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271700u;
    SET_GPR_U32(ctx, 31, 0x271708u);
    ctx->pc = 0x271704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271700u;
    // 0x271704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271700u, 0x271708u)) {
        return;
    }
    ctx->pc = 0x271708u;
label_271708:
    // 0x271708: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x271708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x27170c: 0xdc25c9d8  ld          $a1, -0x3628($at)
    ctx->pc = 0x27170cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9D8u));
    // 0x271710: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271710u;
    SET_GPR_U32(ctx, 31, 0x271718u);
    ctx->pc = 0x271714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271710u;
    // 0x271714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271710u, 0x271718u)) {
        return;
    }
    ctx->pc = 0x271718u;
label_271718:
    // 0x271718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27171c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x27171Cu;
    SET_GPR_U32(ctx, 31, 0x271724u);
    ctx->pc = 0x271720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27171Cu;
    // 0x271720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x27171Cu, 0x271724u)) {
        return;
    }
    ctx->pc = 0x271724u;
label_271724:
    // 0x271724: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x271724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x271728: 0xdc25c9e0  ld          $a1, -0x3620($at)
    ctx->pc = 0x271728u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9E0u));
    // 0x27172c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x27172Cu;
    SET_GPR_U32(ctx, 31, 0x271734u);
    ctx->pc = 0x271730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27172Cu;
    // 0x271730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x27172Cu, 0x271734u)) {
        return;
    }
    ctx->pc = 0x271734u;
label_271734:
    // 0x271734: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x271734u;
    {
        const bool branch_taken_0x271734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x271738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271734u;
        // 0x271738: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271734) {
            ctx->pc = 0x271778u;
            goto label_271778;
        }
    }
    ctx->pc = 0x27173Cu;
    // 0x27173c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271740: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271740u;
    SET_GPR_U32(ctx, 31, 0x271748u);
    ctx->pc = 0x271744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271740u;
    // 0x271744: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271740u, 0x271748u)) {
        return;
    }
    ctx->pc = 0x271748u;
label_271748:
    // 0x271748: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x271748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x27174c: 0xdc25c9e8  ld          $a1, -0x3618($at)
    ctx->pc = 0x27174cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9E8u));
    // 0x271750: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271750u;
    SET_GPR_U32(ctx, 31, 0x271758u);
    ctx->pc = 0x271754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271750u;
    // 0x271754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271750u, 0x271758u)) {
        return;
    }
    ctx->pc = 0x271758u;
label_271758:
    // 0x271758: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27175c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x27175Cu;
    SET_GPR_U32(ctx, 31, 0x271764u);
    ctx->pc = 0x271760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27175Cu;
    // 0x271760: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x27175Cu, 0x271764u)) {
        return;
    }
    ctx->pc = 0x271764u;
label_271764:
    // 0x271764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271768: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271768u;
    SET_GPR_U32(ctx, 31, 0x271770u);
    ctx->pc = 0x27176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271768u;
    // 0x27176c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271768u, 0x271770u)) {
        return;
    }
    ctx->pc = 0x271770u;
label_271770:
    // 0x271770: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x271770u;
    {
        const bool branch_taken_0x271770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271770u;
        // 0x271774: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271770) {
            ctx->pc = 0x2717ECu;
            goto label_2717ec;
        }
    }
    ctx->pc = 0x271778u;
label_271778:
    // 0x271778: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x271778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x27177c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x27177cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x271780: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271780u;
    SET_GPR_U32(ctx, 31, 0x271788u);
    ctx->pc = 0x271784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271780u;
    // 0x271784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271780u, 0x271788u)) {
        return;
    }
    ctx->pc = 0x271788u;
label_271788:
    // 0x271788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27178c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27178cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271790: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271790u;
    SET_GPR_U32(ctx, 31, 0x271798u);
    ctx->pc = 0x271794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271790u;
    // 0x271794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271790u, 0x271798u)) {
        return;
    }
    ctx->pc = 0x271798u;
label_271798:
    // 0x271798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27179c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x27179Cu;
    SET_GPR_U32(ctx, 31, 0x2717A4u);
    ctx->pc = 0x2717A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27179Cu;
    // 0x2717a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x27179Cu, 0x2717A4u)) {
        return;
    }
    ctx->pc = 0x2717A4u;
label_2717a4:
    // 0x2717a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2717a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717a8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2717A8u;
    SET_GPR_U32(ctx, 31, 0x2717B0u);
    ctx->pc = 0x2717ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717A8u;
    // 0x2717ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2717A8u, 0x2717B0u)) {
        return;
    }
    ctx->pc = 0x2717B0u;
label_2717b0:
    // 0x2717b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2717b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717b4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2717B4u;
    SET_GPR_U32(ctx, 31, 0x2717BCu);
    ctx->pc = 0x2717B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717B4u;
    // 0x2717b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2717B4u, 0x2717BCu)) {
        return;
    }
    ctx->pc = 0x2717BCu;
label_2717bc:
    // 0x2717bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2717bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2717c0: 0xdc25c9f0  ld          $a1, -0x3610($at)
    ctx->pc = 0x2717c0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC9F0u));
    // 0x2717c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2717c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717c8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2717C8u;
    SET_GPR_U32(ctx, 31, 0x2717D0u);
    ctx->pc = 0x2717CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717C8u;
    // 0x2717cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2717C8u, 0x2717D0u)) {
        return;
    }
    ctx->pc = 0x2717D0u;
label_2717d0:
    // 0x2717d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2717d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717d4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2717D4u;
    SET_GPR_U32(ctx, 31, 0x2717DCu);
    ctx->pc = 0x2717D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717D4u;
    // 0x2717d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2717D4u, 0x2717DCu)) {
        return;
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2717dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717e0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2717E0u;
    SET_GPR_U32(ctx, 31, 0x2717E8u);
    ctx->pc = 0x2717E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717E0u;
    // 0x2717e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2717E0u, 0x2717E8u)) {
        return;
    }
    ctx->pc = 0x2717E8u;
label_2717e8:
    // 0x2717e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2717e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2717ec:
    // 0x2717ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2717ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2717f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2717f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2717f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2717f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2717f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2717f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2717fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2717fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271804: 0x3e00008  jr          $ra
    ctx->pc = 0x271804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271804u;
        // 0x271808: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27180Cu;
    // 0x27180c: 0x0  nop
    ctx->pc = 0x27180cu;
    // NOP
    ctx->pc = 0x271810u;
}
