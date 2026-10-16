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

// Function: sub_002187F8
// Address: 0x2187f8 - 0x218a40
void sub_002187F8_0x2187f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002187F8_0x2187f8");
#endif

    switch (ctx->pc) {
        case 0x218868u: goto label_218868;
        case 0x2188ecu: goto label_2188ec;
        case 0x2188fcu: goto label_2188fc;
        case 0x21890cu: goto label_21890c;
        case 0x21891cu: goto label_21891c;
        case 0x218940u: goto label_218940;
        case 0x218964u: goto label_218964;
        case 0x218984u: goto label_218984;
        case 0x218998u: goto label_218998;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189b8u: goto label_2189b8;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189ecu: goto label_2189ec;
        case 0x2189fcu: goto label_2189fc;
        default: break;
    }

    ctx->pc = 0x2187f8u;

    // 0x2187f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2187fc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2187fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x218800: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x218800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x218804: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x218804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218808: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x218808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x21880c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x21880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x218810: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x218810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x218814: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x218814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x218818: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x218818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x21881c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x21881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x218820: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x218820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x218824: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218824u;
    {
        const bool branch_taken_0x218824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218824u;
        // 0x218828: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218824) {
            ctx->pc = 0x218838u;
            goto label_218838;
        }
    }
    ctx->pc = 0x21882Cu;
    // 0x21882c: 0x94a40084  lhu         $a0, 0x84($a1)
    ctx->pc = 0x21882cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x218830: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x218830u;
    {
        const bool branch_taken_0x218830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218830u;
        // 0x218834: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218830) {
            ctx->pc = 0x218840u;
            goto label_218840;
        }
    }
    ctx->pc = 0x218838u;
label_218838:
    // 0x218838: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x218838u;
    {
        const bool branch_taken_0x218838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218838u;
        // 0x21883c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218838) {
            ctx->pc = 0x218A0Cu;
            goto label_218a0c;
        }
    }
    ctx->pc = 0x218840u;
label_218840:
    // 0x218840: 0x8c6202b8  lw          $v0, 0x2B8($v1)
    ctx->pc = 0x218840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x218844: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x218844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x218848: 0xac6202b8  sw          $v0, 0x2B8($v1)
    ctx->pc = 0x218848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 696), GPR_U32(ctx, 2));
    // 0x21884c: 0x8cb70008  lw          $s7, 0x8($a1)
    ctx->pc = 0x21884cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x218850: 0x1080006d  beqz        $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x218850u;
    {
        const bool branch_taken_0x218850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x218854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218850u;
        // 0x218854: 0x8cb50004  lw          $s5, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218850) {
            ctx->pc = 0x218A08u;
            goto label_218a08;
        }
    }
    ctx->pc = 0x218858u;
    // 0x218858: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x218858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21885c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21885cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218860: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x218860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x218864: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x218864u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_218868:
    // 0x218868: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x218868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21886c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x218870: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x218870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x218874: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x218874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x218878: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x218878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x21887c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x21887cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x218880: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x218880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x218884: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x218884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x218888: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x218888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21888c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x21888cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218890: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x218890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x218894: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x218894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x218898: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x218898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21889c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x21889cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2188a0: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2188a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2188a4: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x2188a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2188a8: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x2188a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2188ac: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2188acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2188b0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2188b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2188b4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2188b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2188b8: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x2188b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x2188bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2188c0: 0x96a30002  lhu         $v1, 0x2($s5)
    ctx->pc = 0x2188c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2188c4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2188c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2188c8: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2188c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2188cc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2188ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2188d0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2188d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2188d4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2188d8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x2188d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2188dc: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x2188dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2188e0: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x2188e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x2188e4: 0xc0866ec  jal         func_219BB0
    ctx->pc = 0x2188E4u;
    SET_GPR_U32(ctx, 31, 0x2188ECu);
    ctx->pc = 0x2188E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188E4u;
    // 0x2188e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219BB0u, 0x2188E4u, 0x2188ECu)) {
        return;
    }
    ctx->pc = 0x2188ECu;
label_2188ec:
    // 0x2188ec: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2188f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2188f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188f4: 0xc0866ec  jal         func_219BB0
    ctx->pc = 0x2188F4u;
    SET_GPR_U32(ctx, 31, 0x2188FCu);
    ctx->pc = 0x2188F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188F4u;
    // 0x2188f8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219BB0u, 0x2188F4u, 0x2188FCu)) {
        return;
    }
    ctx->pc = 0x2188FCu;
label_2188fc:
    // 0x2188fc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2188fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x218900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x218900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218904: 0xc0866ec  jal         func_219BB0
    ctx->pc = 0x218904u;
    SET_GPR_U32(ctx, 31, 0x21890Cu);
    ctx->pc = 0x218908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218904u;
    // 0x218908: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219BB0u, 0x218904u, 0x21890Cu)) {
        return;
    }
    ctx->pc = 0x21890Cu;
label_21890c:
    // 0x21890c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x218910: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x218910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218914: 0xc086b44  jal         func_21AD10
    ctx->pc = 0x218914u;
    SET_GPR_U32(ctx, 31, 0x21891Cu);
    ctx->pc = 0x218918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218914u;
    // 0x218918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AD10u, 0x218914u, 0x21891Cu)) {
        return;
    }
    ctx->pc = 0x21891Cu;
label_21891c:
    // 0x21891c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x21891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x218920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x218920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218924: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x218924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218928: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x218928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21892c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x21892cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x218930: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x218930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218934: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x218934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218938: 0xc086b44  jal         func_21AD10
    ctx->pc = 0x218938u;
    SET_GPR_U32(ctx, 31, 0x218940u);
    ctx->pc = 0x21893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218938u;
    // 0x21893c: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AD10u, 0x218938u, 0x218940u)) {
        return;
    }
    ctx->pc = 0x218940u;
label_218940:
    // 0x218940: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x218944: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x218944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218948: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x218948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21894c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x21894cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x218950: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x218950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218954: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x218954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218958: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x218958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x21895c: 0xc086b44  jal         func_21AD10
    ctx->pc = 0x21895Cu;
    SET_GPR_U32(ctx, 31, 0x218964u);
    ctx->pc = 0x218960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21895Cu;
    // 0x218960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AD10u, 0x21895Cu, 0x218964u)) {
        return;
    }
    ctx->pc = 0x218964u;
label_218964:
    // 0x218964: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x218964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218968: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x218968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21896c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x218970: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x218970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218974: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x218974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218978: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x218978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x21897c: 0xc086cb6  jal         func_21B2D8
    ctx->pc = 0x21897Cu;
    SET_GPR_U32(ctx, 31, 0x218984u);
    ctx->pc = 0x21B2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B2D8u, 0x21897Cu, 0x218984u)) {
        return;
    }
    ctx->pc = 0x218984u;
label_218984:
    // 0x218984: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x218984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218988: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x218988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21898c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21898cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218990: 0xc086b88  jal         func_21AE20
    ctx->pc = 0x218990u;
    SET_GPR_U32(ctx, 31, 0x218998u);
    ctx->pc = 0x218994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218990u;
    // 0x218994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AE20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AE20u, 0x218990u, 0x218998u)) {
        return;
    }
    ctx->pc = 0x218998u;
label_218998:
    // 0x218998: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x218998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21899c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21899cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189a0: 0xc086b88  jal         func_21AE20
    ctx->pc = 0x2189A0u;
    SET_GPR_U32(ctx, 31, 0x2189A8u);
    ctx->pc = 0x2189A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189A0u;
    // 0x2189a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AE20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AE20u, 0x2189A0u, 0x2189A8u)) {
        return;
    }
    ctx->pc = 0x2189A8u;
label_2189a8:
    // 0x2189a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2189a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189ac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2189acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189b0: 0xc086b88  jal         func_21AE20
    ctx->pc = 0x2189B0u;
    SET_GPR_U32(ctx, 31, 0x2189B8u);
    ctx->pc = 0x2189B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189B0u;
    // 0x2189b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AE20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AE20u, 0x2189B0u, 0x2189B8u)) {
        return;
    }
    ctx->pc = 0x2189B8u;
label_2189b8:
    // 0x2189b8: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x2189b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x2189bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2189bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189c0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2189c4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2189c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2189c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2189c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2189cc: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2189ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x2189d0: 0xc086742  jal         func_219D08
    ctx->pc = 0x2189D0u;
    SET_GPR_U32(ctx, 31, 0x2189D8u);
    ctx->pc = 0x2189D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189D0u;
    // 0x2189d4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219D08u, 0x2189D0u, 0x2189D8u)) {
        return;
    }
    ctx->pc = 0x2189D8u;
label_2189d8:
    // 0x2189d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2189D8u;
    {
        const bool branch_taken_0x2189d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2189d8) {
            ctx->pc = 0x2189F4u;
            goto label_2189f4;
        }
    }
    ctx->pc = 0x2189E0u;
    // 0x2189e0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2189e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2189e4: 0xc086bea  jal         func_21AFA8
    ctx->pc = 0x2189E4u;
    SET_GPR_U32(ctx, 31, 0x2189ECu);
    ctx->pc = 0x2189E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189E4u;
    // 0x2189e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AFA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AFA8u, 0x2189E4u, 0x2189ECu)) {
        return;
    }
    ctx->pc = 0x2189ECu;
label_2189ec:
    // 0x2189ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2189ECu;
    {
        const bool branch_taken_0x2189ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189ECu;
        // 0x2189f0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189ec) {
            ctx->pc = 0x218A00u;
            goto label_218a00;
        }
    }
    ctx->pc = 0x2189F4u;
label_2189f4:
    // 0x2189f4: 0xc086cc6  jal         func_21B318
    ctx->pc = 0x2189F4u;
    SET_GPR_U32(ctx, 31, 0x2189FCu);
    ctx->pc = 0x2189F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189F4u;
    // 0x2189f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B318u, 0x2189F4u, 0x2189FCu)) {
        return;
    }
    ctx->pc = 0x2189FCu;
label_2189fc:
    // 0x2189fc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_218a00:
    // 0x218a00: 0x16c0ff99  bnez        $s6, . + 4 + (-0x67 << 2)
    ctx->pc = 0x218A00u;
    {
        const bool branch_taken_0x218a00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A00u;
        // 0x218a04: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a00) {
            ctx->pc = 0x218868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218868;
        }
    }
    ctx->pc = 0x218A08u;
label_218a08:
    // 0x218a08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a0c:
    // 0x218a0c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x218a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x218a10: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x218a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x218a14: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x218a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x218a18: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x218a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x218a1c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x218a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x218a20: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x218a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x218a24: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x218a24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x218a28: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x218a28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218a2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x218a2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218a30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x218a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218a34: 0x3e00008  jr          $ra
    ctx->pc = 0x218A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A34u;
        // 0x218a38: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218A3Cu;
    // 0x218a3c: 0x0  nop
    ctx->pc = 0x218a3cu;
    // NOP
    ctx->pc = 0x218a40u;
}
