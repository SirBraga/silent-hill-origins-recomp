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

// Function: sub_002DB590
// Address: 0x2db590 - 0x2db7b8
void sub_002DB590_0x2db590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB590_0x2db590");
#endif

    switch (ctx->pc) {
        case 0x2db5ccu: goto label_2db5cc;
        case 0x2db5e8u: goto label_2db5e8;
        case 0x2db638u: goto label_2db638;
        case 0x2db654u: goto label_2db654;
        case 0x2db668u: goto label_2db668;
        case 0x2db670u: goto label_2db670;
        case 0x2db684u: goto label_2db684;
        case 0x2db69cu: goto label_2db69c;
        case 0x2db6b0u: goto label_2db6b0;
        case 0x2db6e4u: goto label_2db6e4;
        case 0x2db6f4u: goto label_2db6f4;
        case 0x2db708u: goto label_2db708;
        case 0x2db73cu: goto label_2db73c;
        case 0x2db744u: goto label_2db744;
        case 0x2db758u: goto label_2db758;
        case 0x2db76cu: goto label_2db76c;
        case 0x2db774u: goto label_2db774;
        case 0x2db788u: goto label_2db788;
        default: break;
    }

    ctx->pc = 0x2db590u;

    // 0x2db590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2db590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2db594: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2db594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2db598: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2db598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2db59c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2db59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5a0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2db5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2db5a4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2db5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2db5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2db5ac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2db5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2db5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2db5b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2db5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2db5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2db5bc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2db5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2db5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db5c4: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DB5C4u;
    SET_GPR_U32(ctx, 31, 0x2DB5CCu);
    ctx->pc = 0x2DB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB5C4u;
    // 0x2db5c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DB5C4u, 0x2DB5CCu)) {
        return;
    }
    ctx->pc = 0x2DB5CCu;
label_2db5cc:
    // 0x2db5cc: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB5CCu;
    {
        const bool branch_taken_0x2db5cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5CCu;
        // 0x2db5d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5cc) {
            ctx->pc = 0x2DB5F4u;
            goto label_2db5f4;
        }
    }
    ctx->pc = 0x2DB5D4u;
    // 0x2db5d4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2db5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2db5d8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2db5dc: 0x24847ca8  addiu       $a0, $a0, 0x7CA8
    ctx->pc = 0x2db5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31912));
    // 0x2db5e0: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2DB5E0u;
    SET_GPR_U32(ctx, 31, 0x2DB5E8u);
    ctx->pc = 0x2DB5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB5E0u;
    // 0x2db5e4: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DB5E0u, 0x2DB5E8u)) {
        return;
    }
    ctx->pc = 0x2DB5E8u;
label_2db5e8:
    // 0x2db5e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB5ECu;
    {
        const bool branch_taken_0x2db5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5ECu;
        // 0x2db5f0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5ec) {
            ctx->pc = 0x2DB5FCu;
            goto label_2db5fc;
        }
    }
    ctx->pc = 0x2DB5F4u;
label_2db5f4:
    // 0x2db5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db5f8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2db5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2db5fc:
    // 0x2db5fc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB5FCu;
    {
        const bool branch_taken_0x2db5fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db5fc) {
            ctx->pc = 0x2DB600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB5FCu;
            // 0x2db600: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB60Cu;
            goto label_2db60c;
        }
    }
    ctx->pc = 0x2DB604u;
    // 0x2db604: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2DB604u;
    {
        const bool branch_taken_0x2db604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB604u;
        // 0x2db608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db604) {
            ctx->pc = 0x2DB78Cu;
            goto label_2db78c;
        }
    }
    ctx->pc = 0x2DB60Cu;
label_2db60c:
    // 0x2db60c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DB60Cu;
    {
        const bool branch_taken_0x2db60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB60Cu;
        // 0x2db610: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db60c) {
            ctx->pc = 0x2DB68Cu;
            goto label_2db68c;
        }
    }
    ctx->pc = 0x2DB614u;
    // 0x2db614: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2db614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2db618: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2db618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2db61c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB61Cu;
    {
        const bool branch_taken_0x2db61c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB61Cu;
        // 0x2db620: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db61c) {
            ctx->pc = 0x2DB644u;
            goto label_2db644;
        }
    }
    ctx->pc = 0x2DB624u;
    // 0x2db624: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x2db624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x2db628: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2DB628u;
    {
        const bool branch_taken_0x2db628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB628u;
        // 0x2db62c: 0x3c160070  lui         $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db628) {
            ctx->pc = 0x2DB744u;
            goto label_2db744;
        }
    }
    ctx->pc = 0x2DB630u;
    // 0x2db630: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DB630u;
    SET_GPR_U32(ctx, 31, 0x2DB638u);
    ctx->pc = 0x2DB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB630u;
    // 0x2db634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DB630u, 0x2DB638u)) {
        return;
    }
    ctx->pc = 0x2DB638u;
label_2db638:
    // 0x2db638: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2db63c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2DB63Cu;
    {
        const bool branch_taken_0x2db63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB63Cu;
        // 0x2db640: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db63c) {
            ctx->pc = 0x2DB744u;
            goto label_2db744;
        }
    }
    ctx->pc = 0x2DB644u;
label_2db644:
    // 0x2db644: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x2DB644u;
    {
        const bool branch_taken_0x2db644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB644u;
        // 0x2db648: 0x3c160070  lui         $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db644) {
            ctx->pc = 0x2DB744u;
            goto label_2db744;
        }
    }
    ctx->pc = 0x2DB64Cu;
    // 0x2db64c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2DB64Cu;
    {
        const bool branch_taken_0x2db64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB64Cu;
        // 0x2db650: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db64c) {
            ctx->pc = 0x2DB744u;
            goto label_2db744;
        }
    }
    ctx->pc = 0x2DB654u;
label_2db654:
    // 0x2db654: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2db654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2db658: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2db658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2db65c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2db65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db660: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2DB660u;
    SET_GPR_U32(ctx, 31, 0x2DB668u);
    ctx->pc = 0x2DB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB660u;
    // 0x2db664: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DB660u, 0x2DB668u)) {
        return;
    }
    ctx->pc = 0x2DB668u;
label_2db668:
    // 0x2db668: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DB668u;
    {
        const bool branch_taken_0x2db668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB668u;
        // 0x2db66c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db668) {
            ctx->pc = 0x2DB6D4u;
            goto label_2db6d4;
        }
    }
    ctx->pc = 0x2DB670u;
label_2db670:
    // 0x2db670: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2db670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2db674: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2db674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2db678: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db67c: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2DB67Cu;
    SET_GPR_U32(ctx, 31, 0x2DB684u);
    ctx->pc = 0x2DB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB67Cu;
    // 0x2db680: 0x34a50803  ori         $a1, $a1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DB67Cu, 0x2DB684u)) {
        return;
    }
    ctx->pc = 0x2DB684u;
label_2db684:
    // 0x2db684: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2DB684u;
    {
        const bool branch_taken_0x2db684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB684u;
        // 0x2db688: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db684) {
            ctx->pc = 0x2DB72Cu;
            goto label_2db72c;
        }
    }
    ctx->pc = 0x2DB68Cu;
label_2db68c:
    // 0x2db68c: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB68Cu;
    {
        const bool branch_taken_0x2db68c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB68Cu;
        // 0x2db690: 0x3c160070  lui         $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db68c) {
            ctx->pc = 0x2DB6E4u;
            goto label_2db6e4;
        }
    }
    ctx->pc = 0x2DB694u;
    // 0x2db694: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DB694u;
    SET_GPR_U32(ctx, 31, 0x2DB69Cu);
    ctx->pc = 0x2DB698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB694u;
    // 0x2db698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DB694u, 0x2DB69Cu)) {
        return;
    }
    ctx->pc = 0x2DB69Cu;
label_2db69c:
    // 0x2db69c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2db6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6a4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2db6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2db6a8: 0x244740e8  addiu       $a3, $v0, 0x40E8
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2db6ac: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2db6b0:
    // 0x2db6b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db6b4: 0x1046ffe7  beq         $v0, $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2DB6B4u;
    {
        const bool branch_taken_0x2db6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6B4u;
        // 0x2db6b8: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6b4) {
            ctx->pc = 0x2DB654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db654;
        }
    }
    ctx->pc = 0x2DB6BCu;
    // 0x2db6bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db6c0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2db6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2db6c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB6C4u;
    {
        const bool branch_taken_0x2db6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6C4u;
        // 0x2db6c8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6c4) {
            ctx->pc = 0x2DB6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db6b0;
        }
    }
    ctx->pc = 0x2DB6CCu;
    // 0x2db6cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2db6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2db6d4:
    // 0x2db6d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB6D4u;
    {
        const bool branch_taken_0x2db6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db6d4) {
            ctx->pc = 0x2DB6E4u;
            goto label_2db6e4;
        }
    }
    ctx->pc = 0x2DB6DCu;
    // 0x2db6dc: 0xc0b6fb2  jal         func_2DBEC8
    ctx->pc = 0x2DB6DCu;
    SET_GPR_U32(ctx, 31, 0x2DB6E4u);
    ctx->pc = 0x2DB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6DCu;
    // 0x2db6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBEC8u, 0x2DB6DCu, 0x2DB6E4u)) {
        return;
    }
    ctx->pc = 0x2DB6E4u;
label_2db6e4:
    // 0x2db6e4: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB6E4u;
    {
        const bool branch_taken_0x2db6e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db6e4) {
            ctx->pc = 0x2DB744u;
            goto label_2db744;
        }
    }
    ctx->pc = 0x2DB6ECu;
    // 0x2db6ec: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DB6ECu;
    SET_GPR_U32(ctx, 31, 0x2DB6F4u);
    ctx->pc = 0x2DB6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6ECu;
    // 0x2db6f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DB6ECu, 0x2DB6F4u)) {
        return;
    }
    ctx->pc = 0x2DB6F4u;
label_2db6f4:
    // 0x2db6f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2db6f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6fc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2db6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2db700: 0x244740e8  addiu       $a3, $v0, 0x40E8
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2db704: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2db704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2db708:
    // 0x2db708: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db70c: 0x1046ffd8  beq         $v0, $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2DB70Cu;
    {
        const bool branch_taken_0x2db70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB70Cu;
        // 0x2db710: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db70c) {
            ctx->pc = 0x2DB670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db670;
        }
    }
    ctx->pc = 0x2DB714u;
    // 0x2db714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db718: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2db718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2db71c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB71Cu;
    {
        const bool branch_taken_0x2db71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB71Cu;
        // 0x2db720: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db71c) {
            ctx->pc = 0x2DB708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db708;
        }
    }
    ctx->pc = 0x2DB724u;
    // 0x2db724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db728: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2db728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2db72c:
    // 0x2db72c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB72Cu;
    {
        const bool branch_taken_0x2db72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db72c) {
            ctx->pc = 0x2DB744u;
            goto label_2db744;
        }
    }
    ctx->pc = 0x2DB734u;
    // 0x2db734: 0xc0b6fa4  jal         func_2DBE90
    ctx->pc = 0x2DB734u;
    SET_GPR_U32(ctx, 31, 0x2DB73Cu);
    ctx->pc = 0x2DB738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB734u;
    // 0x2db738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBE90u, 0x2DB734u, 0x2DB73Cu)) {
        return;
    }
    ctx->pc = 0x2DB73Cu;
label_2db73c:
    // 0x2db73c: 0xc0b6fb2  jal         func_2DBEC8
    ctx->pc = 0x2DB73Cu;
    SET_GPR_U32(ctx, 31, 0x2DB744u);
    ctx->pc = 0x2DB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB73Cu;
    // 0x2db740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBEC8u, 0x2DB73Cu, 0x2DB744u)) {
        return;
    }
    ctx->pc = 0x2DB744u;
label_2db744:
    // 0x2db744: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB744u;
    {
        const bool branch_taken_0x2db744 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB744u;
        // 0x2db748: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db744) {
            ctx->pc = 0x2DB758u;
            goto label_2db758;
        }
    }
    ctx->pc = 0x2DB74Cu;
    // 0x2db74c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2db74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2db750: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2DB750u;
    SET_GPR_U32(ctx, 31, 0x2DB758u);
    ctx->pc = 0x2DB754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB750u;
    // 0x2db754: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2DB750u, 0x2DB758u)) {
        return;
    }
    ctx->pc = 0x2DB758u;
label_2db758:
    // 0x2db758: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB758u;
    {
        const bool branch_taken_0x2db758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB758u;
        // 0x2db75c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db758) {
            ctx->pc = 0x2DB76Cu;
            goto label_2db76c;
        }
    }
    ctx->pc = 0x2DB760u;
    // 0x2db760: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2db760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2db764: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2DB764u;
    SET_GPR_U32(ctx, 31, 0x2DB76Cu);
    ctx->pc = 0x2DB768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB764u;
    // 0x2db768: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2DB764u, 0x2DB76Cu)) {
        return;
    }
    ctx->pc = 0x2DB76Cu;
label_2db76c:
    // 0x2db76c: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2DB76Cu;
    SET_GPR_U32(ctx, 31, 0x2DB774u);
    ctx->pc = 0x2DB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB76Cu;
    // 0x2db770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2DB76Cu, 0x2DB774u)) {
        return;
    }
    ctx->pc = 0x2DB774u;
label_2db774:
    // 0x2db774: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x2db774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x2db778: 0x26c47c98  addiu       $a0, $s6, 0x7C98
    ctx->pc = 0x2db778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 31896));
    // 0x2db77c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2db77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2db780: 0xc0b6ff4  jal         func_2DBFD0
    ctx->pc = 0x2DB780u;
    SET_GPR_U32(ctx, 31, 0x2DB788u);
    ctx->pc = 0x2DB784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB780u;
    // 0x2db784: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBFD0u, 0x2DB780u, 0x2DB788u)) {
        return;
    }
    ctx->pc = 0x2DB788u;
label_2db788:
    // 0x2db788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db78c:
    // 0x2db78c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2db78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db790: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2db790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db794: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2db794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db798: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2db798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db79c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2db79cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db7a0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2db7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db7a4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2db7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7ACu;
        // 0x2db7b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB7B4u;
    // 0x2db7b4: 0x0  nop
    ctx->pc = 0x2db7b4u;
    // NOP
    ctx->pc = 0x2db7b8u;
}
