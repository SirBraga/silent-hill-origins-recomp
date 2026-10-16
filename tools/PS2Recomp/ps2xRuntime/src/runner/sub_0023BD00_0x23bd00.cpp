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

// Function: sub_0023BD00
// Address: 0x23bd00 - 0x23bf60
void sub_0023BD00_0x23bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BD00_0x23bd00");
#endif

    switch (ctx->pc) {
        case 0x23bd64u: goto label_23bd64;
        case 0x23bdc4u: goto label_23bdc4;
        case 0x23be04u: goto label_23be04;
        case 0x23be0cu: goto label_23be0c;
        case 0x23be80u: goto label_23be80;
        case 0x23be98u: goto label_23be98;
        case 0x23bf08u: goto label_23bf08;
        case 0x23bf20u: goto label_23bf20;
        default: break;
    }

    ctx->pc = 0x23bd00u;

    // 0x23bd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23bd04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23bd08: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23bd0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23bd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23bd10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23bd14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23bd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bd1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23bd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd20: 0x90640020  lbu         $a0, 0x20($v1)
    ctx->pc = 0x23bd20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23bd24: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x23bd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23bd28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BD28u;
    {
        const bool branch_taken_0x23bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD28u;
        // 0x23bd2c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd28) {
            ctx->pc = 0x23BD48u;
            goto label_23bd48;
        }
    }
    ctx->pc = 0x23BD30u;
    // 0x23bd30: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23BD30u;
    {
        const bool branch_taken_0x23bd30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bd30) {
            ctx->pc = 0x23BD5Cu;
            goto label_23bd5c;
        }
    }
    ctx->pc = 0x23BD38u;
    // 0x23bd38: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x23BD38u;
    {
        const bool branch_taken_0x23bd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD38u;
        // 0x23bd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd38) {
            ctx->pc = 0x23BE14u;
            goto label_23be14;
        }
    }
    ctx->pc = 0x23BD40u;
    // 0x23bd40: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x23BD40u;
    {
        const bool branch_taken_0x23bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD40u;
        // 0x23bd44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd40) {
            ctx->pc = 0x23BF50u;
            goto label_23bf50;
        }
    }
    ctx->pc = 0x23BD48u;
label_23bd48:
    // 0x23bd48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23bd4c: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x23BD4Cu;
    {
        const bool branch_taken_0x23bd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD4Cu;
        // 0x23bd50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd4c) {
            ctx->pc = 0x23BE14u;
            goto label_23be14;
        }
    }
    ctx->pc = 0x23BD54u;
    // 0x23bd54: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x23BD54u;
    {
        const bool branch_taken_0x23bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD54u;
        // 0x23bd58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd54) {
            ctx->pc = 0x23BF50u;
            goto label_23bf50;
        }
    }
    ctx->pc = 0x23BD5Cu;
label_23bd5c:
    // 0x23bd5c: 0xc08ed56  jal         func_23B558
    ctx->pc = 0x23BD5Cu;
    SET_GPR_U32(ctx, 31, 0x23BD64u);
    ctx->pc = 0x23B558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B558u, 0x23BD5Cu, 0x23BD64u)) {
        return;
    }
    ctx->pc = 0x23BD64u;
label_23bd64:
    // 0x23bd64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23bd68: 0x8c423f30  lw          $v0, 0x3F30($v0)
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23bd6c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23bd70: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x23bd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x23bd74: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x23bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x23bd78: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x23bd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x23bd7c: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23BD7Cu;
    {
        const bool branch_taken_0x23bd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD7Cu;
        // 0x23bd80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd7c) {
            ctx->pc = 0x23BDCCu;
            goto label_23bdcc;
        }
    }
    ctx->pc = 0x23BD84u;
    // 0x23bd84: 0x3228001f  andi        $t0, $s1, 0x1F
    ctx->pc = 0x23bd84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x23bd88: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23bd8c: 0x322903e0  andi        $t1, $s1, 0x3E0
    ctx->pc = 0x23bd8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)992);
    // 0x23bd90: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x23bd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23bd94: 0x322a7c00  andi        $t2, $s1, 0x7C00
    ctx->pc = 0x23bd94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31744);
    // 0x23bd98: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23bd9c: 0x322b8000  andi        $t3, $s1, 0x8000
    ctx->pc = 0x23bd9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x23bda0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x23bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x23bda4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x23bda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23bda8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x23bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23bdac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x23bdacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x23bdb0: 0x94882  srl         $t1, $t1, 2
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 2));
    // 0x23bdb4: 0xa51c2  srl         $t2, $t2, 7
    ctx->pc = 0x23bdb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x23bdb8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23bdb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23bdbc: 0xc08ee12  jal         func_23B848
    ctx->pc = 0x23BDBCu;
    SET_GPR_U32(ctx, 31, 0x23BDC4u);
    ctx->pc = 0x23BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDBCu;
    // 0x23bdc0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B848u, 0x23BDBCu, 0x23BDC4u)) {
        return;
    }
    ctx->pc = 0x23BDC4u;
label_23bdc4:
    // 0x23bdc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23BDC4u;
    {
        const bool branch_taken_0x23bdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdc4) {
            ctx->pc = 0x23BE04u;
            goto label_23be04;
        }
    }
    ctx->pc = 0x23BDCCu;
label_23bdcc:
    // 0x23bdcc: 0x3229ff00  andi        $t1, $s1, 0xFF00
    ctx->pc = 0x23bdccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x23bdd0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23bdd4: 0x115402  srl         $t2, $s1, 16
    ctx->pc = 0x23bdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23bdd8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x23bdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23bddc: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x23bddcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x23bde0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x23bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23bde4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x23bde4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x23bde8: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23bdec: 0x115e02  srl         $t3, $s1, 24
    ctx->pc = 0x23bdecu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x23bdf0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x23bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23bdf4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x23bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x23bdf8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x23bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x23bdfc: 0xc08ee12  jal         func_23B848
    ctx->pc = 0x23BDFCu;
    SET_GPR_U32(ctx, 31, 0x23BE04u);
    ctx->pc = 0x23BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDFCu;
    // 0x23be00: 0x322800ff  andi        $t0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B848u, 0x23BDFCu, 0x23BE04u)) {
        return;
    }
    ctx->pc = 0x23BE04u;
label_23be04:
    // 0x23be04: 0xc08eedc  jal         func_23BB70
    ctx->pc = 0x23BE04u;
    SET_GPR_U32(ctx, 31, 0x23BE0Cu);
    ctx->pc = 0x23BB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BB70u, 0x23BE04u, 0x23BE0Cu)) {
        return;
    }
    ctx->pc = 0x23BE0Cu;
label_23be0c:
    // 0x23be0c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x23BE0Cu;
    {
        const bool branch_taken_0x23be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE0Cu;
        // 0x23be10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be0c) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BE14u;
label_23be14:
    // 0x23be14: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x23be14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23be18: 0x1100004c  beqz        $t0, . + 4 + (0x4C << 2)
    ctx->pc = 0x23BE18u;
    {
        const bool branch_taken_0x23be18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE18u;
        // 0x23be1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be18) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BE20u;
    // 0x23be20: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x23be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23be24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23be28: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x23be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x23be2c: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x23be2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
    // 0x23be30: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x23BE30u;
    {
        const bool branch_taken_0x23be30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE30u;
        // 0x23be34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be30) {
            ctx->pc = 0x23BEC8u;
            goto label_23bec8;
        }
    }
    ctx->pc = 0x23BE38u;
    // 0x23be38: 0x14820044  bne         $a0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x23BE38u;
    {
        const bool branch_taken_0x23be38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE38u;
        // 0x23be3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be38) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BE40u;
    // 0x23be40: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x23be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23be44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23be48: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x23be48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x23be4c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23be50: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x23be50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23be54: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23be54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23be58: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23be58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be5c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23be5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23be60: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x23be60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23be64: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23be68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23be6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23be70: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x23BE70u;
    {
        const bool branch_taken_0x23be70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE70u;
        // 0x23be74: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be70) {
            ctx->pc = 0x23BF48u;
            goto label_23bf48;
        }
    }
    ctx->pc = 0x23BE78u;
    // 0x23be78: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x23be78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23be7c: 0x0  nop
    ctx->pc = 0x23be7cu;
    // NOP
label_23be80:
    // 0x23be80: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23be84: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x23be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23be88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23be88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BE8Cu;
    {
        const bool branch_taken_0x23be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE8Cu;
        // 0x23be90: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be8c) {
            ctx->pc = 0x23BEB0u;
            goto label_23beb0;
        }
    }
    ctx->pc = 0x23BE94u;
    // 0x23be94: 0x0  nop
    ctx->pc = 0x23be94u;
    // NOP
label_23be98:
    // 0x23be98: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x23be98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x23be9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23be9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bea0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x23bea4: 0x0  nop
    ctx->pc = 0x23bea4u;
    // NOP
    // 0x23bea8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23BEA8u;
    {
        const bool branch_taken_0x23bea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEA8u;
        // 0x23beac: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bea8) {
            ctx->pc = 0x23BE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be98;
        }
    }
    ctx->pc = 0x23BEB0u;
label_23beb0:
    // 0x23beb0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x23beb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23beb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23beb8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23BEB8u;
    {
        const bool branch_taken_0x23beb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEB8u;
        // 0x23bebc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23beb8) {
            ctx->pc = 0x23BE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be80;
        }
    }
    ctx->pc = 0x23BEC0u;
    // 0x23bec0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23BEC0u;
    {
        const bool branch_taken_0x23bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEC0u;
        // 0x23bec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bec0) {
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BEC8u;
label_23bec8:
    // 0x23bec8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x23bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23becc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23bed0: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x23bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23bed4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x23bed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23bed8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x23bed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23bedc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23bee0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23bee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bee4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23bee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23bee8: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23beec: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23bef0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23bef4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23bef8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x23BEF8u;
    {
        const bool branch_taken_0x23bef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF8u;
        // 0x23befc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bef8) {
            ctx->pc = 0x23BF48u;
            goto label_23bf48;
        }
    }
    ctx->pc = 0x23BF00u;
    // 0x23bf00: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x23bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x23bf04: 0x0  nop
    ctx->pc = 0x23bf04u;
    // NOP
label_23bf08:
    // 0x23bf08: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23bf0c: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x23bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23bf10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23bf10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BF14u;
    {
        const bool branch_taken_0x23bf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF14u;
        // 0x23bf18: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf14) {
            ctx->pc = 0x23BF38u;
            goto label_23bf38;
        }
    }
    ctx->pc = 0x23BF1Cu;
    // 0x23bf1c: 0x0  nop
    ctx->pc = 0x23bf1cu;
    // NOP
label_23bf20:
    // 0x23bf20: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x23bf20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x23bf24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23bf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf28: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x23bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x23bf2c: 0x0  nop
    ctx->pc = 0x23bf2cu;
    // NOP
    // 0x23bf30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23BF30u;
    {
        const bool branch_taken_0x23bf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF30u;
        // 0x23bf34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf30) {
            ctx->pc = 0x23BF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bf20;
        }
    }
    ctx->pc = 0x23BF38u;
label_23bf38:
    // 0x23bf38: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x23bf38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23bf40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23BF40u;
    {
        const bool branch_taken_0x23bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF40u;
        // 0x23bf44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf40) {
            ctx->pc = 0x23BF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bf08;
        }
    }
    ctx->pc = 0x23BF48u;
label_23bf48:
    // 0x23bf48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23bf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bf4c:
    // 0x23bf4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23bf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23bf50:
    // 0x23bf50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23bf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bf54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf58: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF58u;
        // 0x23bf5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF60u;
}
