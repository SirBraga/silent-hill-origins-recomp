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

// Function: sub_002074D0
// Address: 0x2074d0 - 0x2075f0
void sub_002074D0_0x2074d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002074D0_0x2074d0");
#endif

    switch (ctx->pc) {
        case 0x2074d0u: goto label_2074d0;
        case 0x2074d4u: goto label_2074d4;
        case 0x2074d8u: goto label_2074d8;
        case 0x2074dcu: goto label_2074dc;
        case 0x2074e0u: goto label_2074e0;
        case 0x2074e4u: goto label_2074e4;
        case 0x2074e8u: goto label_2074e8;
        case 0x2074ecu: goto label_2074ec;
        case 0x2074f0u: goto label_2074f0;
        case 0x2074f4u: goto label_2074f4;
        case 0x2074f8u: goto label_2074f8;
        case 0x2074fcu: goto label_2074fc;
        case 0x207500u: goto label_207500;
        case 0x207504u: goto label_207504;
        case 0x207508u: goto label_207508;
        case 0x20750cu: goto label_20750c;
        case 0x207510u: goto label_207510;
        case 0x207514u: goto label_207514;
        case 0x207518u: goto label_207518;
        case 0x20751cu: goto label_20751c;
        case 0x207520u: goto label_207520;
        case 0x207524u: goto label_207524;
        case 0x207528u: goto label_207528;
        case 0x20752cu: goto label_20752c;
        case 0x207530u: goto label_207530;
        case 0x207534u: goto label_207534;
        case 0x207538u: goto label_207538;
        case 0x20753cu: goto label_20753c;
        case 0x207540u: goto label_207540;
        case 0x207544u: goto label_207544;
        case 0x207548u: goto label_207548;
        case 0x20754cu: goto label_20754c;
        case 0x207550u: goto label_207550;
        case 0x207554u: goto label_207554;
        case 0x207558u: goto label_207558;
        case 0x20755cu: goto label_20755c;
        case 0x207560u: goto label_207560;
        case 0x207564u: goto label_207564;
        case 0x207568u: goto label_207568;
        case 0x20756cu: goto label_20756c;
        case 0x207570u: goto label_207570;
        case 0x207574u: goto label_207574;
        case 0x207578u: goto label_207578;
        case 0x20757cu: goto label_20757c;
        case 0x207580u: goto label_207580;
        case 0x207584u: goto label_207584;
        case 0x207588u: goto label_207588;
        case 0x20758cu: goto label_20758c;
        case 0x207590u: goto label_207590;
        case 0x207594u: goto label_207594;
        case 0x207598u: goto label_207598;
        case 0x20759cu: goto label_20759c;
        case 0x2075a0u: goto label_2075a0;
        case 0x2075a4u: goto label_2075a4;
        case 0x2075a8u: goto label_2075a8;
        case 0x2075acu: goto label_2075ac;
        case 0x2075b0u: goto label_2075b0;
        case 0x2075b4u: goto label_2075b4;
        case 0x2075b8u: goto label_2075b8;
        case 0x2075bcu: goto label_2075bc;
        case 0x2075c0u: goto label_2075c0;
        case 0x2075c4u: goto label_2075c4;
        case 0x2075c8u: goto label_2075c8;
        case 0x2075ccu: goto label_2075cc;
        case 0x2075d0u: goto label_2075d0;
        case 0x2075d4u: goto label_2075d4;
        case 0x2075d8u: goto label_2075d8;
        case 0x2075dcu: goto label_2075dc;
        case 0x2075e0u: goto label_2075e0;
        case 0x2075e4u: goto label_2075e4;
        case 0x2075e8u: goto label_2075e8;
        case 0x2075ecu: goto label_2075ec;
        default: break;
    }

    ctx->pc = 0x2074d0u;

label_2074d0:
    // 0x2074d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2074d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2074d4:
    // 0x2074d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2074d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2074d8:
    // 0x2074d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2074d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2074dc:
    // 0x2074dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2074dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2074e0:
    // 0x2074e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2074e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2074e4:
    // 0x2074e4: 0x2442ff33  addiu       $v0, $v0, -0xCD
    ctx->pc = 0x2074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967091));
label_2074e8:
    // 0x2074e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2074e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2074ec:
    // 0x2074ec: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2074f0:
    if (ctx->pc == 0x2074F0u) {
        ctx->pc = 0x2074F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074ECu;
        // 0x2074f0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074F4u;
        goto label_2074f4;
    }
    ctx->pc = 0x2074ECu;
    {
        const bool branch_taken_0x2074ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074ec) {
            ctx->pc = 0x2074F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074ECu;
            // 0x2074f0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207544u;
            goto label_207544;
        }
    }
    ctx->pc = 0x2074F4u;
label_2074f4:
    // 0x2074f4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2074f8:
    // 0x2074f8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2074fc:
    if (ctx->pc == 0x2074FCu) {
        ctx->pc = 0x2074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074F8u;
        // 0x2074fc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207500u;
        goto label_207500;
    }
    ctx->pc = 0x2074F8u;
    {
        const bool branch_taken_0x2074f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2074f8) {
            ctx->pc = 0x2074FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074F8u;
            // 0x2074fc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207544u;
            goto label_207544;
        }
    }
    ctx->pc = 0x207500u;
label_207500:
    // 0x207500: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x207500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_207504:
    // 0x207504: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x207504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_207508:
    // 0x207508: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x207508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20750c:
    // 0x20750c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_207510:
    if (ctx->pc == 0x207510u) {
        ctx->pc = 0x207510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20750Cu;
        // 0x207510: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207514u;
        goto label_207514;
    }
    ctx->pc = 0x20750Cu;
    {
        const bool branch_taken_0x20750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20750Cu;
        // 0x207510: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20750c) {
            ctx->pc = 0x20752Cu;
            goto label_20752c;
        }
    }
    ctx->pc = 0x207514u;
label_207514:
    // 0x207514: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207518:
    // 0x207518: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x207518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20751c:
    // 0x20751c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207520:
    // 0x207520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207524:
    // 0x207524: 0x60f809  jalr        $v1
label_207528:
    if (ctx->pc == 0x207528u) {
        ctx->pc = 0x20752Cu;
        goto label_20752c;
    }
    ctx->pc = 0x207524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20752Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207524u, 0x20752Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20752Cu;
label_20752c:
    // 0x20752c: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x20752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_207530:
    // 0x207530: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x207530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_207534:
    // 0x207534: 0x60f809  jalr        $v1
label_207538:
    if (ctx->pc == 0x207538u) {
        ctx->pc = 0x207538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207534u;
        // 0x207538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20753Cu;
        goto label_20753c;
    }
    ctx->pc = 0x207534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20753Cu);
        ctx->pc = 0x207538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207534u;
        // 0x207538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207534u, 0x20753Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20753Cu;
label_20753c:
    // 0x20753c: 0x10000004  b           . + 4 + (0x4 << 2)
label_207540:
    if (ctx->pc == 0x207540u) {
        ctx->pc = 0x207540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20753Cu;
        // 0x207540: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207544u;
        goto label_207544;
    }
    ctx->pc = 0x20753Cu;
    {
        const bool branch_taken_0x20753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20753Cu;
        // 0x207540: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20753c) {
            ctx->pc = 0x207550u;
            goto label_207550;
        }
    }
    ctx->pc = 0x207544u;
label_207544:
    // 0x207544: 0x240200cf  addiu       $v0, $zero, 0xCF
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_207548:
    // 0x207548: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_20754c:
    if (ctx->pc == 0x20754Cu) {
        ctx->pc = 0x20754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207548u;
        // 0x20754c: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207550u;
        goto label_207550;
    }
    ctx->pc = 0x207548u;
    {
        const bool branch_taken_0x207548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207548u;
        // 0x20754c: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207548) {
            ctx->pc = 0x207558u;
            goto label_207558;
        }
    }
    ctx->pc = 0x207550u;
label_207550:
    // 0x207550: 0x10000013  b           . + 4 + (0x13 << 2)
label_207554:
    if (ctx->pc == 0x207554u) {
        ctx->pc = 0x207554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207550u;
        // 0x207554: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207558u;
        goto label_207558;
    }
    ctx->pc = 0x207550u;
    {
        const bool branch_taken_0x207550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207550u;
        // 0x207554: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207550) {
            ctx->pc = 0x2075A0u;
            goto label_2075a0;
        }
    }
    ctx->pc = 0x207558u;
label_207558:
    // 0x207558: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_20755c:
    if (ctx->pc == 0x20755Cu) {
        ctx->pc = 0x20755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207558u;
        // 0x20755c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207560u;
        goto label_207560;
    }
    ctx->pc = 0x207558u;
    {
        const bool branch_taken_0x207558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207558u;
        // 0x20755c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207558) {
            ctx->pc = 0x2075A0u;
            goto label_2075a0;
        }
    }
    ctx->pc = 0x207560u;
label_207560:
    // 0x207560: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207564:
    // 0x207564: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x207564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207568:
    // 0x207568: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20756c:
    // 0x20756c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207570:
    // 0x207570: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_207574:
    // 0x207574: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207578:
    // 0x207578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20757c:
    // 0x20757c: 0x40f809  jalr        $v0
label_207580:
    if (ctx->pc == 0x207580u) {
        ctx->pc = 0x207580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20757Cu;
        // 0x207580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207584u;
        goto label_207584;
    }
    ctx->pc = 0x20757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207584u);
        ctx->pc = 0x207580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20757Cu;
        // 0x207580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20757Cu, 0x207584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207584u;
label_207584:
    // 0x207584: 0x10000007  b           . + 4 + (0x7 << 2)
label_207588:
    if (ctx->pc == 0x207588u) {
        ctx->pc = 0x207588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207584u;
        // 0x207588: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20758Cu;
        goto label_20758c;
    }
    ctx->pc = 0x207584u;
    {
        const bool branch_taken_0x207584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207584u;
        // 0x207588: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207584) {
            ctx->pc = 0x2075A4u;
            goto label_2075a4;
        }
    }
    ctx->pc = 0x20758Cu;
label_20758c:
    // 0x20758c: 0x0  nop
    ctx->pc = 0x20758cu;
    // NOP
label_207590:
    // 0x207590: 0x40f809  jalr        $v0
label_207594:
    if (ctx->pc == 0x207594u) {
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207590u;
        // 0x207594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207598u;
        goto label_207598;
    }
    ctx->pc = 0x207590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207598u);
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207590u;
        // 0x207594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207590u, 0x207598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207598u;
label_207598:
    // 0x207598: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20759c:
    if (ctx->pc == 0x20759Cu) {
        ctx->pc = 0x20759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207598u;
        // 0x20759c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075A0u;
        goto label_2075a0;
    }
    ctx->pc = 0x207598u;
    {
        const bool branch_taken_0x207598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207598u;
        // 0x20759c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207598) {
            ctx->pc = 0x2075CCu;
            goto label_2075cc;
        }
    }
    ctx->pc = 0x2075A0u;
label_2075a0:
    // 0x2075a0: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_2075a4:
    // 0x2075a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2075a8:
    // 0x2075a8: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
label_2075ac:
    if (ctx->pc == 0x2075ACu) {
        ctx->pc = 0x2075ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075A8u;
        // 0x2075ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075B0u;
        goto label_2075b0;
    }
    ctx->pc = 0x2075A8u;
    {
        const bool branch_taken_0x2075a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075a8) {
            ctx->pc = 0x2075ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075A8u;
            // 0x2075ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207590;
        }
    }
    ctx->pc = 0x2075B0u;
label_2075b0:
    // 0x2075b0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2075b4:
    // 0x2075b4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2075b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2075b8:
    // 0x2075b8: 0x40f809  jalr        $v0
label_2075bc:
    if (ctx->pc == 0x2075BCu) {
        ctx->pc = 0x2075BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075B8u;
        // 0x2075bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075C0u;
        goto label_2075c0;
    }
    ctx->pc = 0x2075B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2075C0u);
        ctx->pc = 0x2075BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075B8u;
        // 0x2075bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2075B8u, 0x2075C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2075C0u;
label_2075c0:
    // 0x2075c0: 0xc08701a  jal         func_21C068
label_2075c4:
    if (ctx->pc == 0x2075C4u) {
        ctx->pc = 0x2075C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075C0u;
        // 0x2075c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075C8u;
        goto label_2075c8;
    }
    ctx->pc = 0x2075C0u;
    SET_GPR_U32(ctx, 31, 0x2075C8u);
    ctx->pc = 0x2075C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075C0u;
    // 0x2075c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21C068u, 0x2075C0u, 0x2075C8u)) {
        return;
    }
    ctx->pc = 0x2075C8u;
label_2075c8:
    // 0x2075c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2075cc:
    // 0x2075cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2075ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2075d0:
    // 0x2075d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2075d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2075d4:
    // 0x2075d4: 0x3e00008  jr          $ra
label_2075d8:
    if (ctx->pc == 0x2075D8u) {
        ctx->pc = 0x2075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075D4u;
        // 0x2075d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075DCu;
        goto label_2075dc;
    }
    ctx->pc = 0x2075D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075D4u;
        // 0x2075d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2075D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2075DCu;
label_2075dc:
    // 0x2075dc: 0x0  nop
    ctx->pc = 0x2075dcu;
    // NOP
label_2075e0:
    // 0x2075e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2075e4:
    // 0x2075e4: 0x0  nop
    ctx->pc = 0x2075e4u;
    // NOP
label_2075e8:
    // 0x2075e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2075e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2075ec:
    // 0x2075ec: 0x0  nop
    ctx->pc = 0x2075ecu;
    // NOP
    ctx->pc = 0x2075f0u;
}
