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

// Function: sub_002ED348
// Address: 0x2ed348 - 0x2ed4c0
void sub_002ED348_0x2ed348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED348_0x2ed348");
#endif

    switch (ctx->pc) {
        case 0x2ed378u: goto label_2ed378;
        case 0x2ed3a4u: goto label_2ed3a4;
        case 0x2ed3c8u: goto label_2ed3c8;
        case 0x2ed3e0u: goto label_2ed3e0;
        case 0x2ed408u: goto label_2ed408;
        case 0x2ed428u: goto label_2ed428;
        case 0x2ed494u: goto label_2ed494;
        default: break;
    }

    ctx->pc = 0x2ed348u;

    // 0x2ed348: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ed348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ed34c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ed34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ed350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed354: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ed354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ed358: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ed358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ed35c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ed35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ed360: 0x2632002c  addiu       $s2, $s1, 0x2C
    ctx->pc = 0x2ed360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x2ed364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed368: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2ed368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ed36c: 0x2484f6e0  addiu       $a0, $a0, -0x920
    ctx->pc = 0x2ed36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964960));
    // 0x2ed370: 0xc0b7742  jal         func_2DDD08
    ctx->pc = 0x2ED370u;
    SET_GPR_U32(ctx, 31, 0x2ED378u);
    ctx->pc = 0x2ED374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED370u;
    // 0x2ed374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDD08u, 0x2ED370u, 0x2ED378u)) {
        return;
    }
    ctx->pc = 0x2ED378u;
label_2ed378:
    // 0x2ed378: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED378u;
    {
        const bool branch_taken_0x2ed378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED378u;
        // 0x2ed37c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed378) {
            ctx->pc = 0x2ED398u;
            goto label_2ed398;
        }
    }
    ctx->pc = 0x2ED380u;
    // 0x2ed380: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x2ed380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x2ed384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ed384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ed388: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED388u;
    {
        const bool branch_taken_0x2ed388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed388) {
            ctx->pc = 0x2ED38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED388u;
            // 0x2ed38c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED39Cu;
            goto label_2ed39c;
        }
    }
    ctx->pc = 0x2ED390u;
    // 0x2ed390: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2ED390u;
    {
        const bool branch_taken_0x2ed390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED390u;
        // 0x2ed394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed390) {
            ctx->pc = 0x2ED4A4u;
            goto label_2ed4a4;
        }
    }
    ctx->pc = 0x2ED398u;
label_2ed398:
    // 0x2ed398: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ed398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ed39c:
    // 0x2ed39c: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2ED39Cu;
    SET_GPR_U32(ctx, 31, 0x2ED3A4u);
    ctx->pc = 0x2ED3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED39Cu;
    // 0x2ed3a0: 0x24a5f0f0  addiu       $a1, $a1, -0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2ED39Cu, 0x2ED3A4u)) {
        return;
    }
    ctx->pc = 0x2ED3A4u;
label_2ed3a4:
    // 0x2ed3a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2ED3A4u;
    {
        const bool branch_taken_0x2ed3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3a4) {
            ctx->pc = 0x2ED420u;
            goto label_2ed420;
        }
    }
    ctx->pc = 0x2ED3ACu;
    // 0x2ed3ac: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x2ed3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x2ed3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ed3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ed3b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ED3B4u;
    {
        const bool branch_taken_0x2ed3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3B4u;
        // 0x2ed3b8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3b4) {
            ctx->pc = 0x2ED420u;
            goto label_2ed420;
        }
    }
    ctx->pc = 0x2ED3BCu;
    // 0x2ed3bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ed3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ed3c0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2ED3C0u;
    SET_GPR_U32(ctx, 31, 0x2ED3C8u);
    ctx->pc = 0x2ED3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3C0u;
    // 0x2ed3c4: 0x24a5f100  addiu       $a1, $a1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2ED3C0u, 0x2ED3C8u)) {
        return;
    }
    ctx->pc = 0x2ED3C8u;
label_2ed3c8:
    // 0x2ed3c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED3C8u;
    {
        const bool branch_taken_0x2ed3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3C8u;
        // 0x2ed3cc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3c8) {
            ctx->pc = 0x2ED3F4u;
            goto label_2ed3f4;
        }
    }
    ctx->pc = 0x2ED3D0u;
    // 0x2ed3d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ed3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ed3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed3d8: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2ED3D8u;
    SET_GPR_U32(ctx, 31, 0x2ED3E0u);
    ctx->pc = 0x2ED3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3D8u;
    // 0x2ed3dc: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2ED3D8u, 0x2ED3E0u)) {
        return;
    }
    ctx->pc = 0x2ED3E0u;
label_2ed3e0:
    // 0x2ed3e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed3e4: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2ed3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2ed3e8: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x2ed3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x2ed3ec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2ED3ECu;
    {
        const bool branch_taken_0x2ed3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3ECu;
        // 0x2ed3f0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3ec) {
            ctx->pc = 0x2ED494u;
            goto label_2ed494;
        }
    }
    ctx->pc = 0x2ED3F4u;
label_2ed3f4:
    // 0x2ed3f4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ed3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ed3f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed3fc: 0x34c60806  ori         $a2, $a2, 0x806
    ctx->pc = 0x2ed3fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    // 0x2ed400: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2ED400u;
    SET_GPR_U32(ctx, 31, 0x2ED408u);
    ctx->pc = 0x2ED404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED400u;
    // 0x2ed404: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2ED400u, 0x2ED408u)) {
        return;
    }
    ctx->pc = 0x2ED408u;
label_2ed408:
    // 0x2ed408: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ed40c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2ed40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2ed410: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x2ed410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x2ed414: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ed414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ed418: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2ED418u;
    {
        const bool branch_taken_0x2ed418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED418u;
        // 0x2ed41c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed418) {
            ctx->pc = 0x2ED494u;
            goto label_2ed494;
        }
    }
    ctx->pc = 0x2ED420u;
label_2ed420:
    // 0x2ed420: 0xc0bb652  jal         func_2ED948
    ctx->pc = 0x2ED420u;
    SET_GPR_U32(ctx, 31, 0x2ED428u);
    ctx->pc = 0x2ED424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED420u;
    // 0x2ed424: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED948u, 0x2ED420u, 0x2ED428u)) {
        return;
    }
    ctx->pc = 0x2ED428u;
label_2ed428:
    // 0x2ed428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed42c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2ed42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2ed430: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x2ed430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x2ed434: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2ed434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2ed438: 0x6a450007  ldl         $a1, 0x7($s2)
    ctx->pc = 0x2ed438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ed43c: 0x6e450000  ldr         $a1, 0x0($s2)
    ctx->pc = 0x2ed43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ed440: 0x6a46000f  ldl         $a2, 0xF($s2)
    ctx->pc = 0x2ed440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ed444: 0x6e460008  ldr         $a2, 0x8($s2)
    ctx->pc = 0x2ed444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ed448: 0x6a480017  ldl         $t0, 0x17($s2)
    ctx->pc = 0x2ed448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2ed44c: 0x6e480010  ldr         $t0, 0x10($s2)
    ctx->pc = 0x2ed44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2ed450: 0x8e490018  lw          $t1, 0x18($s2)
    ctx->pc = 0x2ed450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ed454: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2ed454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed458: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2ed458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed45c: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x2ed45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed460: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x2ed460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed464: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x2ed464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed468: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x2ed468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed46c: 0x24e7f100  addiu       $a3, $a3, -0xF00
    ctx->pc = 0x2ed46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963456));
    // 0x2ed470: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x2ed470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x2ed474: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ed474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ed478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed480: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x2ed480u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed484: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ed484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed488: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2ed488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2ed48c: 0xc0b9f74  jal         func_2E7DD0
    ctx->pc = 0x2ED48Cu;
    SET_GPR_U32(ctx, 31, 0x2ED494u);
    ctx->pc = 0x2ED490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED48Cu;
    // 0x2ed490: 0xa3a00018  sb          $zero, 0x18($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E7DD0u, 0x2ED48Cu, 0x2ED494u)) {
        return;
    }
    ctx->pc = 0x2ED494u;
label_2ed494:
    // 0x2ed494: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2ed494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2ed498: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2ed498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2ed49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4a0: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x2ed4a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17));
label_2ed4a4:
    // 0x2ed4a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ed4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed4a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ed4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed4ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ed4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4B4u;
        // 0x2ed4b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED4BCu;
    // 0x2ed4bc: 0x0  nop
    ctx->pc = 0x2ed4bcu;
    // NOP
    ctx->pc = 0x2ed4c0u;
}
