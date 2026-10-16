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

// Function: sub_002AFCD0
// Address: 0x2afcd0 - 0x2b0168
void sub_002AFCD0_0x2afcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFCD0_0x2afcd0");
#endif

    switch (ctx->pc) {
        case 0x2afd28u: goto label_2afd28;
        case 0x2afd50u: goto label_2afd50;
        case 0x2afe80u: goto label_2afe80;
        case 0x2affa0u: goto label_2affa0;
        case 0x2b0068u: goto label_2b0068;
        default: break;
    }

    ctx->pc = 0x2afcd0u;

    // 0x2afcd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2afcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2afcd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2afcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2afcd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2afcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2afcdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2afce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2afce4: 0x260400c4  addiu       $a0, $s0, 0xC4
    ctx->pc = 0x2afce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x2afce8: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2afce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2afcec: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2afcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2afcf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2afcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2afcf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2afcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afcf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2afcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2afcfc: 0x8e0c008c  lw          $t4, 0x8C($s0)
    ctx->pc = 0x2afcfcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afd00: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2afd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2afd04: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x2afd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2afd08: 0x8e0700e0  lw          $a3, 0xE0($s0)
    ctx->pc = 0x2afd08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2afd0c: 0x8e080074  lw          $t0, 0x74($s0)
    ctx->pc = 0x2afd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2afd10: 0x8e090078  lw          $t1, 0x78($s0)
    ctx->pc = 0x2afd10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2afd14: 0x8e0a00b4  lw          $t2, 0xB4($s0)
    ctx->pc = 0x2afd14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2afd18: 0x8e0b00b8  lw          $t3, 0xB8($s0)
    ctx->pc = 0x2afd18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2afd1c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2afd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2afd20: 0xc0b0070  jal         func_2C01C0
    ctx->pc = 0x2AFD20u;
    SET_GPR_U32(ctx, 31, 0x2AFD28u);
    ctx->pc = 0x2AFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD20u;
    // 0x2afd24: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C01C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C01C0u, 0x2AFD20u, 0x2AFD28u)) {
        return;
    }
    ctx->pc = 0x2AFD28u;
label_2afd28:
    // 0x2afd28: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2afd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2afd2c: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2AFD2Cu;
    {
        const bool branch_taken_0x2afd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD2Cu;
        // 0x2afd30: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd2c) {
            ctx->pc = 0x2B0150u;
            goto label_2b0150;
        }
    }
    ctx->pc = 0x2AFD34u;
    // 0x2afd34: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x2afd34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x2afd38: 0x8e1100d4  lw          $s1, 0xD4($s0)
    ctx->pc = 0x2afd38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2afd3c: 0x240e0028  addiu       $t6, $zero, 0x28
    ctx->pc = 0x2afd3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2afd40: 0x35effffe  ori         $t7, $t7, 0xFFFE
    ctx->pc = 0x2afd40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65534);
    // 0x2afd44: 0x24190028  addiu       $t9, $zero, 0x28
    ctx->pc = 0x2afd44u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2afd48: 0x18e1818  mult        $v1, $t4, $t6
    ctx->pc = 0x2afd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2afd4c: 0x0  nop
    ctx->pc = 0x2afd4cu;
    // NOP
label_2afd50:
    // 0x2afd50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afd54: 0x25980001  addiu       $t8, $t4, 0x1
    ctx->pc = 0x2afd54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2afd58: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2afd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2afd5c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2afd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2afd60: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2afd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2afd64: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x2afd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x2afd68: 0x10800085  beqz        $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2AFD68u;
    {
        const bool branch_taken_0x2afd68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD68u;
        // 0x2afd6c: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd68) {
            ctx->pc = 0x2AFF80u;
            goto label_2aff80;
        }
    }
    ctx->pc = 0x2AFD70u;
    // 0x2afd70: 0x1991018  mult        $v0, $t4, $t9
    ctx->pc = 0x2afd70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2afd74: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2afd78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afd7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2afd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd80: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x2afd80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2afd84: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2afd84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2afd88: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x2afd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2afd8c: 0x19400029  blez        $t2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2AFD8Cu;
    {
        const bool branch_taken_0x2afd8c = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2AFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD8Cu;
        // 0x2afd90: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd8c) {
            ctx->pc = 0x2AFE34u;
            goto label_2afe34;
        }
    }
    ctx->pc = 0x2AFD94u;
    // 0x2afd94: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2AFD94u;
    {
        const bool branch_taken_0x2afd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afd94) {
            ctx->pc = 0x2AFD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFD94u;
            // 0x2afd98: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE84u;
            goto label_2afe84;
        }
    }
    ctx->pc = 0x2AFD9Cu;
    // 0x2afd9c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2afd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2afda0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AFDA0u;
    {
        const bool branch_taken_0x2afda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afda0) {
            ctx->pc = 0x2AFDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDA0u;
            // 0x2afda4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE38u;
            goto label_2afe38;
        }
    }
    ctx->pc = 0x2AFDA8u;
    // 0x2afda8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2afda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2afdac: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AFDACu;
    {
        const bool branch_taken_0x2afdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afdac) {
            ctx->pc = 0x2AFDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDACu;
            // 0x2afdb0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFDF8u;
            goto label_2afdf8;
        }
    }
    ctx->pc = 0x2AFDB4u;
    // 0x2afdb4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2afdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2afdb8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2afdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2afdbc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFDBCu;
    {
        const bool branch_taken_0x2afdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDBCu;
        // 0x2afdc0: 0x25060004  addiu       $a2, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdbc) {
            ctx->pc = 0x2AFDF0u;
            goto label_2afdf0;
        }
    }
    ctx->pc = 0x2AFDC4u;
    // 0x2afdc4: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2afdc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2afdc8: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2afdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2afdcc: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2afdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2afdd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afdd4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2afdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2afdd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2afdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2afddc: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2afddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2afde0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afde4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2afde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2afde8: 0x544000d5  bnel        $v0, $zero, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2AFDE8u;
    {
        const bool branch_taken_0x2afde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afde8) {
            ctx->pc = 0x2AFDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDE8u;
            // 0x2afdec: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFDF0u;
label_2afdf0:
    // 0x2afdf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2afdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afdf4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2afdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2afdf8:
    // 0x2afdf8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2afdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2afdfc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFDFCu;
    {
        const bool branch_taken_0x2afdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDFCu;
        // 0x2afe00: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdfc) {
            ctx->pc = 0x2AFE30u;
            goto label_2afe30;
        }
    }
    ctx->pc = 0x2AFE04u;
    // 0x2afe04: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2afe04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2afe08: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2afe08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2afe0c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2afe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2afe10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afe14: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2afe14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2afe18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2afe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2afe1c: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2afe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2afe20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afe24: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2afe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2afe28: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2AFE28u;
    {
        const bool branch_taken_0x2afe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afe28) {
            ctx->pc = 0x2AFE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE28u;
            // 0x2afe2c: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFE30u;
label_2afe30:
    // 0x2afe30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2afe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2afe34:
    // 0x2afe34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2afe38:
    // 0x2afe38: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2afe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2afe3c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AFE3Cu;
    {
        const bool branch_taken_0x2afe3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe3c) {
            ctx->pc = 0x2AFE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE3Cu;
            // 0x2afe40: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE74u;
            goto label_2afe74;
        }
    }
    ctx->pc = 0x2AFE44u;
    // 0x2afe44: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2afe44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2afe48: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2afe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2afe4c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2afe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2afe50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afe54: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2afe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2afe58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2afe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2afe5c: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2afe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2afe60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afe64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2afe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2afe68: 0x544000b5  bnel        $v0, $zero, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2AFE68u;
    {
        const bool branch_taken_0x2afe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afe68) {
            ctx->pc = 0x2AFE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE68u;
            // 0x2afe6c: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFE70u;
    // 0x2afe70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2afe70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2afe74:
    // 0x2afe74: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x2afe74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2afe78: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AFE78u;
    {
        const bool branch_taken_0x2afe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE78u;
        // 0x2afe7c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe78) {
            ctx->pc = 0x2AFF80u;
            goto label_2aff80;
        }
    }
    ctx->pc = 0x2AFE80u;
label_2afe80:
    // 0x2afe80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2afe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2afe84:
    // 0x2afe84: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2afe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2afe88: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AFE88u;
    {
        const bool branch_taken_0x2afe88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe88) {
            ctx->pc = 0x2AFE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE88u;
            // 0x2afe8c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFEC0u;
            goto label_2afec0;
        }
    }
    ctx->pc = 0x2AFE90u;
    // 0x2afe90: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2afe90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2afe94: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2afe94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2afe98: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2afe98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2afe9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afea0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2afea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2afea4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2afea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2afea8: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2afea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2afeac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afeb0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2afeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2afeb4: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2AFEB4u;
    {
        const bool branch_taken_0x2afeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afeb4) {
            ctx->pc = 0x2AFEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFEB4u;
            // 0x2afeb8: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFEBCu;
    // 0x2afebc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2afebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2afec0:
    // 0x2afec0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2afec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2afec4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFEC4u;
    {
        const bool branch_taken_0x2afec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEC4u;
        // 0x2afec8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afec4) {
            ctx->pc = 0x2AFEF8u;
            goto label_2afef8;
        }
    }
    ctx->pc = 0x2AFECCu;
    // 0x2afecc: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x2afeccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2afed0: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x2afed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2afed4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2afed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2afed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afedc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2afedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2afee0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2afee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2afee4: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2afee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2afee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afeec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2afeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2afef0: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x2AFEF0u;
    {
        const bool branch_taken_0x2afef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afef0) {
            ctx->pc = 0x2AFEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFEF0u;
            // 0x2afef4: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFEF8u;
label_2afef8:
    // 0x2afef8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2afef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2afefc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2afefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2aff00: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFF00u;
    {
        const bool branch_taken_0x2aff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF00u;
        // 0x2aff04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff00) {
            ctx->pc = 0x2AFF34u;
            goto label_2aff34;
        }
    }
    ctx->pc = 0x2AFF08u;
    // 0x2aff08: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x2aff08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2aff0c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x2aff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2aff10: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2aff10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2aff14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aff14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aff18: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2aff18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2aff1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2aff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aff20: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2aff20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2aff24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aff28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2aff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2aff2c: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x2AFF2Cu;
    {
        const bool branch_taken_0x2aff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aff2c) {
            ctx->pc = 0x2AFF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF2Cu;
            // 0x2aff30: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFF34u;
label_2aff34:
    // 0x2aff34: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2aff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2aff38: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2aff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2aff3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFF3Cu;
    {
        const bool branch_taken_0x2aff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF3Cu;
        // 0x2aff40: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff3c) {
            ctx->pc = 0x2AFF70u;
            goto label_2aff70;
        }
    }
    ctx->pc = 0x2AFF44u;
    // 0x2aff44: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x2aff44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2aff48: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x2aff48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2aff4c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2aff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2aff50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aff50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aff54: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2aff54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2aff58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2aff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aff5c: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2aff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2aff60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aff64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2aff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2aff68: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x2AFF68u;
    {
        const bool branch_taken_0x2aff68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aff68) {
            ctx->pc = 0x2AFF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF68u;
            // 0x2aff6c: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFF70u;
label_2aff70:
    // 0x2aff70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2aff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2aff74: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x2aff74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2aff78: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2AFF78u;
    {
        const bool branch_taken_0x2aff78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF78u;
        // 0x2aff7c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff78) {
            ctx->pc = 0x2AFE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afe80;
        }
    }
    ctx->pc = 0x2AFF80u;
label_2aff80:
    // 0x2aff80: 0x18e1018  mult        $v0, $t4, $t6
    ctx->pc = 0x2aff80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aff84: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2aff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2aff88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff8c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2aff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aff90: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AFF90u;
    {
        const bool branch_taken_0x2aff90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF90u;
        // 0x2aff94: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff90) {
            ctx->pc = 0x2B0040u;
            goto label_2b0040;
        }
    }
    ctx->pc = 0x2AFF98u;
    // 0x2aff98: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aff98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aff9c: 0x94c200c0  lhu         $v0, 0xC0($a2)
    ctx->pc = 0x2aff9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 192)));
label_2affa0:
    // 0x2affa0: 0x94c300b8  lhu         $v1, 0xB8($a2)
    ctx->pc = 0x2affa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2affa4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x2affa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x2affa8: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x2affa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x2affac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AFFACu;
    {
        const bool branch_taken_0x2affac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFACu;
        // 0x2affb0: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affac) {
            ctx->pc = 0x2AFFF0u;
            goto label_2afff0;
        }
    }
    ctx->pc = 0x2AFFB4u;
    // 0x2affb4: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x2affb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x2affb8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2affb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2affbc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFFBCu;
    {
        const bool branch_taken_0x2affbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affbc) {
            ctx->pc = 0x2AFFF0u;
            goto label_2afff0;
        }
    }
    ctx->pc = 0x2AFFC4u;
    // 0x2affc4: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2affc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2affc8: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2affc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2affcc: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2affccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2affd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2affd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2affd4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2affd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2affd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2affd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2affdc: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2affdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2affe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2affe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2affe4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2affe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2affe8: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2AFFE8u;
    {
        const bool branch_taken_0x2affe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2affe8) {
            ctx->pc = 0x2AFFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFFE8u;
            // 0x2affec: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2AFFF0u;
label_2afff0:
    // 0x2afff0: 0x50e00011  beql        $a3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AFFF0u;
    {
        const bool branch_taken_0x2afff0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afff0) {
            ctx->pc = 0x2AFFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFFF0u;
            // 0x2afff4: 0x8cc600dc  lw          $a2, 0xDC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0038u;
            goto label_2b0038;
        }
    }
    ctx->pc = 0x2AFFF8u;
    // 0x2afff8: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x2afff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x2afffc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2afffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b0000: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0000u;
    {
        const bool branch_taken_0x2b0000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0000) {
            ctx->pc = 0x2B0004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0000u;
            // 0x2b0004: 0x8cc600dc  lw          $a2, 0xDC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0038u;
            goto label_2b0038;
        }
    }
    ctx->pc = 0x2B0008u;
    // 0x2b0008: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2b0008u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b000c: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2b000cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b0010: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2b0010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2b0014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b0014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0018: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2b0018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2b001c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b0020: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2b0020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b0024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b0024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0028: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b0028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b002c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2B002Cu;
    {
        const bool branch_taken_0x2b002c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b002c) {
            ctx->pc = 0x2B0030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B002Cu;
            // 0x2b0030: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2B0034u;
    // 0x2b0034: 0x8cc600dc  lw          $a2, 0xDC($a2)
    ctx->pc = 0x2b0034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
label_2b0038:
    // 0x2b0038: 0x54c0ffd9  bnel        $a2, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2B0038u;
    {
        const bool branch_taken_0x2b0038 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0038) {
            ctx->pc = 0x2B003Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0038u;
            // 0x2b003c: 0x94c200c0  lhu         $v0, 0xC0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2affa0;
        }
    }
    ctx->pc = 0x2B0040u;
label_2b0040:
    // 0x2b0040: 0x18e1018  mult        $v0, $t4, $t6
    ctx->pc = 0x2b0040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b0044: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2b0044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0048: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2b0048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b004c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b0050: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2B0050u;
    {
        const bool branch_taken_0x2b0050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0050u;
        // 0x2b0054: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0050) {
            ctx->pc = 0x2B0128u;
            goto label_2b0128;
        }
    }
    ctx->pc = 0x2B0058u;
    // 0x2b0058: 0x1994818  mult        $t1, $t4, $t9
    ctx->pc = 0x2b0058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2b005c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2b005cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0060: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b0060u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0064: 0x0  nop
    ctx->pc = 0x2b0064u;
    // NOP
label_2b0068:
    // 0x2b0068: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x2b0068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b006c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2b006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b0070: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2b0070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2b0074: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b0074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0078: 0x94c3005c  lhu         $v1, 0x5C($a2)
    ctx->pc = 0x2b0078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2b007c: 0x94c20054  lhu         $v0, 0x54($a2)
    ctx->pc = 0x2b007cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x2b0080: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b0080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x2b0084: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x2b0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x2b0088: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0088u;
    {
        const bool branch_taken_0x2b0088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0088u;
        // 0x2b008c: 0x3402b  sltu        $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0088) {
            ctx->pc = 0x2B00CCu;
            goto label_2b00cc;
        }
    }
    ctx->pc = 0x2B0090u;
    // 0x2b0090: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x2b0090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2b0094: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b0098: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0098u;
    {
        const bool branch_taken_0x2b0098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0098) {
            ctx->pc = 0x2B00CCu;
            goto label_2b00cc;
        }
    }
    ctx->pc = 0x2B00A0u;
    // 0x2b00a0: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2b00a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b00a4: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2b00a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b00a8: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2b00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2b00ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b00acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b00b0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2b00b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2b00b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b00b8: 0x8d2004  sllv        $a0, $t5, $a0
    ctx->pc = 0x2b00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b00bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b00c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b00c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b00c4: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B00C4u;
    {
        const bool branch_taken_0x2b00c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b00c4) {
            ctx->pc = 0x2B00C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B00C4u;
            // 0x2b00c8: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2B00CCu;
label_2b00cc:
    // 0x2b00cc: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B00CCu;
    {
        const bool branch_taken_0x2b00cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00CCu;
        // 0x2b00d0: 0x12a1821  addu        $v1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00cc) {
            ctx->pc = 0x2B0110u;
            goto label_2b0110;
        }
    }
    ctx->pc = 0x2B00D4u;
    // 0x2b00d4: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2b00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2b00d8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b00dc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B00DCu;
    {
        const bool branch_taken_0x2b00dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b00dc) {
            ctx->pc = 0x2B00E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B00DCu;
            // 0x2b00e0: 0x12a1821  addu        $v1, $t1, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0110u;
            goto label_2b0110;
        }
    }
    ctx->pc = 0x2B00E4u;
    // 0x2b00e4: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2b00e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b00e8: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x2b00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b00ec: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2b00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2b00f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b00f4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2b00f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2b00f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b00fc: 0x8d2004  sllv        $a0, $t5, $a0
    ctx->pc = 0x2b00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b0100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0104: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b0108: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0108u;
    {
        const bool branch_taken_0x2b0108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0108u;
        // 0x2b010c: 0x12a1821  addu        $v1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0108) {
            ctx->pc = 0x2B013Cu;
            goto label_2b013c;
        }
    }
    ctx->pc = 0x2B0110u;
label_2b0110:
    // 0x2b0110: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b0110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b0114: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b0118: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2b0118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2b011c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2b011cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0120: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2B0120u;
    {
        const bool branch_taken_0x2b0120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0120u;
        // 0x2b0124: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0120) {
            ctx->pc = 0x2B0068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0068;
        }
    }
    ctx->pc = 0x2B0128u;
label_2b0128:
    // 0x2b0128: 0x18e1018  mult        $v0, $t4, $t6
    ctx->pc = 0x2b0128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b012c: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2b012cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b0130: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b0134: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b0134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b0138: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2b0138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2b013c:
    // 0x2b013c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2b013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2b0140:
    // 0x2b0140: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x2b0140u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0144: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x2b0144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0148: 0x1440ff01  bnez        $v0, . + 4 + (-0xFF << 2)
    ctx->pc = 0x2B0148u;
    {
        const bool branch_taken_0x2b0148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0148u;
        // 0x2b014c: 0x18e1818  mult        $v1, $t4, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0148) {
            ctx->pc = 0x2AFD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afd50;
        }
    }
    ctx->pc = 0x2B0150u;
label_2b0150:
    // 0x2b0150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b0150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0154: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b0154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0158: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b015c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0160: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0160u;
        // 0x2b0164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0168u;
}
