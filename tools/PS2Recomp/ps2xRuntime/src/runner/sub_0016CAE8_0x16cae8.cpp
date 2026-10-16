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

// Function: sub_0016CAE8
// Address: 0x16cae8 - 0x16cc08
void sub_0016CAE8_0x16cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CAE8_0x16cae8");
#endif

    switch (ctx->pc) {
        case 0x16cb04u: goto label_16cb04;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb4cu: goto label_16cb4c;
        case 0x16cb64u: goto label_16cb64;
        case 0x16cb74u: goto label_16cb74;
        case 0x16cb84u: goto label_16cb84;
        case 0x16cbbcu: goto label_16cbbc;
        case 0x16cbc4u: goto label_16cbc4;
        case 0x16cbf0u: goto label_16cbf0;
        default: break;
    }

    ctx->pc = 0x16cae8u;

    // 0x16cae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16cae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16caec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16caf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16caf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16caf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16caf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16caf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16cafc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16CAFCu;
    SET_GPR_U32(ctx, 31, 0x16CB04u);
    ctx->pc = 0x16CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAFCu;
    // 0x16cb00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16CAFCu, 0x16CB04u)) {
        return;
    }
    ctx->pc = 0x16CB04u;
label_16cb04:
    // 0x16cb04: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x16cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x16cb08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cb0c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16CB0Cu;
    {
        const bool branch_taken_0x16cb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cb0c) {
            ctx->pc = 0x16CB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB0Cu;
            // 0x16cb10: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB34u;
            goto label_16cb34;
        }
    }
    ctx->pc = 0x16CB14u;
    // 0x16cb14: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x16cb18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb1c: 0xc05a818  jal         func_16A060
    ctx->pc = 0x16CB1Cu;
    SET_GPR_U32(ctx, 31, 0x16CB24u);
    ctx->pc = 0x16CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB1Cu;
    // 0x16cb20: 0x24844ac8  addiu       $a0, $a0, 0x4AC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x16CB1Cu, 0x16CB24u)) {
        return;
    }
    ctx->pc = 0x16CB24u;
label_16cb24:
    // 0x16cb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cb28: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x16cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x16cb2c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x16cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x16cb30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16cb34:
    // 0x16cb34: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16CB34u;
    {
        const bool branch_taken_0x16cb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cb34) {
            ctx->pc = 0x16CB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB34u;
            // 0x16cb38: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB54u;
            goto label_16cb54;
        }
    }
    ctx->pc = 0x16CB3Cu;
    // 0x16cb3c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x16cb40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb44: 0xc05a818  jal         func_16A060
    ctx->pc = 0x16CB44u;
    SET_GPR_U32(ctx, 31, 0x16CB4Cu);
    ctx->pc = 0x16CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB44u;
    // 0x16cb48: 0x24844ae8  addiu       $a0, $a0, 0x4AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x16CB44u, 0x16CB4Cu)) {
        return;
    }
    ctx->pc = 0x16CB4Cu;
label_16cb4c:
    // 0x16cb4c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x16cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x16cb50: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_16cb54:
    // 0x16cb54: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x16CB54u;
    {
        const bool branch_taken_0x16cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb54) {
            ctx->pc = 0x16CB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB54u;
            // 0x16cb58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CB5Cu;
    // 0x16cb5c: 0xc05b49c  jal         func_16D270
    ctx->pc = 0x16CB5Cu;
    SET_GPR_U32(ctx, 31, 0x16CB64u);
    ctx->pc = 0x16CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB5Cu;
    // 0x16cb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D270u, 0x16CB5Cu, 0x16CB64u)) {
        return;
    }
    ctx->pc = 0x16CB64u;
label_16cb64:
    // 0x16cb64: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x16CB64u;
    {
        const bool branch_taken_0x16cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb64) {
            ctx->pc = 0x16CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB64u;
            // 0x16cb68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CB6Cu;
    // 0x16cb6c: 0xc05b486  jal         func_16D218
    ctx->pc = 0x16CB6Cu;
    SET_GPR_U32(ctx, 31, 0x16CB74u);
    ctx->pc = 0x16CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB6Cu;
    // 0x16cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D218u, 0x16CB6Cu, 0x16CB74u)) {
        return;
    }
    ctx->pc = 0x16CB74u;
label_16cb74:
    // 0x16cb74: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x16CB74u;
    {
        const bool branch_taken_0x16cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb74) {
            ctx->pc = 0x16CB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB74u;
            // 0x16cb78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CB7Cu;
    // 0x16cb7c: 0xc05c29e  jal         func_170A78
    ctx->pc = 0x16CB7Cu;
    SET_GPR_U32(ctx, 31, 0x16CB84u);
    ctx->pc = 0x16CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB7Cu;
    // 0x16cb80: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170A78u, 0x16CB7Cu, 0x16CB84u)) {
        return;
    }
    ctx->pc = 0x16CB84u;
label_16cb84:
    // 0x16cb84: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x16CB84u;
    {
        const bool branch_taken_0x16cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb84) {
            ctx->pc = 0x16CB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB84u;
            // 0x16cb88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CB8Cu;
    // 0x16cb8c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16cb90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cb94: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16CB94u;
    {
        const bool branch_taken_0x16cb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB94u;
        // 0x16cb98: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb94) {
            ctx->pc = 0x16CBCCu;
            goto label_16cbcc;
        }
    }
    ctx->pc = 0x16CB9Cu;
    // 0x16cb9c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16cba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16cba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cba4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16CBA4u;
    {
        const bool branch_taken_0x16cba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBA4u;
        // 0x16cba8: 0x24454b08  addiu       $a1, $v0, 0x4B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cba4) {
            ctx->pc = 0x16CBB0u;
            goto label_16cbb0;
        }
    }
    ctx->pc = 0x16CBACu;
    // 0x16cbac: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x16cbacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_16cbb0:
    // 0x16cbb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cbb4: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16CBB4u;
    SET_GPR_U32(ctx, 31, 0x16CBBCu);
    ctx->pc = 0x16CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBB4u;
    // 0x16cbb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16CBB4u, 0x16CBBCu)) {
        return;
    }
    ctx->pc = 0x16CBBCu;
label_16cbbc:
    // 0x16cbbc: 0xc05b3f4  jal         func_16CFD0
    ctx->pc = 0x16CBBCu;
    SET_GPR_U32(ctx, 31, 0x16CBC4u);
    ctx->pc = 0x16CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBBCu;
    // 0x16cbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16CFD0u, 0x16CBBCu, 0x16CBC4u)) {
        return;
    }
    ctx->pc = 0x16CBC4u;
label_16cbc4:
    // 0x16cbc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16CBC4u;
    {
        const bool branch_taken_0x16cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBC4u;
        // 0x16cbc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbc4) {
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CBCCu;
label_16cbcc:
    // 0x16cbcc: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x16cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x16cbd0: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CBD0u;
    {
        const bool branch_taken_0x16cbd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cbd0) {
            ctx->pc = 0x16CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBD0u;
            // 0x16cbd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CBD8u;
    // 0x16cbd8: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x16cbdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CBDCu;
    {
        const bool branch_taken_0x16cbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBDCu;
        // 0x16cbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbdc) {
            ctx->pc = 0x16CBF0u;
            goto label_16cbf0;
        }
    }
    ctx->pc = 0x16CBE4u;
    // 0x16cbe4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16cbe8: 0xc05b410  jal         func_16D040
    ctx->pc = 0x16CBE8u;
    SET_GPR_U32(ctx, 31, 0x16CBF0u);
    ctx->pc = 0x16CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBE8u;
    // 0x16cbec: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D040u, 0x16CBE8u, 0x16CBF0u)) {
        return;
    }
    ctx->pc = 0x16CBF0u;
label_16cbf0:
    // 0x16cbf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16cbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16cbf4:
    // 0x16cbf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16cbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x16CBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBFCu;
        // 0x16cc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CC04u;
    // 0x16cc04: 0x0  nop
    ctx->pc = 0x16cc04u;
    // NOP
    ctx->pc = 0x16cc08u;
}
