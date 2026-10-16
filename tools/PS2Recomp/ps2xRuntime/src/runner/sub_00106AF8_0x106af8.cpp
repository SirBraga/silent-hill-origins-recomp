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

// Function: sub_00106AF8
// Address: 0x106af8 - 0x106c50
void sub_00106AF8_0x106af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106AF8_0x106af8");
#endif

    switch (ctx->pc) {
        case 0x106b1cu: goto label_106b1c;
        case 0x106b40u: goto label_106b40;
        case 0x106b48u: goto label_106b48;
        case 0x106b60u: goto label_106b60;
        case 0x106bbcu: goto label_106bbc;
        case 0x106bfcu: goto label_106bfc;
        case 0x106c10u: goto label_106c10;
        case 0x106c28u: goto label_106c28;
        default: break;
    }

    ctx->pc = 0x106af8u;

    // 0x106af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x106afc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x106afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x106b00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x106b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x106b04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x106b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x106b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x106b0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x106b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x106b10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106b14: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x106B14u;
    SET_GPR_U32(ctx, 31, 0x106B1Cu);
    ctx->pc = 0x106B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B14u;
    // 0x106b18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x106B14u, 0x106B1Cu)) {
        return;
    }
    ctx->pc = 0x106B1Cu;
label_106b1c:
    // 0x106b1c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x106b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x106b20: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x106B20u;
    {
        const bool branch_taken_0x106b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106b20) {
            ctx->pc = 0x106B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106B20u;
            // 0x106b24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C34u;
            goto label_106c34;
        }
    }
    ctx->pc = 0x106B28u;
    // 0x106b28: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x106b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x106b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b30: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x106b30u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x106b34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b38: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x106B38u;
    SET_GPR_U32(ctx, 31, 0x106B40u);
    ctx->pc = 0x106B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B38u;
    // 0x106b3c: 0x26530038  addiu       $s3, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x106B38u, 0x106B40u)) {
        return;
    }
    ctx->pc = 0x106B40u;
label_106b40:
    // 0x106b40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x106B40u;
    {
        const bool branch_taken_0x106b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B40u;
        // 0x106b44: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b40) {
            ctx->pc = 0x106BC0u;
            goto label_106bc0;
        }
    }
    ctx->pc = 0x106B48u;
label_106b48:
    // 0x106b48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x106b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106b4c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106B4Cu;
    {
        const bool branch_taken_0x106b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B4Cu;
        // 0x106b50: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b4c) {
            ctx->pc = 0x106BA4u;
            goto label_106ba4;
        }
    }
    ctx->pc = 0x106B54u;
    // 0x106b54: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x106b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x106b58: 0xc080858  jal         func_202160
    ctx->pc = 0x106B58u;
    SET_GPR_U32(ctx, 31, 0x106B60u);
    ctx->pc = 0x106B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B58u;
    // 0x106b5c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x106B58u, 0x106B60u)) {
        return;
    }
    ctx->pc = 0x106B60u;
label_106b60:
    // 0x106b60: 0x26510044  addiu       $s1, $s2, 0x44
    ctx->pc = 0x106b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x106b64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x106b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b68: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x106b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x106b6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x106b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106b70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x106b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x106b74: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x106b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x106b78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x106b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106b7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106B7Cu;
    {
        const bool branch_taken_0x106b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106b7c) {
            ctx->pc = 0x106B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106B7Cu;
            // 0x106b80: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106B84u;
            goto label_106b84;
        }
    }
    ctx->pc = 0x106B84u;
label_106b84:
    // 0x106b84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x106b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106b88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106B88u;
    {
        const bool branch_taken_0x106b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106b88) {
            ctx->pc = 0x106B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106B88u;
            // 0x106b8c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106B90u;
            goto label_106b90;
        }
    }
    ctx->pc = 0x106B90u;
label_106b90:
    // 0x106b90: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x106b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x106b94: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x106b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x106b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106b9c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x106b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x106ba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x106ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106ba4:
    // 0x106ba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x106ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106bac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106bb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106bb4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x106BB4u;
    SET_GPR_U32(ctx, 31, 0x106BBCu);
    ctx->pc = 0x106BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BB4u;
    // 0x106bb8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x106BB4u, 0x106BBCu)) {
        return;
    }
    ctx->pc = 0x106BBCu;
label_106bbc:
    // 0x106bbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106bc0:
    // 0x106bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106bc4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x106BC4u;
    {
        const bool branch_taken_0x106bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BC4u;
        // 0x106bc8: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bc4) {
            ctx->pc = 0x106B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106b48;
        }
    }
    ctx->pc = 0x106BCCu;
    // 0x106bcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x106bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x106bd0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x106bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x106bd4: 0x8c4445e0  lw          $a0, 0x45E0($v0)
    ctx->pc = 0x106bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B45E0u));
    // 0x106bd8: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x106bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x106bdc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106be0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106BE0u;
    {
        const bool branch_taken_0x106be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x106BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BE0u;
        // 0x106be4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106be0) {
            ctx->pc = 0x106BFCu;
            goto label_106bfc;
        }
    }
    ctx->pc = 0x106BE8u;
    // 0x106be8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106bec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106BECu;
    {
        const bool branch_taken_0x106bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BECu;
        // 0x106bf0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bec) {
            ctx->pc = 0x106C00u;
            goto label_106c00;
        }
    }
    ctx->pc = 0x106BF4u;
    // 0x106bf4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x106BF4u;
    SET_GPR_U32(ctx, 31, 0x106BFCu);
    ctx->pc = 0x106BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BF4u;
    // 0x106bf8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x106BF4u, 0x106BFCu)) {
        return;
    }
    ctx->pc = 0x106BFCu;
label_106bfc:
    // 0x106bfc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x106bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_106c00:
    // 0x106c00: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C00u;
    {
        const bool branch_taken_0x106c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c00) {
            ctx->pc = 0x106C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106C00u;
            // 0x106c04: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106C14u;
            goto label_106c14;
        }
    }
    ctx->pc = 0x106C08u;
    // 0x106c08: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x106C08u;
    SET_GPR_U32(ctx, 31, 0x106C10u);
    ctx->pc = 0x106C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C08u;
    // 0x106c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106E90u, 0x106C08u, 0x106C10u)) {
        return;
    }
    ctx->pc = 0x106C10u;
label_106c10:
    // 0x106c10: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x106c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_106c14:
    // 0x106c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x106c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c18: 0x24a546a0  addiu       $a1, $a1, 0x46A0
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18080));
    // 0x106c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c20: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x106C20u;
    SET_GPR_U32(ctx, 31, 0x106C28u);
    ctx->pc = 0x106C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C20u;
    // 0x106c24: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x106C20u, 0x106C28u)) {
        return;
    }
    ctx->pc = 0x106C28u;
label_106c28:
    // 0x106c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106c2c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x106c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x106c30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x106c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_106c34:
    // 0x106c34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x106c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106c38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x106c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106c3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x106c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106c44: 0x3e00008  jr          $ra
    ctx->pc = 0x106C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C44u;
        // 0x106c48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C4Cu;
    // 0x106c4c: 0x0  nop
    ctx->pc = 0x106c4cu;
    // NOP
    ctx->pc = 0x106c50u;
}
