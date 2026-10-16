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

// Function: sub_00191720
// Address: 0x191720 - 0x1918c0
void sub_00191720_0x191720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191720_0x191720");
#endif

    switch (ctx->pc) {
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        case 0x1917c8u: goto label_1917c8;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917d8u: goto label_1917d8;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917e4u: goto label_1917e4;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917ecu: goto label_1917ec;
        case 0x1917f0u: goto label_1917f0;
        case 0x1917f4u: goto label_1917f4;
        case 0x1917f8u: goto label_1917f8;
        case 0x1917fcu: goto label_1917fc;
        case 0x191800u: goto label_191800;
        case 0x191804u: goto label_191804;
        case 0x191808u: goto label_191808;
        case 0x19180cu: goto label_19180c;
        case 0x191810u: goto label_191810;
        case 0x191814u: goto label_191814;
        case 0x191818u: goto label_191818;
        case 0x19181cu: goto label_19181c;
        case 0x191820u: goto label_191820;
        case 0x191824u: goto label_191824;
        case 0x191828u: goto label_191828;
        case 0x19182cu: goto label_19182c;
        case 0x191830u: goto label_191830;
        case 0x191834u: goto label_191834;
        case 0x191838u: goto label_191838;
        case 0x19183cu: goto label_19183c;
        case 0x191840u: goto label_191840;
        case 0x191844u: goto label_191844;
        case 0x191848u: goto label_191848;
        case 0x19184cu: goto label_19184c;
        case 0x191850u: goto label_191850;
        case 0x191854u: goto label_191854;
        case 0x191858u: goto label_191858;
        case 0x19185cu: goto label_19185c;
        case 0x191860u: goto label_191860;
        case 0x191864u: goto label_191864;
        case 0x191868u: goto label_191868;
        case 0x19186cu: goto label_19186c;
        case 0x191870u: goto label_191870;
        case 0x191874u: goto label_191874;
        case 0x191878u: goto label_191878;
        case 0x19187cu: goto label_19187c;
        case 0x191880u: goto label_191880;
        case 0x191884u: goto label_191884;
        case 0x191888u: goto label_191888;
        case 0x19188cu: goto label_19188c;
        case 0x191890u: goto label_191890;
        case 0x191894u: goto label_191894;
        case 0x191898u: goto label_191898;
        case 0x19189cu: goto label_19189c;
        case 0x1918a0u: goto label_1918a0;
        case 0x1918a4u: goto label_1918a4;
        case 0x1918a8u: goto label_1918a8;
        case 0x1918acu: goto label_1918ac;
        case 0x1918b0u: goto label_1918b0;
        case 0x1918b4u: goto label_1918b4;
        case 0x1918b8u: goto label_1918b8;
        case 0x1918bcu: goto label_1918bc;
        default: break;
    }

    ctx->pc = 0x191720u;

label_191720:
    // 0x191720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_191724:
    // 0x191724: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x191724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_191728:
    // 0x191728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x191728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19172c:
    // 0x19172c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19172cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191730:
    // 0x191730: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_191734:
    // 0x191734: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x191734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_191738:
    // 0x191738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19173c:
    // 0x19173c: 0xc04f0bc  jal         func_13C2F0
label_191740:
    if (ctx->pc == 0x191740u) {
        ctx->pc = 0x191740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19173Cu;
        // 0x191740: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191744u;
        goto label_191744;
    }
    ctx->pc = 0x19173Cu;
    SET_GPR_U32(ctx, 31, 0x191744u);
    ctx->pc = 0x191740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19173Cu;
    // 0x191740: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x19173Cu, 0x191744u)) {
        return;
    }
    ctx->pc = 0x191744u;
label_191744:
    // 0x191744: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_191748:
    // 0x191748: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x191748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19174c:
    // 0x19174c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_191750:
    if (ctx->pc == 0x191750u) {
        ctx->pc = 0x191750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19174Cu;
        // 0x191750: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191754u;
        goto label_191754;
    }
    ctx->pc = 0x19174Cu;
    {
        const bool branch_taken_0x19174c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x191750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19174Cu;
        // 0x191750: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19174c) {
            ctx->pc = 0x19177Cu;
            goto label_19177c;
        }
    }
    ctx->pc = 0x191754u;
label_191754:
    // 0x191754: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x191754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_191758:
    // 0x191758: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19175c:
    if (ctx->pc == 0x19175Cu) {
        ctx->pc = 0x19175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191758u;
        // 0x19175c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191760u;
        goto label_191760;
    }
    ctx->pc = 0x191758u;
    {
        const bool branch_taken_0x191758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191758u;
        // 0x19175c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191758) {
            ctx->pc = 0x19177Cu;
            goto label_19177c;
        }
    }
    ctx->pc = 0x191760u;
label_191760:
    // 0x191760: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_191764:
    // 0x191764: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x191764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_191768:
    // 0x191768: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x191768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19176c:
    // 0x19176c: 0x60f809  jalr        $v1
label_191770:
    if (ctx->pc == 0x191770u) {
        ctx->pc = 0x191770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19176Cu;
        // 0x191770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191774u;
        goto label_191774;
    }
    ctx->pc = 0x19176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x191774u);
        ctx->pc = 0x191770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19176Cu;
        // 0x191770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19176Cu, 0x191774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191774u;
label_191774:
    // 0x191774: 0x1000004d  b           . + 4 + (0x4D << 2)
label_191778:
    if (ctx->pc == 0x191778u) {
        ctx->pc = 0x191778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191774u;
        // 0x191778: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19177Cu;
        goto label_19177c;
    }
    ctx->pc = 0x191774u;
    {
        const bool branch_taken_0x191774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191774u;
        // 0x191778: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191774) {
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x19177Cu;
label_19177c:
    // 0x19177c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_191780:
    // 0x191780: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_191784:
    // 0x191784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x191784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191788:
    // 0x191788: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
label_19178c:
    if (ctx->pc == 0x19178Cu) {
        ctx->pc = 0x19178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191788u;
        // 0x19178c: 0x24518880  addiu       $s1, $v0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191790u;
        goto label_191790;
    }
    ctx->pc = 0x191788u;
    {
        const bool branch_taken_0x191788 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191788u;
        // 0x19178c: 0x24518880  addiu       $s1, $v0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191788) {
            ctx->pc = 0x191800u;
            goto label_191800;
        }
    }
    ctx->pc = 0x191790u;
label_191790:
    // 0x191790: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_191794:
    // 0x191794: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_191798:
    if (ctx->pc == 0x191798u) {
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19179Cu;
        goto label_19179c;
    }
    ctx->pc = 0x191794u;
    {
        const bool branch_taken_0x191794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191794) {
            ctx->pc = 0x191798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191794u;
            // 0x191798: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1917ACu;
            goto label_1917ac;
        }
    }
    ctx->pc = 0x19179Cu;
label_19179c:
    // 0x19179c: 0xc06481c  jal         func_192070
label_1917a0:
    if (ctx->pc == 0x1917A0u) {
        ctx->pc = 0x1917A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19179Cu;
        // 0x1917a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917A4u;
        goto label_1917a4;
    }
    ctx->pc = 0x19179Cu;
    SET_GPR_U32(ctx, 31, 0x1917A4u);
    ctx->pc = 0x1917A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19179Cu;
    // 0x1917a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192070u, 0x19179Cu, 0x1917A4u)) {
        return;
    }
    ctx->pc = 0x1917A4u;
label_1917a4:
    // 0x1917a4: 0x10000041  b           . + 4 + (0x41 << 2)
label_1917a8:
    if (ctx->pc == 0x1917A8u) {
        ctx->pc = 0x1917A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A4u;
        // 0x1917a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917ACu;
        goto label_1917ac;
    }
    ctx->pc = 0x1917A4u;
    {
        const bool branch_taken_0x1917a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A4u;
        // 0x1917a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917a4) {
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x1917ACu;
label_1917ac:
    // 0x1917ac: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_1917b0:
    if (ctx->pc == 0x1917B0u) {
        ctx->pc = 0x1917B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917ACu;
        // 0x1917b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917B4u;
        goto label_1917b4;
    }
    ctx->pc = 0x1917ACu;
    {
        const bool branch_taken_0x1917ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1917ac) {
            ctx->pc = 0x1917B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917ACu;
            // 0x1917b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1917b8:
    // 0x1917b8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1917bc:
    if (ctx->pc == 0x1917BCu) {
        ctx->pc = 0x1917BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B8u;
        // 0x1917bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917C0u;
        goto label_1917c0;
    }
    ctx->pc = 0x1917B8u;
    {
        const bool branch_taken_0x1917b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B8u;
        // 0x1917bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917b8) {
            ctx->pc = 0x1917DCu;
            goto label_1917dc;
        }
    }
    ctx->pc = 0x1917C0u;
label_1917c0:
    // 0x1917c0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1917c4:
    // 0x1917c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1917c8:
    if (ctx->pc == 0x1917C8u) {
        ctx->pc = 0x1917C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C4u;
        // 0x1917c8: 0x8e0500d4  lw          $a1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917CCu;
        goto label_1917cc;
    }
    ctx->pc = 0x1917C4u;
    {
        const bool branch_taken_0x1917c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1917c4) {
            ctx->pc = 0x1917C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917C4u;
            // 0x1917c8: 0x8e0500d4  lw          $a1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1917E0u;
            goto label_1917e0;
        }
    }
    ctx->pc = 0x1917CCu;
label_1917cc:
    // 0x1917cc: 0xc09799a  jal         func_25E668
label_1917d0:
    if (ctx->pc == 0x1917D0u) {
        ctx->pc = 0x1917D4u;
        goto label_1917d4;
    }
    ctx->pc = 0x1917CCu;
    SET_GPR_U32(ctx, 31, 0x1917D4u);
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x1917CCu, 0x1917D4u)) {
        return;
    }
    ctx->pc = 0x1917D4u;
label_1917d4:
    // 0x1917d4: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1917d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_1917d8:
    // 0x1917d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1917dc:
    // 0x1917dc: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x1917dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_1917e0:
    // 0x1917e0: 0xc05ee9a  jal         func_17BA68
label_1917e4:
    if (ctx->pc == 0x1917E4u) {
        ctx->pc = 0x1917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917E0u;
        // 0x1917e4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917E8u;
        goto label_1917e8;
    }
    ctx->pc = 0x1917E0u;
    SET_GPR_U32(ctx, 31, 0x1917E8u);
    ctx->pc = 0x1917E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917E0u;
    // 0x1917e4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x1917E0u, 0x1917E8u)) {
        return;
    }
    ctx->pc = 0x1917E8u;
label_1917e8:
    // 0x1917e8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1917e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_1917ec:
    // 0x1917ec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x1917ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1917f0:
    // 0x1917f0: 0xc07fb0c  jal         func_1FEC30
label_1917f4:
    if (ctx->pc == 0x1917F4u) {
        ctx->pc = 0x1917F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F0u;
        // 0x1917f4: 0x26458880  addiu       $a1, $s2, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917F8u;
        goto label_1917f8;
    }
    ctx->pc = 0x1917F0u;
    SET_GPR_U32(ctx, 31, 0x1917F8u);
    ctx->pc = 0x1917F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917F0u;
    // 0x1917f4: 0x26458880  addiu       $a1, $s2, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1917F0u, 0x1917F8u)) {
        return;
    }
    ctx->pc = 0x1917F8u;
label_1917f8:
    // 0x1917f8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1917fc:
    if (ctx->pc == 0x1917FCu) {
        ctx->pc = 0x1917FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F8u;
        // 0x1917fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191800u;
        goto label_191800;
    }
    ctx->pc = 0x1917F8u;
    {
        const bool branch_taken_0x1917f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F8u;
        // 0x1917fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917f8) {
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x191800u;
label_191800:
    // 0x191800: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_191804:
    // 0x191804: 0x8c628898  lw          $v0, -0x7768($v1)
    ctx->pc = 0x191804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936728)));
label_191808:
    // 0x191808: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_19180c:
    if (ctx->pc == 0x19180Cu) {
        ctx->pc = 0x19180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191808u;
        // 0x19180c: 0x24648898  addiu       $a0, $v1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191810u;
        goto label_191810;
    }
    ctx->pc = 0x191808u;
    {
        const bool branch_taken_0x191808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191808u;
        // 0x19180c: 0x24648898  addiu       $a0, $v1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191808) {
            ctx->pc = 0x191850u;
            goto label_191850;
        }
    }
    ctx->pc = 0x191810u;
label_191810:
    // 0x191810: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x191810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_191814:
    // 0x191814: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_191818:
    if (ctx->pc == 0x191818u) {
        ctx->pc = 0x191818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191814u;
        // 0x191818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19181Cu;
        goto label_19181c;
    }
    ctx->pc = 0x191814u;
    {
        const bool branch_taken_0x191814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191814u;
        // 0x191818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191814) {
            ctx->pc = 0x191828u;
            goto label_191828;
        }
    }
    ctx->pc = 0x19181Cu;
label_19181c:
    // 0x19181c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_191820:
    // 0x191820: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_191824:
    if (ctx->pc == 0x191824u) {
        ctx->pc = 0x191824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191820u;
        // 0x191824: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191828u;
        goto label_191828;
    }
    ctx->pc = 0x191820u;
    {
        const bool branch_taken_0x191820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191820) {
            ctx->pc = 0x191824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191820u;
            // 0x191824: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x191828u;
label_191828:
    // 0x191828: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x191828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_19182c:
    // 0x19182c: 0xc07fb0c  jal         func_1FEC30
label_191830:
    if (ctx->pc == 0x191830u) {
        ctx->pc = 0x191830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19182Cu;
        // 0x191830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191834u;
        goto label_191834;
    }
    ctx->pc = 0x19182Cu;
    SET_GPR_U32(ctx, 31, 0x191834u);
    ctx->pc = 0x191830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19182Cu;
    // 0x191830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19182Cu, 0x191834u)) {
        return;
    }
    ctx->pc = 0x191834u;
label_191834:
    // 0x191834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191838:
    // 0x191838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19183c:
    // 0x19183c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19183cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191840:
    // 0x191840: 0xc07fc98  jal         func_1FF260
label_191844:
    if (ctx->pc == 0x191844u) {
        ctx->pc = 0x191844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191840u;
        // 0x191844: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191848u;
        goto label_191848;
    }
    ctx->pc = 0x191840u;
    SET_GPR_U32(ctx, 31, 0x191848u);
    ctx->pc = 0x191844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191840u;
    // 0x191844: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x191840u, 0x191848u)) {
        return;
    }
    ctx->pc = 0x191848u;
label_191848:
    // 0x191848: 0x10000018  b           . + 4 + (0x18 << 2)
label_19184c:
    if (ctx->pc == 0x19184Cu) {
        ctx->pc = 0x19184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191848u;
        // 0x19184c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191850u;
        goto label_191850;
    }
    ctx->pc = 0x191848u;
    {
        const bool branch_taken_0x191848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191848u;
        // 0x19184c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191848) {
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x191850u;
label_191850:
    // 0x191850: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x191850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_191854:
    // 0x191854: 0x8c43f898  lw          $v1, -0x768($v0)
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965400)));
label_191858:
    // 0x191858: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_19185c:
    if (ctx->pc == 0x19185Cu) {
        ctx->pc = 0x19185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191858u;
        // 0x19185c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191860u;
        goto label_191860;
    }
    ctx->pc = 0x191858u;
    {
        const bool branch_taken_0x191858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191858u;
        // 0x19185c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191858) {
            ctx->pc = 0x19187Cu;
            goto label_19187c;
        }
    }
    ctx->pc = 0x191860u;
label_191860:
    // 0x191860: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x191860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_191864:
    // 0x191864: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_191868:
    if (ctx->pc == 0x191868u) {
        ctx->pc = 0x191868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191864u;
        // 0x191868: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19186Cu;
        goto label_19186c;
    }
    ctx->pc = 0x191864u;
    {
        const bool branch_taken_0x191864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191864u;
        // 0x191868: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191864) {
            ctx->pc = 0x1918A8u;
            goto label_1918a8;
        }
    }
    ctx->pc = 0x19186Cu;
label_19186c:
    // 0x19186c: 0xc06354e  jal         func_18D538
label_191870:
    if (ctx->pc == 0x191870u) {
        ctx->pc = 0x191870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19186Cu;
        // 0x191870: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191874u;
        goto label_191874;
    }
    ctx->pc = 0x19186Cu;
    SET_GPR_U32(ctx, 31, 0x191874u);
    ctx->pc = 0x191870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19186Cu;
    // 0x191870: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x19186Cu, 0x191874u)) {
        return;
    }
    ctx->pc = 0x191874u;
label_191874:
    // 0x191874: 0x1000000c  b           . + 4 + (0xC << 2)
label_191878:
    if (ctx->pc == 0x191878u) {
        ctx->pc = 0x191878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191874u;
        // 0x191878: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19187Cu;
        goto label_19187c;
    }
    ctx->pc = 0x191874u;
    {
        const bool branch_taken_0x191874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191874u;
        // 0x191878: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191874) {
            ctx->pc = 0x1918A8u;
            goto label_1918a8;
        }
    }
    ctx->pc = 0x19187Cu;
label_19187c:
    // 0x19187c: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
label_191880:
    // 0x191880: 0x54a3000a  bnel        $a1, $v1, . + 4 + (0xA << 2)
label_191884:
    if (ctx->pc == 0x191884u) {
        ctx->pc = 0x191884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191880u;
        // 0x191884: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191888u;
        goto label_191888;
    }
    ctx->pc = 0x191880u;
    {
        const bool branch_taken_0x191880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x191880) {
            ctx->pc = 0x191884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191880u;
            // 0x191884: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x191888u;
label_191888:
    // 0x191888: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_19188c:
    // 0x19188c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_191890:
    if (ctx->pc == 0x191890u) {
        ctx->pc = 0x191890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19188Cu;
        // 0x191890: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191894u;
        goto label_191894;
    }
    ctx->pc = 0x19188Cu;
    {
        const bool branch_taken_0x19188c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19188c) {
            ctx->pc = 0x191890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19188Cu;
            // 0x191890: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1918ACu;
            goto label_1918ac;
        }
    }
    ctx->pc = 0x191894u;
label_191894:
    // 0x191894: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x191894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_191898:
    // 0x191898: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x191898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19189c:
    // 0x19189c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1918a0:
    // 0x1918a0: 0x60f809  jalr        $v1
label_1918a4:
    if (ctx->pc == 0x1918A4u) {
        ctx->pc = 0x1918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A0u;
        // 0x1918a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918A8u;
        goto label_1918a8;
    }
    ctx->pc = 0x1918A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1918A8u);
        ctx->pc = 0x1918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A0u;
        // 0x1918a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918A0u, 0x1918A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1918A8u;
label_1918a8:
    // 0x1918a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1918a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1918ac:
    // 0x1918ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1918acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1918b0:
    // 0x1918b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1918b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1918b4:
    // 0x1918b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1918b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1918b8:
    // 0x1918b8: 0x3e00008  jr          $ra
label_1918bc:
    if (ctx->pc == 0x1918BCu) {
        ctx->pc = 0x1918BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B8u;
        // 0x1918bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918C0u;
        goto label_fallthrough_0x1918b8;
    }
    ctx->pc = 0x1918B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B8u;
        // 0x1918bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1918b8:
    ctx->pc = 0x1918C0u;
}
