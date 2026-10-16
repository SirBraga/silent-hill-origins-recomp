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

// Function: sub_001605E0
// Address: 0x1605e0 - 0x160728
void sub_001605E0_0x1605e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001605E0_0x1605e0");
#endif

    switch (ctx->pc) {
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        case 0x160618u: goto label_160618;
        case 0x16061cu: goto label_16061c;
        case 0x160620u: goto label_160620;
        case 0x160624u: goto label_160624;
        case 0x160628u: goto label_160628;
        case 0x16062cu: goto label_16062c;
        case 0x160630u: goto label_160630;
        case 0x160634u: goto label_160634;
        case 0x160638u: goto label_160638;
        case 0x16063cu: goto label_16063c;
        case 0x160640u: goto label_160640;
        case 0x160644u: goto label_160644;
        case 0x160648u: goto label_160648;
        case 0x16064cu: goto label_16064c;
        case 0x160650u: goto label_160650;
        case 0x160654u: goto label_160654;
        case 0x160658u: goto label_160658;
        case 0x16065cu: goto label_16065c;
        case 0x160660u: goto label_160660;
        case 0x160664u: goto label_160664;
        case 0x160668u: goto label_160668;
        case 0x16066cu: goto label_16066c;
        case 0x160670u: goto label_160670;
        case 0x160674u: goto label_160674;
        case 0x160678u: goto label_160678;
        case 0x16067cu: goto label_16067c;
        case 0x160680u: goto label_160680;
        case 0x160684u: goto label_160684;
        case 0x160688u: goto label_160688;
        case 0x16068cu: goto label_16068c;
        case 0x160690u: goto label_160690;
        case 0x160694u: goto label_160694;
        case 0x160698u: goto label_160698;
        case 0x16069cu: goto label_16069c;
        case 0x1606a0u: goto label_1606a0;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606a8u: goto label_1606a8;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b0u: goto label_1606b0;
        case 0x1606b4u: goto label_1606b4;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c0u: goto label_1606c0;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606c8u: goto label_1606c8;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d0u: goto label_1606d0;
        case 0x1606d4u: goto label_1606d4;
        case 0x1606d8u: goto label_1606d8;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606e0u: goto label_1606e0;
        case 0x1606e4u: goto label_1606e4;
        case 0x1606e8u: goto label_1606e8;
        case 0x1606ecu: goto label_1606ec;
        case 0x1606f0u: goto label_1606f0;
        case 0x1606f4u: goto label_1606f4;
        case 0x1606f8u: goto label_1606f8;
        case 0x1606fcu: goto label_1606fc;
        case 0x160700u: goto label_160700;
        case 0x160704u: goto label_160704;
        case 0x160708u: goto label_160708;
        case 0x16070cu: goto label_16070c;
        case 0x160710u: goto label_160710;
        case 0x160714u: goto label_160714;
        case 0x160718u: goto label_160718;
        case 0x16071cu: goto label_16071c;
        case 0x160720u: goto label_160720;
        case 0x160724u: goto label_160724;
        default: break;
    }

    ctx->pc = 0x1605e0u;

label_1605e0:
    // 0x1605e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1605e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1605e4:
    // 0x1605e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1605e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1605e8:
    // 0x1605e8: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1605e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1605ec:
    // 0x1605ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1605ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1605f0:
    // 0x1605f0: 0x8e028644  lw          $v0, -0x79BC($s0)
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936132)));
label_1605f4:
    // 0x1605f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1605f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1605f8:
    // 0x1605f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1605f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1605fc:
    // 0x1605fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1605fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_160600:
    // 0x160600: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_160604:
    if (ctx->pc == 0x160604u) {
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160608u;
        goto label_160608;
    }
    ctx->pc = 0x160600u;
    {
        const bool branch_taken_0x160600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160600) {
            ctx->pc = 0x16070Cu;
            goto label_16070c;
        }
    }
    ctx->pc = 0x160608u;
label_160608:
    // 0x160608: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_16060c:
    // 0x16060c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_160610:
    // 0x160610: 0x24510fd8  addiu       $s1, $v0, 0xFD8
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_160614:
    // 0x160614: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160618:
    // 0x160618: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_16061c:
    // 0x16061c: 0x40f809  jalr        $v0
label_160620:
    if (ctx->pc == 0x160620u) {
        ctx->pc = 0x160620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16061Cu;
        // 0x160620: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160624u;
        goto label_160624;
    }
    ctx->pc = 0x16061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160624u);
        ctx->pc = 0x160620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16061Cu;
        // 0x160620: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16061Cu, 0x160624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160624u;
label_160624:
    // 0x160624: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_160628:
    // 0x160628: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x160628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_16062c:
    // 0x16062c: 0x40f809  jalr        $v0
label_160630:
    if (ctx->pc == 0x160630u) {
        ctx->pc = 0x160630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16062Cu;
        // 0x160630: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160634u;
        goto label_160634;
    }
    ctx->pc = 0x16062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160634u);
        ctx->pc = 0x160630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16062Cu;
        // 0x160630: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16062Cu, 0x160634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160634u;
label_160634:
    // 0x160634: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160638:
    // 0x160638: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16063c:
    // 0x16063c: 0x40f809  jalr        $v0
label_160640:
    if (ctx->pc == 0x160640u) {
        ctx->pc = 0x160640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16063Cu;
        // 0x160640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160644u;
        goto label_160644;
    }
    ctx->pc = 0x16063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160644u);
        ctx->pc = 0x160640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16063Cu;
        // 0x160640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16063Cu, 0x160644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160644u;
label_160644:
    // 0x160644: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160648:
    // 0x160648: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x160648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16064c:
    // 0x16064c: 0x40f809  jalr        $v0
label_160650:
    if (ctx->pc == 0x160650u) {
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160654u;
        goto label_160654;
    }
    ctx->pc = 0x16064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160654u);
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16064Cu, 0x160654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160654u;
label_160654:
    // 0x160654: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160658:
    // 0x160658: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_16065c:
    // 0x16065c: 0x40f809  jalr        $v0
label_160660:
    if (ctx->pc == 0x160660u) {
        ctx->pc = 0x160660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16065Cu;
        // 0x160660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160664u;
        goto label_160664;
    }
    ctx->pc = 0x16065Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160664u);
        ctx->pc = 0x160660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16065Cu;
        // 0x160660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16065Cu, 0x160664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160664u;
label_160664:
    // 0x160664: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160668:
    // 0x160668: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x160668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16066c:
    // 0x16066c: 0x40f809  jalr        $v0
label_160670:
    if (ctx->pc == 0x160670u) {
        ctx->pc = 0x160670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16066Cu;
        // 0x160670: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160674u;
        goto label_160674;
    }
    ctx->pc = 0x16066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160674u);
        ctx->pc = 0x160670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16066Cu;
        // 0x160670: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16066Cu, 0x160674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160674u;
label_160674:
    // 0x160674: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160678:
    // 0x160678: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16067c:
    // 0x16067c: 0x40f809  jalr        $v0
label_160680:
    if (ctx->pc == 0x160680u) {
        ctx->pc = 0x160680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16067Cu;
        // 0x160680: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160684u;
        goto label_160684;
    }
    ctx->pc = 0x16067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160684u);
        ctx->pc = 0x160680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16067Cu;
        // 0x160680: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16067Cu, 0x160684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160684u;
label_160684:
    // 0x160684: 0xc08c576  jal         func_2315D8
label_160688:
    if (ctx->pc == 0x160688u) {
        ctx->pc = 0x160688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160684u;
        // 0x160688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16068Cu;
        goto label_16068c;
    }
    ctx->pc = 0x160684u;
    SET_GPR_U32(ctx, 31, 0x16068Cu);
    ctx->pc = 0x160688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160684u;
    // 0x160688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2315D8u, 0x160684u, 0x16068Cu)) {
        return;
    }
    ctx->pc = 0x16068Cu;
label_16068c:
    // 0x16068c: 0x8e108644  lw          $s0, -0x79BC($s0)
    ctx->pc = 0x16068cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936132)));
label_160690:
    // 0x160690: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_160694:
    if (ctx->pc == 0x160694u) {
        ctx->pc = 0x160694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160690u;
        // 0x160694: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160698u;
        goto label_160698;
    }
    ctx->pc = 0x160690u;
    {
        const bool branch_taken_0x160690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160690) {
            ctx->pc = 0x160694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160690u;
            // 0x160694: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1606D4u;
            goto label_1606d4;
        }
    }
    ctx->pc = 0x160698u;
label_160698:
    // 0x160698: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_16069c:
    // 0x16069c: 0x0  nop
    ctx->pc = 0x16069cu;
    // NOP
label_1606a0:
    // 0x1606a0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1606a4:
    if (ctx->pc == 0x1606A4u) {
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x8e100044  lw          $s0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606A8u;
        goto label_1606a8;
    }
    ctx->pc = 0x1606A0u;
    {
        const bool branch_taken_0x1606a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606a0) {
            ctx->pc = 0x1606A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1606A0u;
            // 0x1606a4: 0x8e100044  lw          $s0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1606C8u;
            goto label_1606c8;
        }
    }
    ctx->pc = 0x1606A8u;
label_1606a8:
    // 0x1606a8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1606a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1606ac:
    // 0x1606ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1606acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1606b0:
    // 0x1606b0: 0x40f809  jalr        $v0
label_1606b4:
    if (ctx->pc == 0x1606B4u) {
        ctx->pc = 0x1606B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606B0u;
        // 0x1606b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606B8u;
        goto label_1606b8;
    }
    ctx->pc = 0x1606B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1606B8u);
        ctx->pc = 0x1606B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606B0u;
        // 0x1606b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606B0u, 0x1606B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1606B8u;
label_1606b8:
    // 0x1606b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1606bc:
    // 0x1606bc: 0xc057fae  jal         func_15FEB8
label_1606c0:
    if (ctx->pc == 0x1606C0u) {
        ctx->pc = 0x1606C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606BCu;
        // 0x1606c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606C4u;
        goto label_1606c4;
    }
    ctx->pc = 0x1606BCu;
    SET_GPR_U32(ctx, 31, 0x1606C4u);
    ctx->pc = 0x1606C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606BCu;
    // 0x1606c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FEB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15FEB8u, 0x1606BCu, 0x1606C4u)) {
        return;
    }
    ctx->pc = 0x1606C4u;
label_1606c4:
    // 0x1606c4: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x1606c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1606c8:
    // 0x1606c8: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_1606cc:
    if (ctx->pc == 0x1606CCu) {
        ctx->pc = 0x1606CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606C8u;
        // 0x1606cc: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606D0u;
        goto label_1606d0;
    }
    ctx->pc = 0x1606C8u;
    {
        const bool branch_taken_0x1606c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1606c8) {
            ctx->pc = 0x1606CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1606C8u;
            // 0x1606cc: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1606A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1606a0;
        }
    }
    ctx->pc = 0x1606D0u;
label_1606d0:
    // 0x1606d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1606d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1606d4:
    // 0x1606d4: 0xc08c576  jal         func_2315D8
label_1606d8:
    if (ctx->pc == 0x1606D8u) {
        ctx->pc = 0x1606D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606D4u;
        // 0x1606d8: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606DCu;
        goto label_1606dc;
    }
    ctx->pc = 0x1606D4u;
    SET_GPR_U32(ctx, 31, 0x1606DCu);
    ctx->pc = 0x1606D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606D4u;
    // 0x1606d8: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2315D8u, 0x1606D4u, 0x1606DCu)) {
        return;
    }
    ctx->pc = 0x1606DCu;
label_1606dc:
    // 0x1606dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1606e0:
    // 0x1606e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1606e4:
    // 0x1606e4: 0x40f809  jalr        $v0
label_1606e8:
    if (ctx->pc == 0x1606E8u) {
        ctx->pc = 0x1606E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E4u;
        // 0x1606e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606ECu;
        goto label_1606ec;
    }
    ctx->pc = 0x1606E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1606ECu);
        ctx->pc = 0x1606E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E4u;
        // 0x1606e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606E4u, 0x1606ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1606ECu;
label_1606ec:
    // 0x1606ec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1606ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1606f0:
    // 0x1606f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1606f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1606f4:
    // 0x1606f4: 0x40f809  jalr        $v0
label_1606f8:
    if (ctx->pc == 0x1606F8u) {
        ctx->pc = 0x1606F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F4u;
        // 0x1606f8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606FCu;
        goto label_1606fc;
    }
    ctx->pc = 0x1606F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1606FCu);
        ctx->pc = 0x1606F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F4u;
        // 0x1606f8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606F4u, 0x1606FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1606FCu;
label_1606fc:
    // 0x1606fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1606fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160700:
    // 0x160700: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x160700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_160704:
    // 0x160704: 0x40f809  jalr        $v0
label_160708:
    if (ctx->pc == 0x160708u) {
        ctx->pc = 0x160708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160704u;
        // 0x160708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16070Cu;
        goto label_16070c;
    }
    ctx->pc = 0x160704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16070Cu);
        ctx->pc = 0x160708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160704u;
        // 0x160708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160704u, 0x16070Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16070Cu;
label_16070c:
    // 0x16070c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16070cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_160710:
    // 0x160710: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x160710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_160714:
    // 0x160714: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x160714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160718:
    // 0x160718: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x160718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16071c:
    // 0x16071c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160720:
    // 0x160720: 0x3e00008  jr          $ra
label_160724:
    if (ctx->pc == 0x160724u) {
        ctx->pc = 0x160724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160720u;
        // 0x160724: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160728u;
        goto label_fallthrough_0x160720;
    }
    ctx->pc = 0x160720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160720u;
        // 0x160724: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160720:
    ctx->pc = 0x160728u;
}
