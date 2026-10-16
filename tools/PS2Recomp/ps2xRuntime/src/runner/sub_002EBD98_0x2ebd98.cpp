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

// Function: sub_002EBD98
// Address: 0x2ebd98 - 0x2ebf98
void sub_002EBD98_0x2ebd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBD98_0x2ebd98");
#endif

    switch (ctx->pc) {
        case 0x2ebdf0u: goto label_2ebdf0;
        case 0x2ebe3cu: goto label_2ebe3c;
        case 0x2ebe74u: goto label_2ebe74;
        case 0x2ebe80u: goto label_2ebe80;
        case 0x2ebe88u: goto label_2ebe88;
        case 0x2ebeacu: goto label_2ebeac;
        case 0x2ebed8u: goto label_2ebed8;
        case 0x2ebf08u: goto label_2ebf08;
        case 0x2ebf28u: goto label_2ebf28;
        default: break;
    }

    ctx->pc = 0x2ebd98u;

    // 0x2ebd98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ebd9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ebd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ebda0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ebda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ebda4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ebda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ebda8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ebda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebdb0: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2ebdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ebdb4: 0x8e021394  lw          $v0, 0x1394($s0)
    ctx->pc = 0x2ebdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
    // 0x2ebdb8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EBDB8u;
    {
        const bool branch_taken_0x2ebdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDB8u;
        // 0x2ebdbc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdb8) {
            ctx->pc = 0x2EBEB8u;
            goto label_2ebeb8;
        }
    }
    ctx->pc = 0x2EBDC0u;
    // 0x2ebdc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ebdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ebdc4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EBDC4u;
    {
        const bool branch_taken_0x2ebdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDC4u;
        // 0x2ebdc8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdc4) {
            ctx->pc = 0x2EBE50u;
            goto label_2ebe50;
        }
    }
    ctx->pc = 0x2EBDCCu;
    // 0x2ebdcc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2ebdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ebdd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ebdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebdd4: 0x34c6080c  ori         $a2, $a2, 0x80C
    ctx->pc = 0x2ebdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2060);
    // 0x2ebdd8: 0xae031388  sw          $v1, 0x1388($s0)
    ctx->pc = 0x2ebdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 3));
    // 0x2ebddc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ebddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ebde0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ebde0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ebde4: 0xae02138c  sw          $v0, 0x138C($s0)
    ctx->pc = 0x2ebde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 2));
    // 0x2ebde8: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2EBDE8u;
    SET_GPR_U32(ctx, 31, 0x2EBDF0u);
    ctx->pc = 0x2EBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDE8u;
    // 0x2ebdec: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2EBDE8u, 0x2EBDF0u)) {
        return;
    }
    ctx->pc = 0x2EBDF0u;
label_2ebdf0:
    // 0x2ebdf0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ebdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ebdf4: 0x2444003f  addiu       $a0, $v0, 0x3F
    ctx->pc = 0x2ebdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2ebdf8: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2ebdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2ebdfc: 0xae021394  sw          $v0, 0x1394($s0)
    ctx->pc = 0x2ebdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 2));
    // 0x2ebe00: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2ebe00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ebe04: 0xae041390  sw          $a0, 0x1390($s0)
    ctx->pc = 0x2ebe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 4));
    // 0x2ebe08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ebe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ebe0c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EBE0Cu;
    {
        const bool branch_taken_0x2ebe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE0Cu;
        // 0x2ebe10: 0xae031384  sw          $v1, 0x1384($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe0c) {
            ctx->pc = 0x2EBEB8u;
            goto label_2ebeb8;
        }
    }
    ctx->pc = 0x2EBE14u;
    // 0x2ebe14: 0x8e0a138c  lw          $t2, 0x138C($s0)
    ctx->pc = 0x2ebe14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x2ebe18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe24: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2ebe24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2ebe28: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2ebe28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ebe2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ebe2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebe30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe34: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EBE34u;
    SET_GPR_U32(ctx, 31, 0x2EBE3Cu);
    ctx->pc = 0x2EBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE34u;
    // 0x2ebe38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EBE34u, 0x2EBE3Cu)) {
        return;
    }
    ctx->pc = 0x2EBE3Cu;
label_2ebe3c:
    // 0x2ebe3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebe40: 0xaf828c9c  sw          $v0, -0x7364($gp)
    ctx->pc = 0x2ebe40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
    // 0x2ebe44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2EBE44u;
    {
        const bool branch_taken_0x2ebe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE44u;
        // 0x2ebe48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe44) {
            ctx->pc = 0x2EBEBCu;
            goto label_2ebebc;
        }
    }
    ctx->pc = 0x2EBE4Cu;
    // 0x2ebe4c: 0x0  nop
    ctx->pc = 0x2ebe4cu;
    // NOP
label_2ebe50:
    // 0x2ebe50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebe54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe5c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2ebe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2ebe60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ebe60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebe64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ebe68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe6c: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EBE6Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE74u);
    ctx->pc = 0x2EBE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE6Cu;
    // 0x2ebe70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EBE6Cu, 0x2EBE74u)) {
        return;
    }
    ctx->pc = 0x2EBE74u;
label_2ebe74:
    // 0x2ebe74: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x2ebe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x2ebe78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBE78u;
    {
        const bool branch_taken_0x2ebe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe78) {
            ctx->pc = 0x2EBE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBE78u;
            // 0x2ebe7c: 0x8e041394  lw          $a0, 0x1394($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBE98u;
            goto label_2ebe98;
        }
    }
    ctx->pc = 0x2EBE80u;
label_2ebe80:
    // 0x2ebe80: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2EBE80u;
    SET_GPR_U32(ctx, 31, 0x2EBE88u);
    ctx->pc = 0x2EBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE80u;
    // 0x2ebe84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EBE80u, 0x2EBE88u)) {
        return;
    }
    ctx->pc = 0x2EBE88u;
label_2ebe88:
    // 0x2ebe88: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x2ebe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x2ebe8c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2EBE8Cu;
    {
        const bool branch_taken_0x2ebe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe8c) {
            ctx->pc = 0x2EBE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebe80;
        }
    }
    ctx->pc = 0x2EBE94u;
    // 0x2ebe94: 0x8e041394  lw          $a0, 0x1394($s0)
    ctx->pc = 0x2ebe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
label_2ebe98:
    // 0x2ebe98: 0xae001388  sw          $zero, 0x1388($s0)
    ctx->pc = 0x2ebe98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 0));
    // 0x2ebe9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBE9Cu;
    {
        const bool branch_taken_0x2ebe9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE9Cu;
        // 0x2ebea0: 0xae00138c  sw          $zero, 0x138C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe9c) {
            ctx->pc = 0x2EBEACu;
            goto label_2ebeac;
        }
    }
    ctx->pc = 0x2EBEA4u;
    // 0x2ebea4: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2EBEA4u;
    SET_GPR_U32(ctx, 31, 0x2EBEACu);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2EBEA4u, 0x2EBEACu)) {
        return;
    }
    ctx->pc = 0x2EBEACu;
label_2ebeac:
    // 0x2ebeac: 0xae001384  sw          $zero, 0x1384($s0)
    ctx->pc = 0x2ebeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 0));
    // 0x2ebeb0: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x2ebeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x2ebeb4: 0xae001390  sw          $zero, 0x1390($s0)
    ctx->pc = 0x2ebeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 0));
label_2ebeb8:
    // 0x2ebeb8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ebeb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ebebc:
    // 0x2ebebc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ebebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebec0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ebec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebec4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ebec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBECCu;
        // 0x2ebed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBED4u;
    // 0x2ebed4: 0x0  nop
    ctx->pc = 0x2ebed4u;
    // NOP
label_2ebed8:
    // 0x2ebed8: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBED8u;
    {
        const bool branch_taken_0x2ebed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebed8) {
            ctx->pc = 0x2EBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBED8u;
            // 0x2ebedc: 0xaf808ca0  sw          $zero, -0x7360($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBEF8u;
            goto label_2ebef8;
        }
    }
    ctx->pc = 0x2EBEE0u;
    // 0x2ebee0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ebee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ebee4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2ebee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ebee8: 0xaf828ca4  sw          $v0, -0x735C($gp)
    ctx->pc = 0x2ebee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 2));
    // 0x2ebeec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBEECu;
    {
        const bool branch_taken_0x2ebeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEECu;
        // 0x2ebef0: 0xaf838ca0  sw          $v1, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebeec) {
            ctx->pc = 0x2EBEFCu;
            goto label_2ebefc;
        }
    }
    ctx->pc = 0x2EBEF4u;
    // 0x2ebef4: 0x0  nop
    ctx->pc = 0x2ebef4u;
    // NOP
label_2ebef8:
    // 0x2ebef8: 0xaf808ca4  sw          $zero, -0x735C($gp)
    ctx->pc = 0x2ebef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 0));
label_2ebefc:
    // 0x2ebefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEFCu;
        // 0x2ebf00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF04u;
    // 0x2ebf04: 0x0  nop
    ctx->pc = 0x2ebf04u;
    // NOP
label_2ebf08:
    // 0x2ebf08: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2ebf08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf0c: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x2ebf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
    // 0x2ebf10: 0x8f878ca4  lw          $a3, -0x735C($gp)
    ctx->pc = 0x2ebf10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937764)));
    // 0x2ebf14: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EBF14u;
    {
        const bool branch_taken_0x2ebf14 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2EBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF14u;
        // 0x2ebf18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf14) {
            ctx->pc = 0x2EBF74u;
            goto label_2ebf74;
        }
    }
    ctx->pc = 0x2EBF1Cu;
    // 0x2ebf1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ebf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf20: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2ebf20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebf24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ebf24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebf28:
    // 0x2ebf28: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ebf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ebf2c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2EBF2Cu;
    {
        const bool branch_taken_0x2ebf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf2c) {
            ctx->pc = 0x2EBF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF2Cu;
            // 0x2ebf30: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF68u;
            goto label_2ebf68;
        }
    }
    ctx->pc = 0x2EBF34u;
    // 0x2ebf34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ebf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ebf38: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2ebf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ebf3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ebf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ebf40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ebf44: 0x506a0004  beql        $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBF44u;
    {
        const bool branch_taken_0x2ebf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ebf44) {
            ctx->pc = 0x2EBF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF44u;
            // 0x2ebf48: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF58u;
            goto label_2ebf58;
        }
    }
    ctx->pc = 0x2EBF4Cu;
    // 0x2ebf4c: 0x54690006  bnel        $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBF4Cu;
    {
        const bool branch_taken_0x2ebf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x2ebf4c) {
            ctx->pc = 0x2EBF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF4Cu;
            // 0x2ebf50: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF68u;
            goto label_2ebf68;
        }
    }
    ctx->pc = 0x2EBF54u;
    // 0x2ebf54: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2ebf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2ebf58:
    // 0x2ebf58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBF58u;
    {
        const bool branch_taken_0x2ebf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf58) {
            ctx->pc = 0x2EBF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF58u;
            // 0x2ebf5c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF68u;
            goto label_2ebf68;
        }
    }
    ctx->pc = 0x2EBF60u;
    // 0x2ebf60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBF60u;
    {
        const bool branch_taken_0x2ebf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF60u;
        // 0x2ebf64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf60) {
            ctx->pc = 0x2EBF78u;
            goto label_2ebf78;
        }
    }
    ctx->pc = 0x2EBF68u;
label_2ebf68:
    // 0x2ebf68: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2ebf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2ebf6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EBF6Cu;
    {
        const bool branch_taken_0x2ebf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF6Cu;
        // 0x2ebf70: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf6c) {
            ctx->pc = 0x2EBF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebf28;
        }
    }
    ctx->pc = 0x2EBF74u;
label_2ebf74:
    // 0x2ebf74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebf78:
    // 0x2ebf78: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBF78u;
    {
        const bool branch_taken_0x2ebf78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF78u;
        // 0x2ebf7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf78) {
            ctx->pc = 0x2EBF8Cu;
            goto label_2ebf8c;
        }
    }
    ctx->pc = 0x2EBF80u;
    // 0x2ebf80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ebf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ebf84: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2ebf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ebf88: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x2ebf88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_2ebf8c:
    // 0x2ebf8c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2ebf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2ebf90: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF90u;
        // 0x2ebf94: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF98u;
}
