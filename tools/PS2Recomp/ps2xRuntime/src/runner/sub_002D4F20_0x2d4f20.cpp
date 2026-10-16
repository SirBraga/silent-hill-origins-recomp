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

// Function: sub_002D4F20
// Address: 0x2d4f20 - 0x2d50d8
void sub_002D4F20_0x2d4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4F20_0x2d4f20");
#endif

    switch (ctx->pc) {
        case 0x2d4f88u: goto label_2d4f88;
        case 0x2d4fb8u: goto label_2d4fb8;
        case 0x2d5008u: goto label_2d5008;
        case 0x2d5090u: goto label_2d5090;
        default: break;
    }

    ctx->pc = 0x2d4f20u;

    // 0x2d4f20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d4f24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d4f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d4f28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d4f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d4f2c: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2d4f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d4f30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d4f34: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x2d4f34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4f38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d4f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d4f3c: 0x3631fff0  ori         $s1, $s1, 0xFFF0
    ctx->pc = 0x2d4f3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65520);
    // 0x2d4f40: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d4f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d4f44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d4f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d4f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f50: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2d4f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2d4f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f58: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d4f5c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d4f60: 0x51a024  and         $s4, $v0, $s1
    ctx->pc = 0x2d4f60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d4f64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d4f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f68: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x2d4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x2d4f6c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2d4f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d4f70: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d4f74: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2d4f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d4f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f7c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2d4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2d4f80: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2D4F80u;
    SET_GPR_U32(ctx, 31, 0x2D4F88u);
    ctx->pc = 0x2D4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F80u;
    // 0x2d4f84: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2D4F80u, 0x2D4F88u)) {
        return;
    }
    ctx->pc = 0x2D4F88u;
label_2d4f88:
    // 0x2d4f88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d4f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f90: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x2d4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
    // 0x2d4f94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d4f98: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2d4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x2d4f9c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d4fa0: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x2d4fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2d4fa4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2d4fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d4fa8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2D4FA8u;
    {
        const bool branch_taken_0x2d4fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FA8u;
        // 0x2d4fac: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4fa8) {
            ctx->pc = 0x2D4FD8u;
            goto label_2d4fd8;
        }
    }
    ctx->pc = 0x2D4FB0u;
    // 0x2d4fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4fb4: 0x0  nop
    ctx->pc = 0x2d4fb4u;
    // NOP
label_2d4fb8:
    // 0x2d4fb8: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x2d4fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2d4fbc: 0x0  nop
    ctx->pc = 0x2d4fbcu;
    // NOP
    // 0x2d4fc0: 0x0  nop
    ctx->pc = 0x2d4fc0u;
    // NOP
    // 0x2d4fc4: 0x0  nop
    ctx->pc = 0x2d4fc4u;
    // NOP
    // 0x2d4fc8: 0x0  nop
    ctx->pc = 0x2d4fc8u;
    // NOP
    // 0x2d4fcc: 0x1640fffa  bnez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4FCCu;
    {
        const bool branch_taken_0x2d4fcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FCCu;
        // 0x2d4fd0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4fcc) {
            ctx->pc = 0x2D4FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4fb8;
        }
    }
    ctx->pc = 0x2D4FD4u;
    // 0x2d4fd4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2d4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_2d4fd8:
    // 0x2d4fd8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d4fdc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2d4fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4fe0: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x2d4fe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x2d4fe4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2d4fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d4fe8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d4fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ff0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2d4ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2d4ff4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2d4ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d4ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ffc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2d4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2d5000: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2D5000u;
    SET_GPR_U32(ctx, 31, 0x2D5008u);
    ctx->pc = 0x2D5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5000u;
    // 0x2d5004: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2D5000u, 0x2D5008u)) {
        return;
    }
    ctx->pc = 0x2D5008u;
label_2d5008:
    // 0x2d5008: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2d5008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d500c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d500cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5010: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d5014: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d5014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d501c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d5020: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2d5020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2d5024: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D5024u;
    {
        const bool branch_taken_0x2d5024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5024u;
        // 0x2d5028: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5024) {
            ctx->pc = 0x2D50B0u;
            goto label_2d50b0;
        }
    }
    ctx->pc = 0x2D502Cu;
    // 0x2d502c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2d502cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d5030: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d5030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5034: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2d5034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d5038: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D5038u;
    {
        const bool branch_taken_0x2d5038 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5038u;
        // 0x2d503c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5038) {
            ctx->pc = 0x2D5078u;
            goto label_2d5078;
        }
    }
    ctx->pc = 0x2D5040u;
    // 0x2d5040: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D5040u;
    {
        const bool branch_taken_0x2d5040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5040u;
        // 0x2d5044: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5040) {
            ctx->pc = 0x2D5090u;
            goto label_2d5090;
        }
    }
    ctx->pc = 0x2D5048u;
    // 0x2d5048: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2d5048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d504c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D504Cu;
    {
        const bool branch_taken_0x2d504c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d504c) {
            ctx->pc = 0x2D5050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D504Cu;
            // 0x2d5050: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D507Cu;
            goto label_2d507c;
        }
    }
    ctx->pc = 0x2D5054u;
    // 0x2d5054: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2d5054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d5058: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5058u;
    {
        const bool branch_taken_0x2d5058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5058) {
            ctx->pc = 0x2D505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5058u;
            // 0x2d505c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5070u;
            goto label_2d5070;
        }
    }
    ctx->pc = 0x2D5060u;
    // 0x2d5060: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2d5060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2d5064: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2d5064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2d5068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d5068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d506c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d506cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2d5070:
    // 0x2d5070: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d5070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5074: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d5074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d5078:
    // 0x2d5078: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d5078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2d507c:
    // 0x2d507c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5080: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x2d5080u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d5084: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5084u;
    {
        const bool branch_taken_0x2d5084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5084u;
        // 0x2d5088: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5084) {
            ctx->pc = 0x2D50B0u;
            goto label_2d50b0;
        }
    }
    ctx->pc = 0x2D508Cu;
    // 0x2d508c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d508cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5090:
    // 0x2d5090: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d5090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d5094: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d5094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d5098: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d5098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d509c: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x2d509cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d50a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2d50a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d50a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2d50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2d50a8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D50A8u;
    {
        const bool branch_taken_0x2d50a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50A8u;
        // 0x2d50ac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50a8) {
            ctx->pc = 0x2D5090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5090;
        }
    }
    ctx->pc = 0x2D50B0u;
label_2d50b0:
    // 0x2d50b0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2d50b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d50b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d50b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d50b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d50bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d50bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d50c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d50c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d50c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d50c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d50c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d50c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d50cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D50CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50CCu;
        // 0x2d50d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D50CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D50D4u;
    // 0x2d50d4: 0x0  nop
    ctx->pc = 0x2d50d4u;
    // NOP
    ctx->pc = 0x2d50d8u;
}
