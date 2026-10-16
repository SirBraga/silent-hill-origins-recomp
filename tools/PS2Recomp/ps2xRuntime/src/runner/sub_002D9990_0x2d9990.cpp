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

// Function: sub_002D9990
// Address: 0x2d9990 - 0x2d9ad0
void sub_002D9990_0x2d9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9990_0x2d9990");
#endif

    switch (ctx->pc) {
        case 0x2d99e0u: goto label_2d99e0;
        case 0x2d9a34u: goto label_2d9a34;
        case 0x2d9a44u: goto label_2d9a44;
        default: break;
    }

    ctx->pc = 0x2d9990u;

    // 0x2d9990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d9990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d9994: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d9994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d9998: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d9998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d999c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d999cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d99a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d99a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d99a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d99ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d99acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99b0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D99B0u;
    {
        const bool branch_taken_0x2d99b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99B0u;
        // 0x2d99b4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99b0) {
            ctx->pc = 0x2D99D8u;
            goto label_2d99d8;
        }
    }
    ctx->pc = 0x2D99B8u;
    // 0x2d99b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d99bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2d99c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d99c4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2d99c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d99cc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d99ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d99d0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d99d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d99d4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2d99d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d99d8:
    // 0x2d99d8: 0xc0b67d2  jal         func_2D9F48
    ctx->pc = 0x2D99D8u;
    SET_GPR_U32(ctx, 31, 0x2D99E0u);
    ctx->pc = 0x2D99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99D8u;
    // 0x2d99dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9F48u, 0x2D99D8u, 0x2D99E0u)) {
        return;
    }
    ctx->pc = 0x2D99E0u;
label_2d99e0:
    // 0x2d99e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d99e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99e4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D99E4u;
    {
        const bool branch_taken_0x2d99e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d99e4) {
            ctx->pc = 0x2D99E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D99E4u;
            // 0x2d99e8: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D99F4u;
            goto label_2d99f4;
        }
    }
    ctx->pc = 0x2D99ECu;
    // 0x2d99ec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D99ECu;
    {
        const bool branch_taken_0x2d99ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99ECu;
        // 0x2d99f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99ec) {
            ctx->pc = 0x2D9AB0u;
            goto label_2d9ab0;
        }
    }
    ctx->pc = 0x2D99F4u;
label_2d99f4:
    // 0x2d99f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d99f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2d99fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d9a00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d9a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d9a04: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9A04u;
    {
        const bool branch_taken_0x2d9a04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A04u;
        // 0x2d9a08: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a04) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D9A0Cu;
    // 0x2d9a0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9a10: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2d9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2d9a14: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9a18: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9A18u;
    {
        const bool branch_taken_0x2d9a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a18) {
            ctx->pc = 0x2D9A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9A18u;
            // 0x2d9a1c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9A54u;
            goto label_2d9a54;
        }
    }
    ctx->pc = 0x2D9A20u;
label_2d9a20:
    // 0x2d9a20: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a28: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2d9a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d9a2c: 0xc0b6ad8  jal         func_2DAB60
    ctx->pc = 0x2D9A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A34u);
    ctx->pc = 0x2D9A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A2Cu;
    // 0x2d9a30: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAB60u, 0x2D9A2Cu, 0x2D9A34u)) {
        return;
    }
    ctx->pc = 0x2D9A34u;
label_2d9a34:
    // 0x2d9a34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9A34u;
    {
        const bool branch_taken_0x2d9a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A34u;
        // 0x2d9a38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a34) {
            ctx->pc = 0x2D9A50u;
            goto label_2d9a50;
        }
    }
    ctx->pc = 0x2D9A3Cu;
    // 0x2d9a3c: 0xc0b67e6  jal         func_2D9F98
    ctx->pc = 0x2D9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A44u);
    ctx->pc = 0x2D9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A3Cu;
    // 0x2d9a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9F98u, 0x2D9A3Cu, 0x2D9A44u)) {
        return;
    }
    ctx->pc = 0x2D9A44u;
label_2d9a44:
    // 0x2d9a44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D9A44u;
    {
        const bool branch_taken_0x2d9a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A44u;
        // 0x2d9a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a44) {
            ctx->pc = 0x2D9AB0u;
            goto label_2d9ab0;
        }
    }
    ctx->pc = 0x2D9A4Cu;
    // 0x2d9a4c: 0x0  nop
    ctx->pc = 0x2d9a4cu;
    // NOP
label_2d9a50:
    // 0x2d9a50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9a54:
    // 0x2d9a54: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2d9a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d9a58: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9A58u;
    {
        const bool branch_taken_0x2d9a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a58) {
            ctx->pc = 0x2D9A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9A58u;
            // 0x2d9a5c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D9A60u;
    // 0x2d9a60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9a64: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2d9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2d9a68: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2d9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d9a6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d9a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d9a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d9a74: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2d9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2d9a78:
    // 0x2d9a78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9a7c: 0x27868fc0  addiu       $a2, $gp, -0x7040
    ctx->pc = 0x2d9a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938560));
    // 0x2d9a80: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2d9a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d9a84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9a8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d9a90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d9a94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d9a98: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x2d9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x2d9a9c: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x2d9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x2d9aa0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2d9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2d9aa4: 0x8f838fc0  lw          $v1, -0x7040($gp)
    ctx->pc = 0x2d9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x2d9aa8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2d9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2d9aac: 0xaf858fc0  sw          $a1, -0x7040($gp)
    ctx->pc = 0x2d9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 5));
label_2d9ab0:
    // 0x2d9ab0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d9ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9ab4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d9ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9ab8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d9ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9abc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AC4u;
        // 0x2d9ac8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9ACCu;
    // 0x2d9acc: 0x0  nop
    ctx->pc = 0x2d9accu;
    // NOP
    ctx->pc = 0x2d9ad0u;
}
