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

// Function: sub_0013B438
// Address: 0x13b438 - 0x13b510
void sub_0013B438_0x13b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B438_0x13b438");
#endif

    switch (ctx->pc) {
        case 0x13b438u: goto label_13b438;
        case 0x13b43cu: goto label_13b43c;
        case 0x13b440u: goto label_13b440;
        case 0x13b444u: goto label_13b444;
        case 0x13b448u: goto label_13b448;
        case 0x13b44cu: goto label_13b44c;
        case 0x13b450u: goto label_13b450;
        case 0x13b454u: goto label_13b454;
        case 0x13b458u: goto label_13b458;
        case 0x13b45cu: goto label_13b45c;
        case 0x13b460u: goto label_13b460;
        case 0x13b464u: goto label_13b464;
        case 0x13b468u: goto label_13b468;
        case 0x13b46cu: goto label_13b46c;
        case 0x13b470u: goto label_13b470;
        case 0x13b474u: goto label_13b474;
        case 0x13b478u: goto label_13b478;
        case 0x13b47cu: goto label_13b47c;
        case 0x13b480u: goto label_13b480;
        case 0x13b484u: goto label_13b484;
        case 0x13b488u: goto label_13b488;
        case 0x13b48cu: goto label_13b48c;
        case 0x13b490u: goto label_13b490;
        case 0x13b494u: goto label_13b494;
        case 0x13b498u: goto label_13b498;
        case 0x13b49cu: goto label_13b49c;
        case 0x13b4a0u: goto label_13b4a0;
        case 0x13b4a4u: goto label_13b4a4;
        case 0x13b4a8u: goto label_13b4a8;
        case 0x13b4acu: goto label_13b4ac;
        case 0x13b4b0u: goto label_13b4b0;
        case 0x13b4b4u: goto label_13b4b4;
        case 0x13b4b8u: goto label_13b4b8;
        case 0x13b4bcu: goto label_13b4bc;
        case 0x13b4c0u: goto label_13b4c0;
        case 0x13b4c4u: goto label_13b4c4;
        case 0x13b4c8u: goto label_13b4c8;
        case 0x13b4ccu: goto label_13b4cc;
        case 0x13b4d0u: goto label_13b4d0;
        case 0x13b4d4u: goto label_13b4d4;
        case 0x13b4d8u: goto label_13b4d8;
        case 0x13b4dcu: goto label_13b4dc;
        case 0x13b4e0u: goto label_13b4e0;
        case 0x13b4e4u: goto label_13b4e4;
        case 0x13b4e8u: goto label_13b4e8;
        case 0x13b4ecu: goto label_13b4ec;
        case 0x13b4f0u: goto label_13b4f0;
        case 0x13b4f4u: goto label_13b4f4;
        case 0x13b4f8u: goto label_13b4f8;
        case 0x13b4fcu: goto label_13b4fc;
        case 0x13b500u: goto label_13b500;
        case 0x13b504u: goto label_13b504;
        case 0x13b508u: goto label_13b508;
        case 0x13b50cu: goto label_13b50c;
        default: break;
    }

    ctx->pc = 0x13b438u;

label_13b438:
    // 0x13b438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13b43c:
    // 0x13b43c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_13b440:
    // 0x13b440: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_13b444:
    // 0x13b444: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13b448:
    // 0x13b448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13b44c:
    // 0x13b44c: 0xc04efda  jal         func_13BF68
label_13b450:
    if (ctx->pc == 0x13B450u) {
        ctx->pc = 0x13B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B44Cu;
        // 0x13b450: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B454u;
        goto label_13b454;
    }
    ctx->pc = 0x13B44Cu;
    SET_GPR_U32(ctx, 31, 0x13B454u);
    ctx->pc = 0x13B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B44Cu;
    // 0x13b450: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x13B44Cu, 0x13B454u)) {
        return;
    }
    ctx->pc = 0x13B454u;
label_13b454:
    // 0x13b454: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x13b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_13b458:
    // 0x13b458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b45c:
    // 0x13b45c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x13b45cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_13b460:
    // 0x13b460: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x13b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_13b464:
    // 0x13b464: 0x60f809  jalr        $v1
label_13b468:
    if (ctx->pc == 0x13B468u) {
        ctx->pc = 0x13B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B464u;
        // 0x13b468: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B46Cu;
        goto label_13b46c;
    }
    ctx->pc = 0x13B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13B46Cu);
        ctx->pc = 0x13B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B464u;
        // 0x13b468: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B464u, 0x13B46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B46Cu;
label_13b46c:
    // 0x13b46c: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x13b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_13b470:
    // 0x13b470: 0xc041c9c  jal         func_107270
label_13b474:
    if (ctx->pc == 0x13B474u) {
        ctx->pc = 0x13B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B470u;
        // 0x13b474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B478u;
        goto label_13b478;
    }
    ctx->pc = 0x13B470u;
    SET_GPR_U32(ctx, 31, 0x13B478u);
    ctx->pc = 0x13B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B470u;
    // 0x13b474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107270u, 0x13B470u, 0x13B478u)) {
        return;
    }
    ctx->pc = 0x13B478u;
label_13b478:
    // 0x13b478: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13b47c:
    // 0x13b47c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b480:
    // 0x13b480: 0x8c4647b8  lw          $a2, 0x47B8($v0)
    ctx->pc = 0x13b480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18360)));
label_13b484:
    // 0x13b484: 0xc07f1c0  jal         func_1FC700
label_13b488:
    if (ctx->pc == 0x13B488u) {
        ctx->pc = 0x13B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B484u;
        // 0x13b488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B48Cu;
        goto label_13b48c;
    }
    ctx->pc = 0x13B484u;
    SET_GPR_U32(ctx, 31, 0x13B48Cu);
    ctx->pc = 0x13B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B484u;
    // 0x13b488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13B484u, 0x13B48Cu)) {
        return;
    }
    ctx->pc = 0x13B48Cu;
label_13b48c:
    // 0x13b48c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b490:
    // 0x13b490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13b494:
    // 0x13b494: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_13b498:
    if (ctx->pc == 0x13B498u) {
        ctx->pc = 0x13B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B494u;
        // 0x13b498: 0x3c100014  lui         $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B49Cu;
        goto label_13b49c;
    }
    ctx->pc = 0x13B494u;
    {
        const bool branch_taken_0x13b494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B494u;
        // 0x13b498: 0x3c100014  lui         $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b494) {
            ctx->pc = 0x13B4FCu;
            goto label_13b4fc;
        }
    }
    ctx->pc = 0x13B49Cu;
label_13b49c:
    // 0x13b49c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b4a0:
    // 0x13b4a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13b4a4:
    // 0x13b4a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_13b4a8:
    if (ctx->pc == 0x13B4A8u) {
        ctx->pc = 0x13B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4A4u;
        // 0x13b4a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4ACu;
        goto label_13b4ac;
    }
    ctx->pc = 0x13B4A4u;
    {
        const bool branch_taken_0x13b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4A4u;
        // 0x13b4a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4a4) {
            ctx->pc = 0x13B4D8u;
            goto label_13b4d8;
        }
    }
    ctx->pc = 0x13B4ACu;
label_13b4ac:
    // 0x13b4ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_13b4b0:
    // 0x13b4b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13b4b4:
    // 0x13b4b4: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x13b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_13b4b8:
    // 0x13b4b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_13b4bc:
    if (ctx->pc == 0x13B4BCu) {
        ctx->pc = 0x13B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4B8u;
        // 0x13b4bc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4C0u;
        goto label_13b4c0;
    }
    ctx->pc = 0x13B4B8u;
    {
        const bool branch_taken_0x13b4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4B8u;
        // 0x13b4bc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4b8) {
            ctx->pc = 0x13B4D0u;
            goto label_13b4d0;
        }
    }
    ctx->pc = 0x13B4C0u;
label_13b4c0:
    // 0x13b4c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13b4c4:
    if (ctx->pc == 0x13B4C4u) {
        ctx->pc = 0x13B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4C0u;
        // 0x13b4c4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4C8u;
        goto label_13b4c8;
    }
    ctx->pc = 0x13B4C0u;
    {
        const bool branch_taken_0x13b4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4C0u;
        // 0x13b4c4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4c0) {
            ctx->pc = 0x13B4D4u;
            goto label_13b4d4;
        }
    }
    ctx->pc = 0x13B4C8u;
label_13b4c8:
    // 0x13b4c8: 0xc09545a  jal         func_255168
label_13b4cc:
    if (ctx->pc == 0x13B4CCu) {
        ctx->pc = 0x13B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4C8u;
        // 0x13b4cc: 0x2605ba58  addiu       $a1, $s0, -0x45A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4D0u;
        goto label_13b4d0;
    }
    ctx->pc = 0x13B4C8u;
    SET_GPR_U32(ctx, 31, 0x13B4D0u);
    ctx->pc = 0x13B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4C8u;
    // 0x13b4cc: 0x2605ba58  addiu       $a1, $s0, -0x45A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x13B4C8u, 0x13B4D0u)) {
        return;
    }
    ctx->pc = 0x13B4D0u;
label_13b4d0:
    // 0x13b4d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b4d4:
    // 0x13b4d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13b4d8:
    // 0x13b4d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b4dc:
    // 0x13b4dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13b4e0:
    // 0x13b4e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13b4e4:
    // 0x13b4e4: 0xc07f0c8  jal         func_1FC320
label_13b4e8:
    if (ctx->pc == 0x13B4E8u) {
        ctx->pc = 0x13B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4E4u;
        // 0x13b4e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4ECu;
        goto label_13b4ec;
    }
    ctx->pc = 0x13B4E4u;
    SET_GPR_U32(ctx, 31, 0x13B4ECu);
    ctx->pc = 0x13B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4E4u;
    // 0x13b4e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13B4E4u, 0x13B4ECu)) {
        return;
    }
    ctx->pc = 0x13B4ECu;
label_13b4ec:
    // 0x13b4ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b4f0:
    // 0x13b4f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b4f4:
    // 0x13b4f4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_13b4f8:
    if (ctx->pc == 0x13B4F8u) {
        ctx->pc = 0x13B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4F4u;
        // 0x13b4f8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4FCu;
        goto label_13b4fc;
    }
    ctx->pc = 0x13B4F4u;
    {
        const bool branch_taken_0x13b4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4F4u;
        // 0x13b4f8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4f4) {
            ctx->pc = 0x13B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b4a0;
        }
    }
    ctx->pc = 0x13B4FCu;
label_13b4fc:
    // 0x13b4fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13b4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13b500:
    // 0x13b500: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13b500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13b504:
    // 0x13b504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13b508:
    // 0x13b508: 0x3e00008  jr          $ra
label_13b50c:
    if (ctx->pc == 0x13B50Cu) {
        ctx->pc = 0x13B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B508u;
        // 0x13b50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B510u;
        goto label_fallthrough_0x13b508;
    }
    ctx->pc = 0x13B508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B508u;
        // 0x13b50c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b508:
    ctx->pc = 0x13B510u;
}
