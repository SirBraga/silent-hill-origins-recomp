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

// Function: sub_001B76F8
// Address: 0x1b76f8 - 0x1b7a48
void sub_001B76F8_0x1b76f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B76F8_0x1b76f8");
#endif

    switch (ctx->pc) {
        case 0x1b776cu: goto label_1b776c;
        case 0x1b77fcu: goto label_1b77fc;
        case 0x1b782cu: goto label_1b782c;
        case 0x1b7888u: goto label_1b7888;
        case 0x1b78e4u: goto label_1b78e4;
        case 0x1b7930u: goto label_1b7930;
        case 0x1b7940u: goto label_1b7940;
        case 0x1b798cu: goto label_1b798c;
        case 0x1b79a0u: goto label_1b79a0;
        case 0x1b79b0u: goto label_1b79b0;
        case 0x1b79d4u: goto label_1b79d4;
        case 0x1b7a04u: goto label_1b7a04;
        case 0x1b7a24u: goto label_1b7a24;
        default: break;
    }

    ctx->pc = 0x1b76f8u;

    // 0x1b76f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b76fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b76fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b7700: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b7700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b7704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b770c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b770cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7710: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1b7710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b7714: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7718: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b7718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b771c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7720: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1b7724: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1B7724u;
    {
        const bool branch_taken_0x1b7724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7724u;
        // 0x1b7728: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7724) {
            ctx->pc = 0x1B7998u;
            goto label_1b7998;
        }
    }
    ctx->pc = 0x1B772Cu;
    // 0x1b772c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B772Cu;
    {
        const bool branch_taken_0x1b772c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b772c) {
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B7734u;
    // 0x1b7734: 0x1662003f  bne         $s3, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1B7734u;
    {
        const bool branch_taken_0x1b7734 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7734u;
        // 0x1b7738: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7734) {
            ctx->pc = 0x1B7834u;
            goto label_1b7834;
        }
    }
    ctx->pc = 0x1B773Cu;
label_1b773c:
    // 0x1b773c: 0x8e4202f0  lw          $v0, 0x2F0($s2)
    ctx->pc = 0x1b773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
    // 0x1b7740: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1b7740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1b7744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7744u;
    {
        const bool branch_taken_0x1b7744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7744u;
        // 0x1b7748: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7744) {
            ctx->pc = 0x1B7754u;
            goto label_1b7754;
        }
    }
    ctx->pc = 0x1B774Cu;
    // 0x1b774c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1B774Cu;
    {
        const bool branch_taken_0x1b774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B774Cu;
        // 0x1b7750: 0xae4202f0  sw          $v0, 0x2F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b774c) {
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7754u;
label_1b7754:
    // 0x1b7754: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x1b7754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x1b7758: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B7758u;
    {
        const bool branch_taken_0x1b7758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7758) {
            ctx->pc = 0x1B7808u;
            goto label_1b7808;
        }
    }
    ctx->pc = 0x1B7760u;
    // 0x1b7760: 0x8e500268  lw          $s0, 0x268($s2)
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x1b7764: 0xc080858  jal         func_202160
    ctx->pc = 0x1B7764u;
    SET_GPR_U32(ctx, 31, 0x1B776Cu);
    ctx->pc = 0x1B7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7764u;
    // 0x1b7768: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1B7764u, 0x1B776Cu)) {
        return;
    }
    ctx->pc = 0x1B776Cu;
label_1b776c:
    // 0x1b776c: 0x26510270  addiu       $s1, $s2, 0x270
    ctx->pc = 0x1b776cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x1b7770: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b7770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7774: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1b7774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1b7778: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b777c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b777cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b7780: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b7780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1b7784: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b7788: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7788u;
    {
        const bool branch_taken_0x1b7788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7788) {
            ctx->pc = 0x1B778Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7788u;
            // 0x1b778c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7790u;
            goto label_1b7790;
        }
    }
    ctx->pc = 0x1B7790u;
label_1b7790:
    // 0x1b7790: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b7794: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7794u;
    {
        const bool branch_taken_0x1b7794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7794) {
            ctx->pc = 0x1B7798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7794u;
            // 0x1b7798: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B779Cu;
            goto label_1b779c;
        }
    }
    ctx->pc = 0x1B779Cu;
label_1b779c:
    // 0x1b779c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b779cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b77a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b77a4: 0xae4202bc  sw          $v0, 0x2BC($s2)
    ctx->pc = 0x1b77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 2));
    // 0x1b77a8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1b77a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1b77ac: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x1b77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x1b77b0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b77b4: 0x8e430284  lw          $v1, 0x284($s2)
    ctx->pc = 0x1b77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 644)));
    // 0x1b77b8: 0x8e44026c  lw          $a0, 0x26C($s2)
    ctx->pc = 0x1b77b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x1b77bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b77c0: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1b77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1b77c4: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x1b77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    // 0x1b77c8: 0xae440268  sw          $a0, 0x268($s2)
    ctx->pc = 0x1b77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 4));
    // 0x1b77cc: 0xae430284  sw          $v1, 0x284($s2)
    ctx->pc = 0x1b77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 644), GPR_U32(ctx, 3));
    // 0x1b77d0: 0xae4002c4  sw          $zero, 0x2C4($s2)
    ctx->pc = 0x1b77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 708), GPR_U32(ctx, 0));
    // 0x1b77d4: 0x8cc34398  lw          $v1, 0x4398($a2)
    ctx->pc = 0x1b77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4398u));
    // 0x1b77d8: 0x8ca21a70  lw          $v0, 0x1A70($a1)
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b77dc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B77DCu;
    {
        const bool branch_taken_0x1b77dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77DCu;
        // 0x1b77e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77dc) {
            ctx->pc = 0x1B7800u;
            goto label_1b7800;
        }
    }
    ctx->pc = 0x1B77E4u;
    // 0x1b77e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b77e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B77E8u;
    {
        const bool branch_taken_0x1b77e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77E8u;
        // 0x1b77ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77e8) {
            ctx->pc = 0x1B77FCu;
            goto label_1b77fc;
        }
    }
    ctx->pc = 0x1B77F0u;
    // 0x1b77f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b77f4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B77F4u;
    SET_GPR_U32(ctx, 31, 0x1B77FCu);
    ctx->pc = 0x1B77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77F4u;
    // 0x1b77f8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B77F4u, 0x1B77FCu)) {
        return;
    }
    ctx->pc = 0x1B77FCu;
label_1b77fc:
    // 0x1b77fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b7800:
    // 0x1b7800: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1B7800u;
    {
        const bool branch_taken_0x1b7800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7800u;
        // 0x1b7804: 0xac4092a0  sw          $zero, -0x6D60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294939296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7800) {
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7808u;
label_1b7808:
    // 0x1b7808: 0x1660004b  bnez        $s3, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B7808u;
    {
        const bool branch_taken_0x1b7808 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7808) {
            ctx->pc = 0x1B7938u;
            goto label_1b7938;
        }
    }
    ctx->pc = 0x1B7810u;
    // 0x1b7810: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x1b7814: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1B7814u;
    {
        const bool branch_taken_0x1b7814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7814u;
        // 0x1b7818: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7814) {
            ctx->pc = 0x1B79C4u;
            goto label_1b79c4;
        }
    }
    ctx->pc = 0x1B781Cu;
    // 0x1b781c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7820: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b7820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b7824: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1B7824u;
    SET_GPR_U32(ctx, 31, 0x1B782Cu);
    ctx->pc = 0x1B7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7824u;
    // 0x1b7828: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1B7824u, 0x1B782Cu)) {
        return;
    }
    ctx->pc = 0x1B782Cu;
label_1b782c:
    // 0x1b782c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1B782Cu;
    {
        const bool branch_taken_0x1b782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B782Cu;
        // 0x1b7830: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b782c) {
            ctx->pc = 0x1B7A28u;
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B7834u;
label_1b7834:
    // 0x1b7834: 0x16620058  bne         $s3, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1B7834u;
    {
        const bool branch_taken_0x1b7834 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7834) {
            ctx->pc = 0x1B7998u;
            goto label_1b7998;
        }
    }
    ctx->pc = 0x1B783Cu;
    // 0x1b783c: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x1b783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x1b7840: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1B7840u;
    {
        const bool branch_taken_0x1b7840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7840u;
        // 0x1b7844: 0x26500270  addiu       $s0, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7840) {
            ctx->pc = 0x1B7938u;
            goto label_1b7938;
        }
    }
    ctx->pc = 0x1B7848u;
    // 0x1b7848: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b7848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b784c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7850: 0x10a0004f  beqz        $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1B7850u;
    {
        const bool branch_taken_0x1b7850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7850u;
        // 0x1b7854: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7850) {
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7858u;
    // 0x1b7858: 0x8e420284  lw          $v0, 0x284($s2)
    ctx->pc = 0x1b7858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 644)));
    // 0x1b785c: 0x8e430268  lw          $v1, 0x268($s2)
    ctx->pc = 0x1b785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x1b7860: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1b7860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1b7864: 0xae450268  sw          $a1, 0x268($s2)
    ctx->pc = 0x1b7864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 5));
    // 0x1b7868: 0xae43026c  sw          $v1, 0x26C($s2)
    ctx->pc = 0x1b7868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 3));
    // 0x1b786c: 0xae420284  sw          $v0, 0x284($s2)
    ctx->pc = 0x1b786cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 644), GPR_U32(ctx, 2));
    // 0x1b7870: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b7870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b7874: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7874u;
    {
        const bool branch_taken_0x1b7874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7874u;
        // 0x1b7878: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7874) {
            ctx->pc = 0x1B78A0u;
            goto label_1b78a0;
        }
    }
    ctx->pc = 0x1B787Cu;
    // 0x1b787c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b787cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7880: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b7880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b7884: 0x0  nop
    ctx->pc = 0x1b7884u;
    // NOP
label_1b7888:
    // 0x1b7888: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7888u;
    {
        const bool branch_taken_0x1b7888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7888) {
            ctx->pc = 0x1B78A4u;
            goto label_1b78a4;
        }
    }
    ctx->pc = 0x1B7890u;
    // 0x1b7890: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b7890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b7894: 0x0  nop
    ctx->pc = 0x1b7894u;
    // NOP
    // 0x1b7898: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B7898u;
    {
        const bool branch_taken_0x1b7898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7898) {
            ctx->pc = 0x1B789Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7898u;
            // 0x1b789c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7888;
        }
    }
    ctx->pc = 0x1B78A0u;
label_1b78a0:
    // 0x1b78a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b78a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b78a4:
    // 0x1b78a4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B78A4u;
    {
        const bool branch_taken_0x1b78a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78A4u;
        // 0x1b78a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78a4) {
            ctx->pc = 0x1B78F4u;
            goto label_1b78f4;
        }
    }
    ctx->pc = 0x1B78ACu;
    // 0x1b78ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b78b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B78B0u;
    {
        const bool branch_taken_0x1b78b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78B0u;
        // 0x1b78b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78b0) {
            ctx->pc = 0x1B78C0u;
            goto label_1b78c0;
        }
    }
    ctx->pc = 0x1B78B8u;
    // 0x1b78b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B78B8u;
    {
        const bool branch_taken_0x1b78b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78B8u;
        // 0x1b78bc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78b8) {
            ctx->pc = 0x1B78C4u;
            goto label_1b78c4;
        }
    }
    ctx->pc = 0x1B78C0u;
label_1b78c0:
    // 0x1b78c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b78c4:
    // 0x1b78c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b78c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B78C8u;
    {
        const bool branch_taken_0x1b78c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78C8u;
        // 0x1b78cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78c8) {
            ctx->pc = 0x1B78D8u;
            goto label_1b78d8;
        }
    }
    ctx->pc = 0x1B78D0u;
    // 0x1b78d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B78D0u;
    {
        const bool branch_taken_0x1b78d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78D0u;
        // 0x1b78d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78d0) {
            ctx->pc = 0x1B78DCu;
            goto label_1b78dc;
        }
    }
    ctx->pc = 0x1B78D8u;
label_1b78d8:
    // 0x1b78d8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b78dc:
    // 0x1b78dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B78DCu;
    SET_GPR_U32(ctx, 31, 0x1B78E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B78DCu, 0x1B78E4u)) {
        return;
    }
    ctx->pc = 0x1B78E4u;
label_1b78e4:
    // 0x1b78e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b78e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b78ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b78f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b78f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b78f4:
    // 0x1b78f4: 0xae4002c0  sw          $zero, 0x2C0($s2)
    ctx->pc = 0x1b78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 0));
    // 0x1b78f8: 0xae4302b8  sw          $v1, 0x2B8($s2)
    ctx->pc = 0x1b78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 696), GPR_U32(ctx, 3));
    // 0x1b78fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b7900: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b7900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1b7904: 0x8c444390  lw          $a0, 0x4390($v0)
    ctx->pc = 0x1b7904u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4390u));
    // 0x1b7908: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b790c: 0x50820020  beql        $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B790Cu;
    {
        const bool branch_taken_0x1b790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b790c) {
            ctx->pc = 0x1B7910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B790Cu;
            // 0x1b7910: 0xae2092a0  sw          $zero, -0x6D60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939296), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7914u;
    // 0x1b7914: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b7914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b7918: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B7918u;
    {
        const bool branch_taken_0x1b7918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7918) {
            ctx->pc = 0x1B791Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7918u;
            // 0x1b791c: 0xae2092a0  sw          $zero, -0x6D60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939296), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7920u;
    // 0x1b7920: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b7924: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7928: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B7928u;
    SET_GPR_U32(ctx, 31, 0x1B7930u);
    ctx->pc = 0x1B792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7928u;
    // 0x1b792c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B7928u, 0x1B7930u)) {
        return;
    }
    ctx->pc = 0x1B7930u;
label_1b7930:
    // 0x1b7930: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7930u;
    {
        const bool branch_taken_0x1b7930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7930u;
        // 0x1b7934: 0xae2092a0  sw          $zero, -0x6D60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7930) {
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7938u;
label_1b7938:
    // 0x1b7938: 0xc0761ca  jal         func_1D8728
    ctx->pc = 0x1B7938u;
    SET_GPR_U32(ctx, 31, 0x1B7940u);
    ctx->pc = 0x1D8728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8728u, 0x1B7938u, 0x1B7940u)) {
        return;
    }
    ctx->pc = 0x1B7940u;
label_1b7940:
    // 0x1b7940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7944: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1b7948: 0x8c6292a0  lw          $v0, -0x6D60($v1)
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3392A0u));
    // 0x1b794c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1b794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1b7950: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b7950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b7954: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B7954u;
    {
        const bool branch_taken_0x1b7954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7954u;
        // 0x1b7958: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7954) {
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B795Cu;
    // 0x1b795c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b7960: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b7960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b7964: 0x8c4543c0  lw          $a1, 0x43C0($v0)
    ctx->pc = 0x1b7964u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43C0u));
    // 0x1b7968: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1b7968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b796c: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B796Cu;
    {
        const bool branch_taken_0x1b796c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b796c) {
            ctx->pc = 0x1B7970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B796Cu;
            // 0x1b7970: 0xae3092a0  sw          $s0, -0x6D60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939296), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7990u;
            goto label_1b7990;
        }
    }
    ctx->pc = 0x1B7974u;
    // 0x1b7974: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7978u;
    {
        const bool branch_taken_0x1b7978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7978u;
        // 0x1b797c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7978) {
            ctx->pc = 0x1B798Cu;
            goto label_1b798c;
        }
    }
    ctx->pc = 0x1B7980u;
    // 0x1b7980: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b7980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1b7984: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B7984u;
    SET_GPR_U32(ctx, 31, 0x1B798Cu);
    ctx->pc = 0x1B7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7984u;
    // 0x1b7988: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B7984u, 0x1B798Cu)) {
        return;
    }
    ctx->pc = 0x1B798Cu;
label_1b798c:
    // 0x1b798c: 0xae3092a0  sw          $s0, -0x6D60($s1)
    ctx->pc = 0x1b798cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939296), GPR_U32(ctx, 16));
label_1b7990:
    // 0x1b7990: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B7990u;
    {
        const bool branch_taken_0x1b7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7990u;
        // 0x1b7994: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7990) {
            ctx->pc = 0x1B7A0Cu;
            goto label_1b7a0c;
        }
    }
    ctx->pc = 0x1B7998u;
label_1b7998:
    // 0x1b7998: 0xc06ce22  jal         func_1B3888
    ctx->pc = 0x1B7998u;
    SET_GPR_U32(ctx, 31, 0x1B79A0u);
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1B7998u, 0x1B79A0u)) {
        return;
    }
    ctx->pc = 0x1B79A0u;
label_1b79a0:
    // 0x1b79a0: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B79A0u;
    {
        const bool branch_taken_0x1b79a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b79a0) {
            ctx->pc = 0x1B79A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B79A0u;
            // 0x1b79a4: 0x8e420264  lw          $v0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B79BCu;
            goto label_1b79bc;
        }
    }
    ctx->pc = 0x1B79A8u;
    // 0x1b79a8: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1B79A8u;
    SET_GPR_U32(ctx, 31, 0x1B79B0u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1B79A8u, 0x1B79B0u)) {
        return;
    }
    ctx->pc = 0x1B79B0u;
label_1b79b0:
    // 0x1b79b0: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B79B0u;
    {
        const bool branch_taken_0x1b79b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b79b0) {
            ctx->pc = 0x1B7A0Cu;
            goto label_1b7a0c;
        }
    }
    ctx->pc = 0x1B79B8u;
    // 0x1b79b8: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_1b79bc:
    // 0x1b79bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B79BCu;
    {
        const bool branch_taken_0x1b79bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79BCu;
        // 0x1b79c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79bc) {
            ctx->pc = 0x1B7A0Cu;
            goto label_1b7a0c;
        }
    }
    ctx->pc = 0x1B79C4u;
label_1b79c4:
    // 0x1b79c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b79c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b79c8: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1b79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x1b79cc: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1B79CCu;
    SET_GPR_U32(ctx, 31, 0x1B79D4u);
    ctx->pc = 0x1B79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79CCu;
    // 0x1b79d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1B79CCu, 0x1B79D4u)) {
        return;
    }
    ctx->pc = 0x1B79D4u;
label_1b79d4:
    // 0x1b79d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1b79d8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b79dc: 0x8c6343b8  lw          $v1, 0x43B8($v1)
    ctx->pc = 0x1b79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1b79e0: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1b79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b79e4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B79E4u;
    {
        const bool branch_taken_0x1b79e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E4u;
        // 0x1b79e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e4) {
            ctx->pc = 0x1B7A28u;
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B79ECu;
    // 0x1b79ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b79f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B79F0u;
    {
        const bool branch_taken_0x1b79f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F0u;
        // 0x1b79f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79f0) {
            ctx->pc = 0x1B7A28u;
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B79F8u;
    // 0x1b79f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b79fc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B79FCu;
    SET_GPR_U32(ctx, 31, 0x1B7A04u);
    ctx->pc = 0x1B7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79FCu;
    // 0x1b7a00: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B79FCu, 0x1B7A04u)) {
        return;
    }
    ctx->pc = 0x1B7A04u;
label_1b7a04:
    // 0x1b7a04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7A04u;
    {
        const bool branch_taken_0x1b7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A04u;
        // 0x1b7a08: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a04) {
            ctx->pc = 0x1B7A28u;
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B7A0Cu;
label_1b7a0c:
    // 0x1b7a0c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7A0Cu;
    {
        const bool branch_taken_0x1b7a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A0Cu;
        // 0x1b7a10: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a0c) {
            ctx->pc = 0x1B7A28u;
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B7A14u;
    // 0x1b7a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b7a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b7a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a1c: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1B7A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A24u);
    ctx->pc = 0x1B7A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A1Cu;
    // 0x1b7a20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1B7A1Cu, 0x1B7A24u)) {
        return;
    }
    ctx->pc = 0x1B7A24u;
label_1b7a24:
    // 0x1b7a24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b7a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b7a28:
    // 0x1b7a28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b7a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7a2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b7a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7a30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a38: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1b7a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A3Cu;
        // 0x1b7a40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7A44u;
    // 0x1b7a44: 0x0  nop
    ctx->pc = 0x1b7a44u;
    // NOP
    ctx->pc = 0x1b7a48u;
}
