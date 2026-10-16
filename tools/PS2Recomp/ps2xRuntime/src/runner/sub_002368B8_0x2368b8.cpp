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

// Function: sub_002368B8
// Address: 0x2368b8 - 0x236be0
void sub_002368B8_0x2368b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002368B8_0x2368b8");
#endif

    switch (ctx->pc) {
        case 0x2368e0u: goto label_2368e0;
        case 0x2368f0u: goto label_2368f0;
        case 0x236918u: goto label_236918;
        case 0x236960u: goto label_236960;
        case 0x236968u: goto label_236968;
        case 0x236978u: goto label_236978;
        default: break;
    }

    ctx->pc = 0x2368b8u;

    // 0x2368b8: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x2368b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
    // 0x2368bc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2368bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368c0: 0x7fb00850  sq          $s0, 0x850($sp)
    ctx->pc = 0x2368c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 16));
    // 0x2368c4: 0x7fb10840  sq          $s1, 0x840($sp)
    ctx->pc = 0x2368c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 17));
    // 0x2368c8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2368c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2368cc: 0x184000bf  blez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2368CCu;
    {
        const bool branch_taken_0x2368cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2368D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368CCu;
        // 0x2368d0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368cc) {
            ctx->pc = 0x236BCCu;
            goto label_236bcc;
        }
    }
    ctx->pc = 0x2368D4u;
    // 0x2368d4: 0x27af0800  addiu       $t7, $sp, 0x800
    ctx->pc = 0x2368d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x2368d8: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2368dc: 0x0  nop
    ctx->pc = 0x2368dcu;
    // NOP
label_2368e0:
    // 0x2368e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2368e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368e4: 0x25b10004  addiu       $s1, $t5, 0x4
    ctx->pc = 0x2368e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x2368e8: 0xb6043  sra         $t4, $t3, 1
    ctx->pc = 0x2368e8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 11), 1));
    // 0x2368ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2368ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2368f0:
    // 0x2368f0: 0x19800010  blez        $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x2368F0u;
    {
        const bool branch_taken_0x2368f0 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2368F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368F0u;
        // 0x2368f4: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368f0) {
            ctx->pc = 0x236934u;
            goto label_236934;
        }
    }
    ctx->pc = 0x2368F8u;
    // 0x2368f8: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x2368f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2368fc: 0x1a31021  addu        $v0, $t5, $v1
    ctx->pc = 0x2368fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x236900: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x236900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236904: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x236904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x236908: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x236908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23690c: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x23690cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x236910: 0xb3043  sra         $a2, $t3, 1
    ctx->pc = 0x236910u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 1));
    // 0x236914: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_236918:
    // 0x236918: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x23691c: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x23691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x236920: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x236920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236924: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x236924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x236928: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x236928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23692c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23692Cu;
    {
        const bool branch_taken_0x23692c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23692Cu;
        // 0x236930: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23692c) {
            ctx->pc = 0x236918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236918;
        }
    }
    ctx->pc = 0x236934u;
label_236934:
    // 0x236934: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x236934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236938: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x236938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23693c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23693Cu;
    {
        const bool branch_taken_0x23693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23693Cu;
        // 0x236940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23693c) {
            ctx->pc = 0x2368F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2368f0;
        }
    }
    ctx->pc = 0x236944u;
    // 0x236944: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x236948: 0x5840009c  blezl       $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x236948u;
    {
        const bool branch_taken_0x236948 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x236948) {
            ctx->pc = 0x23694Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236948u;
            // 0x23694c: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BBCu;
            goto label_236bbc;
        }
    }
    ctx->pc = 0x236950u;
    // 0x236950: 0x31b90004  andi        $t9, $t5, 0x4
    ctx->pc = 0x236950u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x236954: 0x25b80002  addiu       $t8, $t5, 0x2
    ctx->pc = 0x236954u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x236958: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x236958u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23695c: 0x0  nop
    ctx->pc = 0x23695cu;
    // NOP
label_236960:
    // 0x236960: 0x25100020  addiu       $s0, $t0, 0x20
    ctx->pc = 0x236960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x236964: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x236964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236968:
    // 0x236968: 0x256e0020  addiu       $t6, $t3, 0x20
    ctx->pc = 0x236968u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x23696c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x23696cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236970: 0xb6027  nor         $t4, $zero, $t3
    ctx->pc = 0x236970u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x236974: 0x0  nop
    ctx->pc = 0x236974u;
    // NOP
label_236978:
    // 0x236978: 0x13200019  beqz        $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x236978u;
    {
        const bool branch_taken_0x236978 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x23697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236978u;
        // 0x23697c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236978) {
            ctx->pc = 0x2369E0u;
            goto label_2369e0;
        }
    }
    ctx->pc = 0x236980u;
    // 0x236980: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x236980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x236984: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236988: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x236988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23698c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23698cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236990: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x236990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x236994: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x236998: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x236998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x23699c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23699cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2369a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2369a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2369a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2369a8: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x2369a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x2369ac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2369acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2369b0: 0x30e60040  andi        $a2, $a3, 0x40
    ctx->pc = 0x2369b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x2369b4: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2369b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2369b8: 0x31850001  andi        $a1, $t4, 0x1
    ctx->pc = 0x2369b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x2369bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2369bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2369c0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2369c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2369c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2369c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2369c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2369cc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2369ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2369d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2369d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2369d4: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x2369d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2369d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2369D8u;
    {
        const bool branch_taken_0x2369d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2369DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369D8u;
        // 0x2369dc: 0x16a1821  addu        $v1, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369d8) {
            ctx->pc = 0x236A38u;
            goto label_236a38;
        }
    }
    ctx->pc = 0x2369E0u;
label_2369e0:
    // 0x2369e0: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x2369e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x2369e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2369e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2369e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2369e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2369ec: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x2369ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2369f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2369f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2369f4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2369f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2369f8: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x2369f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x2369fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2369fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236a00: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x236a00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x236a04: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x236a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x236a08: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x236a0c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x236a0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x236a10: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x236a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x236a14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x236a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x236a18: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x236a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x236a1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x236a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236a20: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x236a24: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x236a28: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x236a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x236a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236a30: 0x16a1821  addu        $v1, $t3, $t2
    ctx->pc = 0x236a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x236a34: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x236a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_236a38:
    // 0x236a38: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x236a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x236a3c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x236A3Cu;
    {
        const bool branch_taken_0x236a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A3Cu;
        // 0x236a40: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a3c) {
            ctx->pc = 0x236AB4u;
            goto label_236ab4;
        }
    }
    ctx->pc = 0x236A44u;
    // 0x236a44: 0x1e22821  addu        $a1, $t7, $v0
    ctx->pc = 0x236a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x236a48: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x236a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x236a4c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x236A4Cu;
    {
        const bool branch_taken_0x236a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A4Cu;
        // 0x236a50: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a4c) {
            ctx->pc = 0x236A80u;
            goto label_236a80;
        }
    }
    ctx->pc = 0x236A54u;
    // 0x236a54: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x236a54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x236a58: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x236a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x236a5c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x236a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x236a60: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x236a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x236a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236a68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236a68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236a6c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x236a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x236a70: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x236a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236a74: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x236a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x236a78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x236A78u;
    {
        const bool branch_taken_0x236a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A78u;
        // 0x236a7c: 0xc31825  or          $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a78) {
            ctx->pc = 0x236B0Cu;
            goto label_236b0c;
        }
    }
    ctx->pc = 0x236A80u;
label_236a80:
    // 0x236a80: 0x41143  sra         $v0, $a0, 5
    ctx->pc = 0x236a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
    // 0x236a84: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x236a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x236a88: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x236a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x236a8c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x236a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x236a90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236a94: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x236a94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x236a98: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x236a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x236a9c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x236a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236aa0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x236aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x236aa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x236aa8: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x236aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x236aac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x236AACu;
    {
        const bool branch_taken_0x236aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AACu;
        // 0x236ab0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aac) {
            ctx->pc = 0x236B10u;
            goto label_236b10;
        }
    }
    ctx->pc = 0x236AB4u;
label_236ab4:
    // 0x236ab4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x236ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x236ab8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x236AB8u;
    {
        const bool branch_taken_0x236ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AB8u;
        // 0x236abc: 0x1e22821  addu        $a1, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ab8) {
            ctx->pc = 0x236AE8u;
            goto label_236ae8;
        }
    }
    ctx->pc = 0x236AC0u;
    // 0x236ac0: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x236ac4: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x236ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x236ac8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x236ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x236acc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x236accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x236ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236ad4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236ad8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x236ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x236adc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x236adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236ae0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x236AE0u;
    {
        const bool branch_taken_0x236ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AE0u;
        // 0x236ae4: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ae0) {
            ctx->pc = 0x236B0Cu;
            goto label_236b0c;
        }
    }
    ctx->pc = 0x236AE8u;
label_236ae8:
    // 0x236ae8: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x236ae8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x236aec: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x236aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x236af0: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x236af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x236af4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x236af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x236af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236afc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x236afcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x236b00: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x236b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x236b04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x236b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236b08: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x236b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_236b0c:
    // 0x236b0c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x236b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_236b10:
    // 0x236b10: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x236b10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x236b14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x236b18: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x236b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x236b1c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x236B1Cu;
    {
        const bool branch_taken_0x236b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B1Cu;
        // 0x236b20: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b1c) {
            ctx->pc = 0x236978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236978;
        }
    }
    ctx->pc = 0x236B24u;
    // 0x236b24: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x236b24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b28: 0x29620080  slti        $v0, $t3, 0x80
    ctx->pc = 0x236b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x236b2c: 0x5440ff8e  bnel        $v0, $zero, . + 4 + (-0x72 << 2)
    ctx->pc = 0x236B2Cu;
    {
        const bool branch_taken_0x236b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236b2c) {
            ctx->pc = 0x236B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236B2Cu;
            // 0x236b30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236968;
        }
    }
    ctx->pc = 0x236B34u;
    // 0x236b34: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236b38: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x236b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236b3c: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x236b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236b40: 0x7ba40800  lq          $a0, 0x800($sp)
    ctx->pc = 0x236b40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
    // 0x236b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236b48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x236b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x236b4c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x236b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x236b50: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236b54: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x236b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236b58: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x236b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236b5c: 0x7ba40810  lq          $a0, 0x810($sp)
    ctx->pc = 0x236b5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x236b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236b64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x236b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x236b68: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x236b68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x236b6c: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236b70: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x236b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236b74: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x236b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236b78: 0x7ba40820  lq          $a0, 0x820($sp)
    ctx->pc = 0x236b78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x236b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236b80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x236b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x236b84: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x236b84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x236b88: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x236b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x236b8c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x236b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x236b90: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x236b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x236b94: 0x7ba40830  lq          $a0, 0x830($sp)
    ctx->pc = 0x236b94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x236b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236b9c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x236b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x236ba0: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x236ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x236ba4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x236ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ba8: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x236ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x236bac: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x236bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236bb0: 0x5440ff6b  bnel        $v0, $zero, . + 4 + (-0x95 << 2)
    ctx->pc = 0x236BB0u;
    {
        const bool branch_taken_0x236bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236bb0) {
            ctx->pc = 0x236BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BB0u;
            // 0x236bb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236960;
        }
    }
    ctx->pc = 0x236BB8u;
    // 0x236bb8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_236bbc:
    // 0x236bbc: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x236bbcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bc0: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x236bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236bc4: 0x5440ff46  bnel        $v0, $zero, . + 4 + (-0xBA << 2)
    ctx->pc = 0x236BC4u;
    {
        const bool branch_taken_0x236bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236bc4) {
            ctx->pc = 0x236BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BC4u;
            // 0x236bc8: 0x8d2b000c  lw          $t3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2368E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2368e0;
        }
    }
    ctx->pc = 0x236BCCu;
label_236bcc:
    // 0x236bcc: 0x7bb00850  lq          $s0, 0x850($sp)
    ctx->pc = 0x236bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x236bd0: 0x7bb10840  lq          $s1, 0x840($sp)
    ctx->pc = 0x236bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x236bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x236BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BD4u;
        // 0x236bd8: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BDCu;
    // 0x236bdc: 0x0  nop
    ctx->pc = 0x236bdcu;
    // NOP
    ctx->pc = 0x236be0u;
}
