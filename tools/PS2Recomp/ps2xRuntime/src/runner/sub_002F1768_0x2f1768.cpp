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

// Function: sub_002F1768
// Address: 0x2f1768 - 0x2f1888
void sub_002F1768_0x2f1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1768_0x2f1768");
#endif

    switch (ctx->pc) {
        case 0x2f17b0u: goto label_2f17b0;
        case 0x2f17d0u: goto label_2f17d0;
        case 0x2f17e4u: goto label_2f17e4;
        case 0x2f1804u: goto label_2f1804;
        case 0x2f1820u: goto label_2f1820;
        case 0x2f1840u: goto label_2f1840;
        case 0x2f184cu: goto label_2f184c;
        case 0x2f1858u: goto label_2f1858;
        case 0x2f1860u: goto label_2f1860;
        default: break;
    }

    ctx->pc = 0x2f1768u;

    // 0x2f1768: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f176c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1770: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f1774: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1778: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f1778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f177c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1780: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1784: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f1784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f178c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f1790: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1794: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1794u;
    {
        const bool branch_taken_0x2f1794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1794u;
        // 0x2f1798: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1794) {
            ctx->pc = 0x2F17A8u;
            goto label_2f17a8;
        }
    }
    ctx->pc = 0x2F179Cu;
    // 0x2f179c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f17a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F17A0u;
    {
        const bool branch_taken_0x2f17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17A0u;
        // 0x2f17a4: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17a0) {
            ctx->pc = 0x2F1864u;
            goto label_2f1864;
        }
    }
    ctx->pc = 0x2F17A8u;
label_2f17a8:
    // 0x2f17a8: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F17A8u;
    SET_GPR_U32(ctx, 31, 0x2F17B0u);
    ctx->pc = 0x2F17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17A8u;
    // 0x2f17ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F17A8u, 0x2F17B0u)) {
        return;
    }
    ctx->pc = 0x2F17B0u;
label_2f17b0:
    // 0x2f17b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f17b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17b4: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F17B4u;
    {
        const bool branch_taken_0x2f17b4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x2f17b4) {
            ctx->pc = 0x2F17C8u;
            goto label_2f17c8;
        }
    }
    ctx->pc = 0x2F17BCu;
    // 0x2f17bc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f17c0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F17C0u;
    {
        const bool branch_taken_0x2f17c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17C0u;
        // 0x2f17c4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17c0) {
            ctx->pc = 0x2F1864u;
            goto label_2f1864;
        }
    }
    ctx->pc = 0x2F17C8u;
label_2f17c8:
    // 0x2f17c8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F17C8u;
    SET_GPR_U32(ctx, 31, 0x2F17D0u);
    ctx->pc = 0x2F17CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17C8u;
    // 0x2f17cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F17C8u, 0x2F17D0u)) {
        return;
    }
    ctx->pc = 0x2F17D0u;
label_2f17d0:
    // 0x2f17d0: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f17d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f17d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F17D4u;
    {
        const bool branch_taken_0x2f17d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f17d4) {
            ctx->pc = 0x2F17F0u;
            goto label_2f17f0;
        }
    }
    ctx->pc = 0x2F17DCu;
    // 0x2f17dc: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F17DCu;
    SET_GPR_U32(ctx, 31, 0x2F17E4u);
    ctx->pc = 0x2F17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17DCu;
    // 0x2f17e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F17DCu, 0x2F17E4u)) {
        return;
    }
    ctx->pc = 0x2F17E4u;
label_2f17e4:
    // 0x2f17e4: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f17e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f17e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F17E8u;
    {
        const bool branch_taken_0x2f17e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17E8u;
        // 0x2f17ec: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17e8) {
            ctx->pc = 0x2F17FCu;
            goto label_2f17fc;
        }
    }
    ctx->pc = 0x2F17F0u;
label_2f17f0:
    // 0x2f17f0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f17f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F17F4u;
    {
        const bool branch_taken_0x2f17f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17F4u;
        // 0x2f17f8: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17f4) {
            ctx->pc = 0x2F1864u;
            goto label_2f1864;
        }
    }
    ctx->pc = 0x2F17FCu;
label_2f17fc:
    // 0x2f17fc: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F17FCu;
    SET_GPR_U32(ctx, 31, 0x2F1804u);
    ctx->pc = 0x2F1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17FCu;
    // 0x2f1800: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F17FCu, 0x2F1804u)) {
        return;
    }
    ctx->pc = 0x2F1804u;
label_2f1804:
    // 0x2f1804: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f1804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1808: 0x2470f100  addiu       $s0, $v1, -0xF00
    ctx->pc = 0x2f1808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f180c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f180cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f1810: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1810u;
    {
        const bool branch_taken_0x2f1810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1810) {
            ctx->pc = 0x2F1814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1810u;
            // 0x2f1814: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F182Cu;
            goto label_2f182c;
        }
    }
    ctx->pc = 0x2F1818u;
    // 0x2f1818: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1818u;
    SET_GPR_U32(ctx, 31, 0x2F1820u);
    ctx->pc = 0x2F181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1818u;
    // 0x2f181c: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1818u, 0x2F1820u)) {
        return;
    }
    ctx->pc = 0x2F1820u;
label_2f1820:
    // 0x2f1820: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1824: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F1824u;
    {
        const bool branch_taken_0x2f1824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1824u;
        // 0x2f1828: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1824) {
            ctx->pc = 0x2F1864u;
            goto label_2f1864;
        }
    }
    ctx->pc = 0x2F182Cu;
label_2f182c:
    // 0x2f182c: 0xac71f100  sw          $s1, -0xF00($v1)
    ctx->pc = 0x2f182cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 17));
    // 0x2f1830: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f1830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f1834: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1838: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1838u;
    SET_GPR_U32(ctx, 31, 0x2F1840u);
    ctx->pc = 0x2F183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1838u;
    // 0x2f183c: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1838u, 0x2F1840u)) {
        return;
    }
    ctx->pc = 0x2F1840u;
label_2f1840:
    // 0x2f1840: 0x2604049c  addiu       $a0, $s0, 0x49C
    ctx->pc = 0x2f1840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    // 0x2f1844: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1844u;
    SET_GPR_U32(ctx, 31, 0x2F184Cu);
    ctx->pc = 0x2F1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1844u;
    // 0x2f1848: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1844u, 0x2F184Cu)) {
        return;
    }
    ctx->pc = 0x2F184Cu;
label_2f184c:
    // 0x2f184c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f184cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1850: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1850u;
    SET_GPR_U32(ctx, 31, 0x2F1858u);
    ctx->pc = 0x2F1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1850u;
    // 0x2f1854: 0x8c64f624  lw          $a0, -0x9DC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1850u, 0x2F1858u)) {
        return;
    }
    ctx->pc = 0x2F1858u;
label_2f1858:
    // 0x2f1858: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1858u;
    SET_GPR_U32(ctx, 31, 0x2F1860u);
    ctx->pc = 0x2F185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1858u;
    // 0x2f185c: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1858u, 0x2F1860u)) {
        return;
    }
    ctx->pc = 0x2F1860u;
label_2f1860:
    // 0x2f1860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1864:
    // 0x2f1864: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f1864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1868: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f1868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f186c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f186cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1870: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1874: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f187c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F187Cu;
        // 0x2f1880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1884u;
    // 0x2f1884: 0x0  nop
    ctx->pc = 0x2f1884u;
    // NOP
    ctx->pc = 0x2f1888u;
}
