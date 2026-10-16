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

// Function: sub_002D2588
// Address: 0x2d2588 - 0x2d2698
void sub_002D2588_0x2d2588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2588_0x2d2588");
#endif

    switch (ctx->pc) {
        case 0x2d2588u: goto label_2d2588;
        case 0x2d258cu: goto label_2d258c;
        case 0x2d2590u: goto label_2d2590;
        case 0x2d2594u: goto label_2d2594;
        case 0x2d2598u: goto label_2d2598;
        case 0x2d259cu: goto label_2d259c;
        case 0x2d25a0u: goto label_2d25a0;
        case 0x2d25a4u: goto label_2d25a4;
        case 0x2d25a8u: goto label_2d25a8;
        case 0x2d25acu: goto label_2d25ac;
        case 0x2d25b0u: goto label_2d25b0;
        case 0x2d25b4u: goto label_2d25b4;
        case 0x2d25b8u: goto label_2d25b8;
        case 0x2d25bcu: goto label_2d25bc;
        case 0x2d25c0u: goto label_2d25c0;
        case 0x2d25c4u: goto label_2d25c4;
        case 0x2d25c8u: goto label_2d25c8;
        case 0x2d25ccu: goto label_2d25cc;
        case 0x2d25d0u: goto label_2d25d0;
        case 0x2d25d4u: goto label_2d25d4;
        case 0x2d25d8u: goto label_2d25d8;
        case 0x2d25dcu: goto label_2d25dc;
        case 0x2d25e0u: goto label_2d25e0;
        case 0x2d25e4u: goto label_2d25e4;
        case 0x2d25e8u: goto label_2d25e8;
        case 0x2d25ecu: goto label_2d25ec;
        case 0x2d25f0u: goto label_2d25f0;
        case 0x2d25f4u: goto label_2d25f4;
        case 0x2d25f8u: goto label_2d25f8;
        case 0x2d25fcu: goto label_2d25fc;
        case 0x2d2600u: goto label_2d2600;
        case 0x2d2604u: goto label_2d2604;
        case 0x2d2608u: goto label_2d2608;
        case 0x2d260cu: goto label_2d260c;
        case 0x2d2610u: goto label_2d2610;
        case 0x2d2614u: goto label_2d2614;
        case 0x2d2618u: goto label_2d2618;
        case 0x2d261cu: goto label_2d261c;
        case 0x2d2620u: goto label_2d2620;
        case 0x2d2624u: goto label_2d2624;
        case 0x2d2628u: goto label_2d2628;
        case 0x2d262cu: goto label_2d262c;
        case 0x2d2630u: goto label_2d2630;
        case 0x2d2634u: goto label_2d2634;
        case 0x2d2638u: goto label_2d2638;
        case 0x2d263cu: goto label_2d263c;
        case 0x2d2640u: goto label_2d2640;
        case 0x2d2644u: goto label_2d2644;
        case 0x2d2648u: goto label_2d2648;
        case 0x2d264cu: goto label_2d264c;
        case 0x2d2650u: goto label_2d2650;
        case 0x2d2654u: goto label_2d2654;
        case 0x2d2658u: goto label_2d2658;
        case 0x2d265cu: goto label_2d265c;
        case 0x2d2660u: goto label_2d2660;
        case 0x2d2664u: goto label_2d2664;
        case 0x2d2668u: goto label_2d2668;
        case 0x2d266cu: goto label_2d266c;
        case 0x2d2670u: goto label_2d2670;
        case 0x2d2674u: goto label_2d2674;
        case 0x2d2678u: goto label_2d2678;
        case 0x2d267cu: goto label_2d267c;
        case 0x2d2680u: goto label_2d2680;
        case 0x2d2684u: goto label_2d2684;
        case 0x2d2688u: goto label_2d2688;
        case 0x2d268cu: goto label_2d268c;
        case 0x2d2690u: goto label_2d2690;
        case 0x2d2694u: goto label_2d2694;
        default: break;
    }

    ctx->pc = 0x2d2588u;

label_2d2588:
    // 0x2d2588: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d258c:
    // 0x2d258c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2d2590:
    // 0x2d2590: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d2590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2d2594:
    // 0x2d2594: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d2594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2598:
    // 0x2d2598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d2598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2d259c:
    // 0x2d259c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d259cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2d25a0:
    // 0x2d25a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d25a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d25a4:
    // 0x2d25a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d25a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2d25a8:
    // 0x2d25a8: 0x8e710040  lw          $s1, 0x40($s3)
    ctx->pc = 0x2d25a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2d25ac:
    // 0x2d25ac: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2d25acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2d25b0:
    // 0x2d25b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d25b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d25b4:
    // 0x2d25b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d25b8:
    // 0x2d25b8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2d25b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2d25bc:
    // 0x2d25bc: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2d25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_2d25c0:
    // 0x2d25c0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_2d25c4:
    if (ctx->pc == 0x2D25C4u) {
        ctx->pc = 0x2D25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25C0u;
        // 0x2d25c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D25C8u;
        goto label_2d25c8;
    }
    ctx->pc = 0x2D25C0u;
    {
        const bool branch_taken_0x2d25c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25C0u;
        // 0x2d25c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25c0) {
            ctx->pc = 0x2D2668u;
            goto label_2d2668;
        }
    }
    ctx->pc = 0x2D25C8u;
label_2d25c8:
    // 0x2d25c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d25cc:
    // 0x2d25cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d25ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d25d0:
    // 0x2d25d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d25d4:
    if (ctx->pc == 0x2D25D4u) {
        ctx->pc = 0x2D25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25D0u;
        // 0x2d25d4: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D25D8u;
        goto label_2d25d8;
    }
    ctx->pc = 0x2D25D0u;
    {
        const bool branch_taken_0x2d25d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25D0u;
        // 0x2d25d4: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25d0) {
            ctx->pc = 0x2D2600u;
            goto label_2d2600;
        }
    }
    ctx->pc = 0x2D25D8u;
label_2d25d8:
    // 0x2d25d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d25d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d25dc:
    // 0x2d25dc: 0x0  nop
    ctx->pc = 0x2d25dcu;
    // NOP
label_2d25e0:
    // 0x2d25e0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d25e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d25e4:
    // 0x2d25e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d25e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d25e8:
    // 0x2d25e8: 0xc0aa70e  jal         func_2A9C38
label_2d25ec:
    if (ctx->pc == 0x2D25ECu) {
        ctx->pc = 0x2D25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25E8u;
        // 0x2d25ec: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D25F0u;
        goto label_2d25f0;
    }
    ctx->pc = 0x2D25E8u;
    SET_GPR_U32(ctx, 31, 0x2D25F0u);
    ctx->pc = 0x2D25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25E8u;
    // 0x2d25ec: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C38u, 0x2D25E8u, 0x2D25F0u)) {
        return;
    }
    ctx->pc = 0x2D25F0u;
label_2d25f0:
    // 0x2d25f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d25f4:
    // 0x2d25f4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d25f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d25f8:
    // 0x2d25f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2d25fc:
    if (ctx->pc == 0x2D25FCu) {
        ctx->pc = 0x2D25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25F8u;
        // 0x2d25fc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2600u;
        goto label_2d2600;
    }
    ctx->pc = 0x2D25F8u;
    {
        const bool branch_taken_0x2d25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25F8u;
        // 0x2d25fc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25f8) {
            ctx->pc = 0x2D25E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d25e0;
        }
    }
    ctx->pc = 0x2D2600u;
label_2d2600:
    // 0x2d2600: 0xc0ad2d0  jal         func_2B4B40
label_2d2604:
    if (ctx->pc == 0x2D2604u) {
        ctx->pc = 0x2D2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2600u;
        // 0x2d2604: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2608u;
        goto label_2d2608;
    }
    ctx->pc = 0x2D2600u;
    SET_GPR_U32(ctx, 31, 0x2D2608u);
    ctx->pc = 0x2D2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2600u;
    // 0x2d2604: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2D2600u, 0x2D2608u)) {
        return;
    }
    ctx->pc = 0x2D2608u;
label_2d2608:
    // 0x2d2608: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d260c:
    // 0x2d260c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_2d2610:
    if (ctx->pc == 0x2D2610u) {
        ctx->pc = 0x2D2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D260Cu;
        // 0x2d2610: 0x26900fc8  addiu       $s0, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2614u;
        goto label_2d2614;
    }
    ctx->pc = 0x2D260Cu;
    {
        const bool branch_taken_0x2d260c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D260Cu;
        // 0x2d2610: 0x26900fc8  addiu       $s0, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d260c) {
            ctx->pc = 0x2D2650u;
            goto label_2d2650;
        }
    }
    ctx->pc = 0x2D2614u;
label_2d2614:
    // 0x2d2614: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2d2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d2618:
    // 0x2d2618: 0x40f809  jalr        $v0
label_2d261c:
    if (ctx->pc == 0x2D261Cu) {
        ctx->pc = 0x2D2620u;
        goto label_2d2620;
    }
    ctx->pc = 0x2D2618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2618u, 0x2D2620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2620u;
label_2d2620:
    // 0x2d2620: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2d2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d2624:
    // 0x2d2624: 0x40f809  jalr        $v0
label_2d2628:
    if (ctx->pc == 0x2D2628u) {
        ctx->pc = 0x2D2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2624u;
        // 0x2d2628: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D262Cu;
        goto label_2d262c;
    }
    ctx->pc = 0x2D2624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D262Cu);
        ctx->pc = 0x2D2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2624u;
        // 0x2d2628: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2624u, 0x2D262Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D262Cu;
label_2d262c:
    // 0x2d262c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2d262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d2630:
    // 0x2d2630: 0x40f809  jalr        $v0
label_2d2634:
    if (ctx->pc == 0x2D2634u) {
        ctx->pc = 0x2D2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2630u;
        // 0x2d2634: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2638u;
        goto label_2d2638;
    }
    ctx->pc = 0x2D2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2638u);
        ctx->pc = 0x2D2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2630u;
        // 0x2d2634: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2630u, 0x2D2638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2638u;
label_2d2638:
    // 0x2d2638: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2d2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d263c:
    // 0x2d263c: 0x40f809  jalr        $v0
label_2d2640:
    if (ctx->pc == 0x2D2640u) {
        ctx->pc = 0x2D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D263Cu;
        // 0x2d2640: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2644u;
        goto label_2d2644;
    }
    ctx->pc = 0x2D263Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2644u);
        ctx->pc = 0x2D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D263Cu;
        // 0x2d2640: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D263Cu, 0x2D2644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2644u;
label_2d2644:
    // 0x2d2644: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2d2644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2d2648:
    // 0x2d2648: 0x60f809  jalr        $v1
label_2d264c:
    if (ctx->pc == 0x2D264Cu) {
        ctx->pc = 0x2D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2648u;
        // 0x2d264c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2650u;
        goto label_2d2650;
    }
    ctx->pc = 0x2D2648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D2650u);
        ctx->pc = 0x2D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2648u;
        // 0x2d264c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2648u, 0x2D2650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2650u;
label_2d2650:
    // 0x2d2650: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x2d2650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_2d2654:
    // 0x2d2654: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2d2654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2d2658:
    // 0x2d2658: 0x40f809  jalr        $v0
label_2d265c:
    if (ctx->pc == 0x2D265Cu) {
        ctx->pc = 0x2D265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2658u;
        // 0x2d265c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2660u;
        goto label_2d2660;
    }
    ctx->pc = 0x2D2658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2660u);
        ctx->pc = 0x2D265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2658u;
        // 0x2d265c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2658u, 0x2D2660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2660u;
label_2d2660:
    // 0x2d2660: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x2d2660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_2d2664:
    // 0x2d2664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2668:
    // 0x2d2668: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d2668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d266c:
    // 0x2d266c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d266cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d2670:
    // 0x2d2670: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d2670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d2674:
    // 0x2d2674: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d2674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2678:
    // 0x2d2678: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d2678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d267c:
    // 0x2d267c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d267cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2680:
    // 0x2d2680: 0x3e00008  jr          $ra
label_2d2684:
    if (ctx->pc == 0x2D2684u) {
        ctx->pc = 0x2D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2680u;
        // 0x2d2684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2688u;
        goto label_2d2688;
    }
    ctx->pc = 0x2D2680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2680u;
        // 0x2d2684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2688u;
label_2d2688:
    // 0x2d2688: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2d268c:
    // 0x2d268c: 0x0  nop
    ctx->pc = 0x2d268cu;
    // NOP
label_2d2690:
    // 0x2d2690: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d2690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d2694:
    // 0x2d2694: 0x0  nop
    ctx->pc = 0x2d2694u;
    // NOP
    ctx->pc = 0x2d2698u;
}
