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

// Function: sub_002276C0
// Address: 0x2276c0 - 0x2277e8
void sub_002276C0_0x2276c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002276C0_0x2276c0");
#endif

    switch (ctx->pc) {
        case 0x2276c0u: goto label_2276c0;
        case 0x2276c4u: goto label_2276c4;
        case 0x2276c8u: goto label_2276c8;
        case 0x2276ccu: goto label_2276cc;
        case 0x2276d0u: goto label_2276d0;
        case 0x2276d4u: goto label_2276d4;
        case 0x2276d8u: goto label_2276d8;
        case 0x2276dcu: goto label_2276dc;
        case 0x2276e0u: goto label_2276e0;
        case 0x2276e4u: goto label_2276e4;
        case 0x2276e8u: goto label_2276e8;
        case 0x2276ecu: goto label_2276ec;
        case 0x2276f0u: goto label_2276f0;
        case 0x2276f4u: goto label_2276f4;
        case 0x2276f8u: goto label_2276f8;
        case 0x2276fcu: goto label_2276fc;
        case 0x227700u: goto label_227700;
        case 0x227704u: goto label_227704;
        case 0x227708u: goto label_227708;
        case 0x22770cu: goto label_22770c;
        case 0x227710u: goto label_227710;
        case 0x227714u: goto label_227714;
        case 0x227718u: goto label_227718;
        case 0x22771cu: goto label_22771c;
        case 0x227720u: goto label_227720;
        case 0x227724u: goto label_227724;
        case 0x227728u: goto label_227728;
        case 0x22772cu: goto label_22772c;
        case 0x227730u: goto label_227730;
        case 0x227734u: goto label_227734;
        case 0x227738u: goto label_227738;
        case 0x22773cu: goto label_22773c;
        case 0x227740u: goto label_227740;
        case 0x227744u: goto label_227744;
        case 0x227748u: goto label_227748;
        case 0x22774cu: goto label_22774c;
        case 0x227750u: goto label_227750;
        case 0x227754u: goto label_227754;
        case 0x227758u: goto label_227758;
        case 0x22775cu: goto label_22775c;
        case 0x227760u: goto label_227760;
        case 0x227764u: goto label_227764;
        case 0x227768u: goto label_227768;
        case 0x22776cu: goto label_22776c;
        case 0x227770u: goto label_227770;
        case 0x227774u: goto label_227774;
        case 0x227778u: goto label_227778;
        case 0x22777cu: goto label_22777c;
        case 0x227780u: goto label_227780;
        case 0x227784u: goto label_227784;
        case 0x227788u: goto label_227788;
        case 0x22778cu: goto label_22778c;
        case 0x227790u: goto label_227790;
        case 0x227794u: goto label_227794;
        case 0x227798u: goto label_227798;
        case 0x22779cu: goto label_22779c;
        case 0x2277a0u: goto label_2277a0;
        case 0x2277a4u: goto label_2277a4;
        case 0x2277a8u: goto label_2277a8;
        case 0x2277acu: goto label_2277ac;
        case 0x2277b0u: goto label_2277b0;
        case 0x2277b4u: goto label_2277b4;
        case 0x2277b8u: goto label_2277b8;
        case 0x2277bcu: goto label_2277bc;
        case 0x2277c0u: goto label_2277c0;
        case 0x2277c4u: goto label_2277c4;
        case 0x2277c8u: goto label_2277c8;
        case 0x2277ccu: goto label_2277cc;
        case 0x2277d0u: goto label_2277d0;
        case 0x2277d4u: goto label_2277d4;
        case 0x2277d8u: goto label_2277d8;
        case 0x2277dcu: goto label_2277dc;
        case 0x2277e0u: goto label_2277e0;
        case 0x2277e4u: goto label_2277e4;
        default: break;
    }

    ctx->pc = 0x2276c0u;

label_2276c0:
    // 0x2276c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2276c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2276c4:
    // 0x2276c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2276c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2276c8:
    // 0x2276c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2276c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2276cc:
    // 0x2276cc: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2276d0:
    // 0x2276d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2276d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2276d4:
    // 0x2276d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2276d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2276d8:
    // 0x2276d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2276d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2276dc:
    // 0x2276dc: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2276e0:
    // 0x2276e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2276e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2276e4:
    // 0x2276e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2276e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2276e8:
    // 0x2276e8: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2276e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2276ec:
    // 0x2276ec: 0x40f809  jalr        $v0
label_2276f0:
    if (ctx->pc == 0x2276F0u) {
        ctx->pc = 0x2276F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276ECu;
        // 0x2276f0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276F4u;
        goto label_2276f4;
    }
    ctx->pc = 0x2276ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2276F4u);
        ctx->pc = 0x2276F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276ECu;
        // 0x2276f0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276ECu, 0x2276F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2276F4u;
label_2276f4:
    // 0x2276f4: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x2276f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_2276f8:
    // 0x2276f8: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2276f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2276fc:
    // 0x2276fc: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2276fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_227700:
    // 0x227700: 0x40f809  jalr        $v0
label_227704:
    if (ctx->pc == 0x227704u) {
        ctx->pc = 0x227704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227700u;
        // 0x227704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227708u;
        goto label_227708;
    }
    ctx->pc = 0x227700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227708u);
        ctx->pc = 0x227704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227700u;
        // 0x227704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227700u, 0x227708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227708u;
label_227708:
    // 0x227708: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x227708u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_22770c:
    // 0x22770c: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x22770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_227710:
    // 0x227710: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_227714:
    // 0x227714: 0x40f809  jalr        $v0
label_227718:
    if (ctx->pc == 0x227718u) {
        ctx->pc = 0x227718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227714u;
        // 0x227718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22771Cu;
        goto label_22771c;
    }
    ctx->pc = 0x227714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22771Cu);
        ctx->pc = 0x227718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227714u;
        // 0x227718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227714u, 0x22771Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22771Cu;
label_22771c:
    // 0x22771c: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_227720:
    // 0x227720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227724:
    // 0x227724: 0x42200b  movn        $a0, $v0, $v0
    ctx->pc = 0x227724u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_227728:
    // 0x227728: 0x60f809  jalr        $v1
label_22772c:
    if (ctx->pc == 0x22772Cu) {
        ctx->pc = 0x22772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227728u;
        // 0x22772c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227730u;
        goto label_227730;
    }
    ctx->pc = 0x227728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x227730u);
        ctx->pc = 0x22772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227728u;
        // 0x22772c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227728u, 0x227730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227730u;
label_227730:
    // 0x227730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227734:
    // 0x227734: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_227738:
    if (ctx->pc == 0x227738u) {
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227734u;
        // 0x227738: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22773Cu;
        goto label_22773c;
    }
    ctx->pc = 0x227734u;
    {
        const bool branch_taken_0x227734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227734u;
        // 0x227738: 0x8f828e20  lw          $v0, -0x71E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227734) {
            ctx->pc = 0x2277C4u;
            goto label_2277c4;
        }
    }
    ctx->pc = 0x22773Cu;
label_22773c:
    // 0x22773c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_227740:
    // 0x227740: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_227744:
    // 0x227744: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_227748:
    if (ctx->pc == 0x227748u) {
        ctx->pc = 0x227748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227744u;
        // 0x227748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22774Cu;
        goto label_22774c;
    }
    ctx->pc = 0x227744u;
    {
        const bool branch_taken_0x227744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227744u;
        // 0x227748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227744) {
            ctx->pc = 0x2277C8u;
            goto label_2277c8;
        }
    }
    ctx->pc = 0x22774Cu;
label_22774c:
    // 0x22774c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_227750:
    // 0x227750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227754:
    // 0x227754: 0x40f809  jalr        $v0
label_227758:
    if (ctx->pc == 0x227758u) {
        ctx->pc = 0x227758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227754u;
        // 0x227758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22775Cu;
        goto label_22775c;
    }
    ctx->pc = 0x227754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22775Cu);
        ctx->pc = 0x227758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227754u;
        // 0x227758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227754u, 0x22775Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22775Cu;
label_22775c:
    // 0x22775c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_227760:
    if (ctx->pc == 0x227760u) {
        ctx->pc = 0x227760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22775Cu;
        // 0x227760: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227764u;
        goto label_227764;
    }
    ctx->pc = 0x22775Cu;
    {
        const bool branch_taken_0x22775c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22775Cu;
        // 0x227760: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22775c) {
            ctx->pc = 0x227778u;
            goto label_227778;
        }
    }
    ctx->pc = 0x227764u;
label_227764:
    // 0x227764: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x227764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_227768:
    // 0x227768: 0x40f809  jalr        $v0
label_22776c:
    if (ctx->pc == 0x22776Cu) {
        ctx->pc = 0x22776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227768u;
        // 0x22776c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227770u;
        goto label_227770;
    }
    ctx->pc = 0x227768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227770u);
        ctx->pc = 0x22776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227768u;
        // 0x22776c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227768u, 0x227770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227770u;
label_227770:
    // 0x227770: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_227774:
    if (ctx->pc == 0x227774u) {
        ctx->pc = 0x227774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227770u;
        // 0x227774: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227778u;
        goto label_227778;
    }
    ctx->pc = 0x227770u;
    {
        const bool branch_taken_0x227770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227770) {
            ctx->pc = 0x227774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227770u;
            // 0x227774: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22778Cu;
            goto label_22778c;
        }
    }
    ctx->pc = 0x227778u;
label_227778:
    // 0x227778: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x227778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22777c:
    // 0x22777c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_227780:
    if (ctx->pc == 0x227780u) {
        ctx->pc = 0x227780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22777Cu;
        // 0x227780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227784u;
        goto label_227784;
    }
    ctx->pc = 0x22777Cu;
    {
        const bool branch_taken_0x22777c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x227780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22777Cu;
        // 0x227780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22777c) {
            ctx->pc = 0x22779Cu;
            goto label_22779c;
        }
    }
    ctx->pc = 0x227784u;
label_227784:
    // 0x227784: 0x10000011  b           . + 4 + (0x11 << 2)
label_227788:
    if (ctx->pc == 0x227788u) {
        ctx->pc = 0x227788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227784u;
        // 0x227788: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22778Cu;
        goto label_22778c;
    }
    ctx->pc = 0x227784u;
    {
        const bool branch_taken_0x227784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227784u;
        // 0x227788: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227784) {
            ctx->pc = 0x2277CCu;
            goto label_2277cc;
        }
    }
    ctx->pc = 0x22778Cu;
label_22778c:
    // 0x22778c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_227790:
    if (ctx->pc == 0x227790u) {
        ctx->pc = 0x227790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22778Cu;
        // 0x227790: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227794u;
        goto label_227794;
    }
    ctx->pc = 0x22778Cu;
    {
        const bool branch_taken_0x22778c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22778c) {
            ctx->pc = 0x227790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22778Cu;
            // 0x227790: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227750;
        }
    }
    ctx->pc = 0x227794u;
label_227794:
    // 0x227794: 0x1000000c  b           . + 4 + (0xC << 2)
label_227798:
    if (ctx->pc == 0x227798u) {
        ctx->pc = 0x227798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227794u;
        // 0x227798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22779Cu;
        goto label_22779c;
    }
    ctx->pc = 0x227794u;
    {
        const bool branch_taken_0x227794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227794u;
        // 0x227798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227794) {
            ctx->pc = 0x2277C8u;
            goto label_2277c8;
        }
    }
    ctx->pc = 0x22779Cu;
label_22779c:
    // 0x22779c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22779cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2277a0:
    // 0x2277a0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2277a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_2277a4:
    // 0x2277a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2277a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2277a8:
    // 0x2277a8: 0x24c67668  addiu       $a2, $a2, 0x7668
    ctx->pc = 0x2277a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30312));
label_2277ac:
    // 0x2277ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2277acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2277b0:
    // 0x2277b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2277b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2277b4:
    // 0x2277b4: 0xc089d2c  jal         func_2274B0
label_2277b8:
    if (ctx->pc == 0x2277B8u) {
        ctx->pc = 0x2277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B4u;
        // 0x2277b8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277BCu;
        goto label_2277bc;
    }
    ctx->pc = 0x2277B4u;
    SET_GPR_U32(ctx, 31, 0x2277BCu);
    ctx->pc = 0x2277B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277B4u;
    // 0x2277b8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2274B0u, 0x2277B4u, 0x2277BCu)) {
        return;
    }
    ctx->pc = 0x2277BCu;
label_2277bc:
    // 0x2277bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2277c0:
    if (ctx->pc == 0x2277C0u) {
        ctx->pc = 0x2277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277BCu;
        // 0x2277c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277C4u;
        goto label_2277c4;
    }
    ctx->pc = 0x2277BCu;
    {
        const bool branch_taken_0x2277bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277BCu;
        // 0x2277c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277bc) {
            ctx->pc = 0x2277C8u;
            goto label_2277c8;
        }
    }
    ctx->pc = 0x2277C4u;
label_2277c4:
    // 0x2277c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2277c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2277c8:
    // 0x2277c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2277c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2277cc:
    // 0x2277cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2277ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2277d0:
    // 0x2277d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2277d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2277d4:
    // 0x2277d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2277d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2277d8:
    // 0x2277d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2277d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2277dc:
    // 0x2277dc: 0x3e00008  jr          $ra
label_2277e0:
    if (ctx->pc == 0x2277E0u) {
        ctx->pc = 0x2277E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277DCu;
        // 0x2277e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277E4u;
        goto label_2277e4;
    }
    ctx->pc = 0x2277DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2277E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277DCu;
        // 0x2277e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2277DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2277E4u;
label_2277e4:
    // 0x2277e4: 0x0  nop
    ctx->pc = 0x2277e4u;
    // NOP
    ctx->pc = 0x2277e8u;
}
