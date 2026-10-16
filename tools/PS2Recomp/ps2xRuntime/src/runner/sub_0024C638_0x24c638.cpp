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

// Function: sub_0024C638
// Address: 0x24c638 - 0x24c758
void sub_0024C638_0x24c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C638_0x24c638");
#endif

    switch (ctx->pc) {
        case 0x24c638u: goto label_24c638;
        case 0x24c63cu: goto label_24c63c;
        case 0x24c640u: goto label_24c640;
        case 0x24c644u: goto label_24c644;
        case 0x24c648u: goto label_24c648;
        case 0x24c64cu: goto label_24c64c;
        case 0x24c650u: goto label_24c650;
        case 0x24c654u: goto label_24c654;
        case 0x24c658u: goto label_24c658;
        case 0x24c65cu: goto label_24c65c;
        case 0x24c660u: goto label_24c660;
        case 0x24c664u: goto label_24c664;
        case 0x24c668u: goto label_24c668;
        case 0x24c66cu: goto label_24c66c;
        case 0x24c670u: goto label_24c670;
        case 0x24c674u: goto label_24c674;
        case 0x24c678u: goto label_24c678;
        case 0x24c67cu: goto label_24c67c;
        case 0x24c680u: goto label_24c680;
        case 0x24c684u: goto label_24c684;
        case 0x24c688u: goto label_24c688;
        case 0x24c68cu: goto label_24c68c;
        case 0x24c690u: goto label_24c690;
        case 0x24c694u: goto label_24c694;
        case 0x24c698u: goto label_24c698;
        case 0x24c69cu: goto label_24c69c;
        case 0x24c6a0u: goto label_24c6a0;
        case 0x24c6a4u: goto label_24c6a4;
        case 0x24c6a8u: goto label_24c6a8;
        case 0x24c6acu: goto label_24c6ac;
        case 0x24c6b0u: goto label_24c6b0;
        case 0x24c6b4u: goto label_24c6b4;
        case 0x24c6b8u: goto label_24c6b8;
        case 0x24c6bcu: goto label_24c6bc;
        case 0x24c6c0u: goto label_24c6c0;
        case 0x24c6c4u: goto label_24c6c4;
        case 0x24c6c8u: goto label_24c6c8;
        case 0x24c6ccu: goto label_24c6cc;
        case 0x24c6d0u: goto label_24c6d0;
        case 0x24c6d4u: goto label_24c6d4;
        case 0x24c6d8u: goto label_24c6d8;
        case 0x24c6dcu: goto label_24c6dc;
        case 0x24c6e0u: goto label_24c6e0;
        case 0x24c6e4u: goto label_24c6e4;
        case 0x24c6e8u: goto label_24c6e8;
        case 0x24c6ecu: goto label_24c6ec;
        case 0x24c6f0u: goto label_24c6f0;
        case 0x24c6f4u: goto label_24c6f4;
        case 0x24c6f8u: goto label_24c6f8;
        case 0x24c6fcu: goto label_24c6fc;
        case 0x24c700u: goto label_24c700;
        case 0x24c704u: goto label_24c704;
        case 0x24c708u: goto label_24c708;
        case 0x24c70cu: goto label_24c70c;
        case 0x24c710u: goto label_24c710;
        case 0x24c714u: goto label_24c714;
        case 0x24c718u: goto label_24c718;
        case 0x24c71cu: goto label_24c71c;
        case 0x24c720u: goto label_24c720;
        case 0x24c724u: goto label_24c724;
        case 0x24c728u: goto label_24c728;
        case 0x24c72cu: goto label_24c72c;
        case 0x24c730u: goto label_24c730;
        case 0x24c734u: goto label_24c734;
        case 0x24c738u: goto label_24c738;
        case 0x24c73cu: goto label_24c73c;
        case 0x24c740u: goto label_24c740;
        case 0x24c744u: goto label_24c744;
        case 0x24c748u: goto label_24c748;
        case 0x24c74cu: goto label_24c74c;
        case 0x24c750u: goto label_24c750;
        case 0x24c754u: goto label_24c754;
        default: break;
    }

    ctx->pc = 0x24c638u;

label_24c638:
    // 0x24c638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24c63c:
    // 0x24c63c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24c640:
    // 0x24c640: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24c644:
    // 0x24c644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c648:
    // 0x24c648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24c64c:
    // 0x24c64c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c650:
    // 0x24c650: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24c650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24c654:
    // 0x24c654: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x24c654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_24c658:
    // 0x24c658: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x24c658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c65c:
    // 0x24c65c: 0x12060036  beq         $s0, $a2, . + 4 + (0x36 << 2)
label_24c660:
    if (ctx->pc == 0x24C660u) {
        ctx->pc = 0x24C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C65Cu;
        // 0x24c660: 0x8e280008  lw          $t0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C664u;
        goto label_24c664;
    }
    ctx->pc = 0x24C65Cu;
    {
        const bool branch_taken_0x24c65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x24C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C65Cu;
        // 0x24c660: 0x8e280008  lw          $t0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c65c) {
            ctx->pc = 0x24C738u;
            goto label_24c738;
        }
    }
    ctx->pc = 0x24C664u;
label_24c664:
    // 0x24c664: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24c668:
    // 0x24c668: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x24c668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_24c66c:
    // 0x24c66c: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24c670:
    // 0x24c670: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24c674:
    // 0x24c674: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x24c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_24c678:
    // 0x24c678: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x24c678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_24c67c:
    // 0x24c67c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_24c680:
    if (ctx->pc == 0x24C680u) {
        ctx->pc = 0x24C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C67Cu;
        // 0x24c680: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C684u;
        goto label_24c684;
    }
    ctx->pc = 0x24C67Cu;
    {
        const bool branch_taken_0x24c67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c67c) {
            ctx->pc = 0x24C680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C67Cu;
            // 0x24c680: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C730u;
            goto label_24c730;
        }
    }
    ctx->pc = 0x24C684u;
label_24c684:
    // 0x24c684: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24c688:
    // 0x24c688: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c68c:
    // 0x24c68c: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x24c68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_24c690:
    // 0x24c690: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x24c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_24c694:
    // 0x24c694: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24c694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24c698:
    // 0x24c698: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_24c69c:
    if (ctx->pc == 0x24C69Cu) {
        ctx->pc = 0x24C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C698u;
        // 0x24c69c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C6A0u;
        goto label_24c6a0;
    }
    ctx->pc = 0x24C698u;
    {
        const bool branch_taken_0x24c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c698) {
            ctx->pc = 0x24C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C698u;
            // 0x24c69c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C730u;
            goto label_24c730;
        }
    }
    ctx->pc = 0x24C6A0u;
label_24c6a0:
    // 0x24c6a0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x24c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24c6a4:
    // 0x24c6a4: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x24c6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_24c6a8:
    // 0x24c6a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c6a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_24c6ac:
    // 0x24c6ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_24c6b0:
    if (ctx->pc == 0x24C6B0u) {
        ctx->pc = 0x24C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6ACu;
        // 0x24c6b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C6B4u;
        goto label_24c6b4;
    }
    ctx->pc = 0x24C6ACu;
    {
        const bool branch_taken_0x24c6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6ac) {
            ctx->pc = 0x24C6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6ACu;
            // 0x24c6b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6B4u;
            goto label_24c6b4;
        }
    }
    ctx->pc = 0x24C6B4u;
label_24c6b4:
    // 0x24c6b4: 0x1012  mflo        $v0
    ctx->pc = 0x24c6b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_24c6b8:
    // 0x24c6b8: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x24c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_24c6bc:
    // 0x24c6bc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x24c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24c6c0:
    // 0x24c6c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24c6c4:
    // 0x24c6c4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x24c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_24c6c8:
    // 0x24c6c8: 0x491007  srav        $v0, $t1, $v0
    ctx->pc = 0x24c6c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_24c6cc:
    // 0x24c6cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x24c6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_24c6d0:
    // 0x24c6d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24c6d4:
    // 0x24c6d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24c6d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24c6d8:
    // 0x24c6d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24c6dc:
    // 0x24c6dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x24c6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_24c6e0:
    // 0x24c6e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x24c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_24c6e4:
    // 0x24c6e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24c6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24c6e8:
    // 0x24c6e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_24c6ec:
    if (ctx->pc == 0x24C6ECu) {
        ctx->pc = 0x24C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6E8u;
        // 0x24c6ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C6F0u;
        goto label_24c6f0;
    }
    ctx->pc = 0x24C6E8u;
    {
        const bool branch_taken_0x24c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6E8u;
        // 0x24c6ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6e8) {
            ctx->pc = 0x24C73Cu;
            goto label_24c73c;
        }
    }
    ctx->pc = 0x24C6F0u;
label_24c6f0:
    // 0x24c6f0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24c6f4:
    // 0x24c6f4: 0xc093182  jal         func_24C608
label_24c6f8:
    if (ctx->pc == 0x24C6F8u) {
        ctx->pc = 0x24C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6F4u;
        // 0x24c6f8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C6FCu;
        goto label_24c6fc;
    }
    ctx->pc = 0x24C6F4u;
    SET_GPR_U32(ctx, 31, 0x24C6FCu);
    ctx->pc = 0x24C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C6F4u;
    // 0x24c6f8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C608u, 0x24C6F4u, 0x24C6FCu)) {
        return;
    }
    ctx->pc = 0x24C6FCu;
label_24c6fc:
    // 0x24c6fc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_24c700:
    if (ctx->pc == 0x24C700u) {
        ctx->pc = 0x24C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6FCu;
        // 0x24c700: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C704u;
        goto label_24c704;
    }
    ctx->pc = 0x24C6FCu;
    {
        const bool branch_taken_0x24c6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6fc) {
            ctx->pc = 0x24C700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6FCu;
            // 0x24c700: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C73Cu;
            goto label_24c73c;
        }
    }
    ctx->pc = 0x24C704u;
label_24c704:
    // 0x24c704: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24c708:
    // 0x24c708: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c70c:
    // 0x24c70c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24c710:
    // 0x24c710: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24c710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c714:
    // 0x24c714: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24c718:
    // 0x24c718: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24c718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24c71c:
    // 0x24c71c: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x24c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_24c720:
    // 0x24c720: 0x60f809  jalr        $v1
label_24c724:
    if (ctx->pc == 0x24C724u) {
        ctx->pc = 0x24C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C720u;
        // 0x24c724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C728u;
        goto label_24c728;
    }
    ctx->pc = 0x24C720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24C728u);
        ctx->pc = 0x24C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C720u;
        // 0x24c724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C720u, 0x24C728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C728u;
label_24c728:
    // 0x24c728: 0x10000004  b           . + 4 + (0x4 << 2)
label_24c72c:
    if (ctx->pc == 0x24C72Cu) {
        ctx->pc = 0x24C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C728u;
        // 0x24c72c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C730u;
        goto label_24c730;
    }
    ctx->pc = 0x24C728u;
    {
        const bool branch_taken_0x24c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C728u;
        // 0x24c72c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c728) {
            ctx->pc = 0x24C73Cu;
            goto label_24c73c;
        }
    }
    ctx->pc = 0x24C730u;
label_24c730:
    // 0x24c730: 0x1606ffd1  bne         $s0, $a2, . + 4 + (-0x2F << 2)
label_24c734:
    if (ctx->pc == 0x24C734u) {
        ctx->pc = 0x24C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C730u;
        // 0x24c734: 0x2072821  addu        $a1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C738u;
        goto label_24c738;
    }
    ctx->pc = 0x24C730u;
    {
        const bool branch_taken_0x24c730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x24C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C730u;
        // 0x24c734: 0x2072821  addu        $a1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c730) {
            ctx->pc = 0x24C678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c678;
        }
    }
    ctx->pc = 0x24C738u;
label_24c738:
    // 0x24c738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24c738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c73c:
    // 0x24c73c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24c73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24c740:
    // 0x24c740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24c740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c744:
    // 0x24c744: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24c744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c748:
    // 0x24c748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c74c:
    // 0x24c74c: 0x3e00008  jr          $ra
label_24c750:
    if (ctx->pc == 0x24C750u) {
        ctx->pc = 0x24C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C74Cu;
        // 0x24c750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C754u;
        goto label_24c754;
    }
    ctx->pc = 0x24C74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C74Cu;
        // 0x24c750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C754u;
label_24c754:
    // 0x24c754: 0x0  nop
    ctx->pc = 0x24c754u;
    // NOP
    ctx->pc = 0x24c758u;
}
