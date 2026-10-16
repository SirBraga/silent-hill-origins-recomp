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

// Function: sub_00236650
// Address: 0x236650 - 0x2368b8
void sub_00236650_0x236650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236650_0x236650");
#endif

    switch (ctx->pc) {
        case 0x236678u: goto label_236678;
        case 0x236688u: goto label_236688;
        case 0x2366b0u: goto label_2366b0;
        case 0x2366f8u: goto label_2366f8;
        case 0x236708u: goto label_236708;
        case 0x236718u: goto label_236718;
        default: break;
    }

    ctx->pc = 0x236650u;

    // 0x236650: 0x27bdef90  addiu       $sp, $sp, -0x1070
    ctx->pc = 0x236650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963088));
    // 0x236654: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x236654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236658: 0x7fb01060  sq          $s0, 0x1060($sp)
    ctx->pc = 0x236658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 16));
    // 0x23665c: 0x7fb11050  sq          $s1, 0x1050($sp)
    ctx->pc = 0x23665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 17));
    // 0x236660: 0x7fb21040  sq          $s2, 0x1040($sp)
    ctx->pc = 0x236660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 18));
    // 0x236664: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x236668: 0x1840008d  blez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x236668u;
    {
        const bool branch_taken_0x236668 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236668u;
        // 0x23666c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236668) {
            ctx->pc = 0x2368A0u;
            goto label_2368a0;
        }
    }
    ctx->pc = 0x236670u;
    // 0x236670: 0x27b11000  addiu       $s1, $sp, 0x1000
    ctx->pc = 0x236670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x236674: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_236678:
    // 0x236678: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x236678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23667c: 0x25b20004  addiu       $s2, $t5, 0x4
    ctx->pc = 0x23667cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x236680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236684: 0x0  nop
    ctx->pc = 0x236684u;
    // NOP
label_236688:
    // 0x236688: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x236688u;
    {
        const bool branch_taken_0x236688 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x23668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236688u;
        // 0x23668c: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236688) {
            ctx->pc = 0x2366CCu;
            goto label_2366cc;
        }
    }
    ctx->pc = 0x236690u;
    // 0x236690: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x236690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236694: 0x1a31021  addu        $v0, $t5, $v1
    ctx->pc = 0x236694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x236698: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x236698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23669c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2366a0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2366a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2366a4: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x2366a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2366a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2366a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2366ac: 0x0  nop
    ctx->pc = 0x2366acu;
    // NOP
label_2366b0:
    // 0x2366b0: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x2366b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2366b4: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2366b8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2366b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2366bc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2366bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2366c0: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x2366c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2366c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2366C4u;
    {
        const bool branch_taken_0x2366c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2366C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366C4u;
        // 0x2366c8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366c4) {
            ctx->pc = 0x2366B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2366b0;
        }
    }
    ctx->pc = 0x2366CCu;
label_2366cc:
    // 0x2366cc: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x2366ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366d0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2366d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2366d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2366D4u;
    {
        const bool branch_taken_0x2366d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2366D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366D4u;
        // 0x2366d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366d4) {
            ctx->pc = 0x236688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236688;
        }
    }
    ctx->pc = 0x2366DCu;
    // 0x2366dc: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2366e0: 0x5840006b  blezl       $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2366E0u;
    {
        const bool branch_taken_0x2366e0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2366e0) {
            ctx->pc = 0x2366E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2366E0u;
            // 0x2366e4: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236890u;
            goto label_236890;
        }
    }
    ctx->pc = 0x2366E8u;
    // 0x2366e8: 0x31b00004  andi        $s0, $t5, 0x4
    ctx->pc = 0x2366e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x2366ec: 0x25b80002  addiu       $t8, $t5, 0x2
    ctx->pc = 0x2366ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x2366f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2366f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366f4: 0x0  nop
    ctx->pc = 0x2366f4u;
    // NOP
label_2366f8:
    // 0x2366f8: 0x25190010  addiu       $t9, $t0, 0x10
    ctx->pc = 0x2366f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2366fc: 0x87040  sll         $t6, $t0, 1
    ctx->pc = 0x2366fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x236700: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x236700u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236704: 0x0  nop
    ctx->pc = 0x236704u;
    // NOP
label_236708:
    // 0x236708: 0x256f0010  addiu       $t7, $t3, 0x10
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x23670c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x23670cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236710: 0xb5027  nor         $t2, $zero, $t3
    ctx->pc = 0x236710u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x236714: 0x0  nop
    ctx->pc = 0x236714u;
    // NOP
label_236718:
    // 0x236718: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x236718u;
    {
        const bool branch_taken_0x236718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236718u;
        // 0x23671c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236718) {
            ctx->pc = 0x236774u;
            goto label_236774;
        }
    }
    ctx->pc = 0x236720u;
    // 0x236720: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x236720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x236724: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236724u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x236728: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x236728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23672c: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x23672cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x236730: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236734: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236734u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x236738: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x236738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x23673c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23673cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236740: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x236744: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x236744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x236748: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x236748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x23674c: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x23674cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x236750: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236754: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x236754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x236758: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x236758u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x23675c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23675cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x236760: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x236760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x236764: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x236764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x236768: 0x16c2821  addu        $a1, $t3, $t4
    ctx->pc = 0x236768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x23676c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23676Cu;
    {
        const bool branch_taken_0x23676c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23676Cu;
        // 0x236770: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23676c) {
            ctx->pc = 0x2367C0u;
            goto label_2367c0;
        }
    }
    ctx->pc = 0x236774u;
label_236774:
    // 0x236774: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x236774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x236778: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x23677c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23677cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x236780: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x236780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x236784: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236788: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236788u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x23678c: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x23678cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x236790: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x236790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236794: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x236794u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x236798: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x236798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x23679c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23679cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2367a0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2367a4: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x2367a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x2367a8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2367a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2367ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2367acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2367b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2367b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2367b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2367b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2367b8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2367b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2367bc: 0x16c2821  addu        $a1, $t3, $t4
    ctx->pc = 0x2367bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_2367c0:
    // 0x2367c0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2367c4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2367c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2367c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2367c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2367cc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2367ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2367d0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2367d4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2367d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2367d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2367d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2367dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2367e0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2367e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2367e4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2367e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2367e8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2367e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2367ec: 0x29820010  slti        $v0, $t4, 0x10
    ctx->pc = 0x2367ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2367f0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2367F0u;
    {
        const bool branch_taken_0x2367f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367F0u;
        // 0x2367f4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367f0) {
            ctx->pc = 0x236718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236718;
        }
    }
    ctx->pc = 0x2367F8u;
    // 0x2367f8: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x2367f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367fc: 0x29620040  slti        $v0, $t3, 0x40
    ctx->pc = 0x2367fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x236800: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x236800u;
    {
        const bool branch_taken_0x236800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236800) {
            ctx->pc = 0x236804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236800u;
            // 0x236804: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236708;
        }
    }
    ctx->pc = 0x236808u;
    // 0x236808: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x23680c: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x23680cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236810: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x236810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236814: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x236814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236818: 0x7ba41000  lq          $a0, 0x1000($sp)
    ctx->pc = 0x236818u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x23681c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236820: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x236820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x236824: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x236824u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x236828: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x23682c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236830: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x236830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236834: 0x7ba41010  lq          $a0, 0x1010($sp)
    ctx->pc = 0x236834u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x236838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23683c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x23683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x236840: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x236840u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x236844: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236848: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x236848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23684c: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x23684cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236850: 0x7ba51020  lq          $a1, 0x1020($sp)
    ctx->pc = 0x236850u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x236854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236858: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x236858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x23685c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x23685cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x236860: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236864: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236868: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x236868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23686c: 0x7ba51030  lq          $a1, 0x1030($sp)
    ctx->pc = 0x23686cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x236870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x236874: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x236874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x236878: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x236878u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x23687c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x23687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x236880: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x236880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236884: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x236884u;
    {
        const bool branch_taken_0x236884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236884) {
            ctx->pc = 0x236888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236884u;
            // 0x236888: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2366F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2366f8;
        }
    }
    ctx->pc = 0x23688Cu;
    // 0x23688c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x23688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_236890:
    // 0x236890: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x236890u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236894: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x236894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236898: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
    ctx->pc = 0x236898u;
    {
        const bool branch_taken_0x236898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236898) {
            ctx->pc = 0x23689Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236898u;
            // 0x23689c: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236678;
        }
    }
    ctx->pc = 0x2368A0u;
label_2368a0:
    // 0x2368a0: 0x7bb01060  lq          $s0, 0x1060($sp)
    ctx->pc = 0x2368a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x2368a4: 0x7bb11050  lq          $s1, 0x1050($sp)
    ctx->pc = 0x2368a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x2368a8: 0x7bb21040  lq          $s2, 0x1040($sp)
    ctx->pc = 0x2368a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x2368ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2368ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2368B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368ACu;
        // 0x2368b0: 0x27bd1070  addiu       $sp, $sp, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2368B4u;
    // 0x2368b4: 0x0  nop
    ctx->pc = 0x2368b4u;
    // NOP
    ctx->pc = 0x2368b8u;
}
