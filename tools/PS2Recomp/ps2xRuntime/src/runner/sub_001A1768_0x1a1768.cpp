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

// Function: sub_001A1768
// Address: 0x1a1768 - 0x1a1898
void sub_001A1768_0x1a1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1768_0x1a1768");
#endif

    switch (ctx->pc) {
        case 0x1a1834u: goto label_1a1834;
        case 0x1a1854u: goto label_1a1854;
        case 0x1a187cu: goto label_1a187c;
        default: break;
    }

    ctx->pc = 0x1a1768u;

    // 0x1a1768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a176c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1770: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a1770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a1774: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a1774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a1778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a177c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1780: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a1780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1788: 0x8e031340  lw          $v1, 0x1340($s0)
    ctx->pc = 0x1a1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x1a178c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A178Cu;
    {
        const bool branch_taken_0x1a178c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A178Cu;
        // 0x1a1790: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a178c) {
            ctx->pc = 0x1A1848u;
            goto label_1a1848;
        }
    }
    ctx->pc = 0x1A1794u;
    // 0x1a1794: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x1a1794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x1a1798: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A1798u;
    {
        const bool branch_taken_0x1a1798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1798u;
        // 0x1a179c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1798) {
            ctx->pc = 0x1A1848u;
            goto label_1a1848;
        }
    }
    ctx->pc = 0x1A17A0u;
    // 0x1a17a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a17a4: 0x8e041390  lw          $a0, 0x1390($s0)
    ctx->pc = 0x1a17a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5008)));
    // 0x1a17a8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A17A8u;
    {
        const bool branch_taken_0x1a17a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17A8u;
        // 0x1a17ac: 0x8c452aa8  lw          $a1, 0x2AA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17a8) {
            ctx->pc = 0x1A17D0u;
            goto label_1a17d0;
        }
    }
    ctx->pc = 0x1A17B0u;
    // 0x1a17b0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1a17b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a17b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A17B4u;
    {
        const bool branch_taken_0x1a17b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a17b4) {
            ctx->pc = 0x1A17B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A17B4u;
            // 0x1a17b8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A17D4u;
            goto label_1a17d4;
        }
    }
    ctx->pc = 0x1A17BCu;
    // 0x1a17bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a17c0: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A17C0u;
    {
        const bool branch_taken_0x1a17c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a17c0) {
            ctx->pc = 0x1A17C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A17C0u;
            // 0x1a17c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A17D4u;
            goto label_1a17d4;
        }
    }
    ctx->pc = 0x1A17C8u;
    // 0x1a17c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A17C8u;
    {
        const bool branch_taken_0x1a17c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C8u;
        // 0x1a17cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17c8) {
            ctx->pc = 0x1A17D4u;
            goto label_1a17d4;
        }
    }
    ctx->pc = 0x1A17D0u;
label_1a17d0:
    // 0x1a17d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a17d4:
    // 0x1a17d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a17d8: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1a17dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a17e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a17e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a17e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a17e8: 0xc600134c  lwc1        $f0, 0x134C($s0)
    ctx->pc = 0x1a17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a17ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a17ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a17f0: 0x0  nop
    ctx->pc = 0x1a17f0u;
    // NOP
    // 0x1a17f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A17F4u;
    {
        const bool branch_taken_0x1a17f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17F4u;
        // 0x1a17f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17f4) {
            ctx->pc = 0x1A1800u;
            goto label_1a1800;
        }
    }
    ctx->pc = 0x1A17FCu;
    // 0x1a17fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a17fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1800:
    // 0x1a1800: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1800u;
    {
        const bool branch_taken_0x1a1800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1800u;
        // 0x1a1804: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1800) {
            ctx->pc = 0x1A1838u;
            goto label_1a1838;
        }
    }
    ctx->pc = 0x1A1808u;
    // 0x1a1808: 0x8e031390  lw          $v1, 0x1390($s0)
    ctx->pc = 0x1a1808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5008)));
    // 0x1a180c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1a180cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1810: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1810u;
    {
        const bool branch_taken_0x1a1810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1810u;
        // 0x1a1814: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1810) {
            ctx->pc = 0x1A1834u;
            goto label_1a1834;
        }
    }
    ctx->pc = 0x1A1818u;
    // 0x1a1818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a181c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a181cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a1820: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1a1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a1824: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1828: 0xc46d12dc  lwc1        $f13, 0x12DC($v1)
    ctx->pc = 0x1a1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a182c: 0xc0688dc  jal         func_1A2370
    ctx->pc = 0x1A182Cu;
    SET_GPR_U32(ctx, 31, 0x1A1834u);
    ctx->pc = 0x1A1830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A182Cu;
    // 0x1a1830: 0xc44c12d8  lwc1        $f12, 0x12D8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2370u, 0x1A182Cu, 0x1A1834u)) {
        return;
    }
    ctx->pc = 0x1A1834u;
label_1a1834:
    // 0x1a1834: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1838:
    // 0x1a1838: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x1a1838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x1a183c: 0xae031390  sw          $v1, 0x1390($s0)
    ctx->pc = 0x1a183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 3));
    // 0x1a1840: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1a1840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1a1844: 0xac40909c  sw          $zero, -0x6F64($v0)
    ctx->pc = 0x1a1844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x33909Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33909Cu, _value); } while (0);
label_1a1848:
    // 0x1a1848: 0xae111340  sw          $s1, 0x1340($s0)
    ctx->pc = 0x1a1848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4928), GPR_U32(ctx, 17));
    // 0x1a184c: 0xc0689a6  jal         func_1A2698
    ctx->pc = 0x1A184Cu;
    SET_GPR_U32(ctx, 31, 0x1A1854u);
    ctx->pc = 0x1A1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A184Cu;
    // 0x1a1850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2698u, 0x1A184Cu, 0x1A1854u)) {
        return;
    }
    ctx->pc = 0x1A1854u;
label_1a1854:
    // 0x1a1854: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1854u;
    {
        const bool branch_taken_0x1a1854 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1854u;
        // 0x1a1858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1854) {
            ctx->pc = 0x1A187Cu;
            goto label_1a187c;
        }
    }
    ctx->pc = 0x1A185Cu;
    // 0x1a185c: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1a185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a1860: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1a1860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a1864: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1a1864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a1868: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a1868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a186c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1874: 0xc06896a  jal         func_1A25A8
    ctx->pc = 0x1A1874u;
    SET_GPR_U32(ctx, 31, 0x1A187Cu);
    ctx->pc = 0x1A1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1874u;
    // 0x1a1878: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A25A8u, 0x1A1874u, 0x1A187Cu)) {
        return;
    }
    ctx->pc = 0x1A187Cu;
label_1a187c:
    // 0x1a187c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1880: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a1880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a188c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A188Cu;
        // 0x1a1890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1894u;
    // 0x1a1894: 0x0  nop
    ctx->pc = 0x1a1894u;
    // NOP
    ctx->pc = 0x1a1898u;
}
