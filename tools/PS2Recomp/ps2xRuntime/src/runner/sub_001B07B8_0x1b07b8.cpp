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

// Function: sub_001B07B8
// Address: 0x1b07b8 - 0x1b0930
void sub_001B07B8_0x1b07b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B07B8_0x1b07b8");
#endif

    switch (ctx->pc) {
        case 0x1b07e4u: goto label_1b07e4;
        case 0x1b07f4u: goto label_1b07f4;
        case 0x1b0814u: goto label_1b0814;
        case 0x1b081cu: goto label_1b081c;
        case 0x1b0824u: goto label_1b0824;
        case 0x1b0838u: goto label_1b0838;
        case 0x1b0844u: goto label_1b0844;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b08a8u: goto label_1b08a8;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b0914u: goto label_1b0914;
        default: break;
    }

    ctx->pc = 0x1b07b8u;

    // 0x1b07b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b07b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b07bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b07bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b07c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b07c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b07c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b07c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b07c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b07cc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1b07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b07d0: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1b07d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1b07d4: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B07D4u;
    {
        const bool branch_taken_0x1b07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07d4) {
            ctx->pc = 0x1B07D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B07D4u;
            // 0x1b07d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B091Cu;
            goto label_1b091c;
        }
    }
    ctx->pc = 0x1B07DCu;
    // 0x1b07dc: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1B07DCu;
    SET_GPR_U32(ctx, 31, 0x1B07E4u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1B07DCu, 0x1B07E4u)) {
        return;
    }
    ctx->pc = 0x1B07E4u;
label_1b07e4:
    // 0x1b07e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B07E4u;
    {
        const bool branch_taken_0x1b07e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07E4u;
        // 0x1b07e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07e4) {
            ctx->pc = 0x1B0800u;
            goto label_1b0800;
        }
    }
    ctx->pc = 0x1B07ECu;
    // 0x1b07ec: 0xc06039c  jal         func_180E70
    ctx->pc = 0x1B07ECu;
    SET_GPR_U32(ctx, 31, 0x1B07F4u);
    ctx->pc = 0x180E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180E70u, 0x1B07ECu, 0x1B07F4u)) {
        return;
    }
    ctx->pc = 0x1B07F4u;
label_1b07f4:
    // 0x1b07f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b07f8: 0xae020244  sw          $v0, 0x244($s0)
    ctx->pc = 0x1b07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
    // 0x1b07fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b07fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0800:
    // 0x1b0800: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b0800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b080c: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1B080Cu;
    SET_GPR_U32(ctx, 31, 0x1B0814u);
    ctx->pc = 0x1B0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B080Cu;
    // 0x1b0810: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x1B080Cu, 0x1B0814u)) {
        return;
    }
    ctx->pc = 0x1B0814u;
label_1b0814:
    // 0x1b0814: 0xc073f36  jal         func_1CFCD8
    ctx->pc = 0x1B0814u;
    SET_GPR_U32(ctx, 31, 0x1B081Cu);
    ctx->pc = 0x1CFCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CFCD8u, 0x1B0814u, 0x1B081Cu)) {
        return;
    }
    ctx->pc = 0x1B081Cu;
label_1b081c:
    // 0x1b081c: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x1B081Cu;
    SET_GPR_U32(ctx, 31, 0x1B0824u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x1B081Cu, 0x1B0824u)) {
        return;
    }
    ctx->pc = 0x1B0824u;
label_1b0824:
    // 0x1b0824: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0824u;
    {
        const bool branch_taken_0x1b0824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0824u;
        // 0x1b0828: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0824) {
            ctx->pc = 0x1B0848u;
            goto label_1b0848;
        }
    }
    ctx->pc = 0x1B082Cu;
    // 0x1b082c: 0x8e050240  lw          $a1, 0x240($s0)
    ctx->pc = 0x1b082cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1b0830: 0xc074122  jal         func_1D0488
    ctx->pc = 0x1B0830u;
    SET_GPR_U32(ctx, 31, 0x1B0838u);
    ctx->pc = 0x1B0834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0830u;
    // 0x1b0834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0488u, 0x1B0830u, 0x1B0838u)) {
        return;
    }
    ctx->pc = 0x1B0838u;
label_1b0838:
    // 0x1b0838: 0x8e050244  lw          $a1, 0x244($s0)
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1b083c: 0xc074136  jal         func_1D04D8
    ctx->pc = 0x1B083Cu;
    SET_GPR_U32(ctx, 31, 0x1B0844u);
    ctx->pc = 0x1B0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B083Cu;
    // 0x1b0840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D04D8u, 0x1B083Cu, 0x1B0844u)) {
        return;
    }
    ctx->pc = 0x1B0844u;
label_1b0844:
    // 0x1b0844: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1b0844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1b0848:
    // 0x1b0848: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b0848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b084c: 0x8c644328  lw          $a0, 0x4328($v1)
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17192)));
    // 0x1b0850: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1b0850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b0854: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0854u;
    {
        const bool branch_taken_0x1b0854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0854u;
        // 0x1b0858: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0854) {
            ctx->pc = 0x1B0878u;
            goto label_1b0878;
        }
    }
    ctx->pc = 0x1B085Cu;
    // 0x1b085c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0860u;
    {
        const bool branch_taken_0x1b0860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0860u;
        // 0x1b0864: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0860) {
            ctx->pc = 0x1B087Cu;
            goto label_1b087c;
        }
    }
    ctx->pc = 0x1B0868u;
    // 0x1b0868: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b0868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b086c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0870: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B0870u;
    SET_GPR_U32(ctx, 31, 0x1B0878u);
    ctx->pc = 0x1B0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0870u;
    // 0x1b0874: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B0870u, 0x1B0878u)) {
        return;
    }
    ctx->pc = 0x1B0878u;
label_1b0878:
    // 0x1b0878: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b0878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1b087c:
    // 0x1b087c: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x1b087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x1b0880: 0x8c444338  lw          $a0, 0x4338($v0)
    ctx->pc = 0x1b0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17208)));
    // 0x1b0884: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B0884u;
    {
        const bool branch_taken_0x1b0884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0884) {
            ctx->pc = 0x1B08B0u;
            goto label_1b08b0;
        }
    }
    ctx->pc = 0x1B088Cu;
    // 0x1b088c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0890u;
    {
        const bool branch_taken_0x1b0890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0890u;
        // 0x1b0894: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0890) {
            ctx->pc = 0x1B08B0u;
            goto label_1b08b0;
        }
    }
    ctx->pc = 0x1B0898u;
    // 0x1b0898: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b0898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b089c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08a0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B08A0u;
    SET_GPR_U32(ctx, 31, 0x1B08A8u);
    ctx->pc = 0x1B08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08A0u;
    // 0x1b08a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B08A0u, 0x1B08A8u)) {
        return;
    }
    ctx->pc = 0x1B08A8u;
label_1b08a8:
    // 0x1b08a8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b08ac: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x1b08acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
label_1b08b0:
    // 0x1b08b0: 0x8c4486b8  lw          $a0, -0x7948($v0)
    ctx->pc = 0x1b08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936248)));
    // 0x1b08b4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B08B4u;
    {
        const bool branch_taken_0x1b08b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08B4u;
        // 0x1b08b8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08b4) {
            ctx->pc = 0x1B08DCu;
            goto label_1b08dc;
        }
    }
    ctx->pc = 0x1B08BCu;
    // 0x1b08bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b08c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B08C0u;
    {
        const bool branch_taken_0x1b08c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08C0u;
        // 0x1b08c4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08c0) {
            ctx->pc = 0x1B08DCu;
            goto label_1b08dc;
        }
    }
    ctx->pc = 0x1B08C8u;
    // 0x1b08c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b08cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08d0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B08D0u;
    SET_GPR_U32(ctx, 31, 0x1B08D8u);
    ctx->pc = 0x1B08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08D0u;
    // 0x1b08d4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B08D0u, 0x1B08D8u)) {
        return;
    }
    ctx->pc = 0x1B08D8u;
label_1b08d8:
    // 0x1b08d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1b08dc:
    // 0x1b08dc: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x1b08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x1b08e0: 0x8c4443b8  lw          $a0, 0x43B8($v0)
    ctx->pc = 0x1b08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
    // 0x1b08e4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B08E4u;
    {
        const bool branch_taken_0x1b08e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b08e4) {
            ctx->pc = 0x1B08E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B08E4u;
            // 0x1b08e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B08ECu;
    // 0x1b08ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b08f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B08F0u;
    {
        const bool branch_taken_0x1b08f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08f0) {
            ctx->pc = 0x1B08F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B08F0u;
            // 0x1b08f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B08F8u;
    // 0x1b08f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b08fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b08fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0900: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B0900u;
    SET_GPR_U32(ctx, 31, 0x1B0908u);
    ctx->pc = 0x1B0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0900u;
    // 0x1b0904: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B0900u, 0x1B0908u)) {
        return;
    }
    ctx->pc = 0x1B0908u;
label_1b0908:
    // 0x1b0908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b090c:
    // 0x1b090c: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x1B090Cu;
    SET_GPR_U32(ctx, 31, 0x1B0914u);
    ctx->pc = 0x1B0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B090Cu;
    // 0x1b0910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1B090Cu, 0x1B0914u)) {
        return;
    }
    ctx->pc = 0x1B0914u;
label_1b0914:
    // 0x1b0914: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1b0914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1b0918: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b0918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b091c:
    // 0x1b091c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b091cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0924: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0924u;
        // 0x1b0928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B092Cu;
    // 0x1b092c: 0x0  nop
    ctx->pc = 0x1b092cu;
    // NOP
    ctx->pc = 0x1b0930u;
}
