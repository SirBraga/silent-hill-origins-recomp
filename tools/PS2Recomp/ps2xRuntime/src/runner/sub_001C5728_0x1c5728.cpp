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

// Function: sub_001C5728
// Address: 0x1c5728 - 0x1c58b8
void sub_001C5728_0x1c5728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5728_0x1c5728");
#endif

    switch (ctx->pc) {
        case 0x1c5778u: goto label_1c5778;
        case 0x1c579cu: goto label_1c579c;
        case 0x1c57a8u: goto label_1c57a8;
        case 0x1c57bcu: goto label_1c57bc;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57e4u: goto label_1c57e4;
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c580cu: goto label_1c580c;
        case 0x1c583cu: goto label_1c583c;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c585cu: goto label_1c585c;
        case 0x1c5870u: goto label_1c5870;
        default: break;
    }

    ctx->pc = 0x1c5728u;

    // 0x1c5728: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c572c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c5730: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c5734: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c5734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c5738: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c5738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c573c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c5740: 0x26b2029c  addiu       $s2, $s5, 0x29C
    ctx->pc = 0x1c5740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 668));
    // 0x1c5744: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c5744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c5748: 0x245398a0  addiu       $s3, $v0, -0x6760
    ctx->pc = 0x1c5748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x1c574c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1c5750: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5754: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c5754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1c5758: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1c5758u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x1c575c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1c5760: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c5760u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5764: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c5764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c5768: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1c576c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c5770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5774: 0x0  nop
    ctx->pc = 0x1c5774u;
    // NOP
label_1c5778:
    // 0x1c5778: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x1c5778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1c577c: 0x8c43028c  lw          $v1, 0x28C($v0)
    ctx->pc = 0x1c577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
    // 0x1c5780: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C5780u;
    {
        const bool branch_taken_0x1c5780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5780) {
            ctx->pc = 0x1C5784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5780u;
            // 0x1c5784: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C57D8u;
            goto label_1c57d8;
        }
    }
    ctx->pc = 0x1C5788u;
    // 0x1c5788: 0x8e42fff8  lw          $v0, -0x8($s2)
    ctx->pc = 0x1c5788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x1c578c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C578Cu;
    {
        const bool branch_taken_0x1c578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C578Cu;
        // 0x1c5790: 0x8fc48b2c  lw          $a0, -0x74D4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294937388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c578c) {
            ctx->pc = 0x1C579Cu;
            goto label_1c579c;
        }
    }
    ctx->pc = 0x1C5794u;
    // 0x1c5794: 0xc0641d6  jal         func_190758
    ctx->pc = 0x1C5794u;
    SET_GPR_U32(ctx, 31, 0x1C579Cu);
    ctx->pc = 0x1C5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5794u;
    // 0x1c5798: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190758u, 0x1C5794u, 0x1C579Cu)) {
        return;
    }
    ctx->pc = 0x1C579Cu;
label_1c579c:
    // 0x1c579c: 0x8ed09898  lw          $s0, -0x6768($s6)
    ctx->pc = 0x1c579cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940824)));
    // 0x1c57a0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C57A0u;
    SET_GPR_U32(ctx, 31, 0x1C57A8u);
    ctx->pc = 0x1C57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57A0u;
    // 0x1c57a4: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C57A0u, 0x1C57A8u)) {
        return;
    }
    ctx->pc = 0x1C57A8u;
label_1c57a8:
    // 0x1c57a8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C57A8u;
    {
        const bool branch_taken_0x1c57a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57A8u;
        // 0x1c57ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57a8) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C57B0u;
    // 0x1c57b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c57b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57b4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C57B4u;
    SET_GPR_U32(ctx, 31, 0x1C57BCu);
    ctx->pc = 0x1C57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57B4u;
    // 0x1c57b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C57B4u, 0x1C57BCu)) {
        return;
    }
    ctx->pc = 0x1C57BCu;
label_1c57bc:
    // 0x1c57bc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C57BCu;
    {
        const bool branch_taken_0x1c57bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57BCu;
        // 0x1c57c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57bc) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C57C4u;
    // 0x1c57c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c57c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57c8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1C57C8u;
    SET_GPR_U32(ctx, 31, 0x1C57D0u);
    ctx->pc = 0x1C57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57C8u;
    // 0x1c57cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1C57C8u, 0x1C57D0u)) {
        return;
    }
    ctx->pc = 0x1C57D0u;
label_1c57d0:
    // 0x1c57d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C57D0u;
    {
        const bool branch_taken_0x1c57d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57D0u;
        // 0x1c57d4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57d0) {
            ctx->pc = 0x1C5874u;
            goto label_1c5874;
        }
    }
    ctx->pc = 0x1C57D8u;
label_1c57d8:
    // 0x1c57d8: 0x8ed09898  lw          $s0, -0x6768($s6)
    ctx->pc = 0x1c57d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940824)));
    // 0x1c57dc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C57DCu;
    SET_GPR_U32(ctx, 31, 0x1C57E4u);
    ctx->pc = 0x1C57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57DCu;
    // 0x1c57e0: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C57DCu, 0x1C57E4u)) {
        return;
    }
    ctx->pc = 0x1C57E4u;
label_1c57e4:
    // 0x1c57e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C57E4u;
    {
        const bool branch_taken_0x1c57e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57E4u;
        // 0x1c57e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57e4) {
            ctx->pc = 0x1C580Cu;
            goto label_1c580c;
        }
    }
    ctx->pc = 0x1C57ECu;
    // 0x1c57ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c57ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C57F0u;
    SET_GPR_U32(ctx, 31, 0x1C57F8u);
    ctx->pc = 0x1C57F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F0u;
    // 0x1c57f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C57F0u, 0x1C57F8u)) {
        return;
    }
    ctx->pc = 0x1C57F8u;
label_1c57f8:
    // 0x1c57f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C57F8u;
    {
        const bool branch_taken_0x1c57f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57F8u;
        // 0x1c57fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57f8) {
            ctx->pc = 0x1C580Cu;
            goto label_1c580c;
        }
    }
    ctx->pc = 0x1C5800u;
    // 0x1c5800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c5800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5804: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1C5804u;
    SET_GPR_U32(ctx, 31, 0x1C580Cu);
    ctx->pc = 0x1C5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5804u;
    // 0x1c5808: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1C5804u, 0x1C580Cu)) {
        return;
    }
    ctx->pc = 0x1C580Cu;
label_1c580c:
    // 0x1c580c: 0x8e42fff8  lw          $v0, -0x8($s2)
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x1c5810: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C5810u;
    {
        const bool branch_taken_0x1c5810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5810) {
            ctx->pc = 0x1C5814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5810u;
            // 0x1c5814: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5874u;
            goto label_1c5874;
        }
    }
    ctx->pc = 0x1C5818u;
    // 0x1c5818: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c581c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C581Cu;
    {
        const bool branch_taken_0x1c581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C581Cu;
        // 0x1c5820: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c581c) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C5824u;
    // 0x1c5824: 0x8fc48b2c  lw          $a0, -0x74D4($fp)
    ctx->pc = 0x1c5824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294937388)));
    // 0x1c5828: 0x8c4502a0  lw          $a1, 0x2A0($v0)
    ctx->pc = 0x1c5828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x1c582c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c582cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5830: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1c5830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c5834: 0xc0636ea  jal         func_18DBA8
    ctx->pc = 0x1C5834u;
    SET_GPR_U32(ctx, 31, 0x1C583Cu);
    ctx->pc = 0x1C5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5834u;
    // 0x1c5838: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x1C5834u, 0x1C583Cu)) {
        return;
    }
    ctx->pc = 0x1C583Cu;
label_1c583c:
    // 0x1c583c: 0x8ed09898  lw          $s0, -0x6768($s6)
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940824)));
    // 0x1c5840: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C5840u;
    SET_GPR_U32(ctx, 31, 0x1C5848u);
    ctx->pc = 0x1C5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5840u;
    // 0x1c5844: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C5840u, 0x1C5848u)) {
        return;
    }
    ctx->pc = 0x1C5848u;
label_1c5848:
    // 0x1c5848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5848u;
    {
        const bool branch_taken_0x1c5848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5848u;
        // 0x1c584c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5848) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C5850u;
    // 0x1c5850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5854: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C5854u;
    SET_GPR_U32(ctx, 31, 0x1C585Cu);
    ctx->pc = 0x1C5858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5854u;
    // 0x1c5858: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C5854u, 0x1C585Cu)) {
        return;
    }
    ctx->pc = 0x1C585Cu;
label_1c585c:
    // 0x1c585c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C585Cu;
    {
        const bool branch_taken_0x1c585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C585Cu;
        // 0x1c5860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c585c) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C5864u;
    // 0x1c5864: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c5864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5868: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1C5868u;
    SET_GPR_U32(ctx, 31, 0x1C5870u);
    ctx->pc = 0x1C586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5868u;
    // 0x1c586c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1C5868u, 0x1C5870u)) {
        return;
    }
    ctx->pc = 0x1C5870u;
label_1c5870:
    // 0x1c5870: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1c5870u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1c5874:
    // 0x1c5874: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c5874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c5878: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x1c5878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x1c587c: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x1c587cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c5880: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1C5880u;
    {
        const bool branch_taken_0x1c5880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5880u;
        // 0x1c5884: 0x26940044  addiu       $s4, $s4, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5880) {
            ctx->pc = 0x1C5778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5778;
        }
    }
    ctx->pc = 0x1C5888u;
    // 0x1c5888: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c5888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c588c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c588cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5890: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c5890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5894: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c5894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5898: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c5898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c589c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c589cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c58a0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c58a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c58a4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c58a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c58a8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c58a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c58ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c58acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c58b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C58B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58B0u;
        // 0x1c58b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C58B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C58B8u;
}
