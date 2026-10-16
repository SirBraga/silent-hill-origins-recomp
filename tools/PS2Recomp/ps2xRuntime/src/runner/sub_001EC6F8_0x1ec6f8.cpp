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

// Function: sub_001EC6F8
// Address: 0x1ec6f8 - 0x1eca40
void sub_001EC6F8_0x1ec6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC6F8_0x1ec6f8");
#endif

    switch (ctx->pc) {
        case 0x1ec770u: goto label_1ec770;
        case 0x1ec778u: goto label_1ec778;
        case 0x1ec784u: goto label_1ec784;
        case 0x1ec7a8u: goto label_1ec7a8;
        case 0x1ec7d8u: goto label_1ec7d8;
        case 0x1ec7f4u: goto label_1ec7f4;
        case 0x1ec800u: goto label_1ec800;
        case 0x1ec83cu: goto label_1ec83c;
        case 0x1ec930u: goto label_1ec930;
        case 0x1ec988u: goto label_1ec988;
        case 0x1ec9a4u: goto label_1ec9a4;
        case 0x1ec9c0u: goto label_1ec9c0;
        case 0x1ec9dcu: goto label_1ec9dc;
        case 0x1ec9f8u: goto label_1ec9f8;
        case 0x1eca0cu: goto label_1eca0c;
        default: break;
    }

    ctx->pc = 0x1ec6f8u;

    // 0x1ec6f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ec6fc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ec6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ec700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ec704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec708: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ec708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ec70c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ec70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec710: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ec710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ec714: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ec714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec718: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ec718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ec71c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ec71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ec720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec724: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ec728: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EC728u;
    {
        const bool branch_taken_0x1ec728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC728u;
        // 0x1ec72c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec728) {
            ctx->pc = 0x1EC7B0u;
            goto label_1ec7b0;
        }
    }
    ctx->pc = 0x1EC730u;
    // 0x1ec730: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1ec730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1ec734: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ec734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec738: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec73c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec740: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ec744: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ec748: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1ec748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ec74c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ec74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ec750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ec754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ec758: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ec758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ec75c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1ec75cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec760: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1ec760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec768: 0xc07a026  jal         func_1E8098
    ctx->pc = 0x1EC768u;
    SET_GPR_U32(ctx, 31, 0x1EC770u);
    ctx->pc = 0x1EC76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC768u;
    // 0x1ec76c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E8098u, 0x1EC768u, 0x1EC770u)) {
        return;
    }
    ctx->pc = 0x1EC770u;
label_1ec770:
    // 0x1ec770: 0xc07b008  jal         func_1EC020
    ctx->pc = 0x1EC770u;
    SET_GPR_U32(ctx, 31, 0x1EC778u);
    ctx->pc = 0x1EC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC770u;
    // 0x1ec774: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC020u, 0x1EC770u, 0x1EC778u)) {
        return;
    }
    ctx->pc = 0x1EC778u;
label_1ec778:
    // 0x1ec778: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ec778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec77c: 0xc07b020  jal         func_1EC080
    ctx->pc = 0x1EC77Cu;
    SET_GPR_U32(ctx, 31, 0x1EC784u);
    ctx->pc = 0x1EC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC77Cu;
    // 0x1ec780: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC080u, 0x1EC77Cu, 0x1EC784u)) {
        return;
    }
    ctx->pc = 0x1EC784u;
label_1ec784:
    // 0x1ec784: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ec784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec788: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x1ec788u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec78c: 0xc6ac0004  lwc1        $f12, 0x4($s5)
    ctx->pc = 0x1ec78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec798: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ec798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec79c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ec79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7a0: 0xc07a09c  jal         func_1E8270
    ctx->pc = 0x1EC7A0u;
    SET_GPR_U32(ctx, 31, 0x1EC7A8u);
    ctx->pc = 0x1EC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7A0u;
    // 0x1ec7a4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E8270u, 0x1EC7A0u, 0x1EC7A8u)) {
        return;
    }
    ctx->pc = 0x1EC7A8u;
label_1ec7a8:
    // 0x1ec7a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A8u;
        // 0x1ec7ac: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC7DCu;
            goto label_1ec7dc;
        }
    }
    ctx->pc = 0x1EC7B0u;
label_1ec7b0:
    // 0x1ec7b0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1ec7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ec7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec7b8: 0x28430015  slti        $v1, $v0, 0x15
    ctx->pc = 0x1ec7b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1ec7bc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC7BCu;
    {
        const bool branch_taken_0x1ec7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7BCu;
        // 0x1ec7c0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7bc) {
            ctx->pc = 0x1EC7D8u;
            goto label_1ec7d8;
        }
    }
    ctx->pc = 0x1EC7C4u;
    // 0x1ec7c4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ec7c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC7C8u;
    {
        const bool branch_taken_0x1ec7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7c8) {
            ctx->pc = 0x1EC7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC7C8u;
            // 0x1ec7cc: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7DCu;
            goto label_1ec7dc;
        }
    }
    ctx->pc = 0x1EC7D0u;
    // 0x1ec7d0: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1EC7D0u;
    SET_GPR_U32(ctx, 31, 0x1EC7D8u);
    ctx->pc = 0x1EC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7D0u;
    // 0x1ec7d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECDA0u, 0x1EC7D0u, 0x1EC7D8u)) {
        return;
    }
    ctx->pc = 0x1EC7D8u;
label_1ec7d8:
    // 0x1ec7d8: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1ec7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1ec7dc:
    // 0x1ec7dc: 0x5040008c  beql        $v0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x1EC7DCu;
    {
        const bool branch_taken_0x1ec7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7dc) {
            ctx->pc = 0x1EC7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC7DCu;
            // 0x1ec7e0: 0xc6a10004  lwc1        $f1, 0x4($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA10u;
            goto label_1eca10;
        }
    }
    ctx->pc = 0x1EC7E4u;
    // 0x1ec7e4: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC7E4u;
    {
        const bool branch_taken_0x1ec7e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7e4) {
            ctx->pc = 0x1EC7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC7E4u;
            // 0x1ec7e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC808u;
            goto label_1ec808;
        }
    }
    ctx->pc = 0x1EC7ECu;
    // 0x1ec7ec: 0xc07b008  jal         func_1EC020
    ctx->pc = 0x1EC7ECu;
    SET_GPR_U32(ctx, 31, 0x1EC7F4u);
    ctx->pc = 0x1EC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7ECu;
    // 0x1ec7f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC020u, 0x1EC7ECu, 0x1EC7F4u)) {
        return;
    }
    ctx->pc = 0x1EC7F4u;
label_1ec7f4:
    // 0x1ec7f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec7f8: 0xc07b020  jal         func_1EC080
    ctx->pc = 0x1EC7F8u;
    SET_GPR_U32(ctx, 31, 0x1EC800u);
    ctx->pc = 0x1EC7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7F8u;
    // 0x1ec7fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC080u, 0x1EC7F8u, 0x1EC800u)) {
        return;
    }
    ctx->pc = 0x1EC800u;
label_1ec800:
    // 0x1ec800: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ec800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec804: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ec808:
    // 0x1ec808: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ec808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec80c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ec810: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ec814: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ec818: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ec818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ec81c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec820: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ec824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec828: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1ec828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec82c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ec82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ec830: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ec830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec834: 0xc07a026  jal         func_1E8098
    ctx->pc = 0x1EC834u;
    SET_GPR_U32(ctx, 31, 0x1EC83Cu);
    ctx->pc = 0x1EC838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC834u;
    // 0x1ec838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E8098u, 0x1EC834u, 0x1EC83Cu)) {
        return;
    }
    ctx->pc = 0x1EC83Cu;
label_1ec83c:
    // 0x1ec83c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x1ec83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec840: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x1ec840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec844: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ec844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec848: 0x0  nop
    ctx->pc = 0x1ec848u;
    // NOP
    // 0x1ec84c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x1EC84Cu;
    {
        const bool branch_taken_0x1ec84c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC84Cu;
        // 0x1ec850: 0x3c080034  lui         $t0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec84c) {
            ctx->pc = 0x1EC900u;
            goto label_1ec900;
        }
    }
    ctx->pc = 0x1EC854u;
    // 0x1ec854: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1ec854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec858: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1ec858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1ec85c: 0x3c0a0034  lui         $t2, 0x34
    ctx->pc = 0x1ec85cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)52 << 16));
    // 0x1ec860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec864: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1ec864u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x1ec868: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1ec868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1ec86c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1ec86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1ec870: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ec870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ec874: 0x24e7a230  addiu       $a3, $a3, -0x5DD0
    ctx->pc = 0x1ec874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943280));
    // 0x1ec878: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1ec878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1ec87c: 0x8d04a630  lw          $a0, -0x59D0($t0)
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294944304)));
    // 0x1ec880: 0x8d46a634  lw          $a2, -0x59CC($t2)
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x33A634u));
    // 0x1ec884: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ec888: 0x8d25a638  lw          $a1, -0x59C8($t1)
    ctx->pc = 0x1ec888u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33A638u));
    // 0x1ec88c: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x1ec890: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1ec890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ec894: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ec894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ec898: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ec898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec89c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ec89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec8a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ec8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ec8a4: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1ec8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1ec8a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ec8ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ec8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec8b0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ec8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ec8b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1ec8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec8b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ec8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ec8bc: 0xad04a630  sw          $a0, -0x59D0($t0)
    ctx->pc = 0x1ec8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294944304), GPR_U32(ctx, 4));
    // 0x1ec8c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ec8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ec8c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ec8c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ec8c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec8cc: 0xad46a634  sw          $a2, -0x59CC($t2)
    ctx->pc = 0x1ec8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294944308), GPR_U32(ctx, 6));
    // 0x1ec8d0: 0xad25a638  sw          $a1, -0x59C8($t1)
    ctx->pc = 0x1ec8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294944312), GPR_U32(ctx, 5));
    // 0x1ec8d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ec8d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec8d8: 0xc6420040  lwc1        $f2, 0x40($s2)
    ctx->pc = 0x1ec8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec8dc: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1ec8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec8e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ec8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ec8e4: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1ec8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ec8e8: 0xc642004c  lwc1        $f2, 0x4C($s2)
    ctx->pc = 0x1ec8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec8ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec8ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec8f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ec8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ec8f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1ec8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1ec8f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1ec8f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ec8fc: 0xe642004c  swc1        $f2, 0x4C($s2)
    ctx->pc = 0x1ec8fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_1ec900:
    // 0x1ec900: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x1ec900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec90c: 0x0  nop
    ctx->pc = 0x1ec90cu;
    // NOP
    // 0x1ec910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ec910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec914: 0x0  nop
    ctx->pc = 0x1ec914u;
    // NOP
    // 0x1ec918: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC918u;
    {
        const bool branch_taken_0x1ec918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec918) {
            ctx->pc = 0x1EC91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC918u;
            // 0x1ec91c: 0xc6a10004  lwc1        $f1, 0x4($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA10u;
            goto label_1eca10;
        }
    }
    ctx->pc = 0x1EC920u;
    // 0x1ec920: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec924: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ec924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ec928: 0xc07b290  jal         func_1ECA40
    ctx->pc = 0x1EC928u;
    SET_GPR_U32(ctx, 31, 0x1EC930u);
    ctx->pc = 0x1EC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC928u;
    // 0x1ec92c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECA40u, 0x1EC928u, 0x1EC930u)) {
        return;
    }
    ctx->pc = 0x1EC930u;
label_1ec930:
    // 0x1ec930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec934: 0x0  nop
    ctx->pc = 0x1ec934u;
    // NOP
    // 0x1ec938: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec93c: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x1ec93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec940: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ec944: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EC944u;
    {
        const bool branch_taken_0x1ec944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC944u;
        // 0x1ec948: 0xe640004c  swc1        $f0, 0x4C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec944) {
            ctx->pc = 0x1ECA0Cu;
            goto label_1eca0c;
        }
    }
    ctx->pc = 0x1EC94Cu;
    // 0x1ec94c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec950: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1ec950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec954: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EC954u;
    {
        const bool branch_taken_0x1ec954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC954u;
        // 0x1ec958: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec954) {
            ctx->pc = 0x1EC9F8u;
            goto label_1ec9f8;
        }
    }
    ctx->pc = 0x1EC95Cu;
    // 0x1ec95c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec960: 0x24421e70  addiu       $v0, $v0, 0x1E70
    ctx->pc = 0x1ec960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
    // 0x1ec964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec968: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ec968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec96c: 0x800008  jr          $a0
    ctx->pc = 0x1EC96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC974u: goto label_1ec974;
            case 0x1EC990u: goto label_1ec990;
            case 0x1EC9ACu: goto label_1ec9ac;
            case 0x1EC9C8u: goto label_1ec9c8;
            case 0x1EC9E4u: goto label_1ec9e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC96Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EC974u;
label_1ec974:
    // 0x1ec974: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec97c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec980: 0xc07a272  jal         func_1E89C8
    ctx->pc = 0x1EC980u;
    SET_GPR_U32(ctx, 31, 0x1EC988u);
    ctx->pc = 0x1EC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC980u;
    // 0x1ec984: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E89C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E89C8u, 0x1EC980u, 0x1EC988u)) {
        return;
    }
    ctx->pc = 0x1EC988u;
label_1ec988:
    // 0x1ec988: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC988u;
    {
        const bool branch_taken_0x1ec988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC988u;
        // 0x1ec98c: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec988) {
            ctx->pc = 0x1EC9FCu;
            goto label_1ec9fc;
        }
    }
    ctx->pc = 0x1EC990u;
label_1ec990:
    // 0x1ec990: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec998: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec99c: 0xc07a306  jal         func_1E8C18
    ctx->pc = 0x1EC99Cu;
    SET_GPR_U32(ctx, 31, 0x1EC9A4u);
    ctx->pc = 0x1EC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC99Cu;
    // 0x1ec9a0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E8C18u, 0x1EC99Cu, 0x1EC9A4u)) {
        return;
    }
    ctx->pc = 0x1EC9A4u;
label_1ec9a4:
    // 0x1ec9a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EC9A4u;
    {
        const bool branch_taken_0x1ec9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9A4u;
        // 0x1ec9a8: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9a4) {
            ctx->pc = 0x1EC9FCu;
            goto label_1ec9fc;
        }
    }
    ctx->pc = 0x1EC9ACu;
label_1ec9ac:
    // 0x1ec9ac: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1ec9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec9b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9b8: 0xc07a400  jal         func_1E9000
    ctx->pc = 0x1EC9B8u;
    SET_GPR_U32(ctx, 31, 0x1EC9C0u);
    ctx->pc = 0x1EC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC9B8u;
    // 0x1ec9bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9000u, 0x1EC9B8u, 0x1EC9C0u)) {
        return;
    }
    ctx->pc = 0x1EC9C0u;
label_1ec9c0:
    // 0x1ec9c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EC9C0u;
    {
        const bool branch_taken_0x1ec9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9C0u;
        // 0x1ec9c4: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9c0) {
            ctx->pc = 0x1EC9FCu;
            goto label_1ec9fc;
        }
    }
    ctx->pc = 0x1EC9C8u;
label_1ec9c8:
    // 0x1ec9c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9d4: 0xc07a4fe  jal         func_1E93F8
    ctx->pc = 0x1EC9D4u;
    SET_GPR_U32(ctx, 31, 0x1EC9DCu);
    ctx->pc = 0x1EC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC9D4u;
    // 0x1ec9d8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E93F8u, 0x1EC9D4u, 0x1EC9DCu)) {
        return;
    }
    ctx->pc = 0x1EC9DCu;
label_1ec9dc:
    // 0x1ec9dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC9DCu;
    {
        const bool branch_taken_0x1ec9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9DCu;
        // 0x1ec9e0: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9dc) {
            ctx->pc = 0x1EC9FCu;
            goto label_1ec9fc;
        }
    }
    ctx->pc = 0x1EC9E4u;
label_1ec9e4:
    // 0x1ec9e4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1ec9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9f0: 0xc07a64c  jal         func_1E9930
    ctx->pc = 0x1EC9F0u;
    SET_GPR_U32(ctx, 31, 0x1EC9F8u);
    ctx->pc = 0x1EC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC9F0u;
    // 0x1ec9f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9930u, 0x1EC9F0u, 0x1EC9F8u)) {
        return;
    }
    ctx->pc = 0x1EC9F8u;
label_1ec9f8:
    // 0x1ec9f8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1ec9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ec9fc:
    // 0x1ec9fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eca00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca04: 0xc07a1b6  jal         func_1E86D8
    ctx->pc = 0x1ECA04u;
    SET_GPR_U32(ctx, 31, 0x1ECA0Cu);
    ctx->pc = 0x1ECA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA04u;
    // 0x1eca08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E86D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E86D8u, 0x1ECA04u, 0x1ECA0Cu)) {
        return;
    }
    ctx->pc = 0x1ECA0Cu;
label_1eca0c:
    // 0x1eca0c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1eca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eca10:
    // 0x1eca10: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1eca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eca14: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1eca14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eca18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eca18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eca1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1eca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eca20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eca20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eca24: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1eca24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eca28: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1eca28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1eca2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1eca2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eca30: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1eca30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eca34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eca38: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA38u;
        // 0x1eca3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECA40u;
}
