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

// Function: sub_00106598
// Address: 0x106598 - 0x106690
void sub_00106598_0x106598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106598_0x106598");
#endif

    switch (ctx->pc) {
        case 0x106598u: goto label_106598;
        case 0x10659cu: goto label_10659c;
        case 0x1065a0u: goto label_1065a0;
        case 0x1065a4u: goto label_1065a4;
        case 0x1065a8u: goto label_1065a8;
        case 0x1065acu: goto label_1065ac;
        case 0x1065b0u: goto label_1065b0;
        case 0x1065b4u: goto label_1065b4;
        case 0x1065b8u: goto label_1065b8;
        case 0x1065bcu: goto label_1065bc;
        case 0x1065c0u: goto label_1065c0;
        case 0x1065c4u: goto label_1065c4;
        case 0x1065c8u: goto label_1065c8;
        case 0x1065ccu: goto label_1065cc;
        case 0x1065d0u: goto label_1065d0;
        case 0x1065d4u: goto label_1065d4;
        case 0x1065d8u: goto label_1065d8;
        case 0x1065dcu: goto label_1065dc;
        case 0x1065e0u: goto label_1065e0;
        case 0x1065e4u: goto label_1065e4;
        case 0x1065e8u: goto label_1065e8;
        case 0x1065ecu: goto label_1065ec;
        case 0x1065f0u: goto label_1065f0;
        case 0x1065f4u: goto label_1065f4;
        case 0x1065f8u: goto label_1065f8;
        case 0x1065fcu: goto label_1065fc;
        case 0x106600u: goto label_106600;
        case 0x106604u: goto label_106604;
        case 0x106608u: goto label_106608;
        case 0x10660cu: goto label_10660c;
        case 0x106610u: goto label_106610;
        case 0x106614u: goto label_106614;
        case 0x106618u: goto label_106618;
        case 0x10661cu: goto label_10661c;
        case 0x106620u: goto label_106620;
        case 0x106624u: goto label_106624;
        case 0x106628u: goto label_106628;
        case 0x10662cu: goto label_10662c;
        case 0x106630u: goto label_106630;
        case 0x106634u: goto label_106634;
        case 0x106638u: goto label_106638;
        case 0x10663cu: goto label_10663c;
        case 0x106640u: goto label_106640;
        case 0x106644u: goto label_106644;
        case 0x106648u: goto label_106648;
        case 0x10664cu: goto label_10664c;
        case 0x106650u: goto label_106650;
        case 0x106654u: goto label_106654;
        case 0x106658u: goto label_106658;
        case 0x10665cu: goto label_10665c;
        case 0x106660u: goto label_106660;
        case 0x106664u: goto label_106664;
        case 0x106668u: goto label_106668;
        case 0x10666cu: goto label_10666c;
        case 0x106670u: goto label_106670;
        case 0x106674u: goto label_106674;
        case 0x106678u: goto label_106678;
        case 0x10667cu: goto label_10667c;
        case 0x106680u: goto label_106680;
        case 0x106684u: goto label_106684;
        case 0x106688u: goto label_106688;
        case 0x10668cu: goto label_10668c;
        default: break;
    }

    ctx->pc = 0x106598u;

label_106598:
    // 0x106598: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x106598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10659c:
    // 0x10659c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1065a0:
    // 0x1065a0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1065a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1065a4:
    // 0x1065a4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1065a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1065a8:
    // 0x1065a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1065a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1065ac:
    // 0x1065ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1065acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1065b0:
    // 0x1065b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1065b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1065b4:
    // 0x1065b4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1065b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1065b8:
    // 0x1065b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1065b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1065bc:
    // 0x1065bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1065bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1065c0:
    // 0x1065c0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1065c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1065c4:
    // 0x1065c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1065c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1065c8:
    // 0x1065c8: 0x8ec30068  lw          $v1, 0x68($s6)
    ctx->pc = 0x1065c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_1065cc:
    // 0x1065cc: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_1065d0:
    if (ctx->pc == 0x1065D0u) {
        ctx->pc = 0x1065D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065CCu;
        // 0x1065d0: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065D4u;
        goto label_1065d4;
    }
    ctx->pc = 0x1065CCu;
    {
        const bool branch_taken_0x1065cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1065D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065CCu;
        // 0x1065d0: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065cc) {
            ctx->pc = 0x106650u;
            goto label_106650;
        }
    }
    ctx->pc = 0x1065D4u;
label_1065d4:
    // 0x1065d4: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_1065d8:
    // 0x1065d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1065dc:
    // 0x1065dc: 0x2631108c  addiu       $s1, $s1, 0x108C
    ctx->pc = 0x1065dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4236));
label_1065e0:
    // 0x1065e0: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1065e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1065e4:
    // 0x1065e4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1065e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1065e8:
    // 0x1065e8: 0x40f809  jalr        $v0
label_1065ec:
    if (ctx->pc == 0x1065ECu) {
        ctx->pc = 0x1065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E8u;
        // 0x1065ec: 0x26d40034  addiu       $s4, $s6, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065F0u;
        goto label_1065f0;
    }
    ctx->pc = 0x1065E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1065F0u);
        ctx->pc = 0x1065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E8u;
        // 0x1065ec: 0x26d40034  addiu       $s4, $s6, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 52));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1065E8u, 0x1065F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1065F0u;
label_1065f0:
    // 0x1065f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1065f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1065f4:
    // 0x1065f4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1065f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1065f8:
    // 0x1065f8: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x1065f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1065fc:
    // 0x1065fc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_106600:
    // 0x106600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x106600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106604:
    // 0x106604: 0x40f809  jalr        $v0
label_106608:
    if (ctx->pc == 0x106608u) {
        ctx->pc = 0x106608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106604u;
        // 0x106608: 0x2169023  subu        $s2, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10660Cu;
        goto label_10660c;
    }
    ctx->pc = 0x106604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10660Cu);
        ctx->pc = 0x106608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106604u;
        // 0x106608: 0x2169023  subu        $s2, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106604u, 0x10660Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10660Cu;
label_10660c:
    // 0x10660c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x10660cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_106610:
    // 0x106610: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x106610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106614:
    // 0x106614: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x106614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_106618:
    // 0x106618: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x106618u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10661c:
    // 0x10661c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_106620:
    // 0x106620: 0x40f809  jalr        $v0
label_106624:
    if (ctx->pc == 0x106624u) {
        ctx->pc = 0x106624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106620u;
        // 0x106624: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106628u;
        goto label_106628;
    }
    ctx->pc = 0x106620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106628u);
        ctx->pc = 0x106624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106620u;
        // 0x106624: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106620u, 0x106628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106628u;
label_106628:
    // 0x106628: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x106628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_10662c:
    // 0x10662c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_106630:
    // 0x106630: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x106630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106634:
    // 0x106634: 0xc065c40  jal         func_197100
label_106638:
    if (ctx->pc == 0x106638u) {
        ctx->pc = 0x106638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106634u;
        // 0x106638: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10663Cu;
        goto label_10663c;
    }
    ctx->pc = 0x106634u;
    SET_GPR_U32(ctx, 31, 0x10663Cu);
    ctx->pc = 0x106638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106634u;
    // 0x106638: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x106634u, 0x10663Cu)) {
        return;
    }
    ctx->pc = 0x10663Cu;
label_10663c:
    // 0x10663c: 0xaec20064  sw          $v0, 0x64($s6)
    ctx->pc = 0x10663cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 2));
label_106640:
    // 0x106640: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x106640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106644:
    // 0x106644: 0xc0654c4  jal         func_195310
label_106648:
    if (ctx->pc == 0x106648u) {
        ctx->pc = 0x106648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106644u;
        // 0x106648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10664Cu;
        goto label_10664c;
    }
    ctx->pc = 0x106644u;
    SET_GPR_U32(ctx, 31, 0x10664Cu);
    ctx->pc = 0x106648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106644u;
    // 0x106648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x195310u, 0x106644u, 0x10664Cu)) {
        return;
    }
    ctx->pc = 0x10664Cu;
label_10664c:
    // 0x10664c: 0xaec20068  sw          $v0, 0x68($s6)
    ctx->pc = 0x10664cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 2));
label_106650:
    // 0x106650: 0x8ee404c4  lw          $a0, 0x4C4($s7)
    ctx->pc = 0x106650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1220)));
label_106654:
    // 0x106654: 0xc065458  jal         func_195160
label_106658:
    if (ctx->pc == 0x106658u) {
        ctx->pc = 0x106658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106654u;
        // 0x106658: 0x8ec50068  lw          $a1, 0x68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10665Cu;
        goto label_10665c;
    }
    ctx->pc = 0x106654u;
    SET_GPR_U32(ctx, 31, 0x10665Cu);
    ctx->pc = 0x106658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106654u;
    // 0x106658: 0x8ec50068  lw          $a1, 0x68($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x195160u, 0x106654u, 0x10665Cu)) {
        return;
    }
    ctx->pc = 0x10665Cu;
label_10665c:
    // 0x10665c: 0xaec2006c  sw          $v0, 0x6C($s6)
    ctx->pc = 0x10665cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
label_106660:
    // 0x106660: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x106660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_106664:
    // 0x106664: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x106664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_106668:
    // 0x106668: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x106668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10666c:
    // 0x10666c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x10666cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_106670:
    // 0x106670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x106670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_106674:
    // 0x106674: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x106674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_106678:
    // 0x106678: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x106678u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10667c:
    // 0x10667c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x10667cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106680:
    // 0x106680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106684:
    // 0x106684: 0x3e00008  jr          $ra
label_106688:
    if (ctx->pc == 0x106688u) {
        ctx->pc = 0x106688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106684u;
        // 0x106688: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10668Cu;
        goto label_10668c;
    }
    ctx->pc = 0x106684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106684u;
        // 0x106688: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10668Cu;
label_10668c:
    // 0x10668c: 0x0  nop
    ctx->pc = 0x10668cu;
    // NOP
    ctx->pc = 0x106690u;
}
