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

// Function: sub_00207858
// Address: 0x207858 - 0x207968
void sub_00207858_0x207858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207858_0x207858");
#endif

    switch (ctx->pc) {
        case 0x207858u: goto label_207858;
        case 0x20785cu: goto label_20785c;
        case 0x207860u: goto label_207860;
        case 0x207864u: goto label_207864;
        case 0x207868u: goto label_207868;
        case 0x20786cu: goto label_20786c;
        case 0x207870u: goto label_207870;
        case 0x207874u: goto label_207874;
        case 0x207878u: goto label_207878;
        case 0x20787cu: goto label_20787c;
        case 0x207880u: goto label_207880;
        case 0x207884u: goto label_207884;
        case 0x207888u: goto label_207888;
        case 0x20788cu: goto label_20788c;
        case 0x207890u: goto label_207890;
        case 0x207894u: goto label_207894;
        case 0x207898u: goto label_207898;
        case 0x20789cu: goto label_20789c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078a4u: goto label_2078a4;
        case 0x2078a8u: goto label_2078a8;
        case 0x2078acu: goto label_2078ac;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078bcu: goto label_2078bc;
        case 0x2078c0u: goto label_2078c0;
        case 0x2078c4u: goto label_2078c4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078ccu: goto label_2078cc;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078d4u: goto label_2078d4;
        case 0x2078d8u: goto label_2078d8;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078e0u: goto label_2078e0;
        case 0x2078e4u: goto label_2078e4;
        case 0x2078e8u: goto label_2078e8;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078f0u: goto label_2078f0;
        case 0x2078f4u: goto label_2078f4;
        case 0x2078f8u: goto label_2078f8;
        case 0x2078fcu: goto label_2078fc;
        case 0x207900u: goto label_207900;
        case 0x207904u: goto label_207904;
        case 0x207908u: goto label_207908;
        case 0x20790cu: goto label_20790c;
        case 0x207910u: goto label_207910;
        case 0x207914u: goto label_207914;
        case 0x207918u: goto label_207918;
        case 0x20791cu: goto label_20791c;
        case 0x207920u: goto label_207920;
        case 0x207924u: goto label_207924;
        case 0x207928u: goto label_207928;
        case 0x20792cu: goto label_20792c;
        case 0x207930u: goto label_207930;
        case 0x207934u: goto label_207934;
        case 0x207938u: goto label_207938;
        case 0x20793cu: goto label_20793c;
        case 0x207940u: goto label_207940;
        case 0x207944u: goto label_207944;
        case 0x207948u: goto label_207948;
        case 0x20794cu: goto label_20794c;
        case 0x207950u: goto label_207950;
        case 0x207954u: goto label_207954;
        case 0x207958u: goto label_207958;
        case 0x20795cu: goto label_20795c;
        case 0x207960u: goto label_207960;
        case 0x207964u: goto label_207964;
        default: break;
    }

    ctx->pc = 0x207858u;

label_207858:
    // 0x207858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20785c:
    // 0x20785c: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x20785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_207860:
    // 0x207860: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x207860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_207864:
    // 0x207864: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x207864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_207868:
    // 0x207868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20786c:
    // 0x20786c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207870:
    // 0x207870: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207874:
    // 0x207874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_207878:
    // 0x207878: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x207878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20787c:
    // 0x20787c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_207880:
    if (ctx->pc == 0x207880u) {
        ctx->pc = 0x207880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20787Cu;
        // 0x207880: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207884u;
        goto label_207884;
    }
    ctx->pc = 0x20787Cu;
    {
        const bool branch_taken_0x20787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x207880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20787Cu;
        // 0x207880: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20787c) {
            ctx->pc = 0x2078ACu;
            goto label_2078ac;
        }
    }
    ctx->pc = 0x207884u;
label_207884:
    // 0x207884: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207888:
    // 0x207888: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20788c:
    // 0x20788c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20788cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207890:
    // 0x207890: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_207894:
    // 0x207894: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207898:
    // 0x207898: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_20789c:
    // 0x20789c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2078a0:
    // 0x2078a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2078a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2078a4:
    // 0x2078a4: 0x40f809  jalr        $v0
label_2078a8:
    if (ctx->pc == 0x2078A8u) {
        ctx->pc = 0x2078ACu;
        goto label_2078ac;
    }
    ctx->pc = 0x2078A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2078ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2078A4u, 0x2078ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2078ACu;
label_2078ac:
    // 0x2078ac: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2078b0:
    // 0x2078b0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2078b4:
    // 0x2078b4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2078b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2078b8:
    // 0x2078b8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2078bc:
    if (ctx->pc == 0x2078BCu) {
        ctx->pc = 0x2078BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078B8u;
        // 0x2078bc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078C0u;
        goto label_2078c0;
    }
    ctx->pc = 0x2078B8u;
    {
        const bool branch_taken_0x2078b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2078b8) {
            ctx->pc = 0x2078BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078B8u;
            // 0x2078bc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078E8u;
            goto label_2078e8;
        }
    }
    ctx->pc = 0x2078C0u;
label_2078c0:
    // 0x2078c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2078c4:
    // 0x2078c4: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2078c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_2078c8:
    // 0x2078c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2078c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2078cc:
    // 0x2078cc: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2078ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_2078d0:
    // 0x2078d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2078d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2078d4:
    // 0x2078d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2078d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2078d8:
    // 0x2078d8: 0x60f809  jalr        $v1
label_2078dc:
    if (ctx->pc == 0x2078DCu) {
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D8u;
        // 0x2078dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078E0u;
        goto label_2078e0;
    }
    ctx->pc = 0x2078D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2078E0u);
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D8u;
        // 0x2078dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2078D8u, 0x2078E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2078E0u;
label_2078e0:
    // 0x2078e0: 0x10000018  b           . + 4 + (0x18 << 2)
label_2078e4:
    if (ctx->pc == 0x2078E4u) {
        ctx->pc = 0x2078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E0u;
        // 0x2078e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078E8u;
        goto label_2078e8;
    }
    ctx->pc = 0x2078E0u;
    {
        const bool branch_taken_0x2078e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E0u;
        // 0x2078e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078e0) {
            ctx->pc = 0x207944u;
            goto label_207944;
        }
    }
    ctx->pc = 0x2078E8u;
label_2078e8:
    // 0x2078e8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2078ec:
    if (ctx->pc == 0x2078ECu) {
        ctx->pc = 0x2078ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E8u;
        // 0x2078ec: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078F0u;
        goto label_2078f0;
    }
    ctx->pc = 0x2078E8u;
    {
        const bool branch_taken_0x2078e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E8u;
        // 0x2078ec: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078e8) {
            ctx->pc = 0x207914u;
            goto label_207914;
        }
    }
    ctx->pc = 0x2078F0u;
label_2078f0:
    // 0x2078f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2078f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2078f4:
    // 0x2078f4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x2078f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_2078f8:
    // 0x2078f8: 0x9e020074  lwu         $v0, 0x74($s0)
    ctx->pc = 0x2078f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2078fc:
    // 0x2078fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2078fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_207900:
    // 0x207900: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x207900u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_207904:
    // 0x207904: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x207904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_207908:
    // 0x207908: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20790c:
    // 0x20790c: 0x40f809  jalr        $v0
label_207910:
    if (ctx->pc == 0x207910u) {
        ctx->pc = 0x207910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20790Cu;
        // 0x207910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207914u;
        goto label_207914;
    }
    ctx->pc = 0x20790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207914u);
        ctx->pc = 0x207910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20790Cu;
        // 0x207910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20790Cu, 0x207914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207914u;
label_207914:
    // 0x207914: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x207914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_207918:
    // 0x207918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20791c:
    // 0x20791c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20791cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207920:
    // 0x207920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207924:
    // 0x207924: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_207928:
    // 0x207928: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x207928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20792c:
    // 0x20792c: 0x40f809  jalr        $v0
label_207930:
    if (ctx->pc == 0x207930u) {
        ctx->pc = 0x207930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20792Cu;
        // 0x207930: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207934u;
        goto label_207934;
    }
    ctx->pc = 0x20792Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207934u);
        ctx->pc = 0x207930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20792Cu;
        // 0x207930: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20792Cu, 0x207934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207934u;
label_207934:
    // 0x207934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_207938:
    // 0x207938: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x207938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20793c:
    // 0x20793c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207940:
    // 0x207940: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x207940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_207944:
    // 0x207944: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x207944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207948:
    // 0x207948: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x207948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20794c:
    // 0x20794c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20794cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207950:
    // 0x207950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_207954:
    // 0x207954: 0x3e00008  jr          $ra
label_207958:
    if (ctx->pc == 0x207958u) {
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20795Cu;
        goto label_20795c;
    }
    ctx->pc = 0x207954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20795Cu;
label_20795c:
    // 0x20795c: 0x0  nop
    ctx->pc = 0x20795cu;
    // NOP
label_207960:
    // 0x207960: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x207960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_207964:
    // 0x207964: 0x0  nop
    ctx->pc = 0x207964u;
    // NOP
    ctx->pc = 0x207968u;
}
