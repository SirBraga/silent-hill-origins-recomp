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

// Function: sub_00127638
// Address: 0x127638 - 0x127718
void sub_00127638_0x127638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127638_0x127638");
#endif

    switch (ctx->pc) {
        case 0x127638u: goto label_127638;
        case 0x12763cu: goto label_12763c;
        case 0x127640u: goto label_127640;
        case 0x127644u: goto label_127644;
        case 0x127648u: goto label_127648;
        case 0x12764cu: goto label_12764c;
        case 0x127650u: goto label_127650;
        case 0x127654u: goto label_127654;
        case 0x127658u: goto label_127658;
        case 0x12765cu: goto label_12765c;
        case 0x127660u: goto label_127660;
        case 0x127664u: goto label_127664;
        case 0x127668u: goto label_127668;
        case 0x12766cu: goto label_12766c;
        case 0x127670u: goto label_127670;
        case 0x127674u: goto label_127674;
        case 0x127678u: goto label_127678;
        case 0x12767cu: goto label_12767c;
        case 0x127680u: goto label_127680;
        case 0x127684u: goto label_127684;
        case 0x127688u: goto label_127688;
        case 0x12768cu: goto label_12768c;
        case 0x127690u: goto label_127690;
        case 0x127694u: goto label_127694;
        case 0x127698u: goto label_127698;
        case 0x12769cu: goto label_12769c;
        case 0x1276a0u: goto label_1276a0;
        case 0x1276a4u: goto label_1276a4;
        case 0x1276a8u: goto label_1276a8;
        case 0x1276acu: goto label_1276ac;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276b4u: goto label_1276b4;
        case 0x1276b8u: goto label_1276b8;
        case 0x1276bcu: goto label_1276bc;
        case 0x1276c0u: goto label_1276c0;
        case 0x1276c4u: goto label_1276c4;
        case 0x1276c8u: goto label_1276c8;
        case 0x1276ccu: goto label_1276cc;
        case 0x1276d0u: goto label_1276d0;
        case 0x1276d4u: goto label_1276d4;
        case 0x1276d8u: goto label_1276d8;
        case 0x1276dcu: goto label_1276dc;
        case 0x1276e0u: goto label_1276e0;
        case 0x1276e4u: goto label_1276e4;
        case 0x1276e8u: goto label_1276e8;
        case 0x1276ecu: goto label_1276ec;
        case 0x1276f0u: goto label_1276f0;
        case 0x1276f4u: goto label_1276f4;
        case 0x1276f8u: goto label_1276f8;
        case 0x1276fcu: goto label_1276fc;
        case 0x127700u: goto label_127700;
        case 0x127704u: goto label_127704;
        case 0x127708u: goto label_127708;
        case 0x12770cu: goto label_12770c;
        case 0x127710u: goto label_127710;
        case 0x127714u: goto label_127714;
        default: break;
    }

    ctx->pc = 0x127638u;

label_127638:
    // 0x127638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12763c:
    // 0x12763c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127640:
    // 0x127640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x127640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_127644:
    // 0x127644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127648:
    // 0x127648: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x127648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_12764c:
    // 0x12764c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_127650:
    // 0x127650: 0xc068218  jal         func_1A0860
label_127654:
    if (ctx->pc == 0x127654u) {
        ctx->pc = 0x127654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127650u;
        // 0x127654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127658u;
        goto label_127658;
    }
    ctx->pc = 0x127650u;
    SET_GPR_U32(ctx, 31, 0x127658u);
    ctx->pc = 0x127654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127650u;
    // 0x127654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x127650u, 0x127658u)) {
        return;
    }
    ctx->pc = 0x127658u;
label_127658:
    // 0x127658: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x127658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12765c:
    // 0x12765c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12765cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127660:
    // 0x127660: 0xc065c58  jal         func_197160
label_127664:
    if (ctx->pc == 0x127664u) {
        ctx->pc = 0x127664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127660u;
        // 0x127664: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127668u;
        goto label_127668;
    }
    ctx->pc = 0x127660u;
    SET_GPR_U32(ctx, 31, 0x127668u);
    ctx->pc = 0x127664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127660u;
    // 0x127664: 0x24a5c570  addiu       $a1, $a1, -0x3A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x127660u, 0x127668u)) {
        return;
    }
    ctx->pc = 0x127668u;
label_127668:
    // 0x127668: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_12766c:
    if (ctx->pc == 0x12766Cu) {
        ctx->pc = 0x12766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127668u;
        // 0x12766c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127670u;
        goto label_127670;
    }
    ctx->pc = 0x127668u;
    {
        const bool branch_taken_0x127668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127668u;
        // 0x12766c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127668) {
            ctx->pc = 0x127704u;
            goto label_127704;
        }
    }
    ctx->pc = 0x127670u;
label_127670:
    // 0x127670: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_127674:
    // 0x127674: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127678:
    // 0x127678: 0xc049c64  jal         func_127190
label_12767c:
    if (ctx->pc == 0x12767Cu) {
        ctx->pc = 0x12767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127678u;
        // 0x12767c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127680u;
        goto label_127680;
    }
    ctx->pc = 0x127678u;
    SET_GPR_U32(ctx, 31, 0x127680u);
    ctx->pc = 0x12767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127678u;
    // 0x12767c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127190u, 0x127678u, 0x127680u)) {
        return;
    }
    ctx->pc = 0x127680u;
label_127680:
    // 0x127680: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_127684:
    if (ctx->pc == 0x127684u) {
        ctx->pc = 0x127684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127680u;
        // 0x127684: 0xae220bc8  sw          $v0, 0xBC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127688u;
        goto label_127688;
    }
    ctx->pc = 0x127680u;
    {
        const bool branch_taken_0x127680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127680u;
        // 0x127684: 0xae220bc8  sw          $v0, 0xBC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127680) {
            ctx->pc = 0x1276F0u;
            goto label_1276f0;
        }
    }
    ctx->pc = 0x127688u;
label_127688:
    // 0x127688: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12768c:
    // 0x12768c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127690:
    // 0x127690: 0xc067fca  jal         func_19FF28
label_127694:
    if (ctx->pc == 0x127694u) {
        ctx->pc = 0x127694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127690u;
        // 0x127694: 0x26250d7c  addiu       $a1, $s1, 0xD7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127698u;
        goto label_127698;
    }
    ctx->pc = 0x127690u;
    SET_GPR_U32(ctx, 31, 0x127698u);
    ctx->pc = 0x127694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127690u;
    // 0x127694: 0x26250d7c  addiu       $a1, $s1, 0xD7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x127690u, 0x127698u)) {
        return;
    }
    ctx->pc = 0x127698u;
label_127698:
    // 0x127698: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x127698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_12769c:
    // 0x12769c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1276a0:
    // 0x1276a0: 0x26104238  addiu       $s0, $s0, 0x4238
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16952));
label_1276a4:
    // 0x1276a4: 0xc042260  jal         func_108980
label_1276a8:
    if (ctx->pc == 0x1276A8u) {
        ctx->pc = 0x1276A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276A4u;
        // 0x1276a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276ACu;
        goto label_1276ac;
    }
    ctx->pc = 0x1276A4u;
    SET_GPR_U32(ctx, 31, 0x1276ACu);
    ctx->pc = 0x1276A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276A4u;
    // 0x1276a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108980u, 0x1276A4u, 0x1276ACu)) {
        return;
    }
    ctx->pc = 0x1276ACu;
label_1276ac:
    // 0x1276ac: 0x8e250bc8  lw          $a1, 0xBC8($s1)
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_1276b0:
    // 0x1276b0: 0xc042254  jal         func_108950
label_1276b4:
    if (ctx->pc == 0x1276B4u) {
        ctx->pc = 0x1276B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276B0u;
        // 0x1276b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276B8u;
        goto label_1276b8;
    }
    ctx->pc = 0x1276B0u;
    SET_GPR_U32(ctx, 31, 0x1276B8u);
    ctx->pc = 0x1276B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276B0u;
    // 0x1276b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108950u, 0x1276B0u, 0x1276B8u)) {
        return;
    }
    ctx->pc = 0x1276B8u;
label_1276b8:
    // 0x1276b8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1276bc:
    // 0x1276bc: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1276bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1276c0:
    // 0x1276c0: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1276c4:
    // 0x1276c4: 0x40f809  jalr        $v0
label_1276c8:
    if (ctx->pc == 0x1276C8u) {
        ctx->pc = 0x1276C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276C4u;
        // 0x1276c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276CCu;
        goto label_1276cc;
    }
    ctx->pc = 0x1276C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1276CCu);
        ctx->pc = 0x1276C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276C4u;
        // 0x1276c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1276C4u, 0x1276CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1276CCu;
label_1276cc:
    // 0x1276cc: 0x8e260bc8  lw          $a2, 0xBC8($s1)
    ctx->pc = 0x1276ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_1276d0:
    // 0x1276d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1276d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1276d4:
    // 0x1276d4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1276d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1276d8:
    // 0x1276d8: 0x844400f0  lh          $a0, 0xF0($v0)
    ctx->pc = 0x1276d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
label_1276dc:
    // 0x1276dc: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x1276dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_1276e0:
    // 0x1276e0: 0x60f809  jalr        $v1
label_1276e4:
    if (ctx->pc == 0x1276E4u) {
        ctx->pc = 0x1276E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E0u;
        // 0x1276e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276E8u;
        goto label_1276e8;
    }
    ctx->pc = 0x1276E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1276E8u);
        ctx->pc = 0x1276E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E0u;
        // 0x1276e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1276E0u, 0x1276E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1276E8u;
label_1276e8:
    // 0x1276e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1276ec:
    if (ctx->pc == 0x1276ECu) {
        ctx->pc = 0x1276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E8u;
        // 0x1276ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276F0u;
        goto label_1276f0;
    }
    ctx->pc = 0x1276E8u;
    {
        const bool branch_taken_0x1276e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E8u;
        // 0x1276ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e8) {
            ctx->pc = 0x127704u;
            goto label_127704;
        }
    }
    ctx->pc = 0x1276F0u;
label_1276f0:
    // 0x1276f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1276f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1276f4:
    // 0x1276f4: 0x26250d84  addiu       $a1, $s1, 0xD84
    ctx->pc = 0x1276f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3460));
label_1276f8:
    // 0x1276f8: 0xc067fca  jal         func_19FF28
label_1276fc:
    if (ctx->pc == 0x1276FCu) {
        ctx->pc = 0x1276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F8u;
        // 0x1276fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127700u;
        goto label_127700;
    }
    ctx->pc = 0x1276F8u;
    SET_GPR_U32(ctx, 31, 0x127700u);
    ctx->pc = 0x1276FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276F8u;
    // 0x1276fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1276F8u, 0x127700u)) {
        return;
    }
    ctx->pc = 0x127700u;
label_127700:
    // 0x127700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127704:
    // 0x127704: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x127704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127708:
    // 0x127708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12770c:
    // 0x12770c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12770cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127710:
    // 0x127710: 0x3e00008  jr          $ra
label_127714:
    if (ctx->pc == 0x127714u) {
        ctx->pc = 0x127714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127710u;
        // 0x127714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127718u;
        goto label_fallthrough_0x127710;
    }
    ctx->pc = 0x127710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127710u;
        // 0x127714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127710:
    ctx->pc = 0x127718u;
}
