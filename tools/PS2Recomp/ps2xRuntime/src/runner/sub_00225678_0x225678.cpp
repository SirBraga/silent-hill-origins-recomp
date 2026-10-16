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

// Function: sub_00225678
// Address: 0x225678 - 0x225780
void sub_00225678_0x225678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225678_0x225678");
#endif

    switch (ctx->pc) {
        case 0x225678u: goto label_225678;
        case 0x22567cu: goto label_22567c;
        case 0x225680u: goto label_225680;
        case 0x225684u: goto label_225684;
        case 0x225688u: goto label_225688;
        case 0x22568cu: goto label_22568c;
        case 0x225690u: goto label_225690;
        case 0x225694u: goto label_225694;
        case 0x225698u: goto label_225698;
        case 0x22569cu: goto label_22569c;
        case 0x2256a0u: goto label_2256a0;
        case 0x2256a4u: goto label_2256a4;
        case 0x2256a8u: goto label_2256a8;
        case 0x2256acu: goto label_2256ac;
        case 0x2256b0u: goto label_2256b0;
        case 0x2256b4u: goto label_2256b4;
        case 0x2256b8u: goto label_2256b8;
        case 0x2256bcu: goto label_2256bc;
        case 0x2256c0u: goto label_2256c0;
        case 0x2256c4u: goto label_2256c4;
        case 0x2256c8u: goto label_2256c8;
        case 0x2256ccu: goto label_2256cc;
        case 0x2256d0u: goto label_2256d0;
        case 0x2256d4u: goto label_2256d4;
        case 0x2256d8u: goto label_2256d8;
        case 0x2256dcu: goto label_2256dc;
        case 0x2256e0u: goto label_2256e0;
        case 0x2256e4u: goto label_2256e4;
        case 0x2256e8u: goto label_2256e8;
        case 0x2256ecu: goto label_2256ec;
        case 0x2256f0u: goto label_2256f0;
        case 0x2256f4u: goto label_2256f4;
        case 0x2256f8u: goto label_2256f8;
        case 0x2256fcu: goto label_2256fc;
        case 0x225700u: goto label_225700;
        case 0x225704u: goto label_225704;
        case 0x225708u: goto label_225708;
        case 0x22570cu: goto label_22570c;
        case 0x225710u: goto label_225710;
        case 0x225714u: goto label_225714;
        case 0x225718u: goto label_225718;
        case 0x22571cu: goto label_22571c;
        case 0x225720u: goto label_225720;
        case 0x225724u: goto label_225724;
        case 0x225728u: goto label_225728;
        case 0x22572cu: goto label_22572c;
        case 0x225730u: goto label_225730;
        case 0x225734u: goto label_225734;
        case 0x225738u: goto label_225738;
        case 0x22573cu: goto label_22573c;
        case 0x225740u: goto label_225740;
        case 0x225744u: goto label_225744;
        case 0x225748u: goto label_225748;
        case 0x22574cu: goto label_22574c;
        case 0x225750u: goto label_225750;
        case 0x225754u: goto label_225754;
        case 0x225758u: goto label_225758;
        case 0x22575cu: goto label_22575c;
        case 0x225760u: goto label_225760;
        case 0x225764u: goto label_225764;
        case 0x225768u: goto label_225768;
        case 0x22576cu: goto label_22576c;
        case 0x225770u: goto label_225770;
        case 0x225774u: goto label_225774;
        case 0x225778u: goto label_225778;
        case 0x22577cu: goto label_22577c;
        default: break;
    }

    ctx->pc = 0x225678u;

label_225678:
    // 0x225678: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x225678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22567c:
    // 0x22567c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_225680:
    // 0x225680: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x225680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_225684:
    // 0x225684: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x225684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_225688:
    // 0x225688: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x225688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22568c:
    // 0x22568c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_225690:
    // 0x225690: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_225694:
    // 0x225694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225698:
    // 0x225698: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22569c:
    // 0x22569c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22569cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2256a0:
    // 0x2256a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2256a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2256a4:
    // 0x2256a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2256a8:
    // 0x2256a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2256a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2256ac:
    // 0x2256ac: 0x40f809  jalr        $v0
label_2256b0:
    if (ctx->pc == 0x2256B0u) {
        ctx->pc = 0x2256B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256ACu;
        // 0x2256b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256B4u;
        goto label_2256b4;
    }
    ctx->pc = 0x2256ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2256B4u);
        ctx->pc = 0x2256B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256ACu;
        // 0x2256b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256ACu, 0x2256B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2256B4u;
label_2256b4:
    // 0x2256b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2256b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2256b8:
    // 0x2256b8: 0x16000029  bnez        $s0, . + 4 + (0x29 << 2)
label_2256bc:
    if (ctx->pc == 0x2256BCu) {
        ctx->pc = 0x2256BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256B8u;
        // 0x2256bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256C0u;
        goto label_2256c0;
    }
    ctx->pc = 0x2256B8u;
    {
        const bool branch_taken_0x2256b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2256BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256B8u;
        // 0x2256bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256b8) {
            ctx->pc = 0x225760u;
            goto label_225760;
        }
    }
    ctx->pc = 0x2256C0u;
label_2256c0:
    // 0x2256c0: 0x2663fff3  addiu       $v1, $s3, -0xD
    ctx->pc = 0x2256c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967283));
label_2256c4:
    // 0x2256c4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2256c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2256c8:
    // 0x2256c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2256cc:
    if (ctx->pc == 0x2256CCu) {
        ctx->pc = 0x2256CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C8u;
        // 0x2256cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256D0u;
        goto label_2256d0;
    }
    ctx->pc = 0x2256C8u;
    {
        const bool branch_taken_0x2256c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C8u;
        // 0x2256cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256c8) {
            ctx->pc = 0x225730u;
            goto label_225730;
        }
    }
    ctx->pc = 0x2256D0u;
label_2256d0:
    // 0x2256d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2256d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2256d4:
    // 0x2256d4: 0x2442a7c0  addiu       $v0, $v0, -0x5840
    ctx->pc = 0x2256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
label_2256d8:
    // 0x2256d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2256dc:
    // 0x2256dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2256dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2256e0:
    // 0x2256e0: 0x800008  jr          $a0
label_2256e4:
    if (ctx->pc == 0x2256E4u) {
        ctx->pc = 0x2256E8u;
        goto label_2256e8;
    }
    ctx->pc = 0x2256E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2256E8u: goto label_2256e8;
            case 0x2256F8u: goto label_2256f8;
            case 0x225720u: goto label_225720;
            case 0x225724u: goto label_225724;
            case 0x22572Cu: goto label_22572c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2256E8u;
label_2256e8:
    // 0x2256e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2256e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2256ec:
    // 0x2256ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2256ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2256f0:
    // 0x2256f0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2256f4:
    if (ctx->pc == 0x2256F4u) {
        ctx->pc = 0x2256F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F0u;
        // 0x2256f4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256F8u;
        goto label_2256f8;
    }
    ctx->pc = 0x2256F0u;
    {
        const bool branch_taken_0x2256f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F0u;
        // 0x2256f4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256f0) {
            ctx->pc = 0x225730u;
            goto label_225730;
        }
    }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x2256f8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2256fc:
    // 0x2256fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_225700:
    if (ctx->pc == 0x225700u) {
        ctx->pc = 0x225700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256FCu;
        // 0x225700: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225704u;
        goto label_225704;
    }
    ctx->pc = 0x2256FCu;
    {
        const bool branch_taken_0x2256fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256FCu;
        // 0x225700: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256fc) {
            ctx->pc = 0x225738u;
            goto label_225738;
        }
    }
    ctx->pc = 0x225704u;
label_225704:
    // 0x225704: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x225704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_225708:
    // 0x225708: 0x8c621094  lw          $v0, 0x1094($v1)
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4244)));
label_22570c:
    // 0x22570c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225710:
    // 0x225710: 0x40f809  jalr        $v0
label_225714:
    if (ctx->pc == 0x225714u) {
        ctx->pc = 0x225714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225710u;
        // 0x225714: 0x24a5a798  addiu       $a1, $a1, -0x5868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225718u;
        goto label_225718;
    }
    ctx->pc = 0x225710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225718u);
        ctx->pc = 0x225714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225710u;
        // 0x225714: 0x24a5a798  addiu       $a1, $a1, -0x5868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225710u, 0x225718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225718u;
label_225718:
    // 0x225718: 0x10000005  b           . + 4 + (0x5 << 2)
label_22571c:
    if (ctx->pc == 0x22571Cu) {
        ctx->pc = 0x225720u;
        goto label_225720;
    }
    ctx->pc = 0x225718u;
    {
        const bool branch_taken_0x225718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225718) {
            ctx->pc = 0x225730u;
            goto label_225730;
        }
    }
    ctx->pc = 0x225720u;
label_225720:
    // 0x225720: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x225720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_225724:
    // 0x225724: 0x10000002  b           . + 4 + (0x2 << 2)
label_225728:
    if (ctx->pc == 0x225728u) {
        ctx->pc = 0x225728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225724u;
        // 0x225728: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22572Cu;
        goto label_22572c;
    }
    ctx->pc = 0x225724u;
    {
        const bool branch_taken_0x225724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225724u;
        // 0x225728: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225724) {
            ctx->pc = 0x225730u;
            goto label_225730;
        }
    }
    ctx->pc = 0x22572Cu;
label_22572c:
    // 0x22572c: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x22572cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_225730:
    // 0x225730: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_225734:
    if (ctx->pc == 0x225734u) {
        ctx->pc = 0x225734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225730u;
        // 0x225734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225738u;
        goto label_225738;
    }
    ctx->pc = 0x225730u;
    {
        const bool branch_taken_0x225730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x225734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225730u;
        // 0x225734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225730) {
            ctx->pc = 0x225760u;
            goto label_225760;
        }
    }
    ctx->pc = 0x225738u;
label_225738:
    // 0x225738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22573c:
    // 0x22573c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x22573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_225740:
    // 0x225740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x225740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_225744:
    // 0x225744: 0xc092848  jal         func_24A120
label_225748:
    if (ctx->pc == 0x225748u) {
        ctx->pc = 0x225748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225744u;
        // 0x225748: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22574Cu;
        goto label_22574c;
    }
    ctx->pc = 0x225744u;
    SET_GPR_U32(ctx, 31, 0x22574Cu);
    ctx->pc = 0x225748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225744u;
    // 0x225748: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x225744u, 0x22574Cu)) {
        return;
    }
    ctx->pc = 0x22574Cu;
label_22574c:
    // 0x22574c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22574cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225750:
    // 0x225750: 0xc09281a  jal         func_24A068
label_225754:
    if (ctx->pc == 0x225754u) {
        ctx->pc = 0x225754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225750u;
        // 0x225754: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225758u;
        goto label_225758;
    }
    ctx->pc = 0x225750u;
    SET_GPR_U32(ctx, 31, 0x225758u);
    ctx->pc = 0x225754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225750u;
    // 0x225754: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x225750u, 0x225758u)) {
        return;
    }
    ctx->pc = 0x225758u;
label_225758:
    // 0x225758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22575c:
    // 0x22575c: 0x0  nop
    ctx->pc = 0x22575cu;
    // NOP
label_225760:
    // 0x225760: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x225760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_225764:
    // 0x225764: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x225764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_225768:
    // 0x225768: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x225768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22576c:
    // 0x22576c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22576cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225770:
    // 0x225770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225774:
    // 0x225774: 0x3e00008  jr          $ra
label_225778:
    if (ctx->pc == 0x225778u) {
        ctx->pc = 0x225778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225774u;
        // 0x225778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22577Cu;
        goto label_22577c;
    }
    ctx->pc = 0x225774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225774u;
        // 0x225778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22577Cu;
label_22577c:
    // 0x22577c: 0x0  nop
    ctx->pc = 0x22577cu;
    // NOP
    ctx->pc = 0x225780u;
}
