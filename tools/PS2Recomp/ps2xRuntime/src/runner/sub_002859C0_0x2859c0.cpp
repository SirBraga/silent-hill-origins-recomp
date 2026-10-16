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

// Function: sub_002859C0
// Address: 0x2859c0 - 0x285df8
void sub_002859C0_0x2859c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002859C0_0x2859c0");
#endif

    switch (ctx->pc) {
        case 0x285ab4u: goto label_285ab4;
        case 0x285ac0u: goto label_285ac0;
        case 0x285da4u: goto label_285da4;
        default: break;
    }

    ctx->pc = 0x2859c0u;

    // 0x2859c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2859c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2859c4: 0x24890038  addiu       $t1, $a0, 0x38
    ctx->pc = 0x2859c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x2859c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2859c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2859cc: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x2859ccu;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x2859d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2859d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2859d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2859d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2859d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2859dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2859dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2859e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2859e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2859e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2859e8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2859E8u;
    {
        const bool branch_taken_0x2859e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859E8u;
        // 0x2859ec: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859e8) {
            ctx->pc = 0x285A44u;
            goto label_285a44;
        }
    }
    ctx->pc = 0x2859F0u;
    // 0x2859f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2859f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2859f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2859f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2859f8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2859f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2859fc: 0x0  nop
    ctx->pc = 0x2859fcu;
    // NOP
    // 0x285a00: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x285A00u;
    {
        const bool branch_taken_0x285a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A00u;
        // 0x285a04: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a00) {
            ctx->pc = 0x285A48u;
            goto label_285a48;
        }
    }
    ctx->pc = 0x285A08u;
    // 0x285a08: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x285a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x285a0c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x285a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x285a10: 0x0  nop
    ctx->pc = 0x285a10u;
    // NOP
    // 0x285a14: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285A14u;
    {
        const bool branch_taken_0x285a14 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x285A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A14u;
        // 0x285a18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a14) {
            ctx->pc = 0x285A2Cu;
            goto label_285a2c;
        }
    }
    ctx->pc = 0x285A1Cu;
    // 0x285a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285a24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285A24u;
    {
        const bool branch_taken_0x285a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A24u;
        // 0x285a28: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a24) {
            ctx->pc = 0x285A44u;
            goto label_285a44;
        }
    }
    ctx->pc = 0x285A2Cu;
label_285a2c:
    // 0x285a2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285a30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x285a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x285a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285a3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x285a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x285a40: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x285a40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_285a44:
    // 0x285a44: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x285a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_285a48:
    // 0x285a48: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x285A48u;
    {
        const bool branch_taken_0x285a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x285A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A48u;
        // 0x285a4c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a48) {
            ctx->pc = 0x285AC8u;
            goto label_285ac8;
        }
    }
    ctx->pc = 0x285A50u;
    // 0x285a50: 0x54a20015  bnel        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x285A50u;
    {
        const bool branch_taken_0x285a50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x285a50) {
            ctx->pc = 0x285A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285A50u;
            // 0x285a54: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285AA8u;
            goto label_285aa8;
        }
    }
    ctx->pc = 0x285A58u;
    // 0x285a58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x285a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x285a5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285a60: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x285a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285a64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x285A64u;
    {
        const bool branch_taken_0x285a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285a64) {
            ctx->pc = 0x285A78u;
            goto label_285a78;
        }
    }
    ctx->pc = 0x285A6Cu;
    // 0x285a6c: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x285a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x285a70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x285A70u;
    {
        const bool branch_taken_0x285a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A70u;
        // 0x285a74: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a70) {
            ctx->pc = 0x285AC8u;
            goto label_285ac8;
        }
    }
    ctx->pc = 0x285A78u;
label_285a78:
    // 0x285a78: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x285a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x285a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285a80: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x285a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x285a84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x285a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285a88: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x285a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x285a8c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x285a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x285a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285a94: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x285a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x285a98: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x285a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x285a9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x285a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x285aa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x285AA0u;
    {
        const bool branch_taken_0x285aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AA0u;
        // 0x285aa4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285aa0) {
            ctx->pc = 0x285AC8u;
            goto label_285ac8;
        }
    }
    ctx->pc = 0x285AA8u;
label_285aa8:
    // 0x285aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x285aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285aac: 0xc092848  jal         func_24A120
    ctx->pc = 0x285AACu;
    SET_GPR_U32(ctx, 31, 0x285AB4u);
    ctx->pc = 0x285AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AACu;
    // 0x285ab0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285AACu, 0x285AB4u)) {
        return;
    }
    ctx->pc = 0x285AB4u;
label_285ab4:
    // 0x285ab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x285ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ab8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x285AB8u;
    SET_GPR_U32(ctx, 31, 0x285AC0u);
    ctx->pc = 0x285ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AB8u;
    // 0x285abc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x285AB8u, 0x285AC0u)) {
        return;
    }
    ctx->pc = 0x285AC0u;
label_285ac0:
    // 0x285ac0: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x285AC0u;
    {
        const bool branch_taken_0x285ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AC0u;
        // 0x285ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ac0) {
            ctx->pc = 0x285DD4u;
            goto label_285dd4;
        }
    }
    ctx->pc = 0x285AC8u;
label_285ac8:
    // 0x285ac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x285acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285ad0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x285ad0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285ad4: 0x0  nop
    ctx->pc = 0x285ad4u;
    // NOP
    // 0x285ad8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x285AD8u;
    {
        const bool branch_taken_0x285ad8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x285ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD8u;
        // 0x285adc: 0x2507fffc  addiu       $a3, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ad8) {
            ctx->pc = 0x285B28u;
            goto label_285b28;
        }
    }
    ctx->pc = 0x285AE0u;
    // 0x285ae0: 0x2502fffd  addiu       $v0, $t0, -0x3
    ctx->pc = 0x285ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x285ae4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x285ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x285ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285af4: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x285af4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x285af8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x285af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x285afc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x285afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x285b00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x285b00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285b04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285b08: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x285b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x285b0c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x285b0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x285b10: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x285b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x285b14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x285b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x285b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x285b20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285B20u;
    {
        const bool branch_taken_0x285b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B20u;
        // 0x285b24: 0x46001301  sub.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b20) {
            ctx->pc = 0x285B30u;
            goto label_285b30;
        }
    }
    ctx->pc = 0x285B28u;
label_285b28:
    // 0x285b28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x285b28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x285b2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x285b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_285b30:
    // 0x285b30: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x285b30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x285b34: 0x8f848864  lw          $a0, -0x779C($gp)
    ctx->pc = 0x285b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936676)));
    // 0x285b38: 0x8f858868  lw          $a1, -0x7798($gp)
    ctx->pc = 0x285b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936680)));
    // 0x285b3c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x285b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x285b40: 0x8f828860  lw          $v0, -0x77A0($gp)
    ctx->pc = 0x285b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936672)));
    // 0x285b44: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x285b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x285b48: 0x8f83885c  lw          $v1, -0x77A4($gp)
    ctx->pc = 0x285b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x285b4c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x285b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x285b50: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x285b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x285b54: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x285b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x285b58: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x285b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x285b5c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x285b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285b60: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x285b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x285b64: 0xe65018  mult        $t2, $a3, $a2
    ctx->pc = 0x285b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x285b68: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x285b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x285b6c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x285b6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x285b70: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x285b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285b74: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x285b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285b78: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x285b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285b7c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x285b7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x285b80: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x285b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285b84: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x285b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x285b88: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x285b88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x285b8c: 0x1493021  addu        $a2, $t2, $t1
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x285b90: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x285b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x285b94: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x285b98: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x285b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x285b9c: 0x24c90018  addiu       $t1, $a2, 0x18
    ctx->pc = 0x285b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x285ba0: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x285ba0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x285ba4: 0x24ca0024  addiu       $t2, $a2, 0x24
    ctx->pc = 0x285ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x285ba8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x285ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x285bac: 0x46022a00  add.s       $f8, $f5, $f2
    ctx->pc = 0x285bacu;
    ctx->f[8] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x285bb0: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x285bb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x285bb4: 0x46033140  add.s       $f5, $f6, $f3
    ctx->pc = 0x285bb4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x285bb8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x285bb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x285bbc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x285bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285bc0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x285bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x285bc4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x285bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x285bc8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x285bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285bcc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x285bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x285bd0: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x285bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x285bd4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x285bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285bd8: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x285bd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x285bdc: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x285bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x285be0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x285be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285be4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x285be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x285be8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285bec: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x285becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x285bf0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x285bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285bf4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x285bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x285bf8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x285bf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285bfc: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x285bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x285c00: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x285c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c04: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x285c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x285c08: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x285c08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x285c0c: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x285c0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x285c10: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x285c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c14: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x285c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x285c18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285c18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285c1c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x285c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x285c20: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x285c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c24: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x285c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x285c28: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x285c28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285c2c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x285c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x285c30: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x285c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c34: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x285c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x285c38: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x285c38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x285c3c: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x285c3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x285c40: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x285c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c44: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x285c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x285c48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285c4c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x285c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x285c50: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x285c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c54: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x285c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x285c58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x285c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285c5c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x285c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x285c60: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x285c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c64: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x285c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x285c68: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x285c68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x285c6c: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x285C6Cu;
    {
        const bool branch_taken_0x285c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C6Cu;
        // 0x285c70: 0xe6230008  swc1        $f3, 0x8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c6c) {
            ctx->pc = 0x285DD0u;
            goto label_285dd0;
        }
    }
    ctx->pc = 0x285C74u;
    // 0x285c74: 0x8f838874  lw          $v1, -0x778C($gp)
    ctx->pc = 0x285c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936692)));
    // 0x285c78: 0x8f828878  lw          $v0, -0x7788($gp)
    ctx->pc = 0x285c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936696)));
    // 0x285c7c: 0x8f848870  lw          $a0, -0x7790($gp)
    ctx->pc = 0x285c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
    // 0x285c80: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x285c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x285c84: 0x8f85886c  lw          $a1, -0x7794($gp)
    ctx->pc = 0x285c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936684)));
    // 0x285c88: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x285c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x285c8c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x285c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285c90: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x285c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x285c94: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x285c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x285c98: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x285c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285c9c: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x285c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x285ca0: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x285ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x285ca4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x285ca4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x285ca8: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x285ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x285cac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x285cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285cb0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x285cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285cb4: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x285cb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x285cb8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x285cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285cbc: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x285cbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x285cc0: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x285cc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x285cc4: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x285cc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x285cc8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x285cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x285ccc: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x285cccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x285cd0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x285cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x285cd4: 0x46022200  add.s       $f8, $f4, $f2
    ctx->pc = 0x285cd4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x285cd8: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x285cd8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x285cdc: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x285cdcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x285ce0: 0x46003100  add.s       $f4, $f6, $f0
    ctx->pc = 0x285ce0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x285ce4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x285ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285ce8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x285ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x285cec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x285cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285cf0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x285cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285cf4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x285cf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x285cf8: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x285cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285cfc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x285cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x285d00: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x285d00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x285d04: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x285d04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285d08: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x285d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d0c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x285d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x285d10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285d10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285d14: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x285d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285d18: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x285d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d1c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x285d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x285d20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x285d20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285d24: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x285d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285d28: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x285d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d2c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x285d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x285d30: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x285d30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x285d34: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x285d34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285d38: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x285d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d3c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x285d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x285d40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285d44: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x285d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285d48: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x285d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d4c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x285d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x285d50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x285d50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285d54: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x285d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285d58: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x285d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d5c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x285d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x285d60: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x285d60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x285d64: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x285d64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285d68: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x285d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x285d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x285d70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x285d70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285d74: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x285d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285d78: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x285d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x285d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x285d80: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x285d80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285d84: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x285d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285d88: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x285d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d8c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x285d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x285d90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x285d90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x285d94: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x285d94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d9c: 0xc093a66  jal         func_24E998
    ctx->pc = 0x285D9Cu;
    SET_GPR_U32(ctx, 31, 0x285DA4u);
    ctx->pc = 0x285DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285D9Cu;
    // 0x285da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E998u, 0x285D9Cu, 0x285DA4u)) {
        return;
    }
    ctx->pc = 0x285DA4u;
label_285da4:
    // 0x285da4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x285da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285da8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x285da8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285dac: 0x0  nop
    ctx->pc = 0x285dacu;
    // NOP
    // 0x285db0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x285DB0u;
    {
        const bool branch_taken_0x285db0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB0u;
        // 0x285db4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285db0) {
            ctx->pc = 0x285DD4u;
            goto label_285dd4;
        }
    }
    ctx->pc = 0x285DB8u;
    // 0x285db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x285dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285dc0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x285dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x285dc4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x285dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x285dc8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x285dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x285dcc: 0x0  nop
    ctx->pc = 0x285dccu;
    // NOP
label_285dd0:
    // 0x285dd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x285dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285dd4:
    // 0x285dd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x285dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285dd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x285dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285de0: 0x3e00008  jr          $ra
    ctx->pc = 0x285DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DE0u;
        // 0x285de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285DE8u;
    // 0x285de8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x285dec: 0x0  nop
    ctx->pc = 0x285decu;
    // NOP
    // 0x285df0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x285df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x285df4: 0x0  nop
    ctx->pc = 0x285df4u;
    // NOP
    ctx->pc = 0x285df8u;
}
