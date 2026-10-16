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

// Function: sub_001CA198
// Address: 0x1ca198 - 0x1ca2d8
void sub_001CA198_0x1ca198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA198_0x1ca198");
#endif

    switch (ctx->pc) {
        case 0x1ca198u: goto label_1ca198;
        case 0x1ca19cu: goto label_1ca19c;
        case 0x1ca1a0u: goto label_1ca1a0;
        case 0x1ca1a4u: goto label_1ca1a4;
        case 0x1ca1a8u: goto label_1ca1a8;
        case 0x1ca1acu: goto label_1ca1ac;
        case 0x1ca1b0u: goto label_1ca1b0;
        case 0x1ca1b4u: goto label_1ca1b4;
        case 0x1ca1b8u: goto label_1ca1b8;
        case 0x1ca1bcu: goto label_1ca1bc;
        case 0x1ca1c0u: goto label_1ca1c0;
        case 0x1ca1c4u: goto label_1ca1c4;
        case 0x1ca1c8u: goto label_1ca1c8;
        case 0x1ca1ccu: goto label_1ca1cc;
        case 0x1ca1d0u: goto label_1ca1d0;
        case 0x1ca1d4u: goto label_1ca1d4;
        case 0x1ca1d8u: goto label_1ca1d8;
        case 0x1ca1dcu: goto label_1ca1dc;
        case 0x1ca1e0u: goto label_1ca1e0;
        case 0x1ca1e4u: goto label_1ca1e4;
        case 0x1ca1e8u: goto label_1ca1e8;
        case 0x1ca1ecu: goto label_1ca1ec;
        case 0x1ca1f0u: goto label_1ca1f0;
        case 0x1ca1f4u: goto label_1ca1f4;
        case 0x1ca1f8u: goto label_1ca1f8;
        case 0x1ca1fcu: goto label_1ca1fc;
        case 0x1ca200u: goto label_1ca200;
        case 0x1ca204u: goto label_1ca204;
        case 0x1ca208u: goto label_1ca208;
        case 0x1ca20cu: goto label_1ca20c;
        case 0x1ca210u: goto label_1ca210;
        case 0x1ca214u: goto label_1ca214;
        case 0x1ca218u: goto label_1ca218;
        case 0x1ca21cu: goto label_1ca21c;
        case 0x1ca220u: goto label_1ca220;
        case 0x1ca224u: goto label_1ca224;
        case 0x1ca228u: goto label_1ca228;
        case 0x1ca22cu: goto label_1ca22c;
        case 0x1ca230u: goto label_1ca230;
        case 0x1ca234u: goto label_1ca234;
        case 0x1ca238u: goto label_1ca238;
        case 0x1ca23cu: goto label_1ca23c;
        case 0x1ca240u: goto label_1ca240;
        case 0x1ca244u: goto label_1ca244;
        case 0x1ca248u: goto label_1ca248;
        case 0x1ca24cu: goto label_1ca24c;
        case 0x1ca250u: goto label_1ca250;
        case 0x1ca254u: goto label_1ca254;
        case 0x1ca258u: goto label_1ca258;
        case 0x1ca25cu: goto label_1ca25c;
        case 0x1ca260u: goto label_1ca260;
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca268u: goto label_1ca268;
        case 0x1ca26cu: goto label_1ca26c;
        case 0x1ca270u: goto label_1ca270;
        case 0x1ca274u: goto label_1ca274;
        case 0x1ca278u: goto label_1ca278;
        case 0x1ca27cu: goto label_1ca27c;
        case 0x1ca280u: goto label_1ca280;
        case 0x1ca284u: goto label_1ca284;
        case 0x1ca288u: goto label_1ca288;
        case 0x1ca28cu: goto label_1ca28c;
        case 0x1ca290u: goto label_1ca290;
        case 0x1ca294u: goto label_1ca294;
        case 0x1ca298u: goto label_1ca298;
        case 0x1ca29cu: goto label_1ca29c;
        case 0x1ca2a0u: goto label_1ca2a0;
        case 0x1ca2a4u: goto label_1ca2a4;
        case 0x1ca2a8u: goto label_1ca2a8;
        case 0x1ca2acu: goto label_1ca2ac;
        case 0x1ca2b0u: goto label_1ca2b0;
        case 0x1ca2b4u: goto label_1ca2b4;
        case 0x1ca2b8u: goto label_1ca2b8;
        case 0x1ca2bcu: goto label_1ca2bc;
        case 0x1ca2c0u: goto label_1ca2c0;
        case 0x1ca2c4u: goto label_1ca2c4;
        case 0x1ca2c8u: goto label_1ca2c8;
        case 0x1ca2ccu: goto label_1ca2cc;
        case 0x1ca2d0u: goto label_1ca2d0;
        case 0x1ca2d4u: goto label_1ca2d4;
        default: break;
    }

    ctx->pc = 0x1ca198u;

label_1ca198:
    // 0x1ca198: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ca198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ca19c:
    // 0x1ca19c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ca19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1ca1a0:
    // 0x1ca1a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ca1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ca1a4:
    // 0x1ca1a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ca1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca1a8:
    // 0x1ca1a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ca1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1ca1ac:
    // 0x1ca1ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ca1acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca1b0:
    // 0x1ca1b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ca1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ca1b4:
    // 0x1ca1b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ca1b8:
    // 0x1ca1b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ca1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1ca1bc:
    // 0x1ca1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca1c0:
    // 0x1ca1c0: 0x8e4202f8  lw          $v0, 0x2F8($s2)
    ctx->pc = 0x1ca1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
label_1ca1c4:
    // 0x1ca1c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_1ca1c8:
    if (ctx->pc == 0x1CA1C8u) {
        ctx->pc = 0x1CA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C4u;
        // 0x1ca1c8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA1CCu;
        goto label_1ca1cc;
    }
    ctx->pc = 0x1CA1C4u;
    {
        const bool branch_taken_0x1ca1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C4u;
        // 0x1ca1c8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1c4) {
            ctx->pc = 0x1CA288u;
            goto label_1ca288;
        }
    }
    ctx->pc = 0x1CA1CCu;
label_1ca1cc:
    // 0x1ca1cc: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x1ca1ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ca1d0:
    // 0x1ca1d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ca1d4:
    // 0x1ca1d4: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x1ca1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ca1d8:
    // 0x1ca1d8: 0x2466fa48  addiu       $a2, $v1, -0x5B8
    ctx->pc = 0x1ca1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965832));
label_1ca1dc:
    // 0x1ca1dc: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1ca1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ca1e0:
    // 0x1ca1e0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1ca1e4:
    // 0x1ca1e4: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x1ca1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
label_1ca1e8:
    // 0x1ca1e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ca1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ca1ec:
    // 0x1ca1ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ca1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca1f0:
    // 0x1ca1f0: 0x54640026  bnel        $v1, $a0, . + 4 + (0x26 << 2)
label_1ca1f4:
    if (ctx->pc == 0x1CA1F4u) {
        ctx->pc = 0x1CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1F0u;
        // 0x1ca1f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA1F8u;
        goto label_1ca1f8;
    }
    ctx->pc = 0x1CA1F0u;
    {
        const bool branch_taken_0x1ca1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca1f0) {
            ctx->pc = 0x1CA1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA1F0u;
            // 0x1ca1f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA28Cu;
            goto label_1ca28c;
        }
    }
    ctx->pc = 0x1CA1F8u;
label_1ca1f8:
    // 0x1ca1f8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1ca1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ca1fc:
    // 0x1ca1fc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ca1fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ca200:
    // 0x1ca200: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca204:
    // 0x1ca204: 0xc46c02e8  lwc1        $f12, 0x2E8($v1)
    ctx->pc = 0x1ca204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ca208:
    // 0x1ca208: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ca208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1ca20c:
    // 0x1ca20c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ca20cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca210:
    // 0x1ca210: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ca210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca214:
    // 0x1ca214: 0xc07e054  jal         func_1F8150
label_1ca218:
    if (ctx->pc == 0x1CA218u) {
        ctx->pc = 0x1CA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA214u;
        // 0x1ca218: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA21Cu;
        goto label_1ca21c;
    }
    ctx->pc = 0x1CA214u;
    SET_GPR_U32(ctx, 31, 0x1CA21Cu);
    ctx->pc = 0x1CA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA214u;
    // 0x1ca218: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x1CA214u, 0x1CA21Cu)) {
        return;
    }
    ctx->pc = 0x1CA21Cu;
label_1ca21c:
    // 0x1ca21c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca220:
    // 0x1ca220: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ca224:
    // 0x1ca224: 0xc07defc  jal         func_1F7BF0
label_1ca228:
    if (ctx->pc == 0x1CA228u) {
        ctx->pc = 0x1CA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA224u;
        // 0x1ca228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA22Cu;
        goto label_1ca22c;
    }
    ctx->pc = 0x1CA224u;
    SET_GPR_U32(ctx, 31, 0x1CA22Cu);
    ctx->pc = 0x1CA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA224u;
    // 0x1ca228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x1CA224u, 0x1CA22Cu)) {
        return;
    }
    ctx->pc = 0x1CA22Cu;
label_1ca22c:
    // 0x1ca22c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ca230:
    if (ctx->pc == 0x1CA230u) {
        ctx->pc = 0x1CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA22Cu;
        // 0x1ca230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA234u;
        goto label_1ca234;
    }
    ctx->pc = 0x1CA22Cu;
    {
        const bool branch_taken_0x1ca22c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA22Cu;
        // 0x1ca230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca22c) {
            ctx->pc = 0x1CA240u;
            goto label_1ca240;
        }
    }
    ctx->pc = 0x1CA234u;
label_1ca234:
    // 0x1ca234: 0xc07dd98  jal         func_1F7660
label_1ca238:
    if (ctx->pc == 0x1CA238u) {
        ctx->pc = 0x1CA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA234u;
        // 0x1ca238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA23Cu;
        goto label_1ca23c;
    }
    ctx->pc = 0x1CA234u;
    SET_GPR_U32(ctx, 31, 0x1CA23Cu);
    ctx->pc = 0x1CA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA234u;
    // 0x1ca238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x1CA234u, 0x1CA23Cu)) {
        return;
    }
    ctx->pc = 0x1CA23Cu;
label_1ca23c:
    // 0x1ca23c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca240:
    // 0x1ca240: 0x3405fc68  ori         $a1, $zero, 0xFC68
    ctx->pc = 0x1ca240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64616);
label_1ca244:
    // 0x1ca244: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1ca244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_1ca248:
    // 0x1ca248: 0x34a5db8b  ori         $a1, $a1, 0xDB8B
    ctx->pc = 0x1ca248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)56203);
label_1ca24c:
    // 0x1ca24c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_1ca250:
    // 0x1ca250: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ca250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_1ca254:
    // 0x1ca254: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x1ca254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
label_1ca258:
    // 0x1ca258: 0xc07defc  jal         func_1F7BF0
label_1ca25c:
    if (ctx->pc == 0x1CA25Cu) {
        ctx->pc = 0x1CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA258u;
        // 0x1ca25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA260u;
        goto label_1ca260;
    }
    ctx->pc = 0x1CA258u;
    SET_GPR_U32(ctx, 31, 0x1CA260u);
    ctx->pc = 0x1CA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA258u;
    // 0x1ca25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x1CA258u, 0x1CA260u)) {
        return;
    }
    ctx->pc = 0x1CA260u;
label_1ca260:
    // 0x1ca260: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_1ca264:
    if (ctx->pc == 0x1CA264u) {
        ctx->pc = 0x1CA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA260u;
        // 0x1ca264: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA268u;
        goto label_1ca268;
    }
    ctx->pc = 0x1CA260u;
    {
        const bool branch_taken_0x1ca260 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1ca260) {
            ctx->pc = 0x1CA264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA260u;
            // 0x1ca264: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA28Cu;
            goto label_1ca28c;
        }
    }
    ctx->pc = 0x1CA268u;
label_1ca268:
    // 0x1ca268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ca26c:
    // 0x1ca26c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1ca26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ca270:
    // 0x1ca270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ca274:
    if (ctx->pc == 0x1CA274u) {
        ctx->pc = 0x1CA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA270u;
        // 0x1ca274: 0x2341818  mult        $v1, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA278u;
        goto label_1ca278;
    }
    ctx->pc = 0x1CA270u;
    {
        const bool branch_taken_0x1ca270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA270u;
        // 0x1ca274: 0x2341818  mult        $v1, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca270) {
            ctx->pc = 0x1CA28Cu;
            goto label_1ca28c;
        }
    }
    ctx->pc = 0x1CA278u;
label_1ca278:
    // 0x1ca278: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1ca278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ca27c:
    // 0x1ca27c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1ca27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1ca280:
    // 0x1ca280: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_1ca284:
    if (ctx->pc == 0x1CA284u) {
        ctx->pc = 0x1CA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA280u;
        // 0x1ca284: 0x24140028  addiu       $s4, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA288u;
        goto label_1ca288;
    }
    ctx->pc = 0x1CA280u;
    {
        const bool branch_taken_0x1ca280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA280u;
        // 0x1ca284: 0x24140028  addiu       $s4, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca280) {
            ctx->pc = 0x1CA1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca1d0;
        }
    }
    ctx->pc = 0x1CA288u;
label_1ca288:
    // 0x1ca288: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ca288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca28c:
    // 0x1ca28c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_1ca290:
    if (ctx->pc == 0x1CA290u) {
        ctx->pc = 0x1CA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA28Cu;
        // 0x1ca290: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA294u;
        goto label_1ca294;
    }
    ctx->pc = 0x1CA28Cu;
    {
        const bool branch_taken_0x1ca28c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA28Cu;
        // 0x1ca290: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca28c) {
            ctx->pc = 0x1CA2ACu;
            goto label_1ca2ac;
        }
    }
    ctx->pc = 0x1CA294u;
label_1ca294:
    // 0x1ca294: 0x8e460268  lw          $a2, 0x268($s2)
    ctx->pc = 0x1ca294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_1ca298:
    // 0x1ca298: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1ca29c:
    // 0x1ca29c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ca29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ca2a0:
    // 0x1ca2a0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ca2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ca2a4:
    // 0x1ca2a4: 0x60f809  jalr        $v1
label_1ca2a8:
    if (ctx->pc == 0x1CA2A8u) {
        ctx->pc = 0x1CA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2A4u;
        // 0x1ca2a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2ACu;
        goto label_1ca2ac;
    }
    ctx->pc = 0x1CA2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA2ACu);
        ctx->pc = 0x1CA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2A4u;
        // 0x1ca2a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2A4u, 0x1CA2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA2ACu;
label_1ca2ac:
    // 0x1ca2ac: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1ca2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ca2b0:
    // 0x1ca2b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ca2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ca2b4:
    // 0x1ca2b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ca2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ca2b8:
    // 0x1ca2b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ca2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ca2bc:
    // 0x1ca2bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ca2bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ca2c0:
    // 0x1ca2c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ca2c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca2c4:
    // 0x1ca2c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ca2c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca2c8:
    // 0x1ca2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca2cc:
    // 0x1ca2cc: 0x3e00008  jr          $ra
label_1ca2d0:
    if (ctx->pc == 0x1CA2D0u) {
        ctx->pc = 0x1CA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2CCu;
        // 0x1ca2d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2D4u;
        goto label_1ca2d4;
    }
    ctx->pc = 0x1CA2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2CCu;
        // 0x1ca2d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA2D4u;
label_1ca2d4:
    // 0x1ca2d4: 0x0  nop
    ctx->pc = 0x1ca2d4u;
    // NOP
    ctx->pc = 0x1ca2d8u;
}
