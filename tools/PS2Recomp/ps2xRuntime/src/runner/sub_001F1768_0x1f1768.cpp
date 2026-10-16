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

// Function: sub_001F1768
// Address: 0x1f1768 - 0x1f18b8
void sub_001F1768_0x1f1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1768_0x1f1768");
#endif

    switch (ctx->pc) {
        case 0x1f1790u: goto label_1f1790;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f17d8u: goto label_1f17d8;
        case 0x1f1820u: goto label_1f1820;
        case 0x1f1830u: goto label_1f1830;
        case 0x1f1868u: goto label_1f1868;
        default: break;
    }

    ctx->pc = 0x1f1768u;

    // 0x1f1768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f176c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f1770: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f1770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f1774: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f177c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f1780: 0x8e51271c  lw          $s1, 0x271C($s2)
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10012)));
    // 0x1f1784: 0x52200022  beql        $s1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F1784u;
    {
        const bool branch_taken_0x1f1784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1784) {
            ctx->pc = 0x1F1788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1784u;
            // 0x1f1788: 0x8e512720  lw          $s1, 0x2720($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1810u;
            goto label_1f1810;
        }
    }
    ctx->pc = 0x1F178Cu;
    // 0x1f178c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f178cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1790:
    // 0x1f1790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1794: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1f1794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f1798: 0xc07c8f4  jal         func_1F23D0
    ctx->pc = 0x1F1798u;
    SET_GPR_U32(ctx, 31, 0x1F17A0u);
    ctx->pc = 0x1F179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1798u;
    // 0x1f179c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F23D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F23D0u, 0x1F1798u, 0x1F17A0u)) {
        return;
    }
    ctx->pc = 0x1F17A0u;
label_1f17a0:
    // 0x1f17a0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F17A0u;
    {
        const bool branch_taken_0x1f17a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f17a0) {
            ctx->pc = 0x1F1804u;
            goto label_1f1804;
        }
    }
    ctx->pc = 0x1F17A8u;
    // 0x1f17a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f17ac: 0x8c62271c  lw          $v0, 0x271C($v1)
    ctx->pc = 0x1f17acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10012)));
    // 0x1f17b0: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F17B0u;
    {
        const bool branch_taken_0x1f17b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f17b0) {
            ctx->pc = 0x1F17B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F17B0u;
            // 0x1f17b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F17C4u;
            goto label_1f17c4;
        }
    }
    ctx->pc = 0x1F17B8u;
    // 0x1f17b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f17bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F17BCu;
    {
        const bool branch_taken_0x1f17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17BCu;
        // 0x1f17c0: 0xac62271c  sw          $v0, 0x271C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17bc) {
            ctx->pc = 0x1F17F4u;
            goto label_1f17f4;
        }
    }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f17c8: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F17C8u;
    {
        const bool branch_taken_0x1f17c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17C8u;
        // 0x1f17cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17c8) {
            ctx->pc = 0x1F17F0u;
            goto label_1f17f0;
        }
    }
    ctx->pc = 0x1F17D0u;
    // 0x1f17d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f17d4: 0x0  nop
    ctx->pc = 0x1f17d4u;
    // NOP
label_1f17d8:
    // 0x1f17d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f17dc: 0x0  nop
    ctx->pc = 0x1f17dcu;
    // NOP
    // 0x1f17e0: 0x0  nop
    ctx->pc = 0x1f17e0u;
    // NOP
    // 0x1f17e4: 0x0  nop
    ctx->pc = 0x1f17e4u;
    // NOP
    // 0x1f17e8: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F17E8u;
    {
        const bool branch_taken_0x1f17e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f17e8) {
            ctx->pc = 0x1F17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F17E8u;
            // 0x1f17ec: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F17D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f17d8;
        }
    }
    ctx->pc = 0x1F17F0u;
label_1f17f0:
    // 0x1f17f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f17f4:
    // 0x1f17f4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1f17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f17f8: 0x8c620808  lw          $v0, 0x808($v1)
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x1f17fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f1800: 0xac700808  sw          $s0, 0x808($v1)
    ctx->pc = 0x1f1800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 16));
label_1f1804:
    // 0x1f1804: 0x1620ffe2  bnez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F1804u;
    {
        const bool branch_taken_0x1f1804 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1804u;
        // 0x1f1808: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1804) {
            ctx->pc = 0x1F1790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1790;
        }
    }
    ctx->pc = 0x1F180Cu;
    // 0x1f180c: 0x8e512720  lw          $s1, 0x2720($s2)
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10016)));
label_1f1810:
    // 0x1f1810: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1810u;
    {
        const bool branch_taken_0x1f1810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1810u;
        // 0x1f1814: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1810) {
            ctx->pc = 0x1F18A0u;
            goto label_1f18a0;
        }
    }
    ctx->pc = 0x1F1818u;
    // 0x1f1818: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f1818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f181c: 0x0  nop
    ctx->pc = 0x1f181cu;
    // NOP
label_1f1820:
    // 0x1f1820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1824: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1f1824u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f1828: 0xc07c908  jal         func_1F2420
    ctx->pc = 0x1F1828u;
    SET_GPR_U32(ctx, 31, 0x1F1830u);
    ctx->pc = 0x1F182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1828u;
    // 0x1f182c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2420u, 0x1F1828u, 0x1F1830u)) {
        return;
    }
    ctx->pc = 0x1F1830u;
label_1f1830:
    // 0x1f1830: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F1830u;
    {
        const bool branch_taken_0x1f1830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1830) {
            ctx->pc = 0x1F1894u;
            goto label_1f1894;
        }
    }
    ctx->pc = 0x1F1838u;
    // 0x1f1838: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f183c: 0x8c622720  lw          $v0, 0x2720($v1)
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10016)));
    // 0x1f1840: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1840u;
    {
        const bool branch_taken_0x1f1840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f1840) {
            ctx->pc = 0x1F1844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1840u;
            // 0x1f1844: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1854u;
            goto label_1f1854;
        }
    }
    ctx->pc = 0x1F1848u;
    // 0x1f1848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f184c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F184Cu;
    {
        const bool branch_taken_0x1f184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F184Cu;
        // 0x1f1850: 0xac622720  sw          $v0, 0x2720($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f184c) {
            ctx->pc = 0x1F1884u;
            goto label_1f1884;
        }
    }
    ctx->pc = 0x1F1854u;
label_1f1854:
    // 0x1f1854: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1858: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1858u;
    {
        const bool branch_taken_0x1f1858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1858u;
        // 0x1f185c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1858) {
            ctx->pc = 0x1F1880u;
            goto label_1f1880;
        }
    }
    ctx->pc = 0x1F1860u;
    // 0x1f1860: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1864: 0x0  nop
    ctx->pc = 0x1f1864u;
    // NOP
label_1f1868:
    // 0x1f1868: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f186c: 0x0  nop
    ctx->pc = 0x1f186cu;
    // NOP
    // 0x1f1870: 0x0  nop
    ctx->pc = 0x1f1870u;
    // NOP
    // 0x1f1874: 0x0  nop
    ctx->pc = 0x1f1874u;
    // NOP
    // 0x1f1878: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1878u;
    {
        const bool branch_taken_0x1f1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f1878) {
            ctx->pc = 0x1F187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1878u;
            // 0x1f187c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1868;
        }
    }
    ctx->pc = 0x1F1880u;
label_1f1880:
    // 0x1f1880: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f1880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f1884:
    // 0x1f1884: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f1888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f188c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f188cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f1890: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1f1890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1f1894:
    // 0x1f1894: 0x1620ffe2  bnez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F1894u;
    {
        const bool branch_taken_0x1f1894 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1894u;
        // 0x1f1898: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1894) {
            ctx->pc = 0x1F1820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1820;
        }
    }
    ctx->pc = 0x1F189Cu;
    // 0x1f189c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f189cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f18a0:
    // 0x1f18a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f18a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f18a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f18a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f18a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f18ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F18ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18ACu;
        // 0x1f18b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F18ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F18B4u;
    // 0x1f18b4: 0x0  nop
    ctx->pc = 0x1f18b4u;
    // NOP
    ctx->pc = 0x1f18b8u;
}
