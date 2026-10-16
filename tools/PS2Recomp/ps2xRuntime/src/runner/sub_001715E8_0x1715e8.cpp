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

// Function: sub_001715E8
// Address: 0x1715e8 - 0x171770
void sub_001715E8_0x1715e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001715E8_0x1715e8");
#endif

    switch (ctx->pc) {
        case 0x171624u: goto label_171624;
        case 0x171638u: goto label_171638;
        case 0x17164cu: goto label_17164c;
        case 0x1716a4u: goto label_1716a4;
        case 0x1716d8u: goto label_1716d8;
        case 0x171708u: goto label_171708;
        case 0x171734u: goto label_171734;
        case 0x17174cu: goto label_17174c;
        default: break;
    }

    ctx->pc = 0x1715e8u;

    // 0x1715e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1715e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1715ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1715ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1715f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1715f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1715f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1715f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1715f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1715fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1715fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x171600: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171604: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x171604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x171608: 0x8e120100  lw          $s2, 0x100($s0)
    ctx->pc = 0x171608u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x17160c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x17160Cu;
    {
        const bool branch_taken_0x17160c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x171610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17160Cu;
        // 0x171610: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17160c) {
            ctx->pc = 0x171678u;
            goto label_171678;
        }
    }
    ctx->pc = 0x171614u;
    // 0x171614: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x171614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x171618: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x171618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17161c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17161Cu;
    SET_GPR_U32(ctx, 31, 0x171624u);
    ctx->pc = 0x171620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17161Cu;
    // 0x171620: 0x8c5186c8  lw          $s1, -0x7938($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17161Cu, 0x171624u)) {
        return;
    }
    ctx->pc = 0x171624u;
label_171624:
    // 0x171624: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x171624u;
    {
        const bool branch_taken_0x171624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171624u;
        // 0x171628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171624) {
            ctx->pc = 0x171654u;
            goto label_171654;
        }
    }
    ctx->pc = 0x17162Cu;
    // 0x17162c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171630: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x171630u;
    SET_GPR_U32(ctx, 31, 0x171638u);
    ctx->pc = 0x171634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171630u;
    // 0x171634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x171630u, 0x171638u)) {
        return;
    }
    ctx->pc = 0x171638u;
label_171638:
    // 0x171638: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x171638u;
    {
        const bool branch_taken_0x171638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171638u;
        // 0x17163c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171638) {
            ctx->pc = 0x171654u;
            goto label_171654;
        }
    }
    ctx->pc = 0x171640u;
    // 0x171640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171644: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x171644u;
    SET_GPR_U32(ctx, 31, 0x17164Cu);
    ctx->pc = 0x171648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171644u;
    // 0x171648: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x171644u, 0x17164Cu)) {
        return;
    }
    ctx->pc = 0x17164Cu;
label_17164c:
    // 0x17164c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17164Cu;
    {
        const bool branch_taken_0x17164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17164Cu;
        // 0x171650: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17164c) {
            ctx->pc = 0x171658u;
            goto label_171658;
        }
    }
    ctx->pc = 0x171654u;
label_171654:
    // 0x171654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171658:
    // 0x171658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171658u;
    {
        const bool branch_taken_0x171658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171658u;
        // 0x17165c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171658) {
            ctx->pc = 0x171670u;
            goto label_171670;
        }
    }
    ctx->pc = 0x171660u;
    // 0x171660: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x171660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x171664: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x171664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x171668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171668u;
    {
        const bool branch_taken_0x171668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171668u;
        // 0x17166c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171668) {
            ctx->pc = 0x17167Cu;
            goto label_17167c;
        }
    }
    ctx->pc = 0x171670u;
label_171670:
    // 0x171670: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171670u;
    {
        const bool branch_taken_0x171670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171670u;
        // 0x171674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171670) {
            ctx->pc = 0x17167Cu;
            goto label_17167c;
        }
    }
    ctx->pc = 0x171678u;
label_171678:
    // 0x171678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17167c:
    // 0x17167c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x17167Cu;
    {
        const bool branch_taken_0x17167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17167c) {
            ctx->pc = 0x171680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17167Cu;
            // 0x171680: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171750u;
            goto label_171750;
        }
    }
    ctx->pc = 0x171684u;
    // 0x171684: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x171688: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x171688u;
    {
        const bool branch_taken_0x171688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171688u;
        // 0x17168c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171688) {
            ctx->pc = 0x1716B0u;
            goto label_1716b0;
        }
    }
    ctx->pc = 0x171690u;
    // 0x171690: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x171694u;
    {
        const bool branch_taken_0x171694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171694u;
        // 0x171698: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171694) {
            ctx->pc = 0x1716B0u;
            goto label_1716b0;
        }
    }
    ctx->pc = 0x17169Cu;
    // 0x17169c: 0xc0643a6  jal         func_190E98
    ctx->pc = 0x17169Cu;
    SET_GPR_U32(ctx, 31, 0x1716A4u);
    ctx->pc = 0x1716A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17169Cu;
    // 0x1716a0: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190E98u, 0x17169Cu, 0x1716A4u)) {
        return;
    }
    ctx->pc = 0x1716A4u;
label_1716a4:
    // 0x1716a4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1716a8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1716a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1716ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1716acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1716b0:
    // 0x1716b0: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1716B0u;
    {
        const bool branch_taken_0x1716b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716B0u;
        // 0x1716b4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716b0) {
            ctx->pc = 0x17174Cu;
            goto label_17174c;
        }
    }
    ctx->pc = 0x1716B8u;
    // 0x1716b8: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1716bc: 0x244555c0  addiu       $a1, $v0, 0x55C0
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
    // 0x1716c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1716C0u;
    {
        const bool branch_taken_0x1716c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716C0u;
        // 0x1716c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716c0) {
            ctx->pc = 0x1716CCu;
            goto label_1716cc;
        }
    }
    ctx->pc = 0x1716C8u;
    // 0x1716c8: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1716cc:
    // 0x1716cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1716d0: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x1716D0u;
    SET_GPR_U32(ctx, 31, 0x1716D8u);
    ctx->pc = 0x1716D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716D0u;
    // 0x1716d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x1716D0u, 0x1716D8u)) {
        return;
    }
    ctx->pc = 0x1716D8u;
label_1716d8:
    // 0x1716d8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1716d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1716dc: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1716e0: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1716e4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1716E4u;
    {
        const bool branch_taken_0x1716e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1716e4) {
            ctx->pc = 0x1716E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1716E4u;
            // 0x1716e8: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17170Cu;
            goto label_17170c;
        }
    }
    ctx->pc = 0x1716ECu;
    // 0x1716ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1716f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1716F0u;
    {
        const bool branch_taken_0x1716f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1716f0) {
            ctx->pc = 0x1716F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1716F0u;
            // 0x1716f4: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17170Cu;
            goto label_17170c;
        }
    }
    ctx->pc = 0x1716F8u;
    // 0x1716f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1716f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1716fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1716fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171700: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x171700u;
    SET_GPR_U32(ctx, 31, 0x171708u);
    ctx->pc = 0x171704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171700u;
    // 0x171704: 0xafb40004  sw          $s4, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x171700u, 0x171708u)) {
        return;
    }
    ctx->pc = 0x171708u;
label_171708:
    // 0x171708: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x171708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_17170c:
    // 0x17170c: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17170Cu;
    {
        const bool branch_taken_0x17170c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17170c) {
            ctx->pc = 0x171710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17170Cu;
            // 0x171710: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171750u;
            goto label_171750;
        }
    }
    ctx->pc = 0x171714u;
    // 0x171714: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x171714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171718: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x171718u;
    {
        const bool branch_taken_0x171718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171718) {
            ctx->pc = 0x17171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171718u;
            // 0x17171c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171750u;
            goto label_171750;
        }
    }
    ctx->pc = 0x171720u;
    // 0x171720: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x171720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x171724: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171724u;
    {
        const bool branch_taken_0x171724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171724u;
        // 0x171728: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171724) {
            ctx->pc = 0x17174Cu;
            goto label_17174c;
        }
    }
    ctx->pc = 0x17172Cu;
    // 0x17172c: 0xc0641d6  jal         func_190758
    ctx->pc = 0x17172Cu;
    SET_GPR_U32(ctx, 31, 0x171734u);
    ctx->pc = 0x171730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17172Cu;
    // 0x171730: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190758u, 0x17172Cu, 0x171734u)) {
        return;
    }
    ctx->pc = 0x171734u;
label_171734:
    // 0x171734: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x171738: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x171738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x17173c: 0x24a55590  addiu       $a1, $a1, 0x5590
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21904));
    // 0x171740: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x171744: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x171744u;
    SET_GPR_U32(ctx, 31, 0x17174Cu);
    ctx->pc = 0x171748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171744u;
    // 0x171748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x171744u, 0x17174Cu)) {
        return;
    }
    ctx->pc = 0x17174Cu;
label_17174c:
    // 0x17174c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17174cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_171750:
    // 0x171750: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x171750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171754: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x171754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171758: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x171758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17175c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x17175cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171764: 0x3e00008  jr          $ra
    ctx->pc = 0x171764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171764u;
        // 0x171768: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17176Cu;
    // 0x17176c: 0x0  nop
    ctx->pc = 0x17176cu;
    // NOP
    ctx->pc = 0x171770u;
}
