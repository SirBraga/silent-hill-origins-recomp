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

// Function: sub_001F76C8
// Address: 0x1f76c8 - 0x1f7970
void sub_001F76C8_0x1f76c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F76C8_0x1f76c8");
#endif

    switch (ctx->pc) {
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7714u: goto label_1f7714;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77f0u: goto label_1f77f0;
        case 0x1f7800u: goto label_1f7800;
        case 0x1f7810u: goto label_1f7810;
        case 0x1f7888u: goto label_1f7888;
        case 0x1f78e0u: goto label_1f78e0;
        case 0x1f7944u: goto label_1f7944;
        default: break;
    }

    ctx->pc = 0x1f76c8u;

    // 0x1f76c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1f76c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1f76cc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1f76ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1f76d0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1f76d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1f76d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f76d8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x1f76d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x1f76dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f76dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76e0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1f76e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1f76e4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1f76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1f76e8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x1f76e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x1f76ec: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x1f76ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x1f76f0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1f76f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1f76f4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x1f76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x1f76f8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1f76f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1f76fc: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F76FCu;
    SET_GPR_U32(ctx, 31, 0x1F7704u);
    ctx->pc = 0x1F7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76FCu;
    // 0x1f7700: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F76FCu, 0x1F7704u)) {
        return;
    }
    ctx->pc = 0x1F7704u;
label_1f7704:
    // 0x1f7704: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7708: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1f770c: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F770Cu;
    SET_GPR_U32(ctx, 31, 0x1F7714u);
    ctx->pc = 0x1F7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F770Cu;
    // 0x1f7710: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F770Cu, 0x1F7714u)) {
        return;
    }
    ctx->pc = 0x1F7714u;
label_1f7714:
    // 0x1f7714: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f7714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7718: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1f7718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f771c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F771Cu;
    {
        const bool branch_taken_0x1f771c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F771Cu;
        // 0x1f7720: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f771c) {
            ctx->pc = 0x1F7778u;
            goto label_1f7778;
        }
    }
    ctx->pc = 0x1F7724u;
    // 0x1f7724: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7728: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f7728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f772c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F772Cu;
    {
        const bool branch_taken_0x1f772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f772c) {
            ctx->pc = 0x1F7730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F772Cu;
            // 0x1f7730: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F77A0u;
            goto label_1f77a0;
        }
    }
    ctx->pc = 0x1F7734u;
    // 0x1f7734: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1f7734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1f7738: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7738u;
        // 0x1f773c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F7754u;
            goto label_1f7754;
        }
    }
    ctx->pc = 0x1F7740u;
    // 0x1f7740: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1f7740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1f7744: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7744u;
    {
        const bool branch_taken_0x1f7744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7744u;
        // 0x1f7748: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7744) {
            ctx->pc = 0x1F7764u;
            goto label_1f7764;
        }
    }
    ctx->pc = 0x1F774Cu;
    // 0x1f774c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F774Cu;
    {
        const bool branch_taken_0x1f774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F774Cu;
        // 0x1f7750: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f774c) {
            ctx->pc = 0x1F7780u;
            goto label_1f7780;
        }
    }
    ctx->pc = 0x1F7754u;
label_1f7754:
    // 0x1f7754: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7754u;
    {
        const bool branch_taken_0x1f7754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7754u;
        // 0x1f7758: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7754) {
            ctx->pc = 0x1F7770u;
            goto label_1f7770;
        }
    }
    ctx->pc = 0x1F775Cu;
    // 0x1f775c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F775Cu;
    {
        const bool branch_taken_0x1f775c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F775Cu;
        // 0x1f7760: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f775c) {
            ctx->pc = 0x1F77A0u;
            goto label_1f77a0;
        }
    }
    ctx->pc = 0x1F7764u;
label_1f7764:
    // 0x1f7764: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1f7764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1f7768: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1F7768u;
    {
        const bool branch_taken_0x1f7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7768u;
        // 0x1f776c: 0x24441a08  addiu       $a0, $v0, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7768) {
            ctx->pc = 0x1F793Cu;
            goto label_1f793c;
        }
    }
    ctx->pc = 0x1F7770u;
label_1f7770:
    // 0x1f7770: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7770u;
    {
        const bool branch_taken_0x1f7770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7770u;
        // 0x1f7774: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7770) {
            ctx->pc = 0x1F7794u;
            goto label_1f7794;
        }
    }
    ctx->pc = 0x1F7778u;
label_1f7778:
    // 0x1f7778: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f777c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f7780:
    // 0x1f7780: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1f7780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f7784: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1f7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1f7788: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f7788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f778c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1F778Cu;
    {
        const bool branch_taken_0x1f778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F778Cu;
        // 0x1f7790: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f778c) {
            ctx->pc = 0x1F793Cu;
            goto label_1f793c;
        }
    }
    ctx->pc = 0x1F7794u;
label_1f7794:
    // 0x1f7794: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7794u;
    {
        const bool branch_taken_0x1f7794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7794u;
        // 0x1f7798: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7794) {
            ctx->pc = 0x1F77B8u;
            goto label_1f77b8;
        }
    }
    ctx->pc = 0x1F779Cu;
    // 0x1f779c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1f77a0:
    // 0x1f77a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f77a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f77a8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1f77a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1f77ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f77acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f77b0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1F77B0u;
    {
        const bool branch_taken_0x1f77b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77B0u;
        // 0x1f77b4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77b0) {
            ctx->pc = 0x1F793Cu;
            goto label_1f793c;
        }
    }
    ctx->pc = 0x1F77B8u;
label_1f77b8:
    // 0x1f77b8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x1f77b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x1f77bc: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x1f77bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1f77c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f77c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f77c4: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x1f77c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x1f77c8: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x1f77c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x1f77cc: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x1f77ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x1f77d0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1f77d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1f77d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f77d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77d8: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x1F77D8u;
    SET_GPR_U32(ctx, 31, 0x1F77E0u);
    ctx->pc = 0x1F77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77D8u;
    // 0x1f77dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x1F77D8u, 0x1F77E0u)) {
        return;
    }
    ctx->pc = 0x1F77E0u;
label_1f77e0:
    // 0x1f77e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f77e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f77e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77e8: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x1F77E8u;
    SET_GPR_U32(ctx, 31, 0x1F77F0u);
    ctx->pc = 0x1F77ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77E8u;
    // 0x1f77ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x1F77E8u, 0x1F77F0u)) {
        return;
    }
    ctx->pc = 0x1F77F0u;
label_1f77f0:
    // 0x1f77f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f77f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f77f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77f8: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x1F77F8u;
    SET_GPR_U32(ctx, 31, 0x1F7800u);
    ctx->pc = 0x1F77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77F8u;
    // 0x1f77fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x1F77F8u, 0x1F7800u)) {
        return;
    }
    ctx->pc = 0x1F7800u;
label_1f7800:
    // 0x1f7800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7808: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x1F7808u;
    SET_GPR_U32(ctx, 31, 0x1F7810u);
    ctx->pc = 0x1F780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7808u;
    // 0x1f780c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x1F7808u, 0x1F7810u)) {
        return;
    }
    ctx->pc = 0x1F7810u;
label_1f7810:
    // 0x1f7810: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x1f7810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1f7814: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1f7814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7818: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1f7818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1f781c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x1f781cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f7820: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x1f7820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1f7824: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1f7824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1f7828: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1f7828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f782c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x1f782cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x1f7830: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f7830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f7834: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1f7834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1f7838: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x1f7838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f783c: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x1f783cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1f7840: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1f7840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1f7844: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1f7844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f7848: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x1f7848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x1f784c: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x1f784cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x1f7850: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f7850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f7854: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1f7854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1f7858: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f7858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f785c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7860: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1f7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1f7864: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f7864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1f7868: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1f7868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f786c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F786Cu;
        // 0x1f7870: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F78B4u;
            goto label_1f78b4;
        }
    }
    ctx->pc = 0x1F7874u;
    // 0x1f7874: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1f7874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7878: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x1f7878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f787c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7880: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x1f7880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x1f7884: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1f7884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1f7888:
    // 0x1f7888: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f7888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f788c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f788cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f7890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7890u;
    {
        const bool branch_taken_0x1f7890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7890u;
        // 0x1f7894: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7890) {
            ctx->pc = 0x1F78A0u;
            goto label_1f78a0;
        }
    }
    ctx->pc = 0x1F7898u;
    // 0x1f7898: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1f7898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1f789c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1f789cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_1f78a0:
    // 0x1f78a0: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1f78a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x1f78a4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1f78a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f78a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F78A8u;
    {
        const bool branch_taken_0x1f78a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A8u;
        // 0x1f78ac: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a8) {
            ctx->pc = 0x1F7888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7888;
        }
    }
    ctx->pc = 0x1F78B0u;
    // 0x1f78b0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1f78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_1f78b4:
    // 0x1f78b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f78b8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1f78b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1f78bc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1f78bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f78c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F78C0u;
    {
        const bool branch_taken_0x1f78c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78C0u;
        // 0x1f78c4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78c0) {
            ctx->pc = 0x1F7908u;
            goto label_1f7908;
        }
    }
    ctx->pc = 0x1F78C8u;
    // 0x1f78c8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1f78c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f78cc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1f78ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f78d0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1f78d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1f78d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f78d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f78d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f78d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f78dc: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1f78dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_1f78e0:
    // 0x1f78e0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x1f78e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x1f78e4: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x1f78e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1f78e8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x1f78e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x1f78ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f78ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f78f0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1f78f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
    // 0x1f78f4: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x1f78f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f78f8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F78F8u;
    {
        const bool branch_taken_0x1f78f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F8u;
        // 0x1f78fc: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78f8) {
            ctx->pc = 0x1F78E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f78e0;
        }
    }
    ctx->pc = 0x1F7900u;
    // 0x1f7900: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1f7900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1f7904: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1f7904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1f7908:
    // 0x1f7908: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f7908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f790c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F790Cu;
    {
        const bool branch_taken_0x1f790c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f790c) {
            ctx->pc = 0x1F7910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F790Cu;
            // 0x1f7910: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7930u;
            goto label_1f7930;
        }
    }
    ctx->pc = 0x1F7914u;
    // 0x1f7914: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x1f7914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x1f7918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7918u;
    {
        const bool branch_taken_0x1f7918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7918u;
        // 0x1f791c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7918) {
            ctx->pc = 0x1F7928u;
            goto label_1f7928;
        }
    }
    ctx->pc = 0x1F7920u;
    // 0x1f7920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7920u;
    {
        const bool branch_taken_0x1f7920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7920u;
        // 0x1f7924: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7920) {
            ctx->pc = 0x1F792Cu;
            goto label_1f792c;
        }
    }
    ctx->pc = 0x1F7928u;
label_1f7928:
    // 0x1f7928: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x1f7928u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
label_1f792c:
    // 0x1f792c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1f7930:
    // 0x1f7930: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7934: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1f7934u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1f7938: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f7938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f793c:
    // 0x1f793c: 0xc07dc7e  jal         func_1F71F8
    ctx->pc = 0x1F793Cu;
    SET_GPR_U32(ctx, 31, 0x1F7944u);
    ctx->pc = 0x1F71F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F71F8u, 0x1F793Cu, 0x1F7944u)) {
        return;
    }
    ctx->pc = 0x1F7944u;
label_1f7944:
    // 0x1f7944: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1f7944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f7948: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x1f7948u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f794c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x1f794cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f7950: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x1f7950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f7954: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1f7954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f7958: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x1f7958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f795c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1f795cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f7960: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x1f7960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7964: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1f7964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7968: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7968u;
        // 0x1f796c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7970u;
}
