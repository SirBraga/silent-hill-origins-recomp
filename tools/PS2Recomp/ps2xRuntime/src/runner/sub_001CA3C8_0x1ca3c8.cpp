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

// Function: sub_001CA3C8
// Address: 0x1ca3c8 - 0x1ca548
void sub_001CA3C8_0x1ca3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA3C8_0x1ca3c8");
#endif

    switch (ctx->pc) {
        case 0x1ca484u: goto label_1ca484;
        case 0x1ca518u: goto label_1ca518;
        default: break;
    }

    ctx->pc = 0x1ca3c8u;

    // 0x1ca3c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ca3cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ca3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ca3d0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1ca3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ca3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ca3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ca3dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ca3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ca3e0: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x1ca3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x1ca3e4: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1CA3E4u;
    {
        const bool branch_taken_0x1ca3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3E4u;
        // 0x1ca3e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3e4) {
            ctx->pc = 0x1CA530u;
            goto label_1ca530;
        }
    }
    ctx->pc = 0x1CA3ECu;
    // 0x1ca3ec: 0xc6000420  lwc1        $f0, 0x420($s0)
    ctx->pc = 0x1ca3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3f0: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x1ca3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x1ca3f4: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x1ca3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1ca3f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA3F8u;
    {
        const bool branch_taken_0x1ca3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3F8u;
        // 0x1ca3fc: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3f8) {
            ctx->pc = 0x1CA40Cu;
            goto label_1ca40c;
        }
    }
    ctx->pc = 0x1CA400u;
    // 0x1ca400: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA404u;
    {
        const bool branch_taken_0x1ca404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA404u;
        // 0x1ca408: 0x2443f980  addiu       $v1, $v0, -0x680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca404) {
            ctx->pc = 0x1CA414u;
            goto label_1ca414;
        }
    }
    ctx->pc = 0x1CA40Cu;
label_1ca40c:
    // 0x1ca40c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca410: 0x2443f988  addiu       $v1, $v0, -0x678
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965640));
label_1ca414:
    // 0x1ca414: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x1ca414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1ca418: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x1ca418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x1ca41c: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x1ca41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x1ca420: 0xaba50003  swl         $a1, 0x3($sp)
    ctx->pc = 0x1ca420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ca424: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA424u;
    {
        const bool branch_taken_0x1ca424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA424u;
        // 0x1ca428: 0xbba50000  swr         $a1, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca424) {
            ctx->pc = 0x1CA438u;
            goto label_1ca438;
        }
    }
    ctx->pc = 0x1CA42Cu;
    // 0x1ca42c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA430u;
    {
        const bool branch_taken_0x1ca430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA430u;
        // 0x1ca434: 0x2442f988  addiu       $v0, $v0, -0x678 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca430) {
            ctx->pc = 0x1CA440u;
            goto label_1ca440;
        }
    }
    ctx->pc = 0x1CA438u;
label_1ca438:
    // 0x1ca438: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca43c: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x1ca43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
label_1ca440:
    // 0x1ca440: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x1ca440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1ca444: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x1ca444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1ca448: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x1ca448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ca44c: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x1ca44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ca450: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ca450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ca454: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca458: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ca458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ca45c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1ca460: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ca460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ca464: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ca464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ca468: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca46c: 0x26070428  addiu       $a3, $s0, 0x428
    ctx->pc = 0x1ca46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1064));
    // 0x1ca470: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ca470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca474: 0xc60e0424  lwc1        $f14, 0x424($s0)
    ctx->pc = 0x1ca474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ca478: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ca478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ca47c: 0xc06d066  jal         func_1B4198
    ctx->pc = 0x1CA47Cu;
    SET_GPR_U32(ctx, 31, 0x1CA484u);
    ctx->pc = 0x1CA480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA47Cu;
    // 0x1ca480: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4198u, 0x1CA47Cu, 0x1CA484u)) {
        return;
    }
    ctx->pc = 0x1CA484u;
label_1ca484:
    // 0x1ca484: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1ca484u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca488: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x1ca488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1ca48c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA48Cu;
    {
        const bool branch_taken_0x1ca48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48Cu;
        // 0x1ca490: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48c) {
            ctx->pc = 0x1CA4A0u;
            goto label_1ca4a0;
        }
    }
    ctx->pc = 0x1CA494u;
    // 0x1ca494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA498u;
    {
        const bool branch_taken_0x1ca498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA498u;
        // 0x1ca49c: 0x2443f990  addiu       $v1, $v0, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca498) {
            ctx->pc = 0x1CA4A8u;
            goto label_1ca4a8;
        }
    }
    ctx->pc = 0x1CA4A0u;
label_1ca4a0:
    // 0x1ca4a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca4a4: 0x2443f998  addiu       $v1, $v0, -0x668
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965656));
label_1ca4a8:
    // 0x1ca4a8: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x1ca4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1ca4ac: 0x88680003  lwl         $t0, 0x3($v1)
    ctx->pc = 0x1ca4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1ca4b0: 0x98680000  lwr         $t0, 0x0($v1)
    ctx->pc = 0x1ca4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1ca4b4: 0xaba80003  swl         $t0, 0x3($sp)
    ctx->pc = 0x1ca4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ca4b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA4B8u;
    {
        const bool branch_taken_0x1ca4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4B8u;
        // 0x1ca4bc: 0xbba80000  swr         $t0, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4b8) {
            ctx->pc = 0x1CA4CCu;
            goto label_1ca4cc;
        }
    }
    ctx->pc = 0x1CA4C0u;
    // 0x1ca4c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca4c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA4C4u;
    {
        const bool branch_taken_0x1ca4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4C4u;
        // 0x1ca4c8: 0x2442f998  addiu       $v0, $v0, -0x668 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4c4) {
            ctx->pc = 0x1CA4D4u;
            goto label_1ca4d4;
        }
    }
    ctx->pc = 0x1CA4CCu;
label_1ca4cc:
    // 0x1ca4cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca4d0: 0x2442f990  addiu       $v0, $v0, -0x670
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
label_1ca4d4:
    // 0x1ca4d4: 0x88480003  lwl         $t0, 0x3($v0)
    ctx->pc = 0x1ca4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1ca4d8: 0x98480000  lwr         $t0, 0x0($v0)
    ctx->pc = 0x1ca4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1ca4dc: 0xaba80023  swl         $t0, 0x23($sp)
    ctx->pc = 0x1ca4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ca4e0: 0xbba80020  swr         $t0, 0x20($sp)
    ctx->pc = 0x1ca4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ca4e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ca4e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ca4e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ca4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ca4f0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1ca4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1ca4f4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ca4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ca4f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ca4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ca4fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ca4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca500: 0x2607042c  addiu       $a3, $s0, 0x42C
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1068));
    // 0x1ca504: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1ca504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca508: 0xc60e0424  lwc1        $f14, 0x424($s0)
    ctx->pc = 0x1ca508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ca50c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ca50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ca510: 0xc06d066  jal         func_1B4198
    ctx->pc = 0x1CA510u;
    SET_GPR_U32(ctx, 31, 0x1CA518u);
    ctx->pc = 0x1CA514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA510u;
    // 0x1ca514: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4198u, 0x1CA510u, 0x1CA518u)) {
        return;
    }
    ctx->pc = 0x1CA518u;
label_1ca518:
    // 0x1ca518: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA518u;
    {
        const bool branch_taken_0x1ca518 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca518) {
            ctx->pc = 0x1CA51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA518u;
            // 0x1ca51c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA534u;
            goto label_1ca534;
        }
    }
    ctx->pc = 0x1CA520u;
    // 0x1ca520: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x1ca520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1ca524: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1ca524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x1ca528: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ca528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ca52c: 0xae020418  sw          $v0, 0x418($s0)
    ctx->pc = 0x1ca52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
label_1ca530:
    // 0x1ca530: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ca530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ca534:
    // 0x1ca534: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ca534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ca538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca53c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1ca53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca540: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA540u;
        // 0x1ca544: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA548u;
}
