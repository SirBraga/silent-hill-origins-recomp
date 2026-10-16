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

// Function: sub_002CCD68
// Address: 0x2ccd68 - 0x2ccf40
void sub_002CCD68_0x2ccd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCD68_0x2ccd68");
#endif

    ctx->pc = 0x2ccd68u;

    // 0x2ccd68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ccd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ccd6c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CCD6Cu;
    {
        const bool branch_taken_0x2ccd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD6Cu;
        // 0x2ccd70: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd6c) {
            ctx->pc = 0x2CCE18u;
            goto label_2cce18;
        }
    }
    ctx->pc = 0x2CCD74u;
    // 0x2ccd74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ccd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ccd78: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2ccd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ccd7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ccd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ccd80: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2ccd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ccd84: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x2ccd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2ccd88: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x2ccd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd8c: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x2ccd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ccd90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ccd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ccd94: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ccd94u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ccd98: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2ccd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ccd9c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2ccd9cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ccda0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2ccda0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2ccda4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2ccda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ccda8: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x2ccda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ccdac: 0x46011942  mul.s       $f5, $f3, $f1
    ctx->pc = 0x2ccdacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ccdb0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2ccdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccdb4: 0x460621c2  mul.s       $f7, $f4, $f6
    ctx->pc = 0x2ccdb4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2ccdb8: 0x46001202  mul.s       $f8, $f2, $f0
    ctx->pc = 0x2ccdb8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ccdbc: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2ccdbcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2ccdc0: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x2ccdc0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x2ccdc4: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x2ccdc4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x2ccdc8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ccdc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ccdcc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ccdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ccdd0: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x2ccdd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2ccdd4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2ccdd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2ccdd8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ccdd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ccddc: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2ccddcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2ccde0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2ccde0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ccde4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ccde4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ccde8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2ccde8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ccdec: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2ccdecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2ccdf0: 0xc7808240  lwc1        $f0, -0x7DC0($gp)
    ctx->pc = 0x2ccdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccdf4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2ccdf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2ccdf8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2ccdf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ccdfc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2ccdfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2cce00: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2cce00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2cce04: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2cce04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cce08: 0x0  nop
    ctx->pc = 0x2cce08u;
    // NOP
    // 0x2cce0c: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
    ctx->pc = 0x2CCE0Cu;
    {
        const bool branch_taken_0x2cce0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE0Cu;
        // 0x2cce10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce0c) {
            ctx->pc = 0x2CCF38u;
            goto label_2ccf38;
        }
    }
    ctx->pc = 0x2CCE14u;
    // 0x2cce14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cce18:
    // 0x2cce18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2cce18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cce1c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CCE1Cu;
    {
        const bool branch_taken_0x2cce1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cce1c) {
            ctx->pc = 0x2CCE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE1Cu;
            // 0x2cce20: 0xc4c60000  lwc1        $f6, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEC0u;
            goto label_2ccec0;
        }
    }
    ctx->pc = 0x2CCE24u;
    // 0x2cce24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2cce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce28: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2cce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cce2c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2cce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cce30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cce30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cce34: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2cce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cce38: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2cce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cce3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2cce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce40: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2cce40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2cce44: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cce44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cce48: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2cce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cce4c: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x2cce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cce50: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x2cce50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2cce54: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2cce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce58: 0x460619c2  mul.s       $f7, $f3, $f6
    ctx->pc = 0x2cce58u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2cce5c: 0x46001202  mul.s       $f8, $f2, $f0
    ctx->pc = 0x2cce5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cce60: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2cce60u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2cce64: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x2cce64u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x2cce68: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x2cce68u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x2cce6c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2cce6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2cce70: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2cce70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2cce74: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x2cce74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2cce78: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2cce78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2cce7c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cce7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cce80: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2cce80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2cce84: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2cce84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cce88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2cce88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cce8c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2cce8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cce90: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cce90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cce94: 0xc7808244  lwc1        $f0, -0x7DBC($gp)
    ctx->pc = 0x2cce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce98: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2cce98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cce9c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cce9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ccea0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2ccea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2ccea4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ccea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ccea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ccea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cceac: 0x0  nop
    ctx->pc = 0x2cceacu;
    // NOP
    // 0x2cceb0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x2CCEB0u;
    {
        const bool branch_taken_0x2cceb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEB0u;
        // 0x2cceb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cceb0) {
            ctx->pc = 0x2CCF38u;
            goto label_2ccf38;
        }
    }
    ctx->pc = 0x2CCEB8u;
    // 0x2cceb8: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x2cceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ccebc: 0x0  nop
    ctx->pc = 0x2ccebcu;
    // NOP
label_2ccec0:
    // 0x2ccec0: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x2ccec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ccec4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2ccec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ccec8: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2ccec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ccecc: 0x46053082  mul.s       $f2, $f6, $f5
    ctx->pc = 0x2cceccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2cced0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2cced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cced4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2cced4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2cced8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2cced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccedc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccee0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2ccee0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2ccee4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ccee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ccee8: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x2ccee8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2cceec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ccef0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2ccef0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2ccef4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2ccef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ccef8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ccefc: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x2ccefcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2ccf00: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x2ccf00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ccf04: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2ccf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf08: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2ccf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ccf0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ccf0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ccf10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ccf14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ccf18: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2ccf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf1c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2ccf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ccf20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ccf20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ccf24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf28: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2ccf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ccf2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ccf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ccf30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ccf30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ccf34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ccf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccf38:
    // 0x2ccf38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF38u;
        // 0x2ccf3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCF40u;
}
