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

// Function: sub_00184778
// Address: 0x184778 - 0x184830
void sub_00184778_0x184778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184778_0x184778");
#endif

    switch (ctx->pc) {
        case 0x184778u: goto label_184778;
        case 0x18477cu: goto label_18477c;
        case 0x184780u: goto label_184780;
        case 0x184784u: goto label_184784;
        case 0x184788u: goto label_184788;
        case 0x18478cu: goto label_18478c;
        case 0x184790u: goto label_184790;
        case 0x184794u: goto label_184794;
        case 0x184798u: goto label_184798;
        case 0x18479cu: goto label_18479c;
        case 0x1847a0u: goto label_1847a0;
        case 0x1847a4u: goto label_1847a4;
        case 0x1847a8u: goto label_1847a8;
        case 0x1847acu: goto label_1847ac;
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        case 0x184810u: goto label_184810;
        case 0x184814u: goto label_184814;
        case 0x184818u: goto label_184818;
        case 0x18481cu: goto label_18481c;
        case 0x184820u: goto label_184820;
        case 0x184824u: goto label_184824;
        case 0x184828u: goto label_184828;
        case 0x18482cu: goto label_18482c;
        default: break;
    }

    ctx->pc = 0x184778u;

label_184778:
    // 0x184778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18477c:
    // 0x18477c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_184780:
    // 0x184780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_184784:
    // 0x184784: 0xc0495a4  jal         func_125690
label_184788:
    if (ctx->pc == 0x184788u) {
        ctx->pc = 0x184788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184784u;
        // 0x184788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18478Cu;
        goto label_18478c;
    }
    ctx->pc = 0x184784u;
    SET_GPR_U32(ctx, 31, 0x18478Cu);
    ctx->pc = 0x184788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184784u;
    // 0x184788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125690u, 0x184784u, 0x18478Cu)) {
        return;
    }
    ctx->pc = 0x18478Cu;
label_18478c:
    // 0x18478c: 0x8e0214c0  lw          $v0, 0x14C0($s0)
    ctx->pc = 0x18478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
label_184790:
    // 0x184790: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_184794:
    if (ctx->pc == 0x184794u) {
        ctx->pc = 0x184794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184790u;
        // 0x184794: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184798u;
        goto label_184798;
    }
    ctx->pc = 0x184790u;
    {
        const bool branch_taken_0x184790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184790u;
        // 0x184794: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184790) {
            ctx->pc = 0x1847D8u;
            goto label_1847d8;
        }
    }
    ctx->pc = 0x184798u;
label_184798:
    // 0x184798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18479c:
    // 0x18479c: 0xc04eef0  jal         func_13BBC0
label_1847a0:
    if (ctx->pc == 0x1847A0u) {
        ctx->pc = 0x1847A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18479Cu;
        // 0x1847a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847A4u;
        goto label_1847a4;
    }
    ctx->pc = 0x18479Cu;
    SET_GPR_U32(ctx, 31, 0x1847A4u);
    ctx->pc = 0x1847A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18479Cu;
    // 0x1847a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x18479Cu, 0x1847A4u)) {
        return;
    }
    ctx->pc = 0x1847A4u;
label_1847a4:
    // 0x1847a4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1847a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1847a8:
    // 0x1847a8: 0x8e0514c4  lw          $a1, 0x14C4($s0)
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5316)));
label_1847ac:
    // 0x1847ac: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1847acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1847b0:
    // 0x1847b0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1847b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1847b4:
    // 0x1847b4: 0x40f809  jalr        $v0
label_1847b8:
    if (ctx->pc == 0x1847B8u) {
        ctx->pc = 0x1847B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847B4u;
        // 0x1847b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847BCu;
        goto label_1847bc;
    }
    ctx->pc = 0x1847B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1847BCu);
        ctx->pc = 0x1847B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847B4u;
        // 0x1847b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1847B4u, 0x1847BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1847BCu;
label_1847bc:
    // 0x1847bc: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x1847bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_1847c0:
    // 0x1847c0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_1847c4:
    if (ctx->pc == 0x1847C4u) {
        ctx->pc = 0x1847C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847C0u;
        // 0x1847c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847C8u;
        goto label_1847c8;
    }
    ctx->pc = 0x1847C0u;
    {
        const bool branch_taken_0x1847c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1847C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847C0u;
        // 0x1847c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847c0) {
            ctx->pc = 0x184820u;
            goto label_184820;
        }
    }
    ctx->pc = 0x1847C8u;
label_1847c8:
    // 0x1847c8: 0xc059cae  jal         func_1672B8
label_1847cc:
    if (ctx->pc == 0x1847CCu) {
        ctx->pc = 0x1847CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847C8u;
        // 0x1847cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847D0u;
        goto label_1847d0;
    }
    ctx->pc = 0x1847C8u;
    SET_GPR_U32(ctx, 31, 0x1847D0u);
    ctx->pc = 0x1847CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847C8u;
    // 0x1847cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672B8u, 0x1847C8u, 0x1847D0u)) {
        return;
    }
    ctx->pc = 0x1847D0u;
label_1847d0:
    // 0x1847d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1847d4:
    if (ctx->pc == 0x1847D4u) {
        ctx->pc = 0x1847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847D0u;
        // 0x1847d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847D8u;
        goto label_1847d8;
    }
    ctx->pc = 0x1847D0u;
    {
        const bool branch_taken_0x1847d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847D0u;
        // 0x1847d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847d0) {
            ctx->pc = 0x184820u;
            goto label_184820;
        }
    }
    ctx->pc = 0x1847D8u;
label_1847d8:
    // 0x1847d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1847d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1847dc:
    // 0x1847dc: 0xc04eef0  jal         func_13BBC0
label_1847e0:
    if (ctx->pc == 0x1847E0u) {
        ctx->pc = 0x1847E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847DCu;
        // 0x1847e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847E4u;
        goto label_1847e4;
    }
    ctx->pc = 0x1847DCu;
    SET_GPR_U32(ctx, 31, 0x1847E4u);
    ctx->pc = 0x1847E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847DCu;
    // 0x1847e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x1847DCu, 0x1847E4u)) {
        return;
    }
    ctx->pc = 0x1847E4u;
label_1847e4:
    // 0x1847e4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1847e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1847e8:
    // 0x1847e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1847ec:
    // 0x1847ec: 0x8c458a1c  lw          $a1, -0x75E4($v0)
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937116)));
label_1847f0:
    // 0x1847f0: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1847f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1847f4:
    // 0x1847f4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1847f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1847f8:
    // 0x1847f8: 0x40f809  jalr        $v0
label_1847fc:
    if (ctx->pc == 0x1847FCu) {
        ctx->pc = 0x1847FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847F8u;
        // 0x1847fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184800u;
        goto label_184800;
    }
    ctx->pc = 0x1847F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184800u);
        ctx->pc = 0x1847FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847F8u;
        // 0x1847fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1847F8u, 0x184800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184800u;
label_184800:
    // 0x184800: 0xc04067c  jal         func_1019F0
label_184804:
    if (ctx->pc == 0x184804u) {
        ctx->pc = 0x184804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184800u;
        // 0x184804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184808u;
        goto label_184808;
    }
    ctx->pc = 0x184800u;
    SET_GPR_U32(ctx, 31, 0x184808u);
    ctx->pc = 0x184804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184800u;
    // 0x184804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019F0u, 0x184800u, 0x184808u)) {
        return;
    }
    ctx->pc = 0x184808u;
label_184808:
    // 0x184808: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x184808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_18480c:
    // 0x18480c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_184810:
    if (ctx->pc == 0x184810u) {
        ctx->pc = 0x184810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18480Cu;
        // 0x184810: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184814u;
        goto label_184814;
    }
    ctx->pc = 0x18480Cu;
    {
        const bool branch_taken_0x18480c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18480Cu;
        // 0x184810: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18480c) {
            ctx->pc = 0x184820u;
            goto label_184820;
        }
    }
    ctx->pc = 0x184814u;
label_184814:
    // 0x184814: 0xc059cae  jal         func_1672B8
label_184818:
    if (ctx->pc == 0x184818u) {
        ctx->pc = 0x184818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184814u;
        // 0x184818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18481Cu;
        goto label_18481c;
    }
    ctx->pc = 0x184814u;
    SET_GPR_U32(ctx, 31, 0x18481Cu);
    ctx->pc = 0x184818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184814u;
    // 0x184818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672B8u, 0x184814u, 0x18481Cu)) {
        return;
    }
    ctx->pc = 0x18481Cu;
label_18481c:
    // 0x18481c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18481cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184820:
    // 0x184820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184824:
    // 0x184824: 0x3e00008  jr          $ra
label_184828:
    if (ctx->pc == 0x184828u) {
        ctx->pc = 0x184828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184824u;
        // 0x184828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18482Cu;
        goto label_18482c;
    }
    ctx->pc = 0x184824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184824u;
        // 0x184828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18482Cu;
label_18482c:
    // 0x18482c: 0x0  nop
    ctx->pc = 0x18482cu;
    // NOP
    ctx->pc = 0x184830u;
}
