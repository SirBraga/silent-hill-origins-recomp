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

// Function: sub_0031E768
// Address: 0x31e768 - 0x31e958
void sub_0031E768_0x31e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E768_0x31e768");
#endif

    switch (ctx->pc) {
        case 0x31e7c0u: goto label_31e7c0;
        case 0x31e7ccu: goto label_31e7cc;
        case 0x31e82cu: goto label_31e82c;
        case 0x31e838u: goto label_31e838;
        case 0x31e884u: goto label_31e884;
        case 0x31e8b0u: goto label_31e8b0;
        case 0x31e8bcu: goto label_31e8bc;
        default: break;
    }

    ctx->pc = 0x31e768u;

    // 0x31e768: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31e76c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e770: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31e774: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31e778: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31e77c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31e780: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31e784: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31e784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e788: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x31e788u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e78c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x31e78cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x31e790: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x31e790u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31e794: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x31e794u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x31e798: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x31e798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x31e79c: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x31e79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x31e7a0: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x31e7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x31e7a4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x31E7A4u;
    {
        const bool branch_taken_0x31e7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7A4u;
        // 0x31e7a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7a4) {
            ctx->pc = 0x31E864u;
            goto label_31e864;
        }
    }
    ctx->pc = 0x31E7ACu;
    // 0x31e7ac: 0x6210016  bgez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31E7ACu;
    {
        const bool branch_taken_0x31e7ac = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x31E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7ACu;
        // 0x31e7b0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7ac) {
            ctx->pc = 0x31E808u;
            goto label_31e808;
        }
    }
    ctx->pc = 0x31E7B4u;
    // 0x31e7b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31e7b8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31E7B8u;
    SET_GPR_U32(ctx, 31, 0x31E7C0u);
    ctx->pc = 0x31E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7B8u;
    // 0x31e7bc: 0xdc4522a8  ld          $a1, 0x22A8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31E7B8u, 0x31E7C0u)) {
        return;
    }
    ctx->pc = 0x31E7C0u;
label_31e7c0:
    // 0x31e7c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7c4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31E7C4u;
    SET_GPR_U32(ctx, 31, 0x31E7CCu);
    ctx->pc = 0x31E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7C4u;
    // 0x31e7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31E7C4u, 0x31E7CCu)) {
        return;
    }
    ctx->pc = 0x31E7CCu;
label_31e7cc:
    // 0x31e7cc: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x31E7CCu;
    {
        const bool branch_taken_0x31e7cc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31e7cc) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E7D4u;
    // 0x31e7d4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E7D4u;
    {
        const bool branch_taken_0x31e7d4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x31E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7D4u;
        // 0x31e7d8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7d4) {
            ctx->pc = 0x31E7E8u;
            goto label_31e7e8;
        }
    }
    ctx->pc = 0x31E7DCu;
    // 0x31e7dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31e7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7e0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x31E7E0u;
    {
        const bool branch_taken_0x31e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7E0u;
        // 0x31e7e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7e0) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E7E8u;
label_31e7e8:
    // 0x31e7e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e7ec: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x31e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31e7f0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x31e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x31e7f4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x31E7F4u;
    {
        const bool branch_taken_0x31e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7f4) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E7FCu;
    // 0x31e7fc: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x31e7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x31e800: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x31E800u;
    {
        const bool branch_taken_0x31e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E800u;
        // 0x31e804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e800) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E808u;
label_31e808:
    // 0x31e808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e80c: 0x222a007  srav        $s4, $v0, $s1
    ctx->pc = 0x31e80cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x31e810: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x31e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x31e814: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x31e814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x31e818: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x31E818u;
    {
        const bool branch_taken_0x31e818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E818u;
        // 0x31e81c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e818) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E820u;
    // 0x31e820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31e824: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31E824u;
    SET_GPR_U32(ctx, 31, 0x31E82Cu);
    ctx->pc = 0x31E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E824u;
    // 0x31e828: 0xdc4522a8  ld          $a1, 0x22A8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31E824u, 0x31E82Cu)) {
        return;
    }
    ctx->pc = 0x31E82Cu;
label_31e82c:
    // 0x31e82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e830: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31E830u;
    SET_GPR_U32(ctx, 31, 0x31E838u);
    ctx->pc = 0x31E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E830u;
    // 0x31e834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31E830u, 0x31E838u)) {
        return;
    }
    ctx->pc = 0x31E838u;
label_31e838:
    // 0x31e838: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31E838u;
    {
        const bool branch_taken_0x31e838 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31e838) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E840u;
    // 0x31e840: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E840u;
    {
        const bool branch_taken_0x31e840 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E840u;
        // 0x31e844: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e840) {
            ctx->pc = 0x31E858u;
            goto label_31e858;
        }
    }
    ctx->pc = 0x31E848u;
    // 0x31e848: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x31e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x31e84c: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x31e84cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x31e850: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31e850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31e854: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x31e854u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_31e858:
    // 0x31e858: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31e858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e85c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31E85Cu;
    {
        const bool branch_taken_0x31e85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E85Cu;
        // 0x31e860: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e85c) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E864u;
label_31e864:
    // 0x31e864: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x31e864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x31e868: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E868u;
    {
        const bool branch_taken_0x31e868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E868u;
        // 0x31e86c: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e868) {
            ctx->pc = 0x31E88Cu;
            goto label_31e88c;
        }
    }
    ctx->pc = 0x31E870u;
    // 0x31e870: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x31e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x31e874: 0x1622002f  bne         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x31E874u;
    {
        const bool branch_taken_0x31e874 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E874u;
        // 0x31e878: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e874) {
            ctx->pc = 0x31E934u;
            goto label_31e934;
        }
    }
    ctx->pc = 0x31E87Cu;
    // 0x31e87c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31E87Cu;
    SET_GPR_U32(ctx, 31, 0x31E884u);
    ctx->pc = 0x31E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E87Cu;
    // 0x31e880: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31E87Cu, 0x31E884u)) {
        return;
    }
    ctx->pc = 0x31E884u;
label_31e884:
    // 0x31e884: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x31E884u;
    {
        const bool branch_taken_0x31e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E884u;
        // 0x31e888: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e884) {
            ctx->pc = 0x31E938u;
            goto label_31e938;
        }
    }
    ctx->pc = 0x31E88Cu;
label_31e88c:
    // 0x31e88c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e894: 0x82a006  srlv        $s4, $v0, $a0
    ctx->pc = 0x31e894u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x31e898: 0x2541824  and         $v1, $s2, $s4
    ctx->pc = 0x31e898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x31e89c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x31E89Cu;
    {
        const bool branch_taken_0x31e89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E89Cu;
        // 0x31e8a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e89c) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E8A4u;
    // 0x31e8a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31e8a8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31E8A8u;
    SET_GPR_U32(ctx, 31, 0x31E8B0u);
    ctx->pc = 0x31E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8A8u;
    // 0x31e8ac: 0xdc4522a8  ld          $a1, 0x22A8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31E8A8u, 0x31E8B0u)) {
        return;
    }
    ctx->pc = 0x31E8B0u;
label_31e8b0:
    // 0x31e8b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8b4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31E8B4u;
    SET_GPR_U32(ctx, 31, 0x31E8BCu);
    ctx->pc = 0x31E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8B4u;
    // 0x31e8b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31E8B4u, 0x31E8BCu)) {
        return;
    }
    ctx->pc = 0x31E8BCu;
label_31e8bc:
    // 0x31e8bc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31E8BCu;
    {
        const bool branch_taken_0x31e8bc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31e8bc) {
            ctx->pc = 0x31E904u;
            goto label_31e904;
        }
    }
    ctx->pc = 0x31E8C4u;
    // 0x31e8c4: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x31E8C4u;
    {
        const bool branch_taken_0x31e8c4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8C4u;
        // 0x31e8c8: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8c4) {
            ctx->pc = 0x31E900u;
            goto label_31e900;
        }
    }
    ctx->pc = 0x31E8CCu;
    // 0x31e8cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31e8d0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E8D0u;
    {
        const bool branch_taken_0x31e8d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8D0u;
        // 0x31e8d4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8d0) {
            ctx->pc = 0x31E8E0u;
            goto label_31e8e0;
        }
    }
    ctx->pc = 0x31E8D8u;
    // 0x31e8d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31E8D8u;
    {
        const bool branch_taken_0x31e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8D8u;
        // 0x31e8dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8d8) {
            ctx->pc = 0x31E8FCu;
            goto label_31e8fc;
        }
    }
    ctx->pc = 0x31E8E0u;
label_31e8e0:
    // 0x31e8e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e8e4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x31e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31e8e8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x31e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x31e8ec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x31e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x31e8f0: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x31e8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x31e8f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31e8f8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x31e8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31e8fc:
    // 0x31e8fc: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x31e8fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_31e900:
    // 0x31e900: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x31e900u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_31e904:
    // 0x31e904: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e908: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31e908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31e90c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x31e90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31e910: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x31e910u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x31e914: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x31e914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x31e918: 0x2649825  or          $s3, $s3, $a0
    ctx->pc = 0x31e918u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x31e91c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e920: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31e920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31e924: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31e924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31e928: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x31e928u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x31e92c: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x31e92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_31e930:
    // 0x31e930: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31e930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e934:
    // 0x31e934: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31e934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e938:
    // 0x31e938: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31e938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e93c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31e93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e940: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31e940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e944: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31e944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E94Cu;
        // 0x31e950: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E954u;
    // 0x31e954: 0x0  nop
    ctx->pc = 0x31e954u;
    // NOP
    ctx->pc = 0x31e958u;
}
