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

// Function: sub_0015C818
// Address: 0x15c818 - 0x15cae0
void sub_0015C818_0x15c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C818_0x15c818");
#endif

    switch (ctx->pc) {
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c940u: goto label_15c940;
        case 0x15ca24u: goto label_15ca24;
        case 0x15caa8u: goto label_15caa8;
        default: break;
    }

    ctx->pc = 0x15c818u;

    // 0x15c818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15c81c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15c820: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15c824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c828: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15c82c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x15c82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15c830: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x15c830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15c834: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15c838: 0x8202a  slt         $a0, $zero, $t0
    ctx->pc = 0x15c838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x15c83c: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x15c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x15c840: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x15c840u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15c844: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c848: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15c848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c84c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15c84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c850: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C850u;
    {
        const bool branch_taken_0x15c850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C850u;
        // 0x15c854: 0x92290030  lbu         $t1, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c850) {
            ctx->pc = 0x15C86Cu;
            goto label_15c86c;
        }
    }
    ctx->pc = 0x15C858u;
    // 0x15c858: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x15c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x15c85c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x15c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15c860: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x15c860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C864u;
    {
        const bool branch_taken_0x15c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C864u;
        // 0x15c868: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c864) {
            ctx->pc = 0x15C874u;
            goto label_15c874;
        }
    }
    ctx->pc = 0x15C86Cu;
label_15c86c:
    // 0x15c86c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x15c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15c870: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15c874:
    // 0x15c874: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15c878: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15c87c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15c880: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15c880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c884: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x15c884u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x15c888: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x15c888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c88c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c890: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15c894: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x15c894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15c898: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x15c898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15c89c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c8a0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15c8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15c8a4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15c8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15c8a8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x15c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x15c8ac: 0x6bab0007  ldl         $t3, 0x7($sp)
    ctx->pc = 0x15c8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x15c8b0: 0x6fab0000  ldr         $t3, 0x0($sp)
    ctx->pc = 0x15c8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x15c8b4: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x15c8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c8b8: 0xb3ab0017  sdl         $t3, 0x17($sp)
    ctx->pc = 0x15c8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15c8bc: 0xb7ab0010  sdr         $t3, 0x10($sp)
    ctx->pc = 0x15c8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15c8c0: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x15c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x15c8c4: 0x19000050  blez        $t0, . + 4 + (0x50 << 2)
    ctx->pc = 0x15C8C4u;
    {
        const bool branch_taken_0x15c8c4 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x15C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8C4u;
        // 0x15c8c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8c4) {
            ctx->pc = 0x15CA08u;
            goto label_15ca08;
        }
    }
    ctx->pc = 0x15C8CCu;
    // 0x15c8cc: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15c8d0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15c8d4: 0x0  nop
    ctx->pc = 0x15c8d4u;
    // NOP
label_15c8d8:
    // 0x15c8d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15c8dc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15c8e0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x15c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c8e4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x15c8e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15c8e8: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x15c8e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7));
    // 0x15c8ec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15c8f0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15c8f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c8f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C8F4u;
    {
        const bool branch_taken_0x15c8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8f4) {
            ctx->pc = 0x15C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C8F4u;
            // 0x15c8f8: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C910u;
            goto label_15c910;
        }
    }
    ctx->pc = 0x15C8FCu;
    // 0x15c8fc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15c900: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x15c904: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15c908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C908u;
    {
        const bool branch_taken_0x15c908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C908u;
        // 0x15c90c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c908) {
            ctx->pc = 0x15C914u;
            goto label_15c914;
        }
    }
    ctx->pc = 0x15C910u;
label_15c910:
    // 0x15c910: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c914:
    // 0x15c914: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15c918: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15c91c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15c920: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x15c920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15c924: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x15c924u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x15c928: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x15c928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c92c: 0x11200033  beqz        $t1, . + 4 + (0x33 << 2)
    ctx->pc = 0x15C92Cu;
    {
        const bool branch_taken_0x15c92c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C92Cu;
        // 0x15c930: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c92c) {
            ctx->pc = 0x15C9FCu;
            goto label_15c9fc;
        }
    }
    ctx->pc = 0x15C934u;
    // 0x15c934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c938: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x15c938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c93c: 0x0  nop
    ctx->pc = 0x15c93cu;
    // NOP
label_15c940:
    // 0x15c940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c944: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15c948: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x15c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x15c94c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x15c94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x15c950: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c954: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x15c954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15c958: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x15c958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15c95c: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x15c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x15c960: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c964: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c96c: 0x0  nop
    ctx->pc = 0x15c96cu;
    // NOP
    // 0x15c970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C970u;
    {
        const bool branch_taken_0x15c970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c970) {
            ctx->pc = 0x15C974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C970u;
            // 0x15c974: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C978u;
            goto label_15c978;
        }
    }
    ctx->pc = 0x15C978u;
label_15c978:
    // 0x15c978: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x15c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c97c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c984: 0x0  nop
    ctx->pc = 0x15c984u;
    // NOP
    // 0x15c988: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C988u;
    {
        const bool branch_taken_0x15c988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c988) {
            ctx->pc = 0x15C98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C988u;
            // 0x15c98c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C990u;
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C990u;
label_15c990:
    // 0x15c990: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c994: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15c994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c99c: 0x0  nop
    ctx->pc = 0x15c99cu;
    // NOP
    // 0x15c9a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C9A0u;
    {
        const bool branch_taken_0x15c9a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c9a0) {
            ctx->pc = 0x15C9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C9A0u;
            // 0x15c9a4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C9A8u;
            goto label_15c9a8;
        }
    }
    ctx->pc = 0x15C9A8u;
label_15c9a8:
    // 0x15c9a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c9ac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c9b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c9b4: 0x0  nop
    ctx->pc = 0x15c9b4u;
    // NOP
    // 0x15c9b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C9B8u;
    {
        const bool branch_taken_0x15c9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c9b8) {
            ctx->pc = 0x15C9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C9B8u;
            // 0x15c9bc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C9C0u;
            goto label_15c9c0;
        }
    }
    ctx->pc = 0x15C9C0u;
label_15c9c0:
    // 0x15c9c0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x15c9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c9c4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c9c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c9cc: 0x0  nop
    ctx->pc = 0x15c9ccu;
    // NOP
    // 0x15c9d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C9D0u;
    {
        const bool branch_taken_0x15c9d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c9d0) {
            ctx->pc = 0x15C9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C9D0u;
            // 0x15c9d4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C9D8u;
            goto label_15c9d8;
        }
    }
    ctx->pc = 0x15C9D8u;
label_15c9d8:
    // 0x15c9d8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c9dc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c9e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c9e4: 0x0  nop
    ctx->pc = 0x15c9e4u;
    // NOP
    // 0x15c9e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15C9E8u;
    {
        const bool branch_taken_0x15c9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c9e8) {
            ctx->pc = 0x15C9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C9E8u;
            // 0x15c9ec: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C9F0u;
            goto label_15c9f0;
        }
    }
    ctx->pc = 0x15C9F0u;
label_15c9f0:
    // 0x15c9f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15c9f4: 0x14a0ffd2  bnez        $a1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x15C9F4u;
    {
        const bool branch_taken_0x15c9f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F4u;
        // 0x15c9f8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9f4) {
            ctx->pc = 0x15C940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c940;
        }
    }
    ctx->pc = 0x15C9FCu;
label_15c9fc:
    // 0x15c9fc: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x15c9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x15ca00: 0x5440ffb5  bnel        $v0, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x15CA00u;
    {
        const bool branch_taken_0x15ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca00) {
            ctx->pc = 0x15CA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CA00u;
            // 0x15ca04: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c8d8;
        }
    }
    ctx->pc = 0x15CA08u;
label_15ca08:
    // 0x15ca08: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x15ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x15ca0c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x15ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x15ca10: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ca14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CA14u;
    {
        const bool branch_taken_0x15ca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA14u;
        // 0x15ca18: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca14) {
            ctx->pc = 0x15CA28u;
            goto label_15ca28;
        }
    }
    ctx->pc = 0x15CA1Cu;
    // 0x15ca1c: 0xc0952e0  jal         func_254B80
    ctx->pc = 0x15CA1Cu;
    SET_GPR_U32(ctx, 31, 0x15CA24u);
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x15CA1Cu, 0x15CA24u)) {
        return;
    }
    ctx->pc = 0x15CA24u;
label_15ca24:
    // 0x15ca24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ca28:
    // 0x15ca28: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x15ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ca2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15ca2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15ca30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15ca30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15ca34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15ca34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ca38: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x15ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x15ca3c: 0x2450001c  addiu       $s0, $v0, 0x1C
    ctx->pc = 0x15ca3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x15ca40: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15ca40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15ca44: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x15ca44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x15ca48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x15ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca4c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x15ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ca50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15ca50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15ca54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15ca54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15ca58: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15ca5c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x15ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ca60: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15ca64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15ca68: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15ca68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15ca6c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x15ca6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15ca70: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ca74: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x15ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca78: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x15ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ca7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15ca7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15ca80: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x15ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ca84: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x15ca84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15ca88: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15ca8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15ca90: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x15ca90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15ca94: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca98: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x15ca98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15ca9c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x15ca9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15caa0: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15CAA0u;
    SET_GPR_U32(ctx, 31, 0x15CAA8u);
    ctx->pc = 0x15CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAA0u;
    // 0x15caa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15CAA0u, 0x15CAA8u)) {
        return;
    }
    ctx->pc = 0x15CAA8u;
label_15caa8:
    // 0x15caa8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x15caa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15caac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15caacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15cab0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x15cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x15cab4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15cab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cab8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x15cab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x15cabc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15cac0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x15cac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x15cac4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x15cac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15cac8: 0x3e00008  jr          $ra
    ctx->pc = 0x15CAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAC8u;
        // 0x15cacc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CAD0u;
    // 0x15cad0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cad4: 0x0  nop
    ctx->pc = 0x15cad4u;
    // NOP
    // 0x15cad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15cadc: 0x0  nop
    ctx->pc = 0x15cadcu;
    // NOP
    ctx->pc = 0x15cae0u;
}
