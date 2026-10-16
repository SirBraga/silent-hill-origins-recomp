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

// Function: sub_002465B8
// Address: 0x2465b8 - 0x2466e8
void sub_002465B8_0x2465b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002465B8_0x2465b8");
#endif

    switch (ctx->pc) {
        case 0x2465b8u: goto label_2465b8;
        case 0x2465bcu: goto label_2465bc;
        case 0x2465c0u: goto label_2465c0;
        case 0x2465c4u: goto label_2465c4;
        case 0x2465c8u: goto label_2465c8;
        case 0x2465ccu: goto label_2465cc;
        case 0x2465d0u: goto label_2465d0;
        case 0x2465d4u: goto label_2465d4;
        case 0x2465d8u: goto label_2465d8;
        case 0x2465dcu: goto label_2465dc;
        case 0x2465e0u: goto label_2465e0;
        case 0x2465e4u: goto label_2465e4;
        case 0x2465e8u: goto label_2465e8;
        case 0x2465ecu: goto label_2465ec;
        case 0x2465f0u: goto label_2465f0;
        case 0x2465f4u: goto label_2465f4;
        case 0x2465f8u: goto label_2465f8;
        case 0x2465fcu: goto label_2465fc;
        case 0x246600u: goto label_246600;
        case 0x246604u: goto label_246604;
        case 0x246608u: goto label_246608;
        case 0x24660cu: goto label_24660c;
        case 0x246610u: goto label_246610;
        case 0x246614u: goto label_246614;
        case 0x246618u: goto label_246618;
        case 0x24661cu: goto label_24661c;
        case 0x246620u: goto label_246620;
        case 0x246624u: goto label_246624;
        case 0x246628u: goto label_246628;
        case 0x24662cu: goto label_24662c;
        case 0x246630u: goto label_246630;
        case 0x246634u: goto label_246634;
        case 0x246638u: goto label_246638;
        case 0x24663cu: goto label_24663c;
        case 0x246640u: goto label_246640;
        case 0x246644u: goto label_246644;
        case 0x246648u: goto label_246648;
        case 0x24664cu: goto label_24664c;
        case 0x246650u: goto label_246650;
        case 0x246654u: goto label_246654;
        case 0x246658u: goto label_246658;
        case 0x24665cu: goto label_24665c;
        case 0x246660u: goto label_246660;
        case 0x246664u: goto label_246664;
        case 0x246668u: goto label_246668;
        case 0x24666cu: goto label_24666c;
        case 0x246670u: goto label_246670;
        case 0x246674u: goto label_246674;
        case 0x246678u: goto label_246678;
        case 0x24667cu: goto label_24667c;
        case 0x246680u: goto label_246680;
        case 0x246684u: goto label_246684;
        case 0x246688u: goto label_246688;
        case 0x24668cu: goto label_24668c;
        case 0x246690u: goto label_246690;
        case 0x246694u: goto label_246694;
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        default: break;
    }

    ctx->pc = 0x2465b8u;

label_2465b8:
    // 0x2465b8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2465b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2465bc:
    // 0x2465bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2465bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2465c0:
    // 0x2465c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2465c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2465c4:
    // 0x2465c4: 0x24451180  addiu       $a1, $v0, 0x1180
    ctx->pc = 0x2465c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
label_2465c8:
    // 0x2465c8: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2465c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
label_2465cc:
    // 0x2465cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2465ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2465d0:
    // 0x2465d0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_2465d4:
    if (ctx->pc == 0x2465D4u) {
        ctx->pc = 0x2465D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465D0u;
        // 0x2465d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465D8u;
        goto label_2465d8;
    }
    ctx->pc = 0x2465D0u;
    {
        const bool branch_taken_0x2465d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465D0u;
        // 0x2465d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465d0) {
            ctx->pc = 0x24669Cu;
            goto label_24669c;
        }
    }
    ctx->pc = 0x2465D8u;
label_2465d8:
    // 0x2465d8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2465d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2465dc:
    // 0x2465dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2465e0:
    // 0x2465e0: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_2465e4:
    if (ctx->pc == 0x2465E4u) {
        ctx->pc = 0x2465E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465E0u;
        // 0x2465e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465E8u;
        goto label_2465e8;
    }
    ctx->pc = 0x2465E0u;
    {
        const bool branch_taken_0x2465e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2465E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465E0u;
        // 0x2465e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465e0) {
            ctx->pc = 0x246630u;
            goto label_246630;
        }
    }
    ctx->pc = 0x2465E8u;
label_2465e8:
    // 0x2465e8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2465e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2465ec:
    // 0x2465ec: 0x871018  mult        $v0, $a0, $a3
    ctx->pc = 0x2465ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2465f0:
    // 0x2465f0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2465f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2465f4:
    // 0x2465f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2465f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2465f8:
    // 0x2465f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2465f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2465fc:
    // 0x2465fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_246600:
    if (ctx->pc == 0x246600u) {
        ctx->pc = 0x246600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465FCu;
        // 0x246600: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246604u;
        goto label_246604;
    }
    ctx->pc = 0x2465FCu;
    {
        const bool branch_taken_0x2465fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465FCu;
        // 0x246600: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465fc) {
            ctx->pc = 0x24660Cu;
            goto label_24660c;
        }
    }
    ctx->pc = 0x246604u;
label_246604:
    // 0x246604: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x246604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246608:
    // 0x246608: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x246608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_24660c:
    // 0x24660c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x24660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_246610:
    // 0x246610: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x246610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_246614:
    // 0x246614: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x246614u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_246618:
    // 0x246618: 0x50660001  beql        $v1, $a2, . + 4 + (0x1 << 2)
label_24661c:
    if (ctx->pc == 0x24661Cu) {
        ctx->pc = 0x24661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246618u;
        // 0x24661c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246620u;
        goto label_246620;
    }
    ctx->pc = 0x246618u;
    {
        const bool branch_taken_0x246618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x246618) {
            ctx->pc = 0x24661Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246618u;
            // 0x24661c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246620u;
            goto label_246620;
        }
    }
    ctx->pc = 0x246620u;
label_246620:
    // 0x246620: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_246624:
    // 0x246624: 0x2010  mfhi        $a0
    ctx->pc = 0x246624u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_246628:
    // 0x246628: 0x1482fff1  bne         $a0, $v0, . + 4 + (-0xF << 2)
label_24662c:
    if (ctx->pc == 0x24662Cu) {
        ctx->pc = 0x24662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246628u;
        // 0x24662c: 0x871018  mult        $v0, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246630u;
        goto label_246630;
    }
    ctx->pc = 0x246628u;
    {
        const bool branch_taken_0x246628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x24662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246628u;
        // 0x24662c: 0x871018  mult        $v0, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246628) {
            ctx->pc = 0x2465F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2465f0;
        }
    }
    ctx->pc = 0x246630u;
label_246630:
    // 0x246630: 0x26031180  addiu       $v1, $s0, 0x1180
    ctx->pc = 0x246630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
label_246634:
    // 0x246634: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x246634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_246638:
    // 0x246638: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24663c:
    // 0x24663c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x24663cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_246640:
    // 0x246640: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_246644:
    if (ctx->pc == 0x246644u) {
        ctx->pc = 0x246644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246640u;
        // 0x246644: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246648u;
        goto label_246648;
    }
    ctx->pc = 0x246640u;
    {
        const bool branch_taken_0x246640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246640u;
        // 0x246644: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246640) {
            ctx->pc = 0x246684u;
            goto label_246684;
        }
    }
    ctx->pc = 0x246648u;
label_246648:
    // 0x246648: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x246648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24664c:
    // 0x24664c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x24664cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_246650:
    // 0x246650: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x246650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_246654:
    // 0x246654: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x246654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_246658:
    // 0x246658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24665c:
    // 0x24665c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_246660:
    if (ctx->pc == 0x246660u) {
        ctx->pc = 0x246660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24665Cu;
        // 0x246660: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246664u;
        goto label_246664;
    }
    ctx->pc = 0x24665Cu;
    {
        const bool branch_taken_0x24665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24665Cu;
        // 0x246660: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24665c) {
            ctx->pc = 0x246670u;
            goto label_246670;
        }
    }
    ctx->pc = 0x246664u;
label_246664:
    // 0x246664: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x246664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246668:
    // 0x246668: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x246668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_24666c:
    // 0x24666c: 0xa0400017  sb          $zero, 0x17($v0)
    ctx->pc = 0x24666cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23), (uint8_t)GPR_U32(ctx, 0));
label_246670:
    // 0x246670: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x246670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_246674:
    // 0x246674: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x246674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_246678:
    // 0x246678: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x246678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24667c:
    // 0x24667c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_246680:
    if (ctx->pc == 0x246680u) {
        ctx->pc = 0x246680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24667Cu;
        // 0x246680: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246684u;
        goto label_246684;
    }
    ctx->pc = 0x24667Cu;
    {
        const bool branch_taken_0x24667c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24667Cu;
        // 0x246680: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24667c) {
            ctx->pc = 0x246650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246650;
        }
    }
    ctx->pc = 0x246684u;
label_246684:
    // 0x246684: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x246684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_246688:
    // 0x246688: 0x26031180  addiu       $v1, $s0, 0x1180
    ctx->pc = 0x246688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
label_24668c:
    // 0x24668c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_246690:
    // 0x246690: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x246690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_246694:
    // 0x246694: 0xa0f809  jalr        $a1
label_246698:
    if (ctx->pc == 0x246698u) {
        ctx->pc = 0x246698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246694u;
        // 0x246698: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24669Cu;
        goto label_24669c;
    }
    ctx->pc = 0x246694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24669Cu);
        ctx->pc = 0x246698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246694u;
        // 0x246698: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246694u, 0x24669Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24669Cu;
label_24669c:
    // 0x24669c: 0x26031180  addiu       $v1, $s0, 0x1180
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
label_2466a0:
    // 0x2466a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2466a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2466a4:
    // 0x2466a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2466a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2466a8:
    // 0x2466a8: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x2466a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_2466ac:
    // 0x2466ac: 0xae021180  sw          $v0, 0x1180($s0)
    ctx->pc = 0x2466acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4480), GPR_U32(ctx, 2));
label_2466b0:
    // 0x2466b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2466b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2466b4:
    // 0x2466b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2466b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2466b8:
    // 0x2466b8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x2466b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_2466bc:
    // 0x2466bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2466bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2466c0:
    // 0x2466c0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2466c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2466c4:
    // 0x2466c4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2466c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2466c8:
    // 0x2466c8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2466c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_2466cc:
    // 0x2466cc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2466ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_2466d0:
    // 0x2466d0: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2466d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2466d4:
    // 0x2466d4: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x2466d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_2466d8:
    // 0x2466d8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2466d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_2466dc:
    // 0x2466dc: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2466dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_2466e0:
    // 0x2466e0: 0x3e00008  jr          $ra
label_2466e4:
    if (ctx->pc == 0x2466E4u) {
        ctx->pc = 0x2466E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E0u;
        // 0x2466e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466E8u;
        goto label_fallthrough_0x2466e0;
    }
    ctx->pc = 0x2466E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E0u;
        // 0x2466e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2466e0:
    ctx->pc = 0x2466E8u;
}
