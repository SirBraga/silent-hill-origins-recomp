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

// Function: sub_002ED4C0
// Address: 0x2ed4c0 - 0x2ed730
void sub_002ED4C0_0x2ed4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED4C0_0x2ed4c0");
#endif

    switch (ctx->pc) {
        case 0x2ed5b8u: goto label_2ed5b8;
        case 0x2ed5c0u: goto label_2ed5c0;
        case 0x2ed5f0u: goto label_2ed5f0;
        case 0x2ed614u: goto label_2ed614;
        case 0x2ed640u: goto label_2ed640;
        case 0x2ed660u: goto label_2ed660;
        case 0x2ed6c4u: goto label_2ed6c4;
        default: break;
    }

    ctx->pc = 0x2ed4c0u;

    // 0x2ed4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ed4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ed4c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ed4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ed4c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ed4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ed4cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ed4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ed4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ed4d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ed4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ed4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ed4dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ed4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed4e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ed4e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4e8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2ed4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2ed4ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ed4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ed4f0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2ED4F0u;
    {
        const bool branch_taken_0x2ed4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4F0u;
        // 0x2ed4f4: 0x2668002c  addiu       $t0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4f0) {
            ctx->pc = 0x2ED5F8u;
            goto label_2ed5f8;
        }
    }
    ctx->pc = 0x2ED4F8u;
    // 0x2ed4f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4fc: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x2ed4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED500u;
    {
        const bool branch_taken_0x2ed500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED500u;
        // 0x2ed504: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed500) {
            ctx->pc = 0x2ED518u;
            goto label_2ed518;
        }
    }
    ctx->pc = 0x2ED508u;
    // 0x2ed508: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED508u;
    {
        const bool branch_taken_0x2ed508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED508u;
        // 0x2ed50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed508) {
            ctx->pc = 0x2ED51Cu;
            goto label_2ed51c;
        }
    }
    ctx->pc = 0x2ED510u;
    // 0x2ed510: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2ed510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2ed514: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2ed514u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ed518:
    // 0x2ed518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed51c:
    // 0x2ed51c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2ed51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ed520: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED520u;
    {
        const bool branch_taken_0x2ed520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed520) {
            ctx->pc = 0x2ED524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED520u;
            // 0x2ed524: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED544u;
            goto label_2ed544;
        }
    }
    ctx->pc = 0x2ED528u;
    // 0x2ed528: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED528u;
    {
        const bool branch_taken_0x2ed528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED528u;
        // 0x2ed52c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed528) {
            ctx->pc = 0x2ED540u;
            goto label_2ed540;
        }
    }
    ctx->pc = 0x2ED530u;
    // 0x2ed530: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ed530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ed534: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2ed534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ed538: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ed538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed53c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ed53cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ed540:
    // 0x2ed540: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2ed540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2ed544:
    // 0x2ed544: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x2ed544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x2ed548: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x2ed548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ed54c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED54Cu;
    {
        const bool branch_taken_0x2ed54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED54Cu;
        // 0x2ed550: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed54c) {
            ctx->pc = 0x2ED56Cu;
            goto label_2ed56c;
        }
    }
    ctx->pc = 0x2ED554u;
    // 0x2ed554: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED554u;
    {
        const bool branch_taken_0x2ed554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED554u;
        // 0x2ed558: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed554) {
            ctx->pc = 0x2ED56Cu;
            goto label_2ed56c;
        }
    }
    ctx->pc = 0x2ED55Cu;
    // 0x2ed55c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed560: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2ed560u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ed564: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ed564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed568: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ed568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ed56c:
    // 0x2ed56c: 0x50c0000f  beql        $a2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED56Cu;
    {
        const bool branch_taken_0x2ed56c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed56c) {
            ctx->pc = 0x2ED570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED56Cu;
            // 0x2ed570: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED5ACu;
            goto label_2ed5ac;
        }
    }
    ctx->pc = 0x2ED574u;
    // 0x2ed574: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2ed574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2ed578: 0x2444ffe1  addiu       $a0, $v0, -0x1F
    ctx->pc = 0x2ed578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x2ed57c: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x2ed57cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ed580: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED580u;
    {
        const bool branch_taken_0x2ed580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed580) {
            ctx->pc = 0x2ED584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED580u;
            // 0x2ed584: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED5ACu;
            goto label_2ed5ac;
        }
    }
    ctx->pc = 0x2ED588u;
    // 0x2ed588: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2ed588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ed58c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED58Cu;
    {
        const bool branch_taken_0x2ed58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed58c) {
            ctx->pc = 0x2ED590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED58Cu;
            // 0x2ed590: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED5ACu;
            goto label_2ed5ac;
        }
    }
    ctx->pc = 0x2ED594u;
    // 0x2ed594: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x2ed594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ed598: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed59c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ed5a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ed5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed5a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ed5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed5a8: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x2ed5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2ed5ac:
    // 0x2ed5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5b0: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2ED5B0u;
    SET_GPR_U32(ctx, 31, 0x2ED5B8u);
    ctx->pc = 0x2ED5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED5B0u;
    // 0x2ed5b4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2ED5B0u, 0x2ED5B8u)) {
        return;
    }
    ctx->pc = 0x2ED5B8u;
label_2ed5b8:
    // 0x2ed5b8: 0xc0bb682  jal         func_2EDA08
    ctx->pc = 0x2ED5B8u;
    SET_GPR_U32(ctx, 31, 0x2ED5C0u);
    ctx->pc = 0x2ED5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED5B8u;
    // 0x2ed5bc: 0x8e64004c  lw          $a0, 0x4C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDA08u, 0x2ED5B8u, 0x2ED5C0u)) {
        return;
    }
    ctx->pc = 0x2ED5C0u;
label_2ed5c0:
    // 0x2ed5c0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2ed5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2ed5c4: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x2ed5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x2ed5c8: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x2ed5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x2ed5cc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2ed5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ed5d0: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x2ed5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2ed5d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ed5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5d8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed5dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ed5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ed5e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ed5e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5e8: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2ED5E8u;
    SET_GPR_U32(ctx, 31, 0x2ED5F0u);
    ctx->pc = 0x2ED5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED5E8u;
    // 0x2ed5ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2ED5E8u, 0x2ED5F0u)) {
        return;
    }
    ctx->pc = 0x2ED5F0u;
label_2ed5f0:
    // 0x2ed5f0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2ED5F0u;
    {
        const bool branch_taken_0x2ed5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5F0u;
        // 0x2ed5f4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5f0) {
            ctx->pc = 0x2ED714u;
            goto label_2ed714;
        }
    }
    ctx->pc = 0x2ED5F8u;
label_2ed5f8:
    // 0x2ed5f8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2ed5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ed5fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED5FCu;
    {
        const bool branch_taken_0x2ed5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5FCu;
        // 0x2ed600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5fc) {
            ctx->pc = 0x2ED61Cu;
            goto label_2ed61c;
        }
    }
    ctx->pc = 0x2ED604u;
    // 0x2ed604: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x2ed604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2ed608: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ed608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed60c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2ED60Cu;
    SET_GPR_U32(ctx, 31, 0x2ED614u);
    ctx->pc = 0x2ED610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED60Cu;
    // 0x2ed610: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2ED60Cu, 0x2ED614u)) {
        return;
    }
    ctx->pc = 0x2ED614u;
label_2ed614:
    // 0x2ed614: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2ED614u;
    {
        const bool branch_taken_0x2ed614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED614u;
        // 0x2ed618: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed614) {
            ctx->pc = 0x2ED714u;
            goto label_2ed714;
        }
    }
    ctx->pc = 0x2ED61Cu;
label_2ed61c:
    // 0x2ed61c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2ed61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ed620: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2ED620u;
    {
        const bool branch_taken_0x2ed620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED620u;
        // 0x2ed624: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed620) {
            ctx->pc = 0x2ED708u;
            goto label_2ed708;
        }
    }
    ctx->pc = 0x2ED628u;
    // 0x2ed628: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2ed628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2ed62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed630: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ed630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed634: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2ED634u;
    {
        const bool branch_taken_0x2ed634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED634u;
        // 0x2ed638: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed634) {
            ctx->pc = 0x2ED710u;
            goto label_2ed710;
        }
    }
    ctx->pc = 0x2ED63Cu;
    // 0x2ed63c: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2ed63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ed640:
    // 0x2ed640: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2ed640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed644: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2ed644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2ed648: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ED648u;
    {
        const bool branch_taken_0x2ed648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED648u;
        // 0x2ed64c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed648) {
            ctx->pc = 0x2ED6B4u;
            goto label_2ed6b4;
        }
    }
    ctx->pc = 0x2ED650u;
    // 0x2ed650: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x2ed650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2ed654: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x2ed654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x2ed658: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ed658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed65c: 0x25220200  addiu       $v0, $t1, 0x200
    ctx->pc = 0x2ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
label_2ed660:
    // 0x2ed660: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x2ed660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ed664: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x2ed664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ed668: 0x68e9000f  ldl         $t1, 0xF($a3)
    ctx->pc = 0x2ed668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ed66c: 0x6ce90008  ldr         $t1, 0x8($a3)
    ctx->pc = 0x2ed66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ed670: 0x68ea0017  ldl         $t2, 0x17($a3)
    ctx->pc = 0x2ed670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2ed674: 0x6cea0010  ldr         $t2, 0x10($a3)
    ctx->pc = 0x2ed674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2ed678: 0x68eb001f  ldl         $t3, 0x1F($a3)
    ctx->pc = 0x2ed678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2ed67c: 0x6ceb0018  ldr         $t3, 0x18($a3)
    ctx->pc = 0x2ed67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2ed680: 0xb1050007  sdl         $a1, 0x7($t0)
    ctx->pc = 0x2ed680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed684: 0xb5050000  sdr         $a1, 0x0($t0)
    ctx->pc = 0x2ed684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed688: 0xb109000f  sdl         $t1, 0xF($t0)
    ctx->pc = 0x2ed688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed68c: 0xb5090008  sdr         $t1, 0x8($t0)
    ctx->pc = 0x2ed68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed690: 0xb10a0017  sdl         $t2, 0x17($t0)
    ctx->pc = 0x2ed690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed694: 0xb50a0010  sdr         $t2, 0x10($t0)
    ctx->pc = 0x2ed694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed698: 0xb10b001f  sdl         $t3, 0x1F($t0)
    ctx->pc = 0x2ed698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed69c: 0xb50b0018  sdr         $t3, 0x18($t0)
    ctx->pc = 0x2ed69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed6a0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2ed6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2ed6a4: 0x14e6ffee  bne         $a3, $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2ED6A4u;
    {
        const bool branch_taken_0x2ed6a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2ED6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6A4u;
        // 0x2ed6a8: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6a4) {
            ctx->pc = 0x2ED660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed660;
        }
    }
    ctx->pc = 0x2ED6ACu;
    // 0x2ed6ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2ED6ACu;
    {
        const bool branch_taken_0x2ed6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6ACu;
        // 0x2ed6b0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6ac) {
            ctx->pc = 0x2ED6F4u;
            goto label_2ed6f4;
        }
    }
    ctx->pc = 0x2ED6B4u;
label_2ed6b4:
    // 0x2ed6b4: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x2ed6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2ed6b8: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x2ed6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x2ed6bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ed6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed6c0: 0x25220200  addiu       $v0, $t1, 0x200
    ctx->pc = 0x2ed6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
label_2ed6c4:
    // 0x2ed6c4: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x2ed6c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ed6c8: 0xdce90008  ld          $t1, 0x8($a3)
    ctx->pc = 0x2ed6c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ed6cc: 0xdcea0010  ld          $t2, 0x10($a3)
    ctx->pc = 0x2ed6ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ed6d0: 0xdceb0018  ld          $t3, 0x18($a3)
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2ed6d4: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x2ed6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
    // 0x2ed6d8: 0xfd090008  sd          $t1, 0x8($t0)
    ctx->pc = 0x2ed6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 9));
    // 0x2ed6dc: 0xfd0a0010  sd          $t2, 0x10($t0)
    ctx->pc = 0x2ed6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 10));
    // 0x2ed6e0: 0xfd0b0018  sd          $t3, 0x18($t0)
    ctx->pc = 0x2ed6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 11));
    // 0x2ed6e4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2ed6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2ed6e8: 0x14e6fff6  bne         $a3, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2ED6E8u;
    {
        const bool branch_taken_0x2ed6e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2ED6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6E8u;
        // 0x2ed6ec: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6e8) {
            ctx->pc = 0x2ED6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed6c4;
        }
    }
    ctx->pc = 0x2ED6F0u;
    // 0x2ed6f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ed6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6f4:
    // 0x2ed6f4: 0x132102b  sltu        $v0, $t1, $s2
    ctx->pc = 0x2ed6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ed6f8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2ED6F8u;
    {
        const bool branch_taken_0x2ed6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6F8u;
        // 0x2ed6fc: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6f8) {
            ctx->pc = 0x2ED640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed640;
        }
    }
    ctx->pc = 0x2ED700u;
    // 0x2ed700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED700u;
    {
        const bool branch_taken_0x2ed700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED700u;
        // 0x2ed704: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed700) {
            ctx->pc = 0x2ED714u;
            goto label_2ed714;
        }
    }
    ctx->pc = 0x2ED708u;
label_2ed708:
    // 0x2ed708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED708u;
    {
        const bool branch_taken_0x2ed708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED708u;
        // 0x2ed70c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed708) {
            ctx->pc = 0x2ED714u;
            goto label_2ed714;
        }
    }
    ctx->pc = 0x2ED710u;
label_2ed710:
    // 0x2ed710: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ed710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ed714:
    // 0x2ed714: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ed714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed718: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ed718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed71c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed720: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ed720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed728: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED728u;
        // 0x2ed72c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED730u;
}
