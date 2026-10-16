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

// Function: sub_002A1758
// Address: 0x2a1758 - 0x2a1970
void sub_002A1758_0x2a1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1758_0x2a1758");
#endif

    switch (ctx->pc) {
        case 0x2a17e8u: goto label_2a17e8;
        case 0x2a1860u: goto label_2a1860;
        case 0x2a188cu: goto label_2a188c;
        case 0x2a18a8u: goto label_2a18a8;
        case 0x2a1920u: goto label_2a1920;
        default: break;
    }

    ctx->pc = 0x2a1758u;

    // 0x2a1758: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a1758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a175c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2a175cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1760: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a1764: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a1768: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a1768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a176c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a1770: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a1774: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1778: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a177c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1784: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x2a1784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2a1788: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2a1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a178c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2a178cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a1790: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2A1790u;
    {
        const bool branch_taken_0x2a1790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1790u;
        // 0x2a1794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1790) {
            ctx->pc = 0x2A1944u;
            goto label_2a1944;
        }
    }
    ctx->pc = 0x2A1798u;
    // 0x2a1798: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a179c: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x2a179cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x2a17a0: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x2a17a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a17a4: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x2a17a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x2a17a8: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x2a17a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2a17ac: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2a17acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2a17b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a17b4: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x2a17b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a17b8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2a17b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a17c0: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x2a17c0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x2a17c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A17C4u;
    {
        const bool branch_taken_0x2a17c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a17c4) {
            ctx->pc = 0x2A17C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A17C4u;
            // 0x2a17c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A17CCu;
            goto label_2a17cc;
        }
    }
    ctx->pc = 0x2A17CCu;
label_2a17cc:
    // 0x2a17cc: 0xa812  mflo        $s5
    ctx->pc = 0x2a17ccu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x2a17d0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2a17d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17d4: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A17D4u;
    {
        const bool branch_taken_0x2a17d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17D4u;
        // 0x2a17d8: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17d4) {
            ctx->pc = 0x2A1880u;
            goto label_2a1880;
        }
    }
    ctx->pc = 0x2A17DCu;
    // 0x2a17dc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a17dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a17e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17e4: 0x0  nop
    ctx->pc = 0x2a17e4u;
    // NOP
label_2a17e8:
    // 0x2a17e8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2a17e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a17ec: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x2a17ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a17f0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a17f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a17f4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2a17f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a17f8: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x2a17f8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2a17fc: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x2a17fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a1800: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2a1800u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2a1804: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x2a1804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1808: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2a1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a180c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2a180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a1810: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2a1810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2a1814: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2a1814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2a1818: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a1818u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a181c: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x2a181cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a1820: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2a1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2a1824: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x2a1824u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2a1828: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x2a1828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2a182c: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x2a182cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2a1830: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a1834: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x2a1834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2a1838: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x2a1838u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a183c: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x2a183cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a1840: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x2a1840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2a1844: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x2a1844u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a1848: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A1848u;
    {
        const bool branch_taken_0x2a1848 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1848u;
        // 0x2a184c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1848) {
            ctx->pc = 0x2A17E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a17e8;
        }
    }
    ctx->pc = 0x2A1850u;
    // 0x2a1850: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1850u;
    {
        const bool branch_taken_0x2a1850 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1850u;
        // 0x2a1854: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1850) {
            ctx->pc = 0x2A1884u;
            goto label_2a1884;
        }
    }
    ctx->pc = 0x2A1858u;
    // 0x2a1858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1858u;
    {
        const bool branch_taken_0x2a1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1858u;
        // 0x2a185c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1858) {
            ctx->pc = 0x2A1864u;
            goto label_2a1864;
        }
    }
    ctx->pc = 0x2A1860u;
label_2a1860:
    // 0x2a1860: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2a1864:
    // 0x2a1864: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x2a1864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2a1868: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1868u;
    {
        const bool branch_taken_0x2a1868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1868) {
            ctx->pc = 0x2A186Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1868u;
            // 0x2a186c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1880u;
            goto label_2a1880;
        }
    }
    ctx->pc = 0x2A1870u;
    // 0x2a1870: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1874: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1874u;
    {
        const bool branch_taken_0x2a1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1874u;
        // 0x2a1878: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1874) {
            ctx->pc = 0x2A1860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1860;
        }
    }
    ctx->pc = 0x2A187Cu;
    // 0x2a187c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2a187cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2a1880:
    // 0x2a1880: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2a1880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a1884:
    // 0x2a1884: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A1884u;
    SET_GPR_U32(ctx, 31, 0x2A188Cu);
    ctx->pc = 0x2A1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1884u;
    // 0x2a1888: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A1884u, 0x2A188Cu)) {
        return;
    }
    ctx->pc = 0x2A188Cu;
label_2a188c:
    // 0x2a188c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A188Cu;
    {
        const bool branch_taken_0x2a188c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A188Cu;
        // 0x2a1890: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a188c) {
            ctx->pc = 0x2A1940u;
            goto label_2a1940;
        }
    }
    ctx->pc = 0x2A1894u;
    // 0x2a1894: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x2a1894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a1898: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a1898u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a189c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a189cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18a0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2a18a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18a4: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x2a18a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a18a8:
    // 0x2a18a8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2a18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a18ac: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2a18acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a18b0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a18b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a18b4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2a18b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a18b8: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x2a18b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2a18bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a18c0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2a18c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a18c4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2a18c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a18c8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2a18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2a18cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a18d0: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x2a18d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a18d4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2a18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2a18d8: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x2a18d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2a18dc: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2a18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2a18e0: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x2a18e0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2a18e4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2a18e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a18e8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2a18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2a18ec: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x2a18ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a18f0: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x2a18f0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a18f4: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x2a18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2a18f8: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x2a18f8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a18fc: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x2a18fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2a1900: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A1900u;
    {
        const bool branch_taken_0x2a1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1900u;
        // 0x2a1904: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1900) {
            ctx->pc = 0x2A18A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a18a8;
        }
    }
    ctx->pc = 0x2A1908u;
    // 0x2a1908: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2a190c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1910: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1910u;
    {
        const bool branch_taken_0x2a1910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1910u;
        // 0x2a1914: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1910) {
            ctx->pc = 0x2A1944u;
            goto label_2a1944;
        }
    }
    ctx->pc = 0x2A1918u;
    // 0x2a1918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1918u;
    {
        const bool branch_taken_0x2a1918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1918u;
        // 0x2a191c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1918) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A1920u;
label_2a1920:
    // 0x2a1920: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2a1924:
    // 0x2a1924: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x2a1924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2a1928: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1928u;
    {
        const bool branch_taken_0x2a1928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1928) {
            ctx->pc = 0x2A192Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1928u;
            // 0x2a192c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1940u;
            goto label_2a1940;
        }
    }
    ctx->pc = 0x2A1930u;
    // 0x2a1930: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1934: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1934u;
    {
        const bool branch_taken_0x2a1934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1934) {
            ctx->pc = 0x2A1938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1934u;
            // 0x2a1938: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1920;
        }
    }
    ctx->pc = 0x2A193Cu;
    // 0x2a193c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2a193cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2a1940:
    // 0x2a1940: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a1940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a1944:
    // 0x2a1944: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a1944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1948: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a1948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a194c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a194cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1950: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a1950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1954: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1958: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a195c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a195cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1964: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1964u;
        // 0x2a1968: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A196Cu;
    // 0x2a196c: 0x0  nop
    ctx->pc = 0x2a196cu;
    // NOP
    ctx->pc = 0x2a1970u;
}
