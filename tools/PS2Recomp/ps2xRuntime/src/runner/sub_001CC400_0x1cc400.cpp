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

// Function: sub_001CC400
// Address: 0x1cc400 - 0x1cc4b8
void sub_001CC400_0x1cc400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC400_0x1cc400");
#endif

    switch (ctx->pc) {
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        default: break;
    }

    ctx->pc = 0x1cc400u;

label_1cc400:
    // 0x1cc400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cc404:
    // 0x1cc404: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cc404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cc408:
    // 0x1cc408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc40c:
    // 0x1cc40c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc410:
    // 0x1cc410: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1cc410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1cc414:
    // 0x1cc414: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1cc418:
    // 0x1cc418: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cc41c:
    if (ctx->pc == 0x1CC41Cu) {
        ctx->pc = 0x1CC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC418u;
        // 0x1cc41c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC420u;
        goto label_1cc420;
    }
    ctx->pc = 0x1CC418u;
    {
        const bool branch_taken_0x1cc418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC418u;
        // 0x1cc41c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc418) {
            ctx->pc = 0x1CC43Cu;
            goto label_1cc43c;
        }
    }
    ctx->pc = 0x1CC420u;
label_1cc420:
    // 0x1cc420: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cc424:
    // 0x1cc424: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cc424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cc428:
    // 0x1cc428: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cc428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cc42c:
    // 0x1cc42c: 0x60f809  jalr        $v1
label_1cc430:
    if (ctx->pc == 0x1CC430u) {
        ctx->pc = 0x1CC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42Cu;
        // 0x1cc430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC434u;
        goto label_1cc434;
    }
    ctx->pc = 0x1CC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC434u);
        ctx->pc = 0x1CC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42Cu;
        // 0x1cc430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC42Cu, 0x1CC434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC434u;
label_1cc434:
    // 0x1cc434: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cc438:
    if (ctx->pc == 0x1CC438u) {
        ctx->pc = 0x1CC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC434u;
        // 0x1cc438: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC43Cu;
        goto label_1cc43c;
    }
    ctx->pc = 0x1CC434u;
    {
        const bool branch_taken_0x1cc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC434u;
        // 0x1cc438: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc434) {
            ctx->pc = 0x1CC454u;
            goto label_1cc454;
        }
    }
    ctx->pc = 0x1CC43Cu;
label_1cc43c:
    // 0x1cc43c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cc440:
    // 0x1cc440: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1cc444:
    // 0x1cc444: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1cc444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1cc448:
    // 0x1cc448: 0x60f809  jalr        $v1
label_1cc44c:
    if (ctx->pc == 0x1CC44Cu) {
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC450u;
        goto label_1cc450;
    }
    ctx->pc = 0x1CC448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC450u);
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC448u, 0x1CC450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC450u;
label_1cc450:
    // 0x1cc450: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cc450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc454:
    // 0x1cc454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc458:
    // 0x1cc458: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cc458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cc45c:
    // 0x1cc45c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cc460:
    // 0x1cc460: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cc460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cc464:
    // 0x1cc464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cc468:
    // 0x1cc468: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cc468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cc46c:
    // 0x1cc46c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cc470:
    if (ctx->pc == 0x1CC470u) {
        ctx->pc = 0x1CC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC46Cu;
        // 0x1cc470: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC474u;
        goto label_1cc474;
    }
    ctx->pc = 0x1CC46Cu;
    {
        const bool branch_taken_0x1cc46c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC46Cu;
        // 0x1cc470: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc46c) {
            ctx->pc = 0x1CC458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc458;
        }
    }
    ctx->pc = 0x1CC474u;
label_1cc474:
    // 0x1cc474: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cc474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cc478:
    // 0x1cc478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc47c:
    // 0x1cc47c: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1cc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1cc480:
    // 0x1cc480: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cc484:
    // 0x1cc484: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1cc484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1cc488:
    // 0x1cc488: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cc488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cc48c:
    // 0x1cc48c: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1cc48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1cc490:
    // 0x1cc490: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1cc494:
    // 0x1cc494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1cc498:
    if (ctx->pc == 0x1CC498u) {
        ctx->pc = 0x1CC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC494u;
        // 0x1cc498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC49Cu;
        goto label_1cc49c;
    }
    ctx->pc = 0x1CC494u;
    {
        const bool branch_taken_0x1cc494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc494) {
            ctx->pc = 0x1CC498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC494u;
            // 0x1cc498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC4ACu;
            goto label_1cc4ac;
        }
    }
    ctx->pc = 0x1CC49Cu;
label_1cc49c:
    // 0x1cc49c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1cc49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cc4a0:
    // 0x1cc4a0: 0xc05d3fc  jal         func_174FF0
label_1cc4a4:
    if (ctx->pc == 0x1CC4A4u) {
        ctx->pc = 0x1CC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4A0u;
        // 0x1cc4a4: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4A8u;
        goto label_1cc4a8;
    }
    ctx->pc = 0x1CC4A0u;
    SET_GPR_U32(ctx, 31, 0x1CC4A8u);
    ctx->pc = 0x1CC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4A0u;
    // 0x1cc4a4: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174FF0u, 0x1CC4A0u, 0x1CC4A8u)) {
        return;
    }
    ctx->pc = 0x1CC4A8u;
label_1cc4a8:
    // 0x1cc4a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cc4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc4ac:
    // 0x1cc4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc4b0:
    // 0x1cc4b0: 0x3e00008  jr          $ra
label_1cc4b4:
    if (ctx->pc == 0x1CC4B4u) {
        ctx->pc = 0x1CC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B0u;
        // 0x1cc4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4B8u;
        goto label_fallthrough_0x1cc4b0;
    }
    ctx->pc = 0x1CC4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B0u;
        // 0x1cc4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc4b0:
    ctx->pc = 0x1CC4B8u;
}
