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

// Function: sub_001B7490
// Address: 0x1b7490 - 0x1b75b8
void sub_001B7490_0x1b7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7490_0x1b7490");
#endif

    switch (ctx->pc) {
        case 0x1b7490u: goto label_1b7490;
        case 0x1b7494u: goto label_1b7494;
        case 0x1b7498u: goto label_1b7498;
        case 0x1b749cu: goto label_1b749c;
        case 0x1b74a0u: goto label_1b74a0;
        case 0x1b74a4u: goto label_1b74a4;
        case 0x1b74a8u: goto label_1b74a8;
        case 0x1b74acu: goto label_1b74ac;
        case 0x1b74b0u: goto label_1b74b0;
        case 0x1b74b4u: goto label_1b74b4;
        case 0x1b74b8u: goto label_1b74b8;
        case 0x1b74bcu: goto label_1b74bc;
        case 0x1b74c0u: goto label_1b74c0;
        case 0x1b74c4u: goto label_1b74c4;
        case 0x1b74c8u: goto label_1b74c8;
        case 0x1b74ccu: goto label_1b74cc;
        case 0x1b74d0u: goto label_1b74d0;
        case 0x1b74d4u: goto label_1b74d4;
        case 0x1b74d8u: goto label_1b74d8;
        case 0x1b74dcu: goto label_1b74dc;
        case 0x1b74e0u: goto label_1b74e0;
        case 0x1b74e4u: goto label_1b74e4;
        case 0x1b74e8u: goto label_1b74e8;
        case 0x1b74ecu: goto label_1b74ec;
        case 0x1b74f0u: goto label_1b74f0;
        case 0x1b74f4u: goto label_1b74f4;
        case 0x1b74f8u: goto label_1b74f8;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7500u: goto label_1b7500;
        case 0x1b7504u: goto label_1b7504;
        case 0x1b7508u: goto label_1b7508;
        case 0x1b750cu: goto label_1b750c;
        case 0x1b7510u: goto label_1b7510;
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b751cu: goto label_1b751c;
        case 0x1b7520u: goto label_1b7520;
        case 0x1b7524u: goto label_1b7524;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7530u: goto label_1b7530;
        case 0x1b7534u: goto label_1b7534;
        case 0x1b7538u: goto label_1b7538;
        case 0x1b753cu: goto label_1b753c;
        case 0x1b7540u: goto label_1b7540;
        case 0x1b7544u: goto label_1b7544;
        case 0x1b7548u: goto label_1b7548;
        case 0x1b754cu: goto label_1b754c;
        case 0x1b7550u: goto label_1b7550;
        case 0x1b7554u: goto label_1b7554;
        case 0x1b7558u: goto label_1b7558;
        case 0x1b755cu: goto label_1b755c;
        case 0x1b7560u: goto label_1b7560;
        case 0x1b7564u: goto label_1b7564;
        case 0x1b7568u: goto label_1b7568;
        case 0x1b756cu: goto label_1b756c;
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7574u: goto label_1b7574;
        case 0x1b7578u: goto label_1b7578;
        case 0x1b757cu: goto label_1b757c;
        case 0x1b7580u: goto label_1b7580;
        case 0x1b7584u: goto label_1b7584;
        case 0x1b7588u: goto label_1b7588;
        case 0x1b758cu: goto label_1b758c;
        case 0x1b7590u: goto label_1b7590;
        case 0x1b7594u: goto label_1b7594;
        case 0x1b7598u: goto label_1b7598;
        case 0x1b759cu: goto label_1b759c;
        case 0x1b75a0u: goto label_1b75a0;
        case 0x1b75a4u: goto label_1b75a4;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75b0u: goto label_1b75b0;
        case 0x1b75b4u: goto label_1b75b4;
        default: break;
    }

    ctx->pc = 0x1b7490u;

label_1b7490:
    // 0x1b7490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b7494:
    // 0x1b7494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b7498:
    // 0x1b7498: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b749c:
    // 0x1b749c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b749cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b74a0:
    // 0x1b74a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b74a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b74a4:
    // 0x1b74a4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1b74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_1b74a8:
    // 0x1b74a8: 0x8e2402b4  lw          $a0, 0x2B4($s1)
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_1b74ac:
    // 0x1b74ac: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_1b74b0:
    if (ctx->pc == 0x1B74B0u) {
        ctx->pc = 0x1B74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74ACu;
        // 0x1b74b0: 0x8e2402dc  lw          $a0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74B4u;
        goto label_1b74b4;
    }
    ctx->pc = 0x1B74ACu;
    {
        const bool branch_taken_0x1b74ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b74ac) {
            ctx->pc = 0x1B74B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74ACu;
            // 0x1b74b0: 0x8e2402dc  lw          $a0, 0x2DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B74E4u;
            goto label_1b74e4;
        }
    }
    ctx->pc = 0x1B74B4u;
label_1b74b4:
    // 0x1b74b4: 0xc06d326  jal         func_1B4C98
label_1b74b8:
    if (ctx->pc == 0x1B74B8u) {
        ctx->pc = 0x1B74BCu;
        goto label_1b74bc;
    }
    ctx->pc = 0x1B74B4u;
    SET_GPR_U32(ctx, 31, 0x1B74BCu);
    ctx->pc = 0x1B4C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4C98u, 0x1B74B4u, 0x1B74BCu)) {
        return;
    }
    ctx->pc = 0x1B74BCu;
label_1b74bc:
    // 0x1b74bc: 0x8e2602b4  lw          $a2, 0x2B4($s1)
    ctx->pc = 0x1b74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_1b74c0:
    // 0x1b74c0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b74c4:
    if (ctx->pc == 0x1B74C4u) {
        ctx->pc = 0x1B74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74C0u;
        // 0x1b74c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74C8u;
        goto label_1b74c8;
    }
    ctx->pc = 0x1B74C0u;
    {
        const bool branch_taken_0x1b74c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74C0u;
        // 0x1b74c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74c0) {
            ctx->pc = 0x1B74DCu;
            goto label_1b74dc;
        }
    }
    ctx->pc = 0x1B74C8u;
label_1b74c8:
    // 0x1b74c8: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x1b74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_1b74cc:
    // 0x1b74cc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b74ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1b74d0:
    // 0x1b74d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b74d4:
    // 0x1b74d4: 0x60f809  jalr        $v1
label_1b74d8:
    if (ctx->pc == 0x1B74D8u) {
        ctx->pc = 0x1B74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74D4u;
        // 0x1b74d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74DCu;
        goto label_1b74dc;
    }
    ctx->pc = 0x1B74D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B74DCu);
        ctx->pc = 0x1B74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74D4u;
        // 0x1b74d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B74D4u, 0x1B74DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B74DCu;
label_1b74dc:
    // 0x1b74dc: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x1b74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
label_1b74e0:
    // 0x1b74e0: 0x8e2402dc  lw          $a0, 0x2DC($s1)
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_1b74e4:
    // 0x1b74e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b74e8:
    if (ctx->pc == 0x1B74E8u) {
        ctx->pc = 0x1B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E4u;
        // 0x1b74e8: 0x26300270  addiu       $s0, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74ECu;
        goto label_1b74ec;
    }
    ctx->pc = 0x1B74E4u;
    {
        const bool branch_taken_0x1b74e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E4u;
        // 0x1b74e8: 0x26300270  addiu       $s0, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74e4) {
            ctx->pc = 0x1B74F8u;
            goto label_1b74f8;
        }
    }
    ctx->pc = 0x1B74ECu;
label_1b74ec:
    // 0x1b74ec: 0xc08a0e2  jal         func_228388
label_1b74f0:
    if (ctx->pc == 0x1B74F0u) {
        ctx->pc = 0x1B74F4u;
        goto label_1b74f4;
    }
    ctx->pc = 0x1B74ECu;
    SET_GPR_U32(ctx, 31, 0x1B74F4u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1B74ECu, 0x1B74F4u)) {
        return;
    }
    ctx->pc = 0x1B74F4u;
label_1b74f4:
    // 0x1b74f4: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x1b74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_1b74f8:
    // 0x1b74f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b74fc:
    // 0x1b74fc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1b7500:
    if (ctx->pc == 0x1B7500u) {
        ctx->pc = 0x1B7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74FCu;
        // 0x1b7500: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7504u;
        goto label_1b7504;
    }
    ctx->pc = 0x1B74FCu;
    {
        const bool branch_taken_0x1b74fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b74fc) {
            ctx->pc = 0x1B7500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74FCu;
            // 0x1b7500: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B755Cu;
            goto label_1b755c;
        }
    }
    ctx->pc = 0x1B7504u;
label_1b7504:
    // 0x1b7504: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b7504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b7508:
    // 0x1b7508: 0x0  nop
    ctx->pc = 0x1b7508u;
    // NOP
label_1b750c:
    // 0x1b750c: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
label_1b7510:
    if (ctx->pc == 0x1B7510u) {
        ctx->pc = 0x1B7514u;
        goto label_1b7514;
    }
    ctx->pc = 0x1B750Cu;
    {
        const bool branch_taken_0x1b750c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b750c) {
            ctx->pc = 0x1B74FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b74fc;
        }
    }
    ctx->pc = 0x1B7514u;
label_1b7514:
    // 0x1b7514: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b7518:
    // 0x1b7518: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b751c:
    if (ctx->pc == 0x1B751Cu) {
        ctx->pc = 0x1B751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7518u;
        // 0x1b751c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7520u;
        goto label_1b7520;
    }
    ctx->pc = 0x1B7518u;
    {
        const bool branch_taken_0x1b7518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7518u;
        // 0x1b751c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7518) {
            ctx->pc = 0x1B7528u;
            goto label_1b7528;
        }
    }
    ctx->pc = 0x1B7520u;
label_1b7520:
    // 0x1b7520: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b7524:
    if (ctx->pc == 0x1B7524u) {
        ctx->pc = 0x1B7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7520u;
        // 0x1b7524: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7528u;
        goto label_1b7528;
    }
    ctx->pc = 0x1B7520u;
    {
        const bool branch_taken_0x1b7520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7520u;
        // 0x1b7524: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7520) {
            ctx->pc = 0x1B752Cu;
            goto label_1b752c;
        }
    }
    ctx->pc = 0x1B7528u;
label_1b7528:
    // 0x1b7528: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b7528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b752c:
    // 0x1b752c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b7530:
    // 0x1b7530: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b7534:
    if (ctx->pc == 0x1B7534u) {
        ctx->pc = 0x1B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7530u;
        // 0x1b7534: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7538u;
        goto label_1b7538;
    }
    ctx->pc = 0x1B7530u;
    {
        const bool branch_taken_0x1b7530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7530u;
        // 0x1b7534: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7530) {
            ctx->pc = 0x1B7540u;
            goto label_1b7540;
        }
    }
    ctx->pc = 0x1B7538u;
label_1b7538:
    // 0x1b7538: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b753c:
    if (ctx->pc == 0x1B753Cu) {
        ctx->pc = 0x1B753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7538u;
        // 0x1b753c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7540u;
        goto label_1b7540;
    }
    ctx->pc = 0x1B7538u;
    {
        const bool branch_taken_0x1b7538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7538u;
        // 0x1b753c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7538) {
            ctx->pc = 0x1B7544u;
            goto label_1b7544;
        }
    }
    ctx->pc = 0x1B7540u;
label_1b7540:
    // 0x1b7540: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b7540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b7544:
    // 0x1b7544: 0xc0808b8  jal         func_2022E0
label_1b7548:
    if (ctx->pc == 0x1B7548u) {
        ctx->pc = 0x1B754Cu;
        goto label_1b754c;
    }
    ctx->pc = 0x1B7544u;
    SET_GPR_U32(ctx, 31, 0x1B754Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B7544u, 0x1B754Cu)) {
        return;
    }
    ctx->pc = 0x1B754Cu;
label_1b754c:
    // 0x1b754c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7550:
    // 0x1b7550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b7554:
    // 0x1b7554: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1b7558:
    if (ctx->pc == 0x1B7558u) {
        ctx->pc = 0x1B7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7554u;
        // 0x1b7558: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B755Cu;
        goto label_1b755c;
    }
    ctx->pc = 0x1B7554u;
    {
        const bool branch_taken_0x1b7554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7554u;
        // 0x1b7558: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7554) {
            ctx->pc = 0x1B74F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b74f8;
        }
    }
    ctx->pc = 0x1B755Cu;
label_1b755c:
    // 0x1b755c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b7560:
    if (ctx->pc == 0x1B7560u) {
        ctx->pc = 0x1B7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B755Cu;
        // 0x1b7560: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7564u;
        goto label_1b7564;
    }
    ctx->pc = 0x1B755Cu;
    {
        const bool branch_taken_0x1b755c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B755Cu;
        // 0x1b7560: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b755c) {
            ctx->pc = 0x1B7574u;
            goto label_1b7574;
        }
    }
    ctx->pc = 0x1B7564u;
label_1b7564:
    // 0x1b7564: 0x8e2502ac  lw          $a1, 0x2AC($s1)
    ctx->pc = 0x1b7564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
label_1b7568:
    // 0x1b7568: 0xc0640c6  jal         func_190318
label_1b756c:
    if (ctx->pc == 0x1B756Cu) {
        ctx->pc = 0x1B756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7568u;
        // 0x1b756c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7570u;
        goto label_1b7570;
    }
    ctx->pc = 0x1B7568u;
    SET_GPR_U32(ctx, 31, 0x1B7570u);
    ctx->pc = 0x1B756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7568u;
    // 0x1b756c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x1B7568u, 0x1B7570u)) {
        return;
    }
    ctx->pc = 0x1B7570u;
label_1b7570:
    // 0x1b7570: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x1b7570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
label_1b7574:
    // 0x1b7574: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1b7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1b7578:
    // 0x1b7578: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b757c:
    if (ctx->pc == 0x1B757Cu) {
        ctx->pc = 0x1B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7578u;
        // 0x1b757c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7580u;
        goto label_1b7580;
    }
    ctx->pc = 0x1B7578u;
    {
        const bool branch_taken_0x1b7578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7578u;
        // 0x1b757c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7578) {
            ctx->pc = 0x1B759Cu;
            goto label_1b759c;
        }
    }
    ctx->pc = 0x1B7580u;
label_1b7580:
    // 0x1b7580: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1b7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1b7584:
    // 0x1b7584: 0xc62002d4  lwc1        $f0, 0x2D4($s1)
    ctx->pc = 0x1b7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7588:
    // 0x1b7588: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b758c:
    // 0x1b758c: 0xc62102d8  lwc1        $f1, 0x2D8($s1)
    ctx->pc = 0x1b758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7590:
    // 0x1b7590: 0x8e2202a4  lw          $v0, 0x2A4($s1)
    ctx->pc = 0x1b7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1b7594:
    // 0x1b7594: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b7598:
    // 0x1b7598: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b7598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b759c:
    // 0x1b759c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b759cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b75a0:
    // 0x1b75a0: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1b75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_1b75a4:
    // 0x1b75a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b75a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b75a8:
    // 0x1b75a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b75a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b75ac:
    // 0x1b75ac: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b75acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1b75b0:
    // 0x1b75b0: 0x3e00008  jr          $ra
label_1b75b4:
    if (ctx->pc == 0x1B75B4u) {
        ctx->pc = 0x1B75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75B0u;
        // 0x1b75b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75B8u;
        goto label_fallthrough_0x1b75b0;
    }
    ctx->pc = 0x1B75B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75B0u;
        // 0x1b75b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b75b0:
    ctx->pc = 0x1B75B8u;
}
