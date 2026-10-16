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

// Function: sub_002726B8
// Address: 0x2726b8 - 0x272890
void sub_002726B8_0x2726b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002726B8_0x2726b8");
#endif

    switch (ctx->pc) {
        case 0x272714u: goto label_272714;
        case 0x272720u: goto label_272720;
        case 0x272784u: goto label_272784;
        case 0x272790u: goto label_272790;
        case 0x2727d8u: goto label_2727d8;
        case 0x272804u: goto label_272804;
        case 0x272810u: goto label_272810;
        default: break;
    }

    ctx->pc = 0x2726b8u;

    // 0x2726b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2726b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2726bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2726bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2726c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2726c4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2726c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2726c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2726c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2726cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2726ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2726d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2726d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2726d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2726d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2726d8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2726d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726dc: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2726dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2726e0: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2726e0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2726e4: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x2726e4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2726e8: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x2726e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x2726ec: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2726ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2726f0: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x2726f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x2726f4: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x2726f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2726f8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2726F8u;
    {
        const bool branch_taken_0x2726f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726F8u;
        // 0x2726fc: 0x2a220034  slti        $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726f8) {
            ctx->pc = 0x2727BCu;
            goto label_2727bc;
        }
    }
    ctx->pc = 0x272700u;
    // 0x272700: 0x6210017  bgez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x272700u;
    {
        const bool branch_taken_0x272700 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x272704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272700u;
        // 0x272704: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272700) {
            ctx->pc = 0x272760u;
            goto label_272760;
        }
    }
    ctx->pc = 0x272708u;
    // 0x272708: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x272708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x27270c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x27270Cu;
    SET_GPR_U32(ctx, 31, 0x272714u);
    ctx->pc = 0x272710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27270Cu;
    // 0x272710: 0xdc45cb48  ld          $a1, -0x34B8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x27270Cu, 0x272714u)) {
        return;
    }
    ctx->pc = 0x272714u;
label_272714:
    // 0x272714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272718: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x272718u;
    SET_GPR_U32(ctx, 31, 0x272720u);
    ctx->pc = 0x27271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272718u;
    // 0x27271c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x272718u, 0x272720u)) {
        return;
    }
    ctx->pc = 0x272720u;
label_272720:
    // 0x272720: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x272720u;
    {
        const bool branch_taken_0x272720 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x272724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272720u;
        // 0x272724: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272720) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272728u;
    // 0x272728: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272728u;
    {
        const bool branch_taken_0x272728 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x27272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272728u;
        // 0x27272c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272728) {
            ctx->pc = 0x272740u;
            goto label_272740;
        }
    }
    ctx->pc = 0x272730u;
    // 0x272730: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x272730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272734: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x272734u;
    {
        const bool branch_taken_0x272734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272734u;
        // 0x272738: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272734) {
            ctx->pc = 0x272858u;
            goto label_272858;
        }
    }
    ctx->pc = 0x27273Cu;
    // 0x27273c: 0x0  nop
    ctx->pc = 0x27273cu;
    // NOP
label_272740:
    // 0x272740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272744: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x272744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x272748: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x272748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x27274c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x27274Cu;
    {
        const bool branch_taken_0x27274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27274Cu;
        // 0x272750: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27274c) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272754u;
    // 0x272754: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x272754u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x272758: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x272758u;
    {
        const bool branch_taken_0x272758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272758u;
        // 0x27275c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272758) {
            ctx->pc = 0x272858u;
            goto label_272858;
        }
    }
    ctx->pc = 0x272760u;
label_272760:
    // 0x272760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272764: 0x2229807  srav        $s3, $v0, $s1
    ctx->pc = 0x272764u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x272768: 0x2131824  and         $v1, $s0, $s3
    ctx->pc = 0x272768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x27276c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x27276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x272770: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x272770u;
    {
        const bool branch_taken_0x272770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272770u;
        // 0x272774: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272770) {
            ctx->pc = 0x27286Cu;
            goto label_27286c;
        }
    }
    ctx->pc = 0x272778u;
    // 0x272778: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x272778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27277c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x27277Cu;
    SET_GPR_U32(ctx, 31, 0x272784u);
    ctx->pc = 0x272780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27277Cu;
    // 0x272780: 0xdc45cb48  ld          $a1, -0x34B8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x27277Cu, 0x272784u)) {
        return;
    }
    ctx->pc = 0x272784u;
label_272784:
    // 0x272784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272788: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x272788u;
    SET_GPR_U32(ctx, 31, 0x272790u);
    ctx->pc = 0x27278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272788u;
    // 0x27278c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x272788u, 0x272790u)) {
        return;
    }
    ctx->pc = 0x272790u;
label_272790:
    // 0x272790: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x272790u;
    {
        const bool branch_taken_0x272790 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x272794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272790u;
        // 0x272794: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272790) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272798u;
    // 0x272798: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272798u;
    {
        const bool branch_taken_0x272798 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x27279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272798u;
        // 0x27279c: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272798) {
            ctx->pc = 0x2727B0u;
            goto label_2727b0;
        }
    }
    ctx->pc = 0x2727A0u;
    // 0x2727a0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2727a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2727a4: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2727a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2727a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2727ac: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x2727acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_2727b0:
    // 0x2727b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2727b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2727B4u;
    {
        const bool branch_taken_0x2727b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727B4u;
        // 0x2727b8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727b4) {
            ctx->pc = 0x272858u;
            goto label_272858;
        }
    }
    ctx->pc = 0x2727BCu;
label_2727bc:
    // 0x2727bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2727BCu;
    {
        const bool branch_taken_0x2727bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2727C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727BCu;
        // 0x2727c0: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727bc) {
            ctx->pc = 0x2727E0u;
            goto label_2727e0;
        }
    }
    ctx->pc = 0x2727C4u;
    // 0x2727c4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2727c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2727c8: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2727C8u;
    {
        const bool branch_taken_0x2727c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2727CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727C8u;
        // 0x2727cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727c8) {
            ctx->pc = 0x272870u;
            goto label_272870;
        }
    }
    ctx->pc = 0x2727D0u;
    // 0x2727d0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2727D0u;
    SET_GPR_U32(ctx, 31, 0x2727D8u);
    ctx->pc = 0x2727D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727D0u;
    // 0x2727d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2727D0u, 0x2727D8u)) {
        return;
    }
    ctx->pc = 0x2727D8u;
label_2727d8:
    // 0x2727d8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2727D8u;
    {
        const bool branch_taken_0x2727d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727D8u;
        // 0x2727dc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727d8) {
            ctx->pc = 0x272874u;
            goto label_272874;
        }
    }
    ctx->pc = 0x2727E0u;
label_2727e0:
    // 0x2727e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2727e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2727e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2727e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2727e8: 0x829806  srlv        $s3, $v0, $a0
    ctx->pc = 0x2727e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2727ec: 0x2531824  and         $v1, $s2, $s3
    ctx->pc = 0x2727ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 19));
    // 0x2727f0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2727F0u;
    {
        const bool branch_taken_0x2727f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727F0u;
        // 0x2727f4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727f0) {
            ctx->pc = 0x27286Cu;
            goto label_27286c;
        }
    }
    ctx->pc = 0x2727F8u;
    // 0x2727f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2727f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727fc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2727FCu;
    SET_GPR_U32(ctx, 31, 0x272804u);
    ctx->pc = 0x272800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727FCu;
    // 0x272800: 0xdc45cb48  ld          $a1, -0x34B8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2727FCu, 0x272804u)) {
        return;
    }
    ctx->pc = 0x272804u;
label_272804:
    // 0x272804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272808: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x272808u;
    SET_GPR_U32(ctx, 31, 0x272810u);
    ctx->pc = 0x27280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272808u;
    // 0x27280c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x272808u, 0x272810u)) {
        return;
    }
    ctx->pc = 0x272810u;
label_272810:
    // 0x272810: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x272810u;
    {
        const bool branch_taken_0x272810 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x272814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272810u;
        // 0x272814: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272810) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272818u;
    // 0x272818: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x272818u;
    {
        const bool branch_taken_0x272818 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x27281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272818u;
        // 0x27281c: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272818) {
            ctx->pc = 0x272854u;
            goto label_272854;
        }
    }
    ctx->pc = 0x272820u;
    // 0x272820: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x272820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x272824: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272824u;
    {
        const bool branch_taken_0x272824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x272828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272824u;
        // 0x272828: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272824) {
            ctx->pc = 0x272834u;
            goto label_272834;
        }
    }
    ctx->pc = 0x27282Cu;
    // 0x27282c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27282Cu;
    {
        const bool branch_taken_0x27282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27282Cu;
        // 0x272830: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27282c) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x272834u;
label_272834:
    // 0x272834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272838: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x272838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27283c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x27283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x272840: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x272840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x272844: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x272844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x272848: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x272848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27284c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x27284cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_272850:
    // 0x272850: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x272850u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_272854:
    // 0x272854: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x272854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_272858:
    // 0x272858: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x272858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x27285c: 0x0  nop
    ctx->pc = 0x27285cu;
    // NOP
label_272860:
    // 0x272860: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x272860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x272864: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x272864u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
    // 0x272868: 0x2822825  or          $a1, $s4, $v0
    ctx->pc = 0x272868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_27286c:
    // 0x27286c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272870:
    // 0x272870: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x272870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_272874:
    // 0x272874: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272878: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x272878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27287c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27287cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272880: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x272880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272884: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x272884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272888: 0x3e00008  jr          $ra
    ctx->pc = 0x272888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272888u;
        // 0x27288c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272890u;
}
