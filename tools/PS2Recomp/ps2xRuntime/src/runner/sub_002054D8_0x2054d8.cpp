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

// Function: sub_002054D8
// Address: 0x2054d8 - 0x2055d0
void sub_002054D8_0x2054d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002054D8_0x2054d8");
#endif

    switch (ctx->pc) {
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        default: break;
    }

    ctx->pc = 0x2054d8u;

label_2054d8:
    // 0x2054d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2054dc:
    // 0x2054dc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_2054e0:
    // 0x2054e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2054e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2054e4:
    // 0x2054e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2054e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2054e8:
    // 0x2054e8: 0x24502d18  addiu       $s0, $v0, 0x2D18
    ctx->pc = 0x2054e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11544));
label_2054ec:
    // 0x2054ec: 0x8c432d18  lw          $v1, 0x2D18($v0)
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11544)));
label_2054f0:
    // 0x2054f0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_2054f4:
    if (ctx->pc == 0x2054F4u) {
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054F8u;
        goto label_2054f8;
    }
    ctx->pc = 0x2054F0u;
    {
        const bool branch_taken_0x2054f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054f0) {
            ctx->pc = 0x2055C0u;
            goto label_2055c0;
        }
    }
    ctx->pc = 0x2054F8u;
label_2054f8:
    // 0x2054f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2054f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2054fc:
    // 0x2054fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2054fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205500:
    // 0x205500: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_205504:
    if (ctx->pc == 0x205504u) {
        ctx->pc = 0x205504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205500u;
        // 0x205504: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205508u;
        goto label_205508;
    }
    ctx->pc = 0x205500u;
    {
        const bool branch_taken_0x205500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205500u;
        // 0x205504: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205500) {
            ctx->pc = 0x205528u;
            goto label_205528;
        }
    }
    ctx->pc = 0x205508u;
label_205508:
    // 0x205508: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20550c:
    // 0x20550c: 0x0  nop
    ctx->pc = 0x20550cu;
    // NOP
label_205510:
    // 0x205510: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_205514:
    if (ctx->pc == 0x205514u) {
        ctx->pc = 0x205518u;
        goto label_205518;
    }
    ctx->pc = 0x205510u;
    {
        const bool branch_taken_0x205510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x205510) {
            ctx->pc = 0x20552Cu;
            goto label_20552c;
        }
    }
    ctx->pc = 0x205518u;
label_205518:
    // 0x205518: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20551c:
    // 0x20551c: 0x0  nop
    ctx->pc = 0x20551cu;
    // NOP
label_205520:
    // 0x205520: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_205524:
    if (ctx->pc == 0x205524u) {
        ctx->pc = 0x205524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205520u;
        // 0x205524: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205528u;
        goto label_205528;
    }
    ctx->pc = 0x205520u;
    {
        const bool branch_taken_0x205520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205520) {
            ctx->pc = 0x205524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205520u;
            // 0x205524: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205510;
        }
    }
    ctx->pc = 0x205528u;
label_205528:
    // 0x205528: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20552c:
    // 0x20552c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_205530:
    if (ctx->pc == 0x205530u) {
        ctx->pc = 0x205530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20552Cu;
        // 0x205530: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205534u;
        goto label_205534;
    }
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20552Cu;
        // 0x205530: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20552c) {
            ctx->pc = 0x20557Cu;
            goto label_20557c;
        }
    }
    ctx->pc = 0x205534u;
label_205534:
    // 0x205534: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x205534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_205538:
    // 0x205538: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20553c:
    if (ctx->pc == 0x20553Cu) {
        ctx->pc = 0x20553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205538u;
        // 0x20553c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205540u;
        goto label_205540;
    }
    ctx->pc = 0x205538u;
    {
        const bool branch_taken_0x205538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205538u;
        // 0x20553c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205538) {
            ctx->pc = 0x205548u;
            goto label_205548;
        }
    }
    ctx->pc = 0x205540u;
label_205540:
    // 0x205540: 0x10000002  b           . + 4 + (0x2 << 2)
label_205544:
    if (ctx->pc == 0x205544u) {
        ctx->pc = 0x205544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205540u;
        // 0x205544: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205548u;
        goto label_205548;
    }
    ctx->pc = 0x205540u;
    {
        const bool branch_taken_0x205540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205540u;
        // 0x205544: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205540) {
            ctx->pc = 0x20554Cu;
            goto label_20554c;
        }
    }
    ctx->pc = 0x205548u;
label_205548:
    // 0x205548: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x205548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_20554c:
    // 0x20554c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_205550:
    // 0x205550: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_205554:
    if (ctx->pc == 0x205554u) {
        ctx->pc = 0x205554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205550u;
        // 0x205554: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205558u;
        goto label_205558;
    }
    ctx->pc = 0x205550u;
    {
        const bool branch_taken_0x205550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205550u;
        // 0x205554: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205550) {
            ctx->pc = 0x205560u;
            goto label_205560;
        }
    }
    ctx->pc = 0x205558u;
label_205558:
    // 0x205558: 0x10000002  b           . + 4 + (0x2 << 2)
label_20555c:
    if (ctx->pc == 0x20555Cu) {
        ctx->pc = 0x20555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205558u;
        // 0x20555c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205560u;
        goto label_205560;
    }
    ctx->pc = 0x205558u;
    {
        const bool branch_taken_0x205558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205558u;
        // 0x20555c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205558) {
            ctx->pc = 0x205564u;
            goto label_205564;
        }
    }
    ctx->pc = 0x205560u;
label_205560:
    // 0x205560: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x205560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_205564:
    // 0x205564: 0xc0808b8  jal         func_2022E0
label_205568:
    if (ctx->pc == 0x205568u) {
        ctx->pc = 0x20556Cu;
        goto label_20556c;
    }
    ctx->pc = 0x205564u;
    SET_GPR_U32(ctx, 31, 0x20556Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x205564u, 0x20556Cu)) {
        return;
    }
    ctx->pc = 0x20556Cu;
label_20556c:
    // 0x20556c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205570:
    // 0x205570: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_205574:
    // 0x205574: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x205574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_205578:
    // 0x205578: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20557c:
    // 0x20557c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_205580:
    // 0x205580: 0x40f809  jalr        $v0
label_205584:
    if (ctx->pc == 0x205584u) {
        ctx->pc = 0x205584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205580u;
        // 0x205584: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205588u;
        goto label_205588;
    }
    ctx->pc = 0x205580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205588u);
        ctx->pc = 0x205584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205580u;
        // 0x205584: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205580u, 0x205588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205588u;
label_205588:
    // 0x205588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20558c:
    // 0x20558c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_205590:
    if (ctx->pc == 0x205590u) {
        ctx->pc = 0x205590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20558Cu;
        // 0x205590: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205594u;
        goto label_205594;
    }
    ctx->pc = 0x20558Cu;
    {
        const bool branch_taken_0x20558c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20558Cu;
        // 0x205590: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20558c) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x205594u;
label_205594:
    // 0x205594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205598:
    // 0x205598: 0xc081230  jal         func_2048C0
label_20559c:
    if (ctx->pc == 0x20559Cu) {
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055A0u;
        goto label_2055a0;
    }
    ctx->pc = 0x205598u;
    SET_GPR_U32(ctx, 31, 0x2055A0u);
    ctx->pc = 0x20559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205598u;
    // 0x20559c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2048C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2048C0u, 0x205598u, 0x2055A0u)) {
        return;
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2055a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2055a4:
    // 0x2055a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2055a8:
    // 0x2055a8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2055a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2055ac:
    // 0x2055ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2055b0:
    // 0x2055b0: 0xc0808b8  jal         func_2022E0
label_2055b4:
    if (ctx->pc == 0x2055B4u) {
        ctx->pc = 0x2055B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B0u;
        // 0x2055b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055B8u;
        goto label_2055b8;
    }
    ctx->pc = 0x2055B0u;
    SET_GPR_U32(ctx, 31, 0x2055B8u);
    ctx->pc = 0x2055B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055B0u;
    // 0x2055b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2055B0u, 0x2055B8u)) {
        return;
    }
    ctx->pc = 0x2055B8u;
label_2055b8:
    // 0x2055b8: 0xc0808b8  jal         func_2022E0
label_2055bc:
    if (ctx->pc == 0x2055BCu) {
        ctx->pc = 0x2055BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B8u;
        // 0x2055bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055C0u;
        goto label_2055c0;
    }
    ctx->pc = 0x2055B8u;
    SET_GPR_U32(ctx, 31, 0x2055C0u);
    ctx->pc = 0x2055BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055B8u;
    // 0x2055bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2055B8u, 0x2055C0u)) {
        return;
    }
    ctx->pc = 0x2055C0u;
label_2055c0:
    // 0x2055c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2055c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2055c4:
    // 0x2055c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2055c8:
    // 0x2055c8: 0x3e00008  jr          $ra
label_2055cc:
    if (ctx->pc == 0x2055CCu) {
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055D0u;
        goto label_fallthrough_0x2055c8;
    }
    ctx->pc = 0x2055C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2055C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2055c8:
    ctx->pc = 0x2055D0u;
}
