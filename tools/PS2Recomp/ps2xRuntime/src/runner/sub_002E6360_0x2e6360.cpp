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

// Function: sub_002E6360
// Address: 0x2e6360 - 0x2e6728
void sub_002E6360_0x2e6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6360_0x2e6360");
#endif

    switch (ctx->pc) {
        case 0x2e63b8u: goto label_2e63b8;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e646cu: goto label_2e646c;
        case 0x2e6498u: goto label_2e6498;
        case 0x2e64b0u: goto label_2e64b0;
        case 0x2e6508u: goto label_2e6508;
        case 0x2e651cu: goto label_2e651c;
        case 0x2e6530u: goto label_2e6530;
        case 0x2e655cu: goto label_2e655c;
        case 0x2e6598u: goto label_2e6598;
        case 0x2e65b8u: goto label_2e65b8;
        case 0x2e660cu: goto label_2e660c;
        case 0x2e6614u: goto label_2e6614;
        case 0x2e66d4u: goto label_2e66d4;
        case 0x2e66e4u: goto label_2e66e4;
        default: break;
    }

    ctx->pc = 0x2e6360u;

    // 0x2e6360: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e6364: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2e6364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2e6368: 0x3a9480a  movz        $t1, $sp, $t1
    ctx->pc = 0x2e6368u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29));
    // 0x2e636c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2e636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2e6370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e6370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6374: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2e6374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2e6378: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e6378u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e637c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2e637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2e6380: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e6380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e6384: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2e6384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2e6388: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2e6388u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e638c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2e638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2e6390: 0x24a5f100  addiu       $a1, $a1, -0xF00
    ctx->pc = 0x2e6390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    // 0x2e6394: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e6394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2e6398: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e6398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e639c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2e639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2e63a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e63a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e63a4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2e63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e63a8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2e63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2e63ac: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2e63acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2e63b0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E63B0u;
    SET_GPR_U32(ctx, 31, 0x2E63B8u);
    ctx->pc = 0x2E63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63B0u;
    // 0x2e63b4: 0xafa9000c  sw          $t1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E63B0u, 0x2E63B8u)) {
        return;
    }
    ctx->pc = 0x2E63B8u;
label_2e63b8:
    // 0x2e63b8: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2E63B8u;
    {
        const bool branch_taken_0x2e63b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63B8u;
        // 0x2e63bc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63b8) {
            ctx->pc = 0x2E661Cu;
            goto label_2e661c;
        }
    }
    ctx->pc = 0x2E63C0u;
    // 0x2e63c0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e63c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e63c4: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x2e63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2e63c8: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E63C8u;
    SET_GPR_U32(ctx, 31, 0x2E63D0u);
    ctx->pc = 0x2E63CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63C8u;
    // 0x2e63cc: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E63C8u, 0x2E63D0u)) {
        return;
    }
    ctx->pc = 0x2E63D0u;
label_2e63d0:
    // 0x2e63d0: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2E63D0u;
    {
        const bool branch_taken_0x2e63d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63D0u;
        // 0x2e63d4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63d0) {
            ctx->pc = 0x2E661Cu;
            goto label_2e661c;
        }
    }
    ctx->pc = 0x2E63D8u;
    // 0x2e63d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2e63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e63dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e63dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e63e0: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x2e63e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e63e4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e63e8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2e63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e63ec: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x2e63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x2e63f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E63F0u;
    {
        const bool branch_taken_0x2e63f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e63f0) {
            ctx->pc = 0x2E63F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E63F0u;
            // 0x2e63f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63F8u;
            goto label_2e63f8;
        }
    }
    ctx->pc = 0x2E63F8u;
label_2e63f8:
    // 0x2e63f8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2e63f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2e63fc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e6400: 0x2012  mflo        $a0
    ctx->pc = 0x2e6400u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e6404: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e6404u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e6408: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e6408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e640c: 0x141042  srl         $v0, $s4, 1
    ctx->pc = 0x2e640cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x2e6410: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2e6410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e6414: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x2e6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x2e6418: 0x1812  mflo        $v1
    ctx->pc = 0x2e6418u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2e641c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2e641cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e6420: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e6420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e6424: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e6424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2e6428: 0x9263000d  lbu         $v1, 0xD($s3)
    ctx->pc = 0x2e6428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e642c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6430: 0x1012  mflo        $v0
    ctx->pc = 0x2e6430u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e6434: 0x2a8c0  sll         $s5, $v0, 3
    ctx->pc = 0x2e6434u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e6438: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x2e6438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e643c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6440: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x2E6440u;
    {
        const bool branch_taken_0x2e6440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6440u;
        // 0x2e6444: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6440) {
            ctx->pc = 0x2E66F4u;
            goto label_2e66f4;
        }
    }
    ctx->pc = 0x2E6448u;
    // 0x2e6448: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e6448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e644c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e644cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e6450: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E6450u;
    {
        const bool branch_taken_0x2e6450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6450u;
        // 0x2e6454: 0x2c0b82d  daddu       $s7, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6450) {
            ctx->pc = 0x2E64F0u;
            goto label_2e64f0;
        }
    }
    ctx->pc = 0x2E6458u;
    // 0x2e6458: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2e6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e645c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2e645cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2e6460: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6464: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2E6464u;
    SET_GPR_U32(ctx, 31, 0x2E646Cu);
    ctx->pc = 0x2E6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6464u;
    // 0x2e6468: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E6464u, 0x2E646Cu)) {
        return;
    }
    ctx->pc = 0x2E646Cu;
label_2e646c:
    // 0x2e646c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e646cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6470: 0x12e000a1  beqz        $s7, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2E6470u;
    {
        const bool branch_taken_0x2e6470 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6470u;
        // 0x2e6474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6470) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E6478u;
    // 0x2e6478: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e647c: 0x9263000d  lbu         $v1, 0xD($s3)
    ctx->pc = 0x2e647cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e6480: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2e6480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2e6484: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e6484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6488: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x2e6488u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2e648c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E648Cu;
    {
        const bool branch_taken_0x2e648c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E648Cu;
        // 0x2e6490: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e648c) {
            ctx->pc = 0x2E64F4u;
            goto label_2e64f4;
        }
    }
    ctx->pc = 0x2E6494u;
    // 0x2e6494: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2e6494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2e6498:
    // 0x2e6498: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2e6498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e649c: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x2e649cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e64a0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2e64a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64a4: 0x2921018  mult        $v0, $s4, $s2
    ctx->pc = 0x2e64a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e64a8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E64A8u;
    {
        const bool branch_taken_0x2e64a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64A8u;
        // 0x2e64ac: 0x578821  addu        $s1, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64a8) {
            ctx->pc = 0x2E64D0u;
            goto label_2e64d0;
        }
    }
    ctx->pc = 0x2E64B0u;
label_2e64b0:
    // 0x2e64b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2e64b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e64b4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2e64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2e64b8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2e64b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e64bc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2e64bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2e64c0: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x2e64c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e64c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e64c8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E64C8u;
    {
        const bool branch_taken_0x2e64c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64C8u;
        // 0x2e64cc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64c8) {
            ctx->pc = 0x2E64B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e64b0;
        }
    }
    ctx->pc = 0x2E64D0u;
label_2e64d0:
    // 0x2e64d0: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x2e64d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e64d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e64d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64dc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2e64dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e64e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E64E0u;
    {
        const bool branch_taken_0x2e64e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64E0u;
        // 0x2e64e4: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64e0) {
            ctx->pc = 0x2E6498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6498;
        }
    }
    ctx->pc = 0x2E64E8u;
    // 0x2e64e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E64E8u;
    {
        const bool branch_taken_0x2e64e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64E8u;
        // 0x2e64ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64e8) {
            ctx->pc = 0x2E64F4u;
            goto label_2e64f4;
        }
    }
    ctx->pc = 0x2E64F0u;
label_2e64f0:
    // 0x2e64f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e64f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e64f4:
    // 0x2e64f4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E64F4u;
    {
        const bool branch_taken_0x2e64f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64F4u;
        // 0x2e64f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64f4) {
            ctx->pc = 0x2E6570u;
            goto label_2e6570;
        }
    }
    ctx->pc = 0x2E64FCu;
    // 0x2e64fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2e64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6500: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x2e6500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2e6504: 0x283b023  subu        $s6, $s4, $v1
    ctx->pc = 0x2e6504u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2e6508:
    // 0x2e6508: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e6508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e650c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e650cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6514: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E6514u;
    SET_GPR_U32(ctx, 31, 0x2E651Cu);
    ctx->pc = 0x2E6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6514u;
    // 0x2e6518: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E6514u, 0x2E651Cu)) {
        return;
    }
    ctx->pc = 0x2E651Cu;
label_2e651c:
    // 0x2e651c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6520: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e6520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6524: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e6524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6528: 0xc0b99ca  jal         func_2E6728
    ctx->pc = 0x2E6528u;
    SET_GPR_U32(ctx, 31, 0x2E6530u);
    ctx->pc = 0x2E652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6528u;
    // 0x2e652c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E6728u, 0x2E6528u, 0x2E6530u)) {
        return;
    }
    ctx->pc = 0x2E6530u;
label_2e6530:
    // 0x2e6530: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2E6530u;
    {
        const bool branch_taken_0x2e6530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6530u;
        // 0x2e6534: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6530) {
            ctx->pc = 0x2E66ECu;
            goto label_2e66ec;
        }
    }
    ctx->pc = 0x2E6538u;
    // 0x2e6538: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e6538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e653c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e653cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6540: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6544: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x2e6544u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e6548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e654c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6550: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e6554: 0xc0b9a64  jal         func_2E6990
    ctx->pc = 0x2E6554u;
    SET_GPR_U32(ctx, 31, 0x2E655Cu);
    ctx->pc = 0x2E6558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6554u;
    // 0x2e6558: 0x2a94823  subu        $t1, $s5, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E6990u, 0x2E6554u, 0x2E655Cu)) {
        return;
    }
    ctx->pc = 0x2E655Cu;
label_2e655c:
    // 0x2e655c: 0x9263000d  lbu         $v1, 0xD($s3)
    ctx->pc = 0x2e655cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e6560: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2e6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2e6564: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2e6564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6568: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E6568u;
    {
        const bool branch_taken_0x2e6568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6568u;
        // 0x2e656c: 0x2352021  addu        $a0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6568) {
            ctx->pc = 0x2E6508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6508;
        }
    }
    ctx->pc = 0x2E6570u;
label_2e6570:
    // 0x2e6570: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e6570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e6574: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e6574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e6578: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2E6578u;
    {
        const bool branch_taken_0x2e6578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6578u;
        // 0x2e657c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6578) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E6580u;
    // 0x2e6580: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e6580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e6584: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e6584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6588: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E6588u;
    {
        const bool branch_taken_0x2e6588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6588u;
        // 0x2e658c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6588) {
            ctx->pc = 0x2E65F8u;
            goto label_2e65f8;
        }
    }
    ctx->pc = 0x2E6590u;
    // 0x2e6590: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2e6590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e6594: 0x0  nop
    ctx->pc = 0x2e6594u;
    // NOP
label_2e6598:
    // 0x2e6598: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2e6598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e659c: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x2e659cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e65a0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2e65a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e65a8: 0x400013  mtlo        $v0
    ctx->pc = 0x2e65a8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2e65ac: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2E65ACu;
    {
        const bool branch_taken_0x2e65ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65ACu;
        // 0x2e65b0: 0x72b28000  madd        $s0, $s5, $s2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65ac) {
            ctx->pc = 0x2E65E0u;
            goto label_2e65e0;
        }
    }
    ctx->pc = 0x2E65B4u;
    // 0x2e65b4: 0x0  nop
    ctx->pc = 0x2e65b4u;
    // NOP
label_2e65b8:
    // 0x2e65b8: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x2e65b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2e65bc: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x2e65bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2e65c0: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x2e65c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e65c4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2e65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2e65c8: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x2e65c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e65cc: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e65ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e65d0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2e65d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e65d8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E65D8u;
    {
        const bool branch_taken_0x2e65d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D8u;
        // 0x2e65dc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65d8) {
            ctx->pc = 0x2E65B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e65b8;
        }
    }
    ctx->pc = 0x2E65E0u;
label_2e65e0:
    // 0x2e65e0: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x2e65e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x2e65e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e65e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e65e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65ec: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2e65ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e65f0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E65F0u;
    {
        const bool branch_taken_0x2e65f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65F0u;
        // 0x2e65f4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65f0) {
            ctx->pc = 0x2E6598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6598;
        }
    }
    ctx->pc = 0x2E65F8u;
label_2e65f8:
    // 0x2e65f8: 0x2a30018  mult        $zero, $s5, $v1
    ctx->pc = 0x2e65f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e65fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2e65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6600: 0x3012  mflo        $a2
    ctx->pc = 0x2e6600u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2e6604: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E6604u;
    SET_GPR_U32(ctx, 31, 0x2E660Cu);
    ctx->pc = 0x2E6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6604u;
    // 0x2e6608: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E6604u, 0x2E660Cu)) {
        return;
    }
    ctx->pc = 0x2E660Cu;
label_2e660c:
    // 0x2e660c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E660Cu;
    SET_GPR_U32(ctx, 31, 0x2E6614u);
    ctx->pc = 0x2E6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E660Cu;
    // 0x2e6610: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E660Cu, 0x2E6614u)) {
        return;
    }
    ctx->pc = 0x2E6614u;
label_2e6614:
    // 0x2e6614: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2E6614u;
    {
        const bool branch_taken_0x2e6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6614u;
        // 0x2e6618: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6614) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E661Cu;
label_2e661c:
    // 0x2e661c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2e661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e6620: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e6624: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x2e6624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2e6628: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2e6628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e662c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e662cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e6630: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2e6630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2e6634: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6634u;
    {
        const bool branch_taken_0x2e6634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6634u;
        // 0x2e6638: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6634) {
            ctx->pc = 0x2E6648u;
            goto label_2e6648;
        }
    }
    ctx->pc = 0x2E663Cu;
    // 0x2e663c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2e663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2e6640: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6640u;
    {
        const bool branch_taken_0x2e6640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6640) {
            ctx->pc = 0x2E6644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6640u;
            // 0x2e6644: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E665Cu;
            goto label_2e665c;
        }
    }
    ctx->pc = 0x2E6648u;
label_2e6648:
    // 0x2e6648: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2e6648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e664c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x2e664cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2e6650: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2e6650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e6654: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6654u;
    {
        const bool branch_taken_0x2e6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6654u;
        // 0x2e6658: 0x23042  srl         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6654) {
            ctx->pc = 0x2E6680u;
            goto label_2e6680;
        }
    }
    ctx->pc = 0x2E665Cu;
label_2e665c:
    // 0x2e665c: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x2e665cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2e6660: 0x62602  srl         $a0, $a2, 24
    ctx->pc = 0x2e6660u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x2e6664: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2e6664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2e6668: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x2e6668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x2e666c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e666cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e6670: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e6674: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e6674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e6678: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x2e6678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2e667c: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x2e667cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2e6680:
    // 0x2e6680: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2e6680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e6684: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2e6684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6688: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E6688u;
    {
        const bool branch_taken_0x2e6688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6688u;
        // 0x2e668c: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6688) {
            ctx->pc = 0x2E66F4u;
            goto label_2e66f4;
        }
    }
    ctx->pc = 0x2E6690u;
    // 0x2e6690: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2e6690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2e6694: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E6694u;
    {
        const bool branch_taken_0x2e6694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6694u;
        // 0x2e6698: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6694) {
            ctx->pc = 0x2E66ECu;
            goto label_2e66ec;
        }
    }
    ctx->pc = 0x2E669Cu;
    // 0x2e669c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2e669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2e66a0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E66A0u;
    {
        const bool branch_taken_0x2e66a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66A0u;
        // 0x2e66a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66a0) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E66A8u;
    // 0x2e66a8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2e66a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e66ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e66acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e66b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e66b8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2e66b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e66bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e66c0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2e66c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e66c4: 0x2c7b021  addu        $s6, $s6, $a3
    ctx->pc = 0x2e66c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2e66c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e66c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E66CCu;
    SET_GPR_U32(ctx, 31, 0x2E66D4u);
    ctx->pc = 0x2E66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66CCu;
    // 0x2e66d0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E66CCu, 0x2E66D4u)) {
        return;
    }
    ctx->pc = 0x2E66D4u;
label_2e66d4:
    // 0x2e66d4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2e66d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e66d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66dc: 0xc0b9bca  jal         func_2E6F28
    ctx->pc = 0x2E66DCu;
    SET_GPR_U32(ctx, 31, 0x2E66E4u);
    ctx->pc = 0x2E66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66DCu;
    // 0x2e66e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E6F28u, 0x2E66DCu, 0x2E66E4u)) {
        return;
    }
    ctx->pc = 0x2E66E4u;
label_2e66e4:
    // 0x2e66e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E66E4u;
    {
        const bool branch_taken_0x2e66e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66E4u;
        // 0x2e66e8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66e4) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E66ECu;
label_2e66ec:
    // 0x2e66ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E66ECu;
    {
        const bool branch_taken_0x2e66ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66ECu;
        // 0x2e66f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66ec) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E66F4u;
label_2e66f4:
    // 0x2e66f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2e66f8:
    // 0x2e66f8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2e66f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e66fc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2e66fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6700: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2e6700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6704: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2e6704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6708: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e6708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e670c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e670cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6710: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2e6710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6714: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2e6714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6718: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2e6718u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e671c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6720: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6720u;
        // 0x2e6724: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6728u;
}
