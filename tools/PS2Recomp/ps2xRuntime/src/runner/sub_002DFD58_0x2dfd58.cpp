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

// Function: sub_002DFD58
// Address: 0x2dfd58 - 0x2dfef0
void sub_002DFD58_0x2dfd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFD58_0x2dfd58");
#endif

    switch (ctx->pc) {
        case 0x2dfdb0u: goto label_2dfdb0;
        case 0x2dfdc8u: goto label_2dfdc8;
        case 0x2dfddcu: goto label_2dfddc;
        case 0x2dfe44u: goto label_2dfe44;
        case 0x2dfe88u: goto label_2dfe88;
        default: break;
    }

    ctx->pc = 0x2dfd58u;

    // 0x2dfd58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dfd5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dfd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dfd60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfd64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dfd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfd6c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dfd70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dfd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dfd74: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2DFD74u;
    {
        const bool branch_taken_0x2dfd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfd74) {
            ctx->pc = 0x2DFE3Cu;
            goto label_2dfe3c;
        }
    }
    ctx->pc = 0x2DFD7Cu;
    // 0x2dfd7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfd80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2dfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dfd84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2dfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2dfd88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfd8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2dfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dfd90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2dfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2dfd94: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2dfd94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2dfd98: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DFD98u;
    {
        const bool branch_taken_0x2dfd98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD98u;
        // 0x2dfd9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd98) {
            ctx->pc = 0x2DFDE0u;
            goto label_2dfde0;
        }
    }
    ctx->pc = 0x2DFDA0u;
    // 0x2dfda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfda4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2dfda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfda8: 0xc0b6770  jal         func_2D9DC0
    ctx->pc = 0x2DFDA8u;
    SET_GPR_U32(ctx, 31, 0x2DFDB0u);
    ctx->pc = 0x2DFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDA8u;
    // 0x2dfdac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9DC0u, 0x2DFDA8u, 0x2DFDB0u)) {
        return;
    }
    ctx->pc = 0x2DFDB0u;
label_2dfdb0:
    // 0x2dfdb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFDB0u;
    {
        const bool branch_taken_0x2dfdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDB0u;
        // 0x2dfdb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfdb0) {
            ctx->pc = 0x2DFDC8u;
            goto label_2dfdc8;
        }
    }
    ctx->pc = 0x2DFDB8u;
    // 0x2dfdb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dfdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfdc0: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2DFDC0u;
    SET_GPR_U32(ctx, 31, 0x2DFDC8u);
    ctx->pc = 0x2DFDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDC0u;
    // 0x2dfdc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2DFDC0u, 0x2DFDC8u)) {
        return;
    }
    ctx->pc = 0x2DFDC8u;
label_2dfdc8:
    // 0x2dfdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdcc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2dfdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dfdd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dfdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfdd4: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2DFDD4u;
    SET_GPR_U32(ctx, 31, 0x2DFDDCu);
    ctx->pc = 0x2DFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDD4u;
    // 0x2dfdd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2DFDD4u, 0x2DFDDCu)) {
        return;
    }
    ctx->pc = 0x2DFDDCu;
label_2dfddc:
    // 0x2dfddc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2dfddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2dfde0:
    // 0x2dfde0: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2dfde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2dfde4: 0x27829028  addiu       $v0, $gp, -0x6FD8
    ctx->pc = 0x2dfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
    // 0x2dfde8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2dfde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2dfdec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2dfdecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2dfdf0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2dfdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2dfdf4: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x2dfdf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x2dfdf8: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x2dfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x2dfdfc: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2dfe00: 0x8f848c1c  lw          $a0, -0x73E4($gp)
    ctx->pc = 0x2dfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x2dfe04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dfe08: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x2dfe0c: 0xaf909028  sw          $s0, -0x6FD8($gp)
    ctx->pc = 0x2dfe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938664), GPR_U32(ctx, 16));
    // 0x2dfe10: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x2dfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
    // 0x2dfe14: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfe18: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2dfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dfe1c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2dfe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2dfe20: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2dfe20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dfe24: 0xaf848c1c  sw          $a0, -0x73E4($gp)
    ctx->pc = 0x2dfe24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937628), GPR_U32(ctx, 4));
    // 0x2dfe28: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2dfe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2dfe2c: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x2dfe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x2dfe30: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2dfe30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2dfe34: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2dfe34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2dfe38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2dfe3c:
    // 0x2dfe3c: 0xc0b7fbc  jal         func_2DFEF0
    ctx->pc = 0x2DFE3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFE44u);
    ctx->pc = 0x2DFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFE3Cu;
    // 0x2dfe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DFEF0u, 0x2DFE3Cu, 0x2DFE44u)) {
        return;
    }
    ctx->pc = 0x2DFE44u;
label_2dfe44:
    // 0x2dfe44: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2dfe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dfe48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfe4c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2dfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2dfe50: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2dfe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2dfe54: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2dfe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2dfe58: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2dfe5c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2dfe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2dfe60: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x2dfe60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x2dfe64: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2dfe64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2dfe68: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2dfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2dfe6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dfe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2dfe70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DFE70u;
    {
        const bool branch_taken_0x2dfe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE70u;
        // 0x2dfe74: 0x8f848c10  lw          $a0, -0x73F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe70) {
            ctx->pc = 0x2DFEBCu;
            goto label_2dfebc;
        }
    }
    ctx->pc = 0x2DFE78u;
    // 0x2dfe78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dfe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfe7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2dfe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfe80: 0xc0b6770  jal         func_2D9DC0
    ctx->pc = 0x2DFE80u;
    SET_GPR_U32(ctx, 31, 0x2DFE88u);
    ctx->pc = 0x2DFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFE80u;
    // 0x2dfe84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9DC0u, 0x2DFE80u, 0x2DFE88u)) {
        return;
    }
    ctx->pc = 0x2DFE88u;
label_2dfe88:
    // 0x2dfe88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dfe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfe8c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DFE8Cu;
    {
        const bool branch_taken_0x2dfe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfe8c) {
            ctx->pc = 0x2DFE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFE8Cu;
            // 0x2dfe90: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFEC0u;
            goto label_2dfec0;
        }
    }
    ctx->pc = 0x2DFE94u;
    // 0x2dfe94: 0x8f848c10  lw          $a0, -0x73F0($gp)
    ctx->pc = 0x2dfe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x2dfe98: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dfe98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dfe9c: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x2dfe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2dfea0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dfea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dfea8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dfea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dfeac: 0x54850004  bnel        $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFEACu;
    {
        const bool branch_taken_0x2dfeac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2dfeac) {
            ctx->pc = 0x2DFEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFEACu;
            // 0x2dfeb0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFEC0u;
            goto label_2dfec0;
        }
    }
    ctx->pc = 0x2DFEB4u;
    // 0x2dfeb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfeb8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2dfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2dfebc:
    // 0x2dfebc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2dfebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2dfec0:
    // 0x2dfec0: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x2dfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x2dfec4: 0x8f848c18  lw          $a0, -0x73E8($gp)
    ctx->pc = 0x2dfec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x2dfec8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dfec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfecc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dfeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfed0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dfed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dfed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dfed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfedc: 0xaf838c1c  sw          $v1, -0x73E4($gp)
    ctx->pc = 0x2dfedcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937628), GPR_U32(ctx, 3));
    // 0x2dfee0: 0xaf848c18  sw          $a0, -0x73E8($gp)
    ctx->pc = 0x2dfee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 4));
    // 0x2dfee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEE4u;
        // 0x2dfee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFEECu;
    // 0x2dfeec: 0x0  nop
    ctx->pc = 0x2dfeecu;
    // NOP
    ctx->pc = 0x2dfef0u;
}
