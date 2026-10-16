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

// Function: sub_002DA440
// Address: 0x2da440 - 0x2da5c0
void sub_002DA440_0x2da440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA440_0x2da440");
#endif

    switch (ctx->pc) {
        case 0x2da4e8u: goto label_2da4e8;
        case 0x2da528u: goto label_2da528;
        case 0x2da558u: goto label_2da558;
        case 0x2da598u: goto label_2da598;
        default: break;
    }

    ctx->pc = 0x2da440u;

    // 0x2da440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2da440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2da444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da448: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2da448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2da44c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2da44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da450: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2da450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2da454: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2da454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2da458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da45c: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x2da45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2da460: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA460u;
    {
        const bool branch_taken_0x2da460 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA460u;
        // 0x2da464: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da460) {
            ctx->pc = 0x2DA4A8u;
            goto label_2da4a8;
        }
    }
    ctx->pc = 0x2DA468u;
    // 0x2da468: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2da468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2da46c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA46Cu;
    {
        const bool branch_taken_0x2da46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA46Cu;
        // 0x2da470: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da46c) {
            ctx->pc = 0x2DA490u;
            goto label_2da490;
        }
    }
    ctx->pc = 0x2DA474u;
    // 0x2da474: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2da474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2da478: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2da478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2da47c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2da47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2da480: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2da480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2da484: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2da484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2da488: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DA488u;
    {
        const bool branch_taken_0x2da488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA488u;
        // 0x2da48c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da488) {
            ctx->pc = 0x2DA4B8u;
            goto label_2da4b8;
        }
    }
    ctx->pc = 0x2DA490u;
label_2da490:
    // 0x2da490: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2da490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2da494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2da494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2da498: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2da498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2da49c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2da49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2da4a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA4A0u;
    {
        const bool branch_taken_0x2da4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4A0u;
        // 0x2da4a4: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4a0) {
            ctx->pc = 0x2DA4B8u;
            goto label_2da4b8;
        }
    }
    ctx->pc = 0x2DA4A8u;
label_2da4a8:
    // 0x2da4a8: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x2da4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x2da4ac: 0x2643002c  addiu       $v1, $s2, 0x2C
    ctx->pc = 0x2da4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x2da4b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2da4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2da4b4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2da4b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_2da4b8:
    // 0x2da4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da4bc: 0x54c2001e  bnel        $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DA4BCu;
    {
        const bool branch_taken_0x2da4bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da4bc) {
            ctx->pc = 0x2DA4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA4BCu;
            // 0x2da4c0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA538u;
            goto label_2da538;
        }
    }
    ctx->pc = 0x2DA4C4u;
    // 0x2da4c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2da4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2da4c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2da4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2da4cc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2da4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2da4d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2da4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2da4d4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2da4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2da4d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2da4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da4dc: 0x12110030  beq         $s0, $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2DA4DCu;
    {
        const bool branch_taken_0x2da4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4DCu;
        // 0x2da4e0: 0x3c130070  lui         $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4dc) {
            ctx->pc = 0x2DA5A0u;
            goto label_2da5a0;
        }
    }
    ctx->pc = 0x2DA4E4u;
    // 0x2da4e4: 0x2607ffec  addiu       $a3, $s0, -0x14
    ctx->pc = 0x2da4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_2da4e8:
    // 0x2da4e8: 0x26647c48  addiu       $a0, $s3, 0x7C48
    ctx->pc = 0x2da4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 31816));
    // 0x2da4ec: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x2da4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2da4f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2da4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da4f4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2da4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2da4f8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2da4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2da4fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2da4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2da500: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2da500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2da504: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2da504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2da508: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2da508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2da50c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2da50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2da510: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2da510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2da514: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2da514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2da518: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2da51c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2da51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2da520: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DA520u;
    SET_GPR_U32(ctx, 31, 0x2DA528u);
    ctx->pc = 0x2DA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA520u;
    // 0x2da524: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DA520u, 0x2DA528u)) {
        return;
    }
    ctx->pc = 0x2DA528u;
label_2da528:
    // 0x2da528: 0x1611ffef  bne         $s0, $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DA528u;
    {
        const bool branch_taken_0x2da528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA528u;
        // 0x2da52c: 0x2607ffec  addiu       $a3, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da528) {
            ctx->pc = 0x2DA4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da4e8;
        }
    }
    ctx->pc = 0x2DA530u;
    // 0x2da530: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DA530u;
    {
        const bool branch_taken_0x2da530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA530u;
        // 0x2da534: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da530) {
            ctx->pc = 0x2DA5A4u;
            goto label_2da5a4;
        }
    }
    ctx->pc = 0x2DA538u;
label_2da538:
    // 0x2da538: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2da538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2da53c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2da53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2da540: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2da540u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2da544: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2da544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da548: 0x12110015  beq         $s0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DA548u;
    {
        const bool branch_taken_0x2da548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA548u;
        // 0x2da54c: 0x3c130070  lui         $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da548) {
            ctx->pc = 0x2DA5A0u;
            goto label_2da5a0;
        }
    }
    ctx->pc = 0x2DA550u;
    // 0x2da550: 0x2607fff4  addiu       $a3, $s0, -0xC
    ctx->pc = 0x2da550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x2da554: 0x0  nop
    ctx->pc = 0x2da554u;
    // NOP
label_2da558:
    // 0x2da558: 0x26647c48  addiu       $a0, $s3, 0x7C48
    ctx->pc = 0x2da558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 31816));
    // 0x2da55c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x2da55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2da560: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2da560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da564: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2da564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2da568: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2da568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2da56c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2da56cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2da570: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2da570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2da574: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2da574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2da578: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2da578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2da57c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2da57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2da580: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2da580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2da584: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2da584u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2da588: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2da588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2da58c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2da590: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DA590u;
    SET_GPR_U32(ctx, 31, 0x2DA598u);
    ctx->pc = 0x2DA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA590u;
    // 0x2da594: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DA590u, 0x2DA598u)) {
        return;
    }
    ctx->pc = 0x2DA598u;
label_2da598:
    // 0x2da598: 0x1611ffef  bne         $s0, $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DA598u;
    {
        const bool branch_taken_0x2da598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA598u;
        // 0x2da59c: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da598) {
            ctx->pc = 0x2DA558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da558;
        }
    }
    ctx->pc = 0x2DA5A0u;
label_2da5a0:
    // 0x2da5a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2da5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da5a4:
    // 0x2da5a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2da5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da5a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2da5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da5b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2da5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5B8u;
        // 0x2da5bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA5C0u;
}
