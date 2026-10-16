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

// Function: sub_0031D808
// Address: 0x31d808 - 0x31db00
void sub_0031D808_0x31d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D808_0x31d808");
#endif

    switch (ctx->pc) {
        case 0x31d82cu: goto label_31d82c;
        case 0x31d8c4u: goto label_31d8c4;
        case 0x31d8ccu: goto label_31d8cc;
        case 0x31dab0u: goto label_31dab0;
        case 0x31dae8u: goto label_31dae8;
        default: break;
    }

    ctx->pc = 0x31d808u;

    // 0x31d808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31d80c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31d810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31d814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d81c: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x31D81Cu;
    {
        const bool branch_taken_0x31d81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D81Cu;
        // 0x31d820: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d81c) {
            ctx->pc = 0x31DAE8u;
            goto label_31dae8;
        }
    }
    ctx->pc = 0x31D824u;
    // 0x31d824: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x31D824u;
    SET_GPR_U32(ctx, 31, 0x31D82Cu);
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x31D824u, 0x31D82Cu)) {
        return;
    }
    ctx->pc = 0x31D82Cu;
label_31d82c:
    // 0x31d82c: 0x260afff8  addiu       $t2, $s0, -0x8
    ctx->pc = 0x31d82cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x31d830: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31d834: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x31d834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x31d838: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x31d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x31d83c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x31d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x31d840: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d844: 0xc24824  and         $t1, $a2, $v0
    ctx->pc = 0x31d844u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31d848: 0x24ab70c8  addiu       $t3, $a1, 0x70C8
    ctx->pc = 0x31d848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 28872));
    // 0x31d84c: 0x1493821  addu        $a3, $t2, $t1
    ctx->pc = 0x31d84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x31d850: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31d850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31d854: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x31d854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x31d858: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x31d858u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d85c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x31d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x31d860: 0x14e2001c  bne         $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31D860u;
    {
        const bool branch_taken_0x31d860 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x31D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D860u;
        // 0x31d864: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d860) {
            ctx->pc = 0x31D8D4u;
            goto label_31d8d4;
        }
    }
    ctx->pc = 0x31D868u;
    // 0x31d868: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x31d868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x31d86c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D86Cu;
    {
        const bool branch_taken_0x31d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D86Cu;
        // 0x31d870: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d86c) {
            ctx->pc = 0x31D890u;
            goto label_31d890;
        }
    }
    ctx->pc = 0x31D874u;
    // 0x31d874: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x31d874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x31d878: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x31d878u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x31d87c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x31d87cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x31d880: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x31d880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x31d884: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x31d884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x31d888: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d88c: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x31d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_31d890:
    // 0x31d890: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x31d890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x31d894: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31d894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31d898: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x31d898u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x31d89c: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x31d89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x31d8a0: 0xad6a0008  sw          $t2, 0x8($t3)
    ctx->pc = 0x31d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
    // 0x31d8a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31d8a8: 0xdc8374d0  ld          $v1, 0x74D0($a0)
    ctx->pc = 0x31d8a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 29904)));
    // 0x31d8ac: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31d8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31d8b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D8B0u;
    {
        const bool branch_taken_0x31d8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8B0u;
        // 0x31d8b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8b0) {
            ctx->pc = 0x31D8C4u;
            goto label_31d8c4;
        }
    }
    ctx->pc = 0x31D8B8u;
    // 0x31d8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d8bc: 0xc0c76c0  jal         func_31DB00
    ctx->pc = 0x31D8BCu;
    SET_GPR_U32(ctx, 31, 0x31D8C4u);
    ctx->pc = 0x31D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8BCu;
    // 0x31d8c0: 0x8c4574d8  lw          $a1, 0x74D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31DB00u, 0x31D8BCu, 0x31D8C4u)) {
        return;
    }
    ctx->pc = 0x31D8C4u;
label_31d8c4:
    // 0x31d8c4: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31D8C4u;
    SET_GPR_U32(ctx, 31, 0x31D8CCu);
    ctx->pc = 0x31D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8C4u;
    // 0x31d8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31D8C4u, 0x31D8CCu)) {
        return;
    }
    ctx->pc = 0x31D8CCu;
label_31d8cc:
    // 0x31d8cc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x31D8CCu;
    {
        const bool branch_taken_0x31d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8CCu;
        // 0x31d8d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8cc) {
            ctx->pc = 0x31DAECu;
            goto label_31daec;
        }
    }
    ctx->pc = 0x31D8D4u;
label_31d8d4:
    // 0x31d8d4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x31d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x31d8d8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x31d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x31d8dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31D8DCu;
    {
        const bool branch_taken_0x31d8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8DCu;
        // 0x31d8e0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8dc) {
            ctx->pc = 0x31D914u;
            goto label_31d914;
        }
    }
    ctx->pc = 0x31D8E4u;
    // 0x31d8e4: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x31d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x31d8e8: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x31d8ec: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x31d8ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x31d8f0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x31d8f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D8F4u;
    {
        const bool branch_taken_0x31d8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8F4u;
        // 0x31d8f8: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8f4) {
            ctx->pc = 0x31D904u;
            goto label_31d904;
        }
    }
    ctx->pc = 0x31D8FCu;
    // 0x31d8fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31D8FCu;
    {
        const bool branch_taken_0x31d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8FCu;
        // 0x31d900: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8fc) {
            ctx->pc = 0x31D914u;
            goto label_31d914;
        }
    }
    ctx->pc = 0x31D904u;
label_31d904:
    // 0x31d904: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x31d904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x31d908: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x31d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d90c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d910: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x31d910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_31d914:
    // 0x31d914: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x31d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x31d918: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31d91c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31d920: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31D920u;
    {
        const bool branch_taken_0x31d920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D920u;
        // 0x31d924: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d920) {
            ctx->pc = 0x31D970u;
            goto label_31d970;
        }
    }
    ctx->pc = 0x31D928u;
    // 0x31d928: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x31d928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x31d92c: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x31D92Cu;
    {
        const bool branch_taken_0x31d92c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D92Cu;
        // 0x31d930: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d92c) {
            ctx->pc = 0x31D95Cu;
            goto label_31d95c;
        }
    }
    ctx->pc = 0x31D934u;
    // 0x31d934: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31d938: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x31d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x31d93c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D93Cu;
    {
        const bool branch_taken_0x31d93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31d93c) {
            ctx->pc = 0x31D940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D93Cu;
            // 0x31d940: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D960u;
            goto label_31d960;
        }
    }
    ctx->pc = 0x31D944u;
    // 0x31d944: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x31d944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x31d948: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x31d948u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d94c: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x31d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x31d950: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x31d950u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x31d954: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31D954u;
    {
        const bool branch_taken_0x31d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D954u;
        // 0x31d958: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d954) {
            ctx->pc = 0x31D96Cu;
            goto label_31d96c;
        }
    }
    ctx->pc = 0x31D95Cu;
label_31d95c:
    // 0x31d95c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x31d95cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_31d960:
    // 0x31d960: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x31d960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d964: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x31d964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x31d968: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x31d968u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_31d96c:
    // 0x31d96c: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x31d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_31d970:
    // 0x31d970: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x31d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x31d974: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x31d974u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x31d978: 0x15800059  bnez        $t4, . + 4 + (0x59 << 2)
    ctx->pc = 0x31D978u;
    {
        const bool branch_taken_0x31d978 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D978u;
        // 0x31d97c: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d978) {
            ctx->pc = 0x31DAE0u;
            goto label_31dae0;
        }
    }
    ctx->pc = 0x31D980u;
    // 0x31d980: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x31d980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x31d984: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31D984u;
    {
        const bool branch_taken_0x31d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D984u;
        // 0x31d988: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d984) {
            ctx->pc = 0x31D9D0u;
            goto label_31d9d0;
        }
    }
    ctx->pc = 0x31D98Cu;
    // 0x31d98c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31d990: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31d990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31d994: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x31d998: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x31d998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
    // 0x31d99c: 0x25a570c8  addiu       $a1, $t5, 0x70C8
    ctx->pc = 0x31d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 28872));
    // 0x31d9a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x31d9a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x31d9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d9a8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x31d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31d9ac: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x31d9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x31d9b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d9b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31d9b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31d9b8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x31d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31d9bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31d9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31d9c0: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31d9c4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x31d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x31d9c8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x31D9C8u;
    {
        const bool branch_taken_0x31d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C8u;
        // 0x31d9cc: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9c8) {
            ctx->pc = 0x31DAD0u;
            goto label_31dad0;
        }
    }
    ctx->pc = 0x31D9D0u;
label_31d9d0:
    // 0x31d9d0: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x31d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x31d9d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D9D4u;
    {
        const bool branch_taken_0x31d9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9D4u;
        // 0x31d9d8: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9d4) {
            ctx->pc = 0x31D9E4u;
            goto label_31d9e4;
        }
    }
    ctx->pc = 0x31D9DCu;
    // 0x31d9dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31D9DCu;
    {
        const bool branch_taken_0x31d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9DCu;
        // 0x31d9e0: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9dc) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31D9E4u;
label_31d9e4:
    // 0x31d9e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D9E4u;
    {
        const bool branch_taken_0x31d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9E4u;
        // 0x31d9e8: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9e4) {
            ctx->pc = 0x31D9F4u;
            goto label_31d9f4;
        }
    }
    ctx->pc = 0x31D9ECu;
    // 0x31d9ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31D9ECu;
    {
        const bool branch_taken_0x31d9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9ECu;
        // 0x31d9f0: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9ec) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31D9F4u;
label_31d9f4:
    // 0x31d9f4: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x31d9f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x31d9f8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31D9F8u;
    {
        const bool branch_taken_0x31d9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F8u;
        // 0x31d9fc: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9f8) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31DA00u;
    // 0x31da00: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x31da00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x31da04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA04u;
    {
        const bool branch_taken_0x31da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA04u;
        // 0x31da08: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da04) {
            ctx->pc = 0x31DA14u;
            goto label_31da14;
        }
    }
    ctx->pc = 0x31DA0Cu;
    // 0x31da0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31DA0Cu;
    {
        const bool branch_taken_0x31da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA0Cu;
        // 0x31da10: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da0c) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31DA14u;
label_31da14:
    // 0x31da14: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x31da14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x31da18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA18u;
    {
        const bool branch_taken_0x31da18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA18u;
        // 0x31da1c: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da18) {
            ctx->pc = 0x31DA28u;
            goto label_31da28;
        }
    }
    ctx->pc = 0x31DA20u;
    // 0x31da20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31DA20u;
    {
        const bool branch_taken_0x31da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA20u;
        // 0x31da24: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da20) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31DA28u;
label_31da28:
    // 0x31da28: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x31da28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x31da2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA2Cu;
    {
        const bool branch_taken_0x31da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA2Cu;
        // 0x31da30: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da2c) {
            ctx->pc = 0x31DA3Cu;
            goto label_31da3c;
        }
    }
    ctx->pc = 0x31DA34u;
    // 0x31da34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31DA34u;
    {
        const bool branch_taken_0x31da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA34u;
        // 0x31da38: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da34) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31DA3Cu;
label_31da3c:
    // 0x31da3c: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x31da3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_31da40:
    // 0x31da40: 0x25ab70c8  addiu       $t3, $t5, 0x70C8
    ctx->pc = 0x31da40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 28872));
    // 0x31da44: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x31da44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31da48: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x31da48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x31da4c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x31da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31da50: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x31DA50u;
    {
        const bool branch_taken_0x31da50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x31da50) {
            ctx->pc = 0x31DA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DA50u;
            // 0x31da54: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DA8Cu;
            goto label_31da8c;
        }
    }
    ctx->pc = 0x31DA58u;
    // 0x31da58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31da5c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x31da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x31da60: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31da60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31da64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31da68: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x31da68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
    // 0x31da6c: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x31da6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x31da70: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x31da70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x31da74: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x31da74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x31da78: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31da78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31da7c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x31da7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31da80: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x31da80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31da84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31DA84u;
    {
        const bool branch_taken_0x31da84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA84u;
        // 0x31da88: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da84) {
            ctx->pc = 0x31DAD0u;
            goto label_31dad0;
        }
    }
    ctx->pc = 0x31DA8Cu;
label_31da8c:
    // 0x31da8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31da90: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31da94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31da94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31da98: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x31da98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31da9c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x31DA9Cu;
    {
        const bool branch_taken_0x31da9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da9c) {
            ctx->pc = 0x31DAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DA9Cu;
            // 0x31daa0: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DAD0u;
            goto label_31dad0;
        }
    }
    ctx->pc = 0x31DAA4u;
    // 0x31daa4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31daa8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31daa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31daac: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x31daacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_31dab0:
    // 0x31dab0: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DAB0u;
    {
        const bool branch_taken_0x31dab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x31dab0) {
            ctx->pc = 0x31DAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DAB0u;
            // 0x31dab4: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DAD0u;
            goto label_31dad0;
        }
    }
    ctx->pc = 0x31DAB8u;
    // 0x31dab8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x31dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31dabc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31dac0: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x31dac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31dac4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31DAC4u;
    {
        const bool branch_taken_0x31dac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dac4) {
            ctx->pc = 0x31DAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DAC4u;
            // 0x31dac8: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dab0;
        }
    }
    ctx->pc = 0x31DACCu;
    // 0x31dacc: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x31daccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_31dad0:
    // 0x31dad0: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x31dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x31dad4: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x31dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x31dad8: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x31dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x31dadc: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x31dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
label_31dae0:
    // 0x31dae0: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31DAE0u;
    SET_GPR_U32(ctx, 31, 0x31DAE8u);
    ctx->pc = 0x31DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DAE0u;
    // 0x31dae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31DAE0u, 0x31DAE8u)) {
        return;
    }
    ctx->pc = 0x31DAE8u;
label_31dae8:
    // 0x31dae8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31dae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31daec:
    // 0x31daec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31daecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31daf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x31DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAF4u;
        // 0x31daf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DAFCu;
    // 0x31dafc: 0x0  nop
    ctx->pc = 0x31dafcu;
    // NOP
    ctx->pc = 0x31db00u;
}
