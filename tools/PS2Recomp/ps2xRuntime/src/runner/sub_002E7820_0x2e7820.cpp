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

// Function: sub_002E7820
// Address: 0x2e7820 - 0x2e7c18
void sub_002E7820_0x2e7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7820_0x2e7820");
#endif

    switch (ctx->pc) {
        case 0x2e787cu: goto label_2e787c;
        case 0x2e7894u: goto label_2e7894;
        case 0x2e78a8u: goto label_2e78a8;
        case 0x2e7940u: goto label_2e7940;
        case 0x2e7970u: goto label_2e7970;
        case 0x2e7990u: goto label_2e7990;
        case 0x2e79e8u: goto label_2e79e8;
        case 0x2e7a18u: goto label_2e7a18;
        case 0x2e7a40u: goto label_2e7a40;
        case 0x2e7a6cu: goto label_2e7a6c;
        case 0x2e7a80u: goto label_2e7a80;
        case 0x2e7aa0u: goto label_2e7aa0;
        case 0x2e7ab4u: goto label_2e7ab4;
        case 0x2e7af4u: goto label_2e7af4;
        case 0x2e7afcu: goto label_2e7afc;
        case 0x2e7bc4u: goto label_2e7bc4;
        case 0x2e7be4u: goto label_2e7be4;
        default: break;
    }

    ctx->pc = 0x2e7820u;

    // 0x2e7820: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e7824: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e7824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e7828: 0x3a9480a  movz        $t1, $sp, $t1
    ctx->pc = 0x2e7828u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29));
    // 0x2e782c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2e7830: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e7830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e7834: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2e7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2e7838: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e7838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e783c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2e783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2e7840: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2e7840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7844: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2e7844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2e7848: 0x24a5f100  addiu       $a1, $a1, -0xF00
    ctx->pc = 0x2e7848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    // 0x2e784c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2e784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2e7850: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2e7850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2e7854: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e7854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e7858: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2e7858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2e785c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2e785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2e7860: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7864: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2e7864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2e7868: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2e7868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2e786c: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x2e786cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x2e7870: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2e7870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x2e7874: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E7874u;
    SET_GPR_U32(ctx, 31, 0x2E787Cu);
    ctx->pc = 0x2E7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7874u;
    // 0x2e7878: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E7874u, 0x2E787Cu)) {
        return;
    }
    ctx->pc = 0x2E787Cu;
label_2e787c:
    // 0x2e787c: 0x544000a1  bnel        $v0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2E787Cu;
    {
        const bool branch_taken_0x2e787c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e787c) {
            ctx->pc = 0x2E7880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E787Cu;
            // 0x2e7880: 0x9283000d  lbu         $v1, 0xD($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B04u;
            goto label_2e7b04;
        }
    }
    ctx->pc = 0x2E7884u;
    // 0x2e7884: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e7884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e7888: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2e788c: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E788Cu;
    SET_GPR_U32(ctx, 31, 0x2E7894u);
    ctx->pc = 0x2E7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E788Cu;
    // 0x2e7890: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E788Cu, 0x2E7894u)) {
        return;
    }
    ctx->pc = 0x2E7894u;
label_2e7894:
    // 0x2e7894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7894u;
    {
        const bool branch_taken_0x2e7894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7894u;
        // 0x2e7898: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7894) {
            ctx->pc = 0x2E78B0u;
            goto label_2e78b0;
        }
    }
    ctx->pc = 0x2E789Cu;
    // 0x2e789c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x2e789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2e78a0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E78A0u;
    SET_GPR_U32(ctx, 31, 0x2E78A8u);
    ctx->pc = 0x2E78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78A0u;
    // 0x2e78a4: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E78A0u, 0x2E78A8u)) {
        return;
    }
    ctx->pc = 0x2E78A8u;
label_2e78a8:
    // 0x2e78a8: 0x54400096  bnel        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x2E78A8u;
    {
        const bool branch_taken_0x2e78a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e78a8) {
            ctx->pc = 0x2E78ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E78A8u;
            // 0x2e78ac: 0x9283000d  lbu         $v1, 0xD($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B04u;
            goto label_2e7b04;
        }
    }
    ctx->pc = 0x2E78B0u;
label_2e78b0:
    // 0x2e78b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2e78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e78b4: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2e78b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e78b8: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2e78b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e78bc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e78c0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2e78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e78c4: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x2e78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e78c8: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x2e78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x2e78cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E78CCu;
    {
        const bool branch_taken_0x2e78cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e78cc) {
            ctx->pc = 0x2E78D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E78CCu;
            // 0x2e78d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E78D4u;
            goto label_2e78d4;
        }
    }
    ctx->pc = 0x2E78D4u;
label_2e78d4:
    // 0x2e78d4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e78d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2e78d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e78dc: 0x2012  mflo        $a0
    ctx->pc = 0x2e78dcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e78e0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2e78e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e78e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e78e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e78ec: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x2e78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2e78f0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2e78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2e78f4: 0x9285000d  lbu         $a1, 0xD($s4)
    ctx->pc = 0x2e78f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e78f8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2e78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2e78fc: 0x46b018  mult        $s6, $v0, $a2
    ctx->pc = 0x2e78fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x2e7900: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e7900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7904: 0x2c50018  mult        $zero, $s6, $a1
    ctx->pc = 0x2e7904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e7908: 0x1012  mflo        $v0
    ctx->pc = 0x2e7908u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e790c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e790cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7910: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2e7910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7914: 0x106000b3  beqz        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2E7914u;
    {
        const bool branch_taken_0x2e7914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7914u;
        // 0x2e7918: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7914) {
            ctx->pc = 0x2E7BE4u;
            goto label_2e7be4;
        }
    }
    ctx->pc = 0x2E791Cu;
    // 0x2e791c: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e791cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e7920: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e7920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e7924: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E7924u;
    {
        const bool branch_taken_0x2e7924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7924u;
        // 0x2e7928: 0x8fb70004  lw          $s7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7924) {
            ctx->pc = 0x2E79D0u;
            goto label_2e79d0;
        }
    }
    ctx->pc = 0x2E792Cu;
    // 0x2e792c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e7930: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2e7930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2e7934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e7934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7938: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2E7938u;
    SET_GPR_U32(ctx, 31, 0x2E7940u);
    ctx->pc = 0x2E793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7938u;
    // 0x2e793c: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E7938u, 0x2E7940u)) {
        return;
    }
    ctx->pc = 0x2E7940u;
label_2e7940:
    // 0x2e7940: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e7940u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7944: 0x12e000a8  beqz        $s7, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2E7944u;
    {
        const bool branch_taken_0x2e7944 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7944u;
        // 0x2e7948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7944) {
            ctx->pc = 0x2E7BE8u;
            goto label_2e7be8;
        }
    }
    ctx->pc = 0x2E794Cu;
    // 0x2e794c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7950: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e7950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e7954: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2e7954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2e7958: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e7958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e795c: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2e795cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2e7960: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E7960u;
    {
        const bool branch_taken_0x2e7960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7960u;
        // 0x2e7964: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7960) {
            ctx->pc = 0x2E79D4u;
            goto label_2e79d4;
        }
    }
    ctx->pc = 0x2E7968u;
    // 0x2e7968: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2e7968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e796c: 0x0  nop
    ctx->pc = 0x2e796cu;
    // NOP
label_2e7970:
    // 0x2e7970: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2e7970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2e7974: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x2e7974u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e7978: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2e7978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e797c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2e797cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e7980: 0x2531018  mult        $v0, $s2, $s3
    ctx->pc = 0x2e7980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7984: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7984u;
    {
        const bool branch_taken_0x2e7984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7984u;
        // 0x2e7988: 0x578021  addu        $s0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7984) {
            ctx->pc = 0x2E79B0u;
            goto label_2e79b0;
        }
    }
    ctx->pc = 0x2E798Cu;
    // 0x2e798c: 0x0  nop
    ctx->pc = 0x2e798cu;
    // NOP
label_2e7990:
    // 0x2e7990: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2e7990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7994: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2e7994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2e7998: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2e7998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e799c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2e799cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2e79a0: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2e79a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e79a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e79a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E79A8u;
    {
        const bool branch_taken_0x2e79a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79A8u;
        // 0x2e79ac: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79a8) {
            ctx->pc = 0x2E7990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7990;
        }
    }
    ctx->pc = 0x2E79B0u;
label_2e79b0:
    // 0x2e79b0: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x2e79b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e79b4: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2e79b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e79b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79bc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2e79bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e79c0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E79C0u;
    {
        const bool branch_taken_0x2e79c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79C0u;
        // 0x2e79c4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79c0) {
            ctx->pc = 0x2E7970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7970;
        }
    }
    ctx->pc = 0x2E79C8u;
    // 0x2e79c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E79C8u;
    {
        const bool branch_taken_0x2e79c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79C8u;
        // 0x2e79cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79c8) {
            ctx->pc = 0x2E79D4u;
            goto label_2e79d4;
        }
    }
    ctx->pc = 0x2E79D0u;
label_2e79d0:
    // 0x2e79d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e79d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e79d4:
    // 0x2e79d4: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E79D4u;
    {
        const bool branch_taken_0x2e79d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79D4u;
        // 0x2e79d8: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79d4) {
            ctx->pc = 0x2E7A50u;
            goto label_2e7a50;
        }
    }
    ctx->pc = 0x2E79DCu;
    // 0x2e79dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e79dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79e0: 0x2e32021  addu        $a0, $s7, $v1
    ctx->pc = 0x2e79e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2e79e4: 0x0  nop
    ctx->pc = 0x2e79e4u;
    // NOP
label_2e79e8:
    // 0x2e79e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e79ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e79ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79f0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2e79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e79f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e79f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e79fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e79fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e7a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e7a08: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x2e7a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e7a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a10: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E7A10u;
    SET_GPR_U32(ctx, 31, 0x2E7A18u);
    ctx->pc = 0x2E7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A10u;
    // 0x2e7a14: 0x2b6a821  addu        $s5, $s5, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E7A10u, 0x2E7A18u)) {
        return;
    }
    ctx->pc = 0x2E7A18u;
label_2e7a18:
    // 0x2e7a18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7a1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7a24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a28: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x2e7a28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7a2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a34: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x2e7a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e7a38: 0xc0ba0ea  jal         func_2E83A8
    ctx->pc = 0x2E7A38u;
    SET_GPR_U32(ctx, 31, 0x2E7A40u);
    ctx->pc = 0x2E7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A38u;
    // 0x2e7a3c: 0x2c94823  subu        $t1, $s6, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E83A8u, 0x2E7A38u, 0x2E7A40u)) {
        return;
    }
    ctx->pc = 0x2E7A40u;
label_2e7a40:
    // 0x2e7a40: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x2e7a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x2e7a44: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2e7a44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e7a48: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E7A48u;
    {
        const bool branch_taken_0x2e7a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A48u;
        // 0x2e7a4c: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a48) {
            ctx->pc = 0x2E79E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e79e8;
        }
    }
    ctx->pc = 0x2E7A50u;
label_2e7a50:
    // 0x2e7a50: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e7a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e7a54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e7a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e7a58: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2E7A58u;
    {
        const bool branch_taken_0x2e7a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A58u;
        // 0x2e7a5c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a58) {
            ctx->pc = 0x2E7BE8u;
            goto label_2e7be8;
        }
    }
    ctx->pc = 0x2E7A60u;
    // 0x2e7a60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e7a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a64: 0xc0b751e  jal         func_2DD478
    ctx->pc = 0x2E7A64u;
    SET_GPR_U32(ctx, 31, 0x2E7A6Cu);
    ctx->pc = 0x2E7A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A64u;
    // 0x2e7a68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD478u, 0x2E7A64u, 0x2E7A6Cu)) {
        return;
    }
    ctx->pc = 0x2E7A6Cu;
label_2e7a6c:
    // 0x2e7a6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e7a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a70: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e7a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e7a74: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7A74u;
    {
        const bool branch_taken_0x2e7a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a74) {
            ctx->pc = 0x2E7A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A74u;
            // 0x2e7a78: 0x93c6000d  lbu         $a2, 0xD($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7AE0u;
            goto label_2e7ae0;
        }
    }
    ctx->pc = 0x2E7A7Cu;
    // 0x2e7a7c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2e7a80:
    // 0x2e7a80: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x2e7a80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e7a84: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2e7a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a88: 0x400013  mtlo        $v0
    ctx->pc = 0x2e7a88u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2e7a8c: 0x72d38800  madd        $s1, $s6, $s3
    ctx->pc = 0x2e7a8cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2e7a90: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x2e7a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7a94: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7A94u;
    {
        const bool branch_taken_0x2e7a94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A94u;
        // 0x2e7a98: 0x578021  addu        $s0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a94) {
            ctx->pc = 0x2E7AC8u;
            goto label_2e7ac8;
        }
    }
    ctx->pc = 0x2E7A9Cu;
    // 0x2e7a9c: 0x0  nop
    ctx->pc = 0x2e7a9cu;
    // NOP
label_2e7aa0:
    // 0x2e7aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7aa8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e7aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7aac: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E7AACu;
    SET_GPR_U32(ctx, 31, 0x2E7AB4u);
    ctx->pc = 0x2E7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AACu;
    // 0x2e7ab0: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E7AACu, 0x2E7AB4u)) {
        return;
    }
    ctx->pc = 0x2E7AB4u;
label_2e7ab4:
    // 0x2e7ab4: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x2e7ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2e7ab8: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e7ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e7abc: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x2e7abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e7ac0: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7AC0u;
    {
        const bool branch_taken_0x2e7ac0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AC0u;
        // 0x2e7ac4: 0x708021  addu        $s0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ac0) {
            ctx->pc = 0x2E7AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7aa0;
        }
    }
    ctx->pc = 0x2E7AC8u;
label_2e7ac8:
    // 0x2e7ac8: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e7ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e7acc: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2e7accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ad0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2e7ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e7ad4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E7AD4u;
    {
        const bool branch_taken_0x2e7ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD4u;
        // 0x2e7ad8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ad4) {
            ctx->pc = 0x2E7A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7a80;
        }
    }
    ctx->pc = 0x2E7ADCu;
    // 0x2e7adc: 0x93c6000d  lbu         $a2, 0xD($fp)
    ctx->pc = 0x2e7adcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
label_2e7ae0:
    // 0x2e7ae0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e7ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ae4: 0x2c60018  mult        $zero, $s6, $a2
    ctx->pc = 0x2e7ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e7ae8: 0x3012  mflo        $a2
    ctx->pc = 0x2e7ae8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2e7aec: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E7AECu;
    SET_GPR_U32(ctx, 31, 0x2E7AF4u);
    ctx->pc = 0x2E7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AECu;
    // 0x2e7af0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E7AECu, 0x2E7AF4u)) {
        return;
    }
    ctx->pc = 0x2E7AF4u;
label_2e7af4:
    // 0x2e7af4: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E7AF4u;
    SET_GPR_U32(ctx, 31, 0x2E7AFCu);
    ctx->pc = 0x2E7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AF4u;
    // 0x2e7af8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E7AF4u, 0x2E7AFCu)) {
        return;
    }
    ctx->pc = 0x2E7AFCu;
label_2e7afc:
    // 0x2e7afc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2E7AFCu;
    {
        const bool branch_taken_0x2e7afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AFCu;
        // 0x2e7b00: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7afc) {
            ctx->pc = 0x2E7BE8u;
            goto label_2e7be8;
        }
    }
    ctx->pc = 0x2E7B04u;
label_2e7b04:
    // 0x2e7b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7b08: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7B08u;
    {
        const bool branch_taken_0x2e7b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7b08) {
            ctx->pc = 0x2E7B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B08u;
            // 0x2e7b0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B4Cu;
            goto label_2e7b4c;
        }
    }
    ctx->pc = 0x2E7B10u;
    // 0x2e7b10: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2e7b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7b14: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2e7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e7b18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7B18u;
    {
        const bool branch_taken_0x2e7b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b18) {
            ctx->pc = 0x2E7B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B18u;
            // 0x2e7b1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B20u;
            goto label_2e7b20;
        }
    }
    ctx->pc = 0x2E7B20u;
label_2e7b20:
    // 0x2e7b20: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2e7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e7b24: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2e7b24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2e7b28: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e7b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7b2c: 0x1012  mflo        $v0
    ctx->pc = 0x2e7b2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e7b30: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2e7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2e7b34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e7b38: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2e7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e7b3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e7b3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e7b40: 0x1012  mflo        $v0
    ctx->pc = 0x2e7b40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e7b44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7B44u;
    {
        const bool branch_taken_0x2e7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B44u;
        // 0x2e7b48: 0x211c0  sll         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b44) {
            ctx->pc = 0x2E7B8Cu;
            goto label_2e7b8c;
        }
    }
    ctx->pc = 0x2E7B4Cu;
label_2e7b4c:
    // 0x2e7b4c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7B4Cu;
    {
        const bool branch_taken_0x2e7b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B4Cu;
        // 0x2e7b50: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b4c) {
            ctx->pc = 0x2E7B94u;
            goto label_2e7b94;
        }
    }
    ctx->pc = 0x2E7B54u;
    // 0x2e7b54: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7b58: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2e7b5c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7B5Cu;
    {
        const bool branch_taken_0x2e7b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b5c) {
            ctx->pc = 0x2E7B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B5Cu;
            // 0x2e7b60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B64u;
            goto label_2e7b64;
        }
    }
    ctx->pc = 0x2E7B64u;
label_2e7b64:
    // 0x2e7b64: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2e7b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2e7b68: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2e7b68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2e7b6c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7b70: 0x1012  mflo        $v0
    ctx->pc = 0x2e7b70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e7b74: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2e7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e7b78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e7b7c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2e7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e7b80: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e7b80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e7b84: 0x1012  mflo        $v0
    ctx->pc = 0x2e7b84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e7b88: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2e7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2e7b8c:
    // 0x2e7b8c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2e7b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2e7b90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7b94:
    // 0x2e7b94: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2e7b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e7b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7b9c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7ba0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2e7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e7ba4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E7BA4u;
    {
        const bool branch_taken_0x2e7ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA4u;
        // 0x2e7ba8: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ba4) {
            ctx->pc = 0x2E7BE4u;
            goto label_2e7be4;
        }
    }
    ctx->pc = 0x2E7BACu;
    // 0x2e7bac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e7bb0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2e7bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e7bb4: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2e7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x2e7bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bbc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E7BBCu;
    SET_GPR_U32(ctx, 31, 0x2E7BC4u);
    ctx->pc = 0x2E7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BBCu;
    // 0x2e7bc0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E7BBCu, 0x2E7BC4u)) {
        return;
    }
    ctx->pc = 0x2E7BC4u;
label_2e7bc4:
    // 0x2e7bc4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7bc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bcc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7bd0: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2e7bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7bd8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2e7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e7bdc: 0xc0ba106  jal         func_2E8418
    ctx->pc = 0x2E7BDCu;
    SET_GPR_U32(ctx, 31, 0x2E7BE4u);
    ctx->pc = 0x2E7BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BDCu;
    // 0x2e7be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8418u, 0x2E7BDCu, 0x2E7BE4u)) {
        return;
    }
    ctx->pc = 0x2E7BE4u;
label_2e7be4:
    // 0x2e7be4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2e7be8:
    // 0x2e7be8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2e7be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e7bec: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2e7becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7bf0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2e7bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7bf4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2e7bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e7bf8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e7bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7bfc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e7bfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7c00: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2e7c00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7c04: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2e7c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7c08: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2e7c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C10u;
        // 0x2e7c14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7C18u;
}
