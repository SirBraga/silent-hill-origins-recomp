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

// Function: sub_001CAAE8
// Address: 0x1caae8 - 0x1cace8
void sub_001CAAE8_0x1caae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAAE8_0x1caae8");
#endif

    switch (ctx->pc) {
        case 0x1cab1cu: goto label_1cab1c;
        case 0x1cab40u: goto label_1cab40;
        case 0x1cab50u: goto label_1cab50;
        case 0x1cab7cu: goto label_1cab7c;
        case 0x1caba4u: goto label_1caba4;
        case 0x1cabe4u: goto label_1cabe4;
        case 0x1cac30u: goto label_1cac30;
        case 0x1cac7cu: goto label_1cac7c;
        case 0x1cac8cu: goto label_1cac8c;
        case 0x1cacbcu: goto label_1cacbc;
        default: break;
    }

    ctx->pc = 0x1caae8u;

    // 0x1caae8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1caaec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1caaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1caaf0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1caaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1caaf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaf8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1caaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1caafc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1caafcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab00: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1cab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1cab04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1cab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1cab08: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1cab0c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1cab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1cab10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cab14: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1CAB14u;
    SET_GPR_U32(ctx, 31, 0x1CAB1Cu);
    ctx->pc = 0x1CAB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB14u;
    // 0x1cab18: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1CAB14u, 0x1CAB1Cu)) {
        return;
    }
    ctx->pc = 0x1CAB1Cu;
label_1cab1c:
    // 0x1cab1c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1cab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cab20: 0x16820029  bne         $s4, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAB20u;
    {
        const bool branch_taken_0x1cab20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB20u;
        // 0x1cab24: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab20) {
            ctx->pc = 0x1CABC8u;
            goto label_1cabc8;
        }
    }
    ctx->pc = 0x1CAB28u;
    // 0x1cab28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cab2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cab2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab30: 0x2442fc34  addiu       $v0, $v0, -0x3CC
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966324));
    // 0x1cab34: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cab38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cab38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab3c: 0x2452fffc  addiu       $s2, $v0, -0x4
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1cab40:
    // 0x1cab40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cab44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab48: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CAB48u;
    SET_GPR_U32(ctx, 31, 0x1CAB50u);
    ctx->pc = 0x1CAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB48u;
    // 0x1cab4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CAB48u, 0x1CAB50u)) {
        return;
    }
    ctx->pc = 0x1CAB50u;
label_1cab50:
    // 0x1cab50: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x1cab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cab54: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1cab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab58: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1cab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab5c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1cab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cab60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cab64: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1cab64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cab68: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1cab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cab6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cab70: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1cab70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cab74: 0xc093ab4  jal         func_24EAD0
    ctx->pc = 0x1CAB74u;
    SET_GPR_U32(ctx, 31, 0x1CAB7Cu);
    ctx->pc = 0x1CAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB74u;
    // 0x1cab78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1CAB74u, 0x1CAB7Cu)) {
        return;
    }
    ctx->pc = 0x1CAB7Cu;
label_1cab7c:
    // 0x1cab7c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1cab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cab80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab84: 0x0  nop
    ctx->pc = 0x1cab84u;
    // NOP
    // 0x1cab88: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAB88u;
    {
        const bool branch_taken_0x1cab88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cab88) {
            ctx->pc = 0x1CAB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAB88u;
            // 0x1cab8c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CABB0u;
            goto label_1cabb0;
        }
    }
    ctx->pc = 0x1CAB90u;
    // 0x1cab90: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x1cab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x1cab94: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAB94u;
    {
        const bool branch_taken_0x1cab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cab94) {
            ctx->pc = 0x1CAB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAB94u;
            // 0x1cab98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CABB0u;
            goto label_1cabb0;
        }
    }
    ctx->pc = 0x1CAB9Cu;
    // 0x1cab9c: 0xc05d256  jal         func_174958
    ctx->pc = 0x1CAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CABA4u);
    ctx->pc = 0x1CABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB9Cu;
    // 0x1caba0: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174958u, 0x1CAB9Cu, 0x1CABA4u)) {
        return;
    }
    ctx->pc = 0x1CABA4u;
label_1caba4:
    // 0x1caba4: 0xae15027c  sw          $s5, 0x27C($s0)
    ctx->pc = 0x1caba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 21));
    // 0x1caba8: 0xae130280  sw          $s3, 0x280($s0)
    ctx->pc = 0x1caba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 19));
    // 0x1cabac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1cabb0:
    // 0x1cabb0: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1cabb4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1cabb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cabb8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CABB8u;
    {
        const bool branch_taken_0x1cabb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABB8u;
        // 0x1cabbc: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabb8) {
            ctx->pc = 0x1CAB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cab40;
        }
    }
    ctx->pc = 0x1CABC0u;
    // 0x1cabc0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1CABC0u;
    {
        const bool branch_taken_0x1cabc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABC0u;
        // 0x1cabc4: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabc0) {
            ctx->pc = 0x1CACACu;
            goto label_1cacac;
        }
    }
    ctx->pc = 0x1CABC8u;
label_1cabc8:
    // 0x1cabc8: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CABC8u;
    {
        const bool branch_taken_0x1cabc8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABC8u;
        // 0x1cabcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabc8) {
            ctx->pc = 0x1CAC98u;
            goto label_1cac98;
        }
    }
    ctx->pc = 0x1CABD0u;
    // 0x1cabd0: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x1cabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x1cabd4: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CABD4u;
    {
        const bool branch_taken_0x1cabd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cabd4) {
            ctx->pc = 0x1CABD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CABD4u;
            // 0x1cabd8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CACACu;
            goto label_1cacac;
        }
    }
    ctx->pc = 0x1CABDCu;
    // 0x1cabdc: 0xc05d278  jal         func_1749E0
    ctx->pc = 0x1CABDCu;
    SET_GPR_U32(ctx, 31, 0x1CABE4u);
    ctx->pc = 0x1CABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABDCu;
    // 0x1cabe0: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1749E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1749E0u, 0x1CABDCu, 0x1CABE4u)) {
        return;
    }
    ctx->pc = 0x1CABE4u;
label_1cabe4:
    // 0x1cabe4: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1cabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1cabe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cabec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1cabecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cabf0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CABF0u;
    {
        const bool branch_taken_0x1cabf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABF0u;
        // 0x1cabf4: 0xae00027c  sw          $zero, 0x27C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabf0) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CABF8u;
    // 0x1cabf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1cabfc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1cac00: 0x8c4446c8  lw          $a0, 0x46C8($v0)
    ctx->pc = 0x1cac00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B46C8u));
    // 0x1cac04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cac08: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1cac08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cac0c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAC0Cu;
    {
        const bool branch_taken_0x1cac0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC0Cu;
        // 0x1cac10: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac0c) {
            ctx->pc = 0x1CAC30u;
            goto label_1cac30;
        }
    }
    ctx->pc = 0x1CAC14u;
    // 0x1cac14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cac18: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAC18u;
    {
        const bool branch_taken_0x1cac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac18) {
            ctx->pc = 0x1CAC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC18u;
            // 0x1cac1c: 0x8e020268  lw          $v0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC34u;
            goto label_1cac34;
        }
    }
    ctx->pc = 0x1CAC20u;
    // 0x1cac20: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cac24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cac28: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CAC28u;
    SET_GPR_U32(ctx, 31, 0x1CAC30u);
    ctx->pc = 0x1CAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC28u;
    // 0x1cac2c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CAC28u, 0x1CAC30u)) {
        return;
    }
    ctx->pc = 0x1CAC30u;
label_1cac30:
    // 0x1cac30: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1cac34:
    // 0x1cac34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAC34u;
    {
        const bool branch_taken_0x1cac34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC34u;
        // 0x1cac38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac34) {
            ctx->pc = 0x1CAC50u;
            goto label_1cac50;
        }
    }
    ctx->pc = 0x1CAC3Cu;
    // 0x1cac3c: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1cac40: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAC40u;
    {
        const bool branch_taken_0x1cac40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cac40) {
            ctx->pc = 0x1CAC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC40u;
            // 0x1cac44: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAC48u;
    // 0x1cac48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAC48u;
    {
        const bool branch_taken_0x1cac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC48u;
        // 0x1cac4c: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac48) {
            ctx->pc = 0x1CAC6Cu;
            goto label_1cac6c;
        }
    }
    ctx->pc = 0x1CAC50u;
label_1cac50:
    // 0x1cac50: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1cac54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cac58: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAC58u;
    {
        const bool branch_taken_0x1cac58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cac58) {
            ctx->pc = 0x1CAC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC58u;
            // 0x1cac5c: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC6Cu;
            goto label_1cac6c;
        }
    }
    ctx->pc = 0x1CAC60u;
    // 0x1cac60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cac64: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1cac64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_1cac68:
    // 0x1cac68: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1cac68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
label_1cac6c:
    // 0x1cac6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cac70: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cac74: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CAC74u;
    SET_GPR_U32(ctx, 31, 0x1CAC7Cu);
    ctx->pc = 0x1CAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC74u;
    // 0x1cac78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CAC74u, 0x1CAC7Cu)) {
        return;
    }
    ctx->pc = 0x1CAC7Cu;
label_1cac7c:
    // 0x1cac7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAC7Cu;
    {
        const bool branch_taken_0x1cac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC7Cu;
        // 0x1cac80: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac7c) {
            ctx->pc = 0x1CAC90u;
            goto label_1cac90;
        }
    }
    ctx->pc = 0x1CAC84u;
label_1cac84:
    // 0x1cac84: 0xc05d29a  jal         func_174A68
    ctx->pc = 0x1CAC84u;
    SET_GPR_U32(ctx, 31, 0x1CAC8Cu);
    ctx->pc = 0x1CAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC84u;
    // 0x1cac88: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174A68u, 0x1CAC84u, 0x1CAC8Cu)) {
        return;
    }
    ctx->pc = 0x1CAC8Cu;
label_1cac8c:
    // 0x1cac8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cac90:
    // 0x1cac90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAC90u;
    {
        const bool branch_taken_0x1cac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC90u;
        // 0x1cac94: 0xae020280  sw          $v0, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac90) {
            ctx->pc = 0x1CACA8u;
            goto label_1caca8;
        }
    }
    ctx->pc = 0x1CAC98u;
label_1cac98:
    // 0x1cac98: 0x56820004  bnel        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAC98u;
    {
        const bool branch_taken_0x1cac98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cac98) {
            ctx->pc = 0x1CAC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC98u;
            // 0x1cac9c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CACACu;
            goto label_1cacac;
        }
    }
    ctx->pc = 0x1CACA0u;
    // 0x1caca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caca4: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1caca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1caca8:
    // 0x1caca8: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cacac:
    // 0x1cacac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CACACu;
    {
        const bool branch_taken_0x1cacac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACACu;
        // 0x1cacb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacac) {
            ctx->pc = 0x1CACBCu;
            goto label_1cacbc;
        }
    }
    ctx->pc = 0x1CACB4u;
    // 0x1cacb4: 0xc06dbc8  jal         func_1B6F20
    ctx->pc = 0x1CACB4u;
    SET_GPR_U32(ctx, 31, 0x1CACBCu);
    ctx->pc = 0x1CACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACB4u;
    // 0x1cacb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CACB4u, 0x1CACBCu)) {
        return;
    }
    ctx->pc = 0x1CACBCu;
label_1cacbc:
    // 0x1cacbc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1cacbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cacc0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1cacc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cacc4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1cacc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cacc8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cacc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1caccc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cacccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cacd0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1cacd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cacd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cacd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cacd8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cacdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACDCu;
        // 0x1cace0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CACE4u;
    // 0x1cace4: 0x0  nop
    ctx->pc = 0x1cace4u;
    // NOP
    ctx->pc = 0x1cace8u;
}
