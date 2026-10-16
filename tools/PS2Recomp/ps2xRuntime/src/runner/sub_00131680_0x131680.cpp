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

// Function: sub_00131680
// Address: 0x131680 - 0x131810
void sub_00131680_0x131680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131680_0x131680");
#endif

    switch (ctx->pc) {
        case 0x131680u: goto label_131680;
        case 0x131684u: goto label_131684;
        case 0x131688u: goto label_131688;
        case 0x13168cu: goto label_13168c;
        case 0x131690u: goto label_131690;
        case 0x131694u: goto label_131694;
        case 0x131698u: goto label_131698;
        case 0x13169cu: goto label_13169c;
        case 0x1316a0u: goto label_1316a0;
        case 0x1316a4u: goto label_1316a4;
        case 0x1316a8u: goto label_1316a8;
        case 0x1316acu: goto label_1316ac;
        case 0x1316b0u: goto label_1316b0;
        case 0x1316b4u: goto label_1316b4;
        case 0x1316b8u: goto label_1316b8;
        case 0x1316bcu: goto label_1316bc;
        case 0x1316c0u: goto label_1316c0;
        case 0x1316c4u: goto label_1316c4;
        case 0x1316c8u: goto label_1316c8;
        case 0x1316ccu: goto label_1316cc;
        case 0x1316d0u: goto label_1316d0;
        case 0x1316d4u: goto label_1316d4;
        case 0x1316d8u: goto label_1316d8;
        case 0x1316dcu: goto label_1316dc;
        case 0x1316e0u: goto label_1316e0;
        case 0x1316e4u: goto label_1316e4;
        case 0x1316e8u: goto label_1316e8;
        case 0x1316ecu: goto label_1316ec;
        case 0x1316f0u: goto label_1316f0;
        case 0x1316f4u: goto label_1316f4;
        case 0x1316f8u: goto label_1316f8;
        case 0x1316fcu: goto label_1316fc;
        case 0x131700u: goto label_131700;
        case 0x131704u: goto label_131704;
        case 0x131708u: goto label_131708;
        case 0x13170cu: goto label_13170c;
        case 0x131710u: goto label_131710;
        case 0x131714u: goto label_131714;
        case 0x131718u: goto label_131718;
        case 0x13171cu: goto label_13171c;
        case 0x131720u: goto label_131720;
        case 0x131724u: goto label_131724;
        case 0x131728u: goto label_131728;
        case 0x13172cu: goto label_13172c;
        case 0x131730u: goto label_131730;
        case 0x131734u: goto label_131734;
        case 0x131738u: goto label_131738;
        case 0x13173cu: goto label_13173c;
        case 0x131740u: goto label_131740;
        case 0x131744u: goto label_131744;
        case 0x131748u: goto label_131748;
        case 0x13174cu: goto label_13174c;
        case 0x131750u: goto label_131750;
        case 0x131754u: goto label_131754;
        case 0x131758u: goto label_131758;
        case 0x13175cu: goto label_13175c;
        case 0x131760u: goto label_131760;
        case 0x131764u: goto label_131764;
        case 0x131768u: goto label_131768;
        case 0x13176cu: goto label_13176c;
        case 0x131770u: goto label_131770;
        case 0x131774u: goto label_131774;
        case 0x131778u: goto label_131778;
        case 0x13177cu: goto label_13177c;
        case 0x131780u: goto label_131780;
        case 0x131784u: goto label_131784;
        case 0x131788u: goto label_131788;
        case 0x13178cu: goto label_13178c;
        case 0x131790u: goto label_131790;
        case 0x131794u: goto label_131794;
        case 0x131798u: goto label_131798;
        case 0x13179cu: goto label_13179c;
        case 0x1317a0u: goto label_1317a0;
        case 0x1317a4u: goto label_1317a4;
        case 0x1317a8u: goto label_1317a8;
        case 0x1317acu: goto label_1317ac;
        case 0x1317b0u: goto label_1317b0;
        case 0x1317b4u: goto label_1317b4;
        case 0x1317b8u: goto label_1317b8;
        case 0x1317bcu: goto label_1317bc;
        case 0x1317c0u: goto label_1317c0;
        case 0x1317c4u: goto label_1317c4;
        case 0x1317c8u: goto label_1317c8;
        case 0x1317ccu: goto label_1317cc;
        case 0x1317d0u: goto label_1317d0;
        case 0x1317d4u: goto label_1317d4;
        case 0x1317d8u: goto label_1317d8;
        case 0x1317dcu: goto label_1317dc;
        case 0x1317e0u: goto label_1317e0;
        case 0x1317e4u: goto label_1317e4;
        case 0x1317e8u: goto label_1317e8;
        case 0x1317ecu: goto label_1317ec;
        case 0x1317f0u: goto label_1317f0;
        case 0x1317f4u: goto label_1317f4;
        case 0x1317f8u: goto label_1317f8;
        case 0x1317fcu: goto label_1317fc;
        case 0x131800u: goto label_131800;
        case 0x131804u: goto label_131804;
        case 0x131808u: goto label_131808;
        case 0x13180cu: goto label_13180c;
        default: break;
    }

    ctx->pc = 0x131680u;

label_131680:
    // 0x131680: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_131684:
    // 0x131684: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x131684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_131688:
    // 0x131688: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x131688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_13168c:
    // 0x13168c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_131690:
    // 0x131690: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x131690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_131694:
    // 0x131694: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131698:
    // 0x131698: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x131698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_13169c:
    // 0x13169c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x13169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1316a0:
    // 0x1316a0: 0x8e421b9c  lw          $v0, 0x1B9C($s2)
    ctx->pc = 0x1316a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7068)));
label_1316a4:
    // 0x1316a4: 0xc040688  jal         func_101A20
label_1316a8:
    if (ctx->pc == 0x1316A8u) {
        ctx->pc = 0x1316A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316A4u;
        // 0x1316a8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1316ACu;
        goto label_1316ac;
    }
    ctx->pc = 0x1316A4u;
    SET_GPR_U32(ctx, 31, 0x1316ACu);
    ctx->pc = 0x1316A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316A4u;
    // 0x1316a8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1316A4u, 0x1316ACu)) {
        return;
    }
    ctx->pc = 0x1316ACu;
label_1316ac:
    // 0x1316ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1316acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1316b0:
    // 0x1316b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1316b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1316b4:
    // 0x1316b4: 0xc0406bc  jal         func_101AF0
label_1316b8:
    if (ctx->pc == 0x1316B8u) {
        ctx->pc = 0x1316B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316B4u;
        // 0x1316b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1316BCu;
        goto label_1316bc;
    }
    ctx->pc = 0x1316B4u;
    SET_GPR_U32(ctx, 31, 0x1316BCu);
    ctx->pc = 0x1316B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316B4u;
    // 0x1316b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AF0u, 0x1316B4u, 0x1316BCu)) {
        return;
    }
    ctx->pc = 0x1316BCu;
label_1316bc:
    // 0x1316bc: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1316bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1316c0:
    // 0x1316c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1316c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1316c4:
    // 0x1316c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1316c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1316c8:
    // 0x1316c8: 0xc092fa4  jal         func_24BE90
label_1316cc:
    if (ctx->pc == 0x1316CCu) {
        ctx->pc = 0x1316CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316C8u;
        // 0x1316cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1316D0u;
        goto label_1316d0;
    }
    ctx->pc = 0x1316C8u;
    SET_GPR_U32(ctx, 31, 0x1316D0u);
    ctx->pc = 0x1316CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316C8u;
    // 0x1316cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x1316C8u, 0x1316D0u)) {
        return;
    }
    ctx->pc = 0x1316D0u;
label_1316d0:
    // 0x1316d0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x1316d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1316d4:
    // 0x1316d4: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x1316d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_1316d8:
    // 0x1316d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1316d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1316dc:
    // 0x1316dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1316dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1316e0:
    // 0x1316e0: 0x40f809  jalr        $v0
label_1316e4:
    if (ctx->pc == 0x1316E4u) {
        ctx->pc = 0x1316E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E0u;
        // 0x1316e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1316E8u;
        goto label_1316e8;
    }
    ctx->pc = 0x1316E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1316E8u);
        ctx->pc = 0x1316E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E0u;
        // 0x1316e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1316E0u, 0x1316E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1316E8u;
label_1316e8:
    // 0x1316e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1316ec:
    if (ctx->pc == 0x1316ECu) {
        ctx->pc = 0x1316ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E8u;
        // 0x1316ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1316F0u;
        goto label_1316f0;
    }
    ctx->pc = 0x1316E8u;
    {
        const bool branch_taken_0x1316e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E8u;
        // 0x1316ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316e8) {
            ctx->pc = 0x1316F4u;
            goto label_1316f4;
        }
    }
    ctx->pc = 0x1316F0u;
label_1316f0:
    // 0x1316f0: 0x8e460b58  lw          $a2, 0xB58($s2)
    ctx->pc = 0x1316f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2904)));
label_1316f4:
    // 0x1316f4: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x1316f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_1316f8:
    // 0x1316f8: 0xc053432  jal         func_14D0C8
label_1316fc:
    if (ctx->pc == 0x1316FCu) {
        ctx->pc = 0x1316FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316F8u;
        // 0x1316fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131700u;
        goto label_131700;
    }
    ctx->pc = 0x1316F8u;
    SET_GPR_U32(ctx, 31, 0x131700u);
    ctx->pc = 0x1316FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316F8u;
    // 0x1316fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D0C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D0C8u, 0x1316F8u, 0x131700u)) {
        return;
    }
    ctx->pc = 0x131700u;
label_131700:
    // 0x131700: 0x8e421b9c  lw          $v0, 0x1B9C($s2)
    ctx->pc = 0x131700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7068)));
label_131704:
    // 0x131704: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_131708:
    if (ctx->pc == 0x131708u) {
        ctx->pc = 0x131708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131704u;
        // 0x131708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13170Cu;
        goto label_13170c;
    }
    ctx->pc = 0x131704u;
    {
        const bool branch_taken_0x131704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131704u;
        // 0x131708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131704) {
            ctx->pc = 0x1317F8u;
            goto label_1317f8;
        }
    }
    ctx->pc = 0x13170Cu;
label_13170c:
    // 0x13170c: 0xc040688  jal         func_101A20
label_131710:
    if (ctx->pc == 0x131710u) {
        ctx->pc = 0x131710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13170Cu;
        // 0x131710: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131714u;
        goto label_131714;
    }
    ctx->pc = 0x13170Cu;
    SET_GPR_U32(ctx, 31, 0x131714u);
    ctx->pc = 0x131710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13170Cu;
    // 0x131710: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x13170Cu, 0x131714u)) {
        return;
    }
    ctx->pc = 0x131714u;
label_131714:
    // 0x131714: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x131714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131718:
    // 0x131718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13171c:
    // 0x13171c: 0xc0406bc  jal         func_101AF0
label_131720:
    if (ctx->pc == 0x131720u) {
        ctx->pc = 0x131720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13171Cu;
        // 0x131720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131724u;
        goto label_131724;
    }
    ctx->pc = 0x13171Cu;
    SET_GPR_U32(ctx, 31, 0x131724u);
    ctx->pc = 0x131720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13171Cu;
    // 0x131720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AF0u, 0x13171Cu, 0x131724u)) {
        return;
    }
    ctx->pc = 0x131724u;
label_131724:
    // 0x131724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_131728:
    // 0x131728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13172c:
    // 0x13172c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x13172cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_131730:
    // 0x131730: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x131730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_131734:
    // 0x131734: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x131734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_131738:
    // 0x131738: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x131738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13173c:
    // 0x13173c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x13173cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_131740:
    // 0x131740: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x131740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_131744:
    // 0x131744: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x131744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_131748:
    // 0x131748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13174c:
    // 0x13174c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x13174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_131750:
    // 0x131750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131754:
    // 0x131754: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x131754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_131758:
    // 0x131758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13175c:
    // 0x13175c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x13175cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_131760:
    // 0x131760: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x131760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_131764:
    // 0x131764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x131764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_131768:
    // 0x131768: 0xc092e32  jal         func_24B8C8
label_13176c:
    if (ctx->pc == 0x13176Cu) {
        ctx->pc = 0x13176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131768u;
        // 0x13176c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131770u;
        goto label_131770;
    }
    ctx->pc = 0x131768u;
    SET_GPR_U32(ctx, 31, 0x131770u);
    ctx->pc = 0x13176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131768u;
    // 0x13176c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x131768u, 0x131770u)) {
        return;
    }
    ctx->pc = 0x131770u;
label_131770:
    // 0x131770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131774:
    // 0x131774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131778:
    // 0x131778: 0xc092ea4  jal         func_24BA90
label_13177c:
    if (ctx->pc == 0x13177Cu) {
        ctx->pc = 0x13177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131778u;
        // 0x13177c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131780u;
        goto label_131780;
    }
    ctx->pc = 0x131778u;
    SET_GPR_U32(ctx, 31, 0x131780u);
    ctx->pc = 0x13177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131778u;
    // 0x13177c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x131778u, 0x131780u)) {
        return;
    }
    ctx->pc = 0x131780u;
label_131780:
    // 0x131780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131784:
    // 0x131784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131788:
    // 0x131788: 0xc092fa4  jal         func_24BE90
label_13178c:
    if (ctx->pc == 0x13178Cu) {
        ctx->pc = 0x13178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131788u;
        // 0x13178c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131790u;
        goto label_131790;
    }
    ctx->pc = 0x131788u;
    SET_GPR_U32(ctx, 31, 0x131790u);
    ctx->pc = 0x13178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131788u;
    // 0x13178c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x131788u, 0x131790u)) {
        return;
    }
    ctx->pc = 0x131790u;
label_131790:
    // 0x131790: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x131790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_131794:
    // 0x131794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131798:
    // 0x131798: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x131798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13179c:
    // 0x13179c: 0xc092fa4  jal         func_24BE90
label_1317a0:
    if (ctx->pc == 0x1317A0u) {
        ctx->pc = 0x1317A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13179Cu;
        // 0x1317a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317A4u;
        goto label_1317a4;
    }
    ctx->pc = 0x13179Cu;
    SET_GPR_U32(ctx, 31, 0x1317A4u);
    ctx->pc = 0x1317A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13179Cu;
    // 0x1317a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x13179Cu, 0x1317A4u)) {
        return;
    }
    ctx->pc = 0x1317A4u;
label_1317a4:
    // 0x1317a4: 0x8e431b9c  lw          $v1, 0x1B9C($s2)
    ctx->pc = 0x1317a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7068)));
label_1317a8:
    // 0x1317a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1317a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1317ac:
    // 0x1317ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1317acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1317b0:
    // 0x1317b0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1317b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1317b4:
    // 0x1317b4: 0xc0899e8  jal         func_2267A0
label_1317b8:
    if (ctx->pc == 0x1317B8u) {
        ctx->pc = 0x1317B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B4u;
        // 0x1317b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317BCu;
        goto label_1317bc;
    }
    ctx->pc = 0x1317B4u;
    SET_GPR_U32(ctx, 31, 0x1317BCu);
    ctx->pc = 0x1317B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317B4u;
    // 0x1317b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x1317B4u, 0x1317BCu)) {
        return;
    }
    ctx->pc = 0x1317BCu;
label_1317bc:
    // 0x1317bc: 0xc08992e  jal         func_2264B8
label_1317c0:
    if (ctx->pc == 0x1317C0u) {
        ctx->pc = 0x1317C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317BCu;
        // 0x1317c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317C4u;
        goto label_1317c4;
    }
    ctx->pc = 0x1317BCu;
    SET_GPR_U32(ctx, 31, 0x1317C4u);
    ctx->pc = 0x1317C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317BCu;
    // 0x1317c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1317BCu, 0x1317C4u)) {
        return;
    }
    ctx->pc = 0x1317C4u;
label_1317c4:
    // 0x1317c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1317c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1317c8:
    // 0x1317c8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1317c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1317cc:
    // 0x1317cc: 0x8c444788  lw          $a0, 0x4788($v0)
    ctx->pc = 0x1317ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18312)));
label_1317d0:
    // 0x1317d0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1317d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1317d4:
    // 0x1317d4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_1317d8:
    if (ctx->pc == 0x1317D8u) {
        ctx->pc = 0x1317D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317D4u;
        // 0x1317d8: 0x8e451b9c  lw          $a1, 0x1B9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317DCu;
        goto label_1317dc;
    }
    ctx->pc = 0x1317D4u;
    {
        const bool branch_taken_0x1317d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1317D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317D4u;
        // 0x1317d8: 0x8e451b9c  lw          $a1, 0x1B9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317d4) {
            ctx->pc = 0x1317F8u;
            goto label_1317f8;
        }
    }
    ctx->pc = 0x1317DCu;
label_1317dc:
    // 0x1317dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1317dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1317e0:
    // 0x1317e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1317e4:
    if (ctx->pc == 0x1317E4u) {
        ctx->pc = 0x1317E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317E0u;
        // 0x1317e4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317E8u;
        goto label_1317e8;
    }
    ctx->pc = 0x1317E0u;
    {
        const bool branch_taken_0x1317e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317E0u;
        // 0x1317e4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317e0) {
            ctx->pc = 0x1317FCu;
            goto label_1317fc;
        }
    }
    ctx->pc = 0x1317E8u;
label_1317e8:
    // 0x1317e8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_1317ec:
    // 0x1317ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1317ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1317f0:
    // 0x1317f0: 0xc07fd18  jal         func_1FF460
label_1317f4:
    if (ctx->pc == 0x1317F4u) {
        ctx->pc = 0x1317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317F0u;
        // 0x1317f4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317F8u;
        goto label_1317f8;
    }
    ctx->pc = 0x1317F0u;
    SET_GPR_U32(ctx, 31, 0x1317F8u);
    ctx->pc = 0x1317F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317F0u;
    // 0x1317f4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1317F0u, 0x1317F8u)) {
        return;
    }
    ctx->pc = 0x1317F8u;
label_1317f8:
    // 0x1317f8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1317f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1317fc:
    // 0x1317fc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1317fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_131800:
    // 0x131800: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x131800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_131804:
    // 0x131804: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x131804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_131808:
    // 0x131808: 0x3e00008  jr          $ra
label_13180c:
    if (ctx->pc == 0x13180Cu) {
        ctx->pc = 0x13180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131808u;
        // 0x13180c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131810u;
        goto label_fallthrough_0x131808;
    }
    ctx->pc = 0x131808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131808u;
        // 0x13180c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131808:
    ctx->pc = 0x131810u;
}
