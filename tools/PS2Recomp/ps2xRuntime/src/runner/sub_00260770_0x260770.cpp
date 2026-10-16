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

// Function: sub_00260770
// Address: 0x260770 - 0x260f58
void sub_00260770_0x260770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260770_0x260770");
#endif

    switch (ctx->pc) {
        case 0x26079cu: goto label_26079c;
        case 0x260808u: goto label_260808;
        case 0x260918u: goto label_260918;
        case 0x260ef0u: goto label_260ef0;
        case 0x260f38u: goto label_260f38;
        default: break;
    }

    ctx->pc = 0x260770u;

    // 0x260770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x260774: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x260774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x260778: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x260778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26077c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26077cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260780: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x260780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x260784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260788: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x26078c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26078Cu;
    {
        const bool branch_taken_0x26078c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26078c) {
            ctx->pc = 0x260790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26078Cu;
            // 0x260790: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2607A0u;
            goto label_2607a0;
        }
    }
    ctx->pc = 0x260794u;
    // 0x260794: 0xc091a88  jal         func_246A20
    ctx->pc = 0x260794u;
    SET_GPR_U32(ctx, 31, 0x26079Cu);
    ctx->pc = 0x260798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260794u;
    // 0x260798: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x260794u, 0x26079Cu)) {
        return;
    }
    ctx->pc = 0x26079Cu;
label_26079c:
    // 0x26079c: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x26079cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2607a0:
    // 0x2607a0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2607A0u;
    {
        const bool branch_taken_0x2607a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607A0u;
        // 0x2607a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607a0) {
            ctx->pc = 0x2607ACu;
            goto label_2607ac;
        }
    }
    ctx->pc = 0x2607A8u;
    // 0x2607a8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2607a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2607ac:
    // 0x2607ac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2607ACu;
    {
        const bool branch_taken_0x2607ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607ACu;
        // 0x2607b0: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607ac) {
            ctx->pc = 0x2607D8u;
            goto label_2607d8;
        }
    }
    ctx->pc = 0x2607B4u;
    // 0x2607b4: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x2607b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x2607b8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2607b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2607bc: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x2607bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2607c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2607c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2607c4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2607c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2607c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2607c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2607cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2607ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2607d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2607d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2607d4: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x2607d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
label_2607d8:
    // 0x2607d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2607d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2607dc: 0x8c424138  lw          $v0, 0x4138($v0)
    ctx->pc = 0x2607dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4138u));
    // 0x2607e0: 0x12020041  beq         $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2607E0u;
    {
        const bool branch_taken_0x2607e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2607E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607E0u;
        // 0x2607e4: 0x8f8290c4  lw          $v0, -0x6F3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607e0) {
            ctx->pc = 0x2608E8u;
            goto label_2608e8;
        }
    }
    ctx->pc = 0x2607E8u;
    // 0x2607e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2607E8u;
    {
        const bool branch_taken_0x2607e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607E8u;
        // 0x2607ec: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607e8) {
            ctx->pc = 0x260810u;
            goto label_260810;
        }
    }
    ctx->pc = 0x2607F0u;
    // 0x2607f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2607f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2607f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2607f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2607f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2607fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x260800: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x260800u;
    SET_GPR_U32(ctx, 31, 0x260808u);
    ctx->pc = 0x260804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260800u;
    // 0x260804: 0xff8284a0  sd          $v0, -0x7B60($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x260800u, 0x260808u)) {
        return;
    }
    ctx->pc = 0x260808u;
label_260808:
    // 0x260808: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x260808u;
    {
        const bool branch_taken_0x260808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260808u;
        // 0x26080c: 0xaf9090c8  sw          $s0, -0x6F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260808) {
            ctx->pc = 0x260828u;
            goto label_260828;
        }
    }
    ctx->pc = 0x260810u;
label_260810:
    // 0x260810: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x260810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x260814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x260818: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26081c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26081cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x260820: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260824: 0xac304138  sw          $s0, 0x4138($at)
    ctx->pc = 0x260824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_260828:
    // 0x260828: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x260828u;
    {
        const bool branch_taken_0x260828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260828u;
        // 0x26082c: 0xdf828488  ld          $v0, -0x7B78($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260828) {
            ctx->pc = 0x2608E0u;
            goto label_2608e0;
        }
    }
    ctx->pc = 0x260830u;
    // 0x260830: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x260830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x260834: 0x92240050  lbu         $a0, 0x50($s1)
    ctx->pc = 0x260834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x260838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26083c: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x26083cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x260840: 0x5024000e  beql        $at, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x260840u;
    {
        const bool branch_taken_0x260840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x260840) {
            ctx->pc = 0x260844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260840u;
            // 0x260844: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26087Cu;
            goto label_26087c;
        }
    }
    ctx->pc = 0x260848u;
    // 0x260848: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x260848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x26084c: 0x5024000b  beql        $at, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x26084Cu;
    {
        const bool branch_taken_0x26084c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26084c) {
            ctx->pc = 0x260850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26084Cu;
            // 0x260850: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26087Cu;
            goto label_26087c;
        }
    }
    ctx->pc = 0x260854u;
    // 0x260854: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x260854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x260858: 0x50240008  beql        $at, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x260858u;
    {
        const bool branch_taken_0x260858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x260858) {
            ctx->pc = 0x26085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260858u;
            // 0x26085c: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26087Cu;
            goto label_26087c;
        }
    }
    ctx->pc = 0x260860u;
    // 0x260860: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x260860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x260864: 0x50240005  beql        $at, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260864u;
    {
        const bool branch_taken_0x260864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x260864) {
            ctx->pc = 0x260868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260864u;
            // 0x260868: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26087Cu;
            goto label_26087c;
        }
    }
    ctx->pc = 0x26086Cu;
    // 0x26086c: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x26086cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x260870: 0x50240002  beql        $at, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260870u;
    {
        const bool branch_taken_0x260870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x260870) {
            ctx->pc = 0x260874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260870u;
            // 0x260874: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26087Cu;
            goto label_26087c;
        }
    }
    ctx->pc = 0x260878u;
    // 0x260878: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x260878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_26087c:
    // 0x26087c: 0x0  nop
    ctx->pc = 0x26087cu;
    // NOP
    // 0x260880: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260884: 0xfc2234f8  sd          $v0, 0x34F8($at)
    ctx->pc = 0x260884u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F8u, _value); } while (0);
    // 0x260888: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26088c: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x26088cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x260890: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x260890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260894: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x260894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x260898: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x260898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x26089c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26089cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2608a0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2608A0u;
    {
        const bool branch_taken_0x2608a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2608a0) {
            ctx->pc = 0x2608A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2608A0u;
            // 0x2608a4: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2608B8u;
            goto label_2608b8;
        }
    }
    ctx->pc = 0x2608A8u;
    // 0x2608a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2608a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2608ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2608acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2608b0: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x2608b0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x2608b4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2608b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2608b8:
    // 0x2608b8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x2608b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x2608bc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2608bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2608c0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2608C0u;
    {
        const bool branch_taken_0x2608c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2608C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608C0u;
        // 0x2608c4: 0x8f8290c4  lw          $v0, -0x6F3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608c0) {
            ctx->pc = 0x2608E8u;
            goto label_2608e8;
        }
    }
    ctx->pc = 0x2608C8u;
    // 0x2608c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2608c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2608cc: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x2608ccu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x2608d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2608d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2608d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2608d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2608d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2608d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2608dc: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x2608dcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
label_2608e0:
    // 0x2608e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2608e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2608e4: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x2608e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
label_2608e8:
    // 0x2608e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2608E8u;
    {
        const bool branch_taken_0x2608e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608E8u;
        // 0x2608ec: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608e8) {
            ctx->pc = 0x2608FCu;
            goto label_2608fc;
        }
    }
    ctx->pc = 0x2608F0u;
    // 0x2608f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2608f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2608f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2608F4u;
    {
        const bool branch_taken_0x2608f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608F4u;
        // 0x2608f8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608f4) {
            ctx->pc = 0x260904u;
            goto label_260904;
        }
    }
    ctx->pc = 0x2608FCu;
label_2608fc:
    // 0x2608fc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2608fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x260900: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_260904:
    // 0x260904: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260908: 0xfc2234d0  sd          $v0, 0x34D0($at)
    ctx->pc = 0x260908u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34D0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34D0u, _value); } while (0);
    // 0x26090c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260910: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x260910u;
    SET_GPR_U32(ctx, 31, 0x260918u);
    ctx->pc = 0x260914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260910u;
    // 0x260914: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x260910u, 0x260918u)) {
        return;
    }
    ctx->pc = 0x260918u;
label_260918:
    // 0x260918: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x260918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26091c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x26091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x260920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x260920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260924: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x260924u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x260928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26092c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x26092cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260930: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x260930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x260934: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x260934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x260938: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26093c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26093cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260940: 0x3406d802  ori         $a2, $zero, 0xD802
    ctx->pc = 0x260940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x260944: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x260944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x260948: 0x34c6fe80  ori         $a2, $a2, 0xFE80
    ctx->pc = 0x260948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65152);
    // 0x26094c: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x26094cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x260950: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x260950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x260954: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x260954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x260958: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x260958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x26095c: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x26095cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x260960: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x260960u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x260964: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x260964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x260968: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26096c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26096cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260970: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x260970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x260974: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260978: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x260978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x26097c: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x26097cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x260980: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x260980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x260984: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x260984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260988: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x260988u;
    {
        const bool branch_taken_0x260988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260988u;
        // 0x26098c: 0xaf8390cc  sw          $v1, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260988) {
            ctx->pc = 0x2609A8u;
            goto label_2609a8;
        }
    }
    ctx->pc = 0x260990u;
    // 0x260990: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260994: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x260994u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x260998: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x260998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26099c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26099Cu;
    {
        const bool branch_taken_0x26099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26099Cu;
        // 0x2609a0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26099c) {
            ctx->pc = 0x2609B8u;
            goto label_2609b8;
        }
    }
    ctx->pc = 0x2609A4u;
    // 0x2609a4: 0x0  nop
    ctx->pc = 0x2609a4u;
    // NOP
label_2609a8:
    // 0x2609a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2609ac: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x2609acu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x2609b0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2609b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2609b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2609b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2609b8:
    // 0x2609b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2609b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2609bc: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x2609bcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x2609c0: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x2609c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x2609c4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2609c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2609c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2609c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2609cc: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x2609ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x2609d0: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x2609d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x2609d4: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x2609d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x2609d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2609d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2609dc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2609dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2609e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2609e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2609e4: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x2609e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x2609e8: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x2609e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x2609ec: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x2609ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x2609f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2609f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2609f4: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x2609f8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2609f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2609fc: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x2609fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x260a00: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x260a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x260a04: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x260a04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x260a08: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x260a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x260a0c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x260a0cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x260a10: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x260a10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x260a14: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x260a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x260a18: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x260a18u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260a1c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x260a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x260a20: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x260a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x260a24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260a28: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x260a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260a2c: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x260a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x260a30: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x260a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x260a34: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x260a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x260a38: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x260a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x260a3c: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x260a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x260a40: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x260a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x260a44: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x260a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x260a48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x260a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a4c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x260a4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x260a50: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x260a50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x260a54: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x260a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x260a58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260a5c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x260a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260a60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260a64: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x260a64u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x260a68: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x260a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x260a6c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x260a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x260a70: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x260a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x260a74: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x260a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x260a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260A78u;
    {
        const bool branch_taken_0x260a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A78u;
        // 0x260a7c: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a78) {
            ctx->pc = 0x260A90u;
            goto label_260a90;
        }
    }
    ctx->pc = 0x260A80u;
    // 0x260a80: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x260a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x260a84: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x260a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x260a88: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x260a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x260a8c: 0x0  nop
    ctx->pc = 0x260a8cu;
    // NOP
label_260a90:
    // 0x260a90: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x260a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x260a94: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x260a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x260a98: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x260a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x260a9c: 0x0  nop
    ctx->pc = 0x260a9cu;
    // NOP
    // 0x260aa0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x260aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x260aa4: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x260aa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x260aa8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x260aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x260aac: 0x0  nop
    ctx->pc = 0x260aacu;
    // NOP
    // 0x260ab0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x260ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x260ab4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x260ab4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260ab8: 0x0  nop
    ctx->pc = 0x260ab8u;
    // NOP
    // 0x260abc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x260abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x260ac0: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x260ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x260ac4: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x260ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x260ac8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260acc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x260accu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260ad0: 0x0  nop
    ctx->pc = 0x260ad0u;
    // NOP
    // 0x260ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260ad8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x260ad8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260adc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x260adcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x260ae0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x260ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x260ae4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x260ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260ae8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x260ae8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x260aec: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x260aecu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x260af0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x260af0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x260af4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x260af4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x260af8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x260af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x260afc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x260afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260b00: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x260b00u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x260b04: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x260b04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x260b08: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x260b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x260b0c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260b10: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x260b10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260b14: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x260b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x260b18: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x260b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x260b1c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x260b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x260b20: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x260b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x260b24: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x260b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x260b28: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x260b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x260b2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x260b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x260b30: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x260b30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x260b34: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x260b34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x260b38: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x260b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x260b3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260b40: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x260b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260b44: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x260b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x260b48: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x260b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x260b4c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x260b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x260b50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x260b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x260b54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x260b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x260b58: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x260b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260b5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x260b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260b60: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x260b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260b64: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x260b64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x260b68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x260b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x260b6c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x260b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260b70: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x260b70u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x260b74: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x260b74u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x260b78: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x260b78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x260b7c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x260b7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x260b80: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x260b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x260b84: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x260b84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260b88: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x260b88u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x260b8c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x260b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x260b90: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x260b94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260b98: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x260b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260b9c: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x260b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x260ba0: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x260ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x260ba4: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x260ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x260ba8: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x260ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x260bac: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x260bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x260bb0: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x260bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x260bb4: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x260bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x260bb8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x260bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x260bbc: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x260bbcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x260bc0: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x260bc4: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x260bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x260bc8: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x260bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x260bcc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260bd0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260bd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x260bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x260bd8: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x260bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x260bdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260BDCu;
    {
        const bool branch_taken_0x260bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BDCu;
        // 0x260be0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bdc) {
            ctx->pc = 0x260BF0u;
            goto label_260bf0;
        }
    }
    ctx->pc = 0x260BE4u;
    // 0x260be4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x260BE4u;
    {
        const bool branch_taken_0x260be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260be4) {
            ctx->pc = 0x260BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BE4u;
            // 0x260be8: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x260C10u;
            goto label_260c10;
        }
    }
    ctx->pc = 0x260BECu;
    // 0x260bec: 0x0  nop
    ctx->pc = 0x260becu;
    // NOP
label_260bf0:
    // 0x260bf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260bf4: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x260bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x260bf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x260BF8u;
    {
        const bool branch_taken_0x260bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BF8u;
        // 0x260bfc: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bf8) {
            ctx->pc = 0x260C40u;
            goto label_260c40;
        }
    }
    ctx->pc = 0x260C00u;
    // 0x260c00: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x260C00u;
    {
        const bool branch_taken_0x260c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c00) {
            ctx->pc = 0x260C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260C00u;
            // 0x260c04: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260C48u;
            goto label_260c48;
        }
    }
    ctx->pc = 0x260C08u;
    // 0x260c08: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x260c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x260c0c: 0x0  nop
    ctx->pc = 0x260c0cu;
    // NOP
label_260c10:
    // 0x260c10: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x260c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x260c14: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x260c14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260c18: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x260c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x260c1c: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x260c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x260c20: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x260c20u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x260c24: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x260c24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x260c28: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x260c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x260c2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260c30: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x260c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260c34: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x260c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x260c38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x260C38u;
    {
        const bool branch_taken_0x260c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C38u;
        // 0x260c3c: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c38) {
            ctx->pc = 0x260C70u;
            goto label_260c70;
        }
    }
    ctx->pc = 0x260C40u;
label_260c40:
    // 0x260c40: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x260c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x260c44: 0x0  nop
    ctx->pc = 0x260c44u;
    // NOP
label_260c48:
    // 0x260c48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x260c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x260c4c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x260c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260c50: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x260c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x260c54: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x260c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260c58: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x260c58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x260c5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x260c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x260c60: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260c64: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x260c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260c68: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x260c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x260c6c: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x260c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_260c70:
    // 0x260c70: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x260c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x260c74: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x260c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260c78: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x260c78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x260c7c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260c80: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x260c80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260c84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x260c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x260c88: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x260c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x260c8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x260c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260c90: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260C90u;
    {
        const bool branch_taken_0x260c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C90u;
        // 0x260c94: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c90) {
            ctx->pc = 0x260CA4u;
            goto label_260ca4;
        }
    }
    ctx->pc = 0x260C98u;
    // 0x260c98: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x260c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x260c9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260ca0: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x260ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_260ca4:
    // 0x260ca4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260ca8: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x260ca8u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x260cac: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x260cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x260cb0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x260cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x260cb4: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x260cb4u;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x260cb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x260cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x260cbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x260cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x260cc0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x260cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x260cc4: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x260cc4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x260cc8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x260cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x260ccc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x260cccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260cd0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x260cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x260cd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x260cd8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260cdc: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x260cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260ce0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x260ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x260ce4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x260CE4u;
    {
        const bool branch_taken_0x260ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CE4u;
        // 0x260ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ce4) {
            ctx->pc = 0x260D88u;
            goto label_260d88;
        }
    }
    ctx->pc = 0x260CECu;
    // 0x260cec: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x260cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x260cf0: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x260cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x260cf4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x260cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x260cf8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x260cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x260cfc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260cfcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260d00: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x260d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x260d04: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x260d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x260d08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260d0c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260d10: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x260d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x260d14: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x260d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x260d18: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x260d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x260d1c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x260d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x260d20: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260d20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260d24: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x260d24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x260d28: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x260d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x260d2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260d30: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260d34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260d38: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x260d38u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x260d3c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x260d40: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260d40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260d44: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x260d44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x260d48: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x260d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x260d4c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260d50: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260d54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260d58: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x260d58u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x260d5c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x260d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x260d60: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260d60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260d64: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x260d64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x260d68: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x260d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x260d6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260d70: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260d70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260d74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260d78: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x260d78u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x260d7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x260D7Cu;
    {
        const bool branch_taken_0x260d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D7Cu;
        // 0x260d80: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d7c) {
            ctx->pc = 0x260E08u;
            goto label_260e08;
        }
    }
    ctx->pc = 0x260D84u;
    // 0x260d84: 0x0  nop
    ctx->pc = 0x260d84u;
    // NOP
label_260d88:
    // 0x260d88: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x260d88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x260d8c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x260d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x260d90: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x260d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x260d94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260d98: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260d9c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x260d9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x260da0: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x260da0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x260da4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x260da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x260da8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260dac: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260db0: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x260db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x260db4: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x260db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x260db8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x260db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x260dbc: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x260dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x260dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x260dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dc4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260dc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260dc8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x260dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x260dcc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x260dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x260dd0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260dd4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260dd8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x260dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x260ddc: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x260ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x260de0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x260de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x260de4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x260de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x260de8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260de8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260dec: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x260decu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x260df0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x260df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x260df4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260df8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260dfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260e00: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x260e00u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x260e04: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x260e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_260e08:
    // 0x260e08: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x260e08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x260e0c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x260e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x260e10: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x260e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x260e14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260e18: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x260e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260e1c: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x260e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x260e20: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x260e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x260e24: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x260e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x260e28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x260e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x260e2c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x260e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x260e30: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x260e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x260e34: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x260e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x260e38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x260e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x260e3c: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x260e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x260e40: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x260e44: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x260e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x260e48: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x260e4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x260e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x260e50: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x260e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x260e54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260e5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x260e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260e60: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x260E60u;
    {
        const bool branch_taken_0x260e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x260E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E60u;
        // 0x260e64: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e60) {
            ctx->pc = 0x260E98u;
            goto label_260e98;
        }
    }
    ctx->pc = 0x260E68u;
    // 0x260e68: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x260e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x260e6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x260e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x260e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e74: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x260e74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x260e78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x260e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x260e7c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x260e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260e80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x260e80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x260e84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x260e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x260e88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260e8c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x260e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260e90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260e94: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x260e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_260e98:
    // 0x260e98: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x260e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x260e9c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x260e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x260ea0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x260ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x260ea4: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x260ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x260ea8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x260ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260eac: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x260eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x260eb0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x260eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x260eb4: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x260eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x260eb8: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x260eb8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x260ebc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x260ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x260ec0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x260ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x260ec4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x260ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x260ec8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x260ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x260ecc: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x260eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x260ed0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x260ed0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x260ed4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x260ed8: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x260ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x260edc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x260edcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x260ee0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x260ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x260ee4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x260ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x260ee8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x260ee8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x260eec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x260eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_260ef0:
    // 0x260ef0: 0x42000039  di
    ctx->pc = 0x260ef0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x260ef4: 0x40f  sync.p
    ctx->pc = 0x260ef4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x260ef8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x260ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x260efc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x260efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x260f00: 0x0  nop
    ctx->pc = 0x260f00u;
    // NOP
    // 0x260f04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x260F04u;
    {
        const bool branch_taken_0x260f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260f04) {
            ctx->pc = 0x260EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260ef0;
        }
    }
    ctx->pc = 0x260F0Cu;
    // 0x260f0c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x260f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x260f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x260f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x260f14: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x260f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x260f18: 0x42000038  ei
    ctx->pc = 0x260f18u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x260f1c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x260f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x260f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x260f28: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260F28u;
    {
        const bool branch_taken_0x260f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x260F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F28u;
        // 0x260f2c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f28) {
            ctx->pc = 0x260F38u;
            goto label_260f38;
        }
    }
    ctx->pc = 0x260F30u;
    // 0x260f30: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x260F30u;
    SET_GPR_U32(ctx, 31, 0x260F38u);
    ctx->pc = 0x260F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F30u;
    // 0x260f34: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x260F30u, 0x260F38u)) {
        return;
    }
    ctx->pc = 0x260F38u;
label_260f38:
    // 0x260f38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x260f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260f40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x260f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260f44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x260f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x260F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F4Cu;
        // 0x260f50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260F54u;
    // 0x260f54: 0x0  nop
    ctx->pc = 0x260f54u;
    // NOP
    ctx->pc = 0x260f58u;
}
